#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Collections::Generic::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ {
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04792138, Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F01290, bool, TryGetValue, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr, uint32_t key, app::RuntimeGuidMapping_CacheEntry * value))
    IL2CPP_REGISTER_METHODINFO(0x0476BED0, Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr, uint32_t key, app::RuntimeGuidMapping_CacheEntry value))
    IL2CPP_REGISTER_METHODINFO(0x04798398, Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr, uint32_t key, app::RuntimeGuidMapping_CacheEntry value))
    IL2CPP_REGISTER_METHODINFO(0x04732BA8, Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor_1, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04753208, Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor_2, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x0283AC50, void, ctor_3, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr, app::IEqualityComparer_1_System_UInt32_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02EFED40, void, ctor_4, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr, int32_t capacity, app::IEqualityComparer_1_System_UInt32_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x04784650, Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry___ctor_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283ADC0, void, ctor_5, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr, app::IDictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * dictionary))
    IL2CPP_REGISTER_METHOD(0x02EFEE80, void, ctor_6, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr, app::IDictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * dictionary, app::IEqualityComparer_1_System_UInt32_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x04707A80, Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry___ctor_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02EFF250, void, ctor_7, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IEqualityComparer_1_System_UInt32_ *, get_Comparer, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_RuntimeGuidMapping_CacheEntry_ *, get_Keys, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::ICollection_1_System_UInt32_ *, System_Collections_Generic_IDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::IEnumerable_1_System_UInt32_ *, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry_ *, get_Values, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::ICollection_1_RuntimeGuidMapping_CacheEntry_ *, System_Collections_Generic_IDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::IEnumerable_1_RuntimeGuidMapping_CacheEntry_ *, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02EFF320, app::RuntimeGuidMapping_CacheEntry, get_Item, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr, uint32_t key))
    IL2CPP_REGISTER_METHODINFO(0x0474C300, Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02EFF430, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr, app::KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x02EFF460, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr, app::KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x02EFF540, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr, app::KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr, uint32_t key))
    IL2CPP_REGISTER_METHOD(0x02EFF640, bool, ContainsValue, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr, app::RuntimeGuidMapping_CacheEntry value))
    IL2CPP_REGISTER_METHOD(0x02EFF720, void, CopyTo, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr, app::KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___Array * array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04747BE8, Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry__CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02EFF960, app::Dictionary_2_TKey_TValue_Enumerator_System_UInt32_RuntimeGuidMapping_CacheEntry_, GetEnumerator, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02EFF9B0, app::IEnumerator_1_KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ *, System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02EFFA50, void, GetObjectData, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04784830, Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry__GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02EFFC90, int32_t, FindEntry, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr, uint32_t key))
    IL2CPP_REGISTER_METHODINFO(0x0470BBB8, Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry__FindEntry__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02EFFEB0, void, Initialize, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02F00010, bool, TryInsert, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr, uint32_t key, app::RuntimeGuidMapping_CacheEntry value, app::InsertionBehavior__Enum behavior))
    IL2CPP_REGISTER_METHODINFO(0x047780A0, Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry__TryInsert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F006E0, void, OnDeserialization, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr, app::Object * sender))
    IL2CPP_REGISTER_METHODINFO(0x04703500, Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry__OnDeserialization__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F00AF0, void, Resize_1, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F00BC0, void, Resize_2, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr, int32_t new_size, bool force_new_hash_codes))
    IL2CPP_REGISTER_METHOD(0x02F00E90, bool, Remove, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr, uint32_t key))
    IL2CPP_REGISTER_METHODINFO(0x0476C3D0, Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAE050, bool, TryAdd, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr, uint32_t key, app::RuntimeGuidMapping_CacheEntry value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283D900, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr, app::KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___Array * array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02F01320, void, ICollection_CopyTo, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr, app::Array * array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0473FB98, Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry__System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02EFF9B0, app::IEnumerator *, IEnumerable_GetEnumerator, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F01910, app::Object *, ICollection_get_SyncRoot, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsFixedSize, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsReadOnly, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283E020, app::ICollection *, IDictionary_get_Keys, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283E050, app::ICollection *, IDictionary_get_Values, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F01A70, app::Object *, IDictionary_get_Item, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHOD(0x02F01BB0, void, IDictionary_set_Item, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr, app::Object * key, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x047043F0, Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry__System_Collections_IDictionary_set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F01EA0, bool, IsCompatibleKey, (app::Object * key))
    IL2CPP_REGISTER_METHODINFO(0x0476D4A0, Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry__IsCompatibleKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F01FA0, void, IDictionary_Add, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr, app::Object * key, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x04793228, Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry__System_Collections_IDictionary_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA7DD0, bool, IDictionary_Contains, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHOD(0x02F02280, app::IDictionaryEnumerator *, IDictionary_GetEnumerator, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA7F50, void, IDictionary_Remove, (app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * this_ptr, app::Object * key))
}
