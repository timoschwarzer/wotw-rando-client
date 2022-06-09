#include <interception_macros.h>

namespace app::methods::ShardUpgradeScreen {
    IL2CPP_REGISTER_METHOD(0x005B0220, app::ShopkeeperItem__Array *, get_Items, (app::ShardUpgradeScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005B0230, app::ShardUpgradeScreen *, get_Instance, ());
    IL2CPP_REGISTER_METHOD(0x005B02B0, void, set_Instance, (app::ShardUpgradeScreen * value));
    IL2CPP_REGISTER_METHOD(0x005B0340, app::ShopkeeperScreen *, get_ShopInstance, (app::ShardUpgradeScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005B0350, void, set_ShopInstance, (app::ShardUpgradeScreen * this_ptr, app::ShopkeeperScreen * value));
    IL2CPP_REGISTER_METHOD(0x00572C30, app::Event_1 *, get_PurchaseBeginSound, (app::ShardUpgradeScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00572C50, app::Event_1 *, get_PurchaseCompleteSound, (app::ShardUpgradeScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00572C70, app::RTPC *, get_PurchaseRTPC, (app::ShardUpgradeScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005B0490, bool, AdditionalUpdate, (app::ShardUpgradeScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005B05C0, void, Init, (app::ShardUpgradeScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00418B30, void, __ctor, (app::ShardUpgradeScreen * this_ptr));
}
