#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Newtonsoft::Json::Serialization::JsonSerializerInternalReader {
    IL2CPP_REGISTER_METHOD(0x018748F0, void, ctor, (app::JsonSerializerInternalReader * this_ptr, app::JsonSerializer * serializer))
    IL2CPP_REGISTER_METHOD(0x01874900, app::JsonContract *, GetContractSafe, (app::JsonSerializerInternalReader * this_ptr, app::Type * type))
    IL2CPP_REGISTER_METHOD(0x018749E0, app::Object *, Deserialize, (app::JsonSerializerInternalReader * this_ptr, app::JsonReader * reader, app::Type * object_type, bool check_additional_content))
    IL2CPP_REGISTER_METHODINFO(0x0470CEC8, JsonSerializerInternalReader_Deserialize__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01874D40, app::JsonSerializerProxy *, GetInternalSerializer, (app::JsonSerializerInternalReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01874F20, app::JToken *, CreateJToken, (app::JsonSerializerInternalReader * this_ptr, app::JsonReader * reader, app::JsonContract * contract))
    IL2CPP_REGISTER_METHOD(0x01875250, app::JToken *, CreateJObject, (app::JsonSerializerInternalReader * this_ptr, app::JsonReader * reader))
    IL2CPP_REGISTER_METHODINFO(0x0478CAE8, JsonSerializerInternalReader_CreateJObject__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01875640, app::Object *, CreateValueInternal, (app::JsonSerializerInternalReader * this_ptr, app::JsonReader * reader, app::Type * object_type, app::JsonContract * contract, app::JsonProperty * member, app::JsonContainerContract * container_contract, app::JsonProperty * container_member, app::Object * existing_value))
    IL2CPP_REGISTER_METHODINFO(0x047239C0, JsonSerializerInternalReader_CreateValueInternal__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01875BC0, bool, CoerceEmptyStringToNull, (app::Type * object_type, app::JsonContract * contract, app::String * s))
    IL2CPP_REGISTER_METHOD(0x01875D00, app::String *, GetExpectedDescription, (app::JsonSerializerInternalReader * this_ptr, app::JsonContract * contract))
    IL2CPP_REGISTER_METHODINFO(0x0472D018, JsonSerializerInternalReader_GetExpectedDescription__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01875E10, app::JsonConverter *, GetConverter, (app::JsonSerializerInternalReader * this_ptr, app::JsonContract * contract, app::JsonConverter * member_converter, app::JsonContainerContract * container_contract, app::JsonProperty * container_property))
    IL2CPP_REGISTER_METHOD(0x01875EB0, app::Object *, CreateObject, (app::JsonSerializerInternalReader * this_ptr, app::JsonReader * reader, app::Type * object_type, app::JsonContract * contract, app::JsonProperty * member, app::JsonContainerContract * container_contract, app::JsonProperty * container_member, app::Object * existing_value))
    IL2CPP_REGISTER_METHODINFO(0x04715B88, JsonSerializerInternalReader_CreateObject__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01876AE0, bool, ReadMetadataPropertiesToken, (app::JsonSerializerInternalReader * this_ptr, app::JTokenReader * reader, app::Type * * object_type, app::JsonContract * * contract, app::JsonProperty * member, app::JsonContainerContract * container_contract, app::JsonProperty * container_member, app::Object * existing_value, app::Object * * new_value, app::String * * id))
    IL2CPP_REGISTER_METHODINFO(0x0472C3B0, JsonSerializerInternalReader_ReadMetadataPropertiesToken__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01877170, bool, ReadMetadataProperties, (app::JsonSerializerInternalReader * this_ptr, app::JsonReader * reader, app::Type * * object_type, app::JsonContract * * contract, app::JsonProperty * member, app::JsonContainerContract * container_contract, app::JsonProperty * container_member, app::Object * existing_value, app::Object * * new_value, app::String * * id))
    IL2CPP_REGISTER_METHODINFO(0x0471CF88, JsonSerializerInternalReader_ReadMetadataProperties__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01877950, void, ResolveTypeName, (app::JsonSerializerInternalReader * this_ptr, app::JsonReader * reader, app::Type * * object_type, app::JsonContract * * contract, app::JsonProperty * member, app::JsonContainerContract * container_contract, app::JsonProperty * container_member, app::String * qualified_type_name))
    IL2CPP_REGISTER_METHODINFO(0x047625A8, JsonSerializerInternalReader_ResolveTypeName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01877E80, app::JsonArrayContract *, EnsureArrayContract, (app::JsonSerializerInternalReader * this_ptr, app::JsonReader * reader, app::Type * object_type, app::JsonContract * contract))
    IL2CPP_REGISTER_METHODINFO(0x04756030, JsonSerializerInternalReader_EnsureArrayContract__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01878060, app::Object *, CreateList, (app::JsonSerializerInternalReader * this_ptr, app::JsonReader * reader, app::Type * object_type, app::JsonContract * contract, app::JsonProperty * member, app::Object * existing_value, app::String * id))
    IL2CPP_REGISTER_METHODINFO(0x04760D88, JsonSerializerInternalReader_CreateList__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01878750, bool, HasNoDefinedType, (app::JsonSerializerInternalReader * this_ptr, app::JsonContract * contract))
    IL2CPP_REGISTER_METHOD(0x01878870, app::Object *, EnsureType, (app::JsonSerializerInternalReader * this_ptr, app::JsonReader * reader, app::Object * value, app::CultureInfo * culture, app::JsonContract * contract, app::Type * target_type))
    IL2CPP_REGISTER_METHODINFO(0x0475B720, JsonSerializerInternalReader_EnsureType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01878D90, bool, SetPropertyValue, (app::JsonSerializerInternalReader * this_ptr, app::JsonProperty * property, app::JsonConverter * property_converter, app::JsonContainerContract * container_contract, app::JsonProperty * container_property, app::JsonReader * reader, app::Object * target))
    IL2CPP_REGISTER_METHOD(0x018791A0, bool, CalculatePropertyDetails, (app::JsonSerializerInternalReader * this_ptr, app::JsonProperty * property, app::JsonConverter * * property_converter, app::JsonContainerContract * container_contract, app::JsonProperty * container_property, app::JsonReader * reader, app::Object * target, bool * use_existing_value, app::Object * * current_value, app::JsonContract * * property_contract, bool * gotten_current_value, bool * ignored_value))
    IL2CPP_REGISTER_METHOD(0x01879670, void, AddReference, (app::JsonSerializerInternalReader * this_ptr, app::JsonReader * reader, app::String * id, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x0471F360, JsonSerializerInternalReader_AddReference__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01141CD0, bool, HasFlag, (app::JsonSerializerInternalReader * this_ptr, app::DefaultValueHandling__Enum value, app::DefaultValueHandling__Enum flag))
    IL2CPP_REGISTER_METHOD(0x018798E0, bool, ShouldSetPropertyValue, (app::JsonSerializerInternalReader * this_ptr, app::JsonProperty * property, app::JsonObjectContract * contract, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x01879A10, app::IList *, CreateNewList, (app::JsonSerializerInternalReader * this_ptr, app::JsonReader * reader, app::JsonArrayContract * contract, bool * created_from_non_default_creator))
    IL2CPP_REGISTER_METHODINFO(0x0475EC40, JsonSerializerInternalReader_CreateNewList__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01879D70, app::IDictionary *, CreateNewDictionary, (app::JsonSerializerInternalReader * this_ptr, app::JsonReader * reader, app::JsonDictionaryContract * contract, bool * created_from_non_default_creator))
    IL2CPP_REGISTER_METHODINFO(0x04715600, JsonSerializerInternalReader_CreateNewDictionary__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0187A010, void, OnDeserializing, (app::JsonSerializerInternalReader * this_ptr, app::JsonReader * reader, app::JsonContract * contract, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x0187A1F0, void, OnDeserialized, (app::JsonSerializerInternalReader * this_ptr, app::JsonReader * reader, app::JsonContract * contract, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x0187A3D0, app::Object *, PopulateDictionary, (app::JsonSerializerInternalReader * this_ptr, app::IDictionary * dictionary, app::JsonReader * reader, app::JsonDictionaryContract * contract, app::JsonProperty * container_property, app::String * id))
    IL2CPP_REGISTER_METHODINFO(0x04769C40, JsonSerializerInternalReader_PopulateDictionary__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0187ACC0, app::Object *, PopulateMultidimensionalArray, (app::JsonSerializerInternalReader * this_ptr, app::IList * list, app::JsonReader * reader, app::JsonArrayContract * contract, app::JsonProperty * container_property, app::String * id))
    IL2CPP_REGISTER_METHODINFO(0x04783D98, JsonSerializerInternalReader_PopulateMultidimensionalArray__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0187B5F0, void, ThrowUnexpectedEndException, (app::JsonSerializerInternalReader * this_ptr, app::JsonReader * reader, app::JsonContract * contract, app::Object * current_object, app::String * message))
    IL2CPP_REGISTER_METHODINFO(0x0478FFF8, JsonSerializerInternalReader_ThrowUnexpectedEndException__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0187B700, app::Object *, PopulateList, (app::JsonSerializerInternalReader * this_ptr, app::IList * list, app::JsonReader * reader, app::JsonArrayContract * contract, app::JsonProperty * container_property, app::String * id))
    IL2CPP_REGISTER_METHODINFO(0x0473A9A8, JsonSerializerInternalReader_PopulateList__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0187BC60, app::Object *, CreateISerializable, (app::JsonSerializerInternalReader * this_ptr, app::JsonReader * reader, app::JsonISerializableContract * contract, app::JsonProperty * member, app::String * id))
    IL2CPP_REGISTER_METHODINFO(0x04701DB0, JsonSerializerInternalReader_CreateISerializable__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0187C4B0, app::Object *, CreateISerializableItem, (app::JsonSerializerInternalReader * this_ptr, app::JToken * token, app::Type * type, app::JsonISerializableContract * contract, app::JsonProperty * member))
    IL2CPP_REGISTER_METHOD(0x0187C610, app::Object *, CreateDynamic, (app::JsonSerializerInternalReader * this_ptr, app::JsonReader * reader, app::JsonDynamicContract * contract, app::JsonProperty * member, app::String * id))
    IL2CPP_REGISTER_METHODINFO(0x04753750, JsonSerializerInternalReader_CreateDynamic__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0187CE60, app::Object *, CreateObjectUsingCreatorWithParameters, (app::JsonSerializerInternalReader * this_ptr, app::JsonReader * reader, app::JsonObjectContract * contract, app::JsonProperty * container_property, app::ObjectConstructor_1_System_Object_ * creator, app::String * id))
    IL2CPP_REGISTER_METHOD(0x0187E220, app::Object *, DeserializeConvertable, (app::JsonSerializerInternalReader * this_ptr, app::JsonConverter * converter, app::JsonReader * reader, app::Type * object_type, app::Object * existing_value))
    IL2CPP_REGISTER_METHOD(0x0187E530, app::List_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext_ *, ResolvePropertyAndCreatorValues, (app::JsonSerializerInternalReader * this_ptr, app::JsonObjectContract * contract, app::JsonProperty * container_property, app::JsonReader * reader, app::Type * object_type))
    IL2CPP_REGISTER_METHODINFO(0x04783760, JsonSerializerInternalReader_ResolvePropertyAndCreatorValues__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0187ED80, app::Object *, CreateNewObject, (app::JsonSerializerInternalReader * this_ptr, app::JsonReader * reader, app::JsonObjectContract * object_contract, app::JsonProperty * container_member, app::JsonProperty * container_property, app::String * id, bool * created_from_non_default_creator))
    IL2CPP_REGISTER_METHODINFO(0x04757CF8, JsonSerializerInternalReader_CreateNewObject__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0187F080, app::Object *, PopulateObject, (app::JsonSerializerInternalReader * this_ptr, app::Object * new_object, app::JsonReader * reader, app::JsonObjectContract * contract, app::JsonProperty * member, app::String * id))
    IL2CPP_REGISTER_METHODINFO(0x04791CC8, JsonSerializerInternalReader_PopulateObject__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0187FBE0, bool, ShouldDeserialize, (app::JsonSerializerInternalReader * this_ptr, app::JsonReader * reader, app::JsonProperty * property, app::Object * target))
    IL2CPP_REGISTER_METHOD(0x0187FDD0, bool, CheckPropertyName, (app::JsonSerializerInternalReader * this_ptr, app::JsonReader * reader, app::String * member_name))
    IL2CPP_REGISTER_METHOD(0x0187FF70, void, SetExtensionData, (app::JsonSerializerInternalReader * this_ptr, app::JsonObjectContract * contract, app::JsonProperty * member, app::JsonReader * reader, app::String * member_name, app::Object * o))
    IL2CPP_REGISTER_METHODINFO(0x04732138, JsonSerializerInternalReader_SetExtensionData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01880100, app::Object *, ReadExtensionDataValue, (app::JsonSerializerInternalReader * this_ptr, app::JsonObjectContract * contract, app::JsonProperty * member, app::JsonReader * reader))
    IL2CPP_REGISTER_METHOD(0x01880210, void, EndProcessProperty, (app::JsonSerializerInternalReader * this_ptr, app::Object * new_object, app::JsonReader * reader, app::JsonObjectContract * contract, int32_t initial_depth, app::JsonProperty * property, app::JsonSerializerInternalReader_PropertyPresence__Enum presence, bool set_default_value))
    IL2CPP_REGISTER_METHODINFO(0x04762608, JsonSerializerInternalReader_EndProcessProperty__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01880670, void, SetPropertyPresence, (app::JsonSerializerInternalReader * this_ptr, app::JsonReader * reader, app::JsonProperty * property, app::Dictionary_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_ * required_properties))
    IL2CPP_REGISTER_METHOD(0x018807D0, void, HandleError, (app::JsonSerializerInternalReader * this_ptr, app::JsonReader * reader, bool read_past_error, int32_t initial_depth))
}
