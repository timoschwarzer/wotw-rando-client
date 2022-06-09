#include <interception_macros.h>

namespace app::methods::System_ComponentModel::Container_Site {
IL2CPP_REGISTER_METHOD(0x00522850, void, __ctor, (app::Container_Site * this_ptr, app::IComponent * component, app::Container * container, app::String * name));
IL2CPP_REGISTER_METHOD(0x002FA280, IComponent *, get_Component, (app::Container_Site * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, IContainer *, get_Container, (app::Container_Site * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FDA080, Object *, GetService, (app::Container_Site * this_ptr, app::Type * service));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_DesignMode, (app::Container_Site * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Name, (app::Container_Site * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FDA170, void, set_Name, (app::Container_Site * this_ptr, app::String * value));
}
