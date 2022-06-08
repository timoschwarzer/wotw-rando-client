#include <interception_macros.h>

namespace app::methods::System::Runtime::Serialization::ObjectHolder {
IL2CPP_REGISTER_METHOD(0x01ED59B0, void, __ctor, (ObjectHolder * __this, int64_t objID));
IL2CPP_REGISTER_METHOD(0x01ED5A70, void, __ctor, (ObjectHolder * __this, Object * obj, int64_t objID, SerializationInfo * info, ISerializationSurrogate * surrogate, int64_t idOfContainingObj, FieldInfo_1 * field, Int32__Array * arrayIndex));
IL2CPP_REGISTER_METHODINFO(0x04755758, ObjectHolder__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01ED5D60, void, __ctor, (ObjectHolder * __this, String * obj, int64_t objID, SerializationInfo * info, ISerializationSurrogate * surrogate, int64_t idOfContainingObj, FieldInfo_1 * field, Int32__Array * arrayIndex));
IL2CPP_REGISTER_METHOD(0x01ED5F30, void, IncrementDescendentFixups, (ObjectHolder * __this, int32_t amount));
IL2CPP_REGISTER_METHOD(0x01ED5F40, void, DecrementFixupsRemaining, (ObjectHolder * __this, ObjectManager * manager));
IL2CPP_REGISTER_METHOD(0x01ED5FB0, void, RemoveDependency, (ObjectHolder * __this, int64_t id));
IL2CPP_REGISTER_METHOD(0x01ED6050, void, AddFixup, (ObjectHolder * __this, FixupHolder * fixup, ObjectManager * manager));
IL2CPP_REGISTER_METHOD(0x01ED62A0, void, UpdateDescendentDependencyChain, (ObjectHolder * __this, int32_t amount, ObjectManager * manager));
IL2CPP_REGISTER_METHOD(0x01ED6310, void, AddDependency, (ObjectHolder * __this, int64_t dependentObject));
IL2CPP_REGISTER_METHOD(0x01ED65E0, void, UpdateData, (ObjectHolder * __this, Object * obj, SerializationInfo * info, ISerializationSurrogate * surrogate, int64_t idOfContainer, FieldInfo_1 * field, Int32__Array * arrayIndex, ObjectManager * manager));
IL2CPP_REGISTER_METHODINFO(0x04772638, ObjectHolder_UpdateData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005100F0, void, MarkForCompletionWhenAvailable, (ObjectHolder * __this));
IL2CPP_REGISTER_METHOD(0x01ED6850, void, SetFlags, (ObjectHolder * __this));
IL2CPP_REGISTER_METHOD(0x01760C10, bool, get_IsIncompleteObjectReference, (ObjectHolder * __this));
IL2CPP_REGISTER_METHOD(0x01ED6920, void, set_IsIncompleteObjectReference, (ObjectHolder * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01ED6940, bool, get_RequiresDelayedFixup, (ObjectHolder * __this));
IL2CPP_REGISTER_METHOD(0x01760C20, bool, get_RequiresValueTypeFixup, (ObjectHolder * __this));
IL2CPP_REGISTER_METHOD(0x01ED6950, bool, get_ValueTypeFixupPerformed, (ObjectHolder * __this));
IL2CPP_REGISTER_METHOD(0x01ED6980, void, set_ValueTypeFixupPerformed, (ObjectHolder * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0194E610, bool, get_HasISerializable, (ObjectHolder * __this));
IL2CPP_REGISTER_METHOD(0x01ED6990, bool, get_HasSurrogate, (ObjectHolder * __this));
IL2CPP_REGISTER_METHOD(0x01ED69A0, bool, get_CanSurrogatedObjectValueChange, (ObjectHolder * __this));
IL2CPP_REGISTER_METHOD(0x01ED6A80, bool, get_CanObjectValueChange, (ObjectHolder * __this));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_DirectlyDependentObjects, (ObjectHolder * __this));
IL2CPP_REGISTER_METHOD(0x01ED6AA0, int32_t, get_TotalDependentObjects, (ObjectHolder * __this));
IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_Reachable, (ObjectHolder * __this));
IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_Reachable, (ObjectHolder * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01D60C50, bool, get_TypeLoadExceptionReachable, (ObjectHolder * __this));
IL2CPP_REGISTER_METHOD(0x002FBB80, TypeLoadExceptionHolder *, get_TypeLoadException, (ObjectHolder * __this));
IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_TypeLoadException, (ObjectHolder * __this, TypeLoadExceptionHolder * value));
IL2CPP_REGISTER_METHOD(0x002FA280, Object *, get_ObjectValue, (ObjectHolder * __this));
IL2CPP_REGISTER_METHOD(0x01ED6AB0, void, SetObjectValue, (ObjectHolder * __this, Object * obj, ObjectManager * manager));
IL2CPP_REGISTER_METHOD(0x002FBB00, SerializationInfo *, get_SerializationInfo, (ObjectHolder * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_SerializationInfo, (ObjectHolder * __this, SerializationInfo * value));
IL2CPP_REGISTER_METHOD(0x002FB990, ISerializationSurrogate *, get_Surrogate, (ObjectHolder * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, LongList *, get_DependentObjects, (ObjectHolder * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_DependentObjects, (ObjectHolder * __this, LongList * value));
IL2CPP_REGISTER_METHOD(0x01ED6C00, bool, get_RequiresSerInfoFixup, (ObjectHolder * __this));
IL2CPP_REGISTER_METHOD(0x01ED6C20, void, set_RequiresSerInfoFixup, (ObjectHolder * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FBB60, ValueTypeFixupInfo *, get_ValueFixup, (ObjectHolder * __this));
IL2CPP_REGISTER_METHOD(0x01ED6C40, bool, get_CompletelyFixed, (ObjectHolder * __this));
IL2CPP_REGISTER_METHOD(0x01ED6C60, int64_t, get_ContainerID, (ObjectHolder * __this));
}
