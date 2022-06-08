#include <interception_macros.h>

namespace app::methods::Steamworks::SteamInput {
IL2CPP_REGISTER_METHOD(0x02781EA0, bool, Init, ());
IL2CPP_REGISTER_METHOD(0x02781F50, bool, Shutdown, ());
IL2CPP_REGISTER_METHOD(0x02782000, void, RunFrame, ());
IL2CPP_REGISTER_METHOD(0x027820B0, int32_t, GetConnectedControllers, (InputHandle_t__Array * handlesOut));
IL2CPP_REGISTER_METHODINFO(0x04717EE8, SteamInput_GetConnectedControllers__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02782210, InputActionSetHandle_t, GetActionSetHandle, (String * pszActionSetName));
IL2CPP_REGISTER_METHOD(0x027824F0, void, ActivateActionSet, (InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle));
IL2CPP_REGISTER_METHOD(0x027825C0, InputActionSetHandle_t, GetCurrentActionSet, (InputHandle_t inputHandle));
IL2CPP_REGISTER_METHOD(0x02782680, void, ActivateActionSetLayer, (InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle));
IL2CPP_REGISTER_METHOD(0x02782750, void, DeactivateActionSetLayer, (InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle));
IL2CPP_REGISTER_METHOD(0x02782820, void, DeactivateAllActionSetLayers, (InputHandle_t inputHandle));
IL2CPP_REGISTER_METHOD(0x027828E0, int32_t, GetActiveActionSetLayers, (InputHandle_t inputHandle, InputActionSetHandle_t__Array * handlesOut));
IL2CPP_REGISTER_METHODINFO(0x0476D430, SteamInput_GetActiveActionSetLayers__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02782A50, InputDigitalActionHandle_t, GetDigitalActionHandle, (String * pszActionName));
IL2CPP_REGISTER_METHOD(0x02782D30, InputDigitalActionData_t, GetDigitalActionData, (InputHandle_t inputHandle, InputDigitalActionHandle_t digitalActionHandle));
IL2CPP_REGISTER_METHOD(0x02782E00, int32_t, GetDigitalActionOrigins, (InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputDigitalActionHandle_t digitalActionHandle, EInputActionOrigin__Enum__Array * originsOut));
IL2CPP_REGISTER_METHODINFO(0x0478D8D0, SteamInput_GetDigitalActionOrigins__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02782FA0, InputAnalogActionHandle_t, GetAnalogActionHandle, (String * pszActionName));
IL2CPP_REGISTER_METHOD(0x02783280, InputAnalogActionData_t, GetAnalogActionData, (InputHandle_t inputHandle, InputAnalogActionHandle_t analogActionHandle));
IL2CPP_REGISTER_METHOD(0x02783370, int32_t, GetAnalogActionOrigins, (InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputAnalogActionHandle_t analogActionHandle, EInputActionOrigin__Enum__Array * originsOut));
IL2CPP_REGISTER_METHODINFO(0x047739C8, SteamInput_GetAnalogActionOrigins__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02783510, String *, GetGlyphForActionOrigin, (EInputActionOrigin__Enum eOrigin));
IL2CPP_REGISTER_METHOD(0x027835D0, String *, GetStringForActionOrigin, (EInputActionOrigin__Enum eOrigin));
IL2CPP_REGISTER_METHOD(0x02783690, void, StopAnalogActionMomentum, (InputHandle_t inputHandle, InputAnalogActionHandle_t eAction));
IL2CPP_REGISTER_METHOD(0x02783760, InputMotionData_t, GetMotionData, (InputHandle_t inputHandle));
IL2CPP_REGISTER_METHOD(0x02783840, void, TriggerVibration, (InputHandle_t inputHandle, uint16_t usLeftSpeed, uint16_t usRightSpeed));
IL2CPP_REGISTER_METHOD(0x02783920, void, SetLEDColor, (InputHandle_t inputHandle, uint8_t nColorR, uint8_t nColorG, uint8_t nColorB, uint32_t nFlags));
IL2CPP_REGISTER_METHOD(0x02783A20, void, TriggerHapticPulse, (InputHandle_t inputHandle, ESteamControllerPad__Enum eTargetPad, uint16_t usDurationMicroSec));
IL2CPP_REGISTER_METHOD(0x02783B00, void, TriggerRepeatedHapticPulse, (InputHandle_t inputHandle, ESteamControllerPad__Enum eTargetPad, uint16_t usDurationMicroSec, uint16_t usOffMicroSec, uint16_t unRepeat, uint32_t nFlags));
IL2CPP_REGISTER_METHOD(0x02783C10, bool, ShowBindingPanel, (InputHandle_t inputHandle));
IL2CPP_REGISTER_METHOD(0x02783CD0, ESteamInputType__Enum, GetInputTypeForHandle, (InputHandle_t inputHandle));
IL2CPP_REGISTER_METHOD(0x02783D90, InputHandle_t, GetControllerForGamepadIndex, (int32_t nIndex));
IL2CPP_REGISTER_METHOD(0x02783E40, int32_t, GetGamepadIndexForController, (InputHandle_t ulinputHandle));
IL2CPP_REGISTER_METHOD(0x02783F00, String *, GetStringForXboxOrigin, (EXboxOrigin__Enum eOrigin));
IL2CPP_REGISTER_METHOD(0x02783FC0, String *, GetGlyphForXboxOrigin, (EXboxOrigin__Enum eOrigin));
IL2CPP_REGISTER_METHOD(0x02784080, EInputActionOrigin__Enum, GetActionOriginFromXboxOrigin, (InputHandle_t inputHandle, EXboxOrigin__Enum eOrigin));
IL2CPP_REGISTER_METHOD(0x02784150, EInputActionOrigin__Enum, TranslateActionOrigin, (ESteamInputType__Enum eDestinationInputType, EInputActionOrigin__Enum eSourceOrigin));
IL2CPP_REGISTER_METHOD(0x02784210, bool, GetDeviceBindingRevision, (InputHandle_t inputHandle, int32_t * pMajor, int32_t * pMinor));
IL2CPP_REGISTER_METHOD(0x027842F0, uint32_t, GetRemotePlaySessionID, (InputHandle_t inputHandle));
}
