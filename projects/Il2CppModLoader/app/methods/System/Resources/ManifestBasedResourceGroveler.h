#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Resources::ManifestBasedResourceGroveler {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::ManifestBasedResourceGroveler * this_ptr, app::ResourceManager_ResourceManagerMediator * mediator))
    IL2CPP_REGISTER_METHOD(0x01A814A0, app::ResourceSet *, GrovelForResourceSet, (app::ManifestBasedResourceGroveler * this_ptr, app::CultureInfo * culture, app::Dictionary_2_System_String_System_Resources_ResourceSet_ * local_resource_sets, bool try_parents, bool create_if_not_exists, app::StackCrawlMark__Enum * stack_mark))
    IL2CPP_REGISTER_METHOD(0x01A818D0, app::CultureInfo *, UltimateFallbackFixup, (app::ManifestBasedResourceGroveler * this_ptr, app::CultureInfo * look_for_culture))
    IL2CPP_REGISTER_METHOD(0x01A81AB0, app::CultureInfo *, GetNeutralResourcesLanguage, (app::Assembly * a, app::UltimateResourceFallbackLocation__Enum * fallback_location))
    IL2CPP_REGISTER_METHODINFO(0x04778880, ManifestBasedResourceGroveler_GetNeutralResourcesLanguage__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A81DD0, app::ResourceSet *, CreateResourceSet, (app::ManifestBasedResourceGroveler * this_ptr, app::Stream * store, app::Assembly * assembly))
    IL2CPP_REGISTER_METHODINFO(0x0473DC88, ManifestBasedResourceGroveler_CreateResourceSet__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A828A0, app::Stream *, GetManifestResourceStream, (app::ManifestBasedResourceGroveler * this_ptr, app::RuntimeAssembly * satellite, app::String * file_name, app::StackCrawlMark__Enum * stack_mark))
    IL2CPP_REGISTER_METHOD(0x01A82A40, app::Stream *, CaseInsensitiveManifestResourceStreamLookup, (app::ManifestBasedResourceGroveler * this_ptr, app::RuntimeAssembly * satellite, app::String * name))
    IL2CPP_REGISTER_METHODINFO(0x04729D98, ManifestBasedResourceGroveler_CaseInsensitiveManifestResourceStreamLookup__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A82F60, app::RuntimeAssembly *, GetSatelliteAssembly, (app::ManifestBasedResourceGroveler * this_ptr, app::CultureInfo * look_for_culture, app::StackCrawlMark__Enum * stack_mark))
    IL2CPP_REGISTER_METHOD(0x01A83240, bool, CanUseDefaultResourceClasses, (app::ManifestBasedResourceGroveler * this_ptr, app::String * reader_type_name, app::String * res_set_type_name))
    IL2CPP_REGISTER_METHOD(0x01A834C0, app::String *, GetSatelliteAssemblyName, (app::ManifestBasedResourceGroveler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A83590, void, HandleSatelliteMissing, (app::ManifestBasedResourceGroveler * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047719D8, ManifestBasedResourceGroveler_HandleSatelliteMissing__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A83B10, void, HandleResourceStreamMissing, (app::ManifestBasedResourceGroveler * this_ptr, app::String * file_name))
    IL2CPP_REGISTER_METHODINFO(0x047192F0, ManifestBasedResourceGroveler_HandleResourceStreamMissing__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A83EE0, bool, GetNeutralResourcesLanguageAttribute, (app::Assembly * assembly, app::String * * culture_name, int16_t * fallback_location))
}
