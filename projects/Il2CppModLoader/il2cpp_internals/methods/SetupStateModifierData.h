#include <interception_macros.h>

namespace app::methods::SetupStateModifierData {
IL2CPP_REGISTER_METHOD(0x002FA000, void, Apply, (app::SetupStateModifierData * this_ptr, app::MoonReference_1_UnityEngine_GameObject_ * target, app::UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTargetChange, (app::SetupStateModifierData * this_ptr, app::GameObject * old_target, app::GameObject * new_target));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CaptureCurrentTargetState, (app::SetupStateModifierData * this_ptr, app::GameObject * target));
IL2CPP_REGISTER_METHOD(0x00529FF0, SetupStateModifierDataType__Enum, get_ModifierDataClassID, (app::SetupStateModifierData * this_ptr));
IL2CPP_REGISTER_METHOD(0x03146080, String *, ToString, (app::SetupStateModifierData * this_ptr));
IL2CPP_REGISTER_METHOD(0x031460B0, Dictionary_2_System_Int32_System_Type_ *, GetIdToTypeMap, (app::SetupStateModifierData * this_ptr));
IL2CPP_REGISTER_METHOD(0x031463B0, void, CopyDataFrom, (app::SetupStateModifierData * this_ptr, app::SetupStateModifierData * other));
IL2CPP_REGISTER_METHOD(0x03146400, bool, HasType, (app::SetupStateModifierData * this_ptr, app::Type * type));
IL2CPP_REGISTER_METHOD(0x031466A0, void, __ctor, (app::SetupStateModifierData * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, IMoonTypeResolver *, GetResolverForType_1, (app::SetupStateModifierData * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, IMoonTypeResolver *, GetResolverForType_2, (app::SetupStateModifierData * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, IMoonTypeResolver *, GetResolverForType_3, (app::SetupStateModifierData * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, IMoonTypeResolver *, GetResolverForType_4, (app::SetupStateModifierData * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, IMoonTypeResolver *, GetResolverForType_5, (app::SetupStateModifierData * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, IMoonTypeResolver *, GetResolverForType_6, (app::SetupStateModifierData * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, IMoonTypeResolver *, GetResolverForType_7, (app::SetupStateModifierData * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, IMoonTypeResolver *, GetResolverForType_8, (app::SetupStateModifierData * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, IMoonTypeResolver *, GetResolverForType_9, (app::SetupStateModifierData * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, IMoonTypeResolver *, GetResolverForType_10, (app::SetupStateModifierData * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, IMoonTypeResolver *, GetResolverForType_11, (app::SetupStateModifierData * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, IMoonTypeResolver *, GetResolverForType_12, (app::SetupStateModifierData * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, IMoonTypeResolver *, GetResolverForType_13, (app::SetupStateModifierData * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, IMoonTypeResolver *, GetResolverForType_14, (app::SetupStateModifierData * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, IMoonTypeResolver *, GetResolverForType_15, (app::SetupStateModifierData * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, IMoonTypeResolver *, GetResolverForType_16, (app::SetupStateModifierData * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, IMoonTypeResolver *, GetResolverForType_17, (app::SetupStateModifierData * this_ptr));
}
