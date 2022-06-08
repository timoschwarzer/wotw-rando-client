#include <interception_macros.h>

namespace app::methods::RuntimeGameWorldArea {
IL2CPP_REGISTER_METHOD(0x01374BF0, PlayerUberStateAreaMapInformation *, get_AreaMapUberState, (RuntimeGameWorldArea * __this));
IL2CPP_REGISTER_METHOD(0x01374CA0, Vector2, FindCenterPositionOnDiscoveredAreas, (RuntimeGameWorldArea * __this));
IL2CPP_REGISTER_METHOD(0x01375020, Vector2, FindCenterPositionOnUndiscoveredAreas, (RuntimeGameWorldArea * __this));
IL2CPP_REGISTER_METHOD(0x013753A0, void, __ctor, (RuntimeGameWorldArea * __this, GameWorldArea * area));
IL2CPP_REGISTER_METHOD(0x01375910, void, Initialize, (RuntimeGameWorldArea * __this));
IL2CPP_REGISTER_METHOD(0x01376960, void, Finalize, (RuntimeGameWorldArea * __this));
IL2CPP_REGISTER_METHOD(0x01376A60, void, UpdateLabelState, (RuntimeGameWorldArea * __this));
IL2CPP_REGISTER_METHOD(0x01376B50, bool, get_AreaDiscovered, (RuntimeGameWorldArea * __this));
IL2CPP_REGISTER_METHOD(0x01376DE0, float, get_CompletionAmount, (RuntimeGameWorldArea * __this));
IL2CPP_REGISTER_METHOD(0x01376E10, float, get_CollectiblesCompletionAmount, (RuntimeGameWorldArea * __this));
IL2CPP_REGISTER_METHOD(0x00997600, void, DirtyCompletionAmount, (RuntimeGameWorldArea * __this));
IL2CPP_REGISTER_METHOD(0x01376E40, int32_t, get_CompletionPercentage, (RuntimeGameWorldArea * __this));
IL2CPP_REGISTER_METHOD(0x01376E70, bool, IsIconCollected, (SerializedBooleanUberState * iconState));
IL2CPP_REGISTER_METHOD(0x01376E90, bool, IsAreaFaceVisited, (RuntimeGameWorldArea * __this, GameWorldArea * area, CageStructureTool_Face * face));
IL2CPP_REGISTER_METHOD(0x01376EF0, bool, IconIsCompletionType, (WorldMapIconType__Enum type));
IL2CPP_REGISTER_METHOD(0x01376F80, void, UpdateCompletionAmount, (RuntimeGameWorldArea * __this));
IL2CPP_REGISTER_METHOD(0x013777A0, float, GetDiscoveredOrVisitedAmmount, (RuntimeGameWorldArea * __this));
IL2CPP_REGISTER_METHOD(0x013779F0, String *, GetUberStatePath, (SerializedBooleanUberState * state));
IL2CPP_REGISTER_METHOD(0x01377A10, void, LogCollectableStates, (RuntimeGameWorldArea * __this));
IL2CPP_REGISTER_METHOD(0x013794A0, void, VisitMapAreaAtPosition, (RuntimeGameWorldArea * __this, Vector3 worldPosition));
IL2CPP_REGISTER_METHOD(0x01379710, bool, get_HasSenseAbility, (RuntimeGameWorldArea * __this));
IL2CPP_REGISTER_METHOD(0x01379850, bool, IsHidden, (RuntimeGameWorldArea * __this, Vector3 worldPosition));
IL2CPP_REGISTER_METHOD(0x01379B10, bool, IsDiscovered, (RuntimeGameWorldArea * __this, Vector3 worldPosition));
IL2CPP_REGISTER_METHOD(0x01379CD0, bool, IsHidden, (RuntimeGameWorldArea * __this, CageStructureTool_Face * face));
IL2CPP_REGISTER_METHOD(0x01379D30, bool, IsDiscovered, (RuntimeGameWorldArea * __this, CageStructureTool_Face * face));
IL2CPP_REGISTER_METHOD(0x01379D90, bool, IsVisited, (RuntimeGameWorldArea * __this, CageStructureTool_Face * face));
IL2CPP_REGISTER_METHOD(0x01379DF0, bool, IsVisited, (RuntimeGameWorldArea * __this, Vector3 worldPosition));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, (RuntimeGameWorldArea * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x01379FB0, void, DiscoverAllAreas, (RuntimeGameWorldArea * __this));
IL2CPP_REGISTER_METHOD(0x0137A200, void, VisitFully, (RuntimeGameWorldArea * __this));
IL2CPP_REGISTER_METHOD(0x0137A410, bool, FaceIsDiscoveredOrVisited, (RuntimeGameWorldArea * __this, int32_t id));
IL2CPP_REGISTER_METHOD(0x0137A470, WorldMapAreaState__Enum, GetFaceState, (RuntimeGameWorldArea * __this, int32_t id));
IL2CPP_REGISTER_METHOD(0x00997600, void, Apply, (RuntimeGameWorldArea * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (RuntimeGameWorldArea * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, IUberState__Array *, get_AffectingUberStates, (RuntimeGameWorldArea * __this));
IL2CPP_REGISTER_METHOD(0x0137A4C0, List_1_UnityEngine_GameObject_ *, get_AllTargets, (RuntimeGameWorldArea * __this));
}
