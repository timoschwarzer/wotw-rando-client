#include <interception_macros.h>

namespace app::methods::InstanciationToggler {
IL2CPP_REGISTER_METHOD(0x0062A360, void, OnApplicationQuit, (app::InstanciationToggler * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DumpReports, (app::InstanciationToggler * this_ptr));
IL2CPP_REGISTER_METHOD(0x0062A3F0, String *, get_Path, (app::InstanciationToggler * this_ptr));
IL2CPP_REGISTER_METHOD(0x0062A470, String *, get_Name, (app::InstanciationToggler * this_ptr));
IL2CPP_REGISTER_METHOD(0x0062A4F0, String *, get_HelpText, (app::InstanciationToggler * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_Column, (app::InstanciationToggler * this_ptr));
IL2CPP_REGISTER_METHOD(0x0062A570, String__Array *, get_ToggleOptions, (app::InstanciationToggler * this_ptr));
IL2CPP_REGISTER_METHOD(0x0062A6B0, int32_t, get_CurrentToggleOptionId, (app::InstanciationToggler * this_ptr));
IL2CPP_REGISTER_METHOD(0x0062A6C0, void, set_CurrentToggleOptionId, (app::InstanciationToggler * this_ptr, int32_t value));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::InstanciationToggler * this_ptr));
}
