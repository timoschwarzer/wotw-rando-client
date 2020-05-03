import scala.util.parsing.input.Positional
import scala.collection.mutable
import scala.io.Source
import scala.util.Random
import scala.util.Try
package SeedGenerator {

  //  these are fine
  object implicits {
    implicit class RegexOps(sc: StringContext) {
      def r = new util.matching.Regex(sc.parts.mkString, sc.parts.tail.map(_ => "x"): _*)
    }
    // really, they're fine
    implicit def itemToPart(item: Item): Either[Item, Either[FlagState, Node]] = Left(item)
    implicit def flagToPart(flag: FlagState): Either[Item, Either[FlagState, Node]] = Right(Left(flag))
    implicit def nodeToPart(node: Node): Either[Item, Either[FlagState, Node]] = Right(Right(node))
    implicit val r = new Random()
  }
  import java.io.{BufferedWriter, File, FileWriter}

  import implicits._
  trait Requirement {
    def metBy(state: GameState): Boolean
    def remaining(state: GameState = GameState.Empty): Seq[GameState]
    def cheapestRemaining(state: GameState = GameState.Empty): GameState = remaining(state)
      .minByOption(_.cost)
      .getOrElse(GameState.Empty)

    def and(that: Requirement): Requirement = AllReqs(this, that)
    def or(that: Requirement): Requirement = AnyReq(this, that)
  }

  case class StateReq(flag: String) extends Requirement {
    def metBy(state: GameState): Boolean = state.flags.contains(WorldState(flag))
    def remaining(state: GameState) = Seq(if (metBy(state)) GameState.Empty else GameState.mk(WorldState(flag)))
  }

  case object Free extends Requirement {
    def metBy(state: GameState) = true
    def remaining(state: GameState) = Seq(GameState.Empty)

    override def and(that: Requirement): Requirement = that
    override def or(that: Requirement): Requirement = Free
  }

  case object Invalid extends Requirement {
    def metBy(state: GameState) = false
    def remaining(state: GameState) = Seq(GameState.mk(Unobtainium))
  }

  case class SkillReq(skillCode: Int) extends Requirement {
    def metBy(state: GameState): Boolean = state.inv has Skill(skillCode)
    def remaining(state: GameState) = Seq(if (metBy(state)) GameState.Empty else GameState.mk(Skill(skillCode)))
    override def toString = s"${Skill.names.getOrElse(skillCode, s"Unknown Skill $skillCode")}"
  }



  case class OreReq(oreCount: Int) extends Requirement {
    def metBy(state: GameState): Boolean = state.inv(Ore()) >= oreCount
    def remaining(state: GameState) = Seq(GameState(new Inv(Ore() -> Math.max(0, oreCount - state.inv(Ore())))))
  }

  case class EnergyReq(count: Int) extends Requirement {
    def metBy(state: GameState): Boolean = state.inv(Energy()) >= count
    def remaining(state: GameState) = Seq(GameState(new Inv(Energy() -> Math.max(0, count - state.inv(Energy())))))
  }

  case class HealthReq(damage: Int) extends Requirement {
    def metBy(state: GameState): Boolean = state.inv(Health()) * 10 >= damage
    def remaining(state: GameState) = Seq(GameState(new Inv(Health() -> Math.max(0, Math.ceil((damage * 10 - state.inv(Health()))/10).intValue()))))
  }


  case class TeleReq(teleCode: Int) extends Requirement {
    def metBy(state: GameState): Boolean = state.inv has Teleporter(teleCode)
    def remaining(state: GameState) = Seq(if (metBy(state)) GameState.Empty else GameState.mk(Teleporter(teleCode)))
  }


  class AnyReq(val reqs: Requirement*) extends Requirement {
    override def equals(obj: Any): Boolean = obj match {
      case r:AnyReq => r.reqs.toSet == reqs.toSet
      case _ => false
    }

    override def or(that: Requirement): Requirement = that match {
      case r: AnyReq => AnyReq(r.reqs ++ reqs :_*)
      case r => AnyReq(reqs :+ r :_*)
    }
    override def and(that: Requirement): Requirement = that match {
      case r: AnyReq if r.reqs.toSet == reqs.toSet => r
      case r => AllReqs(this, r)
    }
    override def toString: String = s"(${reqs.mkString(" || ")})"
    override def metBy(state: GameState): Boolean = reqs.exists(_.metBy(state))
    def remaining(state: GameState): Seq[GameState] = reqs flatMap (_ remaining state)
  }

  object AnyReq {
    def apply(reqsRaw: Requirement*) = {
      val reqs: Seq[Requirement] = reqsRaw.filter(_.cheapestRemaining().cost < Double.PositiveInfinity).toSet.toSeq
//      if (reqs.length < reqsRaw.length) reqsRaw.collect({ case r if !reqs.contains(r) && r != Invalid => println(s"Excluding $r") })
      reqs match {
        case Nil => Invalid
        case Seq(req) => req
        case reqs if reqs.contains(Free) => Free
        case reqs if reqs.exists(_.isInstanceOf[AnyReq]) => {
          val (anys, others) = reqs.partitionMap({
            case any: AnyReq => Left(any)
            case r           => Right(r)
          })
          new AnyReq(anys.flatMap(_.reqs) ++ others: _*)
        }
        case reqs => new AnyReq(reqs: _*)
      }
    }
  }

  class AllReqs(val reqs: Requirement*) extends Requirement {
    override def equals(obj: Any): Boolean = obj match  {
      case r:AllReqs => r.reqs.toSet == reqs.toSet
      case _ => false
    }
    override def and(that: Requirement): Requirement = that match {
      case r: AllReqs => AllReqs(r.reqs ++ reqs :_*)
      case r => AllReqs(reqs :+ r :_*)
    }
    override def or (other: Requirement): Requirement = other match {
      case r:AllReqs if r.reqs.toSet == reqs.toSet => r
      case req => AnyReq(req, this)
   }
    override def toString: String = s"(${reqs.mkString(" && ")})"
    def metBy(state: GameState): Boolean = reqs.forall(_.metBy(state))
    def remaining(state: GameState): Seq[GameState] = {
      if (metBy(state))
        return Seq(GameState.Empty)
      var mergedInv = GameState.Empty
      val (orReqs, others) = reqs.partitionMap({
        case any: AnyReq => Left(any)
        case r           => Right(r)
      })
      others.foreach(req => {
        mergedInv = mergedInv + req.cheapestRemaining(mergedInv + state)
      })
      val greedy = orReqs.foldRight(mergedInv)((req, accInv) => accInv + req.cheapestRemaining(accInv + state))
      if (orReqs.length > 1)
        Seq(orReqs.flatMap(_.remaining(state)).find(sus => sus.cost < greedy.cost && orReqs.forall(_.metBy(sus))).map(_ + mergedInv).getOrElse(greedy))
      else
        Seq(greedy)
    }
  }
  object AllReqs {
    def apply(reqsRaw: Requirement*): Requirement = reqsRaw.filterNot(_ == Free).toSet.toSeq match {
      case Nil => Free
      case Seq(req) => req
      case reqs if reqs.exists(_.isInstanceOf[AllReqs]) => {
        val (alls, others) = reqs.partitionMap({
          case all: AllReqs => Left(all)
          case r            => Right(r)
        })
        new AllReqs(alls.flatMap(_.reqs) ++ others:_*)
      }
      case reqs if reqs.exists(_ == Invalid) => Invalid
      case reqs => new AllReqs(reqs:_*)
    }
  }

  case class LocData(area: String, name: String, category: String, value: String, zone: String, uberGroup: String, uberGroupId: Int, uberName: String, uberId: Int, x: Int, y: Int) {
    val code = s"$uberGroupId|$uberId"

    def info: String = uberGroupId match {
      case 1 => s"$area.$name (Shop) (Opher)"
      case 2 => s" $area.$name (Shop) (Twillen)"
      case _ => s"$area.$name  (${x},${y}) ${zone}"
    }
  }
  object LocData {
    lazy val all: Seq[LocData] = {
      val pickupReg = """^([^.]*)\.([^,]*), ?([^,]*), ?([^,]*), ?([^,]*), ?([^,]*), ?([-0-9]*), ?([^,]*), ?([-0-9]*), ?([-0-9]*), ?([-0-9]*)""".r
      val pickupsFile = Source.fromFile("loc_data.csv")
      val pickups = pickupsFile.getLines.flatMap {
        case s if s.trim == "" => None
        case s if s.trim.startsWith("--") =>
          None
        case pickupReg(area, name, zone, category, value, uberGN, ugid, uberN, uid, x, y) =>
          Some(LocData(area, name, category, value, zone, uberGN, ugid.toInt, uberN, uid.toInt, x.toInt, y.toInt))
        case line: String =>
          println(s"Couldn't parse line: $line")
          None
      }.toSeq
      pickupsFile.close()
      pickups //.filter(loc => loc.category != "Quest" && loc.value != "ShardSlot")
    }
    lazy val byName = all.map(data => (s"${data.area}.${data.name}") -> data).toMap
  }

  sealed trait NodeType
  case object AreaNode extends NodeType
  case object ItemNode extends NodeType
  case object StateNode extends NodeType

  trait Node {
    def name: String
    def reached(state: GameState, nodes: Map[String,Node] = Map()): GameState =  state + GameState.mk(this)
    def kind: NodeType
  }

  case class Connection(target: Node, req: Requirement)

  case class Placeholder(name: String, kind: NodeType = AreaNode) extends Node {
    override def reached(state: GameState, nodes: Map[String, Node] = Map()): GameState = nodes.get(name) match {
        case Some(n: Node) if n.kind == kind => n.reached(state, nodes)
        case Some(x) => println(s"Warning: ${x} was of unexpected type!"); state
        case None =>println(s"Warning: ${name} not in nodes!"); state
    }
  }

  case class Area(name: String, conns: Seq[Connection] = Seq()) extends Node {
    override val kind = AreaNode
    override def reached(state: GameState, nodes: Map[String, Node] = Map()): GameState = {
      conns.foldLeft(super.reached(state, nodes))({
        case (s, Connection(target, _)) if s.reached.contains(nodes.getOrElse(target.name, target)) => s
        case (s, Connection(target, req)) if req.metBy(s)             => target.reached(s, nodes)
        case (s, _)                                                   => s
      })
    }
  }
  object Area {
    val SPAWN = "MarshSpawn.Main"
  }

  case class ItemLoc(name: String, data: LocData) extends Node {
    override val kind = ItemNode
    override def toString: String = name // data.info
  }

  object ItemLoc {
    def mk(name: String, src: Map[String, LocData]=LocData.byName): Option[ItemLoc] = src.get(name).map(ItemLoc(name, _))
      .orElse({
        println(s"pickup $name not found in loc_data.csv!"); None
      })
  }

  case class WorldStateNode(name: String) extends Node {
    override def kind = StateNode
    override def reached(state: GameState, nodes: Map[String, Node] = Map()): GameState = state + GameState.mk(WorldState(name), this)
  }

  object Nodes {
    def areas = {
      if (_areas.isEmpty)
        populate()
      _areas
    }

    def items = {
      if (_items.isEmpty) populate()
      _items
    }

    def getReachable(inv: Inv): Set[Node] = {
      var oldFlags = Set[FlagState]()
      var state = spawn.reached(GameState(inv), areas)
      while(oldFlags != state.flags) {
        val newFlags = state.flags -- oldFlags
        oldFlags = state.flags
        state = spawn.reached(GameState(inv, oldFlags), areas)
//        println(s"rerunning with states: $newFlags")
      }
      state.reached.flatMap(node => items.get(node.name))
    }

    var _areas: Map[String, Area] = Map()
    var _items: Map[String, ItemLoc] = Map()
    var _paths: Map[String, Requirement] = Map()

    def fixAreas(areas: Map[String, Area]): Map[String, Area] = areas.values.map(area => area.name -> Area(area.name, area.conns.flatMap({
      case Connection(target: Placeholder, Invalid) if target.kind == ItemNode => None
      case Connection(target: Placeholder, reqs) if target.kind == ItemNode => ItemLoc.mk(target.name).map(Connection(_, reqs))
      case c => Some(c)
    }))).toMap

    def populate(debug: Boolean = false) = {
      AreaParser.AreasBuilder.run(print = debug) match {
        case Right(value) =>
          _areas = fixAreas(value)
          _items = _areas.flatMap(_._2.conns.collect({ case Connection(t: ItemLoc, r) if r != Invalid => t.name -> t }))
          true
        case Left(error) =>
          println(error)
          false
      }
    }
    def spawn: Area = areas("MarshSpawn.Main")
  }

  case class ItemPlacement(item: Item, loc: ItemLoc) {
    val code = loc.data.code
    def write: String = {
      val data = s"${loc.data.code}|${item.code}"
      val padding = " " * (25 - data.size)
      s"$data$padding// ${item.name} from ${loc.data.info}"
    }
  }

  case class GeneratorError(message: String) extends Error {
    override def toString: String = s"GeneratorError: $message"
  }

  case class PlacementGroup(outState: GameState, placements: Seq[ItemPlacement], i: Int)(implicit r: Random, pool: Inv) {
    def write: String = /*(" " * 25) + s"// $i, prog: ${prog.toString.replace("Inv: ","")}\n" + */placements.map(_.write).mkString("\n")
    def next() = {
      PlacementGroup.mk(outState, i + 1)
    }
  }
  object PlacementGroup {
    def mk(inState: GameState, i:Int=0)(implicit r: Random, pool: Inv) = Try {
      implicit val flagCosts: Map[FlagState, Double] = inState.flags.map(_ -> 0d).toMap
      val reachable = Nodes.getReachable(inState.inv)
      val locs = r.shuffle((reachable -- inState.reached).collect({ case n: ItemLoc => n }))
      var _fullWeight = 0d

      if(locs.isEmpty) {
        if(reachable.size == Nodes.items.size)
          throw GeneratorError("successful gen") // good code here! not bad code. nope.
        throw GeneratorError(s"no new locs (${reachable.size} out of ${Nodes.items.size} reached)")
      }

      /*def acc(st: GameState): Double = {
        if(!st.cost.isFinite || st.inv.count == 0)
          println(s"What? ${st}")
        _fullWeight += 1 / (st.inv.cost * Math.max(st.inv.count,1)); _fullWeight
      }
            val possiblePaths = Nodes.paths
              .withFilter(kv => !reachable.exists(_.name == kv._1))
              .flatMap({ case (name, req) => req.remaining(inState).map(name -> _) })
              .filter({ case (_, state) =>
                state.inv.count <= locs.size &&
                state.flags.forall(inState.flags.contains(_)) &&
                state.inv.forall(kv => pool.has(kv._1, kv._2))
              })
              .groupMapReduce(_._2)(kv => Seq(kv._1))((n1, n2) => n1 ++ n2)
              .toSeq.sortBy(_._1.cost).collect({
              case (items, met) if items.inv.nonEmpty && met.size > 1  => /*println(s"${items}->${met.size} $met");*/ (acc(items), items)
              case (items, met)=> /*println(s"${items}->${met.size} $met")*/; (0d, items)
            })
            if(possiblePaths.isEmpty)
              throw GeneratorError(s"No possible paths???")
            val limit = r.nextDouble() * _fullWeight
            val chosenPath = possiblePaths.dropWhile(_._1 < limit).headOption.getOrElse(possiblePaths.last)._2.inv
      //      println(chosenPath)
            val (shopLocs, nonShopLocs) = locs.partition(_.data.category == "Shop")
            val chosenItems = chosenPath.asSeq.map(item => {
              if (!pool.take(item))
                throw GeneratorError(s"Failed to place $item (was not in $pool)")
              item
            })*/
      val (shopLocs, nonShopLocs) = locs.partition(_.data.category == "Shop")
      val RETRIES = 30
      def getItems(n: Int = RETRIES): Seq[Item] = {
        if(n < 0) {
          println(s"$n, 0, ${pool.toSeq.filter(_._2 > 0)}, ${Nodes.items.values.filterNot(loc => reachable.exists(_.name == loc.name))}")
          throw GeneratorError("Game over :C")
        }
        val fudgeFactor = Math.min(locs.size, n match {
          case i if i > 20 => 0
          case i if i > 15 => 1
          case i if i > 10 => 2
          case i if i > 5 => 3
          case i => 7 - i
        })
        val items = (0 until locs.size).map(m => {
          val maybeItem = // this is valid scala so technically i've done nothing wrong
            if (m < shopLocs.size + fudgeFactor) {
              if(n < 15)
                pool.popProbableProgression.orElse(pool.popSellable)
              else
                pool.popSellable
            } else
              pool.popRand
          if (maybeItem.isEmpty)
            {
              println(s"$n, $m, ${pool.toSeq.filter(_._2 > 0)}, ${Nodes.items.values.filterNot(loc => reachable.exists(_.name == loc.name))}")
              throw GeneratorError(s"Failed to get random item from ${pool.toSeq.filter(_._2 > 0)}")
            }
          maybeItem.get
        })
        val newReached = Nodes.getReachable(inState.inv + Inv.mk(items:_*))
        if(newReached.size > reachable.size + (if(n > 15) 1 else 0) || newReached.size == Nodes.items.size) {
//          println(s"${newReached.size - reachable.size} new locs. Took ${RETRIES-n} tries. pool: ${pool.count}/${ItemPool.ITEM_COUNT} placed: ${inState.reached.collect({case i: ItemLoc => i}).size + locs.size}/${ItemPool.ITEM_COUNT} ")
          items
        } else {
          items.foreach(pool.add(_)) // put em back :upside_clown:
          getItems(n-1)
        }
      }

      val placedItems = getItems()

      val (shopIter, nonShopIter) = (shopLocs.iterator, nonShopLocs.iterator)

      val placements = r.shuffle(placedItems).map({
          case s: Sellable if shopIter.hasNext => ItemPlacement(s, shopIter.next())
          case p if nonShopIter.hasNext => ItemPlacement(p, nonShopIter.next())
          case i => throw GeneratorError(s"Placement of $i failed; one of the iterators ran out! ${shopIter.toSeq}  ${nonShopIter.toSeq}" +
            s". Was placing $placedItems into ${locs.map(_.name)}")
        })
      val outState = inState + new GameState(Inv.Empty, Set(), reachable)
      placedItems.foreach(i => outState.inv.add(i))
      PlacementGroup(outState, placements, i)
    }.toEither.left.map(
      {
        case e: GeneratorError => e
        case t: Throwable => val e = GeneratorError(t.getMessage)
          e.addSuppressed(t)
          e.setStackTrace(t.getStackTrace)
          e
      })
  }

  object Runner {
    val setSeed = r.setSeed _
    val DEFAULT_INV = GameState.mk(Skill(100), WorldState("Weapon"), WorldState("EnemyObstacle"))
    def apply() = {
      implicit val pool = ItemPool.build()
      recurse()
    }
    def recurse(grps: Seq[PlacementGroup] = Seq())(implicit pool: Inv): (Seq[PlacementGroup], Option[GeneratorError]) = {
      grps.lastOption.map(_.next()).getOrElse({
        PlacementGroup.mk(DEFAULT_INV)
      }) match {
        case Right(next) => recurse(grps :+ next)
        case Left(GeneratorError("successful gen")) => (grps, None)
        case Left(error) =>(grps, Some(error))
      }
    }
    def run(n: Int = 0, name_base: String = "seed", outputFolder: String = ""): Unit = {
      // Creating a file
      val dirPath = if (outputFolder != "") s"seeds/${outputFolder}" else "seeds"
      val dir = new File(dirPath)
      if (!dir.exists())
        dir.mkdirs()
      val file = new File(s"${dirPath}/${name_base}_${n}.wotwr")
      val bw = new BufferedWriter(new FileWriter(file))
      val (grps, err) = apply()
      err.map(e => println(s"$n: $e"))
      grps.map(plcmnts => bw.write(plcmnts.write+"\n"))
      bw.close()
    }
}

