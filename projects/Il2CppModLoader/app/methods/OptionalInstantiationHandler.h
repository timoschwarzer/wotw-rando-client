#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::OptionalInstantiationHandler {
    IL2CPP_REGISTER_METHOD(0x006178F0, void, Awake, (app::OptionalInstantiationHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00617980, void, RegisterInstantiation, (app::OptionalInstantiationHandler * this_ptr, app::Object_1 * obj, app::Vector3 position, app::Quaternion rotation))
    IL2CPP_REGISTER_METHOD(0x00617A60, bool, CanInstantiate, (app::OptionalInstantiationHandler * this_ptr, app::Object_1 * obj, app::Vector3 position, int32_t frames_to_test_against, int32_t allowed_instance_count, float distance_threshold))
    IL2CPP_REGISTER_METHOD(0x00617CB0, void, ctor, (app::OptionalInstantiationHandler * this_ptr))
}
