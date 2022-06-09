#include <interception_macros.h>

namespace app::methods::AsyncRaycast_Manager {
IL2CPP_REGISTER_METHOD(0x00842CF0, AsyncRaycast_Manager *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x00842F80, void, __ctor, (app::AsyncRaycast_Manager * this_ptr));
IL2CPP_REGISTER_METHOD(0x008430D0, void, AddInstance, (app::AsyncRaycast_Manager * this_ptr, app::AsyncRaycast * arc));
IL2CPP_REGISTER_METHOD(0x00843290, void, RemoveInstance, (app::AsyncRaycast_Manager * this_ptr, app::AsyncRaycast * arc));
IL2CPP_REGISTER_METHOD(0x00843450, void, RefreshBufferCapacity, (app::AsyncRaycast_Manager * this_ptr));
IL2CPP_REGISTER_METHOD(0x008436F0, void, ScheduleCasts, (app::AsyncRaycast_Manager * this_ptr));
IL2CPP_REGISTER_METHOD(0x00843AA0, void, CompleteCasts, (app::AsyncRaycast_Manager * this_ptr));
}
