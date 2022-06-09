#include <interception_macros.h>

namespace app::methods::System_Xml_Linq::XObject {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::XObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x0303AAB0, String *, get_BaseUri, (app::XObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x0303AB70, XElement *, get_Parent, (app::XObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x0303AC30, void, AddAnnotation, (app::XObject * this_ptr, app::Object * annotation));
IL2CPP_REGISTER_METHODINFO(0x04789A38, XObject_AddAnnotation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0303AF10, Object *, Annotation_1, (app::XObject * this_ptr, app::Type * type));
IL2CPP_REGISTER_METHODINFO(0x047277D0, XObject_Annotation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0303B090, void, add_Changed, (app::XObject * this_ptr, app::EventHandler_1_System_Xml_Linq_XObjectChangeEventArgs_ * value));
IL2CPP_REGISTER_METHOD(0x0303B250, void, remove_Changed, (app::XObject * this_ptr, app::EventHandler_1_System_Xml_Linq_XObjectChangeEventArgs_ * value));
IL2CPP_REGISTER_METHOD(0x0303B350, void, add_Changing, (app::XObject * this_ptr, app::EventHandler_1_System_Xml_Linq_XObjectChangeEventArgs_ * value));
IL2CPP_REGISTER_METHOD(0x0303B510, void, remove_Changing, (app::XObject * this_ptr, app::EventHandler_1_System_Xml_Linq_XObjectChangeEventArgs_ * value));
IL2CPP_REGISTER_METHOD(0x0303B610, bool, IXmlLineInfo_HasLineInfo, (app::XObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x0303B6A0, int32_t, IXmlLineInfo_get_LineNumber, (app::XObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x0303B730, int32_t, IXmlLineInfo_get_LinePosition, (app::XObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x0303B7C0, bool, get_HasBaseUri, (app::XObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x0303B850, bool, NotifyChanged, (app::XObject * this_ptr, app::Object * sender, app::XObjectChangeEventArgs * e));
IL2CPP_REGISTER_METHOD(0x0303B940, bool, NotifyChanging, (app::XObject * this_ptr, app::Object * sender, app::XObjectChangeEventArgs * e));
IL2CPP_REGISTER_METHOD(0x0303BA30, void, SetBaseUri, (app::XObject * this_ptr, app::String * base_uri));
IL2CPP_REGISTER_METHOD(0x0303BB80, void, SetLineInfo, (app::XObject * this_ptr, int32_t line_number, int32_t line_position));
IL2CPP_REGISTER_METHOD(0x0303BCF0, bool, SkipNotify, (app::XObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x0303BEE0, SaveOptions__Enum, GetSaveOptionsFromAnnotations, (app::XObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x0157ACA0, Object *, Annotation_2, (app::XObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x0156C620, IEnumerable_1_System_Object_ *, Annotations_1, (app::XObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x015E1D60, void, RemoveAnnotations_1, (app::XObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x0157ACA0, BaseUriAnnotation *, Annotation_3, (app::XObject * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04742EC0, XObject_Annotation_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157ACA0, XObjectChangeAnnotation *, Annotation_4, (app::XObject * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0477B160, XObject_Annotation_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015E1D60, void, RemoveAnnotations_2, (app::XObject * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0474A540, XObject_RemoveAnnotations_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157ACA0, LineInfoAnnotation *, Annotation_5, (app::XObject * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0475D088, XObject_Annotation_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0156C620, IEnumerable_1_System_Xml_Linq_XObjectChangeAnnotation_ *, Annotations_2, (app::XObject * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047383F8, XObject_Annotations_1__MethodInfo);
}