case class Distro(sl: Int = 0, hc: Int = 0, ec: Int = 0, ore: Int = 0, sks: Int = 0)

object Tracking {
  var areas: mutable.Map[String, Distro] = mutable.Map()
  def incAreas(item: Item, location: LocData): Unit = {
    if (areas == null)
      areas = mutable.Map()
    val cur = areas.getOrElse(location.zone, Distro())
    item match {
      case _: SpiritLight => areas(location.zone) = Distro(cur.sl + 1, cur.hc, cur.ec, cur.ore, cur.sks)
      case _: Health => areas(location.zone) = Distro(cur.sl, cur.hc + 1, cur.ec, cur.ore, cur.sks)
      case _: Energy => areas(location.zone) = Distro(cur.sl, cur.hc, cur.ec + 1, cur.ore, cur.sks)
      case _: Ore => areas(location.zone) = Distro(cur.sl, cur.hc, cur.ec, cur.ore + 1, cur.sks)
      case _: Skill => areas(location.zone) = Distro(cur.sl, cur.hc, cur.ec, cur.ore + 1, cur.sks + 1)
      case _ => None
    }
  }
}
object ItemPool {
  lazy val ITEM_COUNT: Int = 340
  def build(size: Int = ITEM_COUNT)(implicit r: Random) = {
    val pool = new Inv(Health() -> 24, Energy() -> 24, Ore() -> 39, ShardSlot() -> 5) +
      Inv.mk(Shard.poolItems:_*) + Inv.mk(Skill.poolItems:_*) + Inv.mk(Teleporter.poolItems:_*)
    while(pool.count < size) pool.add(SpiritLight(r.between(50, 150)))
    pool
  }
}



