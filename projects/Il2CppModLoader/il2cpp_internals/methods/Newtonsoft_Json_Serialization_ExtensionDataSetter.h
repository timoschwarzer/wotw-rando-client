#include <interception_macros.h>

namespace app::methods::Newtonsoft_Json_Serialization::ExtensionDataSetter {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::ExtensionDataSetter * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x0186BDE0, void, Invoke, (app::ExtensionDataSetter * this_ptr, app::Object * o, app::String * key, app::Object * value));
IL2CPP_REGISTER_METHOD(0x00DC7DB0, IAsyncResult *, BeginInvoke, (app::ExtensionDataSetter * this_ptr, app::Object * o, app::String * key, app::Object * value, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::ExtensionDataSetter * this_ptr, app::IAsyncResult * result));
}
