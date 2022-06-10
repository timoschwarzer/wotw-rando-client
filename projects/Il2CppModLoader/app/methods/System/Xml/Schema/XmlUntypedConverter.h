#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::XmlUntypedConverter {
    IL2CPP_REGISTER_METHOD(0x01930730, void, ctor_1, (app::XmlUntypedConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019308F0, void, ctor_2, (app::XmlUntypedConverter * this_ptr, app::XmlUntypedConverter * atomic_converter, bool allow_list_to_list))
    IL2CPP_REGISTER_METHOD(0x01930AA0, bool, ToBoolean_1, (app::XmlUntypedConverter * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x0478B430, XmlUntypedConverter_ToBoolean__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01930B70, bool, ToBoolean_2, (app::XmlUntypedConverter * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x0472CF88, XmlUntypedConverter_ToBoolean_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01930D70, app::DateTime, ToDateTime_1, (app::XmlUntypedConverter * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x047742F8, XmlUntypedConverter_ToDateTime__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01930E40, app::DateTime, ToDateTime_2, (app::XmlUntypedConverter * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x0477E260, XmlUntypedConverter_ToDateTime_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01931040, app::DateTimeOffset, ToDateTimeOffset_1, (app::XmlUntypedConverter * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x04794568, XmlUntypedConverter_ToDateTimeOffset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01931130, app::DateTimeOffset, ToDateTimeOffset_2, (app::XmlUntypedConverter * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x04724350, XmlUntypedConverter_ToDateTimeOffset_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01931340, app::Decimal, ToDecimal_1, (app::XmlUntypedConverter * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x0473FC68, XmlUntypedConverter_ToDecimal__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01931430, app::Decimal, ToDecimal_2, (app::XmlUntypedConverter * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x04745030, XmlUntypedConverter_ToDecimal_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01931640, double, ToDouble_1, (app::XmlUntypedConverter * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x04752DF8, XmlUntypedConverter_ToDouble__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01931710, double, ToDouble_2, (app::XmlUntypedConverter * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x047450D0, XmlUntypedConverter_ToDouble_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01931920, int32_t, ToInt32_1, (app::XmlUntypedConverter * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x04790EA8, XmlUntypedConverter_ToInt32__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01931A20, int32_t, ToInt32_2, (app::XmlUntypedConverter * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x04786298, XmlUntypedConverter_ToInt32_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01931C40, int64_t, ToInt64_1, (app::XmlUntypedConverter * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x0470B328, XmlUntypedConverter_ToInt64__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01931D40, int64_t, ToInt64_2, (app::XmlUntypedConverter * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x0477D4D0, XmlUntypedConverter_ToInt64_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01931F60, float, ToSingle_1, (app::XmlUntypedConverter * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x0471F750, XmlUntypedConverter_ToSingle__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01932030, float, ToSingle_2, (app::XmlUntypedConverter * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x0473BCF8, XmlUntypedConverter_ToSingle_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01932240, app::String *, ToString_1, (app::XmlUntypedConverter * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x019322E0, app::String *, ToString_2, (app::XmlUntypedConverter * this_ptr, app::DateTime value))
    IL2CPP_REGISTER_METHOD(0x019323A0, app::String *, ToString_3, (app::XmlUntypedConverter * this_ptr, app::DateTimeOffset value))
    IL2CPP_REGISTER_METHOD(0x01932470, app::String *, ToString_4, (app::XmlUntypedConverter * this_ptr, app::Decimal value))
    IL2CPP_REGISTER_METHOD(0x01932530, app::String *, ToString_5, (app::XmlUntypedConverter * this_ptr, double value))
    IL2CPP_REGISTER_METHOD(0x019325D0, app::String *, ToString_6, (app::XmlUntypedConverter * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01932680, app::String *, ToString_7, (app::XmlUntypedConverter * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x01932730, app::String *, ToString_8, (app::XmlUntypedConverter * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x019327D0, app::String *, ToString_9, (app::XmlUntypedConverter * this_ptr, app::Object * value, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x0474C340, XmlUntypedConverter_ToString_8__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019337C0, app::Object *, ChangeType_1, (app::XmlUntypedConverter * this_ptr, bool value, app::Type * destination_type))
    IL2CPP_REGISTER_METHODINFO(0x0474D178, XmlUntypedConverter_ChangeType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019339D0, app::Object *, ChangeType_2, (app::XmlUntypedConverter * this_ptr, app::DateTime value, app::Type * destination_type))
    IL2CPP_REGISTER_METHODINFO(0x04761C98, XmlUntypedConverter_ChangeType_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01933C00, app::Object *, ChangeType_3, (app::XmlUntypedConverter * this_ptr, app::Decimal value, app::Type * destination_type))
    IL2CPP_REGISTER_METHODINFO(0x0472C5C8, XmlUntypedConverter_ChangeType_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01933E30, app::Object *, ChangeType_4, (app::XmlUntypedConverter * this_ptr, double value, app::Type * destination_type))
    IL2CPP_REGISTER_METHODINFO(0x04771050, XmlUntypedConverter_ChangeType_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01934040, app::Object *, ChangeType_5, (app::XmlUntypedConverter * this_ptr, int32_t value, app::Type * destination_type))
    IL2CPP_REGISTER_METHODINFO(0x04742178, XmlUntypedConverter_ChangeType_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01934260, app::Object *, ChangeType_6, (app::XmlUntypedConverter * this_ptr, int64_t value, app::Type * destination_type))
    IL2CPP_REGISTER_METHODINFO(0x0475D608, XmlUntypedConverter_ChangeType_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01934480, app::Object *, ChangeType_7, (app::XmlUntypedConverter * this_ptr, app::String * value, app::Type * destination_type, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x04714CD0, XmlUntypedConverter_ChangeType_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01935480, app::Object *, ChangeType_8, (app::XmlUntypedConverter * this_ptr, app::Object * value, app::Type * destination_type, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x047980A8, XmlUntypedConverter_ChangeType_7__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01937020, app::Object *, ChangeTypeWildcardDestination, (app::XmlUntypedConverter * this_ptr, app::Object * value, app::Type * destination_type, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHOD(0x01937190, app::Object *, ChangeTypeWildcardSource, (app::XmlUntypedConverter * this_ptr, app::Object * value, app::Type * destination_type, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHOD(0x01937470, app::Object *, ChangeListType, (app::XmlUntypedConverter * this_ptr, app::Object * value, app::Type * destination_type, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x04702430, XmlUntypedConverter_ChangeListType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019377E0, bool, SupportsType, (app::XmlUntypedConverter * this_ptr, app::Type * clr_type))
    IL2CPP_REGISTER_METHOD(0x01937F50, void, cctor, ())
}
