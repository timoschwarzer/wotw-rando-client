#include <interception_macros.h>

namespace app::methods::FpsGraph {
    IL2CPP_REGISTER_METHOD(0x00653FB0, int32_t, get_FrameIndex, (app::FpsGraph * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01634470, void, set_FrameIndex, (app::FpsGraph * this_ptr, int32_t value));
    IL2CPP_REGISTER_METHOD(0x01634490, FrameInfo*, get_CurrentFrame, (app::FpsGraph * this_ptr));
    IL2CPP_REGISTER_METHOD(0x016344D0, void, Awake, (app::FpsGraph * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01634630, void, Start, (app::FpsGraph * this_ptr));
    IL2CPP_REGISTER_METHOD(0x016346E0, void, OnEnable, (app::FpsGraph * this_ptr));
    IL2CPP_REGISTER_METHOD(0x016348B0, void, OnDisable, (app::FpsGraph * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01634A80, void, Update, (app::FpsGraph * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01634D90, void, LateUpdate, (app::FpsGraph * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01634E20, void, OnPostRender, (app::FpsGraph * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01634EB0, void, OnGUI, (app::FpsGraph * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01635060, void, OnEndOfFrame, (app::FpsGraph * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047723C8, FpsGraph_OnEndOfFrame__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01635070, void, Reset, (app::FpsGraph * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01635440, void, CreateLineMaterial, (app::FpsGraph * this_ptr));
    IL2CPP_REGISTER_METHOD(0x016355E0, float, FrameTimeToGraphY, (app::FpsGraph * this_ptr, float t));
    IL2CPP_REGISTER_METHOD(0x01635610, float, ToXCoordinate, (app::FpsGraph * this_ptr, float x));
    IL2CPP_REGISTER_METHOD(0x016356E0, float, ToYCoordinate, (app::FpsGraph * this_ptr, float y));
    IL2CPP_REGISTER_METHOD(0x016357B0, void, Draw, (app::FpsGraph * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01635A90, void, DrawFrames, (app::FpsGraph * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01635C40, float, DrawFrameData, (app::FpsGraph * this_ptr, int32_t graph_x_index, float t, app::Color color));
    IL2CPP_REGISTER_METHOD(0x01635E40, void, DrawGarbageCollection, (app::FpsGraph * this_ptr, int32_t graph_x_index, app::FrameInfo* frame));
    IL2CPP_REGISTER_METHOD(0x01635F70, void, DrawGraphShadow, (app::FpsGraph * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01636080, void, DrawFPSMarkers, (app::FpsGraph * this_ptr));
    IL2CPP_REGISTER_METHOD(0x007458F0, void, DrawRect, (app::FpsGraph * this_ptr, float x1, float y1, float x2, float y2));
    IL2CPP_REGISTER_METHOD(0x01636790, void, DrawNumber, (app::FpsGraph * this_ptr, int32_t x, int32_t y, int32_t num, bool is_leading));
    IL2CPP_REGISTER_METHOD(0x01636A20, void, __ctor, (app::FpsGraph * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01636B80, void, __cctor, ());
} // namespace app::methods::FpsGraph
