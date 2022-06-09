#include <interception_macros.h>

namespace app::methods::UnityEngine_UI::LayoutUtility {
    IL2CPP_REGISTER_METHOD(0x0265DE50, float, GetMinSize, (app::RectTransform * rect, int32_t axis));
    IL2CPP_REGISTER_METHOD(0x0265DE70, float, GetPreferredSize, (app::RectTransform * rect, int32_t axis));
    IL2CPP_REGISTER_METHOD(0x0265DE90, float, GetFlexibleSize, (app::RectTransform * rect, int32_t axis));
    IL2CPP_REGISTER_METHOD(0x0265DEB0, float, GetMinWidth, (app::RectTransform * rect));
    IL2CPP_REGISTER_METHOD(0x0265E060, float, GetPreferredWidth, (app::RectTransform * rect));
    IL2CPP_REGISTER_METHOD(0x0265E380, float, GetFlexibleWidth, (app::RectTransform * rect));
    IL2CPP_REGISTER_METHOD(0x0265E530, float, GetMinHeight, (app::RectTransform * rect));
    IL2CPP_REGISTER_METHOD(0x0265E6E0, float, GetPreferredHeight, (app::RectTransform * rect));
    IL2CPP_REGISTER_METHOD(0x0265EA00, float, GetFlexibleHeight, (app::RectTransform * rect));
    IL2CPP_REGISTER_METHOD(0x0265EBB0, float, GetLayoutProperty_1, (app::RectTransform * rect, app::Func_2_UnityEngine_UI_ILayoutElement_Single_ * property, float default_value));
    IL2CPP_REGISTER_METHOD(0x0265EBD0, float, GetLayoutProperty_2, (app::RectTransform * rect, app::Func_2_UnityEngine_UI_ILayoutElement_Single_ * property, float default_value, app::ILayoutElement * * source));
    IL2CPP_REGISTER_METHOD(0x0265EEF0, float, _GetMinWidth_m__0, (app::ILayoutElement * e));
    IL2CPP_REGISTER_METHODINFO(0x04708CB0, LayoutUtility__GetMinWidth_m__0__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0265EF80, float, _GetPreferredWidth_m__1, (app::ILayoutElement * e));
    IL2CPP_REGISTER_METHODINFO(0x0475C6F0, LayoutUtility__GetPreferredWidth_m__1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0265F010, float, _GetPreferredWidth_m__2, (app::ILayoutElement * e));
    IL2CPP_REGISTER_METHODINFO(0x04790DA0, LayoutUtility__GetPreferredWidth_m__2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0265F0A0, float, _GetFlexibleWidth_m__3, (app::ILayoutElement * e));
    IL2CPP_REGISTER_METHODINFO(0x04754550, LayoutUtility__GetFlexibleWidth_m__3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0265F130, float, _GetMinHeight_m__4, (app::ILayoutElement * e));
    IL2CPP_REGISTER_METHODINFO(0x04768168, LayoutUtility__GetMinHeight_m__4__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0265F1C0, float, _GetPreferredHeight_m__5, (app::ILayoutElement * e));
    IL2CPP_REGISTER_METHODINFO(0x04721458, LayoutUtility__GetPreferredHeight_m__5__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0265F250, float, _GetPreferredHeight_m__6, (app::ILayoutElement * e));
    IL2CPP_REGISTER_METHODINFO(0x04704B88, LayoutUtility__GetPreferredHeight_m__6__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0265F2E0, float, _GetFlexibleHeight_m__7, (app::ILayoutElement * e));
    IL2CPP_REGISTER_METHODINFO(0x047673C0, LayoutUtility__GetFlexibleHeight_m__7__MethodInfo);
}
