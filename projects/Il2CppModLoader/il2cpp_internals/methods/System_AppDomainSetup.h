#include <interception_macros.h>

namespace app::methods::System::AppDomainSetup {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_1, (app::AppDomainSetup * this_ptr));
IL2CPP_REGISTER_METHOD(0x0228F7F0, void, __ctor_2, (app::AppDomainSetup * this_ptr, app::AppDomainSetup * setup));
IL2CPP_REGISTER_METHOD(0x0228F8D0, String *, GetAppBase, (app::String * app_base));
IL2CPP_REGISTER_METHODINFO(0x047819F8, AppDomainSetup_GetAppBase__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0228FDD0, String *, get_ApplicationBase, (app::AppDomainSetup * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_LicenseFile, (app::AppDomainSetup * this_ptr));
}
