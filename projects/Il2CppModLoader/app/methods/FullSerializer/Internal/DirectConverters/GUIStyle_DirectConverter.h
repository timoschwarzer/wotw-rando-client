#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::FullSerializer::Internal::DirectConverters::GUIStyle_DirectConverter {
    IL2CPP_REGISTER_METHOD(0x0164C3E0, app::fsResult, DoSerialize, (app::GUIStyle_DirectConverter * this_ptr, app::GUIStyle * model, app::Dictionary_2_System_String_FullSerializer_fsData_ * serialized))
    IL2CPP_REGISTER_METHOD(0x0164D1E0, app::fsResult, DoDeserialize, (app::GUIStyle_DirectConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_ * data, app::GUIStyle * * model))
    IL2CPP_REGISTER_METHOD(0x0164EBD0, app::Object *, CreateInstance, (app::GUIStyle_DirectConverter * this_ptr, app::fsData * data, app::Type * storage_type))
    IL2CPP_REGISTER_METHOD(0x0164ED10, void, ctor, (app::GUIStyle_DirectConverter * this_ptr))
}
