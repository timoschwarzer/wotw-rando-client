#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::UnityEngine::ParticleSystemRenderer {
    IL2CPP_REGISTER_METHOD(0x031360C0, int32_t, Internal_GetMeshCount, (app::ParticleSystemRenderer * this_ptr))
}
