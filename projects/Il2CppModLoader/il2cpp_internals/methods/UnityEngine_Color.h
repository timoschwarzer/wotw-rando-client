#include <interception_macros.h>

namespace app::methods::UnityEngine::Color {
IL2CPP_REGISTER_METHOD(0x00121740, void, __ctor, (Color__Boxed * __this, float r, float g, float b, float a));
IL2CPP_REGISTER_METHOD(0x001EBCA0, void, __ctor, (Color__Boxed * __this, float r, float g, float b));
IL2CPP_REGISTER_METHOD(0x001EBCC0, String *, ToString, (Color__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EBCD0, int32_t, GetHashCode, (Color__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EBCE0, bool, Equals, (Color__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x001EBCF0, bool, Equals, (Color__Boxed * __this, Color other));
IL2CPP_REGISTER_METHOD(0x02427D30, Color, operator__, (Color a, Color b));
IL2CPP_REGISTER_METHOD(0x02427D90, Color, operator__, (Color a, Color b));
IL2CPP_REGISTER_METHOD(0x02427DF0, Color, operator__, (Color a, Color b));
IL2CPP_REGISTER_METHOD(0x02427E50, Color, operator__, (Color a, float b));
IL2CPP_REGISTER_METHOD(0x02427EA0, Color, operator__, (float b, Color a));
IL2CPP_REGISTER_METHOD(0x02427EF0, Color, operator__, (Color a, float b));
IL2CPP_REGISTER_METHOD(0x02427F40, bool, operator___, (Color lhs, Color rhs));
IL2CPP_REGISTER_METHOD(0x02428060, bool, operator___, (Color lhs, Color rhs));
IL2CPP_REGISTER_METHOD(0x02428090, Color, Lerp, (Color a, Color b, float t));
IL2CPP_REGISTER_METHOD(0x024281D0, Color, get_red, ());
IL2CPP_REGISTER_METHOD(0x024281E0, Color, get_green, ());
IL2CPP_REGISTER_METHOD(0x024281F0, Color, get_blue, ());
IL2CPP_REGISTER_METHOD(0x00F87B80, Color, get_white, ());
IL2CPP_REGISTER_METHOD(0x02428200, Color, get_black, ());
IL2CPP_REGISTER_METHOD(0x02428210, Color, get_yellow, ());
IL2CPP_REGISTER_METHOD(0x02428220, Color, get_cyan, ());
IL2CPP_REGISTER_METHOD(0x02428230, Color, get_magenta, ());
IL2CPP_REGISTER_METHOD(0x02428240, Color, get_gray, ());
IL2CPP_REGISTER_METHOD(0x02428240, Color, get_grey, ());
IL2CPP_REGISTER_METHOD(0x00F87B90, Color, get_clear, ());
IL2CPP_REGISTER_METHOD(0x001EBD10, float, get_grayscale, (Color__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EBD50, Color, get_linear, (Color__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EBF20, Color, get_gamma, (Color__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EC0F0, float, get_maxColorComponent, (Color__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x02428250, Vector4, operator_, (Color c));
IL2CPP_REGISTER_METHOD(0x02428250, Color, operator_, (Vector4 v));
IL2CPP_REGISTER_METHOD(0x001EC1B0, float, get_Item, (Color__Boxed * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0472BDC0, Color_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02428370, void, RGBToHSV, (Color rgbColor, float * H, float * S, float * V));
IL2CPP_REGISTER_METHOD(0x024283F0, void, RGBToHSVHelper, (float offset, float dominantcolor, float colorone, float colortwo, float * H, float * S, float * V));
IL2CPP_REGISTER_METHOD(0x02428490, Color, HSVToRGB, (float H, float S, float V));
IL2CPP_REGISTER_METHOD(0x024284C0, Color, HSVToRGB, (float H, float S, float V, bool hdr));
}
