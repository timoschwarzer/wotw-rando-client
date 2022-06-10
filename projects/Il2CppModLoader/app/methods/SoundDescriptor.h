#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::SoundDescriptor {
    IL2CPP_REGISTER_METHOD(0x00EE9200, void, ctor_1, (app::SoundDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EE96F0, void, ctor_2, (app::SoundDescriptor * this_ptr, app::AudioClip * audio_clip, float volume))
    IL2CPP_REGISTER_METHOD(0x00EE9C10, void, SetSoundSize, (app::SoundDescriptor * this_ptr, app::SoundSize * size))
    IL2CPP_REGISTER_METHOD(0x00EE9C30, void, SetLowPassFilter, (app::SoundDescriptor * this_ptr, app::LowPassFilterSettings * settings))
    IL2CPP_REGISTER_METHOD(0x00EE9C50, void, Reset, (app::SoundDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Object *, GetGenericResource, (app::SoundDescriptor * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetGenericResourceId, (app::SoundDescriptor * this_ptr, app::Object * context))
}
