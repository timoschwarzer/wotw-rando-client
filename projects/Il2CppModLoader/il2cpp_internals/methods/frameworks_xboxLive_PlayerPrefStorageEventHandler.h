#include <interception_macros.h>

namespace app::methods::frameworks_xboxLive::PlayerPrefStorageEventHandler {
IL2CPP_REGISTER_METHOD(0x00F6B820, Task *, Write, (app::PlayerPrefStorageEventHandler * this_ptr, app::String * key, app::Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x00F6BA20, Task_1_System_Byte_ *, Read, (app::PlayerPrefStorageEventHandler * this_ptr, app::String * key));
IL2CPP_REGISTER_METHOD(0x00F6BB50, Task *, Clear, (app::PlayerPrefStorageEventHandler * this_ptr, app::String * key));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::PlayerPrefStorageEventHandler * this_ptr));
}
