#include <interception_macros.h>

namespace app::methods::System_Collections::SortedList_SyncSortedList {
IL2CPP_REGISTER_METHOD(0x0202FE70, void, __ctor, (app::SortedList_SyncSortedList * this_ptr, app::SortedList * list));
IL2CPP_REGISTER_METHOD(0x0202FF40, int32_t, get_Count, (app::SortedList_SyncSortedList * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB40, Object *, get_SyncRoot, (app::SortedList_SyncSortedList * this_ptr));
IL2CPP_REGISTER_METHOD(0x02030050, bool, get_IsReadOnly, (app::SortedList_SyncSortedList * this_ptr));
IL2CPP_REGISTER_METHOD(0x02030080, bool, get_IsFixedSize, (app::SortedList_SyncSortedList * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsSynchronized, (app::SortedList_SyncSortedList * this_ptr));
IL2CPP_REGISTER_METHOD(0x020300B0, Object *, get_Item, (app::SortedList_SyncSortedList * this_ptr, app::Object * key));
IL2CPP_REGISTER_METHOD(0x020301C0, void, set_Item, (app::SortedList_SyncSortedList * this_ptr, app::Object * key, app::Object * value));
IL2CPP_REGISTER_METHOD(0x020302D0, void, Add, (app::SortedList_SyncSortedList * this_ptr, app::Object * key, app::Object * value));
IL2CPP_REGISTER_METHOD(0x020303E0, int32_t, get_Capacity, (app::SortedList_SyncSortedList * this_ptr));
IL2CPP_REGISTER_METHOD(0x020304F0, void, Clear, (app::SortedList_SyncSortedList * this_ptr));
IL2CPP_REGISTER_METHOD(0x020305E0, Object *, Clone, (app::SortedList_SyncSortedList * this_ptr));
IL2CPP_REGISTER_METHOD(0x020306F0, bool, Contains, (app::SortedList_SyncSortedList * this_ptr, app::Object * key));
IL2CPP_REGISTER_METHOD(0x02030800, bool, ContainsKey, (app::SortedList_SyncSortedList * this_ptr, app::Object * key));
IL2CPP_REGISTER_METHOD(0x02030910, bool, ContainsValue, (app::SortedList_SyncSortedList * this_ptr, app::Object * key));
IL2CPP_REGISTER_METHOD(0x02030A20, void, CopyTo, (app::SortedList_SyncSortedList * this_ptr, app::Array * array, int32_t index));
IL2CPP_REGISTER_METHOD(0x02030B30, Object *, GetByIndex, (app::SortedList_SyncSortedList * this_ptr, int32_t index));
IL2CPP_REGISTER_METHOD(0x02030C40, IDictionaryEnumerator *, GetEnumerator, (app::SortedList_SyncSortedList * this_ptr));
IL2CPP_REGISTER_METHOD(0x02030D50, Object *, GetKey, (app::SortedList_SyncSortedList * this_ptr, int32_t index));
IL2CPP_REGISTER_METHOD(0x02030E60, IList *, GetKeyList, (app::SortedList_SyncSortedList * this_ptr));
IL2CPP_REGISTER_METHOD(0x02030F70, IList *, GetValueList, (app::SortedList_SyncSortedList * this_ptr));
IL2CPP_REGISTER_METHOD(0x02031080, int32_t, IndexOfKey, (app::SortedList_SyncSortedList * this_ptr, app::Object * key));
IL2CPP_REGISTER_METHODINFO(0x04723D80, SortedList_SyncSortedList_IndexOfKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02031250, int32_t, IndexOfValue, (app::SortedList_SyncSortedList * this_ptr, app::Object * value));
IL2CPP_REGISTER_METHOD(0x02031360, void, RemoveAt, (app::SortedList_SyncSortedList * this_ptr, int32_t index));
IL2CPP_REGISTER_METHOD(0x02031460, void, Remove, (app::SortedList_SyncSortedList * this_ptr, app::Object * key));
IL2CPP_REGISTER_METHOD(0x02031560, KeyValuePairs__Array *, ToKeyValuePairsArray, (app::SortedList_SyncSortedList * this_ptr));
}
