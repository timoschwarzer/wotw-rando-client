#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_Datadog_ThresholdItem_ {
IL2CPP_REGISTER_METHOD(0x025E8A60, Datadog_ThresholdItem, get_Item, (List_1_Datadog_ThresholdItem_ * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0473F0D0, List_1_Datadog_ThresholdItem__get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (List_1_Datadog_ThresholdItem_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04725CE8, List_1_Datadog_ThresholdItem__get_Count__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025E8A90, void, set_Item, (List_1_Datadog_ThresholdItem_ * __this, int32_t index, Datadog_ThresholdItem value));
IL2CPP_REGISTER_METHODINFO(0x0473ACB0, List_1_Datadog_ThresholdItem__set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025E8DE0, void, Add, (List_1_Datadog_ThresholdItem_ * __this, Datadog_ThresholdItem item));
IL2CPP_REGISTER_METHODINFO(0x04766000, List_1_Datadog_ThresholdItem__Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025E81E0, void, __ctor, (List_1_Datadog_ThresholdItem_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHODINFO(0x04733450, List_1_Datadog_ThresholdItem___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025E8100, void, __ctor, (List_1_Datadog_ThresholdItem_ * __this));
IL2CPP_REGISTER_METHOD(0x02E59750, void, __ctor, (List_1_Datadog_ThresholdItem_ * __this, IEnumerable_1_Datadog_ThresholdItem_ * collection));
IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity, (List_1_Datadog_ThresholdItem_ * __this));
IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity, (List_1_Datadog_ThresholdItem_ * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize, (List_1_Datadog_ThresholdItem_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (List_1_Datadog_ThresholdItem_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly, (List_1_Datadog_ThresholdItem_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (List_1_Datadog_ThresholdItem_ * __this));
IL2CPP_REGISTER_METHOD(0x02E59BD0, Object *, ICollection_get_SyncRoot, (List_1_Datadog_ThresholdItem_ * __this));
IL2CPP_REGISTER_METHOD(0x025E8AF0, bool, IsCompatibleObject, (Object * value));
IL2CPP_REGISTER_METHOD(0x025E8BE0, Object *, IList_get_Item, (List_1_Datadog_ThresholdItem_ * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02E59D30, void, IList_set_Item, (List_1_Datadog_ThresholdItem_ * __this, int32_t index, Object * value));
IL2CPP_REGISTER_METHOD(0x02E59EC0, int32_t, IList_Add, (List_1_Datadog_ThresholdItem_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (List_1_Datadog_ThresholdItem_ * __this, IEnumerable_1_Datadog_ThresholdItem_ * collection));
IL2CPP_REGISTER_METHOD(0x025E9050, ReadOnlyCollection_1_Datadog_ThresholdItem_ *, AsReadOnly, (List_1_Datadog_ThresholdItem_ * __this));
IL2CPP_REGISTER_METHOD(0x025E9160, int32_t, BinarySearch, (List_1_Datadog_ThresholdItem_ * __this, int32_t index, int32_t count, Datadog_ThresholdItem item, IComparer_1_Datadog_ThresholdItem_ * comparer));
IL2CPP_REGISTER_METHOD(0x025E91F0, int32_t, BinarySearch, (List_1_Datadog_ThresholdItem_ * __this, Datadog_ThresholdItem item, IComparer_1_Datadog_ThresholdItem_ * comparer));
IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (List_1_Datadog_ThresholdItem_ * __this));
IL2CPP_REGISTER_METHOD(0x025E9280, bool, Contains, (List_1_Datadog_ThresholdItem_ * __this, Datadog_ThresholdItem item));
IL2CPP_REGISTER_METHOD(0x025E9350, bool, IList_Contains, (List_1_Datadog_ThresholdItem_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x025E9490, void, CopyTo, (List_1_Datadog_ThresholdItem_ * __this, Datadog_ThresholdItem__Array * array));
IL2CPP_REGISTER_METHOD(0x02E5A060, void, ICollection_CopyTo, (List_1_Datadog_ThresholdItem_ * __this, Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x025E95B0, void, CopyTo, (List_1_Datadog_ThresholdItem_ * __this, int32_t index, Datadog_ThresholdItem__Array * array, int32_t arrayIndex, int32_t count));
IL2CPP_REGISTER_METHOD(0x025E95F0, void, CopyTo, (List_1_Datadog_ThresholdItem_ * __this, Datadog_ThresholdItem__Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x025E9620, void, EnsureCapacity, (List_1_Datadog_ThresholdItem_ * __this, int32_t min));
IL2CPP_REGISTER_METHOD(0x025E96A0, bool, Exists, (List_1_Datadog_ThresholdItem_ * __this, Predicate_1_Datadog_ThresholdItem_ * match));
IL2CPP_REGISTER_METHOD(0x025E96E0, Datadog_ThresholdItem, Find, (List_1_Datadog_ThresholdItem_ * __this, Predicate_1_Datadog_ThresholdItem_ * match));
IL2CPP_REGISTER_METHOD(0x025E9800, List_1_Datadog_ThresholdItem_ *, FindAll, (List_1_Datadog_ThresholdItem_ * __this, Predicate_1_Datadog_ThresholdItem_ * match));
IL2CPP_REGISTER_METHOD(0x025E9A20, int32_t, FindIndex, (List_1_Datadog_ThresholdItem_ * __this, Predicate_1_Datadog_ThresholdItem_ * match));
IL2CPP_REGISTER_METHOD(0x025E9A50, int32_t, FindIndex, (List_1_Datadog_ThresholdItem_ * __this, int32_t startIndex, int32_t count, Predicate_1_Datadog_ThresholdItem_ * match));
IL2CPP_REGISTER_METHOD(0x02E5A150, void, ForEach, (List_1_Datadog_ThresholdItem_ * __this, Action_1_Datadog_ThresholdItem_ * action));
IL2CPP_REGISTER_METHOD(0x025E9D20, List_1_T_Enumerator_Datadog_ThresholdItem_, GetEnumerator, (List_1_Datadog_ThresholdItem_ * __this));
IL2CPP_REGISTER_METHOD(0x025E9D60, IEnumerator_1_Datadog_ThresholdItem_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (List_1_Datadog_ThresholdItem_ * __this));
IL2CPP_REGISTER_METHOD(0x025E9D60, IEnumerator *, IEnumerable_GetEnumerator, (List_1_Datadog_ThresholdItem_ * __this));
IL2CPP_REGISTER_METHOD(0x025E9DF0, List_1_Datadog_ThresholdItem_ *, GetRange, (List_1_Datadog_ThresholdItem_ * __this, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x025E9FA0, int32_t, IndexOf, (List_1_Datadog_ThresholdItem_ * __this, Datadog_ThresholdItem item));
IL2CPP_REGISTER_METHOD(0x025E9FE0, int32_t, IList_IndexOf, (List_1_Datadog_ThresholdItem_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x025EA130, void, Insert, (List_1_Datadog_ThresholdItem_ * __this, int32_t index, Datadog_ThresholdItem item));
IL2CPP_REGISTER_METHOD(0x02E5A300, void, IList_Insert, (List_1_Datadog_ThresholdItem_ * __this, int32_t index, Object * item));
IL2CPP_REGISTER_METHOD(0x02E5A490, void, InsertRange, (List_1_Datadog_ThresholdItem_ * __this, int32_t index, IEnumerable_1_Datadog_ThresholdItem_ * collection));
IL2CPP_REGISTER_METHOD(0x025EA760, bool, Remove, (List_1_Datadog_ThresholdItem_ * __this, Datadog_ThresholdItem item));
IL2CPP_REGISTER_METHOD(0x025EA7E0, void, IList_Remove, (List_1_Datadog_ThresholdItem_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x025EA920, int32_t, RemoveAll, (List_1_Datadog_ThresholdItem_ * __this, Predicate_1_Datadog_ThresholdItem_ * match));
IL2CPP_REGISTER_METHOD(0x025EAB40, void, RemoveAt, (List_1_Datadog_ThresholdItem_ * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x025EABD0, void, RemoveRange, (List_1_Datadog_ThresholdItem_ * __this, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse, (List_1_Datadog_ThresholdItem_ * __this));
IL2CPP_REGISTER_METHOD(0x025EACE0, void, Reverse, (List_1_Datadog_ThresholdItem_ * __this, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x025EAD50, void, Sort, (List_1_Datadog_ThresholdItem_ * __this));
IL2CPP_REGISTER_METHOD(0x025EADB0, void, Sort, (List_1_Datadog_ThresholdItem_ * __this, IComparer_1_Datadog_ThresholdItem_ * comparer));
IL2CPP_REGISTER_METHOD(0x025EAE20, void, Sort, (List_1_Datadog_ThresholdItem_ * __this, int32_t index, int32_t count, IComparer_1_Datadog_ThresholdItem_ * comparer));
IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, (List_1_Datadog_ThresholdItem_ * __this, Comparison_1_Datadog_ThresholdItem_ * comparison));
IL2CPP_REGISTER_METHOD(0x025EAEF0, Datadog_ThresholdItem__Array *, ToArray, (List_1_Datadog_ThresholdItem_ * __this));
IL2CPP_REGISTER_METHOD(0x025EAF70, void, TrimExcess, (List_1_Datadog_ThresholdItem_ * __this));
IL2CPP_REGISTER_METHOD(0x025EAFD0, void, __cctor, ());
}
