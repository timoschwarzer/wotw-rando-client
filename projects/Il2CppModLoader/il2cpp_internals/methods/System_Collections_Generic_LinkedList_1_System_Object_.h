#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::LinkedList_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (LinkedList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, LinkedListNode_1_System_Object_ *, get_First, (LinkedList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x018E6DB0, LinkedListNode_1_System_Object_ *, get_Last, (LinkedList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (LinkedList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (LinkedList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x018E7EE0, Object *, ICollection_get_SyncRoot, (LinkedList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x018E6D70, void, __ctor, (LinkedList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x018E6D90, void, __ctor, (LinkedList_1_System_Object_ * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x018E6DC0, void, System_Collections_Generic_ICollection_T__Add, (LinkedList_1_System_Object_ * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x018E6DF0, LinkedListNode_1_System_Object_ *, AddFirst, (LinkedList_1_System_Object_ * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x018E6F50, void, AddFirst, (LinkedList_1_System_Object_ * __this, LinkedListNode_1_System_Object_ * node));
IL2CPP_REGISTER_METHOD(0x018E6FE0, LinkedListNode_1_System_Object_ *, AddLast, (LinkedList_1_System_Object_ * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x018E7130, void, AddLast, (LinkedList_1_System_Object_ * __this, LinkedListNode_1_System_Object_ * node));
IL2CPP_REGISTER_METHOD(0x018E71C0, void, Clear, (LinkedList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x018E7250, bool, Contains, (LinkedList_1_System_Object_ * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x018E7280, void, CopyTo, (LinkedList_1_System_Object_ * __this, Object__Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04708080, LinkedList_1_System_Object__CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018E74C0, LinkedListNode_1_System_Object_ *, Find, (LinkedList_1_System_Object_ * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x018E7580, LinkedList_1_T_Enumerator_System_Object_, GetEnumerator, (LinkedList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x018E75D0, IEnumerator_1_System_Object_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (LinkedList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x018E7660, bool, Remove, (LinkedList_1_System_Object_ * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x018E76D0, void, Remove, (LinkedList_1_System_Object_ * __this, LinkedListNode_1_System_Object_ * node));
IL2CPP_REGISTER_METHOD(0x018E7740, void, RemoveLast, (LinkedList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04798040, LinkedList_1_System_Object__RemoveLast__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018E7820, void, GetObjectData, (LinkedList_1_System_Object_ * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0475F018, LinkedList_1_System_Object__GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018E79E0, void, OnDeserialization, (LinkedList_1_System_Object_ * __this, Object * sender));
IL2CPP_REGISTER_METHODINFO(0x04707C48, LinkedList_1_System_Object__OnDeserialization__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018E7C00, void, InternalInsertNodeBefore, (LinkedList_1_System_Object_ * __this, LinkedListNode_1_System_Object_ * node, LinkedListNode_1_System_Object_ * newNode));
IL2CPP_REGISTER_METHOD(0x018E7C50, void, InternalInsertNodeToEmptyList, (LinkedList_1_System_Object_ * __this, LinkedListNode_1_System_Object_ * newNode));
IL2CPP_REGISTER_METHOD(0x018E7C80, void, InternalRemoveNode, (LinkedList_1_System_Object_ * __this, LinkedListNode_1_System_Object_ * node));
IL2CPP_REGISTER_METHOD(0x018E7D10, void, ValidateNewNode, (LinkedList_1_System_Object_ * __this, LinkedListNode_1_System_Object_ * node));
IL2CPP_REGISTER_METHODINFO(0x0478E3B8, LinkedList_1_System_Object__ValidateNewNode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018E7DF0, void, ValidateNode, (LinkedList_1_System_Object_ * __this, LinkedListNode_1_System_Object_ * node));
IL2CPP_REGISTER_METHODINFO(0x0471E2A8, LinkedList_1_System_Object__ValidateNode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018E8040, void, ICollection_CopyTo, (LinkedList_1_System_Object_ * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04720220, LinkedList_1_System_Object__System_Collections_ICollection_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018E75D0, IEnumerator *, IEnumerable_GetEnumerator, (LinkedList_1_System_Object_ * __this));
}
