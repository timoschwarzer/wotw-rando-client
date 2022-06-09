#include <interception_macros.h>

namespace app::methods::MortarEntity_AimVeloCache_EntityParams {
IL2CPP_REGISTER_METHOD(0x014797A0, void, __ctor, (app::MortarEntity_AimVeloCache_EntityParams * this_ptr, app::MortarEntity * entity));
IL2CPP_REGISTER_METHOD(0x01479CA0, MortarPlaceholder *, get_Placeholder, (app::MortarEntity_AimVeloCache_EntityParams * this_ptr));
IL2CPP_REGISTER_METHOD(0x0064EB90, Vector3, get_EntityPos, (app::MortarEntity_AimVeloCache_EntityParams * this_ptr));
IL2CPP_REGISTER_METHOD(0x00446940, Vector3, get_EntityUp, (app::MortarEntity_AimVeloCache_EntityParams * this_ptr));
IL2CPP_REGISTER_METHOD(0x01479D70, Vector2, get_AvatarLookDirection, (app::MortarEntity_AimVeloCache_EntityParams * this_ptr));
IL2CPP_REGISTER_METHOD(0x01479DB0, float, get_PlaceholderFacing, (app::MortarEntity_AimVeloCache_EntityParams * this_ptr));
IL2CPP_REGISTER_METHOD(0x01479EA0, MortarSpitAttackSettings *, get_SpitAttackSettings, (app::MortarEntity_AimVeloCache_EntityParams * this_ptr));
IL2CPP_REGISTER_METHOD(0x01479EC0, float, get_MinSpitRange, (app::MortarEntity_AimVeloCache_EntityParams * this_ptr));
IL2CPP_REGISTER_METHOD(0x01479EF0, float, get_MaxSpitRange, (app::MortarEntity_AimVeloCache_EntityParams * this_ptr));
IL2CPP_REGISTER_METHOD(0x01479F40, bool, get_CanTurn, (app::MortarEntity_AimVeloCache_EntityParams * this_ptr));
IL2CPP_REGISTER_METHOD(0x01479F70, float, AirTimeFromTargetDistance, (app::MortarEntity_AimVeloCache_EntityParams * this_ptr, float target_distance));
IL2CPP_REGISTER_METHOD(0x01479FD0, int32_t, CalculateSpitOriginIndexForTarget, (app::MortarEntity_AimVeloCache_EntityParams * this_ptr, app::Vector3 target));
IL2CPP_REGISTER_METHOD(0x0147A160, Vector3, GetSpitOriginFromIndex, (app::MortarEntity_AimVeloCache_EntityParams * this_ptr, int32_t spit_origin_index));
IL2CPP_REGISTER_METHOD(0x0147A4D0, Vector3, CalculateSpitOriginForTarget, (app::MortarEntity_AimVeloCache_EntityParams * this_ptr, app::Vector3 target));
}
