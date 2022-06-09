#include <interception_macros.h>

namespace app::methods::System_Collections_Generic::Dictionary_2_System_Object_System_Byte_ {
IL2CPP_REGISTER_METHOD(0x0283AC20, void, __ctor_1, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02259DF0, void, __ctor_2, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x0283AC50, void, __ctor_3, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr, app::IEqualityComparer_1_System_Object_ * comparer));
IL2CPP_REGISTER_METHOD(0x02BC20C0, void, __ctor_4, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr, int32_t capacity, app::IEqualityComparer_1_System_Object_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0470F488, Dictionary_2_System_Object_System_Byte___ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0283ADC0, void, __ctor_5, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr, app::IDictionary_2_System_Object_System_Byte_ * dictionary));
IL2CPP_REGISTER_METHOD(0x02BC2200, void, __ctor_6, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr, app::IDictionary_2_System_Object_System_Byte_ * dictionary, app::IEqualityComparer_1_System_Object_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04704570, Dictionary_2_System_Object_System_Byte___ctor_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02BC25D0, void, __ctor_7, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHOD(0x002FB990, IEqualityComparer_1_System_Object_ *, get_Comparer, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x0283B2B0, Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Byte_ *, get_Keys, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x0283B2B0, ICollection_1_System_Object_ *, System_Collections_Generic_IDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x0283B2B0, IEnumerable_1_System_Object_ *, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x0283B3E0, Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Byte_ *, get_Values, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x0283B3E0, ICollection_1_System_Byte_ *, System_Collections_Generic_IDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x0283B3E0, IEnumerable_1_System_Byte_ *, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02BC26A0, uint8_t, get_Item, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr, app::Object * key));
IL2CPP_REGISTER_METHODINFO(0x0470A0B8, Dictionary_2_System_Object_System_Byte__get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr, app::Object * key, uint8_t value));
IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr, app::Object * key, uint8_t value));
IL2CPP_REGISTER_METHOD(0x02BBF180, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr, app::KeyValuePair_2_System_Object_System_Byte_ key_value_pair));
IL2CPP_REGISTER_METHOD(0x02BBF1B0, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr, app::KeyValuePair_2_System_Object_System_Byte_ key_value_pair));
IL2CPP_REGISTER_METHOD(0x02BBF290, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr, app::KeyValuePair_2_System_Object_System_Byte_ key_value_pair));
IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr, app::Object * key));
IL2CPP_REGISTER_METHOD(0x02BBF390, bool, ContainsValue, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr, uint8_t value));
IL2CPP_REGISTER_METHOD(0x02BC27B0, void, CopyTo, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr, app::KeyValuePair_2_System_Object_System_Byte___Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04772788, Dictionary_2_System_Object_System_Byte__CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02BA5400, Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Byte_, GetEnumerator, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02BA5450, IEnumerator_1_KeyValuePair_2_System_Object_System_Byte_ *, System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02BC29F0, void, GetObjectData, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0474A9C8, Dictionary_2_System_Object_System_Byte__GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02BC2C30, int32_t, FindEntry, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr, app::Object * key));
IL2CPP_REGISTER_METHODINFO(0x04729090, Dictionary_2_System_Object_System_Byte__FindEntry__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02BC2EA0, void, Initialize, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02BC3000, bool, TryInsert, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr, app::Object * key, uint8_t value, app::InsertionBehavior__Enum behavior));
IL2CPP_REGISTER_METHODINFO(0x0478DBC8, Dictionary_2_System_Object_System_Byte__TryInsert__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02BC36B0, void, OnDeserialization, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr, app::Object * sender));
IL2CPP_REGISTER_METHODINFO(0x0478F0F8, Dictionary_2_System_Object_System_Byte__OnDeserialization__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02BC3AF0, void, Resize_1, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02BC3BC0, void, Resize_2, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr, int32_t new_size, bool force_new_hash_codes));
IL2CPP_REGISTER_METHOD(0x02BC3E90, bool, Remove, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr, app::Object * key));
IL2CPP_REGISTER_METHODINFO(0x047834A8, Dictionary_2_System_Object_System_Byte__Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02BC0F90, bool, TryGetValue, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr, app::Object * key, app::uint8_t * value));
IL2CPP_REGISTER_METHOD(0x02BAE050, bool, TryAdd, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr, app::Object * key, uint8_t value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x0283D900, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr, app::KeyValuePair_2_System_Object_System_Byte___Array * array, int32_t index));
IL2CPP_REGISTER_METHOD(0x02BC42E0, void, ICollection_CopyTo, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr, app::Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0473EB70, Dictionary_2_System_Object_System_Byte__System_Collections_ICollection_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02BA5450, IEnumerator *, IEnumerable_GetEnumerator, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02BC4870, Object *, ICollection_get_SyncRoot, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsFixedSize, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsReadOnly, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x0283E020, ICollection *, IDictionary_get_Keys, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x0283E050, ICollection *, IDictionary_get_Values, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02BC1710, Object *, IDictionary_get_Item, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr, app::Object * key));
IL2CPP_REGISTER_METHOD(0x02BC49D0, void, IDictionary_set_Item, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr, app::Object * key, app::Object * value));
IL2CPP_REGISTER_METHODINFO(0x0472E010, Dictionary_2_System_Object_System_Byte__System_Collections_IDictionary_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02BC4CC0, bool, IsCompatibleKey, (app::Object * key));
IL2CPP_REGISTER_METHODINFO(0x047770E8, Dictionary_2_System_Object_System_Byte__IsCompatibleKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02BC4DC0, void, IDictionary_Add, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr, app::Object * key, app::Object * value));
IL2CPP_REGISTER_METHODINFO(0x04750118, Dictionary_2_System_Object_System_Byte__System_Collections_IDictionary_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02BC1F30, bool, IDictionary_Contains, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr, app::Object * key));
IL2CPP_REGISTER_METHOD(0x02BA7EA0, IDictionaryEnumerator *, IDictionary_GetEnumerator, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02BC2000, void, IDictionary_Remove, (app::Dictionary_2_System_Object_System_Byte_ * this_ptr, app::Object * key));
}
