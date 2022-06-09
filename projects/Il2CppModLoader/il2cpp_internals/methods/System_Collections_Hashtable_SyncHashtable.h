#include <interception_macros.h>

namespace app::methods::System_Collections::Hashtable_SyncHashtable {
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, __ctor_1, (app::Hashtable_SyncHashtable * this_ptr, app::Hashtable * table));
    IL2CPP_REGISTER_METHOD(0x02027AD0, void, __ctor_2, (app::Hashtable_SyncHashtable * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHODINFO(0x0472E770, Hashtable_SyncHashtable__ctor_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02027C60, void, GetObjectData, (app::Hashtable_SyncHashtable * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHODINFO(0x047536B0, Hashtable_SyncHashtable_GetObjectData__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02027E60, int32_t, get_Count, (app::Hashtable_SyncHashtable * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02027E90, bool, get_IsReadOnly, (app::Hashtable_SyncHashtable * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02027EC0, bool, get_IsFixedSize, (app::Hashtable_SyncHashtable * this_ptr));
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsSynchronized, (app::Hashtable_SyncHashtable * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02027EF0, app::Object *, get_Item, (app::Hashtable_SyncHashtable * this_ptr, app::Object * key));
    IL2CPP_REGISTER_METHOD(0x02027F20, void, set_Item, (app::Hashtable_SyncHashtable * this_ptr, app::Object * key, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x02028050, app::Object *, get_SyncRoot, (app::Hashtable_SyncHashtable * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02028080, void, Add, (app::Hashtable_SyncHashtable * this_ptr, app::Object * key, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x020281B0, void, Clear, (app::Hashtable_SyncHashtable * this_ptr));
    IL2CPP_REGISTER_METHOD(0x020282C0, bool, Contains, (app::Hashtable_SyncHashtable * this_ptr, app::Object * key));
    IL2CPP_REGISTER_METHOD(0x020282F0, bool, ContainsKey, (app::Hashtable_SyncHashtable * this_ptr, app::Object * key));
    IL2CPP_REGISTER_METHODINFO(0x047971F0, Hashtable_SyncHashtable_ContainsKey__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x020283E0, void, CopyTo, (app::Hashtable_SyncHashtable * this_ptr, app::Array * array, int32_t array_index));
    IL2CPP_REGISTER_METHOD(0x02028510, app::Object *, Clone, (app::Hashtable_SyncHashtable * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02028700, app::IEnumerator *, IEnumerable_GetEnumerator, (app::Hashtable_SyncHashtable * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02028700, app::IDictionaryEnumerator *, GetEnumerator, (app::Hashtable_SyncHashtable * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02028730, app::ICollection *, get_Keys, (app::Hashtable_SyncHashtable * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02028860, app::ICollection *, get_Values, (app::Hashtable_SyncHashtable * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02028990, void, Remove, (app::Hashtable_SyncHashtable * this_ptr, app::Object * key));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDeserialization, (app::Hashtable_SyncHashtable * this_ptr, app::Object * sender));
    IL2CPP_REGISTER_METHOD(0x02028AB0, app::KeyValuePairs__Array *, ToKeyValuePairsArray, (app::Hashtable_SyncHashtable * this_ptr));
}
