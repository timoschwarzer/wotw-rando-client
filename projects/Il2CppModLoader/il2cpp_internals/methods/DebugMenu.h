#include <interception_macros.h>

namespace app::methods::DebugMenu {
IL2CPP_REGISTER_METHOD(0x00DED6F0, HierarchyDebugMenu *, get_HierarchyDebugMenu, ());
IL2CPP_REGISTER_METHOD(0x002FB9B0, List_1_WorldEvents_ *, get_WorldEvents, (DebugMenu * __this));
IL2CPP_REGISTER_METHOD(0x00DED8E0, Vector2, get_HelpTextPosition, (DebugMenu * __this));
IL2CPP_REGISTER_METHOD(0x00DED900, void, set_HelpTextPosition, (DebugMenu * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x002FBD40, List_1_DebugMenu_ExternalItem_ *, get_ExternalItems, (DebugMenu * __this));
IL2CPP_REGISTER_METHOD(0x0049F2B0, List_1_IDebugMenuItem_ *, get_AllItems, (DebugMenu * __this));
IL2CPP_REGISTER_METHOD(0x00DED930, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x00720040, HierarchySuspensionTest *, get_SuspensionTest, (DebugMenu * __this));
IL2CPP_REGISTER_METHOD(0x00DEDB80, void, RegisterImGUIClient, ());
IL2CPP_REGISTER_METHOD(0x00DEDC70, void, UnregisterImGUIClient, ());
IL2CPP_REGISTER_METHOD(0x00DEDD60, void, LoadDebugMenuPrefabSlice, ());
IL2CPP_REGISTER_METHOD(0x00DEDEE0, void, MakeDebugMenuExistSlice, ());
IL2CPP_REGISTER_METHOD(0x00DEE120, void, MakeDebugMenuExist, ());
IL2CPP_REGISTER_METHOD(0x00DEE2D0, void, ToggleDebugMenu, ());
IL2CPP_REGISTER_METHOD(0x00DEE4C0, void, ShowHierarchyMenu, (DebugMenu * __this));
IL2CPP_REGISTER_METHOD(0x00DEE590, void, ShowDebugMenu, (DebugMenu * __this));
IL2CPP_REGISTER_METHOD(0x00DEE6A0, void, HideDebugMenu, (DebugMenu * __this));
IL2CPP_REGISTER_METHOD(0x00DEE970, void, Start, (DebugMenu * __this));
IL2CPP_REGISTER_METHOD(0x00DEE980, bool, get_GameplaySuspended, ());
IL2CPP_REGISTER_METHOD(0x00DEEA20, void, set_GameplaySuspended, (bool value));
IL2CPP_REGISTER_METHOD(0x00DEEB40, void, SuspendGameplay, ());
IL2CPP_REGISTER_METHOD(0x00DEEC80, void, ResumeGameplay, ());
IL2CPP_REGISTER_METHOD(0x00DEEDC0, void, Awake, (DebugMenu * __this));
IL2CPP_REGISTER_METHOD(0x00DEF130, void, SetScaling, (DebugMenu * __this, float multiplier));
IL2CPP_REGISTER_METHOD(0x00DEF600, void, Initialize, (DebugMenu * __this));
IL2CPP_REGISTER_METHOD(0x00DF0350, void, RegisterPageHandler, (IDebugMenuPageHandler * handler));
IL2CPP_REGISTER_METHOD(0x00DF0410, void, ClearPage, (DebugMenu * __this, String * path));
IL2CPP_REGISTER_METHOD(0x00DF0510, void, AddDebugMenuItem, (DebugMenu * __this, IDebugMenuItem * item, int32_t column, bool searching));
IL2CPP_REGISTER_METHOD(0x00DF0A00, void, GoBackMenu, (DebugMenu * __this));
IL2CPP_REGISTER_METHOD(0x00DF0B70, void, SetPage, (DebugMenu * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00DF0E50, void, Update, (DebugMenu * __this));
IL2CPP_REGISTER_METHOD(0x0071EAC0, void, ExitSearch, (DebugMenu * __this));
IL2CPP_REGISTER_METHOD(0x00DF12C0, void, ResetHold, (DebugMenu * __this));
IL2CPP_REGISTER_METHOD(0x00DF12E0, void, FixedUpdate, (DebugMenu * __this));
IL2CPP_REGISTER_METHOD(0x00DF18B0, void, RequestToggleDebugMenu, (DebugMenu * __this));
IL2CPP_REGISTER_METHOD(0x00DF18C0, void, OnGUI, (DebugMenu * __this));
IL2CPP_REGISTER_METHOD(0x00DF2460, void, AddWorldEvent, (DebugMenu * __this, WorldEvents * worldEvent));
IL2CPP_REGISTER_METHOD(0x00DF2520, void, Serialize, (DebugMenu * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x002FA000, void, BuildSpellsMenu, (DebugMenu * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, BuildAbilitiesMenu, (DebugMenu * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, GenerateGumoSequences, (DebugMenu * __this));
IL2CPP_REGISTER_METHOD(0x00DF2780, bool, GetSpell, (DebugMenu * __this, AbilityType__Enum spell));
IL2CPP_REGISTER_METHOD(0x00DF2840, void, SetSpell, (DebugMenu * __this, AbilityType__Enum spell, bool value));
IL2CPP_REGISTER_METHOD(0x00DF29C0, void, __ctor, (DebugMenu * __this));
IL2CPP_REGISTER_METHOD(0x00DF3820, void, __cctor, ());
}
