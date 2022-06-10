#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_UnityEngine_Vector3_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470BB40, List_1_UnityEngine_Vector3__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D49F20, void, Add, (app::List_1_UnityEngine_Vector3_ * this_ptr, app::Vector3 item))
    IL2CPP_REGISTER_METHODINFO(0x047309F8, List_1_UnityEngine_Vector3__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, (app::List_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04723348, List_1_UnityEngine_Vector3___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D49B80, app::Vector3, get_Item, (app::List_1_UnityEngine_Vector3_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04728978, List_1_UnityEngine_Vector3__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047024F0, List_1_UnityEngine_Vector3__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_UnityEngine_Vector3_ * this_ptr, app::IEnumerable_1_UnityEngine_Vector3_ * collection))
    IL2CPP_REGISTER_METHODINFO(0x04732298, List_1_UnityEngine_Vector3__AddRange__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D49BC0, void, set_Item, (app::List_1_UnityEngine_Vector3_ * this_ptr, int32_t index, app::Vector3 value))
    IL2CPP_REGISTER_METHODINFO(0x0473D160, List_1_UnityEngine_Vector3__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::Vector3__Array *, ToArray, (app::List_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04731FD0, List_1_UnityEngine_Vector3__ToArray__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D4AC20, app::List_1_T_Enumerator_UnityEngine_Vector3_, GetEnumerator, (app::List_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475A338, List_1_UnityEngine_Vector3__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D4B890, void, RemoveAt, (app::List_1_UnityEngine_Vector3_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0470C5C0, List_1_UnityEngine_Vector3__RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D4A2B0, bool, Contains, (app::List_1_UnityEngine_Vector3_ * this_ptr, app::Vector3 item))
    IL2CPP_REGISTER_METHODINFO(0x047522F8, List_1_UnityEngine_Vector3__Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse_1, (app::List_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472CF08, List_1_UnityEngine_Vector3__Reverse__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort_1, (app::List_1_UnityEngine_Vector3_ * this_ptr, app::Comparison_1_UnityEngine_Vector3_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x04729F18, List_1_UnityEngine_Vector3__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02EEC150, void, ctor_2, (app::List_1_UnityEngine_Vector3_ * this_ptr, app::IEnumerable_1_UnityEngine_Vector3_ * collection))
    IL2CPP_REGISTER_METHODINFO(0x04748D50, List_1_UnityEngine_Vector3___ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_3, (app::List_1_UnityEngine_Vector3_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x0470BB38, List_1_UnityEngine_Vector3___ctor_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EABD0, void, RemoveRange, (app::List_1_UnityEngine_Vector3_ * this_ptr, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x047278F8, List_1_UnityEngine_Vector3__RemoveRange__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity, (app::List_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity, (app::List_1_UnityEngine_Vector3_ * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize, (app::List_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (app::List_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly, (app::List_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::List_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02EEC5E0, app::Object *, ICollection_get_SyncRoot, (app::List_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D49C20, bool, IsCompatibleObject, (app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02D49D10, app::Object *, IList_get_Item, (app::List_1_UnityEngine_Vector3_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02EEC740, void, IList_set_Item, (app::List_1_UnityEngine_Vector3_ * this_ptr, int32_t index, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02EEC8D0, int32_t, IList_Add, (app::List_1_UnityEngine_Vector3_ * this_ptr, app::Object * item))
    IL2CPP_REGISTER_METHOD(0x025E9050, app::ReadOnlyCollection_1_UnityEngine_Vector3_ *, AsReadOnly, (app::List_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D4A170, int32_t, BinarySearch_1, (app::List_1_UnityEngine_Vector3_ * this_ptr, int32_t index, int32_t count, app::Vector3 item, app::IComparer_1_UnityEngine_Vector3_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02D4A210, int32_t, BinarySearch_2, (app::List_1_UnityEngine_Vector3_ * this_ptr, app::Vector3 item, app::IComparer_1_UnityEngine_Vector3_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02D4A3A0, bool, IList_Contains, (app::List_1_UnityEngine_Vector3_ * this_ptr, app::Object * item))
    IL2CPP_REGISTER_METHOD(0x025E9490, void, CopyTo_1, (app::List_1_UnityEngine_Vector3_ * this_ptr, app::Vector3__Array * array))
    IL2CPP_REGISTER_METHOD(0x02EECA80, void, ICollection_CopyTo, (app::List_1_UnityEngine_Vector3_ * this_ptr, app::Array * array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x025E95B0, void, CopyTo_2, (app::List_1_UnityEngine_Vector3_ * this_ptr, int32_t index, app::Vector3__Array * array, int32_t array_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x025E95F0, void, CopyTo_3, (app::List_1_UnityEngine_Vector3_ * this_ptr, app::Vector3__Array * array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x025E9620, void, EnsureCapacity, (app::List_1_UnityEngine_Vector3_ * this_ptr, int32_t min))
    IL2CPP_REGISTER_METHOD(0x025E96A0, bool, Exists, (app::List_1_UnityEngine_Vector3_ * this_ptr, app::Predicate_1_UnityEngine_Vector3_ * match))
    IL2CPP_REGISTER_METHOD(0x02D4A5E0, app::Vector3, Find, (app::List_1_UnityEngine_Vector3_ * this_ptr, app::Predicate_1_UnityEngine_Vector3_ * match))
    IL2CPP_REGISTER_METHOD(0x02D4A710, app::List_1_UnityEngine_Vector3_ *, FindAll, (app::List_1_UnityEngine_Vector3_ * this_ptr, app::Predicate_1_UnityEngine_Vector3_ * match))
    IL2CPP_REGISTER_METHOD(0x025E9A20, int32_t, FindIndex_1, (app::List_1_UnityEngine_Vector3_ * this_ptr, app::Predicate_1_UnityEngine_Vector3_ * match))
    IL2CPP_REGISTER_METHOD(0x02D4A950, int32_t, FindIndex_2, (app::List_1_UnityEngine_Vector3_ * this_ptr, int32_t start_index, int32_t count, app::Predicate_1_UnityEngine_Vector3_ * match))
    IL2CPP_REGISTER_METHOD(0x02EECB70, void, ForEach, (app::List_1_UnityEngine_Vector3_ * this_ptr, app::Action_1_UnityEngine_Vector3_ * action))
    IL2CPP_REGISTER_METHOD(0x02D4AC60, app::IEnumerator_1_UnityEngine_Vector3_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::List_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D4AC60, app::IEnumerator *, IEnumerable_GetEnumerator, (app::List_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E9DF0, app::List_1_UnityEngine_Vector3_ *, GetRange, (app::List_1_UnityEngine_Vector3_ * this_ptr, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02D4ACF0, int32_t, IndexOf, (app::List_1_UnityEngine_Vector3_ * this_ptr, app::Vector3 item))
    IL2CPP_REGISTER_METHOD(0x02D4AD40, int32_t, IList_IndexOf, (app::List_1_UnityEngine_Vector3_ * this_ptr, app::Object * item))
    IL2CPP_REGISTER_METHOD(0x02D4AE90, void, Insert, (app::List_1_UnityEngine_Vector3_ * this_ptr, int32_t index, app::Vector3 item))
    IL2CPP_REGISTER_METHOD(0x02EECD20, void, IList_Insert, (app::List_1_UnityEngine_Vector3_ * this_ptr, int32_t index, app::Object * item))
    IL2CPP_REGISTER_METHOD(0x02EECEC0, void, InsertRange, (app::List_1_UnityEngine_Vector3_ * this_ptr, int32_t index, app::IEnumerable_1_UnityEngine_Vector3_ * collection))
    IL2CPP_REGISTER_METHOD(0x02D4B470, bool, Remove, (app::List_1_UnityEngine_Vector3_ * this_ptr, app::Vector3 item))
    IL2CPP_REGISTER_METHOD(0x02D4B500, void, IList_Remove, (app::List_1_UnityEngine_Vector3_ * this_ptr, app::Object * item))
    IL2CPP_REGISTER_METHOD(0x02D4B650, int32_t, RemoveAll, (app::List_1_UnityEngine_Vector3_ * this_ptr, app::Predicate_1_UnityEngine_Vector3_ * match))
    IL2CPP_REGISTER_METHOD(0x025EACE0, void, Reverse_2, (app::List_1_UnityEngine_Vector3_ * this_ptr, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x025EAD50, void, Sort_2, (app::List_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EADB0, void, Sort_3, (app::List_1_UnityEngine_Vector3_ * this_ptr, app::IComparer_1_UnityEngine_Vector3_ * comparer))
    IL2CPP_REGISTER_METHOD(0x025EAE20, void, Sort_4, (app::List_1_UnityEngine_Vector3_ * this_ptr, int32_t index, int32_t count, app::IComparer_1_UnityEngine_Vector3_ * comparer))
    IL2CPP_REGISTER_METHOD(0x025EAF70, void, TrimExcess, (app::List_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EAFD0, void, cctor, ())
}
