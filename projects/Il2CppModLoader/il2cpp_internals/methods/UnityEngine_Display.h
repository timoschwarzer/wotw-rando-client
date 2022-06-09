#include <interception_macros.h>

namespace app::methods::UnityEngine::Display {
IL2CPP_REGISTER_METHOD(0x0063D180, void, __ctor_1, (app::Display * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor_2, (app::Display * this_ptr, app::void * native_display));
IL2CPP_REGISTER_METHOD(0x0242D9E0, int32_t, get_renderingWidth, (app::Display * this_ptr));
IL2CPP_REGISTER_METHOD(0x0242DAE0, int32_t, get_renderingHeight, (app::Display * this_ptr));
IL2CPP_REGISTER_METHOD(0x0242DBE0, int32_t, get_systemWidth, (app::Display * this_ptr));
IL2CPP_REGISTER_METHOD(0x0242DCE0, int32_t, get_systemHeight, (app::Display * this_ptr));
IL2CPP_REGISTER_METHOD(0x0242DDE0, Vector3, RelativeMouseAt, (app::Vector3 input_mouse_coordinates));
IL2CPP_REGISTER_METHOD(0x0242DF10, Display *, get_main, ());
IL2CPP_REGISTER_METHOD(0x0242DFB0, void, RecreateDisplayList, (app::IntPtr__Array * native_display));
IL2CPP_REGISTER_METHOD(0x0242E260, void, FireDisplaysUpdated, ());
IL2CPP_REGISTER_METHOD(0x0242E340, void, GetSystemExtImpl, (app::void * native_display, app::int32_t * w, app::int32_t * h));
IL2CPP_REGISTER_METHOD(0x0242E3B0, void, GetRenderingExtImpl, (app::void * native_display, app::int32_t * w, app::int32_t * h));
IL2CPP_REGISTER_METHOD(0x0242E420, int32_t, RelativeMouseAtImpl, (int32_t x, int32_t y, app::int32_t * rx, app::int32_t * ry));
IL2CPP_REGISTER_METHOD(0x0242E4A0, void, __cctor, ());
}
