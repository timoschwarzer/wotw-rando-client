#include <interception_macros.h>

namespace app::methods::J2i::Net::XInputWrapper::XboxController {
IL2CPP_REGISTER_METHOD(0x031B8910, void, set_UpdateFrequency, (int32_t value));
IL2CPP_REGISTER_METHOD(0x031B89D0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x031B8E20, XboxController *, RetrieveController, (int32_t index));
IL2CPP_REGISTER_METHOD(0x031B8EF0, void, __ctor, (XboxController * __this, int32_t playerIndex));
IL2CPP_REGISTER_METHOD(0x031B8F70, void, OnStateChanged, (XboxController * __this));
IL2CPP_REGISTER_METHOD(0x031B9170, bool, get_IsDPadUpPressed, (XboxController * __this));
IL2CPP_REGISTER_METHOD(0x031B9180, bool, get_IsDPadDownPressed, (XboxController * __this));
IL2CPP_REGISTER_METHOD(0x031B9190, bool, get_IsDPadLeftPressed, (XboxController * __this));
IL2CPP_REGISTER_METHOD(0x031B91A0, bool, get_IsDPadRightPressed, (XboxController * __this));
IL2CPP_REGISTER_METHOD(0x031B91B0, bool, get_IsAPressed, (XboxController * __this));
IL2CPP_REGISTER_METHOD(0x031B91C0, bool, get_IsBPressed, (XboxController * __this));
IL2CPP_REGISTER_METHOD(0x031B91D0, bool, get_IsXPressed, (XboxController * __this));
IL2CPP_REGISTER_METHOD(0x031B91E0, bool, get_IsYPressed, (XboxController * __this));
IL2CPP_REGISTER_METHOD(0x031B91F0, bool, get_IsBackPressed, (XboxController * __this));
IL2CPP_REGISTER_METHOD(0x031B9200, bool, get_IsStartPressed, (XboxController * __this));
IL2CPP_REGISTER_METHOD(0x031B9210, bool, get_IsLeftShoulderPressed, (XboxController * __this));
IL2CPP_REGISTER_METHOD(0x031B9220, bool, get_IsRightShoulderPressed, (XboxController * __this));
IL2CPP_REGISTER_METHOD(0x031B9230, bool, get_IsLeftStickPressed, (XboxController * __this));
IL2CPP_REGISTER_METHOD(0x031B9240, bool, get_IsRightStickPressed, (XboxController * __this));
IL2CPP_REGISTER_METHOD(0x031B9250, int32_t, get_LeftTrigger, (XboxController * __this));
IL2CPP_REGISTER_METHOD(0x031B9260, int32_t, get_RightTrigger, (XboxController * __this));
IL2CPP_REGISTER_METHOD(0x031B9270, int32_t, get_LeftThumbStickX, (XboxController * __this));
IL2CPP_REGISTER_METHOD(0x031B9280, int32_t, get_LeftThumbStickY, (XboxController * __this));
IL2CPP_REGISTER_METHOD(0x031B9290, int32_t, get_RightThumbStickX, (XboxController * __this));
IL2CPP_REGISTER_METHOD(0x031B92A0, int32_t, get_RightThumbStickY, (XboxController * __this));
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsConnected, (XboxController * __this));
IL2CPP_REGISTER_METHOD(0x004C6650, void, set_IsConnected, (XboxController * __this, bool value));
IL2CPP_REGISTER_METHOD(0x031B92B0, void, StartPolling, ());
IL2CPP_REGISTER_METHOD(0x031B9670, void, StopPolling, ());
IL2CPP_REGISTER_METHOD(0x031B9740, void, PollerLoop, ());
IL2CPP_REGISTER_METHODINFO(0x0473C650, XboxController_PollerLoop__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031B9B30, void, UpdateState, (XboxController * __this));
IL2CPP_REGISTER_METHOD(0x031B9D20, void, Vibrate, (XboxController * __this, double leftMotor, double rightMotor));
IL2CPP_REGISTER_METHOD(0x031B9E00, void, Vibrate, (XboxController * __this, double leftMotor, double rightMotor, TimeSpan length));
IL2CPP_REGISTER_METHOD(0x031BA030, void, Vibrate, (XboxController * __this, XInputVibration strength, TimeSpan length));
IL2CPP_REGISTER_METHOD(0x031BA140, String *, ToString, (XboxController * __this));
}
