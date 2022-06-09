#include <interception_macros.h>

namespace app::methods::System_Collections_Generic::HashSet_1_System_UInt32_ {
IL2CPP_REGISTER_METHOD(0x02AB90A0, bool, Contains, (app::HashSet_1_System_UInt32_ * this_ptr, uint32_t item));
IL2CPP_REGISTER_METHODINFO(0x04797470, HashSet_1_System_UInt32__Contains__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AB4370, void, __ctor_1, (app::HashSet_1_System_UInt32_ * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0473D3B8, HashSet_1_System_UInt32___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, (app::HashSet_1_System_UInt32_ * this_ptr, uint32_t item));
IL2CPP_REGISTER_METHODINFO(0x0473BDC8, HashSet_1_System_UInt32__Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AB43D0, void, __ctor_2, (app::HashSet_1_System_UInt32_ * this_ptr, app::IEqualityComparer_1_System_UInt32_ * comparer));
IL2CPP_REGISTER_METHOD(0x02AB4420, void, __ctor_3, (app::HashSet_1_System_UInt32_ * this_ptr, app::IEnumerable_1_System_UInt32_ * collection));
IL2CPP_REGISTER_METHOD(0x02AC0530, void, __ctor_4, (app::HashSet_1_System_UInt32_ * this_ptr, app::IEnumerable_1_System_UInt32_ * collection, app::IEqualityComparer_1_System_UInt32_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04721CB8, HashSet_1_System_UInt32___ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AB46E0, void, __ctor_5, (app::HashSet_1_System_UInt32_ * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHOD(0x02AC0780, void, CopyFrom, (app::HashSet_1_System_UInt32_ * this_ptr, app::HashSet_1_System_UInt32_ * source));
IL2CPP_REGISTER_METHOD(0x02AB4A60, void, System_Collections_Generic_ICollection_T__Add, (app::HashSet_1_System_UInt32_ * this_ptr, uint32_t item));
IL2CPP_REGISTER_METHOD(0x02AB4A90, void, Clear, (app::HashSet_1_System_UInt32_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02AB4C70, void, CopyTo_1, (app::HashSet_1_System_UInt32_ * this_ptr, app::UInt32__Array * array, int32_t array_index));
IL2CPP_REGISTER_METHOD(0x02AB9220, bool, Remove, (app::HashSet_1_System_UInt32_ * this_ptr, uint32_t item));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::HashSet_1_System_UInt32_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (app::HashSet_1_System_UInt32_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02AB4FD0, HashSet_1_T_Enumerator_System_UInt32_, GetEnumerator, (app::HashSet_1_System_UInt32_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02AB5010, IEnumerator_1_System_UInt32_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::HashSet_1_System_UInt32_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02AB5010, IEnumerator *, IEnumerable_GetEnumerator, (app::HashSet_1_System_UInt32_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02AC0AE0, void, GetObjectData, (app::HashSet_1_System_UInt32_ * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x047661F0, HashSet_1_System_UInt32__GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AC0D00, void, OnDeserialization, (app::HashSet_1_System_UInt32_ * this_ptr, app::Object * sender));
IL2CPP_REGISTER_METHODINFO(0x04743608, HashSet_1_System_UInt32__OnDeserialization__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AC1020, void, UnionWith, (app::HashSet_1_System_UInt32_ * this_ptr, app::IEnumerable_1_System_UInt32_ * other));
IL2CPP_REGISTER_METHODINFO(0x0472E438, HashSet_1_System_UInt32__UnionWith__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AB5840, void, CopyTo_2, (app::HashSet_1_System_UInt32_ * this_ptr, app::UInt32__Array * array));
IL2CPP_REGISTER_METHOD(0x02AC1280, void, CopyTo_3, (app::HashSet_1_System_UInt32_ * this_ptr, app::UInt32__Array * array, int32_t array_index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x047402C0, HashSet_1_System_UInt32__CopyTo_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AC14E0, int32_t, RemoveWhere, (app::HashSet_1_System_UInt32_ * this_ptr, app::Predicate_1_UInt32_ * match));
IL2CPP_REGISTER_METHODINFO(0x047749B8, HashSet_1_System_UInt32__RemoveWhere__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB990, IEqualityComparer_1_System_UInt32_ *, get_Comparer, (app::HashSet_1_System_UInt32_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02AC1660, void, TrimExcess, (app::HashSet_1_System_UInt32_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02AC18C0, void, Initialize, (app::HashSet_1_System_UInt32_ * this_ptr, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02AC19C0, void, IncreaseCapacity, (app::HashSet_1_System_UInt32_ * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04705CF8, HashSet_1_System_UInt32__IncreaseCapacity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AC1AC0, void, SetCapacity, (app::HashSet_1_System_UInt32_ * this_ptr, int32_t new_size));
IL2CPP_REGISTER_METHOD(0x02ABA6C0, bool, AddIfNotPresent, (app::HashSet_1_System_UInt32_ * this_ptr, uint32_t value));
IL2CPP_REGISTER_METHOD(0x02ABAA40, void, AddValue, (app::HashSet_1_System_UInt32_ * this_ptr, int32_t index, int32_t hash_code, uint32_t value));
IL2CPP_REGISTER_METHOD(0x02AB6720, bool, AreEqualityComparersEqual, (app::HashSet_1_System_UInt32_ * set1, app::HashSet_1_System_UInt32_ * set2));
IL2CPP_REGISTER_METHOD(0x02ABAB80, int32_t, InternalGetHashCode, (app::HashSet_1_System_UInt32_ * this_ptr, uint32_t item));
}
