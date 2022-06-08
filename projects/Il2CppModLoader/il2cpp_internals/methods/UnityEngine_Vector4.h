#include <interception_macros.h>

namespace app::methods::UnityEngine::Vector4 {
IL2CPP_REGISTER_METHOD(0x00121740, void, __ctor, (Vector4__Boxed * __this, float x, float y, float z, float w));
IL2CPP_REGISTER_METHOD(0x00229850, void, __ctor, (Vector4__Boxed * __this, float x, float y, float z));
IL2CPP_REGISTER_METHOD(0x00229870, void, __ctor, (Vector4__Boxed * __this, float x, float y));
IL2CPP_REGISTER_METHOD(0x00229890, float, get_Item, (Vector4__Boxed * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04711ED0, Vector4_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002298A0, void, set_Item, (Vector4__Boxed * __this, int32_t index, float value));
IL2CPP_REGISTER_METHODINFO(0x047398A0, Vector4_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00121740, void, Set, (Vector4__Boxed * __this, float newX, float newY, float newZ, float newW));
IL2CPP_REGISTER_METHOD(0x02C78650, Vector4, Lerp, (Vector4 a, Vector4 b, float t));
IL2CPP_REGISTER_METHOD(0x02427DF0, Vector4, Scale, (Vector4 a, Vector4 b));
IL2CPP_REGISTER_METHOD(0x00217710, int32_t, GetHashCode, (Vector4__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002298B0, bool, Equals, (Vector4__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x001EBCF0, bool, Equals, (Vector4__Boxed * __this, Vector4 other));
IL2CPP_REGISTER_METHOD(0x02C78870, Vector4, Normalize, (Vector4 a));
IL2CPP_REGISTER_METHOD(0x002298C0, void, Normalize, (Vector4__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00229A20, Vector4, get_normalized, (Vector4__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0296BA50, float, Dot, (Vector4 a, Vector4 b));
IL2CPP_REGISTER_METHOD(0x02C78BD0, float, Distance, (Vector4 a, Vector4 b));
IL2CPP_REGISTER_METHOD(0x02C78CE0, float, Magnitude, (Vector4 a));
IL2CPP_REGISTER_METHOD(0x00229A50, float, get_magnitude, (Vector4__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00229A60, float, get_sqrMagnitude, (Vector4__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x02C78FE0, Vector4, get_zero, ());
IL2CPP_REGISTER_METHOD(0x02C79090, Vector4, get_one, ());
IL2CPP_REGISTER_METHOD(0x02427D30, Vector4, operator__, (Vector4 a, Vector4 b));
IL2CPP_REGISTER_METHOD(0x02427D90, Vector4, operator__, (Vector4 a, Vector4 b));
IL2CPP_REGISTER_METHOD(0x02427E50, Vector4, operator__, (Vector4 a, float d));
IL2CPP_REGISTER_METHOD(0x02427EA0, Vector4, operator__, (float d, Vector4 a));
IL2CPP_REGISTER_METHOD(0x02427EF0, Vector4, operator__, (Vector4 a, float d));
IL2CPP_REGISTER_METHOD(0x02C79140, bool, operator___, (Vector4 lhs, Vector4 rhs));
IL2CPP_REGISTER_METHOD(0x02C79300, bool, operator___, (Vector4 lhs, Vector4 rhs));
IL2CPP_REGISTER_METHOD(0x02C793D0, Vector4, operator_, (Vector3 v));
IL2CPP_REGISTER_METHOD(0x02C79410, Vector3, operator_, (Vector4 v));
IL2CPP_REGISTER_METHOD(0x02C79440, Vector4, operator_, (Vector2 v));
IL2CPP_REGISTER_METHOD(0x0296D4D0, Vector2, operator_, (Vector4 v));
IL2CPP_REGISTER_METHOD(0x00229A70, String *, ToString, (Vector4__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x02C796F0, float, SqrMagnitude, (Vector4 a));
IL2CPP_REGISTER_METHOD(0x00229A80, float, SqrMagnitude, (Vector4__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x02C797D0, void, __cctor, ());
}
