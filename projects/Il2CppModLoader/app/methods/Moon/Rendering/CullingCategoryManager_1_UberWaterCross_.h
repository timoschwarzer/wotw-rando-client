#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::Rendering::CullingCategoryManager_1_UberWaterCross_ {
    IL2CPP_REGISTER_METHOD(0x029044B0, void, Register, (app::CullingCategoryManager_1_UberWaterCross_ * this_ptr, app::Renderer * renderer, app::UberWaterCross * item, app::Component_1 * log_context))
    IL2CPP_REGISTER_METHODINFO(0x04716F38, CullingCategoryManager_1_UberWaterCross__Register__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02904670, void, Unregister, (app::CullingCategoryManager_1_UberWaterCross_ * this_ptr, app::Renderer * renderer, app::Component_1 * log_context))
    IL2CPP_REGISTER_METHODINFO(0x04740978, CullingCategoryManager_1_UberWaterCross__Unregister__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02904370, void, ctor, (app::CullingCategoryManager_1_UberWaterCross_ * this_ptr, app::CullingCategory__Enum mask, bool per_slice))
    IL2CPP_REGISTER_METHODINFO(0x04747D28, CullingCategoryManager_1_UberWaterCross___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02904830, app::CullingCategoryManager_1_T_Enumerator_UberWaterCross_, Resolve, (app::CullingCategoryManager_1_UberWaterCross_ * this_ptr, app::RendererCullingCategoryResults results))
    IL2CPP_REGISTER_METHODINFO(0x04718430, CullingCategoryManager_1_UberWaterCross__Resolve__MethodInfo)
}
