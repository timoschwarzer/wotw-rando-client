#include <interception_macros.h>

namespace app::methods::System_Xml_Schema::XsdBuilder_XsdInitFunction {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::XsdBuilder_XsdInitFunction * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::XsdBuilder_XsdInitFunction * this_ptr, app::XsdBuilder * builder, app::String * value));
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult *, BeginInvoke, (app::XsdBuilder_XsdInitFunction * this_ptr, app::XsdBuilder * builder, app::String * value, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XsdBuilder_XsdInitFunction * this_ptr, app::IAsyncResult * result));
}
