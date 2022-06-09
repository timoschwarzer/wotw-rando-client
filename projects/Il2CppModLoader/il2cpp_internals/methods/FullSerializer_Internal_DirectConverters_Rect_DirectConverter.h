#include <interception_macros.h>

namespace app::methods::FullSerializer_Internal_DirectConverters::Rect_DirectConverter {
    IL2CPP_REGISTER_METHOD(0x016508F0, app::fsResult, DoSerialize, (app::Rect_DirectConverter * this_ptr, app::Rect model, app::Dictionary_2_System_String_FullSerializer_fsData_ * serialized));
    IL2CPP_REGISTER_METHOD(0x01650B10, app::fsResult, DoDeserialize, (app::Rect_DirectConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_ * data, app::Rect * model));
    IL2CPP_REGISTER_METHOD(0x01650DC0, app::Object *, CreateInstance, (app::Rect_DirectConverter * this_ptr, app::fsData * data, app::Type * storage_type));
    IL2CPP_REGISTER_METHOD(0x01650E60, void, __ctor, (app::Rect_DirectConverter * this_ptr));
}
