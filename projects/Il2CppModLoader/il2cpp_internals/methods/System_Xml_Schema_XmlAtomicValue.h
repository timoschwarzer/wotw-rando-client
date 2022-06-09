#include <interception_macros.h>

namespace app::methods::System_Xml_Schema::XmlAtomicValue {
IL2CPP_REGISTER_METHOD(0x0223BA20, void, __ctor_1, (app::XmlAtomicValue * this_ptr, app::XmlSchemaType * xml_type, bool value));
IL2CPP_REGISTER_METHODINFO(0x04799F98, XmlAtomicValue__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0223BAF0, void, __ctor_2, (app::XmlAtomicValue * this_ptr, app::XmlSchemaType * xml_type, app::DateTime value));
IL2CPP_REGISTER_METHODINFO(0x0472EA48, XmlAtomicValue__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0223BBC0, void, __ctor_3, (app::XmlAtomicValue * this_ptr, app::XmlSchemaType * xml_type, double value));
IL2CPP_REGISTER_METHODINFO(0x04718558, XmlAtomicValue__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0223BCA0, void, __ctor_4, (app::XmlAtomicValue * this_ptr, app::XmlSchemaType * xml_type, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x047119F8, XmlAtomicValue__ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0223BD70, void, __ctor_5, (app::XmlAtomicValue * this_ptr, app::XmlSchemaType * xml_type, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x04734528, XmlAtomicValue__ctor_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0223BE40, void, __ctor_6, (app::XmlAtomicValue * this_ptr, app::XmlSchemaType * xml_type, app::String * value));
IL2CPP_REGISTER_METHODINFO(0x04700CD0, XmlAtomicValue__ctor_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0223BF40, void, __ctor_7, (app::XmlAtomicValue * this_ptr, app::XmlSchemaType * xml_type, app::String * value, app::IXmlNamespaceResolver * ns_resolver));
IL2CPP_REGISTER_METHODINFO(0x04778450, XmlAtomicValue__ctor_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0223C240, void, __ctor_8, (app::XmlAtomicValue * this_ptr, app::XmlSchemaType * xml_type, app::Object * value));
IL2CPP_REGISTER_METHODINFO(0x04746F10, XmlAtomicValue__ctor_7__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0223C340, void, __ctor_9, (app::XmlAtomicValue * this_ptr, app::XmlSchemaType * xml_type, app::Object * value, app::IXmlNamespaceResolver * ns_resolver));
IL2CPP_REGISTER_METHODINFO(0x04794098, XmlAtomicValue__ctor_8__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004C50A0, Object *, ICloneable_Clone, (app::XmlAtomicValue * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, XmlSchemaType *, get_XmlType, (app::XmlAtomicValue * this_ptr));
IL2CPP_REGISTER_METHOD(0x0223C5A0, Type *, get_ValueType, (app::XmlAtomicValue * this_ptr));
IL2CPP_REGISTER_METHOD(0x0223C5E0, Object *, get_TypedValue, (app::XmlAtomicValue * this_ptr));
IL2CPP_REGISTER_METHOD(0x0223C830, bool, get_ValueAsBoolean, (app::XmlAtomicValue * this_ptr));
IL2CPP_REGISTER_METHOD(0x0223C950, DateTime, get_ValueAsDateTime, (app::XmlAtomicValue * this_ptr));
IL2CPP_REGISTER_METHOD(0x0223CA70, double, get_ValueAsDouble, (app::XmlAtomicValue * this_ptr));
IL2CPP_REGISTER_METHOD(0x0223CB90, int32_t, get_ValueAsInt, (app::XmlAtomicValue * this_ptr));
IL2CPP_REGISTER_METHOD(0x0223CCB0, int64_t, get_ValueAsLong, (app::XmlAtomicValue * this_ptr));
IL2CPP_REGISTER_METHOD(0x0223CDD0, Object *, ValueAs, (app::XmlAtomicValue * this_ptr, app::Type * type, app::IXmlNamespaceResolver * ns_resolver));
IL2CPP_REGISTER_METHOD(0x0223D040, String *, get_Value, (app::XmlAtomicValue * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CC2AF0, String *, ToString, (app::XmlAtomicValue * this_ptr));
IL2CPP_REGISTER_METHOD(0x0223D180, String *, GetPrefixFromQName, (app::XmlAtomicValue * this_ptr, app::String * value));
}
