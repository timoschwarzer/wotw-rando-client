#include <interception_macros.h>

namespace app::methods::Moon::SerializedByteUberState {
IL2CPP_REGISTER_METHOD(0x002FB930, UberID *, get_StateID, (app::SerializedByteUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417920, int64_t, get_Size, (app::SerializedByteUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB990, IUberStateGroup *, get_UberStateGroup, (app::SerializedByteUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B65990, UberID *, get_GroupID, (app::SerializedByteUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B65A80, uint8_t, get_Value, (app::SerializedByteUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B65BD0, void, set_Value, (app::SerializedByteUberState * this_ptr, uint8_t value));
IL2CPP_REGISTER_METHOD(0x01B65CA0, float, get_GenericValue, (app::SerializedByteUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B65CC0, void, set_GenericValue, (app::SerializedByteUberState * this_ptr, float value));
IL2CPP_REGISTER_METHOD(0x002FBB40, Nullable_1_Single_, get_VolitileGenericOverrideValue, (app::SerializedByteUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_VolitileGenericOverrideValue, (app::SerializedByteUberState * this_ptr, app::Nullable_1_Single_ value));
IL2CPP_REGISTER_METHOD(0x00E257C0, NamedValue_1_System_Byte___Array *, get_Options, (app::SerializedByteUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x004F4CE0, uint8_t, get_DefaultByteValue, (app::SerializedByteUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_DefaultByteValue, (app::SerializedByteUberState * this_ptr, uint8_t value));
IL2CPP_REGISTER_METHOD(0x00BAB250, String *, get_Name, (app::SerializedByteUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B65CD0, void, Save, (app::SerializedByteUberState * this_ptr, app::UberStateArchive * archive, app::Object * state));
IL2CPP_REGISTER_METHOD(0x01B65D90, Object *, Load, (app::SerializedByteUberState * this_ptr, app::UberStateArchive * archive, int32_t store_version));
IL2CPP_REGISTER_METHOD(0x01B65DA0, Object *, Read, (app::UberStateArchive * archive, int32_t store_version));
IL2CPP_REGISTER_METHOD(0x00910BD0, UberStateHeader_UberStateType__Enum, get_Type, (app::SerializedByteUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B65E40, Object *, CreateDefaultUberState, (app::SerializedByteUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B65ED0, String *, ToString, (app::SerializedByteUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B5FF80, void, __ctor, (app::SerializedByteUberState * this_ptr));
}
