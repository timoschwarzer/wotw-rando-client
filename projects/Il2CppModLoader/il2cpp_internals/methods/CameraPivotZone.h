#include <interception_macros.h>

namespace app::methods::CameraPivotZone {
IL2CPP_REGISTER_METHOD(0x0169CEB0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x0169CF80, GameplayCamera *, get_Camera, (app::CameraPivotZone * this_ptr));
IL2CPP_REGISTER_METHOD(0x0169D020, float, get_maxWeight, (app::CameraPivotZone * this_ptr));
IL2CPP_REGISTER_METHOD(0x0169D280, bool, get_IsInside, (app::CameraPivotZone * this_ptr));
IL2CPP_REGISTER_METHOD(0x0169DA80, void, InstantUpdate, ());
IL2CPP_REGISTER_METHOD(0x0169DC00, void, ImmediatelyUpdate, (app::CameraPivotZone * this_ptr));
IL2CPP_REGISTER_METHOD(0x0169DEC0, void, OnDestroy, (app::CameraPivotZone * this_ptr));
IL2CPP_REGISTER_METHOD(0x0169DED0, void, OnEnable, (app::CameraPivotZone * this_ptr));
IL2CPP_REGISTER_METHOD(0x0169DF90, void, OnDisable, (app::CameraPivotZone * this_ptr));
IL2CPP_REGISTER_METHOD(0x0169E080, void, ActivateTargetLayer, (app::CameraPivotZone * this_ptr));
IL2CPP_REGISTER_METHOD(0x0169E2E0, void, DeactivateTargetLayer, (app::CameraPivotZone * this_ptr));
IL2CPP_REGISTER_METHOD(0x0169E4D0, void, Serialize, (app::CameraPivotZone * this_ptr, app::Archive * ar));
IL2CPP_REGISTER_METHOD(0x0169E580, void, RemoveTargetLayerIfExists, (app::CameraPivotZone * this_ptr));
IL2CPP_REGISTER_METHOD(0x0169E700, void, AddTargetLayerIfNotExist, (app::CameraPivotZone * this_ptr));
IL2CPP_REGISTER_METHOD(0x0169E770, void, FixedUpdate, (app::CameraPivotZone * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417920, SelectableCategory__Enum, get_Category, (app::CameraPivotZone * this_ptr));
IL2CPP_REGISTER_METHOD(0x00405F50, bool, get_IsSuspended, (app::CameraPivotZone * this_ptr));
IL2CPP_REGISTER_METHOD(0x00724140, void, set_IsSuspended, (app::CameraPivotZone * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x003FF7D0, SuspendableMask__Enum, get_Mask, (app::CameraPivotZone * this_ptr));
IL2CPP_REGISTER_METHOD(0x0169EA50, void, set_Mask, (app::CameraPivotZone * this_ptr, app::SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, get_VirtualTimelineTarget, (app::CameraPivotZone * this_ptr));
IL2CPP_REGISTER_METHOD(0x0043D9E0, VirtualTimelineRepresentationGroup__Enum, get_VirtualTimelineGroup, (app::CameraPivotZone * this_ptr));
IL2CPP_REGISTER_METHOD(0x0169EB00, String *, get_NameDisplayedOnClip, (app::CameraPivotZone * this_ptr));
IL2CPP_REGISTER_METHOD(0x0169EB80, void, Build, (app::CameraPivotZone * this_ptr, app::VirtualClipsBuilder * builder));
IL2CPP_REGISTER_METHOD(0x0169EDD0, bool, get_IsInfluencingCamera, (app::CameraPivotZone * this_ptr));
IL2CPP_REGISTER_METHOD(0x0169EF80, void, __ctor, (app::CameraPivotZone * this_ptr));
IL2CPP_REGISTER_METHOD(0x0169F200, void, __cctor, ());
}
