#include <interception_macros.h>

namespace app::methods::System::Runtime::Serialization::ObjectManager {
IL2CPP_REGISTER_METHOD(0x01ED7C10, void, __ctor, (ObjectManager * __this, ISurrogateSelector * selector, StreamingContext context, bool checkSecurity, bool isCrossAppDomain));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanCallGetType, (ObjectManager * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_TopObject, (ObjectManager * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x002FBB00, Object *, get_TopObject, (ObjectManager * __this));
IL2CPP_REGISTER_METHOD(0x01ED7CC0, ObjectHolderList *, get_SpecialFixupObjects, (ObjectManager * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x01ED7E80, ObjectHolder *, FindObjectHolder, (ObjectManager * __this, int64_t objectID));
IL2CPP_REGISTER_METHOD(0x01ED7EF0, ObjectHolder *, FindOrCreateObjectHolder, (ObjectManager * __this, int64_t objectID));
IL2CPP_REGISTER_METHOD(0x01ED80F0, void, AddObjectHolder, (ObjectManager * __this, ObjectHolder * holder));
IL2CPP_REGISTER_METHOD(0x01ED82C0, bool, GetCompletionInfo, (ObjectManager * __this, FixupHolder * fixup, ObjectHolder * * holder, Object * * member, bool bThrowIfMissing));
IL2CPP_REGISTER_METHODINFO(0x0478BB70, ObjectManager_GetCompletionInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01ED8670, void, FixupSpecialObject, (ObjectManager * __this, ObjectHolder * holder));
IL2CPP_REGISTER_METHODINFO(0x04714880, ObjectManager_FixupSpecialObject__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01ED88C0, bool, ResolveObjectReference, (ObjectManager * __this, ObjectHolder * holder));
IL2CPP_REGISTER_METHODINFO(0x04764890, ObjectManager_ResolveObjectReference__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01ED8B30, bool, DoValueTypeFixup, (ObjectManager * __this, FieldInfo_1 * memberToFix, ObjectHolder * holder, Object * value));
IL2CPP_REGISTER_METHOD(0x01ED9120, void, CompleteObject, (ObjectManager * __this, ObjectHolder * holder, bool bObjectFullyComplete));
IL2CPP_REGISTER_METHODINFO(0x0478BC70, ObjectManager_CompleteObject__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01ED98E0, void, DoNewlyRegisteredObjectFixups, (ObjectManager * __this, ObjectHolder * holder));
IL2CPP_REGISTER_METHOD(0x01ED9AF0, Object *, GetObject, (ObjectManager * __this, int64_t objectID));
IL2CPP_REGISTER_METHODINFO(0x0476D480, ObjectManager_GetObject__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01ED9C00, void, RegisterString, (ObjectManager * __this, String * obj, int64_t objectID, SerializationInfo * info, int64_t idOfContainingObj, MemberInfo_1 * member));
IL2CPP_REGISTER_METHOD(0x01ED9E50, void, RegisterObject, (ObjectManager * __this, Object * obj, int64_t objectID, SerializationInfo * info, int64_t idOfContainingObj, MemberInfo_1 * member, Int32__Array * arrayIndex));
IL2CPP_REGISTER_METHODINFO(0x0474D268, ObjectManager_RegisterObject__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EDA550, void, CompleteISerializableObject, (ObjectManager * __this, Object * obj, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04763C90, ObjectManager_CompleteISerializableObject__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EDA770, RuntimeConstructorInfo *, GetConstructor, (RuntimeType * t));
IL2CPP_REGISTER_METHODINFO(0x0478F448, ObjectManager_GetConstructor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EDA8C0, void, DoFixups, (ObjectManager * __this));
IL2CPP_REGISTER_METHODINFO(0x0474F948, ObjectManager_DoFixups__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EDADC0, void, RegisterFixup, (ObjectManager * __this, FixupHolder * fixup, int64_t objectToBeFixed, int64_t objectRequired));
IL2CPP_REGISTER_METHODINFO(0x047777C8, ObjectManager_RegisterFixup__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EDAF10, void, RecordFixup, (ObjectManager * __this, int64_t objectToBeFixed, MemberInfo_1 * member, int64_t objectRequired));
IL2CPP_REGISTER_METHODINFO(0x04720D50, ObjectManager_RecordFixup__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EDB260, void, RecordDelayedFixup, (ObjectManager * __this, int64_t objectToBeFixed, String * memberName, int64_t objectRequired));
IL2CPP_REGISTER_METHODINFO(0x047925B0, ObjectManager_RecordDelayedFixup__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EDB480, void, RecordArrayElementFixup, (ObjectManager * __this, int64_t arrayToBeFixed, Int32__Array * indices, int64_t objectRequired));
IL2CPP_REGISTER_METHODINFO(0x04722D08, ObjectManager_RecordArrayElementFixup__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EDB6A0, void, RaiseDeserializationEvent, (ObjectManager * __this));
IL2CPP_REGISTER_METHOD(0x01EDB6F0, void, AddOnDeserialization, (ObjectManager * __this, DeserializationEventHandler * handler));
IL2CPP_REGISTER_METHOD(0x01EDB7B0, void, AddOnDeserialized, (ObjectManager * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x01EDB8A0, void, RaiseOnDeserializedEvent, (ObjectManager * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x01EDB990, void, RaiseOnDeserializingEvent, (ObjectManager * __this, Object * obj));
}
