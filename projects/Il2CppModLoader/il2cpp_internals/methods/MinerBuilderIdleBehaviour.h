#include <interception_macros.h>

namespace app::methods::MinerBuilderIdleBehaviour {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, (app::MinerBuilderIdleBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x014477F0, void, OnExecute, (app::MinerBuilderIdleBehaviour * this_ptr, app::IBlackboard * blackboard));
    IL2CPP_REGISTER_METHOD(0x00EDFC40, void, OnUpdateBehaviour, (app::MinerBuilderIdleBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, GetShouldPauseTree, (app::MinerBuilderIdleBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00615280, void, __ctor, (app::MinerBuilderIdleBehaviour * this_ptr));
}
