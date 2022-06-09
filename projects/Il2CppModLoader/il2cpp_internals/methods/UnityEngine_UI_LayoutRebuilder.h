#include <interception_macros.h>

namespace app::methods::UnityEngine_UI::LayoutRebuilder {
    IL2CPP_REGISTER_METHOD(0x0265B9B0, void, __cctor, ());
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::LayoutRebuilder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0265BDB0, void, Initialize, (app::LayoutRebuilder * this_ptr, app::RectTransform * controller));
    IL2CPP_REGISTER_METHOD(0x0098AB30, void, Clear, (app::LayoutRebuilder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0265BDF0, void, ReapplyDrivenProperties, (app::RectTransform * driven));
    IL2CPP_REGISTER_METHODINFO(0x04725C20, LayoutRebuilder_ReapplyDrivenProperties__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F2AB40, app::Transform *, get_transform, (app::LayoutRebuilder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0265BE90, bool, IsDestroyed, (app::LayoutRebuilder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0265BF30, void, StripDisabledBehavioursFromList, (app::List_1_UnityEngine_Component_ * components));
    IL2CPP_REGISTER_METHOD(0x0265C140, void, ForceRebuildLayoutImmediate, (app::RectTransform * layout_root));
    IL2CPP_REGISTER_METHOD(0x0265C280, void, Rebuild, (app::LayoutRebuilder * this_ptr, app::CanvasUpdate__Enum executing));
    IL2CPP_REGISTER_METHOD(0x0265C8D0, void, PerformLayoutControl, (app::LayoutRebuilder * this_ptr, app::RectTransform * rect, app::UnityAction_1_UnityEngine_Component_ * action));
    IL2CPP_REGISTER_METHOD(0x0265CC60, void, PerformLayoutCalculation, (app::LayoutRebuilder * this_ptr, app::RectTransform * rect, app::UnityAction_1_UnityEngine_Component_ * action));
    IL2CPP_REGISTER_METHOD(0x0265CFB0, void, MarkLayoutForRebuild, (app::RectTransform * rect));
    IL2CPP_REGISTER_METHOD(0x0265D3D0, bool, ValidController, (app::RectTransform * layout_root, app::List_1_UnityEngine_Component_ * comps));
    IL2CPP_REGISTER_METHOD(0x0265D5E0, void, MarkLayoutRootForRebuild, (app::RectTransform * controller));
    IL2CPP_REGISTER_METHOD(0x0265D830, void, LayoutComplete, (app::LayoutRebuilder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, GraphicUpdateComplete, (app::LayoutRebuilder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x024AD170, int32_t, GetHashCode, (app::LayoutRebuilder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0265D8F0, bool, Equals, (app::LayoutRebuilder * this_ptr, app::Object * obj));
    IL2CPP_REGISTER_METHOD(0x0265D950, app::String *, ToString, (app::LayoutRebuilder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0265D9E0, void, _s_Rebuilders_m__0, (app::LayoutRebuilder * x));
    IL2CPP_REGISTER_METHODINFO(0x047878B0, LayoutRebuilder__s_Rebuilders_m__0__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0265DA00, bool, _StripDisabledBehavioursFromList_m__1, (app::Component_1 * e));
    IL2CPP_REGISTER_METHODINFO(0x04703630, LayoutRebuilder__StripDisabledBehavioursFromList_m__1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0265DB90, void, _Rebuild_m__2, (app::Component_1 * e));
    IL2CPP_REGISTER_METHODINFO(0x04788E20, LayoutRebuilder__Rebuild_m__2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0265DC40, void, _Rebuild_m__3, (app::Component_1 * e));
    IL2CPP_REGISTER_METHODINFO(0x04794000, LayoutRebuilder__Rebuild_m__3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0265DCF0, void, _Rebuild_m__4, (app::Component_1 * e));
    IL2CPP_REGISTER_METHODINFO(0x04797D58, LayoutRebuilder__Rebuild_m__4__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0265DDA0, void, _Rebuild_m__5, (app::Component_1 * e));
    IL2CPP_REGISTER_METHODINFO(0x04745B78, LayoutRebuilder__Rebuild_m__5__MethodInfo);
}
