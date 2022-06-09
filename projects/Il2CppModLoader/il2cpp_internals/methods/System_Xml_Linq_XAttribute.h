#include <interception_macros.h>

namespace app::methods::System_Xml_Linq::XAttribute {
IL2CPP_REGISTER_METHOD(0x0302E320, void, __ctor_1, (app::XAttribute * this_ptr, app::XName * name, app::Object * value));
IL2CPP_REGISTER_METHODINFO(0x04718A70, XAttribute__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0302E440, void, __ctor_2, (app::XAttribute * this_ptr, app::XAttribute * other));
IL2CPP_REGISTER_METHODINFO(0x04764CF8, XAttribute__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0302E510, bool, get_IsNamespaceDeclaration, (app::XAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB00, XName *, get_Name, (app::XAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x0043D9E0, XmlNodeType__Enum, get_NodeType, (app::XAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_Value, (app::XAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x0302E610, void, set_Value, (app::XAttribute * this_ptr, app::String * value));
IL2CPP_REGISTER_METHODINFO(0x04789E88, XAttribute_set_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0302E770, String *, ToString, (app::XAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x0302ED30, String *, GetPrefixOfNamespace, (app::XAttribute * this_ptr, app::XNamespace * ns));
IL2CPP_REGISTER_METHOD(0x0302EE90, void, ValidateAttribute, (app::XName * name, app::String * value));
IL2CPP_REGISTER_METHODINFO(0x04711178, XAttribute_ValidateAttribute__MethodInfo);
}
