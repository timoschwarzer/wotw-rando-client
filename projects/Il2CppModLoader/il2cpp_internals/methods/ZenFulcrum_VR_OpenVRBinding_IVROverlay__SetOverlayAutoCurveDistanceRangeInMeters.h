#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_SetOverlayAutoCurveDistanceRangeInMeters * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x02D7ECC0, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_SetOverlayAutoCurveDistanceRangeInMeters * this_ptr, uint64_t ul_overlay_handle, float f_min_distance_in_meters, float f_max_distance_in_meters));
    IL2CPP_REGISTER_METHOD(0x02D7F0A0, app::IAsyncResult *, BeginInvoke, (app::IVROverlay_SetOverlayAutoCurveDistanceRangeInMeters * this_ptr, uint64_t ul_overlay_handle, float f_min_distance_in_meters, float f_max_distance_in_meters, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_SetOverlayAutoCurveDistanceRangeInMeters * this_ptr, app::IAsyncResult * result));
}
