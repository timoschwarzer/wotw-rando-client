#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::SurfaceBasedSoundProvider {
    IL2CPP_REGISTER_METHOD(0x00672890, app::SoundDescriptor *, GetSound, (app::SurfaceBasedSoundProvider * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x006729B0, void, ctor, (app::SurfaceBasedSoundProvider * this_ptr))
}
