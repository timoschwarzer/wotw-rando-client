#include <interception_macros.h>

namespace app::methods::System_Dynamic::ExpandoObject_ExpandoData {
IL2CPP_REGISTER_METHOD(0x01A92420, Object *, get_Item, (app::ExpandoObject_ExpandoData * this_ptr, int32_t index));
IL2CPP_REGISTER_METHOD(0x01F8F6D0, void, set_Item, (app::ExpandoObject_ExpandoData * this_ptr, int32_t index, app::Object * value));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Version, (app::ExpandoObject_ExpandoData * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A92400, int32_t, get_Length, (app::ExpandoObject_ExpandoData * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F8F750, void, __ctor_1, (app::ExpandoObject_ExpandoData * this_ptr));
IL2CPP_REGISTER_METHOD(0x00E332C0, void, __ctor_2, (app::ExpandoObject_ExpandoData * this_ptr, app::ExpandoClass * klass, app::Object__Array * data, int32_t version));
IL2CPP_REGISTER_METHOD(0x01F8F810, ExpandoObject_ExpandoData *, UpdateClass, (app::ExpandoObject_ExpandoData * this_ptr, app::ExpandoClass * new_class));
IL2CPP_REGISTER_METHOD(0x01F8FBB0, int32_t, GetAlignedSize, (int32_t len));
IL2CPP_REGISTER_METHOD(0x01F8FBC0, void, __cctor, ());
}
