#include <interception_macros.h>

namespace app::methods::FoxHeadHurtZone {
IL2CPP_REGISTER_METHOD(0x01633580, void, add_ReceiveDamageCallback, (app::FoxHeadHurtZone * this_ptr, app::Action_1_Damage_ * value));
IL2CPP_REGISTER_METHOD(0x01633670, void, remove_ReceiveDamageCallback, (app::FoxHeadHurtZone * this_ptr, app::Action_1_Damage_ * value));
IL2CPP_REGISTER_METHOD(0x01633760, void, OnRecieveDamage, (app::FoxHeadHurtZone * this_ptr, app::Damage * damage));
IL2CPP_REGISTER_METHOD(0x01633800, void, __ctor, (app::FoxHeadHurtZone * this_ptr));
}
