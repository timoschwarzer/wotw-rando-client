#include <interception_macros.h>

namespace app::methods::Moon_Telemetry_Performance::DataBundle {
IL2CPP_REGISTER_METHOD(0x00E338F0, void, __ctor, (app::DataBundle * this_ptr, app::String * path));
IL2CPP_REGISTER_METHOD(0x00E33A80, void, AddEntry, (app::DataBundle * this_ptr, app::DataBundleEntry * entry));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Path, (app::DataBundle * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Path, (app::DataBundle * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FA280, IReadOnlyDictionary_2_System_String_Moon_Telemetry_Performance_DataBundleEntry_ *, get_Entries, (app::DataBundle * this_ptr));
}
