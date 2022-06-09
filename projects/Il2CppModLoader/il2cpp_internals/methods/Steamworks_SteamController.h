#include <interception_macros.h>

namespace app::methods::Steamworks::SteamController {
IL2CPP_REGISTER_METHOD(0x027E75F0, bool, Init, ());
IL2CPP_REGISTER_METHOD(0x027E76A0, bool, Shutdown, ());
IL2CPP_REGISTER_METHOD(0x027E7750, void, RunFrame, ());
IL2CPP_REGISTER_METHOD(0x027E7800, int32_t, GetConnectedControllers, (app::ControllerHandle_t__Array * handles_out));
IL2CPP_REGISTER_METHODINFO(0x0470B828, SteamController_GetConnectedControllers__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027E7960, ControllerActionSetHandle_t, GetActionSetHandle, (app::String * psz_action_set_name));
IL2CPP_REGISTER_METHOD(0x027E7C40, void, ActivateActionSet, (app::ControllerHandle_t controller_handle, app::ControllerActionSetHandle_t action_set_handle));
IL2CPP_REGISTER_METHOD(0x027E7D10, ControllerActionSetHandle_t, GetCurrentActionSet, (app::ControllerHandle_t controller_handle));
IL2CPP_REGISTER_METHOD(0x027E7DD0, void, ActivateActionSetLayer, (app::ControllerHandle_t controller_handle, app::ControllerActionSetHandle_t action_set_layer_handle));
IL2CPP_REGISTER_METHOD(0x027E7EA0, void, DeactivateActionSetLayer, (app::ControllerHandle_t controller_handle, app::ControllerActionSetHandle_t action_set_layer_handle));
IL2CPP_REGISTER_METHOD(0x027E7F70, void, DeactivateAllActionSetLayers, (app::ControllerHandle_t controller_handle));
IL2CPP_REGISTER_METHOD(0x027E8030, int32_t, GetActiveActionSetLayers, (app::ControllerHandle_t controller_handle, app::ControllerActionSetHandle_t__Array * handles_out));
IL2CPP_REGISTER_METHODINFO(0x0473B940, SteamController_GetActiveActionSetLayers__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027E81A0, ControllerDigitalActionHandle_t, GetDigitalActionHandle, (app::String * psz_action_name));
IL2CPP_REGISTER_METHOD(0x027E8480, ControllerDigitalActionData_t, GetDigitalActionData, (app::ControllerHandle_t controller_handle, app::ControllerDigitalActionHandle_t digital_action_handle));
IL2CPP_REGISTER_METHOD(0x027E8550, int32_t, GetDigitalActionOrigins, (app::ControllerHandle_t controller_handle, app::ControllerActionSetHandle_t action_set_handle, app::ControllerDigitalActionHandle_t digital_action_handle, app::EControllerActionOrigin__Enum__Array * origins_out));
IL2CPP_REGISTER_METHODINFO(0x0475D968, SteamController_GetDigitalActionOrigins__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027E86F0, ControllerAnalogActionHandle_t, GetAnalogActionHandle, (app::String * psz_action_name));
IL2CPP_REGISTER_METHOD(0x027E89D0, ControllerAnalogActionData_t, GetAnalogActionData, (app::ControllerHandle_t controller_handle, app::ControllerAnalogActionHandle_t analog_action_handle));
IL2CPP_REGISTER_METHOD(0x027E8AC0, int32_t, GetAnalogActionOrigins, (app::ControllerHandle_t controller_handle, app::ControllerActionSetHandle_t action_set_handle, app::ControllerAnalogActionHandle_t analog_action_handle, app::EControllerActionOrigin__Enum__Array * origins_out));
IL2CPP_REGISTER_METHODINFO(0x04763980, SteamController_GetAnalogActionOrigins__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027E8C60, String *, GetGlyphForActionOrigin, (app::EControllerActionOrigin__Enum e_origin));
IL2CPP_REGISTER_METHOD(0x027E8D20, String *, GetStringForActionOrigin, (app::EControllerActionOrigin__Enum e_origin));
IL2CPP_REGISTER_METHOD(0x027E8DE0, void, StopAnalogActionMomentum, (app::ControllerHandle_t controller_handle, app::ControllerAnalogActionHandle_t e_action));
IL2CPP_REGISTER_METHOD(0x027E8EB0, ControllerMotionData_t, GetMotionData, (app::ControllerHandle_t controller_handle));
IL2CPP_REGISTER_METHOD(0x027E8F90, void, TriggerHapticPulse, (app::ControllerHandle_t controller_handle, app::ESteamControllerPad__Enum e_target_pad, uint16_t us_duration_micro_sec));
IL2CPP_REGISTER_METHOD(0x027E9070, void, TriggerRepeatedHapticPulse, (app::ControllerHandle_t controller_handle, app::ESteamControllerPad__Enum e_target_pad, uint16_t us_duration_micro_sec, uint16_t us_off_micro_sec, uint16_t un_repeat, uint32_t n_flags));
IL2CPP_REGISTER_METHOD(0x027E9180, void, TriggerVibration, (app::ControllerHandle_t controller_handle, uint16_t us_left_speed, uint16_t us_right_speed));
IL2CPP_REGISTER_METHOD(0x027E9260, void, SetLEDColor, (app::ControllerHandle_t controller_handle, uint8_t n_color_r, uint8_t n_color_g, uint8_t n_color_b, uint32_t n_flags));
IL2CPP_REGISTER_METHOD(0x027E9360, bool, ShowBindingPanel, (app::ControllerHandle_t controller_handle));
IL2CPP_REGISTER_METHOD(0x027E9420, ESteamInputType__Enum, GetInputTypeForHandle, (app::ControllerHandle_t controller_handle));
IL2CPP_REGISTER_METHOD(0x027E94E0, ControllerHandle_t, GetControllerForGamepadIndex, (int32_t n_index));
IL2CPP_REGISTER_METHOD(0x027E9590, int32_t, GetGamepadIndexForController, (app::ControllerHandle_t ul_controller_handle));
IL2CPP_REGISTER_METHOD(0x027E9650, String *, GetStringForXboxOrigin, (app::EXboxOrigin__Enum e_origin));
IL2CPP_REGISTER_METHOD(0x027E9710, String *, GetGlyphForXboxOrigin, (app::EXboxOrigin__Enum e_origin));
IL2CPP_REGISTER_METHOD(0x027E97D0, EControllerActionOrigin__Enum, GetActionOriginFromXboxOrigin, (app::ControllerHandle_t controller_handle, app::EXboxOrigin__Enum e_origin));
IL2CPP_REGISTER_METHOD(0x027E98A0, EControllerActionOrigin__Enum, TranslateActionOrigin, (app::ESteamInputType__Enum e_destination_input_type, app::EControllerActionOrigin__Enum e_source_origin));
IL2CPP_REGISTER_METHOD(0x027E9960, bool, GetControllerBindingRevision, (app::ControllerHandle_t controller_handle, app::int32_t * p_major, app::int32_t * p_minor));
}
