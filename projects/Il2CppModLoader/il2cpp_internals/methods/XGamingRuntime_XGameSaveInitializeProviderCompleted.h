#include <interception_macros.h>

namespace app::methods::XGamingRuntime::XGameSaveInitializeProviderCompleted {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::XGameSaveInitializeProviderCompleted * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (app::XGameSaveInitializeProviderCompleted * this_ptr, int32_t hresult, app::XGameSaveProviderHandle * game_save_provider_handle));
IL2CPP_REGISTER_METHOD(0x030BAF80, IAsyncResult *, BeginInvoke, (app::XGameSaveInitializeProviderCompleted * this_ptr, int32_t hresult, app::XGameSaveProviderHandle * game_save_provider_handle, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XGameSaveInitializeProviderCompleted * this_ptr, app::IAsyncResult * result));
}
