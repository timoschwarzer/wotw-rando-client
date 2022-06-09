#include <interception_macros.h>

namespace app::methods::InstantiationHistory {
IL2CPP_REGISTER_METHOD(0x00632E80, GUIStyle *, get_LabelStyle, (app::InstantiationHistory * this_ptr));
IL2CPP_REGISTER_METHOD(0x006331F0, InstantiationHistory *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x00633290, bool, get_Enabled, ());
IL2CPP_REGISTER_METHOD(0x00633360, void, set_Enabled, (bool value));
IL2CPP_REGISTER_METHOD(0x00633570, void, EnsureImgui, (app::InstantiationHistory * this_ptr, bool registered));
IL2CPP_REGISTER_METHOD(0x00633660, void, Awake, (app::InstantiationHistory * this_ptr));
IL2CPP_REGISTER_METHOD(0x00633700, void, _dumpToFile, (app::InstantiationHistory * this_ptr));
IL2CPP_REGISTER_METHOD(0x00633CA0, void, OnDestroy, (app::InstantiationHistory * this_ptr));
IL2CPP_REGISTER_METHOD(0x00633D50, void, SetParticleData, (app::InstantiationHistory * this_ptr, app::InstantiationHistory_PrefabData * data, app::GameObject * game_object));
IL2CPP_REGISTER_METHOD(0x00633F50, void, CheckInstantiation, (app::InstantiationHistory * this_ptr, app::GameObject * go, app::GameObject * instance, bool from_pool, bool new_in_pool, double ms_spent));
IL2CPP_REGISTER_METHOD(0x00634CC0, void, Update, (app::InstantiationHistory * this_ptr));
IL2CPP_REGISTER_METHOD(0x006352D0, void, OnGUI, (app::InstantiationHistory * this_ptr));
IL2CPP_REGISTER_METHOD(0x006355B0, void, __ctor, (app::InstantiationHistory * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
