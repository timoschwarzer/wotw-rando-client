#include <interception_macros.h>

namespace app::methods::VerletStructure {
IL2CPP_REGISTER_METHOD(0x013C8F00, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x013C8FC0, void, Awake, (VerletStructure * __this));
IL2CPP_REGISTER_METHOD(0x013C9300, void, OnDestroy, (VerletStructure * __this));
IL2CPP_REGISTER_METHOD(0x013C9410, Bounds, get_WorldBounds, (VerletStructure * __this));
IL2CPP_REGISTER_METHOD(0x013C9600, Bounds, get_Bounds, (VerletStructure * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowCacheBounds, (VerletStructure * __this));
IL2CPP_REGISTER_METHOD(0x013C9620, void, IFrustumOptimizable_OnFrustumEnter, (VerletStructure * __this));
IL2CPP_REGISTER_METHOD(0x013C9630, void, IFrustumOptimizable_OnFrustumExit, (VerletStructure * __this));
IL2CPP_REGISTER_METHOD(0x00AD88C0, bool, get_InsideFrustum, (VerletStructure * __this));
IL2CPP_REGISTER_METHOD(0x01212740, bool, ISuspendable_get_IsSuspended, (VerletStructure * __this));
IL2CPP_REGISTER_METHOD(0x01212750, void, ISuspendable_set_IsSuspended, (VerletStructure * __this, bool value));
IL2CPP_REGISTER_METHOD(0x009D2A80, SuspendableMask__Enum, ISuspendable_get_Mask, (VerletStructure * __this));
IL2CPP_REGISTER_METHOD(0x013C9640, void, ISuspendable_set_Mask, (VerletStructure * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x013C9650, bool, get_Initialised, (VerletStructure * __this));
IL2CPP_REGISTER_METHOD(0x013C9660, void, Init, (VerletStructure * __this));
IL2CPP_REGISTER_METHOD(0x013C9AC0, bool, get_ShouldUpdate, (VerletStructure * __this));
IL2CPP_REGISTER_METHOD(0x0043D9E0, UpdateType__Enum, IUpdateHandler_get_UpdateType, (VerletStructure * __this));
IL2CPP_REGISTER_METHOD(0x013C9BB0, void, OnEnable, (VerletStructure * __this));
IL2CPP_REGISTER_METHOD(0x013C9D90, void, OnDisable, (VerletStructure * __this));
IL2CPP_REGISTER_METHOD(0x013C9F70, void, OnExtraLateUpdate, (VerletStructure * __this));
IL2CPP_REGISTER_METHODINFO(0x04773DB8, VerletStructure_OnExtraLateUpdate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x013CA090, void, OnUpdate, (VerletStructure * __this, float dt));
IL2CPP_REGISTER_METHOD(0x013CA1C0, void, OnUpdatePhysics, (VerletStructure * __this, float dt));
IL2CPP_REGISTER_METHOD(0x013CA210, void, OnUpdate, (VerletStructure * __this, float dt, bool updateHandlers));
IL2CPP_REGISTER_METHOD(0x013CA4F0, void, PreJob, (VerletStructure * __this));
IL2CPP_REGISTER_METHOD(0x013CA6F0, void, PostJob, (VerletStructure * __this, float dt, bool updateHandlers));
IL2CPP_REGISTER_METHOD(0x013CA810, void, SimulateFromJob, (VerletStructure * __this, float dt, Vector3 centerPosition));
IL2CPP_REGISTER_METHOD(0x013CA870, void, SimulateFromJob0, (VerletStructure * __this, float dt, Vector3 centerPosition));
IL2CPP_REGISTER_METHOD(0x013CC610, void, SimulateFromJob1, (VerletStructure * __this, float dt, Vector3 centerPosition));
IL2CPP_REGISTER_METHOD(0x013CE130, VerletStructure_VerletStructureState *, GetSystemState, (VerletStructure * __this, int32_t stateGUID));
IL2CPP_REGISTER_METHOD(0x013CE1D0, bool, HasSystemState, (VerletStructure * __this, int32_t stateGUID));
IL2CPP_REGISTER_METHOD(0x013CE1F0, void, ApplyState, (VerletStructure * __this, int32_t stateGUID, bool applyImmediate));
IL2CPP_REGISTER_METHOD(0x013CE480, void, ApplyState, (VerletStructure * __this, VerletStructure_VerletStructureState * state));
IL2CPP_REGISTER_METHOD(0x013CE7C0, void, UpdateFromMainThread, (VerletStructure * __this, float dt));
IL2CPP_REGISTER_METHOD(0x013CE800, bool, get_NeedsPostJob, (VerletStructure * __this));
IL2CPP_REGISTER_METHOD(0x013CE820, void, __ctor, (VerletStructure * __this));
IL2CPP_REGISTER_METHOD(0x013CED10, void, __cctor, ());
}
