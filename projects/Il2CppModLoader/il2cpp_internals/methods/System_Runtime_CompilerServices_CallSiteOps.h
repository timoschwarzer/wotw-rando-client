#include <interception_macros.h>

namespace app::methods::System_Runtime_CompilerServices::CallSiteOps {
IL2CPP_REGISTER_METHOD(0x02FC81E0, bool, SetNotMatched, (app::CallSite * site));
IL2CPP_REGISTER_METHOD(0x00C3D1F0, bool, GetMatch, (app::CallSite * site));
IL2CPP_REGISTER_METHOD(0x02FC8200, void, ClearMatch, (app::CallSite * site));
IL2CPP_REGISTER_METHOD(0x0153E300, CallSite_1_System_Object_ *, CreateMatchmaker, (app::CallSite_1_System_Object_ * site));
IL2CPP_REGISTER_METHOD(0x01548530, void, AddRule, (app::CallSite_1_System_Object_ * site, app::Object * rule));
IL2CPP_REGISTER_METHOD(0x015E1490, void, UpdateRules, (app::CallSite_1_System_Object_ * this_1, int32_t matched));
IL2CPP_REGISTER_METHOD(0x01587350, Object__Array *, GetRules, (app::CallSite_1_System_Object_ * site));
IL2CPP_REGISTER_METHOD(0x0153E7B0, RuleCache_1_System_Object_ *, GetRuleCache, (app::CallSite_1_System_Object_ * site));
IL2CPP_REGISTER_METHOD(0x015E1460, void, MoveRule, (app::RuleCache_1_System_Object_ * cache, app::Object * rule, int32_t i));
IL2CPP_REGISTER_METHOD(0x01587330, Object__Array *, GetCachedRules, (app::RuleCache_1_System_Object_ * cache));
IL2CPP_REGISTER_METHOD(0x01548550, Object *, Bind, (app::CallSiteBinder * binder, app::CallSite_1_System_Object_ * site, app::Object__Array * args));
}
