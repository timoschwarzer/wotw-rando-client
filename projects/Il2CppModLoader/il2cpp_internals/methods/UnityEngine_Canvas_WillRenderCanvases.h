#include <interception_macros.h>

namespace app::methods::UnityEngine::Canvas_WillRenderCanvases {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Canvas_WillRenderCanvases * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x00611820, void, Invoke, (app::Canvas_WillRenderCanvases * this_ptr));
IL2CPP_REGISTER_METHOD(0x00611B10, IAsyncResult *, BeginInvoke, (app::Canvas_WillRenderCanvases * this_ptr, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Canvas_WillRenderCanvases * this_ptr, app::IAsyncResult * result));
}
