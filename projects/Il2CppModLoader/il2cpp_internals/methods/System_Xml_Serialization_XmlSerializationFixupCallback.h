#include <interception_macros.h>

namespace app::methods::System_Xml_Serialization::XmlSerializationFixupCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::XmlSerializationFixupCallback * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::XmlSerializationFixupCallback * this_ptr, app::Object * fixup));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (app::XmlSerializationFixupCallback * this_ptr, app::Object * fixup, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XmlSerializationFixupCallback * this_ptr, app::IAsyncResult * result));
}
