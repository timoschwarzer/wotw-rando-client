#include <interception_macros.h>

namespace app::methods::UnityEngine_UI::RectMask2D {
IL2CPP_REGISTER_METHOD(0x02664160, void, __ctor, (app::RectMask2D * this_ptr));
IL2CPP_REGISTER_METHOD(0x02664510, Canvas *, get_Canvas, (app::RectMask2D * this_ptr));
IL2CPP_REGISTER_METHOD(0x02664690, Rect, get_canvasRect, (app::RectMask2D * this_ptr));
IL2CPP_REGISTER_METHOD(0x02664710, RectTransform *, get_rectTransform, (app::RectMask2D * this_ptr));
IL2CPP_REGISTER_METHOD(0x026647A0, void, OnEnable, (app::RectMask2D * this_ptr));
IL2CPP_REGISTER_METHOD(0x02664850, void, OnDisable, (app::RectMask2D * this_ptr));
IL2CPP_REGISTER_METHOD(0x026649F0, bool, IsRaycastLocationValid, (app::RectMask2D * this_ptr, app::Vector2 sp, app::Camera * event_camera));
IL2CPP_REGISTER_METHOD(0x02664B20, Rect, get_rootCanvasRect, (app::RectMask2D * this_ptr));
IL2CPP_REGISTER_METHOD(0x02664E30, void, PerformClipping, (app::RectMask2D * this_ptr));
IL2CPP_REGISTER_METHOD(0x02665250, void, AddClippable, (app::RectMask2D * this_ptr, app::IClippable * clippable));
IL2CPP_REGISTER_METHOD(0x02665330, void, RemoveClippable, (app::RectMask2D * this_ptr, app::IClippable * clippable));
IL2CPP_REGISTER_METHOD(0x00617EB0, void, OnTransformParentChanged, (app::RectMask2D * this_ptr));
IL2CPP_REGISTER_METHOD(0x02665470, void, OnCanvasHierarchyChanged, (app::RectMask2D * this_ptr));
}
