#include <interception_macros.h>

namespace app::methods::System_ComponentModel::ComponentResourceManager {
IL2CPP_REGISTER_METHOD(0x024A9E60, void, __ctor_1, (app::ComponentResourceManager * this_ptr));
IL2CPP_REGISTER_METHOD(0x024A9F00, void, __ctor_2, (app::ComponentResourceManager * this_ptr, app::Type * t));
IL2CPP_REGISTER_METHOD(0x024A9FB0, CultureInfo *, get_NeutralResourcesCulture, (app::ComponentResourceManager * this_ptr));
IL2CPP_REGISTER_METHOD(0x024AA090, void, ApplyResources_1, (app::ComponentResourceManager * this_ptr, app::Object * value, app::String * object_name));
IL2CPP_REGISTER_METHOD(0x024AA0C0, void, ApplyResources_2, (app::ComponentResourceManager * this_ptr, app::Object * value, app::String * object_name, app::CultureInfo * culture));
IL2CPP_REGISTER_METHODINFO(0x04729E68, ComponentResourceManager_ApplyResources_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x024AA9C0, SortedList_2_System_String_System_Object_ *, FillResources, (app::ComponentResourceManager * this_ptr, app::CultureInfo * culture, app::ResourceSet * * resource_set));
}
