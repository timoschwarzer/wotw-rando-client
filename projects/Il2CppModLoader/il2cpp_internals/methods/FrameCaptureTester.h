#include <interception_macros.h>

namespace app::methods::FrameCaptureTester {
IL2CPP_REGISTER_METHOD(0x016375D0, bool, get_EnableObjectProfiling, ());
IL2CPP_REGISTER_METHOD(0x01637670, void, set_EnableObjectProfiling, (bool value));
IL2CPP_REGISTER_METHOD(0x01637720, bool, get_FlushedThisFrame, ());
IL2CPP_REGISTER_METHOD(0x016377C0, void, set_FlushedThisFrame, (bool value));
IL2CPP_REGISTER_METHOD(0x01637870, FrameCaptureTester *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x003FF8B0, FrameCaptureTester_FrameCaptureTestType__Enum, get_TestType, (app::FrameCaptureTester * this_ptr));
IL2CPP_REGISTER_METHOD(0x00B0E550, void, set_TestType, (app::FrameCaptureTester * this_ptr, app::FrameCaptureTester_FrameCaptureTestType__Enum value));
IL2CPP_REGISTER_METHOD(0x01637910, void, Pause, (app::FrameCaptureTester * this_ptr));
IL2CPP_REGISTER_METHOD(0x01637920, void, Resume, (app::FrameCaptureTester * this_ptr));
IL2CPP_REGISTER_METHOD(0x01637930, void, __ctor, (app::FrameCaptureTester * this_ptr));
IL2CPP_REGISTER_METHOD(0x01638070, void, OnEnable, (app::FrameCaptureTester * this_ptr));
IL2CPP_REGISTER_METHOD(0x016383C0, void, OnDisable, (app::FrameCaptureTester * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::FrameCaptureTester * this_ptr));
IL2CPP_REGISTER_METHOD(0x016384E0, void, OnDestroy, (app::FrameCaptureTester * this_ptr));
IL2CPP_REGISTER_METHOD(0x016387C0, void, Awake, (app::FrameCaptureTester * this_ptr));
IL2CPP_REGISTER_METHOD(0x01638A90, void, SetupTest, (app::FrameCaptureTester * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047178D8, FrameCaptureTester_SetupTest__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0163BA80, void, OnTestFinished, (app::FrameCaptureTester * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0475B7D8, FrameCaptureTester_OnTestFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0163BC90, void, PreparePrependData, (app::FrameCaptureTester * this_ptr));
IL2CPP_REGISTER_METHOD(0x0163C3F0, void, FixedUpdate, (app::FrameCaptureTester * this_ptr));
IL2CPP_REGISTER_METHOD(0x0163C5E0, void, Update, (app::FrameCaptureTester * this_ptr));
IL2CPP_REGISTER_METHOD(0x0163C7D0, void, OnEndOfFrame, (app::FrameCaptureTester * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04700988, FrameCaptureTester_OnEndOfFrame__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0163CFF0, String *, ArrayToCSV, (app::String__Array * entries, app::String * separator, bool separator_on_the_last_entry));
IL2CPP_REGISTER_METHOD(0x0163D3E0, void, ArrayToCSVBuilder, (app::String__Array * entries, app::String * separator, bool separator_on_the_last_entry, app::StringBuilder * output));
IL2CPP_REGISTER_METHOD(0x0163D5B0, bool, get_RecordManualTest, ());
IL2CPP_REGISTER_METHOD(0x0163D680, void, set_RecordManualTest, (bool value));
IL2CPP_REGISTER_METHOD(0x0163D740, bool, StartManualRecording, ());
IL2CPP_REGISTER_METHOD(0x0163DB50, bool, StopManualRecording, ());
IL2CPP_REGISTER_METHOD(0x0163DD40, void, __cctor, ());
}
