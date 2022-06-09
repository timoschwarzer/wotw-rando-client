#include <interception_macros.h>

namespace app::methods::SystemIntegration_SignIn_User::XboxUser {
IL2CPP_REGISTER_METHOD(0x002FA280, Texture2D *, get_Image, (app::XboxUser * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Image, (app::XboxUser * this_ptr, app::Texture2D * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_GamerTag, (app::XboxUser * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_GamerTag, (app::XboxUser * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Uid, (app::XboxUser * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Uid, (app::XboxUser * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_Id, (app::XboxUser * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB980, void, set_Id, (app::XboxUser * this_ptr, int32_t value));
IL2CPP_REGISTER_METHOD(0x0052A090, String *, get_SignInPrefix, (app::XboxUser * this_ptr));
IL2CPP_REGISTER_METHOD(0x0052A110, bool, get_IsProfileComplete, (app::XboxUser * this_ptr));
IL2CPP_REGISTER_METHOD(0x0052A120, void, set_IsProfileComplete, (app::XboxUser * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::XboxUser * this_ptr));
}
