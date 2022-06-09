#include <interception_macros.h>

namespace app::methods::System_Xml_Linq::XName {
IL2CPP_REGISTER_METHOD(0x03038AD0, void, __ctor_1, (app::XName * this_ptr, app::XNamespace * ns, app::String * local_name));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_LocalName, (app::XName * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, XNamespace *, get_Namespace, (app::XName * this_ptr));
IL2CPP_REGISTER_METHOD(0x01052DF0, String *, get_NamespaceName, (app::XName * this_ptr));
IL2CPP_REGISTER_METHOD(0x03038BD0, String *, ToString, (app::XName * this_ptr));
IL2CPP_REGISTER_METHOD(0x03038CB0, XName *, Get_1, (app::String * expanded_name));
IL2CPP_REGISTER_METHODINFO(0x04726EF0, XName_Get__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03038F20, XName *, Get_2, (app::String * local_name, app::String * namespace_name));
IL2CPP_REGISTER_METHOD(0x03038F60, XName *, operator_, (app::String * expanded_name));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, Equals, (app::XName * this_ptr, app::Object * obj));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, GetHashCode, (app::XName * this_ptr));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, operator____1, (app::XName * left, app::XName * right));
IL2CPP_REGISTER_METHOD(0x015F81A0, bool, operator____2, (app::XName * left, app::XName * right));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, IEquatable_XName__Equals, (app::XName * this_ptr, app::XName * other));
IL2CPP_REGISTER_METHOD(0x03038F70, void, ISerializable_GetObjectData, (app::XName * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04706200, XName_System_Runtime_Serialization_ISerializable_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03039090, void, __ctor_2, (app::XName * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0472CB58, XName__ctor_1__MethodInfo);
}
