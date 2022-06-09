#include <interception_macros.h>

namespace app::methods::CharacterStatePuppet {
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_UniqueRecordingId, (app::CharacterStatePuppet * this_ptr));
IL2CPP_REGISTER_METHOD(0x01315BF0, bool, get_IsRecording, (app::CharacterStatePuppet * this_ptr));
IL2CPP_REGISTER_METHOD(0x01315C10, MoonAnimator *, get_SeinAnimator, (app::CharacterStatePuppet * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC60, IPuppet *, get_PuppetMaster, (app::CharacterStatePuppet * this_ptr));
IL2CPP_REGISTER_METHOD(0x01315CA0, void, OnInitializeLivePuppetMaster, (app::CharacterStatePuppet * this_ptr, app::IPuppet * puppet_master));
IL2CPP_REGISTER_METHOD(0x01315CD0, void, OnInitializeGhostPuppetMaster, (app::CharacterStatePuppet * this_ptr, app::GhostPlayer * player));
IL2CPP_REGISTER_METHOD(0x01316100, void, OnPoolDespawned, (app::CharacterStatePuppet * this_ptr));
IL2CPP_REGISTER_METHOD(0x01316130, void, __ctor, (app::CharacterStatePuppet * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC40, IMoonTypeResolver *, GetResolverForType_1, (app::CharacterStatePuppet * this_ptr));
IL2CPP_REGISTER_METHOD(0x01547B40, void, RecordValue, (app::CharacterStatePuppet * this_ptr, app::Object * value));
IL2CPP_REGISTER_METHODINFO(0x0475FA58, CharacterStatePuppet_RecordValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FBC40, IMoonTypeResolver *, GetResolverForType_2, (app::CharacterStatePuppet * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC40, IMoonTypeResolver *, GetResolverForType_3, (app::CharacterStatePuppet * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC40, IMoonTypeResolver *, GetResolverForType_4, (app::CharacterStatePuppet * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC40, IMoonTypeResolver *, GetResolverForType_5, (app::CharacterStatePuppet * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC40, IMoonTypeResolver *, GetResolverForType_6, (app::CharacterStatePuppet * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC40, IMoonTypeResolver *, GetResolverForType_7, (app::CharacterStatePuppet * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC40, IMoonTypeResolver *, GetResolverForType_8, (app::CharacterStatePuppet * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC40, IMoonTypeResolver *, GetResolverForType_9, (app::CharacterStatePuppet * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC40, IMoonTypeResolver *, GetResolverForType_10, (app::CharacterStatePuppet * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC40, IMoonTypeResolver *, GetResolverForType_11, (app::CharacterStatePuppet * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC40, IMoonTypeResolver *, GetResolverForType_12, (app::CharacterStatePuppet * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC40, IMoonTypeResolver *, GetResolverForType_13, (app::CharacterStatePuppet * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC40, IMoonTypeResolver *, GetResolverForType_14, (app::CharacterStatePuppet * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC40, IMoonTypeResolver *, GetResolverForType_15, (app::CharacterStatePuppet * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC40, IMoonTypeResolver *, GetResolverForType_16, (app::CharacterStatePuppet * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC40, IMoonTypeResolver *, GetResolverForType_17, (app::CharacterStatePuppet * this_ptr));
}
