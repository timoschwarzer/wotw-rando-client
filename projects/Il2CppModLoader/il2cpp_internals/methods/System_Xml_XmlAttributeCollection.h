#include <interception_macros.h>

namespace app::methods::System_Xml::XmlAttributeCollection {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::XmlAttributeCollection * this_ptr, app::XmlNode * parent));
    IL2CPP_REGISTER_METHOD(0x0195BF70, app::XmlAttribute *, get_ItemOf_1, (app::XmlAttributeCollection * this_ptr, int32_t i));
    IL2CPP_REGISTER_METHODINFO(0x04702848, XmlAttributeCollection_get_ItemOf__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0195C0A0, app::XmlAttribute *, get_ItemOf_2, (app::XmlAttributeCollection * this_ptr, app::String * name));
    IL2CPP_REGISTER_METHOD(0x0195C240, app::XmlAttribute *, get_ItemOf_3, (app::XmlAttributeCollection * this_ptr, app::String * local_name, app::String * namespace_u_r_i));
    IL2CPP_REGISTER_METHOD(0x0195C420, int32_t, FindNodeOffsetNS, (app::XmlAttributeCollection * this_ptr, app::XmlAttribute * node));
    IL2CPP_REGISTER_METHOD(0x0195C650, app::XmlNode *, SetNamedItem, (app::XmlAttributeCollection * this_ptr, app::XmlNode * node));
    IL2CPP_REGISTER_METHODINFO(0x04738E30, XmlAttributeCollection_SetNamedItem__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0195C800, app::XmlAttribute *, Append, (app::XmlAttributeCollection * this_ptr, app::XmlAttribute * node));
    IL2CPP_REGISTER_METHODINFO(0x047373F0, XmlAttributeCollection_Append__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0195CA80, app::XmlAttribute *, Remove, (app::XmlAttributeCollection * this_ptr, app::XmlAttribute * node));
    IL2CPP_REGISTER_METHOD(0x0195CB00, app::XmlAttribute *, RemoveAt, (app::XmlAttributeCollection * this_ptr, int32_t i));
    IL2CPP_REGISTER_METHOD(0x0195CBD0, void, RemoveAll, (app::XmlAttributeCollection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0195CD10, void, ICollection_CopyTo, (app::XmlAttributeCollection * this_ptr, app::Array * array, int32_t index));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::XmlAttributeCollection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Object *, ICollection_get_SyncRoot, (app::XmlAttributeCollection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0195CDA0, int32_t, ICollection_get_Count, (app::XmlAttributeCollection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0195CDB0, app::XmlNode *, AddNode, (app::XmlAttributeCollection * this_ptr, app::XmlNode * node));
    IL2CPP_REGISTER_METHOD(0x0195D030, app::XmlNode *, InsertNodeAt, (app::XmlAttributeCollection * this_ptr, int32_t i, app::XmlNode * node));
    IL2CPP_REGISTER_METHOD(0x0195D130, app::XmlNode *, RemoveNodeAt, (app::XmlAttributeCollection * this_ptr, int32_t i));
    IL2CPP_REGISTER_METHOD(0x0195D360, void, Detach, (app::XmlAttributeCollection * this_ptr, app::XmlAttribute * attr));
    IL2CPP_REGISTER_METHOD(0x0195D430, void, InsertParentIntoElementIdAttrMap, (app::XmlAttributeCollection * this_ptr, app::XmlAttribute * attr));
    IL2CPP_REGISTER_METHOD(0x0195D670, void, RemoveParentFromElementIdAttrMap, (app::XmlAttributeCollection * this_ptr, app::XmlAttribute * attr));
    IL2CPP_REGISTER_METHOD(0x0195D8B0, int32_t, RemoveDuplicateAttribute, (app::XmlAttributeCollection * this_ptr, app::XmlAttribute * attr));
    IL2CPP_REGISTER_METHOD(0x0195DA10, bool, PrepareParentInElementIdAttrMap, (app::XmlAttributeCollection * this_ptr, app::String * attr_prefix, app::String * attr_local_name));
    IL2CPP_REGISTER_METHOD(0x0195DBA0, void, ResetParentInElementIdAttrMap, (app::XmlAttributeCollection * this_ptr, app::String * old_val, app::String * new_val));
    IL2CPP_REGISTER_METHOD(0x0195DCC0, app::XmlAttribute *, InternalAppendAttribute, (app::XmlAttributeCollection * this_ptr, app::XmlAttribute * node));
}
