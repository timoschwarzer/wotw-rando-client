#include <interception_macros.h>

namespace app::methods::TriangleNet::Topology::Otri {
IL2CPP_REGISTER_METHOD(0x00107C00, Triangle *, get_Triangle, (Otri__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010FD20, void, set_Triangle, (Otri__Boxed * __this, Triangle * value));
IL2CPP_REGISTER_METHOD(0x0021F6B0, String *, ToString, (Otri__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0021F7B0, void, Sym, (Otri__Boxed * __this, Otri * ot));
IL2CPP_REGISTER_METHOD(0x0021F7C0, void, Sym, (Otri__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0021F7D0, void, Lnext, (Otri__Boxed * __this, Otri * ot));
IL2CPP_REGISTER_METHOD(0x0021F7E0, void, Lnext, (Otri__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0021F7F0, void, Lprev, (Otri__Boxed * __this, Otri * ot));
IL2CPP_REGISTER_METHOD(0x0021F800, void, Lprev, (Otri__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0021F810, void, Onext, (Otri__Boxed * __this, Otri * ot));
IL2CPP_REGISTER_METHOD(0x0021F820, void, Onext, (Otri__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0021F830, void, Oprev, (Otri__Boxed * __this, Otri * ot));
IL2CPP_REGISTER_METHOD(0x0021F840, void, Oprev, (Otri__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0021F850, void, Dnext, (Otri__Boxed * __this, Otri * ot));
IL2CPP_REGISTER_METHOD(0x0021F860, void, Dnext, (Otri__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0021F870, void, Dprev, (Otri__Boxed * __this, Otri * ot));
IL2CPP_REGISTER_METHOD(0x0021F880, void, Dprev, (Otri__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0021F890, void, Rnext, (Otri__Boxed * __this, Otri * ot));
IL2CPP_REGISTER_METHOD(0x0021F8A0, void, Rnext, (Otri__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0021F8B0, void, Rprev, (Otri__Boxed * __this, Otri * ot));
IL2CPP_REGISTER_METHOD(0x0021F8C0, void, Rprev, (Otri__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0021F8D0, Vertex *, Org, (Otri__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0021F8E0, Vertex *, Dest, (Otri__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0021F440, Vertex *, Apex, (Otri__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0021F8F0, void, Copy, (Otri__Boxed * __this, Otri * ot));
IL2CPP_REGISTER_METHOD(0x0021F620, bool, Equals, (Otri__Boxed * __this, Otri ot));
IL2CPP_REGISTER_METHOD(0x0021F900, void, SetOrg, (Otri__Boxed * __this, Vertex * v));
IL2CPP_REGISTER_METHOD(0x0021F910, void, SetDest, (Otri__Boxed * __this, Vertex * v));
IL2CPP_REGISTER_METHOD(0x0021F4E0, void, SetApex, (Otri__Boxed * __this, Vertex * v));
IL2CPP_REGISTER_METHOD(0x0021F920, void, Bond, (Otri__Boxed * __this, Otri * ot));
IL2CPP_REGISTER_METHOD(0x0021F930, void, Dissolve, (Otri__Boxed * __this, Triangle * dummy));
IL2CPP_REGISTER_METHOD(0x0021F940, void, Infect, (Otri__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0021F960, void, Uninfect, (Otri__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0021F980, bool, IsInfected, (Otri__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0021F320, void, Pivot, (Otri__Boxed * __this, Osub * os));
IL2CPP_REGISTER_METHOD(0x0021F9A0, void, SegBond, (Otri__Boxed * __this, Osub * os));
IL2CPP_REGISTER_METHOD(0x0021F640, void, SegDissolve, (Otri__Boxed * __this, SubSegment * dummy));
IL2CPP_REGISTER_METHOD(0x02AA2860, bool, IsDead, (Triangle * tria));
IL2CPP_REGISTER_METHOD(0x02AA4980, void, Kill, (Triangle * tri));
IL2CPP_REGISTER_METHOD(0x02AA49F0, void, __cctor, ());
}
