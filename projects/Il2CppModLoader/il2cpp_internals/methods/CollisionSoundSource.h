#include <interception_macros.h>

namespace app::methods::CollisionSoundSource {
IL2CPP_REGISTER_METHOD(0x012D0AA0, ISoundHost *, get_SoundHost, (app::CollisionSoundSource * this_ptr));
IL2CPP_REGISTER_METHOD(0x012D0B90, void, Awake, (app::CollisionSoundSource * this_ptr));
IL2CPP_REGISTER_METHOD(0x012D0C30, void, OnEnable, (app::CollisionSoundSource * this_ptr));
IL2CPP_REGISTER_METHOD(0x012D0D80, void, OnDisable, (app::CollisionSoundSource * this_ptr));
IL2CPP_REGISTER_METHOD(0x012D0F30, void, StopSlidingSound, (app::CollisionSoundSource * this_ptr));
IL2CPP_REGISTER_METHOD(0x012D0F80, void, StartSlidingSound, (app::CollisionSoundSource * this_ptr));
IL2CPP_REGISTER_METHOD(0x012D10E0, void, OnCollisionEnter, (app::CollisionSoundSource * this_ptr, app::Collision * collision));
IL2CPP_REGISTER_METHOD(0x012D13B0, void, OnCollisionExit, (app::CollisionSoundSource * this_ptr, app::Collision * collision));
IL2CPP_REGISTER_METHOD(0x012D1610, void, OnUpdate, (app::CollisionSoundSource * this_ptr));
IL2CPP_REGISTER_METHOD(0x012D1900, float, ContinousSoundRtpcGetValue, (app::CollisionSoundSource * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolSpawned, (app::CollisionSoundSource * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (app::CollisionSoundSource * this_ptr));
IL2CPP_REGISTER_METHOD(0x012D1A70, void, __ctor, (app::CollisionSoundSource * this_ptr));
}
