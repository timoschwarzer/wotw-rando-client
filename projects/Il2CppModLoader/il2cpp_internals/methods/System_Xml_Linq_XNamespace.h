#include <interception_macros.h>

namespace app::methods::System_Xml_Linq::XNamespace {
IL2CPP_REGISTER_METHOD(0x030390C0, void, __ctor, (app::XNamespace * this_ptr, app::String * namespace_name));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_NamespaceName, (app::XNamespace * this_ptr));
IL2CPP_REGISTER_METHOD(0x03039310, XName *, GetName_1, (app::XNamespace * this_ptr, app::String * local_name));
IL2CPP_REGISTER_METHODINFO(0x04797888, XNamespace_GetName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA280, String *, ToString, (app::XNamespace * this_ptr));
IL2CPP_REGISTER_METHOD(0x030393F0, XNamespace *, get_None, ());
IL2CPP_REGISTER_METHOD(0x03039490, XNamespace *, get_Xml, ());
IL2CPP_REGISTER_METHOD(0x03039520, XNamespace *, get_Xmlns, ());
IL2CPP_REGISTER_METHOD(0x030395B0, XNamespace *, Get_1, (app::String * namespace_name));
IL2CPP_REGISTER_METHODINFO(0x0470C448, XNamespace_Get__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03039670, XNamespace *, operator_, (app::String * namespace_name));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, Equals, (app::XNamespace * this_ptr, app::Object * obj));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, GetHashCode, (app::XNamespace * this_ptr));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, operator____1, (app::XNamespace * left, app::XNamespace * right));
IL2CPP_REGISTER_METHOD(0x015F81A0, bool, operator____2, (app::XNamespace * left, app::XNamespace * right));
IL2CPP_REGISTER_METHOD(0x03039680, XName *, GetName_2, (app::XNamespace * this_ptr, app::String * local_name, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x03039950, XNamespace *, Get_2, (app::String * namespace_name, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x00C3DB20, String *, ExtractLocalName, (app::XName * n));
IL2CPP_REGISTER_METHODINFO(0x04777F78, XNamespace_ExtractLocalName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0303A040, String *, ExtractNamespace, (app::WeakReference * r));
IL2CPP_REGISTER_METHODINFO(0x04780C88, XNamespace_ExtractNamespace__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0303A110, XNamespace *, EnsureNamespace, (app::WeakReference * * ref_nmsp, app::String * namespace_name));
}
