#include <interception_macros.h>

namespace app::methods::Moon::OutputFolder {
IL2CPP_REGISTER_METHOD(0x02565960, String *, get_AppData, ());
IL2CPP_REGISTER_METHOD(0x02565CA0, void, ForceBuildOutputPath, (app::String * path));
IL2CPP_REGISTER_METHOD(0x02565D50, String *, get_BuildOutputPath, ());
IL2CPP_REGISTER_METHOD(0x02565F20, bool, get_IsContentPackage, ());
IL2CPP_REGISTER_METHOD(0x02565FC0, void, set_IsContentPackage, (bool value));
IL2CPP_REGISTER_METHOD(0x02566070, void, ResetBuildOutputPath, ());
IL2CPP_REGISTER_METHOD(0x02566110, void, __cctor, ());
}
