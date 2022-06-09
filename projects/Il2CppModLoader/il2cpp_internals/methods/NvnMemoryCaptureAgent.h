#include <interception_macros.h>

namespace app::methods::NvnMemoryCaptureAgent {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (app::NvnMemoryCaptureAgent * this_ptr));
IL2CPP_REGISTER_METHOD(0x0060D0F0, String__Array *, GetDataHeaderNames, (app::NvnMemoryCaptureAgent * this_ptr));
IL2CPP_REGISTER_METHOD(0x0060D170, void, OnInitialize, (app::NvnMemoryCaptureAgent * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (app::NvnMemoryCaptureAgent * this_ptr));
IL2CPP_REGISTER_METHOD(0x0060D2D0, String__Array *, GetFrameData_1, (app::NvnMemoryCaptureAgent * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04774390, NvnMemoryCaptureAgent_GetFrameData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0060D320, void, GetFrameData_2, (app::NvnMemoryCaptureAgent * this_ptr, app::FrameCaptureTester_AgentOutput * output));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::NvnMemoryCaptureAgent * this_ptr));
}
