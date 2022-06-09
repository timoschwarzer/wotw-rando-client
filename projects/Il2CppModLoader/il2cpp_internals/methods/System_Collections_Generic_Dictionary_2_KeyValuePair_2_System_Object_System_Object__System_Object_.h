#include <interception_macros.h>

namespace app::methods::System_Collections_Generic::Dictionary_2_KeyValuePair_2_System_Object_System_Object__System_Object_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, __ctor_1, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, __ctor_2, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr, int32_t capacity));
    IL2CPP_REGISTER_METHOD(0x0283AC50, void, __ctor_3, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr, app::IEqualityComparer_1_KeyValuePair_2_System_Object_System_Object_ * comparer));
    IL2CPP_REGISTER_METHOD(0x02EACB00, void, __ctor_4, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr, int32_t capacity, app::IEqualityComparer_1_KeyValuePair_2_System_Object_System_Object_ * comparer));
    IL2CPP_REGISTER_METHODINFO(0x0470C0E8, Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object___ctor_3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0283ADC0, void, __ctor_5, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr, app::IDictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * dictionary));
    IL2CPP_REGISTER_METHOD(0x02EACC40, void, __ctor_6, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr, app::IDictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * dictionary, app::IEqualityComparer_1_KeyValuePair_2_System_Object_System_Object_ * comparer));
    IL2CPP_REGISTER_METHODINFO(0x0477E2B8, Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object___ctor_5__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02EAD020, void, __ctor_7, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IEqualityComparer_1_KeyValuePair_2_System_Object_System_Object_ *, get_Comparer, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_KeyValuePair_2_System_Object_System_Object_System_Object_ *, get_Keys, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::ICollection_1_KeyValuePair_2_System_Object_System_Object_ *, System_Collections_Generic_IDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_KeyValuePair_2_System_Object_System_Object_System_Object_ *, get_Values, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::ICollection_1_System_Object_ *, System_Collections_Generic_IDictionary_TKey_TValue__get_Values, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::IEnumerable_1_System_Object_ *, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02EAD0F0, app::Object *, get_Item, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr, app::KeyValuePair_2_System_Object_System_Object_ key));
    IL2CPP_REGISTER_METHODINFO(0x0474CE80, Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object__get_Item__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0283B630, void, set_Item, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr, app::KeyValuePair_2_System_Object_System_Object_ key, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x0283B670, void, Add, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr, app::KeyValuePair_2_System_Object_System_Object_ key, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x0283B6B0, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr, app::KeyValuePair_2_KeyValuePair_2_System_Object_System_Object_System_Object_ key_value_pair));
    IL2CPP_REGISTER_METHOD(0x0283B6F0, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr, app::KeyValuePair_2_KeyValuePair_2_System_Object_System_Object_System_Object_ key_value_pair));
    IL2CPP_REGISTER_METHOD(0x0283B7E0, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr, app::KeyValuePair_2_KeyValuePair_2_System_Object_System_Object_System_Object_ key_value_pair));
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283B9A0, bool, ContainsKey, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr, app::KeyValuePair_2_System_Object_System_Object_ key));
    IL2CPP_REGISTER_METHOD(0x0283B9E0, bool, ContainsValue, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x02EAD210, void, CopyTo, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr, app::KeyValuePair_2_KeyValuePair_2_System_Object_System_Object_System_Object___Array * array, int32_t index));
    IL2CPP_REGISTER_METHODINFO(0x04743DE0, Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object__CopyTo__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0283BD60, app::Dictionary_2_TKey_TValue_Enumerator_KeyValuePair_2_System_Object_System_Object_System_Object_, GetEnumerator, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283BDB0, app::IEnumerator_1_KeyValuePair_2_KeyValuePair_2_System_Object_System_Object_System_Object_ *, System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02EAD440, void, GetObjectData, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHODINFO(0x0471E128, Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object__GetObjectData__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02EAD680, int32_t, FindEntry, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr, app::KeyValuePair_2_System_Object_System_Object_ key));
    IL2CPP_REGISTER_METHODINFO(0x0477B400, Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object__FindEntry__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02EAD8C0, void, Initialize, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr, int32_t capacity));
    IL2CPP_REGISTER_METHOD(0x02EADA20, bool, TryInsert, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr, app::KeyValuePair_2_System_Object_System_Object_ key, app::Object * value, app::InsertionBehavior__Enum behavior));
    IL2CPP_REGISTER_METHODINFO(0x04745140, Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object__TryInsert__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02EAE160, void, OnDeserialization, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr, app::Object * sender));
    IL2CPP_REGISTER_METHODINFO(0x0475A800, Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object__OnDeserialization__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02EAE570, void, Resize_1, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02EAE640, void, Resize_2, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr, int32_t new_size, bool force_new_hash_codes));
    IL2CPP_REGISTER_METHOD(0x02EAE910, bool, Remove, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr, app::KeyValuePair_2_System_Object_System_Object_ key));
    IL2CPP_REGISTER_METHODINFO(0x04749FB8, Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object__Remove__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0283D820, bool, TryGetValue, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr, app::KeyValuePair_2_System_Object_System_Object_ key, app::Object * * value));
    IL2CPP_REGISTER_METHOD(0x0283D8C0, bool, TryAdd, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr, app::KeyValuePair_2_System_Object_System_Object_ key, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283D900, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr, app::KeyValuePair_2_KeyValuePair_2_System_Object_System_Object_System_Object___Array * array, int32_t index));
    IL2CPP_REGISTER_METHOD(0x02EAED10, void, ICollection_CopyTo, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr, app::Array * array, int32_t index));
    IL2CPP_REGISTER_METHODINFO(0x0478B8E8, Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_ICollection_CopyTo__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0283BDB0, app::IEnumerator *, IEnumerable_GetEnumerator, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02EAF2A0, app::Object *, ICollection_get_SyncRoot, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsFixedSize, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsReadOnly, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283E020, app::ICollection *, IDictionary_get_Keys, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283E050, app::ICollection *, IDictionary_get_Values, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283E080, app::Object *, IDictionary_get_Item, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr, app::Object * key));
    IL2CPP_REGISTER_METHOD(0x02EAF400, void, IDictionary_set_Item, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr, app::Object * key, app::Object * value));
    IL2CPP_REGISTER_METHODINFO(0x04733598, Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IDictionary_set_Item__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02EAF6C0, bool, IsCompatibleKey, (app::Object * key));
    IL2CPP_REGISTER_METHODINFO(0x04764398, Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object__IsCompatibleKey__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02EAF7C0, void, IDictionary_Add, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr, app::Object * key, app::Object * value));
    IL2CPP_REGISTER_METHODINFO(0x0473BD70, Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IDictionary_Add__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0283E810, bool, IDictionary_Contains, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr, app::Object * key));
    IL2CPP_REGISTER_METHOD(0x0283E8F0, app::IDictionaryEnumerator *, IDictionary_GetEnumerator, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283E9B0, void, IDictionary_Remove, (app::Dictionary_2_KeyValuePair_2_System_Object_System_Object_System_Object_ * this_ptr, app::Object * key));
}
