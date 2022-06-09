#include <interception_macros.h>

namespace app::methods::AttachSoundToPhysicsSystem {
IL2CPP_REGISTER_METHOD(0x006F4090, bool, get_IsSuspended, (app::AttachSoundToPhysicsSystem * this_ptr));
IL2CPP_REGISTER_METHOD(0x006F40A0, void, set_IsSuspended, (app::AttachSoundToPhysicsSystem * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x006515B0, SuspendableMask__Enum, get_Mask, (app::AttachSoundToPhysicsSystem * this_ptr));
IL2CPP_REGISTER_METHOD(0x00848260, void, set_Mask, (app::AttachSoundToPhysicsSystem * this_ptr, app::SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x002FBBC0, Transform *, get_ConnectedTransform1, (app::AttachSoundToPhysicsSystem * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBBE0, Transform *, get_ConnectedTransform2, (app::AttachSoundToPhysicsSystem * this_ptr));
IL2CPP_REGISTER_METHOD(0x00848270, bool, IsAttached, (app::AttachSoundToPhysicsSystem * this_ptr));
IL2CPP_REGISTER_METHOD(0x00848310, void, Awake, (app::AttachSoundToPhysicsSystem * this_ptr));
IL2CPP_REGISTER_METHOD(0x008485F0, void, PerformAttachment, (app::AttachSoundToPhysicsSystem * this_ptr));
IL2CPP_REGISTER_METHOD(0x00848F60, void, OnUpdatePhysics, (app::AttachSoundToPhysicsSystem * this_ptr, float dt));
IL2CPP_REGISTER_METHOD(0x003FDD60, float, CalculateRtpcValue, (app::AttachSoundToPhysicsSystem * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04778978, AttachSoundToPhysicsSystem_CalculateRtpcValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00849480, float, GetStretchSpeed, (app::AttachSoundToPhysicsSystem * this_ptr));
IL2CPP_REGISTER_METHOD(0x00849490, float, GetRotationSpeed, (app::AttachSoundToPhysicsSystem * this_ptr));
IL2CPP_REGISTER_METHOD(0x008494A0, void, __ctor, (app::AttachSoundToPhysicsSystem * this_ptr));
}
