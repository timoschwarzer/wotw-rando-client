#include <interception_macros.h>

namespace app::methods::BoolDebugMenuItem {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Path, (app::BoolDebugMenuItem * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Path, (app::BoolDebugMenuItem * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Text, (app::BoolDebugMenuItem * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Text, (app::BoolDebugMenuItem * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_HelpText, (app::BoolDebugMenuItem * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_HelpText, (app::BoolDebugMenuItem * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x00D39E90, void, __ctor_1, (app::BoolDebugMenuItem * this_ptr, app::String * path, app::String * text, app::Func_1_Boolean_ * getter, app::Action_1_Boolean_ * setter, app::String * help, bool should_show_only_selected));
IL2CPP_REGISTER_METHOD(0x00D39F80, void, __ctor_2, (app::BoolDebugMenuItem * this_ptr, app::String * path, app::String * text, app::Func_1_Boolean_ * getter, app::Action_1_Boolean_ * setter, app::Func_1_String_ * dynamic_text, app::String * help));
IL2CPP_REGISTER_METHOD(0x00D39FD0, bool, Draw, (app::BoolDebugMenuItem * this_ptr, app::Rect rect, bool selected));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelected, (app::BoolDebugMenuItem * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedUpdate, (app::BoolDebugMenuItem * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D3A290, void, OnSelectedFixedUpdate, (app::BoolDebugMenuItem * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D3A360, void, ToggleValue, (app::BoolDebugMenuItem * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D3A460, String *, GetText, (app::BoolDebugMenuItem * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9D0, Func_1_String_ *, get_DynamicText, (app::BoolDebugMenuItem * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_DynamicText, (app::BoolDebugMenuItem * this_ptr, app::Func_1_String_ * value));
}
