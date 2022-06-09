#include <interception_macros.h>

namespace app::methods::SystemIntegration_Synchronizer::TwoDataProviderSynchronizer {
IL2CPP_REGISTER_METHOD(0x00CDA2A0, bool, get_HasSynchronised, (app::TwoDataProviderSynchronizer * this_ptr));
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (app::TwoDataProviderSynchronizer * this_ptr, app::IDataProvider * play_fab_achievement_provider, app::IDataProvider * platform_achievement_provider));
IL2CPP_REGISTER_METHOD(0x00CDA360, CacheData__Array *, get_Local, (app::TwoDataProviderSynchronizer * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CDA3F0, CacheData__Array *, get_Remote, (app::TwoDataProviderSynchronizer * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Award, (app::TwoDataProviderSynchronizer * this_ptr, app::CacheData * data, bool force_update));
IL2CPP_REGISTER_METHOD(0x00CDA480, void, SynchronizeWithServer, (app::TwoDataProviderSynchronizer * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ClearLocalCache, (app::TwoDataProviderSynchronizer * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, BuildFor, (app::TwoDataProviderSynchronizer * this_ptr, app::String * user));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetUser, (app::TwoDataProviderSynchronizer * this_ptr, app::String * user));
}