/*    def run(n: Int = 0, name_base: String = "seed", outputFolder: String = ""): Unit = {
      // Creating a file
      val itemPool = getItemPool()

      var locs = itemLocs
      while (locs.size > itemPool.count) itemPool.add(SpiritLight(Random.between(50, 150)))
      val playerState = GameState.Empty
      val dirPath = if (outputFolder != "") s"seeds/${outputFolder}" else "seeds"
      val dir = new File(dirPath)
      if (!dir.exists())
        dir.mkdirs()
      val file = new File(s"${dirPath}/${name_base}_${n}.wotwr")
      val bw = new BufferedWriter(new FileWriter(file))
      var balanceAreas = Seq[LocData]()
      var balanceItems = Seq[Item]()
      var totalSpiritLight = 0

      def assign(item: Item, loc: LocData): Unit = item match {
        case _: Skill => assignNow(item, loc)
        case _: Teleporter => assignNow(item, loc)
        case SpiritLight(count) =>
          totalSpiritLight += count
          assignLater(item, loc)
        case _ => assignLater(item, loc)
      }

      def assignLater(item: Item, loc: LocData): Unit = {
        balanceAreas = balanceAreas ++ Seq(loc)
        balanceItems = balanceItems ++ Seq(item)
      }

      def itsLater = for {(item, area) <- Random.shuffle(balanceItems) zip Random.shuffle(balanceAreas)} assignNow(item, area)

      def write(item: Item, loc: LocData): Unit = {
        val data = s"${loc.code}|${item.code}"
        val padding = " " * (20 - data.size)
        bw.write(s"$data$padding// ${item.name} from ${loc.info} \n")
      }

      def assignNow(item: Item, loc: LocData): Unit = {
        incAreas(item, loc)
        write(item, loc)
      }

      def randItem = itemPool.popRand().map({ a => playerState.inv.add(a); a }).getOrElse({
        println("Had to pull extra spirit light")
        SpiritLight(Random.between(50, 200))
      })

      def randShop = itemPool.popSellable().map({ a => playerState.inv.add(a); a }).getOrElse({
        val stolen = balanceItems.collectFirst({ case i: Sellable => i })
        stolen match {
          case Some(s: Sellable) =>
            balanceItems = balanceItems.filterNot(_ == s) ++ Seq(randItem)
            if (balanceItems.size < balanceAreas.size)
              balanceItems = balanceItems ++ (0 until balanceAreas.size - balanceItems.size).map(_ => s)
            if (balanceItems.size != balanceAreas.size)
              println(s"${file.getName}: balance mismatch!!! took $s from balanceItems (size ${balanceItems.size} vs BalanceAreas size: ${balanceAreas.size}")
            s
          case None =>
            println(s"${file.getName}: Had to pull extra sellable! items: ${itemPool.filter({ case (_, c: Int) => c > 0 })} locs: $locs")
            Health()
        }
      })
          while (locs.nonEmpty) {
          var reachables = locs.filter(_.reqs metBy playerState)
          if (reachables.isEmpty) {
            println(s"${file.getName}: Empty reachable! items: ${itemPool.filter({case (_, c: Int) => c > 0})} locs: $locs")
            bw.close()
            file.delete()
            return
          }
          if (reachables.size < 5 && reachables.size < locs.size) {
            maybeRand(locs.map(_.reqs.cheapestRemaining(playerState)).filter(_.count < reachables.size)) match {
              case Some(items) => items.foreach({
                case (item: Sellable, 1) if reachables.exists((i: LocData) => i.category == "Shop") =>
                    val loc = maybeRand(reachables.filter(_.category == "Shop")).get
                    playerState.add(item, 1)
                    itemPool.take(item, 1)
                    locs = locs.filterNot(_ == loc)
                    reachables = reachables.filterNot(_ == loc)
                    assign(item, loc)
                case (item, 1) if reachables.exists((i: LocData) => i.category != "Shop") =>
                    playerState.add(item, 1)
                    itemPool.take(item, 1)
                    val loc = maybeRand(reachables.filter(_.category != "Shop")).get
                    locs = locs.filterNot(_ == loc)
                    reachables = reachables.filterNot(_ == loc)
                    assign(item, loc)
                case (i: Item, 1) =>
                  println(s"${file.getName()}: $i couldn't be placed in  ${reachables.map(_.category)}, deleting...")
                  bw.close()
                  file.delete()
                  return

                case (_: Item, 0) =>
              })
              case None =>
                println(s"Aaaa: ${locs.map(_.reqs.cheapestRemaining(playerState))}")
            }
          }
          maybeRand(reachables) match {
            case Some(loc: LocData) if loc.category == "Shop" =>
              locs = locs.filterNot(_ == loc)
              reachables = reachables.filterNot(_ == loc)

              assignNow(randShop, loc)
            case Some(loc: LocData) => {
              locs = locs.filterNot(_ == loc)
              reachables = reachables.filterNot(_ == loc)
              assign(randItem, loc)
            }
          }
        }
        itsLater
        if(outputFolder.isBlank) {
          println(totalSpiritLight)
        }
      bw.close()
    }*/
}