#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Serialization::JsonTypeReflector {
IL2CPP_REGISTER_METHOD(0x01BF8DD0, bool, CanTypeDescriptorConvertString, (Type * type, TypeConverter * * typeConverter));
IL2CPP_REGISTER_METHOD(0x01BF9150, DataContractAttribute *, GetDataContractAttribute, (Type * type));
IL2CPP_REGISTER_METHOD(0x01BF9240, DataMemberAttribute *, GetDataMemberAttribute, (MemberInfo_1 * memberInfo));
IL2CPP_REGISTER_METHOD(0x01BF9500, MemberSerialization__Enum, GetObjectMemberSerialization, (Type * objectType, bool ignoreSerializableAttribute));
IL2CPP_REGISTER_METHOD(0x01BF9650, JsonConverter *, GetJsonConverter, (Object * attributeProvider));
IL2CPP_REGISTER_METHOD(0x01BF97A0, JsonConverter *, CreateJsonConverterInstance, (Type * converterType, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x01BF9910, NamingStrategy *, CreateNamingStrategyInstance, (Type * namingStrategyType, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x01BF9A80, NamingStrategy *, GetContainerNamingStrategy, (JsonContainerAttribute * containerAttribute));
IL2CPP_REGISTER_METHOD(0x01BF9B90, Func_2_Object_Object__1 *, GetCreator, (Type * type));
IL2CPP_REGISTER_METHODINFO(0x04794A30, JsonTypeReflector_GetCreator__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BF9E50, Type *, GetAssociatedMetadataType, (Type * type));
IL2CPP_REGISTER_METHOD(0x01BF9F30, Type *, GetAssociateMetadataTypeFromAttribute, (Type * type));
IL2CPP_REGISTER_METHODINFO(0x04725390, JsonTypeReflector_GetAssociateMetadataTypeFromAttribute__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BFA250, bool, IsNonSerializable, (Object * provider));
IL2CPP_REGISTER_METHOD(0x01BFA300, bool, IsSerializable, (Object * provider));
IL2CPP_REGISTER_METHOD(0x01BFA3B0, bool, get_DynamicCodeGeneration, ());
IL2CPP_REGISTER_METHOD(0x01BFA990, bool, get_FullyTrusted, ());
IL2CPP_REGISTER_METHOD(0x01BFABB0, ReflectionDelegateFactory *, get_ReflectionDelegateFactory, ());
IL2CPP_REGISTER_METHOD(0x01BFAD30, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x015F4A70, Object *, GetCachedAttribute, (Object * attributeProvider));
IL2CPP_REGISTER_METHOD(0x015F4880, Object *, GetAttribute, (Type * type));
IL2CPP_REGISTER_METHOD(0x015F4580, Object *, GetAttribute, (MemberInfo_1 * memberInfo));
IL2CPP_REGISTER_METHOD(0x015F4430, Object *, GetAttribute, (Object * provider));
IL2CPP_REGISTER_METHOD(0x015F4430, JsonPropertyAttribute *, GetAttribute, (Object * provider));
IL2CPP_REGISTER_METHODINFO(0x0478C568, JsonTypeReflector_GetAttribute_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015F4430, JsonRequiredAttribute *, GetAttribute, (Object * provider));
IL2CPP_REGISTER_METHODINFO(0x047557F8, JsonTypeReflector_GetAttribute_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015F4430, DataMemberAttribute *, GetAttribute, (Object * provider));
IL2CPP_REGISTER_METHODINFO(0x04704958, JsonTypeReflector_GetAttribute_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015F4A70, JsonObjectAttribute *, GetCachedAttribute, (Object * attributeProvider));
IL2CPP_REGISTER_METHODINFO(0x047703E8, JsonTypeReflector_GetCachedAttribute_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015F4A70, JsonContainerAttribute *, GetCachedAttribute, (Object * attributeProvider));
IL2CPP_REGISTER_METHODINFO(0x04779A08, JsonTypeReflector_GetCachedAttribute_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015F4430, JsonContainerAttribute *, GetAttribute, (Object * provider));
IL2CPP_REGISTER_METHODINFO(0x0476DE68, JsonTypeReflector_GetAttribute_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015F4430, JsonIgnoreAttribute *, GetAttribute, (Object * provider));
IL2CPP_REGISTER_METHODINFO(0x0478E2B0, JsonTypeReflector_GetAttribute_7__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015F4430, JsonExtensionDataAttribute *, GetAttribute, (Object * provider));
IL2CPP_REGISTER_METHODINFO(0x0470A6D8, JsonTypeReflector_GetAttribute_8__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015F4430, IgnoreDataMemberAttribute *, GetAttribute, (Object * provider));
IL2CPP_REGISTER_METHODINFO(0x04768450, JsonTypeReflector_GetAttribute_9__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015F4430, DefaultValueAttribute *, GetAttribute, (Object * provider));
IL2CPP_REGISTER_METHODINFO(0x04702530, JsonTypeReflector_GetAttribute_10__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015F4A70, JsonConverterAttribute *, GetCachedAttribute, (Object * attributeProvider));
IL2CPP_REGISTER_METHODINFO(0x0473E3A0, JsonTypeReflector_GetCachedAttribute_3__MethodInfo);
}
