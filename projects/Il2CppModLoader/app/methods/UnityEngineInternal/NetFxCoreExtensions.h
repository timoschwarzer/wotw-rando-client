#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::UnityEngineInternal::NetFxCoreExtensions {
    IL2CPP_REGISTER_METHOD(0x02C7AB60, app::Delegate *, CreateDelegate, (app::MethodInfo_1 * self, app::Type * delegate_type, app::Object * target))
    IL2CPP_REGISTER_METHOD(0x019E35B0, app::MethodInfo_1 *, GetMethodInfo, (app::Delegate * self))
}
