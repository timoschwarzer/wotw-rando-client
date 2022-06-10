#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_ExternalForceEntry_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_ExternalForceEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476E800, List_1_ExternalForceEntry__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D24DA0, app::ExternalForceEntry, get_Item, (app::List_1_ExternalForceEntry_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047280E0, List_1_ExternalForceEntry__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D26CD0, void, RemoveAt, (app::List_1_ExternalForceEntry_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0473E928, List_1_ExternalForceEntry__RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D251B0, void, Add, (app::List_1_ExternalForceEntry_ * this_ptr, app::ExternalForceEntry item))
    IL2CPP_REGISTER_METHODINFO(0x04733998, List_1_ExternalForceEntry__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_ExternalForceEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470AC40, List_1_ExternalForceEntry__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D24DF0, void, set_Item, (app::List_1_ExternalForceEntry_ * this_ptr, int32_t index, app::ExternalForceEntry value))
    IL2CPP_REGISTER_METHODINFO(0x0477A868, List_1_ExternalForceEntry__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, (app::List_1_ExternalForceEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04767A98, List_1_ExternalForceEntry___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_2, (app::List_1_ExternalForceEntry_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02DF8C00, void, ctor_3, (app::List_1_ExternalForceEntry_ * this_ptr, app::IEnumerable_1_ExternalForceEntry_ * collection))
    IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity, (app::List_1_ExternalForceEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity, (app::List_1_ExternalForceEntry_ * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize, (app::List_1_ExternalForceEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (app::List_1_ExternalForceEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly, (app::List_1_ExternalForceEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::List_1_ExternalForceEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02DF90A0, app::Object *, ICollection_get_SyncRoot, (app::List_1_ExternalForceEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D24E60, bool, IsCompatibleObject, (app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02D24F80, app::Object *, IList_get_Item, (app::List_1_ExternalForceEntry_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02DF9200, void, IList_set_Item, (app::List_1_ExternalForceEntry_ * this_ptr, int32_t index, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02DF93A0, int32_t, IList_Add, (app::List_1_ExternalForceEntry_ * this_ptr, app::Object * item))
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_ExternalForceEntry_ * this_ptr, app::IEnumerable_1_ExternalForceEntry_ * collection))
    IL2CPP_REGISTER_METHOD(0x025E9050, app::ReadOnlyCollection_1_ExternalForceEntry_ *, AsReadOnly, (app::List_1_ExternalForceEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D25420, int32_t, BinarySearch_1, (app::List_1_ExternalForceEntry_ * this_ptr, int32_t index, int32_t count, app::ExternalForceEntry item, app::IComparer_1_ExternalForceEntry_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02D254D0, int32_t, BinarySearch_2, (app::List_1_ExternalForceEntry_ * this_ptr, app::ExternalForceEntry item, app::IComparer_1_ExternalForceEntry_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02D25570, bool, Contains, (app::List_1_ExternalForceEntry_ * this_ptr, app::ExternalForceEntry item))
    IL2CPP_REGISTER_METHOD(0x02D25680, bool, IList_Contains, (app::List_1_ExternalForceEntry_ * this_ptr, app::Object * item))
    IL2CPP_REGISTER_METHOD(0x025E9490, void, CopyTo_1, (app::List_1_ExternalForceEntry_ * this_ptr, app::ExternalForceEntry__Array * array))
    IL2CPP_REGISTER_METHOD(0x02DF9560, void, ICollection_CopyTo, (app::List_1_ExternalForceEntry_ * this_ptr, app::Array * array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x025E95B0, void, CopyTo_2, (app::List_1_ExternalForceEntry_ * this_ptr, int32_t index, app::ExternalForceEntry__Array * array, int32_t array_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x025E95F0, void, CopyTo_3, (app::List_1_ExternalForceEntry_ * this_ptr, app::ExternalForceEntry__Array * array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x025E9620, void, EnsureCapacity, (app::List_1_ExternalForceEntry_ * this_ptr, int32_t min))
    IL2CPP_REGISTER_METHOD(0x025E96A0, bool, Exists, (app::List_1_ExternalForceEntry_ * this_ptr, app::Predicate_1_ExternalForceEntry_ * match))
    IL2CPP_REGISTER_METHOD(0x02D258D0, app::ExternalForceEntry, Find, (app::List_1_ExternalForceEntry_ * this_ptr, app::Predicate_1_ExternalForceEntry_ * match))
    IL2CPP_REGISTER_METHOD(0x02D25A30, app::List_1_ExternalForceEntry_ *, FindAll, (app::List_1_ExternalForceEntry_ * this_ptr, app::Predicate_1_ExternalForceEntry_ * match))
    IL2CPP_REGISTER_METHOD(0x025E9A20, int32_t, FindIndex_1, (app::List_1_ExternalForceEntry_ * this_ptr, app::Predicate_1_ExternalForceEntry_ * match))
    IL2CPP_REGISTER_METHOD(0x02D25CA0, int32_t, FindIndex_2, (app::List_1_ExternalForceEntry_ * this_ptr, int32_t start_index, int32_t count, app::Predicate_1_ExternalForceEntry_ * match))
    IL2CPP_REGISTER_METHOD(0x02DF9650, void, ForEach, (app::List_1_ExternalForceEntry_ * this_ptr, app::Action_1_ExternalForceEntry_ * action))
    IL2CPP_REGISTER_METHOD(0x02D25F90, app::List_1_T_Enumerator_ExternalForceEntry_, GetEnumerator, (app::List_1_ExternalForceEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D25FF0, app::IEnumerator_1_ExternalForceEntry_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::List_1_ExternalForceEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D25FF0, app::IEnumerator *, IEnumerable_GetEnumerator, (app::List_1_ExternalForceEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E9DF0, app::List_1_ExternalForceEntry_ *, GetRange, (app::List_1_ExternalForceEntry_ * this_ptr, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02D260C0, int32_t, IndexOf, (app::List_1_ExternalForceEntry_ * this_ptr, app::ExternalForceEntry item))
    IL2CPP_REGISTER_METHOD(0x02D26110, int32_t, IList_IndexOf, (app::List_1_ExternalForceEntry_ * this_ptr, app::Object * item))
    IL2CPP_REGISTER_METHOD(0x02D26270, void, Insert, (app::List_1_ExternalForceEntry_ * this_ptr, int32_t index, app::ExternalForceEntry item))
    IL2CPP_REGISTER_METHOD(0x02DF9810, void, IList_Insert, (app::List_1_ExternalForceEntry_ * this_ptr, int32_t index, app::Object * item))
    IL2CPP_REGISTER_METHOD(0x02DF99C0, void, InsertRange, (app::List_1_ExternalForceEntry_ * this_ptr, int32_t index, app::IEnumerable_1_ExternalForceEntry_ * collection))
    IL2CPP_REGISTER_METHOD(0x02D26870, bool, Remove, (app::List_1_ExternalForceEntry_ * this_ptr, app::ExternalForceEntry item))
    IL2CPP_REGISTER_METHOD(0x02D26900, void, IList_Remove, (app::List_1_ExternalForceEntry_ * this_ptr, app::Object * item))
    IL2CPP_REGISTER_METHOD(0x02D26A60, int32_t, RemoveAll, (app::List_1_ExternalForceEntry_ * this_ptr, app::Predicate_1_ExternalForceEntry_ * match))
    IL2CPP_REGISTER_METHOD(0x025EABD0, void, RemoveRange, (app::List_1_ExternalForceEntry_ * this_ptr, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse_1, (app::List_1_ExternalForceEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EACE0, void, Reverse_2, (app::List_1_ExternalForceEntry_ * this_ptr, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x025EAD50, void, Sort_1, (app::List_1_ExternalForceEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EADB0, void, Sort_2, (app::List_1_ExternalForceEntry_ * this_ptr, app::IComparer_1_ExternalForceEntry_ * comparer))
    IL2CPP_REGISTER_METHOD(0x025EAE20, void, Sort_3, (app::List_1_ExternalForceEntry_ * this_ptr, int32_t index, int32_t count, app::IComparer_1_ExternalForceEntry_ * comparer))
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort_4, (app::List_1_ExternalForceEntry_ * this_ptr, app::Comparison_1_ExternalForceEntry_ * comparison))
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::ExternalForceEntry__Array *, ToArray, (app::List_1_ExternalForceEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EAF70, void, TrimExcess, (app::List_1_ExternalForceEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EAFD0, void, cctor, ())
}
