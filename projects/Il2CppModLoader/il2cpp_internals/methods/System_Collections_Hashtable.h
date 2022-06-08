#include <interception_macros.h>

namespace app::methods::System::Collections::Hashtable {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Hashtable * __this, bool trash));
IL2CPP_REGISTER_METHOD(0x01E49380, void, __ctor, (Hashtable * __this));
IL2CPP_REGISTER_METHOD(0x02023110, void, __ctor, (Hashtable * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02023120, void, __ctor, (Hashtable * __this, int32_t capacity, float loadFactor));
IL2CPP_REGISTER_METHODINFO(0x047839D8, Hashtable__ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020233D0, void, __ctor, (Hashtable * __this, int32_t capacity, float loadFactor, IHashCodeProvider * hcp, IComparer * comparer));
IL2CPP_REGISTER_METHOD(0x02023560, void, __ctor, (Hashtable * __this, int32_t capacity, float loadFactor, IEqualityComparer * equalityComparer));
IL2CPP_REGISTER_METHOD(0x02023590, void, __ctor, (Hashtable * __this, IHashCodeProvider * hcp, IComparer * comparer));
IL2CPP_REGISTER_METHOD(0x02023710, void, __ctor, (Hashtable * __this, IEqualityComparer * equalityComparer));
IL2CPP_REGISTER_METHOD(0x02023750, void, __ctor, (Hashtable * __this, int32_t capacity, IEqualityComparer * equalityComparer));
IL2CPP_REGISTER_METHOD(0x02023780, void, __ctor, (Hashtable * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x02023850, uint32_t, InitHash, (Hashtable * __this, Object * key, int32_t hashsize, uint32_t * seed, uint32_t * incr));
IL2CPP_REGISTER_METHOD(0x020238A0, void, Add, (Hashtable * __this, Object * key, Object * value));
IL2CPP_REGISTER_METHOD(0x020238C0, void, Clear, (Hashtable * __this));
IL2CPP_REGISTER_METHOD(0x02023AA0, Object *, Clone, (Hashtable * __this));
IL2CPP_REGISTER_METHOD(0x02023C90, bool, Contains, (Hashtable * __this, Object * key));
IL2CPP_REGISTER_METHOD(0x02023CB0, bool, ContainsKey, (Hashtable * __this, Object * key));
IL2CPP_REGISTER_METHODINFO(0x047212B0, Hashtable_ContainsKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02023E80, void, CopyKeys, (Hashtable * __this, Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x02023F30, void, CopyEntries, (Hashtable * __this, Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x02024080, void, CopyTo, (Hashtable * __this, Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHODINFO(0x0473E158, Hashtable_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02024360, KeyValuePairs__Array *, ToKeyValuePairsArray, (Hashtable * __this));
IL2CPP_REGISTER_METHOD(0x02024580, void, CopyValues, (Hashtable * __this, Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x02024630, Object *, get_Item, (Hashtable * __this, Object * key));
IL2CPP_REGISTER_METHODINFO(0x04725C00, Hashtable_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02024870, void, set_Item, (Hashtable * __this, Object * key, Object * value));
IL2CPP_REGISTER_METHOD(0x02024890, void, expand, (Hashtable * __this));
IL2CPP_REGISTER_METHOD(0x02024960, void, rehash, (Hashtable * __this));
IL2CPP_REGISTER_METHOD(0x02024990, void, UpdateVersion, (Hashtable * __this));
IL2CPP_REGISTER_METHOD(0x020249B0, void, rehash, (Hashtable * __this, int32_t newsize, bool forceNewHashCode));
IL2CPP_REGISTER_METHOD(0x02024C30, IEnumerator *, IEnumerable_GetEnumerator, (Hashtable * __this));
IL2CPP_REGISTER_METHOD(0x02024DB0, IDictionaryEnumerator *, GetEnumerator, (Hashtable * __this));
IL2CPP_REGISTER_METHOD(0x02024F30, int32_t, GetHash, (Hashtable * __this, Object * key));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, (Hashtable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsFixedSize, (Hashtable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (Hashtable * __this));
IL2CPP_REGISTER_METHOD(0x02025000, bool, KeyEquals, (Hashtable * __this, Object * item, Object * key));
IL2CPP_REGISTER_METHOD(0x02025100, ICollection *, get_Keys, (Hashtable * __this));
IL2CPP_REGISTER_METHOD(0x02025250, ICollection *, get_Values, (Hashtable * __this));
IL2CPP_REGISTER_METHOD(0x020253A0, void, Insert, (Hashtable * __this, Object * key, Object * nvalue, bool add));
IL2CPP_REGISTER_METHODINFO(0x047016D8, Hashtable_Insert__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02025A60, void, putEntry, (Hashtable * __this, Hashtable_bucket__Array * newBuckets, Object * key, Object * nvalue, int32_t hashcode));
IL2CPP_REGISTER_METHOD(0x02025BA0, void, Remove, (Hashtable * __this, Object * key));
IL2CPP_REGISTER_METHODINFO(0x047839F0, Hashtable_Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02025EE0, Object *, get_SyncRoot, (Hashtable * __this));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (Hashtable * __this));
IL2CPP_REGISTER_METHOD(0x02026040, Hashtable *, Synchronized, (Hashtable * table));
IL2CPP_REGISTER_METHODINFO(0x0475F2D0, Hashtable_Synchronized__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020261C0, void, GetObjectData, (Hashtable * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0471A108, Hashtable_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02026750, void, OnDeserialization, (Hashtable * __this, Object * sender));
IL2CPP_REGISTER_METHODINFO(0x0475F368, Hashtable_OnDeserialization__MethodInfo);
}
