#include <interception_macros.h>

namespace app::methods::UnityEngine_UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02666F60, int32_t, Invoke, (app::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback * this_ptr, app::Ray r, app::RaycastHit2D__Array * results, float f, int32_t i));
IL2CPP_REGISTER_METHOD(0x02667530, IAsyncResult *, BeginInvoke, (app::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback * this_ptr, app::Ray r, app::RaycastHit2D__Array * results, float f, int32_t i, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback * this_ptr, app::IAsyncResult * result));
}
