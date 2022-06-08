#include <interception_macros.h>

namespace app::methods::System::Runtime::Serialization::Formatters::Binary::ObjectReader {
IL2CPP_REGISTER_METHOD(0x01D94A90, SerStack *, get_ValueFixupStack, (ObjectReader * __this));
IL2CPP_REGISTER_METHOD(0x002FBB80, Object *, get_TopObject, (ObjectReader * __this));
IL2CPP_REGISTER_METHOD(0x01D94C00, void, set_TopObject, (ObjectReader * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x01D94C20, void, __ctor, (ObjectReader * __this, Stream * stream, ISurrogateSelector * selector, StreamingContext context, InternalFE * formatterEnums, SerializationBinder * binder));
IL2CPP_REGISTER_METHODINFO(0x04731DE0, ObjectReader__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D94DF0, Object *, Deserialize, (ObjectReader * __this, HeaderHandler * handler, _BinaryParser * serParser, bool fCheck));
IL2CPP_REGISTER_METHODINFO(0x04729CD8, ObjectReader_Deserialize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D95330, bool, HasSurrogate, (ObjectReader * __this, Type * t));
IL2CPP_REGISTER_METHOD(0x01D95480, void, CheckSerializable, (ObjectReader * __this, Type * t));
IL2CPP_REGISTER_METHODINFO(0x047985E0, ObjectReader_CheckSerializable__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D95620, void, InitFullDeserialization, (ObjectReader * __this));
IL2CPP_REGISTER_METHOD(0x01D959A0, Object *, CrossAppDomainArray, (ObjectReader * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01D959E0, ReadObjectInfo *, CreateReadObjectInfo, (ObjectReader * __this, Type * objectType));
IL2CPP_REGISTER_METHOD(0x01D95AA0, ReadObjectInfo *, CreateReadObjectInfo, (ObjectReader * __this, Type * objectType, String__Array * memberNames, Type__Array * memberTypes));
IL2CPP_REGISTER_METHOD(0x01D95B90, void, Parse, (ObjectReader * __this, ParseRecord * pr));
IL2CPP_REGISTER_METHODINFO(0x04787050, ObjectReader_Parse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D95E60, void, ParseError, (ObjectReader * __this, ParseRecord * processing, ParseRecord * onStack));
IL2CPP_REGISTER_METHODINFO(0x0475AD28, ObjectReader_ParseError__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D96160, void, ParseSerializedStreamHeader, (ObjectReader * __this, ParseRecord * pr));
IL2CPP_REGISTER_METHOD(0x01D96190, void, ParseSerializedStreamHeaderEnd, (ObjectReader * __this, ParseRecord * pr));
IL2CPP_REGISTER_METHOD(0x01D961C0, void, ParseObject, (ObjectReader * __this, ParseRecord * pr));
IL2CPP_REGISTER_METHODINFO(0x0473B878, ObjectReader_ParseObject__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D966B0, void, ParseObjectEnd, (ObjectReader * __this, ParseRecord * pr));
IL2CPP_REGISTER_METHOD(0x01D96AC0, void, ParseArray, (ObjectReader * __this, ParseRecord * pr));
IL2CPP_REGISTER_METHODINFO(0x0478AEB8, ObjectReader_ParseArray__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D97560, void, NextRectangleMap, (ObjectReader * __this, ParseRecord * pr));
IL2CPP_REGISTER_METHOD(0x01D976A0, void, ParseArrayMember, (ObjectReader * __this, ParseRecord * pr));
IL2CPP_REGISTER_METHODINFO(0x04716440, ObjectReader_ParseArrayMember__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D984F0, void, ParseArrayMemberEnd, (ObjectReader * __this, ParseRecord * pr));
IL2CPP_REGISTER_METHOD(0x01D98520, void, ParseMember, (ObjectReader * __this, ParseRecord * pr));
IL2CPP_REGISTER_METHODINFO(0x04752330, ObjectReader_ParseMember__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D98E70, void, ParseMemberEnd, (ObjectReader * __this, ParseRecord * pr));
IL2CPP_REGISTER_METHOD(0x01D98F60, void, ParseString, (ObjectReader * __this, ParseRecord * pr, ParseRecord * parentPr));
IL2CPP_REGISTER_METHOD(0x01D98FB0, void, RegisterObject, (ObjectReader * __this, Object * obj, ParseRecord * pr, ParseRecord * objectPr));
IL2CPP_REGISTER_METHOD(0x01D98FD0, void, RegisterObject, (ObjectReader * __this, Object * obj, ParseRecord * pr, ParseRecord * objectPr, bool bIsString));
IL2CPP_REGISTER_METHOD(0x01D99160, int64_t, GetId, (ObjectReader * __this, int64_t objectId));
IL2CPP_REGISTER_METHOD(0x01D99510, Type *, Bind, (ObjectReader * __this, String * assemblyString, String * typeString));
IL2CPP_REGISTER_METHOD(0x01D99570, Type *, FastBindToType, (ObjectReader * __this, String * assemblyName, String * typeName));
IL2CPP_REGISTER_METHOD(0x01D99980, Assembly *, ResolveSimpleAssemblyName, (AssemblyName * assemblyName));
IL2CPP_REGISTER_METHODINFO(0x04753A98, ObjectReader_ResolveSimpleAssemblyName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D99A10, void, GetSimplyNamedTypeFromAssembly, (Assembly * assm, String * typeName, Type * * type));
IL2CPP_REGISTER_METHOD(0x01D99DA0, Type *, GetType, (ObjectReader * __this, BinaryAssemblyInfo * assemblyInfo, String * name));
IL2CPP_REGISTER_METHOD(0x01D99FD0, void, CheckTypeForwardedTo, (Assembly * sourceAssembly, Assembly * destAssembly, Type * resolvedType));
}
