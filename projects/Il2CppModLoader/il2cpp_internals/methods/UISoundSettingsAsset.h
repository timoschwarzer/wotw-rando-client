#include <interception_macros.h>

namespace app::methods::UISoundSettingsAsset {
    IL2CPP_REGISTER_METHOD(0x013DCDF0, void, PlaySoundEvent, (app::UISoundSettingsAsset * this_ptr, app::Event_1 * sound_event));
    IL2CPP_REGISTER_METHOD(0x013DCEC0, app::WwiseEventSystem_SoundHandle, AllocateLoopingSoundHandle, (app::UISoundSettingsAsset * this_ptr, app::Event_1 * sound_event));
    IL2CPP_REGISTER_METHOD(0x004140E0, void, __ctor, (app::UISoundSettingsAsset * this_ptr));
}
