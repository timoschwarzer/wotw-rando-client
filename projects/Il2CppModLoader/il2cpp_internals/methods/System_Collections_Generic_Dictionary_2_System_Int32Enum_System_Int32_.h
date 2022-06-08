#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::Dictionary_2_System::Int32Enum_System::Int32_ {
IL2CPP_REGISTER_METHOD(0x0283AC20, void, __ctor, (Dictionary_2_System_Int32Enum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x02259DF0, void, __ctor, (Dictionary_2_System_Int32Enum_System_Int32_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x0283AC50, void, __ctor, (Dictionary_2_System_Int32Enum_System_Int32_ * __this, IEqualityComparer_1_System_Int32Enum_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C2F100, void, __ctor, (Dictionary_2_System_Int32Enum_System_Int32_ * __this, int32_t capacity, IEqualityComparer_1_System_Int32Enum_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0471AA68, Dictionary_2_System_Int32Enum_System_Int32___ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0283ADC0, void, __ctor, (Dictionary_2_System_Int32Enum_System_Int32_ * __this, IDictionary_2_System_Int32Enum_System_Int32_ * dictionary));
IL2CPP_REGISTER_METHOD(0x02C2F240, void, __ctor, (Dictionary_2_System_Int32Enum_System_Int32_ * __this, IDictionary_2_System_Int32Enum_System_Int32_ * dictionary, IEqualityComparer_1_System_Int32Enum_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0475A578, Dictionary_2_System_Int32Enum_System_Int32___ctor_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C2F600, void, __ctor, (Dictionary_2_System_Int32Enum_System_Int32_ * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x002FB990, IEqualityComparer_1_System_Int32Enum_ *, get_Comparer, (Dictionary_2_System_Int32Enum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (Dictionary_2_System_Int32Enum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x0283B2B0, Dictionary_2_TKey_TValue_KeyCollection_System_Int32Enum_System_Int32_ *, get_Keys, (Dictionary_2_System_Int32Enum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x0283B2B0, ICollection_1_System_Int32Enum_ *, System_Collections_Generic_IDictionary_TKey_TValue__get_Keys, (Dictionary_2_System_Int32Enum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x0283B2B0, IEnumerable_1_System_Int32Enum_ *, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys, (Dictionary_2_System_Int32Enum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x0283B3E0, Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Int32_ *, get_Values, (Dictionary_2_System_Int32Enum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x0283B3E0, ICollection_1_System_Int32_ *, System_Collections_Generic_IDictionary_TKey_TValue__get_Values, (Dictionary_2_System_Int32Enum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x0283B3E0, IEnumerable_1_System_Int32_ *, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values, (Dictionary_2_System_Int32Enum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x02C2F6D0, int32_t, get_Item, (Dictionary_2_System_Int32Enum_System_Int32_ * __this, Int32Enum__Enum key));
IL2CPP_REGISTER_METHODINFO(0x0471A4A8, Dictionary_2_System_Int32Enum_System_Int32__get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (Dictionary_2_System_Int32Enum_System_Int32_ * __this, Int32Enum__Enum key, int32_t value));
IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (Dictionary_2_System_Int32Enum_System_Int32_ * __this, Int32Enum__Enum key, int32_t value));
IL2CPP_REGISTER_METHOD(0x02BAC1A0, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add, (Dictionary_2_System_Int32Enum_System_Int32_ * __this, KeyValuePair_2_System_Int32Enum_System_Int32_ keyValuePair));
IL2CPP_REGISTER_METHOD(0x02BB26A0, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains, (Dictionary_2_System_Int32Enum_System_Int32_ * __this, KeyValuePair_2_System_Int32Enum_System_Int32_ keyValuePair));
IL2CPP_REGISTER_METHOD(0x02BB2780, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove, (Dictionary_2_System_Int32Enum_System_Int32_ * __this, KeyValuePair_2_System_Int32Enum_System_Int32_ keyValuePair));
IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (Dictionary_2_System_Int32Enum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (Dictionary_2_System_Int32Enum_System_Int32_ * __this, Int32Enum__Enum key));
IL2CPP_REGISTER_METHOD(0x02BB2890, bool, ContainsValue, (Dictionary_2_System_Int32Enum_System_Int32_ * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x02C2F7E0, void, CopyTo, (Dictionary_2_System_Int32Enum_System_Int32_ * __this, KeyValuePair_2_System_Int32Enum_System_Int32___Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0473A4F8, Dictionary_2_System_Int32Enum_System_Int32__CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02BAC6E0, Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Int32_, GetEnumerator, (Dictionary_2_System_Int32Enum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x02BAC720, IEnumerator_1_KeyValuePair_2_System_Int32Enum_System_Int32_ *, System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator, (Dictionary_2_System_Int32Enum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x02C2FA10, void, GetObjectData, (Dictionary_2_System_Int32Enum_System_Int32_ * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04764558, Dictionary_2_System_Int32Enum_System_Int32__GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C2FC50, int32_t, FindEntry, (Dictionary_2_System_Int32Enum_System_Int32_ * __this, Int32Enum__Enum key));
IL2CPP_REGISTER_METHODINFO(0x04793C90, Dictionary_2_System_Int32Enum_System_Int32__FindEntry__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C2FE70, void, Initialize, (Dictionary_2_System_Int32Enum_System_Int32_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02C2FFD0, bool, TryInsert, (Dictionary_2_System_Int32Enum_System_Int32_ * __this, Int32Enum__Enum key, int32_t value, InsertionBehavior__Enum behavior));
IL2CPP_REGISTER_METHODINFO(0x0471DBB0, Dictionary_2_System_Int32Enum_System_Int32__TryInsert__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C30680, void, OnDeserialization, (Dictionary_2_System_Int32Enum_System_Int32_ * __this, Object * sender));
IL2CPP_REGISTER_METHODINFO(0x04762EC0, Dictionary_2_System_Int32Enum_System_Int32__OnDeserialization__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C30A80, void, Resize, (Dictionary_2_System_Int32Enum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x02C30B50, void, Resize, (Dictionary_2_System_Int32Enum_System_Int32_ * __this, int32_t newSize, bool forceNewHashCodes));
IL2CPP_REGISTER_METHOD(0x02C30E20, bool, Remove, (Dictionary_2_System_Int32Enum_System_Int32_ * __this, Int32Enum__Enum key));
IL2CPP_REGISTER_METHODINFO(0x0477A9C8, Dictionary_2_System_Int32Enum_System_Int32__Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02BB43A0, bool, TryGetValue, (Dictionary_2_System_Int32Enum_System_Int32_ * __this, Int32Enum__Enum key, int32_t * value));
IL2CPP_REGISTER_METHOD(0x02BAE050, bool, TryAdd, (Dictionary_2_System_Int32Enum_System_Int32_ * __this, Int32Enum__Enum key, int32_t value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly, (Dictionary_2_System_Int32Enum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x0283D900, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo, (Dictionary_2_System_Int32Enum_System_Int32_ * __this, KeyValuePair_2_System_Int32Enum_System_Int32___Array * array, int32_t index));
IL2CPP_REGISTER_METHOD(0x02C31220, void, ICollection_CopyTo, (Dictionary_2_System_Int32Enum_System_Int32_ * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x047429B0, Dictionary_2_System_Int32Enum_System_Int32__System_Collections_ICollection_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02BAC720, IEnumerator *, IEnumerable_GetEnumerator, (Dictionary_2_System_Int32Enum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (Dictionary_2_System_Int32Enum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x02C31800, Object *, ICollection_get_SyncRoot, (Dictionary_2_System_Int32Enum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsFixedSize, (Dictionary_2_System_Int32Enum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsReadOnly, (Dictionary_2_System_Int32Enum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x0283E020, ICollection *, IDictionary_get_Keys, (Dictionary_2_System_Int32Enum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x0283E050, ICollection *, IDictionary_get_Values, (Dictionary_2_System_Int32Enum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x02BB4B70, Object *, IDictionary_get_Item, (Dictionary_2_System_Int32Enum_System_Int32_ * __this, Object * key));
IL2CPP_REGISTER_METHOD(0x02C31960, void, IDictionary_set_Item, (Dictionary_2_System_Int32Enum_System_Int32_ * __this, Object * key, Object * value));
IL2CPP_REGISTER_METHODINFO(0x0478A608, Dictionary_2_System_Int32Enum_System_Int32__System_Collections_IDictionary_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C31C50, bool, IsCompatibleKey, (Object * key));
IL2CPP_REGISTER_METHODINFO(0x047078D0, Dictionary_2_System_Int32Enum_System_Int32__IsCompatibleKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C31D50, void, IDictionary_Add, (Dictionary_2_System_Int32Enum_System_Int32_ * __this, Object * key, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04727D30, Dictionary_2_System_Int32Enum_System_Int32__System_Collections_IDictionary_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02BA7DD0, bool, IDictionary_Contains, (Dictionary_2_System_Int32Enum_System_Int32_ * __this, Object * key));
IL2CPP_REGISTER_METHOD(0x02BAEFE0, IDictionaryEnumerator *, IDictionary_GetEnumerator, (Dictionary_2_System_Int32Enum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x02BA7F50, void, IDictionary_Remove, (Dictionary_2_System_Int32Enum_System_Int32_ * __this, Object * key));
}
