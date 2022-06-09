#include <interception_macros.h>

namespace app::methods::System_Xml_Schema::XmlSchemaInference {
    IL2CPP_REGISTER_METHOD(0x008F7CD0, void, set_Occurrence, (app::XmlSchemaInference * this_ptr, app::XmlSchemaInference_InferenceOption__Enum value));
    IL2CPP_REGISTER_METHOD(0x006410F0, app::XmlSchemaInference_InferenceOption__Enum, get_Occurrence, (app::XmlSchemaInference * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00843E80, void, set_TypeInference, (app::XmlSchemaInference * this_ptr, app::XmlSchemaInference_InferenceOption__Enum value));
    IL2CPP_REGISTER_METHOD(0x01CA9680, void, __ctor, (app::XmlSchemaInference * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01CA9990, app::XmlSchemaSet *, InferSchema, (app::XmlSchemaInference * this_ptr, app::XmlReader * instance_document));
    IL2CPP_REGISTER_METHOD(0x01CA9B00, app::XmlSchemaSet *, InferSchema1, (app::XmlSchemaInference * this_ptr, app::XmlReader * instance_document, app::XmlSchemaSet * schemas));
    IL2CPP_REGISTER_METHODINFO(0x04756D90, XmlSchemaInference_InferSchema1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01CAA2E0, app::XmlSchemaAttribute *, AddAttribute, (app::XmlSchemaInference * this_ptr, app::String * local_name, app::String * prefix, app::String * child_u_r_i, app::String * attr_value, bool b_creating_new_type, app::XmlSchema * parent_schema, app::XmlSchemaObjectCollection * add_location, app::XmlSchemaObjectTable * compiled_attributes));
    IL2CPP_REGISTER_METHODINFO(0x0471F058, XmlSchemaInference_AddAttribute__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01CAB1E0, app::XmlSchema *, CreateXmlSchema, (app::XmlSchemaInference * this_ptr, app::String * target_n_s));
    IL2CPP_REGISTER_METHOD(0x01CAB370, app::XmlSchemaElement *, AddElement, (app::XmlSchemaInference * this_ptr, app::String * local_name, app::String * prefix, app::String * child_u_r_i, app::XmlSchema * parent_schema, app::XmlSchemaObjectCollection * add_location, int32_t position_within_collection));
    IL2CPP_REGISTER_METHODINFO(0x04793FF8, XmlSchemaInference_AddElement__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01CABE90, void, InferElement, (app::XmlSchemaInference * this_ptr, app::XmlSchemaElement * xse, bool b_creating_new_type, app::XmlSchema * parent_schema));
    IL2CPP_REGISTER_METHODINFO(0x04743878, XmlSchemaInference_InferElement__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01CAD8F0, app::XmlSchemaSimpleContentExtension *, CheckSimpleContentExtension, (app::XmlSchemaInference * this_ptr, app::XmlSchemaComplexType * ct));
    IL2CPP_REGISTER_METHODINFO(0x0477B928, XmlSchemaInference_CheckSimpleContentExtension__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01CADAA0, app::XmlSchemaType *, GetEffectiveSchemaType, (app::XmlSchemaInference * this_ptr, app::XmlSchemaElement * elem, bool b_creating_new_type));
    IL2CPP_REGISTER_METHOD(0x01CADD50, app::XmlSchemaElement *, FindMatchingElement, (app::XmlSchemaInference * this_ptr, bool b_creating_new_type, app::XmlReader * xtr, app::XmlSchemaComplexType * ct, int32_t * last_used_seq_item, bool * b_particle_changed, app::XmlSchema * parent_schema, bool set_maxoccurs));
    IL2CPP_REGISTER_METHODINFO(0x047495F0, XmlSchemaInference_FindMatchingElement__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01CAF160, void, ProcessAttributes, (app::XmlSchemaInference * this_ptr, app::XmlSchemaElement * * xse, app::XmlSchemaType * effective_schema_type, bool b_creating_new_type, app::XmlSchema * parent_schema));
    IL2CPP_REGISTER_METHODINFO(0x047729F8, XmlSchemaInference_ProcessAttributes__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01CAFE50, void, MoveAttributes_1, (app::XmlSchemaInference * this_ptr, app::XmlSchemaSimpleContentExtension * sc_extension, app::XmlSchemaComplexType * ct));
    IL2CPP_REGISTER_METHOD(0x01CAFF30, void, MoveAttributes_2, (app::XmlSchemaInference * this_ptr, app::XmlSchemaComplexType * ct, app::XmlSchemaSimpleContentExtension * simple_content_extension, bool b_creating_new_type));
    IL2CPP_REGISTER_METHOD(0x01CB02A0, app::XmlSchemaAttribute *, FindAttribute, (app::XmlSchemaInference * this_ptr, app::ICollection * attributes, app::String * attr_name));
    IL2CPP_REGISTER_METHOD(0x01CB0530, app::XmlSchemaElement *, FindGlobalElement, (app::XmlSchemaInference * this_ptr, app::String * namespace_u_r_i, app::String * local_name, app::XmlSchema * * parent_schema));
    IL2CPP_REGISTER_METHOD(0x01CB07A0, app::XmlSchemaElement *, FindElement, (app::XmlSchemaInference * this_ptr, app::XmlSchemaObjectCollection * elements, app::String * element_name));
    IL2CPP_REGISTER_METHOD(0x01CB0950, app::XmlSchemaAttribute *, FindAttributeRef, (app::XmlSchemaInference * this_ptr, app::ICollection * attributes, app::String * attribute_name, app::String * ns_u_r_i));
    IL2CPP_REGISTER_METHOD(0x01CB0C50, app::XmlSchemaElement *, FindElementRef, (app::XmlSchemaInference * this_ptr, app::XmlSchemaObjectCollection * elements, app::String * element_name, app::String * ns_u_r_i));
    IL2CPP_REGISTER_METHOD(0x01CB0E50, void, MakeExistingAttributesOptional, (app::XmlSchemaInference * this_ptr, app::XmlSchemaComplexType * ct, app::XmlSchemaObjectCollection * attributes_in_instance));
    IL2CPP_REGISTER_METHODINFO(0x047040A0, XmlSchemaInference_MakeExistingAttributesOptional__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01CB0F70, void, SwitchUseToOptional, (app::XmlSchemaInference * this_ptr, app::XmlSchemaObjectCollection * attributes, app::XmlSchemaObjectCollection * attributes_in_instance));
    IL2CPP_REGISTER_METHOD(0x01CB1120, app::XmlQualifiedName *, RefineSimpleType, (app::XmlSchemaInference * this_ptr, app::String * s, int32_t * i_type_flags));
    IL2CPP_REGISTER_METHOD(0x01CB20B0, int32_t, InferSimpleType, (app::String * s, bool * b_needs_range_check));
    IL2CPP_REGISTER_METHOD(0x01CB3160, int32_t, DateTime, (app::String * s, bool b_date, bool b_time));
    IL2CPP_REGISTER_METHOD(0x01CB32F0, app::XmlSchemaElement *, CreateNewElementforChoice, (app::XmlSchemaInference * this_ptr, app::XmlSchemaElement * copy_element));
    IL2CPP_REGISTER_METHOD(0x01CB3630, int32_t, GetSchemaType, (app::XmlQualifiedName * qname));
    IL2CPP_REGISTER_METHODINFO(0x04726AD0, XmlSchemaInference_GetSchemaType__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01CB4410, void, SetMinMaxOccurs, (app::XmlSchemaInference * this_ptr, app::XmlSchemaElement * el, bool set_max_occurs));
    IL2CPP_REGISTER_METHOD(0x01CB46A0, void, __cctor, ());
}
