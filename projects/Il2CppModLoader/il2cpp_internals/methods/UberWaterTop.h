#include <interception_macros.h>

namespace app::methods::UberWaterTop {
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_UseQuadSubdivision, (app::UberWaterTop * this_ptr));
    IL2CPP_REGISTER_METHOD(0x012AA390, void, OnEnable, (app::UberWaterTop * this_ptr));
    IL2CPP_REGISTER_METHOD(0x012AA6B0, void, OnDisable, (app::UberWaterTop * this_ptr));
    IL2CPP_REGISTER_METHOD(0x012AA780, void, OnBecameVisible, (app::UberWaterTop * this_ptr));
    IL2CPP_REGISTER_METHOD(0x012AA7B0, void, OnBecameInvisible, (app::UberWaterTop * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBC00, UberWaterReflectionPlane*, get_reflectionPlaneForDebug, (app::UberWaterTop * this_ptr));
    IL2CPP_REGISTER_METHOD(0x012AA7E0, void, OnPostCull, (app::UberWaterTop * this_ptr, app::UberWaterReflectionView* view));
    IL2CPP_REGISTER_METHOD(0x012AABD0, void, __ctor, (app::UberWaterTop * this_ptr));
    IL2CPP_REGISTER_METHOD(0x012AABF0, void, __cctor, ());
} // namespace app::methods::UberWaterTop
