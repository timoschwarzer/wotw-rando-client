#include <interception_macros.h>

namespace app::methods::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x02771D10, void, set_Capacity, (ReadOnlyCollectionBuilder_1_System_Object_ * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x04782F38, ReadOnlyCollectionBuilder_1_System_Object__set_Capacity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (ReadOnlyCollectionBuilder_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02772110, Object *, get_Item, (ReadOnlyCollectionBuilder_1_System_Object_ * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04772810, ReadOnlyCollectionBuilder_1_System_Object__get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027721F0, void, set_Item, (ReadOnlyCollectionBuilder_1_System_Object_ * __this, int32_t index, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04782708, ReadOnlyCollectionBuilder_1_System_Object__set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (ReadOnlyCollectionBuilder_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly, (ReadOnlyCollectionBuilder_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize, (ReadOnlyCollectionBuilder_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02772BE0, Object *, IList_get_Item, (ReadOnlyCollectionBuilder_1_System_Object_ * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02772C10, void, IList_set_Item, (ReadOnlyCollectionBuilder_1_System_Object_ * __this, int32_t index, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04764AE8, ReadOnlyCollectionBuilder_1_System_Object__System_Collections_IList_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (ReadOnlyCollectionBuilder_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x004C50A0, Object *, ICollection_get_SyncRoot, (ReadOnlyCollectionBuilder_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x0243CB70, void, __ctor, (ReadOnlyCollectionBuilder_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02771C10, void, __ctor, (ReadOnlyCollectionBuilder_1_System_Object_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHODINFO(0x04709EE8, ReadOnlyCollectionBuilder_1_System_Object___ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02771E60, int32_t, IndexOf, (ReadOnlyCollectionBuilder_1_System_Object_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x02771E90, void, Insert, (ReadOnlyCollectionBuilder_1_System_Object_ * __this, int32_t index, Object * item));
IL2CPP_REGISTER_METHODINFO(0x047824E0, ReadOnlyCollectionBuilder_1_System_Object__Insert__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02771FF0, void, RemoveAt, (ReadOnlyCollectionBuilder_1_System_Object_ * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0476D1F8, ReadOnlyCollectionBuilder_1_System_Object__RemoveAt__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027722E0, void, Add, (ReadOnlyCollectionBuilder_1_System_Object_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (ReadOnlyCollectionBuilder_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02772370, bool, Contains, (ReadOnlyCollectionBuilder_1_System_Object_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x025E95F0, void, CopyTo, (ReadOnlyCollectionBuilder_1_System_Object_ * __this, Object__Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x02772480, bool, Remove, (ReadOnlyCollectionBuilder_1_System_Object_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x027724F0, IEnumerator_1_System_Object_ *, GetEnumerator, (ReadOnlyCollectionBuilder_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02772600, IEnumerator *, IEnumerable_GetEnumerator, (ReadOnlyCollectionBuilder_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02772630, int32_t, IList_Add, (ReadOnlyCollectionBuilder_1_System_Object_ * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04738480, ReadOnlyCollectionBuilder_1_System_Object__System_Collections_IList_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027727E0, bool, IList_Contains, (ReadOnlyCollectionBuilder_1_System_Object_ * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x027728B0, int32_t, IList_IndexOf, (ReadOnlyCollectionBuilder_1_System_Object_ * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02772980, void, IList_Insert, (ReadOnlyCollectionBuilder_1_System_Object_ * __this, int32_t index, Object * value));
IL2CPP_REGISTER_METHODINFO(0x0477ADD0, ReadOnlyCollectionBuilder_1_System_Object__System_Collections_IList_Insert__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02772B20, void, IList_Remove, (ReadOnlyCollectionBuilder_1_System_Object_ * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02772DB0, void, ICollection_CopyTo, (ReadOnlyCollectionBuilder_1_System_Object_ * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x047694B0, ReadOnlyCollectionBuilder_1_System_Object__System_Collections_ICollection_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025EAEF0, Object__Array *, ToArray, (ReadOnlyCollectionBuilder_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02772ED0, ReadOnlyCollection_1_System_Object_ *, ToReadOnlyCollection, (ReadOnlyCollectionBuilder_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02773040, void, EnsureCapacity, (ReadOnlyCollectionBuilder_1_System_Object_ * __this, int32_t min));
IL2CPP_REGISTER_METHOD(0x027730C0, bool, IsCompatibleObject, (Object * value));
IL2CPP_REGISTER_METHOD(0x02773130, void, ValidateNullValue, (Object * value, String * argument));
IL2CPP_REGISTER_METHODINFO(0x0470A888, ReadOnlyCollectionBuilder_1_System_Object__ValidateNullValue__MethodInfo);
}
