#include <interception_macros.h>

namespace app::methods::System::LocalDataStoreMgr {
IL2CPP_REGISTER_METHOD(0x02266C80, LocalDataStoreHolder *, CreateLocalDataStore, (app::LocalDataStoreMgr * this_ptr));
IL2CPP_REGISTER_METHOD(0x02266FC0, void, DeleteLocalDataStore, (app::LocalDataStoreMgr * this_ptr, app::LocalDataStore * store));
IL2CPP_REGISTER_METHOD(0x02267110, LocalDataStoreSlot *, AllocateDataSlot, (app::LocalDataStoreMgr * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04789918, LocalDataStoreMgr_AllocateDataSlot__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02267450, LocalDataStoreSlot *, AllocateNamedDataSlot, (app::LocalDataStoreMgr * this_ptr, app::String * name));
IL2CPP_REGISTER_METHOD(0x022675F0, LocalDataStoreSlot *, GetNamedDataSlot, (app::LocalDataStoreMgr * this_ptr, app::String * name));
IL2CPP_REGISTER_METHOD(0x02267780, void, FreeNamedDataSlot, (app::LocalDataStoreMgr * this_ptr, app::String * name));
IL2CPP_REGISTER_METHOD(0x022678D0, void, FreeDataSlot, (app::LocalDataStoreMgr * this_ptr, int32_t slot, int64_t cookie));
IL2CPP_REGISTER_METHOD(0x02267B30, void, ValidateSlot, (app::LocalDataStoreMgr * this_ptr, app::LocalDataStoreSlot * slot));
IL2CPP_REGISTER_METHODINFO(0x04718518, LocalDataStoreMgr_ValidateSlot__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, GetSlotTableLength, (app::LocalDataStoreMgr * this_ptr));
IL2CPP_REGISTER_METHOD(0x02267C00, void, __ctor, (app::LocalDataStoreMgr * this_ptr));
}
