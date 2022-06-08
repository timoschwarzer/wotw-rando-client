#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_GenericCastManager_1_NativeArrays_ {
IL2CPP_REGISTER_METHOD(0x025E8100, void, __ctor, (List_1_GenericCastManager_1_NativeArrays__2 * __this));
IL2CPP_REGISTER_METHOD(0x025E81E0, void, __ctor, (List_1_GenericCastManager_1_NativeArrays__2 * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02E00290, void, __ctor, (List_1_GenericCastManager_1_NativeArrays__2 * __this, IEnumerable_1_GenericCastManager_1_NativeArrays_ * collection));
IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity, (List_1_GenericCastManager_1_NativeArrays__2 * __this));
IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity, (List_1_GenericCastManager_1_NativeArrays__2 * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (List_1_GenericCastManager_1_NativeArrays__2 * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize, (List_1_GenericCastManager_1_NativeArrays__2 * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (List_1_GenericCastManager_1_NativeArrays__2 * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly, (List_1_GenericCastManager_1_NativeArrays__2 * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (List_1_GenericCastManager_1_NativeArrays__2 * __this));
IL2CPP_REGISTER_METHOD(0x02E00730, Object *, ICollection_get_SyncRoot, (List_1_GenericCastManager_1_NativeArrays__2 * __this));
IL2CPP_REGISTER_METHOD(0x02D24DA0, GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_, get_Item, (List_1_GenericCastManager_1_NativeArrays__2 * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02D24DF0, void, set_Item, (List_1_GenericCastManager_1_NativeArrays__2 * __this, int32_t index, GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_ value));
IL2CPP_REGISTER_METHOD(0x02D24E60, bool, IsCompatibleObject, (Object * value));
IL2CPP_REGISTER_METHOD(0x02D24F80, Object *, IList_get_Item, (List_1_GenericCastManager_1_NativeArrays__2 * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02E00890, void, IList_set_Item, (List_1_GenericCastManager_1_NativeArrays__2 * __this, int32_t index, Object * value));
IL2CPP_REGISTER_METHOD(0x02D251B0, void, Add, (List_1_GenericCastManager_1_NativeArrays__2 * __this, GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_ item));
IL2CPP_REGISTER_METHOD(0x02E00A30, int32_t, IList_Add, (List_1_GenericCastManager_1_NativeArrays__2 * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (List_1_GenericCastManager_1_NativeArrays__2 * __this, IEnumerable_1_GenericCastManager_1_NativeArrays_ * collection));
IL2CPP_REGISTER_METHOD(0x025E9050, ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_ *, AsReadOnly, (List_1_GenericCastManager_1_NativeArrays__2 * __this));
IL2CPP_REGISTER_METHOD(0x02D25420, int32_t, BinarySearch, (List_1_GenericCastManager_1_NativeArrays__2 * __this, int32_t index, int32_t count, GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_ item, IComparer_1_GenericCastManager_1_NativeArrays_ * comparer));
IL2CPP_REGISTER_METHOD(0x02D254D0, int32_t, BinarySearch, (List_1_GenericCastManager_1_NativeArrays__2 * __this, GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_ item, IComparer_1_GenericCastManager_1_NativeArrays_ * comparer));
IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (List_1_GenericCastManager_1_NativeArrays__2 * __this));
IL2CPP_REGISTER_METHOD(0x02D25570, bool, Contains, (List_1_GenericCastManager_1_NativeArrays__2 * __this, GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_ item));
IL2CPP_REGISTER_METHOD(0x02D25680, bool, IList_Contains, (List_1_GenericCastManager_1_NativeArrays__2 * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x025E9490, void, CopyTo, (List_1_GenericCastManager_1_NativeArrays__2 * __this, GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand___Array * array));
IL2CPP_REGISTER_METHOD(0x02E00BF0, void, ICollection_CopyTo, (List_1_GenericCastManager_1_NativeArrays__2 * __this, Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x025E95B0, void, CopyTo, (List_1_GenericCastManager_1_NativeArrays__2 * __this, int32_t index, GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand___Array * array, int32_t arrayIndex, int32_t count));
IL2CPP_REGISTER_METHOD(0x025E95F0, void, CopyTo, (List_1_GenericCastManager_1_NativeArrays__2 * __this, GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand___Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x025E9620, void, EnsureCapacity, (List_1_GenericCastManager_1_NativeArrays__2 * __this, int32_t min));
IL2CPP_REGISTER_METHOD(0x025E96A0, bool, Exists, (List_1_GenericCastManager_1_NativeArrays__2 * __this, Predicate_1_GenericCastManager_1_NativeArrays_ * match));
IL2CPP_REGISTER_METHOD(0x02D258D0, GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_, Find, (List_1_GenericCastManager_1_NativeArrays__2 * __this, Predicate_1_GenericCastManager_1_NativeArrays_ * match));
IL2CPP_REGISTER_METHOD(0x02D25A30, List_1_GenericCastManager_1_NativeArrays__2 *, FindAll, (List_1_GenericCastManager_1_NativeArrays__2 * __this, Predicate_1_GenericCastManager_1_NativeArrays_ * match));
IL2CPP_REGISTER_METHOD(0x025E9A20, int32_t, FindIndex, (List_1_GenericCastManager_1_NativeArrays__2 * __this, Predicate_1_GenericCastManager_1_NativeArrays_ * match));
IL2CPP_REGISTER_METHOD(0x02D25CA0, int32_t, FindIndex, (List_1_GenericCastManager_1_NativeArrays__2 * __this, int32_t startIndex, int32_t count, Predicate_1_GenericCastManager_1_NativeArrays_ * match));
IL2CPP_REGISTER_METHOD(0x02E00CE0, void, ForEach, (List_1_GenericCastManager_1_NativeArrays__2 * __this, Action_1_GenericCastManager_1_NativeArrays_ * action));
IL2CPP_REGISTER_METHOD(0x02D25F90, List_1_T_Enumerator_GenericCastManager_1_NativeArrays_, GetEnumerator, (List_1_GenericCastManager_1_NativeArrays__2 * __this));
IL2CPP_REGISTER_METHOD(0x02D25FF0, IEnumerator_1_GenericCastManager_1_NativeArrays__2 *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (List_1_GenericCastManager_1_NativeArrays__2 * __this));
IL2CPP_REGISTER_METHOD(0x02D25FF0, IEnumerator *, IEnumerable_GetEnumerator, (List_1_GenericCastManager_1_NativeArrays__2 * __this));
IL2CPP_REGISTER_METHOD(0x025E9DF0, List_1_GenericCastManager_1_NativeArrays__2 *, GetRange, (List_1_GenericCastManager_1_NativeArrays__2 * __this, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x02D260C0, int32_t, IndexOf, (List_1_GenericCastManager_1_NativeArrays__2 * __this, GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_ item));
IL2CPP_REGISTER_METHOD(0x02D26110, int32_t, IList_IndexOf, (List_1_GenericCastManager_1_NativeArrays__2 * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x02D26270, void, Insert, (List_1_GenericCastManager_1_NativeArrays__2 * __this, int32_t index, GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_ item));
IL2CPP_REGISTER_METHOD(0x02E00EA0, void, IList_Insert, (List_1_GenericCastManager_1_NativeArrays__2 * __this, int32_t index, Object * item));
IL2CPP_REGISTER_METHOD(0x02E01050, void, InsertRange, (List_1_GenericCastManager_1_NativeArrays__2 * __this, int32_t index, IEnumerable_1_GenericCastManager_1_NativeArrays_ * collection));
IL2CPP_REGISTER_METHOD(0x02D26870, bool, Remove, (List_1_GenericCastManager_1_NativeArrays__2 * __this, GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_ item));
IL2CPP_REGISTER_METHOD(0x02D26900, void, IList_Remove, (List_1_GenericCastManager_1_NativeArrays__2 * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x02D26A60, int32_t, RemoveAll, (List_1_GenericCastManager_1_NativeArrays__2 * __this, Predicate_1_GenericCastManager_1_NativeArrays_ * match));
IL2CPP_REGISTER_METHOD(0x02D26CD0, void, RemoveAt, (List_1_GenericCastManager_1_NativeArrays__2 * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x025EABD0, void, RemoveRange, (List_1_GenericCastManager_1_NativeArrays__2 * __this, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse, (List_1_GenericCastManager_1_NativeArrays__2 * __this));
IL2CPP_REGISTER_METHOD(0x025EACE0, void, Reverse, (List_1_GenericCastManager_1_NativeArrays__2 * __this, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x025EAD50, void, Sort, (List_1_GenericCastManager_1_NativeArrays__2 * __this));
IL2CPP_REGISTER_METHOD(0x025EADB0, void, Sort, (List_1_GenericCastManager_1_NativeArrays__2 * __this, IComparer_1_GenericCastManager_1_NativeArrays_ * comparer));
IL2CPP_REGISTER_METHOD(0x025EAE20, void, Sort, (List_1_GenericCastManager_1_NativeArrays__2 * __this, int32_t index, int32_t count, IComparer_1_GenericCastManager_1_NativeArrays_ * comparer));
IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, (List_1_GenericCastManager_1_NativeArrays__2 * __this, Comparison_1_GenericCastManager_1_NativeArrays_ * comparison));
IL2CPP_REGISTER_METHOD(0x025EAEF0, GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand___Array *, ToArray, (List_1_GenericCastManager_1_NativeArrays__2 * __this));
IL2CPP_REGISTER_METHOD(0x025EAF70, void, TrimExcess, (List_1_GenericCastManager_1_NativeArrays__2 * __this));
IL2CPP_REGISTER_METHOD(0x025EAFD0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x025E8100, void, __ctor, (List_1_GenericCastManager_1_NativeArrays__1 * __this));
IL2CPP_REGISTER_METHOD(0x025E81E0, void, __ctor, (List_1_GenericCastManager_1_NativeArrays__1 * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02E013B0, void, __ctor, (List_1_GenericCastManager_1_NativeArrays__1 * __this, IEnumerable_1_GenericCastManager_1_NativeArrays__1 * collection));
IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity, (List_1_GenericCastManager_1_NativeArrays__1 * __this));
IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity, (List_1_GenericCastManager_1_NativeArrays__1 * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (List_1_GenericCastManager_1_NativeArrays__1 * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize, (List_1_GenericCastManager_1_NativeArrays__1 * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (List_1_GenericCastManager_1_NativeArrays__1 * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly, (List_1_GenericCastManager_1_NativeArrays__1 * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (List_1_GenericCastManager_1_NativeArrays__1 * __this));
IL2CPP_REGISTER_METHOD(0x02E01850, Object *, ICollection_get_SyncRoot, (List_1_GenericCastManager_1_NativeArrays__1 * __this));
IL2CPP_REGISTER_METHOD(0x02D24DA0, GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_, get_Item, (List_1_GenericCastManager_1_NativeArrays__1 * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02D24DF0, void, set_Item, (List_1_GenericCastManager_1_NativeArrays__1 * __this, int32_t index, GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_ value));
IL2CPP_REGISTER_METHOD(0x02D24E60, bool, IsCompatibleObject, (Object * value));
IL2CPP_REGISTER_METHOD(0x02D24F80, Object *, IList_get_Item, (List_1_GenericCastManager_1_NativeArrays__1 * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02E019B0, void, IList_set_Item, (List_1_GenericCastManager_1_NativeArrays__1 * __this, int32_t index, Object * value));
IL2CPP_REGISTER_METHOD(0x02D251B0, void, Add, (List_1_GenericCastManager_1_NativeArrays__1 * __this, GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_ item));
IL2CPP_REGISTER_METHOD(0x02E01B50, int32_t, IList_Add, (List_1_GenericCastManager_1_NativeArrays__1 * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (List_1_GenericCastManager_1_NativeArrays__1 * __this, IEnumerable_1_GenericCastManager_1_NativeArrays__1 * collection));
IL2CPP_REGISTER_METHOD(0x025E9050, ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1 *, AsReadOnly, (List_1_GenericCastManager_1_NativeArrays__1 * __this));
IL2CPP_REGISTER_METHOD(0x02D25420, int32_t, BinarySearch, (List_1_GenericCastManager_1_NativeArrays__1 * __this, int32_t index, int32_t count, GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_ item, IComparer_1_GenericCastManager_1_NativeArrays__1 * comparer));
IL2CPP_REGISTER_METHOD(0x02D254D0, int32_t, BinarySearch, (List_1_GenericCastManager_1_NativeArrays__1 * __this, GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_ item, IComparer_1_GenericCastManager_1_NativeArrays__1 * comparer));
IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (List_1_GenericCastManager_1_NativeArrays__1 * __this));
IL2CPP_REGISTER_METHOD(0x02D25570, bool, Contains, (List_1_GenericCastManager_1_NativeArrays__1 * __this, GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_ item));
IL2CPP_REGISTER_METHOD(0x02D25680, bool, IList_Contains, (List_1_GenericCastManager_1_NativeArrays__1 * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x025E9490, void, CopyTo, (List_1_GenericCastManager_1_NativeArrays__1 * __this, GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Array * array));
IL2CPP_REGISTER_METHOD(0x02E01D10, void, ICollection_CopyTo, (List_1_GenericCastManager_1_NativeArrays__1 * __this, Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x025E95B0, void, CopyTo, (List_1_GenericCastManager_1_NativeArrays__1 * __this, int32_t index, GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Array * array, int32_t arrayIndex, int32_t count));
IL2CPP_REGISTER_METHOD(0x025E95F0, void, CopyTo, (List_1_GenericCastManager_1_NativeArrays__1 * __this, GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x025E9620, void, EnsureCapacity, (List_1_GenericCastManager_1_NativeArrays__1 * __this, int32_t min));
IL2CPP_REGISTER_METHOD(0x025E96A0, bool, Exists, (List_1_GenericCastManager_1_NativeArrays__1 * __this, Predicate_1_GenericCastManager_1_NativeArrays__1 * match));
IL2CPP_REGISTER_METHOD(0x02D258D0, GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_, Find, (List_1_GenericCastManager_1_NativeArrays__1 * __this, Predicate_1_GenericCastManager_1_NativeArrays__1 * match));
IL2CPP_REGISTER_METHOD(0x02D25A30, List_1_GenericCastManager_1_NativeArrays__1 *, FindAll, (List_1_GenericCastManager_1_NativeArrays__1 * __this, Predicate_1_GenericCastManager_1_NativeArrays__1 * match));
IL2CPP_REGISTER_METHOD(0x025E9A20, int32_t, FindIndex, (List_1_GenericCastManager_1_NativeArrays__1 * __this, Predicate_1_GenericCastManager_1_NativeArrays__1 * match));
IL2CPP_REGISTER_METHOD(0x02D25CA0, int32_t, FindIndex, (List_1_GenericCastManager_1_NativeArrays__1 * __this, int32_t startIndex, int32_t count, Predicate_1_GenericCastManager_1_NativeArrays__1 * match));
IL2CPP_REGISTER_METHOD(0x02E01E00, void, ForEach, (List_1_GenericCastManager_1_NativeArrays__1 * __this, Action_1_GenericCastManager_1_NativeArrays__1 * action));
IL2CPP_REGISTER_METHOD(0x02D25F90, List_1_T_Enumerator_GenericCastManager_1_NativeArrays__1, GetEnumerator, (List_1_GenericCastManager_1_NativeArrays__1 * __this));
IL2CPP_REGISTER_METHOD(0x02D25FF0, IEnumerator_1_GenericCastManager_1_NativeArrays__1 *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (List_1_GenericCastManager_1_NativeArrays__1 * __this));
IL2CPP_REGISTER_METHOD(0x02D25FF0, IEnumerator *, IEnumerable_GetEnumerator, (List_1_GenericCastManager_1_NativeArrays__1 * __this));
IL2CPP_REGISTER_METHOD(0x025E9DF0, List_1_GenericCastManager_1_NativeArrays__1 *, GetRange, (List_1_GenericCastManager_1_NativeArrays__1 * __this, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x02D260C0, int32_t, IndexOf, (List_1_GenericCastManager_1_NativeArrays__1 * __this, GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_ item));
IL2CPP_REGISTER_METHOD(0x02D26110, int32_t, IList_IndexOf, (List_1_GenericCastManager_1_NativeArrays__1 * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x02D26270, void, Insert, (List_1_GenericCastManager_1_NativeArrays__1 * __this, int32_t index, GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_ item));
IL2CPP_REGISTER_METHOD(0x02E01FC0, void, IList_Insert, (List_1_GenericCastManager_1_NativeArrays__1 * __this, int32_t index, Object * item));
IL2CPP_REGISTER_METHOD(0x02E02170, void, InsertRange, (List_1_GenericCastManager_1_NativeArrays__1 * __this, int32_t index, IEnumerable_1_GenericCastManager_1_NativeArrays__1 * collection));
IL2CPP_REGISTER_METHOD(0x02D26870, bool, Remove, (List_1_GenericCastManager_1_NativeArrays__1 * __this, GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_ item));
IL2CPP_REGISTER_METHOD(0x02D26900, void, IList_Remove, (List_1_GenericCastManager_1_NativeArrays__1 * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x02D26A60, int32_t, RemoveAll, (List_1_GenericCastManager_1_NativeArrays__1 * __this, Predicate_1_GenericCastManager_1_NativeArrays__1 * match));
IL2CPP_REGISTER_METHOD(0x02D26CD0, void, RemoveAt, (List_1_GenericCastManager_1_NativeArrays__1 * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x025EABD0, void, RemoveRange, (List_1_GenericCastManager_1_NativeArrays__1 * __this, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse, (List_1_GenericCastManager_1_NativeArrays__1 * __this));
IL2CPP_REGISTER_METHOD(0x025EACE0, void, Reverse, (List_1_GenericCastManager_1_NativeArrays__1 * __this, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x025EAD50, void, Sort, (List_1_GenericCastManager_1_NativeArrays__1 * __this));
IL2CPP_REGISTER_METHOD(0x025EADB0, void, Sort, (List_1_GenericCastManager_1_NativeArrays__1 * __this, IComparer_1_GenericCastManager_1_NativeArrays__1 * comparer));
IL2CPP_REGISTER_METHOD(0x025EAE20, void, Sort, (List_1_GenericCastManager_1_NativeArrays__1 * __this, int32_t index, int32_t count, IComparer_1_GenericCastManager_1_NativeArrays__1 * comparer));
IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, (List_1_GenericCastManager_1_NativeArrays__1 * __this, Comparison_1_GenericCastManager_1_NativeArrays__1 * comparison));
IL2CPP_REGISTER_METHOD(0x025EAEF0, GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Array *, ToArray, (List_1_GenericCastManager_1_NativeArrays__1 * __this));
IL2CPP_REGISTER_METHOD(0x025EAF70, void, TrimExcess, (List_1_GenericCastManager_1_NativeArrays__1 * __this));
IL2CPP_REGISTER_METHOD(0x025EAFD0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x025E8100, void, __ctor, (List_1_GenericCastManager_1_NativeArrays_ * __this));
IL2CPP_REGISTER_METHOD(0x025E81E0, void, __ctor, (List_1_GenericCastManager_1_NativeArrays_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02E024D0, void, __ctor, (List_1_GenericCastManager_1_NativeArrays_ * __this, IEnumerable_1_GenericCastManager_1_NativeArrays__2 * collection));
IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity, (List_1_GenericCastManager_1_NativeArrays_ * __this));
IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity, (List_1_GenericCastManager_1_NativeArrays_ * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (List_1_GenericCastManager_1_NativeArrays_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize, (List_1_GenericCastManager_1_NativeArrays_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (List_1_GenericCastManager_1_NativeArrays_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly, (List_1_GenericCastManager_1_NativeArrays_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (List_1_GenericCastManager_1_NativeArrays_ * __this));
IL2CPP_REGISTER_METHOD(0x02E02970, Object *, ICollection_get_SyncRoot, (List_1_GenericCastManager_1_NativeArrays_ * __this));
IL2CPP_REGISTER_METHOD(0x02D24DA0, GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_, get_Item, (List_1_GenericCastManager_1_NativeArrays_ * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02D24DF0, void, set_Item, (List_1_GenericCastManager_1_NativeArrays_ * __this, int32_t index, GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_ value));
IL2CPP_REGISTER_METHOD(0x02D24E60, bool, IsCompatibleObject, (Object * value));
IL2CPP_REGISTER_METHOD(0x02D24F80, Object *, IList_get_Item, (List_1_GenericCastManager_1_NativeArrays_ * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02E02AD0, void, IList_set_Item, (List_1_GenericCastManager_1_NativeArrays_ * __this, int32_t index, Object * value));
IL2CPP_REGISTER_METHOD(0x02D251B0, void, Add, (List_1_GenericCastManager_1_NativeArrays_ * __this, GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_ item));
IL2CPP_REGISTER_METHOD(0x02E02C70, int32_t, IList_Add, (List_1_GenericCastManager_1_NativeArrays_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (List_1_GenericCastManager_1_NativeArrays_ * __this, IEnumerable_1_GenericCastManager_1_NativeArrays__2 * collection));
IL2CPP_REGISTER_METHOD(0x025E9050, ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2 *, AsReadOnly, (List_1_GenericCastManager_1_NativeArrays_ * __this));
IL2CPP_REGISTER_METHOD(0x02D25420, int32_t, BinarySearch, (List_1_GenericCastManager_1_NativeArrays_ * __this, int32_t index, int32_t count, GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_ item, IComparer_1_GenericCastManager_1_NativeArrays__2 * comparer));
IL2CPP_REGISTER_METHOD(0x02D254D0, int32_t, BinarySearch, (List_1_GenericCastManager_1_NativeArrays_ * __this, GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_ item, IComparer_1_GenericCastManager_1_NativeArrays__2 * comparer));
IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (List_1_GenericCastManager_1_NativeArrays_ * __this));
IL2CPP_REGISTER_METHOD(0x02D25570, bool, Contains, (List_1_GenericCastManager_1_NativeArrays_ * __this, GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_ item));
IL2CPP_REGISTER_METHOD(0x02D25680, bool, IList_Contains, (List_1_GenericCastManager_1_NativeArrays_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x025E9490, void, CopyTo, (List_1_GenericCastManager_1_NativeArrays_ * __this, GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array * array));
IL2CPP_REGISTER_METHOD(0x02E02E30, void, ICollection_CopyTo, (List_1_GenericCastManager_1_NativeArrays_ * __this, Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x025E95B0, void, CopyTo, (List_1_GenericCastManager_1_NativeArrays_ * __this, int32_t index, GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array * array, int32_t arrayIndex, int32_t count));
IL2CPP_REGISTER_METHOD(0x025E95F0, void, CopyTo, (List_1_GenericCastManager_1_NativeArrays_ * __this, GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x025E9620, void, EnsureCapacity, (List_1_GenericCastManager_1_NativeArrays_ * __this, int32_t min));
IL2CPP_REGISTER_METHOD(0x025E96A0, bool, Exists, (List_1_GenericCastManager_1_NativeArrays_ * __this, Predicate_1_GenericCastManager_1_NativeArrays__2 * match));
IL2CPP_REGISTER_METHOD(0x02D258D0, GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_, Find, (List_1_GenericCastManager_1_NativeArrays_ * __this, Predicate_1_GenericCastManager_1_NativeArrays__2 * match));
IL2CPP_REGISTER_METHOD(0x02D25A30, List_1_GenericCastManager_1_NativeArrays_ *, FindAll, (List_1_GenericCastManager_1_NativeArrays_ * __this, Predicate_1_GenericCastManager_1_NativeArrays__2 * match));
IL2CPP_REGISTER_METHOD(0x025E9A20, int32_t, FindIndex, (List_1_GenericCastManager_1_NativeArrays_ * __this, Predicate_1_GenericCastManager_1_NativeArrays__2 * match));
IL2CPP_REGISTER_METHOD(0x02D25CA0, int32_t, FindIndex, (List_1_GenericCastManager_1_NativeArrays_ * __this, int32_t startIndex, int32_t count, Predicate_1_GenericCastManager_1_NativeArrays__2 * match));
IL2CPP_REGISTER_METHOD(0x02E02F20, void, ForEach, (List_1_GenericCastManager_1_NativeArrays_ * __this, Action_1_GenericCastManager_1_NativeArrays__2 * action));
IL2CPP_REGISTER_METHOD(0x02D25F90, List_1_T_Enumerator_GenericCastManager_1_NativeArrays__2, GetEnumerator, (List_1_GenericCastManager_1_NativeArrays_ * __this));
IL2CPP_REGISTER_METHOD(0x02D25FF0, IEnumerator_1_GenericCastManager_1_NativeArrays_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (List_1_GenericCastManager_1_NativeArrays_ * __this));
IL2CPP_REGISTER_METHOD(0x02D25FF0, IEnumerator *, IEnumerable_GetEnumerator, (List_1_GenericCastManager_1_NativeArrays_ * __this));
IL2CPP_REGISTER_METHOD(0x025E9DF0, List_1_GenericCastManager_1_NativeArrays_ *, GetRange, (List_1_GenericCastManager_1_NativeArrays_ * __this, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x02D260C0, int32_t, IndexOf, (List_1_GenericCastManager_1_NativeArrays_ * __this, GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_ item));
IL2CPP_REGISTER_METHOD(0x02D26110, int32_t, IList_IndexOf, (List_1_GenericCastManager_1_NativeArrays_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x02D26270, void, Insert, (List_1_GenericCastManager_1_NativeArrays_ * __this, int32_t index, GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_ item));
IL2CPP_REGISTER_METHOD(0x02E030E0, void, IList_Insert, (List_1_GenericCastManager_1_NativeArrays_ * __this, int32_t index, Object * item));
IL2CPP_REGISTER_METHOD(0x02E03290, void, InsertRange, (List_1_GenericCastManager_1_NativeArrays_ * __this, int32_t index, IEnumerable_1_GenericCastManager_1_NativeArrays__2 * collection));
IL2CPP_REGISTER_METHOD(0x02D26870, bool, Remove, (List_1_GenericCastManager_1_NativeArrays_ * __this, GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_ item));
IL2CPP_REGISTER_METHOD(0x02D26900, void, IList_Remove, (List_1_GenericCastManager_1_NativeArrays_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x02D26A60, int32_t, RemoveAll, (List_1_GenericCastManager_1_NativeArrays_ * __this, Predicate_1_GenericCastManager_1_NativeArrays__2 * match));
IL2CPP_REGISTER_METHOD(0x02D26CD0, void, RemoveAt, (List_1_GenericCastManager_1_NativeArrays_ * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x025EABD0, void, RemoveRange, (List_1_GenericCastManager_1_NativeArrays_ * __this, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse, (List_1_GenericCastManager_1_NativeArrays_ * __this));
IL2CPP_REGISTER_METHOD(0x025EACE0, void, Reverse, (List_1_GenericCastManager_1_NativeArrays_ * __this, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x025EAD50, void, Sort, (List_1_GenericCastManager_1_NativeArrays_ * __this));
IL2CPP_REGISTER_METHOD(0x025EADB0, void, Sort, (List_1_GenericCastManager_1_NativeArrays_ * __this, IComparer_1_GenericCastManager_1_NativeArrays__2 * comparer));
IL2CPP_REGISTER_METHOD(0x025EAE20, void, Sort, (List_1_GenericCastManager_1_NativeArrays_ * __this, int32_t index, int32_t count, IComparer_1_GenericCastManager_1_NativeArrays__2 * comparer));
IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, (List_1_GenericCastManager_1_NativeArrays_ * __this, Comparison_1_GenericCastManager_1_NativeArrays__2 * comparison));
IL2CPP_REGISTER_METHOD(0x025EAEF0, GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array *, ToArray, (List_1_GenericCastManager_1_NativeArrays_ * __this));
IL2CPP_REGISTER_METHOD(0x025EAF70, void, TrimExcess, (List_1_GenericCastManager_1_NativeArrays_ * __this));
IL2CPP_REGISTER_METHOD(0x025EAFD0, void, __cctor, ());
}
