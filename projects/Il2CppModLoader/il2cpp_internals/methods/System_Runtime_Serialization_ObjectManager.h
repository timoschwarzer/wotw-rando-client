#include <interception_macros.h>

namespace app::methods::System_Runtime_Serialization::ObjectManager {
    IL2CPP_REGISTER_METHOD(0x01ED7C10, void, __ctor, (app::ObjectManager * this_ptr, app::ISurrogateSelector * selector, app::StreamingContext context, bool check_security, bool is_cross_app_domain));
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanCallGetType, (app::ObjectManager * this_ptr, app::Object * obj));
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_TopObject, (app::ObjectManager * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Object *, get_TopObject, (app::ObjectManager * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01ED7CC0, app::ObjectHolderList *, get_SpecialFixupObjects, (app::ObjectManager * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
    IL2CPP_REGISTER_METHOD(0x01ED7E80, app::ObjectHolder *, FindObjectHolder, (app::ObjectManager * this_ptr, int64_t object_i_d));
    IL2CPP_REGISTER_METHOD(0x01ED7EF0, app::ObjectHolder *, FindOrCreateObjectHolder, (app::ObjectManager * this_ptr, int64_t object_i_d));
    IL2CPP_REGISTER_METHOD(0x01ED80F0, void, AddObjectHolder, (app::ObjectManager * this_ptr, app::ObjectHolder * holder));
    IL2CPP_REGISTER_METHOD(0x01ED82C0, bool, GetCompletionInfo, (app::ObjectManager * this_ptr, app::FixupHolder * fixup, app::ObjectHolder * * holder, app::Object * * member, bool b_throw_if_missing));
    IL2CPP_REGISTER_METHODINFO(0x0478BB70, ObjectManager_GetCompletionInfo__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01ED8670, void, FixupSpecialObject, (app::ObjectManager * this_ptr, app::ObjectHolder * holder));
    IL2CPP_REGISTER_METHODINFO(0x04714880, ObjectManager_FixupSpecialObject__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01ED88C0, bool, ResolveObjectReference, (app::ObjectManager * this_ptr, app::ObjectHolder * holder));
    IL2CPP_REGISTER_METHODINFO(0x04764890, ObjectManager_ResolveObjectReference__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01ED8B30, bool, DoValueTypeFixup, (app::ObjectManager * this_ptr, app::FieldInfo_1 * member_to_fix, app::ObjectHolder * holder, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x01ED9120, void, CompleteObject, (app::ObjectManager * this_ptr, app::ObjectHolder * holder, bool b_object_fully_complete));
    IL2CPP_REGISTER_METHODINFO(0x0478BC70, ObjectManager_CompleteObject__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01ED98E0, void, DoNewlyRegisteredObjectFixups, (app::ObjectManager * this_ptr, app::ObjectHolder * holder));
    IL2CPP_REGISTER_METHOD(0x01ED9AF0, app::Object *, GetObject, (app::ObjectManager * this_ptr, int64_t object_i_d));
    IL2CPP_REGISTER_METHODINFO(0x0476D480, ObjectManager_GetObject__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01ED9C00, void, RegisterString, (app::ObjectManager * this_ptr, app::String * obj, int64_t object_i_d, app::SerializationInfo * info, int64_t id_of_containing_obj, app::MemberInfo_1 * member));
    IL2CPP_REGISTER_METHOD(0x01ED9E50, void, RegisterObject, (app::ObjectManager * this_ptr, app::Object * obj, int64_t object_i_d, app::SerializationInfo * info, int64_t id_of_containing_obj, app::MemberInfo_1 * member, app::Int32__Array * array_index));
    IL2CPP_REGISTER_METHODINFO(0x0474D268, ObjectManager_RegisterObject__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01EDA550, void, CompleteISerializableObject, (app::ObjectManager * this_ptr, app::Object * obj, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHODINFO(0x04763C90, ObjectManager_CompleteISerializableObject__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01EDA770, app::RuntimeConstructorInfo *, GetConstructor, (app::RuntimeType * t));
    IL2CPP_REGISTER_METHODINFO(0x0478F448, ObjectManager_GetConstructor__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01EDA8C0, void, DoFixups, (app::ObjectManager * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0474F948, ObjectManager_DoFixups__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01EDADC0, void, RegisterFixup, (app::ObjectManager * this_ptr, app::FixupHolder * fixup, int64_t object_to_be_fixed, int64_t object_required));
    IL2CPP_REGISTER_METHODINFO(0x047777C8, ObjectManager_RegisterFixup__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01EDAF10, void, RecordFixup, (app::ObjectManager * this_ptr, int64_t object_to_be_fixed, app::MemberInfo_1 * member, int64_t object_required));
    IL2CPP_REGISTER_METHODINFO(0x04720D50, ObjectManager_RecordFixup__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01EDB260, void, RecordDelayedFixup, (app::ObjectManager * this_ptr, int64_t object_to_be_fixed, app::String * member_name, int64_t object_required));
    IL2CPP_REGISTER_METHODINFO(0x047925B0, ObjectManager_RecordDelayedFixup__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01EDB480, void, RecordArrayElementFixup, (app::ObjectManager * this_ptr, int64_t array_to_be_fixed, app::Int32__Array * indices, int64_t object_required));
    IL2CPP_REGISTER_METHODINFO(0x04722D08, ObjectManager_RecordArrayElementFixup__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01EDB6A0, void, RaiseDeserializationEvent, (app::ObjectManager * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01EDB6F0, void, AddOnDeserialization, (app::ObjectManager * this_ptr, app::DeserializationEventHandler * handler));
    IL2CPP_REGISTER_METHOD(0x01EDB7B0, void, AddOnDeserialized, (app::ObjectManager * this_ptr, app::Object * obj));
    IL2CPP_REGISTER_METHOD(0x01EDB8A0, void, RaiseOnDeserializedEvent, (app::ObjectManager * this_ptr, app::Object * obj));
    IL2CPP_REGISTER_METHOD(0x01EDB990, void, RaiseOnDeserializingEvent, (app::ObjectManager * this_ptr, app::Object * obj));
}
