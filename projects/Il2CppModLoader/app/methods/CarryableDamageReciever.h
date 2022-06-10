#include <interception_macros.h>

namespace app::methods::CarryableDamageReciever {
    IL2CPP_REGISTER_METHOD(0x00B25A10, void, Awake, (app::CarryableDamageReciever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B25C50, void, OnRecieveDamage, (app::CarryableDamageReciever * this_ptr, app::Damage * damage))
    IL2CPP_REGISTER_METHOD(0x00B25D30, void, ctor, (app::CarryableDamageReciever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject *, IDamageReciever_get_gameObject, (app::CarryableDamageReciever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform *, IDamageReciever_get_transform, (app::CarryableDamageReciever * this_ptr))
}
