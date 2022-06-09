#include <interception_macros.h>

namespace app::methods::NumericDebugMenuItem_1_System_Double_ {
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, __ctor_1, (app::NumericDebugMenuItem_1_System_Double_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047114C8, NumericDebugMenuItem_1_System_Double___ctor__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D12330, void, __ctor_2, (app::NumericDebugMenuItem_1_System_Double_ * this_ptr, app::String * path, app::String * text));
    IL2CPP_REGISTER_METHODINFO(0x04771150, NumericDebugMenuItem_1_System_Double___ctor_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D12690, void, __ctor_3, (app::NumericDebugMenuItem_1_System_Double_ * this_ptr, app::String * path, app::String * text, app::Func_1_Double_ * getter, app::Action_1_Double_ * setter, double min, double max, double _speed, app::String * help, app::Func_1_String_ * text_getter, bool should_show_only_selected));
    IL2CPP_REGISTER_METHODINFO(0x04707998, NumericDebugMenuItem_1_System_Double___ctor_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FBB20, double, get_Value, (app::NumericDebugMenuItem_1_System_Double_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04784640, NumericDebugMenuItem_1_System_Double__get_Value__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FBB30, void, set_Value, (app::NumericDebugMenuItem_1_System_Double_ * this_ptr, double value));
    IL2CPP_REGISTER_METHODINFO(0x0478B8C0, NumericDebugMenuItem_1_System_Double__set_Value__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_Path, (app::NumericDebugMenuItem_1_System_Double_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Path, (app::NumericDebugMenuItem_1_System_Double_ * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String *, get_Text, (app::NumericDebugMenuItem_1_System_Double_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Text, (app::NumericDebugMenuItem_1_System_Double_ * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String *, get_HelpText, (app::NumericDebugMenuItem_1_System_Double_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_HelpText, (app::NumericDebugMenuItem_1_System_Double_ * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHOD(0x01D12390, bool, Draw, (app::NumericDebugMenuItem_1_System_Double_ * this_ptr, app::Rect rect, bool selected));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelected, (app::NumericDebugMenuItem_1_System_Double_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedUpdate, (app::NumericDebugMenuItem_1_System_Double_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D125E0, void, OnSelectedFixedUpdate, (app::NumericDebugMenuItem_1_System_Double_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D12600, void, ResetHold, (app::NumericDebugMenuItem_1_System_Double_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D12610, void, UpdateHold, (app::NumericDebugMenuItem_1_System_Double_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Func_1_String_ *, get_DynamicText, (app::NumericDebugMenuItem_1_System_Double_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_DynamicText, (app::NumericDebugMenuItem_1_System_Double_ * this_ptr, app::Func_1_String_ * value));
    IL2CPP_REGISTER_METHOD(0x01D12890, void, UpdateWithSetter, (app::NumericDebugMenuItem_1_System_Double_ * this_ptr));
}
