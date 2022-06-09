#include <interception_macros.h>

namespace app::methods::System_Globalization::RegionInfo {
    IL2CPP_REGISTER_METHOD(0x01DEB470, app::RegionInfo *, get_CurrentRegion, ());
    IL2CPP_REGISTER_METHOD(0x01DEB760, void, __ctor_1, (app::RegionInfo * this_ptr, int32_t culture));
    IL2CPP_REGISTER_METHODINFO(0x0470FC88, RegionInfo__ctor__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01DEB880, void, __ctor_2, (app::RegionInfo * this_ptr, app::String * name));
    IL2CPP_REGISTER_METHODINFO(0x04705580, RegionInfo__ctor_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01DEB9D0, void, __ctor_3, (app::RegionInfo * this_ptr, app::CultureInfo * ci));
    IL2CPP_REGISTER_METHODINFO(0x047288F8, RegionInfo__ctor_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01DEBB30, bool, GetByTerritory, (app::RegionInfo * this_ptr, app::CultureInfo * ci));
    IL2CPP_REGISTER_METHODINFO(0x04719950, RegionInfo_GetByTerritory__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01DEBC30, bool, construct_internal_region_from_name, (app::RegionInfo * this_ptr, app::String * name));
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String *, get_CurrencyEnglishName, (app::RegionInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String *, get_CurrencySymbol, (app::RegionInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String *, get_DisplayName, (app::RegionInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String *, get_EnglishName, (app::RegionInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_GeoId, (app::RegionInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01DEBC40, bool, get_IsMetric, (app::RegionInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::String *, get_ISOCurrencySymbol, (app::RegionInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String *, get_NativeName, (app::RegionInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::String *, get_CurrencyNativeName, (app::RegionInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String *, get_Name, (app::RegionInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String *, get_ThreeLetterISORegionName, (app::RegionInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String *, get_ThreeLetterWindowsRegionName, (app::RegionInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String *, get_TwoLetterISORegionName, (app::RegionInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01DEBD20, bool, Equals, (app::RegionInfo * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x01DEBE60, int32_t, GetHashCode, (app::RegionInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01DEBEA0, app::String *, ToString, (app::RegionInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01DEBEC0, void, ClearCachedData, ());
}
