#include <interception_macros.h>

namespace app::methods::PlayFab_Events::PlayFabEvents_PlayFabErrorEvent {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::PlayFabEvents_PlayFabErrorEvent * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::PlayFabEvents_PlayFabErrorEvent * this_ptr, app::PlayFabRequestCommon * request, app::PlayFabError * error));
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult *, BeginInvoke, (app::PlayFabEvents_PlayFabErrorEvent * this_ptr, app::PlayFabRequestCommon * request, app::PlayFabError * error, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::PlayFabEvents_PlayFabErrorEvent * this_ptr, app::IAsyncResult * result));
}
