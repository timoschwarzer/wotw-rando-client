#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::HashSet_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (HashSet_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (HashSet_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IEqualityComparer_1_System_Object_ *, get_Comparer, (HashSet_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02AB4370, void, __ctor, (HashSet_1_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x047522A8, HashSet_1_System_Object___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AB43D0, void, __ctor, (HashSet_1_System_Object_ * __this, IEqualityComparer_1_System_Object_ * comparer));
IL2CPP_REGISTER_METHOD(0x02AB4420, void, __ctor, (HashSet_1_System_Object_ * __this, IEnumerable_1_System_Object_ * collection));
IL2CPP_REGISTER_METHOD(0x02ABE510, void, __ctor, (HashSet_1_System_Object_ * __this, IEnumerable_1_System_Object_ * collection, IEqualityComparer_1_System_Object_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x047337E8, HashSet_1_System_Object___ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AB46E0, void, __ctor, (HashSet_1_System_Object_ * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x02ABE760, void, CopyFrom, (HashSet_1_System_Object_ * __this, HashSet_1_System_Object_ * source));
IL2CPP_REGISTER_METHOD(0x02AB4A60, void, System_Collections_Generic_ICollection_T__Add, (HashSet_1_System_Object_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x02AB4A90, void, Clear, (HashSet_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02ABEAC0, bool, Contains, (HashSet_1_System_Object_ * __this, Object * item));
IL2CPP_REGISTER_METHODINFO(0x0478E990, HashSet_1_System_Object__Contains__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AB4C70, void, CopyTo, (HashSet_1_System_Object_ * __this, Object__Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x02ABEC50, bool, Remove, (HashSet_1_System_Object_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x02ABCD80, HashSet_1_T_Enumerator_System_Object_, GetEnumerator, (HashSet_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02ABCDC0, IEnumerator_1_System_Object_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (HashSet_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02ABCDC0, IEnumerator *, IEnumerable_GetEnumerator, (HashSet_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02ABEF90, void, GetObjectData, (HashSet_1_System_Object_ * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04702D28, HashSet_1_System_Object__GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02ABF1B0, void, OnDeserialization, (HashSet_1_System_Object_ * __this, Object * sender));
IL2CPP_REGISTER_METHODINFO(0x0473BA38, HashSet_1_System_Object__OnDeserialization__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, (HashSet_1_System_Object_ * __this, Object * item));
IL2CPP_REGISTER_METHODINFO(0x0473F630, HashSet_1_System_Object__Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02ABF4D0, void, UnionWith, (HashSet_1_System_Object_ * __this, IEnumerable_1_System_Object_ * other));
IL2CPP_REGISTER_METHODINFO(0x04734790, HashSet_1_System_Object__UnionWith__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AB5840, void, CopyTo, (HashSet_1_System_Object_ * __this, Object__Array * array));
IL2CPP_REGISTER_METHOD(0x02ABF730, void, CopyTo, (HashSet_1_System_Object_ * __this, Object__Array * array, int32_t arrayIndex, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x047911B0, HashSet_1_System_Object__CopyTo_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02ABF9A0, int32_t, RemoveWhere, (HashSet_1_System_Object_ * __this, Predicate_1_Object_ * match));
IL2CPP_REGISTER_METHODINFO(0x0471F478, HashSet_1_System_Object__RemoveWhere__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02ABFB30, void, TrimExcess, (HashSet_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02ABFD80, void, Initialize, (HashSet_1_System_Object_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02ABFE80, void, IncreaseCapacity, (HashSet_1_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04765C58, HashSet_1_System_Object__IncreaseCapacity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02ABFF80, void, SetCapacity, (HashSet_1_System_Object_ * __this, int32_t newSize));
IL2CPP_REGISTER_METHOD(0x02AC0130, bool, AddIfNotPresent, (HashSet_1_System_Object_ * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02ABE370, void, AddValue, (HashSet_1_System_Object_ * __this, int32_t index, int32_t hashCode, Object * value));
IL2CPP_REGISTER_METHOD(0x02AB6720, bool, AreEqualityComparersEqual, (HashSet_1_System_Object_ * set1, HashSet_1_System_Object_ * set2));
IL2CPP_REGISTER_METHOD(0x02AC04B0, int32_t, InternalGetHashCode, (HashSet_1_System_Object_ * __this, Object * item));
}
