#include <interception_macros.h>

namespace app::methods::System_Resources::ResourceManager {
    IL2CPP_REGISTER_METHOD(0x01A84750, void, Init, (app::ResourceManager * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01A84920, void, __ctor_1, (app::ResourceManager * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01A84C00, void, __ctor_2, (app::ResourceManager * this_ptr, app::String * base_name, app::Assembly * assembly));
    IL2CPP_REGISTER_METHODINFO(0x047324F0, ResourceManager__ctor_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01A84F20, void, __ctor_3, (app::ResourceManager * this_ptr, app::Type * resource_source));
    IL2CPP_REGISTER_METHODINFO(0x047026A0, ResourceManager__ctor_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01A85280, void, OnDeserializing, (app::ResourceManager * this_ptr, app::StreamingContext ctx));
    IL2CPP_REGISTER_METHOD(0x01A852A0, void, OnDeserialized, (app::ResourceManager * this_ptr, app::StreamingContext ctx));
    IL2CPP_REGISTER_METHOD(0x01A85740, void, OnSerializing, (app::ResourceManager * this_ptr, app::StreamingContext ctx));
    IL2CPP_REGISTER_METHOD(0x01A858A0, void, CommonAssemblyInit, (app::ResourceManager * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_BaseName, (app::ResourceManager * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IgnoreCase, (app::ResourceManager * this_ptr));
    IL2CPP_REGISTER_METHOD(0x003FF2B0, app::UltimateResourceFallbackLocation__Enum, get_FallbackLocation, (app::ResourceManager * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01A85D60, app::String *, GetResourceFileName, (app::ResourceManager * this_ptr, app::CultureInfo * culture));
    IL2CPP_REGISTER_METHOD(0x01A85F80, app::ResourceSet *, GetFirstResourceSet, (app::ResourceManager * this_ptr, app::CultureInfo * culture));
    IL2CPP_REGISTER_METHOD(0x01A864C0, app::ResourceSet *, GetResourceSet, (app::ResourceManager * this_ptr, app::CultureInfo * culture, bool create_if_not_exists, bool try_parents));
    IL2CPP_REGISTER_METHODINFO(0x04706520, ResourceManager_GetResourceSet__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01A86890, app::ResourceSet *, InternalGetResourceSet_1, (app::ResourceManager * this_ptr, app::CultureInfo * culture, bool create_if_not_exists, bool try_parents));
    IL2CPP_REGISTER_METHOD(0x01A868C0, app::ResourceSet *, InternalGetResourceSet_2, (app::ResourceManager * this_ptr, app::CultureInfo * requested_culture, bool create_if_not_exists, bool try_parents, app::StackCrawlMark__Enum * stack_mark));
    IL2CPP_REGISTER_METHOD(0x01A86FF0, void, AddResourceSet, (app::Dictionary_2_System_String_System_Resources_ResourceSet_ * local_resource_sets, app::String * culture_name, app::ResourceSet * * rs));
    IL2CPP_REGISTER_METHOD(0x01A87210, app::Version *, GetSatelliteContractVersion, (app::Assembly * a));
    IL2CPP_REGISTER_METHODINFO(0x04763538, ResourceManager_GetSatelliteContractVersion__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01A87850, app::CultureInfo *, GetNeutralResourcesLanguage, (app::Assembly * a));
    IL2CPP_REGISTER_METHOD(0x01A87870, bool, CompareNames, (app::String * asm_type_name1, app::String * type_name2, app::AssemblyName * asm_name2));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetAppXConfiguration, (app::ResourceManager * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01A87DA0, app::String *, GetString, (app::ResourceManager * this_ptr, app::String * name, app::CultureInfo * culture));
    IL2CPP_REGISTER_METHODINFO(0x0472DCC8, ResourceManager_GetString__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01A88280, void, __cctor, ());
}
