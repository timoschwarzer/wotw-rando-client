#include <interception_macros.h>

namespace app::methods::QuestItemPickup {
    IL2CPP_REGISTER_METHOD(0x00E8A9F0, void, OnCollectorCandidateTouch, (app::QuestItemPickup * this_ptr, app::GameObject * collector));
    IL2CPP_REGISTER_METHOD(0x005AC260, void, __ctor, (app::QuestItemPickup * this_ptr));
}
