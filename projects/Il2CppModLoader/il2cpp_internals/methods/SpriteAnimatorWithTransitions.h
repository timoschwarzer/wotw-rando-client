#include <interception_macros.h>

namespace app::methods::SpriteAnimatorWithTransitions {
IL2CPP_REGISTER_METHOD(0x00938890, bool, get_IsTransitionPlaying, (SpriteAnimatorWithTransitions * __this));
IL2CPP_REGISTER_METHOD(0x009AC680, Renderer *, get_Renderer, (SpriteAnimatorWithTransitions * __this));
IL2CPP_REGISTER_METHOD(0x009AC750, bool, get_AnimationEnded, (SpriteAnimatorWithTransitions * __this));
IL2CPP_REGISTER_METHOD(0x009AC790, void, InitBinder, (SpriteAnimatorWithTransitions * __this));
IL2CPP_REGISTER_METHOD(0x009AC910, void, OnEnable, (SpriteAnimatorWithTransitions * __this));
IL2CPP_REGISTER_METHOD(0x009AC9C0, void, Awake, (SpriteAnimatorWithTransitions * __this));
IL2CPP_REGISTER_METHOD(0x009ACB70, void, OnEditorEnable, (SpriteAnimatorWithTransitions * __this));
IL2CPP_REGISTER_METHOD(0x003F8E90, void, OnDisable, (SpriteAnimatorWithTransitions * __this));
IL2CPP_REGISTER_METHOD(0x009ACDA0, void, OnDestroy, (SpriteAnimatorWithTransitions * __this));
IL2CPP_REGISTER_METHOD(0x009ACE90, void, OnEditorDisable, (SpriteAnimatorWithTransitions * __this));
IL2CPP_REGISTER_METHOD(0x009ACF70, void, Start, (SpriteAnimatorWithTransitions * __this));
IL2CPP_REGISTER_METHOD(0x009ACF80, void, UpdateCurrentBinding, (SpriteAnimatorWithTransitions * __this));
IL2CPP_REGISTER_METHOD(0x009AD1E0, void, FixedUpdate, (SpriteAnimatorWithTransitions * __this));
IL2CPP_REGISTER_METHOD(0x002FBC60, TextureAnimator *, get_TextureAnimator, (SpriteAnimatorWithTransitions * __this));
IL2CPP_REGISTER_METHOD(0x009AD2C0, void, ChangeMainTextureToAnimatorTexture, (SpriteAnimatorWithTransitions * __this));
IL2CPP_REGISTER_METHOD(0x009AD4F0, float, get_CurrentAnimationTime, (SpriteAnimatorWithTransitions * __this));
IL2CPP_REGISTER_METHOD(0x009AD510, void, set_CurrentAnimationTime, (SpriteAnimatorWithTransitions * __this, float value));
IL2CPP_REGISTER_METHOD(0x009AD540, TextureAnimation *, get_CurrentAnimation, (SpriteAnimatorWithTransitions * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PrintCurrentTextureAnimator, (SpriteAnimatorWithTransitions * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PrintCurrentTextureAnimatorWithTranstion, (SpriteAnimatorWithTransitions * __this));
IL2CPP_REGISTER_METHOD(0x0057A580, bool, get_IsInScene, (SpriteAnimatorWithTransitions * __this));
IL2CPP_REGISTER_METHOD(0x0057A590, void, set_IsInScene, (SpriteAnimatorWithTransitions * __this, bool value));
IL2CPP_REGISTER_METHOD(0x009AD560, void, add_OnAnimationEndEvent, (SpriteAnimatorWithTransitions * __this, Action_1_TextureAnimation_ * value));
IL2CPP_REGISTER_METHOD(0x009AD650, void, remove_OnAnimationEndEvent, (SpriteAnimatorWithTransitions * __this, Action_1_TextureAnimation_ * value));
IL2CPP_REGISTER_METHOD(0x009AD740, void, add_OnAnimationLoopEvent, (SpriteAnimatorWithTransitions * __this, Action_1_TextureAnimation_ * value));
IL2CPP_REGISTER_METHOD(0x009AD830, void, remove_OnAnimationLoopEvent, (SpriteAnimatorWithTransitions * __this, Action_1_TextureAnimation_ * value));
IL2CPP_REGISTER_METHOD(0x005DA240, bool, get_IsSuspended, (SpriteAnimatorWithTransitions * __this));
IL2CPP_REGISTER_METHOD(0x009AD920, void, set_IsSuspended, (SpriteAnimatorWithTransitions * __this, bool value));
IL2CPP_REGISTER_METHOD(0x009AD930, void, SetAnimation, (SpriteAnimatorWithTransitions * __this, TextureAnimationWithTransitions * textureAnimationWithTransitions, bool ignoreIfSameAnimation));
IL2CPP_REGISTER_METHOD(0x009ADEF0, Atlas *, get_SettingsAtlas, (SpriteAnimatorWithTransitions * __this));
IL2CPP_REGISTER_METHOD(0x009AE150, UberScreenMode__Enum, GetExternalUberScreenMode, (SpriteAnimatorWithTransitions * __this));
IL2CPP_REGISTER_METHOD(0x009AE220, float, GetUberTweakValue, (SpriteAnimatorWithTransitions * __this));
IL2CPP_REGISTER_METHOD(0x009AE2F0, bool, DoesProvideAtlas, (SpriteAnimatorWithTransitions * __this));
IL2CPP_REGISTER_METHOD(0x009AE3A0, void, SetDirty, (SpriteAnimatorWithTransitions * __this));
IL2CPP_REGISTER_METHOD(0x009AE3B0, void, OnPoolSpawned, (SpriteAnimatorWithTransitions * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (SpriteAnimatorWithTransitions * __this));
IL2CPP_REGISTER_METHOD(0x009AE3D0, void, __ctor, (SpriteAnimatorWithTransitions * __this));
}
