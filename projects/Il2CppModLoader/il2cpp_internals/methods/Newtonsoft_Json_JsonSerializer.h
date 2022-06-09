#include <interception_macros.h>

namespace app::methods::Newtonsoft_Json::JsonSerializer {
    IL2CPP_REGISTER_METHOD(0x01A6C580, void, add_Error, (app::JsonSerializer * this_ptr, app::EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_ * value));
    IL2CPP_REGISTER_METHOD(0x01A6C670, void, remove_Error, (app::JsonSerializer * this_ptr, app::EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_ * value));
    IL2CPP_REGISTER_METHOD(0x01A6C760, void, set_ReferenceResolver, (app::JsonSerializer * this_ptr, app::IReferenceResolver * value));
    IL2CPP_REGISTER_METHODINFO(0x0470C090, JsonSerializer_set_ReferenceResolver__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01A6C820, void, set_SerializationBinder, (app::JsonSerializer * this_ptr, app::ISerializationBinder * value));
    IL2CPP_REGISTER_METHODINFO(0x047831F0, JsonSerializer_set_SerializationBinder__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::ITraceWriter *, get_TraceWriter, (app::JsonSerializer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_TraceWriter, (app::JsonSerializer * this_ptr, app::ITraceWriter * value));
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_EqualityComparer, (app::JsonSerializer * this_ptr, app::IEqualityComparer * value));
    IL2CPP_REGISTER_METHOD(0x01A6C8E0, void, set_TypeNameHandling, (app::JsonSerializer * this_ptr, app::TypeNameHandling__Enum value));
    IL2CPP_REGISTER_METHODINFO(0x04749830, JsonSerializer_set_TypeNameHandling__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01A6C9A0, void, set_TypeNameAssemblyFormatHandling, (app::JsonSerializer * this_ptr, app::TypeNameAssemblyFormatHandling__Enum value));
    IL2CPP_REGISTER_METHODINFO(0x04716540, JsonSerializer_set_TypeNameAssemblyFormatHandling__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01A6CA60, void, set_PreserveReferencesHandling, (app::JsonSerializer * this_ptr, app::PreserveReferencesHandling__Enum value));
    IL2CPP_REGISTER_METHODINFO(0x04727C00, JsonSerializer_set_PreserveReferencesHandling__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01A6CB20, void, set_ReferenceLoopHandling, (app::JsonSerializer * this_ptr, app::ReferenceLoopHandling__Enum value));
    IL2CPP_REGISTER_METHODINFO(0x04736438, JsonSerializer_set_ReferenceLoopHandling__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01A6CBE0, void, set_MissingMemberHandling, (app::JsonSerializer * this_ptr, app::MissingMemberHandling__Enum value));
    IL2CPP_REGISTER_METHODINFO(0x04713600, JsonSerializer_set_MissingMemberHandling__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FB970, app::NullValueHandling__Enum, get_NullValueHandling, (app::JsonSerializer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01A6CCA0, void, set_NullValueHandling, (app::JsonSerializer * this_ptr, app::NullValueHandling__Enum value));
    IL2CPP_REGISTER_METHODINFO(0x04713390, JsonSerializer_set_NullValueHandling__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01A6CD60, void, set_DefaultValueHandling, (app::JsonSerializer * this_ptr, app::DefaultValueHandling__Enum value));
    IL2CPP_REGISTER_METHODINFO(0x047540A0, JsonSerializer_set_DefaultValueHandling__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01A6CE20, void, set_ObjectCreationHandling, (app::JsonSerializer * this_ptr, app::ObjectCreationHandling__Enum value));
    IL2CPP_REGISTER_METHODINFO(0x04735F48, JsonSerializer_set_ObjectCreationHandling__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01A6CEE0, void, set_ConstructorHandling, (app::JsonSerializer * this_ptr, app::ConstructorHandling__Enum value));
    IL2CPP_REGISTER_METHODINFO(0x0474D858, JsonSerializer_set_ConstructorHandling__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00998570, app::MetadataPropertyHandling__Enum, get_MetadataPropertyHandling, (app::JsonSerializer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01A6CFA0, void, set_MetadataPropertyHandling, (app::JsonSerializer * this_ptr, app::MetadataPropertyHandling__Enum value));
    IL2CPP_REGISTER_METHODINFO(0x0471D940, JsonSerializer_set_MetadataPropertyHandling__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01A6D060, app::JsonConverterCollection *, get_Converters, (app::JsonSerializer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IContractResolver *, get_ContractResolver, (app::JsonSerializer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01A6D220, void, set_ContractResolver, (app::JsonSerializer * this_ptr, app::IContractResolver * value));
    IL2CPP_REGISTER_METHOD(0x01A6D2E0, app::StreamingContext, get_Context, (app::JsonSerializer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01A6D2F0, void, set_Context, (app::JsonSerializer * this_ptr, app::StreamingContext value));
    IL2CPP_REGISTER_METHOD(0x01A6D300, bool, get_CheckAdditionalContent, (app::JsonSerializer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01A6D390, void, __ctor, (app::JsonSerializer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01A6D4D0, app::JsonSerializer *, Create_1, ());
    IL2CPP_REGISTER_METHOD(0x01A6D610, app::JsonSerializer *, Create_2, (app::JsonSerializerSettings * settings));
    IL2CPP_REGISTER_METHOD(0x01A6D770, app::JsonSerializer *, CreateDefault, ());
    IL2CPP_REGISTER_METHOD(0x01A6D960, void, ApplySerializerSettings, (app::JsonSerializer * serializer, app::JsonSerializerSettings * settings));
    IL2CPP_REGISTER_METHOD(0x01A6E5E0, app::Object *, Deserialize_1, (app::JsonSerializer * this_ptr, app::JsonReader * reader, app::Type * object_type));
    IL2CPP_REGISTER_METHOD(0x01A6E600, app::Object *, DeserializeInternal, (app::JsonSerializer * this_ptr, app::JsonReader * reader, app::Type * object_type));
    IL2CPP_REGISTER_METHOD(0x01A6E930, void, SetupReader, (app::JsonSerializer * this_ptr, app::JsonReader * reader, app::CultureInfo * * previous_culture, app::Nullable_1_Newtonsoft_Json_DateTimeZoneHandling_ * previous_date_time_zone_handling, app::Nullable_1_Newtonsoft_Json_DateParseHandling_ * previous_date_parse_handling, app::Nullable_1_Newtonsoft_Json_FloatParseHandling_ * previous_float_parse_handling, app::Nullable_1_Int32_ * previous_max_depth, app::String * * previous_date_format_string));
    IL2CPP_REGISTER_METHOD(0x01A6ED10, void, ResetReader, (app::JsonSerializer * this_ptr, app::JsonReader * reader, app::CultureInfo * previous_culture, app::Nullable_1_Newtonsoft_Json_DateTimeZoneHandling_ previous_date_time_zone_handling, app::Nullable_1_Newtonsoft_Json_DateParseHandling_ previous_date_parse_handling, app::Nullable_1_Newtonsoft_Json_FloatParseHandling_ previous_float_parse_handling, app::Nullable_1_Int32_ previous_max_depth, app::String * previous_date_format_string));
    IL2CPP_REGISTER_METHOD(0x01A6EF40, void, Serialize_1, (app::JsonSerializer * this_ptr, app::JsonWriter * json_writer, app::Object * value, app::Type * object_type));
    IL2CPP_REGISTER_METHOD(0x01A6EF60, void, Serialize_2, (app::JsonSerializer * this_ptr, app::JsonWriter * json_writer, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x01A6EF90, app::TraceJsonReader *, CreateTraceJsonReader, (app::JsonSerializer * this_ptr, app::JsonReader * reader));
    IL2CPP_REGISTER_METHOD(0x01A6F140, void, SerializeInternal, (app::JsonSerializer * this_ptr, app::JsonWriter * json_writer, app::Object * value, app::Type * object_type));
    IL2CPP_REGISTER_METHOD(0x01A6F920, app::IReferenceResolver *, GetReferenceResolver, (app::JsonSerializer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01A6FA70, app::JsonConverter *, GetMatchingConverter_1, (app::JsonSerializer * this_ptr, app::Type * type));
    IL2CPP_REGISTER_METHOD(0x01A6FA80, app::JsonConverter *, GetMatchingConverter_2, (app::IList_1_Newtonsoft_Json_JsonConverter_ * converters, app::Type * object_type));
    IL2CPP_REGISTER_METHOD(0x01A6FB70, void, OnError, (app::JsonSerializer * this_ptr, app::ErrorEventArgs * e));
    IL2CPP_REGISTER_METHOD(0x015F3820, app::Object *, Deserialize_2, (app::JsonSerializer * this_ptr, app::JsonReader * reader));
    IL2CPP_REGISTER_METHOD(0x015F36F0, app::RegexOptions__Enum, Deserialize_3, (app::JsonSerializer * this_ptr, app::JsonReader * reader));
    IL2CPP_REGISTER_METHODINFO(0x047423F0, JsonSerializer_Deserialize_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x015F36F0, app::Int32Enum__Enum, Deserialize_4, (app::JsonSerializer * this_ptr, app::JsonReader * reader));
}
