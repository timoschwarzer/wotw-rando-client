#include <interception_macros.h>

namespace app::methods::AkPositioningInfo {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkPositioningInfo * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x0188FBD0, void *, getCPtr, (AkPositioningInfo * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkPositioningInfo * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x0188FC60, void, Finalize, (AkPositioningInfo * __this));
IL2CPP_REGISTER_METHOD(0x0188FCE0, void, Dispose, (AkPositioningInfo * __this));
IL2CPP_REGISTER_METHOD(0x0188FEF0, void, set_fCenterPct, (AkPositioningInfo * __this, float value));
IL2CPP_REGISTER_METHOD(0x01890020, float, get_fCenterPct, (AkPositioningInfo * __this));
IL2CPP_REGISTER_METHOD(0x01890140, void, set_pannerType, (AkPositioningInfo * __this, AkSpeakerPanningType__Enum value));
IL2CPP_REGISTER_METHOD(0x01890270, AkSpeakerPanningType__Enum, get_pannerType, (AkPositioningInfo * __this));
IL2CPP_REGISTER_METHOD(0x01890390, void, set_e3dPositioningType, (AkPositioningInfo * __this, Ak3DPositionType__Enum value));
IL2CPP_REGISTER_METHOD(0x018904C0, Ak3DPositionType__Enum, get_e3dPositioningType, (AkPositioningInfo * __this));
IL2CPP_REGISTER_METHOD(0x018905E0, void, set_bHoldEmitterPosAndOrient, (AkPositioningInfo * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01890710, bool, get_bHoldEmitterPosAndOrient, (AkPositioningInfo * __this));
IL2CPP_REGISTER_METHOD(0x01890840, void, set_e3DSpatializationMode, (AkPositioningInfo * __this, Ak3DSpatializationMode__Enum value));
IL2CPP_REGISTER_METHOD(0x01890970, Ak3DSpatializationMode__Enum, get_e3DSpatializationMode, (AkPositioningInfo * __this));
IL2CPP_REGISTER_METHOD(0x01890A90, void, set_bEnableAttenuation, (AkPositioningInfo * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01890BC0, bool, get_bEnableAttenuation, (AkPositioningInfo * __this));
IL2CPP_REGISTER_METHOD(0x01890CF0, void, set_bUseConeAttenuation, (AkPositioningInfo * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01890E20, bool, get_bUseConeAttenuation, (AkPositioningInfo * __this));
IL2CPP_REGISTER_METHOD(0x01890F50, void, set_fInnerAngle, (AkPositioningInfo * __this, float value));
IL2CPP_REGISTER_METHOD(0x01891080, float, get_fInnerAngle, (AkPositioningInfo * __this));
IL2CPP_REGISTER_METHOD(0x018911A0, void, set_fOuterAngle, (AkPositioningInfo * __this, float value));
IL2CPP_REGISTER_METHOD(0x018912D0, float, get_fOuterAngle, (AkPositioningInfo * __this));
IL2CPP_REGISTER_METHOD(0x018913F0, void, set_fConeMaxAttenuation, (AkPositioningInfo * __this, float value));
IL2CPP_REGISTER_METHOD(0x01891520, float, get_fConeMaxAttenuation, (AkPositioningInfo * __this));
IL2CPP_REGISTER_METHOD(0x01891640, void, set_LPFCone, (AkPositioningInfo * __this, float value));
IL2CPP_REGISTER_METHOD(0x01891770, float, get_LPFCone, (AkPositioningInfo * __this));
IL2CPP_REGISTER_METHOD(0x01891890, void, set_HPFCone, (AkPositioningInfo * __this, float value));
IL2CPP_REGISTER_METHOD(0x018919C0, float, get_HPFCone, (AkPositioningInfo * __this));
IL2CPP_REGISTER_METHOD(0x01891AE0, void, set_fMaxDistance, (AkPositioningInfo * __this, float value));
IL2CPP_REGISTER_METHOD(0x01891C10, float, get_fMaxDistance, (AkPositioningInfo * __this));
IL2CPP_REGISTER_METHOD(0x01891D30, void, set_fVolDryAtMaxDist, (AkPositioningInfo * __this, float value));
IL2CPP_REGISTER_METHOD(0x01891E60, float, get_fVolDryAtMaxDist, (AkPositioningInfo * __this));
IL2CPP_REGISTER_METHOD(0x01891F80, void, set_fVolAuxGameDefAtMaxDist, (AkPositioningInfo * __this, float value));
IL2CPP_REGISTER_METHOD(0x018920B0, float, get_fVolAuxGameDefAtMaxDist, (AkPositioningInfo * __this));
IL2CPP_REGISTER_METHOD(0x018921D0, void, set_fVolAuxUserDefAtMaxDist, (AkPositioningInfo * __this, float value));
IL2CPP_REGISTER_METHOD(0x01892300, float, get_fVolAuxUserDefAtMaxDist, (AkPositioningInfo * __this));
IL2CPP_REGISTER_METHOD(0x01892420, void, set_LPFValueAtMaxDist, (AkPositioningInfo * __this, float value));
IL2CPP_REGISTER_METHOD(0x01892550, float, get_LPFValueAtMaxDist, (AkPositioningInfo * __this));
IL2CPP_REGISTER_METHOD(0x01892670, void, set_HPFValueAtMaxDist, (AkPositioningInfo * __this, float value));
IL2CPP_REGISTER_METHOD(0x018927A0, float, get_HPFValueAtMaxDist, (AkPositioningInfo * __this));
IL2CPP_REGISTER_METHOD(0x018928C0, void, __ctor, (AkPositioningInfo * __this));
}
