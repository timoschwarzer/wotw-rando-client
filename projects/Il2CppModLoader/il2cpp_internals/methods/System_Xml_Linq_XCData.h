#include <interception_macros.h>

namespace app::methods::System_Xml_Linq::XCData {
IL2CPP_REGISTER_METHOD(0x0302F340, void, __ctor_1, (app::XCData * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x0302F350, void, __ctor_2, (app::XCData * this_ptr, app::XCData * other));
IL2CPP_REGISTER_METHOD(0x00910BD0, XmlNodeType__Enum, get_NodeType, (app::XCData * this_ptr));
IL2CPP_REGISTER_METHOD(0x0302F360, void, WriteTo, (app::XCData * this_ptr, app::XmlWriter * writer));
IL2CPP_REGISTER_METHODINFO(0x04798C20, XCData_WriteTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0302F430, XNode *, CloneNode, (app::XCData * this_ptr));
}
