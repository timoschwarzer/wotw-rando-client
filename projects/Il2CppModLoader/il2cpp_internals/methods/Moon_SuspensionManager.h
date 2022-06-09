#include <interception_macros.h>

namespace app::methods::Moon::SuspensionManager {
IL2CPP_REGISTER_METHOD(0x031AC220, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x031AC430, Dictionary_2_Moon_ISuspendable_System_Int32_ *, get_Suspensables, ());
IL2CPP_REGISTER_METHOD(0x031AC4D0, void, Register, (app::ISuspendable * suspendable));
IL2CPP_REGISTER_METHOD(0x031AC690, void, Unregister, (app::ISuspendable * suspendable));
IL2CPP_REGISTER_METHOD(0x031AC780, void, UnregisterWithoutResuming, (app::ISuspendable * suspendable));
IL2CPP_REGISTER_METHOD(0x031AC870, void, AddSuspension, (app::SuspendableMask__Enum mask, app::int32_t * ticked_i_d));
IL2CPP_REGISTER_METHOD(0x031ACA90, void, RemoveSuspension, (app::int32_t * ticket_i_d));
IL2CPP_REGISTER_METHOD(0x031ACCB0, void, OnSuspensionTicketsModified, ());
IL2CPP_REGISTER_METHOD(0x031ACD90, void, UpdateAllSuspendableStates, ());
IL2CPP_REGISTER_METHOD(0x031ACF10, void, RefreshSuspendableState, (app::ISuspendable * suspendable));
IL2CPP_REGISTER_METHOD(0x031AD0B0, void, SupendableMaskChanged, (app::ISuspendable * suspendable));
IL2CPP_REGISTER_METHOD(0x031AD150, void, UpdateCurrentSuspensionMask, ());
IL2CPP_REGISTER_METHOD(0x031AD2F0, bool, FindOrAddToSuspended, (app::ISuspendable * suspendable, app::int32_t * count));
IL2CPP_REGISTER_METHOD(0x031AD4C0, void, SuspendAll, ());
IL2CPP_REGISTER_METHOD(0x031AD640, void, GetSuspendables_1, (app::HashSet_1_Moon_ISuspendable_ * suspendables, app::GameObject * go));
IL2CPP_REGISTER_METHOD(0x031AD7A0, HashSet_1_Moon_ISuspendable_ *, GetSuspendables_2, (app::HashSet_1_Moon_ISuspendable_ * suspendables, app::GameObject__Array * gos));
IL2CPP_REGISTER_METHOD(0x031AD990, HashSet_1_Moon_ISuspendable_ *, GetSuspendables_3, (app::HashSet_1_Moon_ISuspendable_ * suspendables, bool include_inactive, app::GameObject * go));
IL2CPP_REGISTER_METHOD(0x031ADC20, void, Suspend_1, (app::ISuspendable * suspendable));
IL2CPP_REGISTER_METHOD(0x031ADF40, void, Resume_1, (app::ISuspendable * suspendable));
IL2CPP_REGISTER_METHOD(0x031AE270, void, Suspend_2, (app::List_1_Moon_ISuspendable_ * suspendables));
IL2CPP_REGISTER_METHOD(0x031AE360, void, Suspend_3, (app::HashSet_1_Moon_ISuspendable_ * suspendables));
IL2CPP_REGISTER_METHOD(0x031AE470, void, Suspend_4, (app::IEnumerable_1_Moon_ISuspendable_ * suspendables));
IL2CPP_REGISTER_METHOD(0x031AE5F0, void, CleanupSuspendables, ());
IL2CPP_REGISTER_METHOD(0x031AE930, void, ResumeAll, ());
IL2CPP_REGISTER_METHOD(0x031AEA70, void, ResumeExcluding, (app::HashSet_1_Moon_ISuspendable_ * exclude));
IL2CPP_REGISTER_METHOD(0x031AEBE0, void, SuspendExcluding, (app::HashSet_1_Moon_ISuspendable_ * exclude));
IL2CPP_REGISTER_METHOD(0x031AED50, void, Resume_2, (app::HashSet_1_Moon_ISuspendable_ * suspendables));
IL2CPP_REGISTER_METHOD(0x031AEE60, void, Resume_3, (app::List_1_Moon_ISuspendable_ * suspendables));
IL2CPP_REGISTER_METHOD(0x031AEF50, void, Resume_4, (app::IEnumerable_1_Moon_ISuspendable_ * suspendables));
IL2CPP_REGISTER_METHOD(0x031AF0D0, void, __cctor, ());
}
