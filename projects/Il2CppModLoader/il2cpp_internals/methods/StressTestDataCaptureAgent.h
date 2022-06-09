#include <interception_macros.h>

namespace app::methods::StressTestDataCaptureAgent {
IL2CPP_REGISTER_METHOD(0x0065DBB0, bool, get_IsCaptureAgentValid, (app::StressTestDataCaptureAgent * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, (app::StressTestDataCaptureAgent * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (app::StressTestDataCaptureAgent * this_ptr));
IL2CPP_REGISTER_METHOD(0x0065DC80, String__Array *, GetDataHeaderNames, (app::StressTestDataCaptureAgent * this_ptr));
IL2CPP_REGISTER_METHOD(0x0065DDC0, String__Array *, GetFrameData_1, (app::StressTestDataCaptureAgent * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04712EE0, StressTestDataCaptureAgent_GetFrameData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0065DE10, void, GetFrameData_2, (app::StressTestDataCaptureAgent * this_ptr, app::FrameCaptureTester_AgentOutput * output));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::StressTestDataCaptureAgent * this_ptr));
}
