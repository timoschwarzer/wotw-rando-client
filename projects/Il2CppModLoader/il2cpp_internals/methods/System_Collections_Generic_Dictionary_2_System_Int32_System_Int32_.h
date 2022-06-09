#include <interception_macros.h>

namespace app::methods::System_Collections_Generic::Dictionary_2_System_Int32_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, __ctor_1, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04795528, Dictionary_2_System_Int32_System_Int32___ctor__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr, int32_t key));
    IL2CPP_REGISTER_METHODINFO(0x047763B8, Dictionary_2_System_Int32_System_Int32__ContainsKey__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr, int32_t key, int32_t value));
    IL2CPP_REGISTER_METHODINFO(0x0473B9B0, Dictionary_2_System_Int32_System_Int32__Add__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BB2590, int32_t, get_Item, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr, int32_t key));
    IL2CPP_REGISTER_METHODINFO(0x04788560, Dictionary_2_System_Int32_System_Int32__get_Item__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr, int32_t key, int32_t value));
    IL2CPP_REGISTER_METHODINFO(0x0471CCC8, Dictionary_2_System_Int32_System_Int32__set_Item__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Int32_ *, get_Values, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0472DA80, Dictionary_2_System_Int32_System_Int32__get_Values__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BB3FA0, bool, Remove, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr, int32_t key));
    IL2CPP_REGISTER_METHODINFO(0x0476A160, Dictionary_2_System_Int32_System_Int32__Remove__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Int32_ *, get_Keys, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04743578, Dictionary_2_System_Int32_System_Int32__get_Keys__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0471BA70, Dictionary_2_System_Int32_System_Int32__get_Count__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BAC6E0, app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Int32_, GetEnumerator, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047404B8, Dictionary_2_System_Int32_System_Int32__GetEnumerator__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, __ctor_2, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr, int32_t capacity));
    IL2CPP_REGISTER_METHODINFO(0x047768C8, Dictionary_2_System_Int32_System_Int32___ctor_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BB43A0, bool, TryGetValue, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr, int32_t key, int32_t * value));
    IL2CPP_REGISTER_METHODINFO(0x047112E0, Dictionary_2_System_Int32_System_Int32__TryGetValue__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0477A4A8, Dictionary_2_System_Int32_System_Int32__Clear__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0283AC50, void, __ctor_3, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr, app::IEqualityComparer_1_System_Int32_ * comparer));
    IL2CPP_REGISTER_METHOD(0x02BB1FC0, void, __ctor_4, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr, int32_t capacity, app::IEqualityComparer_1_System_Int32_ * comparer));
    IL2CPP_REGISTER_METHODINFO(0x0476A8B8, Dictionary_2_System_Int32_System_Int32___ctor_3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0283ADC0, void, __ctor_5, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr, app::IDictionary_2_System_Int32_System_Int32_ * dictionary));
    IL2CPP_REGISTER_METHOD(0x02BB2100, void, __ctor_6, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr, app::IDictionary_2_System_Int32_System_Int32_ * dictionary, app::IEqualityComparer_1_System_Int32_ * comparer));
    IL2CPP_REGISTER_METHODINFO(0x04798A70, Dictionary_2_System_Int32_System_Int32___ctor_5__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BB24C0, void, __ctor_7, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IEqualityComparer_1_System_Int32_ *, get_Comparer, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::ICollection_1_System_Int32_ *, System_Collections_Generic_IDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::IEnumerable_1_System_Int32_ *, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::ICollection_1_System_Int32_ *, System_Collections_Generic_IDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::IEnumerable_1_System_Int32_ *, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02BAC1A0, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr, app::KeyValuePair_2_System_Int32_System_Int32_ key_value_pair));
    IL2CPP_REGISTER_METHOD(0x02BB26A0, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr, app::KeyValuePair_2_System_Int32_System_Int32_ key_value_pair));
    IL2CPP_REGISTER_METHOD(0x02BB2780, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr, app::KeyValuePair_2_System_Int32_System_Int32_ key_value_pair));
    IL2CPP_REGISTER_METHOD(0x02BB2890, bool, ContainsValue, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr, int32_t value));
    IL2CPP_REGISTER_METHOD(0x02BB2960, void, CopyTo, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr, app::KeyValuePair_2_System_Int32_System_Int32___Array * array, int32_t index));
    IL2CPP_REGISTER_METHODINFO(0x04708B30, Dictionary_2_System_Int32_System_Int32__CopyTo__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BAC720, app::IEnumerator_1_KeyValuePair_2_System_Int32_System_Int32_ *, System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02BB2B90, void, GetObjectData, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHODINFO(0x04746828, Dictionary_2_System_Int32_System_Int32__GetObjectData__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BB2DD0, int32_t, FindEntry, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr, int32_t key));
    IL2CPP_REGISTER_METHODINFO(0x04780990, Dictionary_2_System_Int32_System_Int32__FindEntry__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BB2FF0, void, Initialize, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr, int32_t capacity));
    IL2CPP_REGISTER_METHOD(0x02BB3150, bool, TryInsert, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr, int32_t key, int32_t value, app::InsertionBehavior__Enum behavior));
    IL2CPP_REGISTER_METHODINFO(0x04705150, Dictionary_2_System_Int32_System_Int32__TryInsert__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BB3800, void, OnDeserialization, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr, app::Object * sender));
    IL2CPP_REGISTER_METHODINFO(0x0474B490, Dictionary_2_System_Int32_System_Int32__OnDeserialization__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BB3C00, void, Resize_1, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02BB3CD0, void, Resize_2, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr, int32_t new_size, bool force_new_hash_codes));
    IL2CPP_REGISTER_METHOD(0x02BAE050, bool, TryAdd, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr, int32_t key, int32_t value));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283D900, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr, app::KeyValuePair_2_System_Int32_System_Int32___Array * array, int32_t index));
    IL2CPP_REGISTER_METHOD(0x02BB4430, void, ICollection_CopyTo, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr, app::Array * array, int32_t index));
    IL2CPP_REGISTER_METHODINFO(0x047776B8, Dictionary_2_System_Int32_System_Int32__System_Collections_ICollection_CopyTo__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BAC720, app::IEnumerator *, IEnumerable_GetEnumerator, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02BB4A10, app::Object *, ICollection_get_SyncRoot, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsFixedSize, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsReadOnly, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283E020, app::ICollection *, IDictionary_get_Keys, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283E050, app::ICollection *, IDictionary_get_Values, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02BB4B70, app::Object *, IDictionary_get_Item, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr, app::Object * key));
    IL2CPP_REGISTER_METHOD(0x02BB4CB0, void, IDictionary_set_Item, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr, app::Object * key, app::Object * value));
    IL2CPP_REGISTER_METHODINFO(0x047051B8, Dictionary_2_System_Int32_System_Int32__System_Collections_IDictionary_set_Item__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BB4FA0, bool, IsCompatibleKey, (app::Object * key));
    IL2CPP_REGISTER_METHODINFO(0x0470DE28, Dictionary_2_System_Int32_System_Int32__IsCompatibleKey__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BB50A0, void, IDictionary_Add, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr, app::Object * key, app::Object * value));
    IL2CPP_REGISTER_METHODINFO(0x04754F90, Dictionary_2_System_Int32_System_Int32__System_Collections_IDictionary_Add__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BA7DD0, bool, IDictionary_Contains, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr, app::Object * key));
    IL2CPP_REGISTER_METHOD(0x02BAEFE0, app::IDictionaryEnumerator *, IDictionary_GetEnumerator, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02BA7F50, void, IDictionary_Remove, (app::Dictionary_2_System_Int32_System_Int32_ * this_ptr, app::Object * key));
}
