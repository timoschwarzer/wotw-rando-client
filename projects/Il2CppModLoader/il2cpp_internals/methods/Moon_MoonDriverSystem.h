#include <interception_macros.h>

namespace app::methods::Moon::MoonDriverSystem {
IL2CPP_REGISTER_METHOD(0x0313CAF0, MoonDriverSystem *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x002FB9B0, List_1_Moon_IDrivableGroup_ *, get_Groups, (app::MoonDriverSystem * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9F0, List_1_Moon_IDrivable_ *, get_Drivables, (app::MoonDriverSystem * this_ptr));
IL2CPP_REGISTER_METHOD(0x0313CD60, void, Awake, (app::MoonDriverSystem * this_ptr));
IL2CPP_REGISTER_METHOD(0x0313CE70, void, OnDestroy, (app::MoonDriverSystem * this_ptr));
IL2CPP_REGISTER_METHOD(0x0313CEF0, void, DrivableInsertSort, (app::MoonDriverSystem * this_ptr, app::IDrivable * drivable));
IL2CPP_REGISTER_METHOD(0x0313D070, void, FixedUpdate, (app::MoonDriverSystem * this_ptr));
IL2CPP_REGISTER_METHOD(0x0313D0D0, void, OnUpdate, (app::MoonDriverSystem * this_ptr, float delta_time));
IL2CPP_REGISTER_METHOD(0x0313D2C0, void, __ctor, (app::MoonDriverSystem * this_ptr));
IL2CPP_REGISTER_METHOD(0x018ECA60, IDrivableGroup *, GetGroup, (app::MoonDriverSystem * this_ptr));
IL2CPP_REGISTER_METHOD(0x01550580, void, RegisterDrivible, (app::MoonDriverSystem * this_ptr, app::Object * drivable, app::String * group_name_override));
IL2CPP_REGISTER_METHOD(0x01550BE0, void, UnregisterDrivible, (app::MoonDriverSystem * this_ptr, app::Object * drivable));
IL2CPP_REGISTER_METHOD(0x01550480, void, KillGroup, (app::MoonDriverSystem * this_ptr, app::IDrivableGroup * group));
IL2CPP_REGISTER_METHOD(0x015509A0, void, RegisterGroup, (app::MoonDriverSystem * this_ptr, app::IDrivableGroup * drivable_group));
IL2CPP_REGISTER_METHOD(0x01550780, void, RegisterGenericGroup, (app::MoonDriverSystem * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B31E90, bool, Contains, (app::MoonDriverSystem * this_ptr, app::Object * drivable));
}
