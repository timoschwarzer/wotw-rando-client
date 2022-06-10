#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_UnityEngine_EventSystems_RaycastResult_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047533A0, List_1_UnityEngine_EventSystems_RaycastResult___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D22420, app::RaycastResult, get_Item, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0473A1F8, List_1_UnityEngine_EventSystems_RaycastResult__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04757138, List_1_UnityEngine_EventSystems_RaycastResult__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476EC20, List_1_UnityEngine_EventSystems_RaycastResult__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort_1, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::Comparison_1_UnityEngine_EventSystems_RaycastResult_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x0478D558, List_1_UnityEngine_EventSystems_RaycastResult__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D228B0, void, Add, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::RaycastResult item))
    IL2CPP_REGISTER_METHODINFO(0x0470B008, List_1_UnityEngine_EventSystems_RaycastResult__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_2, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02D21E10, void, ctor_3, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::IEnumerable_1_UnityEngine_EventSystems_RaycastResult_ * collection))
    IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D222C0, app::Object *, ICollection_get_SyncRoot, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D22480, void, set_Item, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, int32_t index, app::RaycastResult value))
    IL2CPP_REGISTER_METHOD(0x02D22510, bool, IsCompatibleObject, (app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02D22650, app::Object *, IList_get_Item, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02D226F0, void, IList_set_Item, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, int32_t index, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02D22980, int32_t, IList_Add, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::Object * item))
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::IEnumerable_1_UnityEngine_EventSystems_RaycastResult_ * collection))
    IL2CPP_REGISTER_METHOD(0x025E9050, app::ReadOnlyCollection_1_UnityEngine_EventSystems_RaycastResult_ *, AsReadOnly, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D22B60, int32_t, BinarySearch_1, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, int32_t index, int32_t count, app::RaycastResult item, app::IComparer_1_UnityEngine_EventSystems_RaycastResult_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02D22C30, int32_t, BinarySearch_2, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::RaycastResult item, app::IComparer_1_UnityEngine_EventSystems_RaycastResult_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02D22CF0, bool, Contains, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::RaycastResult item))
    IL2CPP_REGISTER_METHOD(0x02D22E30, bool, IList_Contains, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::Object * item))
    IL2CPP_REGISTER_METHOD(0x025E9490, void, CopyTo_1, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::RaycastResult__Array * array))
    IL2CPP_REGISTER_METHOD(0x02D22FA0, void, ICollection_CopyTo, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::Array * array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x025E95B0, void, CopyTo_2, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, int32_t index, app::RaycastResult__Array * array, int32_t array_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x025E95F0, void, CopyTo_3, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::RaycastResult__Array * array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x025E9620, void, EnsureCapacity, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, int32_t min))
    IL2CPP_REGISTER_METHOD(0x025E96A0, bool, Exists, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::Predicate_1_UnityEngine_EventSystems_RaycastResult_ * match))
    IL2CPP_REGISTER_METHOD(0x02D23090, app::RaycastResult, Find, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::Predicate_1_UnityEngine_EventSystems_RaycastResult_ * match))
    IL2CPP_REGISTER_METHOD(0x02D23240, app::List_1_UnityEngine_EventSystems_RaycastResult_ *, FindAll, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::Predicate_1_UnityEngine_EventSystems_RaycastResult_ * match))
    IL2CPP_REGISTER_METHOD(0x025E9A20, int32_t, FindIndex_1, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::Predicate_1_UnityEngine_EventSystems_RaycastResult_ * match))
    IL2CPP_REGISTER_METHOD(0x02D234F0, int32_t, FindIndex_2, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, int32_t start_index, int32_t count, app::Predicate_1_UnityEngine_EventSystems_RaycastResult_ * match))
    IL2CPP_REGISTER_METHOD(0x02D23640, void, ForEach, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::Action_1_UnityEngine_EventSystems_RaycastResult_ * action))
    IL2CPP_REGISTER_METHOD(0x02D23820, app::List_1_T_Enumerator_UnityEngine_EventSystems_RaycastResult_, GetEnumerator, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D238A0, app::IEnumerator_1_UnityEngine_EventSystems_RaycastResult_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D238A0, app::IEnumerator *, IEnumerable_GetEnumerator, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E9DF0, app::List_1_UnityEngine_EventSystems_RaycastResult_ *, GetRange, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02D23990, int32_t, IndexOf, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::RaycastResult item))
    IL2CPP_REGISTER_METHOD(0x02D23A00, int32_t, IList_IndexOf, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::Object * item))
    IL2CPP_REGISTER_METHOD(0x02D23B80, void, Insert, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, int32_t index, app::RaycastResult item))
    IL2CPP_REGISTER_METHOD(0x02D23C90, void, IList_Insert, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, int32_t index, app::Object * item))
    IL2CPP_REGISTER_METHOD(0x02D23E50, void, InsertRange, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, int32_t index, app::IEnumerable_1_UnityEngine_EventSystems_RaycastResult_ * collection))
    IL2CPP_REGISTER_METHOD(0x02D241D0, bool, Remove, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::RaycastResult item))
    IL2CPP_REGISTER_METHOD(0x02D24280, void, IList_Remove, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::Object * item))
    IL2CPP_REGISTER_METHOD(0x02D24400, int32_t, RemoveAll, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::Predicate_1_UnityEngine_EventSystems_RaycastResult_ * match))
    IL2CPP_REGISTER_METHOD(0x02D246B0, void, RemoveAt, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x025EABD0, void, RemoveRange, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse_1, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EACE0, void, Reverse_2, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x025EAD50, void, Sort_2, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EADB0, void, Sort_3, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::IComparer_1_UnityEngine_EventSystems_RaycastResult_ * comparer))
    IL2CPP_REGISTER_METHOD(0x025EAE20, void, Sort_4, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, int32_t index, int32_t count, app::IComparer_1_UnityEngine_EventSystems_RaycastResult_ * comparer))
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::RaycastResult__Array *, ToArray, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EAF70, void, TrimExcess, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EAFD0, void, cctor, ())
}
