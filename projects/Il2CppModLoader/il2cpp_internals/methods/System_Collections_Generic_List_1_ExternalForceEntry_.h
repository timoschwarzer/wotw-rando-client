#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_ExternalForceEntry_ {
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (List_1_ExternalForceEntry_ * __this));
IL2CPP_REGISTER_METHODINFO(0x0476E800, List_1_ExternalForceEntry__get_Count__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D24DA0, ExternalForceEntry, get_Item, (List_1_ExternalForceEntry_ * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x047280E0, List_1_ExternalForceEntry__get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D26CD0, void, RemoveAt, (List_1_ExternalForceEntry_ * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0473E928, List_1_ExternalForceEntry__RemoveAt__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D251B0, void, Add, (List_1_ExternalForceEntry_ * __this, ExternalForceEntry item));
IL2CPP_REGISTER_METHODINFO(0x04733998, List_1_ExternalForceEntry__Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (List_1_ExternalForceEntry_ * __this));
IL2CPP_REGISTER_METHODINFO(0x0470AC40, List_1_ExternalForceEntry__Clear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D24DF0, void, set_Item, (List_1_ExternalForceEntry_ * __this, int32_t index, ExternalForceEntry value));
IL2CPP_REGISTER_METHODINFO(0x0477A868, List_1_ExternalForceEntry__set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025E8100, void, __ctor, (List_1_ExternalForceEntry_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04767A98, List_1_ExternalForceEntry___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025E81E0, void, __ctor, (List_1_ExternalForceEntry_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02DF8C00, void, __ctor, (List_1_ExternalForceEntry_ * __this, IEnumerable_1_ExternalForceEntry_ * collection));
IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity, (List_1_ExternalForceEntry_ * __this));
IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity, (List_1_ExternalForceEntry_ * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize, (List_1_ExternalForceEntry_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (List_1_ExternalForceEntry_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly, (List_1_ExternalForceEntry_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (List_1_ExternalForceEntry_ * __this));
IL2CPP_REGISTER_METHOD(0x02DF90A0, Object *, ICollection_get_SyncRoot, (List_1_ExternalForceEntry_ * __this));
IL2CPP_REGISTER_METHOD(0x02D24E60, bool, IsCompatibleObject, (Object * value));
IL2CPP_REGISTER_METHOD(0x02D24F80, Object *, IList_get_Item, (List_1_ExternalForceEntry_ * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02DF9200, void, IList_set_Item, (List_1_ExternalForceEntry_ * __this, int32_t index, Object * value));
IL2CPP_REGISTER_METHOD(0x02DF93A0, int32_t, IList_Add, (List_1_ExternalForceEntry_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (List_1_ExternalForceEntry_ * __this, IEnumerable_1_ExternalForceEntry_ * collection));
IL2CPP_REGISTER_METHOD(0x025E9050, ReadOnlyCollection_1_ExternalForceEntry_ *, AsReadOnly, (List_1_ExternalForceEntry_ * __this));
IL2CPP_REGISTER_METHOD(0x02D25420, int32_t, BinarySearch, (List_1_ExternalForceEntry_ * __this, int32_t index, int32_t count, ExternalForceEntry item, IComparer_1_ExternalForceEntry_ * comparer));
IL2CPP_REGISTER_METHOD(0x02D254D0, int32_t, BinarySearch, (List_1_ExternalForceEntry_ * __this, ExternalForceEntry item, IComparer_1_ExternalForceEntry_ * comparer));
IL2CPP_REGISTER_METHOD(0x02D25570, bool, Contains, (List_1_ExternalForceEntry_ * __this, ExternalForceEntry item));
IL2CPP_REGISTER_METHOD(0x02D25680, bool, IList_Contains, (List_1_ExternalForceEntry_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x025E9490, void, CopyTo, (List_1_ExternalForceEntry_ * __this, ExternalForceEntry__Array * array));
IL2CPP_REGISTER_METHOD(0x02DF9560, void, ICollection_CopyTo, (List_1_ExternalForceEntry_ * __this, Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x025E95B0, void, CopyTo, (List_1_ExternalForceEntry_ * __this, int32_t index, ExternalForceEntry__Array * array, int32_t arrayIndex, int32_t count));
IL2CPP_REGISTER_METHOD(0x025E95F0, void, CopyTo, (List_1_ExternalForceEntry_ * __this, ExternalForceEntry__Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x025E9620, void, EnsureCapacity, (List_1_ExternalForceEntry_ * __this, int32_t min));
IL2CPP_REGISTER_METHOD(0x025E96A0, bool, Exists, (List_1_ExternalForceEntry_ * __this, Predicate_1_ExternalForceEntry_ * match));
IL2CPP_REGISTER_METHOD(0x02D258D0, ExternalForceEntry, Find, (List_1_ExternalForceEntry_ * __this, Predicate_1_ExternalForceEntry_ * match));
IL2CPP_REGISTER_METHOD(0x02D25A30, List_1_ExternalForceEntry_ *, FindAll, (List_1_ExternalForceEntry_ * __this, Predicate_1_ExternalForceEntry_ * match));
IL2CPP_REGISTER_METHOD(0x025E9A20, int32_t, FindIndex, (List_1_ExternalForceEntry_ * __this, Predicate_1_ExternalForceEntry_ * match));
IL2CPP_REGISTER_METHOD(0x02D25CA0, int32_t, FindIndex, (List_1_ExternalForceEntry_ * __this, int32_t startIndex, int32_t count, Predicate_1_ExternalForceEntry_ * match));
IL2CPP_REGISTER_METHOD(0x02DF9650, void, ForEach, (List_1_ExternalForceEntry_ * __this, Action_1_ExternalForceEntry_ * action));
IL2CPP_REGISTER_METHOD(0x02D25F90, List_1_T_Enumerator_ExternalForceEntry_, GetEnumerator, (List_1_ExternalForceEntry_ * __this));
IL2CPP_REGISTER_METHOD(0x02D25FF0, IEnumerator_1_ExternalForceEntry_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (List_1_ExternalForceEntry_ * __this));
IL2CPP_REGISTER_METHOD(0x02D25FF0, IEnumerator *, IEnumerable_GetEnumerator, (List_1_ExternalForceEntry_ * __this));
IL2CPP_REGISTER_METHOD(0x025E9DF0, List_1_ExternalForceEntry_ *, GetRange, (List_1_ExternalForceEntry_ * __this, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x02D260C0, int32_t, IndexOf, (List_1_ExternalForceEntry_ * __this, ExternalForceEntry item));
IL2CPP_REGISTER_METHOD(0x02D26110, int32_t, IList_IndexOf, (List_1_ExternalForceEntry_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x02D26270, void, Insert, (List_1_ExternalForceEntry_ * __this, int32_t index, ExternalForceEntry item));
IL2CPP_REGISTER_METHOD(0x02DF9810, void, IList_Insert, (List_1_ExternalForceEntry_ * __this, int32_t index, Object * item));
IL2CPP_REGISTER_METHOD(0x02DF99C0, void, InsertRange, (List_1_ExternalForceEntry_ * __this, int32_t index, IEnumerable_1_ExternalForceEntry_ * collection));
IL2CPP_REGISTER_METHOD(0x02D26870, bool, Remove, (List_1_ExternalForceEntry_ * __this, ExternalForceEntry item));
IL2CPP_REGISTER_METHOD(0x02D26900, void, IList_Remove, (List_1_ExternalForceEntry_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x02D26A60, int32_t, RemoveAll, (List_1_ExternalForceEntry_ * __this, Predicate_1_ExternalForceEntry_ * match));
IL2CPP_REGISTER_METHOD(0x025EABD0, void, RemoveRange, (List_1_ExternalForceEntry_ * __this, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse, (List_1_ExternalForceEntry_ * __this));
IL2CPP_REGISTER_METHOD(0x025EACE0, void, Reverse, (List_1_ExternalForceEntry_ * __this, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x025EAD50, void, Sort, (List_1_ExternalForceEntry_ * __this));
IL2CPP_REGISTER_METHOD(0x025EADB0, void, Sort, (List_1_ExternalForceEntry_ * __this, IComparer_1_ExternalForceEntry_ * comparer));
IL2CPP_REGISTER_METHOD(0x025EAE20, void, Sort, (List_1_ExternalForceEntry_ * __this, int32_t index, int32_t count, IComparer_1_ExternalForceEntry_ * comparer));
IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, (List_1_ExternalForceEntry_ * __this, Comparison_1_ExternalForceEntry_ * comparison));
IL2CPP_REGISTER_METHOD(0x025EAEF0, ExternalForceEntry__Array *, ToArray, (List_1_ExternalForceEntry_ * __this));
IL2CPP_REGISTER_METHOD(0x025EAF70, void, TrimExcess, (List_1_ExternalForceEntry_ * __this));
IL2CPP_REGISTER_METHOD(0x025EAFD0, void, __cctor, ());
}
