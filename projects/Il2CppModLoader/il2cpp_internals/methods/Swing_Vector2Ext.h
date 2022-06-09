#include <interception_macros.h>

namespace app::methods::Swing::Vector2Ext {
IL2CPP_REGISTER_METHOD(0x013BB100, float, cross, (app::Vector2 lhs, app::Vector2 rhs));
IL2CPP_REGISTER_METHOD(0x01830090, Vector2, project, (app::Vector2 _vector, app::Vector2 _on_normal));
IL2CPP_REGISTER_METHOD(0x01830230, Vector2, projectPerpendicular, (app::Vector2 _vector, app::Vector2 _on_normal));
IL2CPP_REGISTER_METHOD(0x01830300, Vector2, slerp, (app::Vector2 _from, app::Vector2 _to, float _t));
IL2CPP_REGISTER_METHOD(0x01830510, Vector2, lerpDirection, (app::Vector2 _from, app::Vector2 _to, float _t));
IL2CPP_REGISTER_METHOD(0x0182ACD0, Vector2, uniform, (float _xy));
IL2CPP_REGISTER_METHOD(0x018306D0, float, sqrDistance, (app::Vector2 _p1, app::Vector2 _p2));
}
