#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::AbilityDebugMenuItems {
    IL2CPP_REGISTER_METHOD(0x004AD420, void, EnableAbilities, (app::List_1_AbilityType_ * abilities))
    IL2CPP_REGISTER_METHOD(0x004AD5E0, void, SpiritFlameRapidFireUpgradeSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004AD6D0, void, SpiritFlameSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004AD8C0, bool, SpiritFlameGetter, ())
    IL2CPP_REGISTER_METHOD(0x004AD9A0, void, ChargeFlameSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004ADAB0, bool, ChargeFlameGetter, ())
    IL2CPP_REGISTER_METHOD(0x004ADB90, void, ClimbSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004ADCA0, bool, ClimbGetter, ())
    IL2CPP_REGISTER_METHOD(0x004ADDB0, void, ChargeJumpSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004ADEC0, bool, ChargeJumpGetter, ())
    IL2CPP_REGISTER_METHOD(0x004ADFD0, void, StompSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004AE0E0, bool, StompGetter, ())
    IL2CPP_REGISTER_METHOD(0x004AE1F0, void, WallJumpSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004AE300, bool, WallJumpGetter, ())
    IL2CPP_REGISTER_METHOD(0x004AE410, void, DoubleJumpSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004AE520, bool, DoubleJumpGetter, ())
    IL2CPP_REGISTER_METHOD(0x004AE630, bool, BashGetter, ())
    IL2CPP_REGISTER_METHOD(0x004AE740, void, BashSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004AE850, bool, GlideGetter, ())
    IL2CPP_REGISTER_METHOD(0x004AE940, void, GlideSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004AEA50, bool, FeatherFlapGetter, ())
    IL2CPP_REGISTER_METHOD(0x004AEB40, void, FeatherFlapSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004AEC50, void, DashSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004AED60, bool, DashGetter, ())
    IL2CPP_REGISTER_METHOD(0x004AEE40, void, GrenadeSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004AEF50, bool, GrenadeGetter, ())
    IL2CPP_REGISTER_METHOD(0x004AF030, void, SlashSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004AF140, bool, SlashGetter, ())
    IL2CPP_REGISTER_METHOD(0x004AF220, void, HeavySlashSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004AF330, bool, HeavySlashGetter, ())
    IL2CPP_REGISTER_METHOD(0x004AF410, void, LeashSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004AF520, bool, LeashGetter, ())
    IL2CPP_REGISTER_METHOD(0x004AF600, void, BounceSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004AF710, bool, BounceGetter, ())
    IL2CPP_REGISTER_METHOD(0x004AF7F0, void, DashNewSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004AF900, bool, DashNewGetter, ())
    IL2CPP_REGISTER_METHOD(0x004AF9E0, void, DrillSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004AFAF0, bool, DrillGetter, ())
    IL2CPP_REGISTER_METHOD(0x004AFBD0, bool, WaterBreathGetter, ())
    IL2CPP_REGISTER_METHOD(0x004AFCB0, void, WaterBreathSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004AFDC0, bool, MagnetGetter, ())
    IL2CPP_REGISTER_METHOD(0x004AFEA0, void, MagnetSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004AFFB0, bool, UltraMagnetGetter, ())
    IL2CPP_REGISTER_METHOD(0x004B0090, void, UltraMagnetSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004B01A0, bool, RapidFireGetter, ())
    IL2CPP_REGISTER_METHOD(0x004B0280, void, RapidFireSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004B0390, bool, SoulEfficiencyGetter, ())
    IL2CPP_REGISTER_METHOD(0x004B0470, void, SoulEfficiencySetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004B0580, bool, ChargeFlameBlastGetter, ())
    IL2CPP_REGISTER_METHOD(0x004B0660, void, ChargeFlameBlastSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004B0770, bool, DoubleJumpUpgradeGetter, ())
    IL2CPP_REGISTER_METHOD(0x004B0850, void, DoubleJumpUpgradeSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004B0960, bool, BashUpgradeGetter, ())
    IL2CPP_REGISTER_METHOD(0x004B0A40, void, BashUpgradeSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004B0B50, bool, UltraDefenseGetter, ())
    IL2CPP_REGISTER_METHOD(0x004B0C30, void, UltraDefenseSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004B0D40, bool, HealthEfficiencyGetter, ())
    IL2CPP_REGISTER_METHOD(0x004B0E20, void, HealthEfficiencySetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004B0F30, bool, SenseGetter, ())
    IL2CPP_REGISTER_METHOD(0x004B1010, void, SenseSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004B1120, bool, StompUpgradeGetter, ())
    IL2CPP_REGISTER_METHOD(0x004B1200, void, StompUpgradeSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004B1310, bool, QuickFlameGetter, ())
    IL2CPP_REGISTER_METHOD(0x004B13F0, void, QuickFlameSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004B1500, bool, SparkFlameGetter, ())
    IL2CPP_REGISTER_METHOD(0x004B15E0, void, SparkFlameSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004B16F0, bool, SplitFlameUpgradeGetter, ())
    IL2CPP_REGISTER_METHOD(0x004B17D0, void, SplitFlameUpgradeSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004B18E0, bool, CinderFlameGetter, ())
    IL2CPP_REGISTER_METHOD(0x004B19C0, void, CinderFlameSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004B1AD0, bool, UltraSplitFlameGetter, ())
    IL2CPP_REGISTER_METHOD(0x004B1BB0, void, UltraSplitFlameSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004B1CC0, bool, GrenadeUpgradeGetter, ())
    IL2CPP_REGISTER_METHOD(0x004B1DA0, void, GrenadeUpgradeSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004B1E90, bool, ChargeDashGetter, ())
    IL2CPP_REGISTER_METHOD(0x004B1F70, void, ChargeDashSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004B2060, bool, AirDashGetter, ())
    IL2CPP_REGISTER_METHOD(0x004B2140, void, AirDashSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004B2230, bool, GrenadeEfficiencyGetter, ())
    IL2CPP_REGISTER_METHOD(0x004B2310, void, GrenadeEfficiencySetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004B2400, bool, MapMarkersGetter, ())
    IL2CPP_REGISTER_METHOD(0x004B24E0, void, MapMarkersSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004B25F0, bool, EnergyEfficiencyGetter, ())
    IL2CPP_REGISTER_METHOD(0x004B26D0, void, EnergyEfficiencySetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004B27E0, bool, HealthMarkersGetter, ())
    IL2CPP_REGISTER_METHOD(0x004B28C0, void, HealthMarkersSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004B29D0, bool, EnergyMarkersGetter, ())
    IL2CPP_REGISTER_METHOD(0x004B2AB0, void, EnergyMarkersSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004B2BC0, bool, AbilityMarkersGetter, ())
    IL2CPP_REGISTER_METHOD(0x004B2CA0, void, AbilityMarkersSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004B2DB0, bool, RekindleGetter, ())
    IL2CPP_REGISTER_METHOD(0x004B2E90, void, RekindleSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004B2FA0, bool, RegroupGetter, ())
    IL2CPP_REGISTER_METHOD(0x004B3080, void, RegroupSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004B3190, bool, ChargeFlameEfficiencyGetter, ())
    IL2CPP_REGISTER_METHOD(0x004B3270, void, ChargeFlameEfficiencySetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004B3380, bool, SoulFlameEfficiencyGetter, ())
    IL2CPP_REGISTER_METHOD(0x004B3460, void, SoulFlameEfficiencySetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004B3570, bool, UltraSoulFlameGetter, ())
    IL2CPP_REGISTER_METHOD(0x004B3650, void, UltraSoulFlameSetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x004B3760, bool, SpiritMagnetGetter, ())
    IL2CPP_REGISTER_METHOD(0x004B3840, void, SpiritMagnetSetter, (bool new_value))
}
