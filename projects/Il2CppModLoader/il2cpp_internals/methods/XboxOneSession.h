#include <interception_macros.h>

namespace app::methods::XboxOneSession {
IL2CPP_REGISTER_METHOD(0x01C5AF60, Action *, get_OnSessionStarted, ());
IL2CPP_REGISTER_METHOD(0x01C5B000, void, set_OnSessionStarted, (app::Action * value));
IL2CPP_REGISTER_METHOD(0x01C5B0B0, Action *, get_OnSessionEnded, ());
IL2CPP_REGISTER_METHOD(0x01C5B150, void, set_OnSessionEnded, (app::Action * value));
IL2CPP_REGISTER_METHOD(0x01C5B200, Action *, get_OnWindowDeactivated, ());
IL2CPP_REGISTER_METHOD(0x01C5B2A0, void, set_OnWindowDeactivated, (app::Action * value));
IL2CPP_REGISTER_METHOD(0x01C5B350, Action *, get_OnWindowActivated, ());
IL2CPP_REGISTER_METHOD(0x01C5B3F0, void, set_OnWindowActivated, (app::Action * value));
IL2CPP_REGISTER_METHOD(0x01C5B4A0, Action *, get_OnSuspend, ());
IL2CPP_REGISTER_METHOD(0x01C5B540, void, set_OnSuspend, (app::Action * value));
IL2CPP_REGISTER_METHOD(0x01C5B5F0, Action *, get_OnResume, ());
IL2CPP_REGISTER_METHOD(0x01C5B690, void, set_OnResume, (app::Action * value));
IL2CPP_REGISTER_METHOD(0x01C5B740, bool, get_IsHighResources, ());
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_SuspendDataAvailable, ());
IL2CPP_REGISTER_METHOD(0x01C5B7E0, Guid, get_SessionID, ());
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_SessionActive, ());
IL2CPP_REGISTER_METHOD(0x00417870, bool, ClearSuspendData, ());
IL2CPP_REGISTER_METHOD(0x01C5B890, bool, RequireSession, (app::Action * success, app::Action * failure));
IL2CPP_REGISTER_METHOD(0x01C5B920, bool, RestartSession, (app::Action * success, app::Action * failure));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ClearGUID, ());
IL2CPP_REGISTER_METHOD(0x00417870, bool, EndSession, ());
IL2CPP_REGISTER_METHOD(0x00417870, bool, ResumeSession, ());
IL2CPP_REGISTER_METHOD(0x01C5B9B0, bool, PauseSession, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::XboxOneSession * this_ptr));
IL2CPP_REGISTER_METHOD(0x01C5BA40, void, __cctor, ());
}
