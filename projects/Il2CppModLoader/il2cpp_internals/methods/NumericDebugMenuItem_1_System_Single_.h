#include <interception_macros.h>

namespace app::methods::NumericDebugMenuItem_1_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_HelpText, (app::NumericDebugMenuItem_1_System_Single_ * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHODINFO(0x047759C8, NumericDebugMenuItem_1_System_Single__set_HelpText__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Text, (app::NumericDebugMenuItem_1_System_Single_ * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHODINFO(0x0472C348, NumericDebugMenuItem_1_System_Single__set_Text__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00C3DD60, void, set_Value, (app::NumericDebugMenuItem_1_System_Single_ * this_ptr, float value));
    IL2CPP_REGISTER_METHODINFO(0x04759D68, NumericDebugMenuItem_1_System_Single__set_Value__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D12FB0, void, UpdateHold, (app::NumericDebugMenuItem_1_System_Single_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04775D50, NumericDebugMenuItem_1_System_Single__UpdateHold__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D12FA0, void, ResetHold, (app::NumericDebugMenuItem_1_System_Single_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04762300, NumericDebugMenuItem_1_System_Single__ResetHold__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, __ctor_1, (app::NumericDebugMenuItem_1_System_Single_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04752C08, NumericDebugMenuItem_1_System_Single___ctor__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D12330, void, __ctor_2, (app::NumericDebugMenuItem_1_System_Single_ * this_ptr, app::String * path, app::String * text));
    IL2CPP_REGISTER_METHODINFO(0x0474F1C0, NumericDebugMenuItem_1_System_Single___ctor_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D14240, void, __ctor_3, (app::NumericDebugMenuItem_1_System_Single_ * this_ptr, app::String * path, app::String * text, app::Func_1_Single_ * getter, app::Action_1_Single_ * setter, float min, float max, float _speed, app::String * help, app::Func_1_String_ * text_getter, bool should_show_only_selected));
    IL2CPP_REGISTER_METHODINFO(0x04717578, NumericDebugMenuItem_1_System_Single___ctor_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00C3DD50, float, get_Value, (app::NumericDebugMenuItem_1_System_Single_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047814A8, NumericDebugMenuItem_1_System_Single__get_Value__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Path, (app::NumericDebugMenuItem_1_System_Single_ * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHODINFO(0x04760288, NumericDebugMenuItem_1_System_Single__set_Path__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_Path, (app::NumericDebugMenuItem_1_System_Single_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String *, get_Text, (app::NumericDebugMenuItem_1_System_Single_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String *, get_HelpText, (app::NumericDebugMenuItem_1_System_Single_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D13FF0, bool, Draw, (app::NumericDebugMenuItem_1_System_Single_ * this_ptr, app::Rect rect, bool selected));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelected, (app::NumericDebugMenuItem_1_System_Single_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedUpdate, (app::NumericDebugMenuItem_1_System_Single_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D125E0, void, OnSelectedFixedUpdate, (app::NumericDebugMenuItem_1_System_Single_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Func_1_String_ *, get_DynamicText, (app::NumericDebugMenuItem_1_System_Single_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_DynamicText, (app::NumericDebugMenuItem_1_System_Single_ * this_ptr, app::Func_1_String_ * value));
    IL2CPP_REGISTER_METHOD(0x01D14440, void, UpdateWithSetter, (app::NumericDebugMenuItem_1_System_Single_ * this_ptr));
}
