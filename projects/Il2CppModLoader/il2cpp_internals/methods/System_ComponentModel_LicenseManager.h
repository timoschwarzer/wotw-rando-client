#include <interception_macros.h>

namespace app::methods::System_ComponentModel::LicenseManager {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::LicenseManager * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FF0F20, LicenseContext *, get_CurrentContext, ());
IL2CPP_REGISTER_METHOD(0x01FF1240, void, set_CurrentContext, (app::LicenseContext * value));
IL2CPP_REGISTER_METHODINFO(0x04794C08, LicenseManager_set_CurrentContext__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FF1440, LicenseUsageMode__Enum, get_UsageMode, ());
IL2CPP_REGISTER_METHOD(0x01FF1550, void, CacheProvider, (app::Type * type, app::LicenseProvider * provider));
IL2CPP_REGISTER_METHOD(0x01FF1930, Object *, CreateWithContext_1, (app::Type * type, app::LicenseContext * creation_context));
IL2CPP_REGISTER_METHOD(0x01FF1A00, Object *, CreateWithContext_2, (app::Type * type, app::LicenseContext * creation_context, app::Object__Array * args));
IL2CPP_REGISTER_METHODINFO(0x04771E10, LicenseManager_CreateWithContext_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FF1CD0, bool, GetCachedNoLicenseProvider, (app::Type * type));
IL2CPP_REGISTER_METHOD(0x01FF1DE0, LicenseProvider *, GetCachedProvider, (app::Type * type));
IL2CPP_REGISTER_METHOD(0x01FF1F50, LicenseProvider *, GetCachedProviderInstance, (app::Type * provider_type));
IL2CPP_REGISTER_METHOD(0x01FF20C0, void *, GetLicenseInteropHelperType, ());
IL2CPP_REGISTER_METHOD(0x01FF2180, bool, IsLicensed, (app::Type * type));
IL2CPP_REGISTER_METHOD(0x01FF2260, bool, IsValid_1, (app::Type * type));
IL2CPP_REGISTER_METHOD(0x01FF2340, bool, IsValid_2, (app::Type * type, app::Object * instance, app::License * * license));
IL2CPP_REGISTER_METHOD(0x01FF2410, void, LockContext, (app::Object * context_user));
IL2CPP_REGISTER_METHODINFO(0x0472ACB8, LicenseManager_LockContext__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FF2600, void, UnlockContext, (app::Object * context_user));
IL2CPP_REGISTER_METHODINFO(0x04792140, LicenseManager_UnlockContext__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FF27F0, bool, ValidateInternal, (app::Type * type, app::Object * instance, bool allow_exceptions, app::License * * license));
IL2CPP_REGISTER_METHOD(0x01FF28E0, bool, ValidateInternalRecursive, (app::LicenseContext * context, app::Type * type, app::Object * instance, bool allow_exceptions, app::License * * license, app::String * * license_key));
IL2CPP_REGISTER_METHOD(0x01FF3070, void, Validate_1, (app::Type * type));
IL2CPP_REGISTER_METHODINFO(0x04713410, LicenseManager_Validate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FF3170, License *, Validate_2, (app::Type * type, app::Object * instance));
IL2CPP_REGISTER_METHODINFO(0x04751DB8, LicenseManager_Validate_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FF3270, void, __cctor, ());
}
