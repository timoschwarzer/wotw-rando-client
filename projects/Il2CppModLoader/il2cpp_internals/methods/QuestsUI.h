#include <interception_macros.h>

namespace app::methods::QuestsUI {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanInterruptTab, (QuestsUI * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, MenuTabBackground__Enum, get_BackgroundMode, (QuestsUI * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedsExperienceUI, (QuestsUI * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedOreUI, (QuestsUI * __this));
IL2CPP_REGISTER_METHOD(0x00E93AC0, void, Awake, (QuestsUI * __this));
IL2CPP_REGISTER_METHOD(0x00E93DA0, void, OnDestroy, (QuestsUI * __this));
IL2CPP_REGISTER_METHOD(0x00E94070, void, FixedUpdate, (QuestsUI * __this));
IL2CPP_REGISTER_METHOD(0x00E94080, void, UpdateItemInfo, (QuestsUI * __this, CleverMenuItem * cleverMenuItem));
IL2CPP_REGISTER_METHOD(0x00E941B0, void, HighlightItem, (QuestsUI * __this, CleverMenuItem * cleverMenuItem));
IL2CPP_REGISTER_METHOD(0x00E944D0, void, SetMarkerOnQuest, (QuestsUI * __this, Quest * quest));
IL2CPP_REGISTER_METHOD(0x00E94570, void, UpdateItems, (QuestsUI * __this));
IL2CPP_REGISTER_METHOD(0x00E94780, void, OptionChangeCallback, (QuestsUI * __this));
IL2CPP_REGISTER_METHODINFO(0x04782CA0, QuestsUI_OptionChangeCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E949E0, void, UpdateVisuals, (QuestsUI * __this));
IL2CPP_REGISTER_METHOD(0x00E94AF0, void, ScrollToQuest, (QuestsUI * __this));
IL2CPP_REGISTER_METHOD(0x00E94C50, void, OptionPressedCallback, (QuestsUI * __this));
IL2CPP_REGISTER_METHODINFO(0x04771AF0, QuestsUI_OptionPressedCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E94D80, Quest *, GetCurrentSelectedQuest, (QuestsUI * __this));
IL2CPP_REGISTER_METHOD(0x00E94E30, CleverMenuItem *, GetQuestItem, (QuestsUI * __this, Quest * quest));
IL2CPP_REGISTER_METHOD(0x00E94FF0, CleverMenuItem *, GetActiveQuestItem, (QuestsUI * __this));
IL2CPP_REGISTER_METHOD(0x00E950F0, void, BuildUI, (QuestsUI * __this));
IL2CPP_REGISTER_METHOD(0x00E95380, Vector3, AddItems, (QuestsUI * __this, Vector3 basePosition, Quest_QuestType__Enum type));
IL2CPP_REGISTER_METHOD(0x00E95670, bool, ShouldAddItem, (QuestsUI * __this, RuntimeQuest * quest));
IL2CPP_REGISTER_METHOD(0x00E956A0, QuestItemUI *, CreateQuestItem, (QuestsUI * __this, Quest_QuestType__Enum questType, RuntimeQuest * runtimeQuest, Vector2 rowPosition));
IL2CPP_REGISTER_METHOD(0x00E95B80, void, UpdateDescriptionUI, (QuestsUI * __this, RuntimeQuest * quest));
IL2CPP_REGISTER_METHOD(0x00E95D40, void, UpdateDescriptionUI, (QuestsUI * __this, Quest * quest));
IL2CPP_REGISTER_METHOD(0x00E95FD0, void, DestroyUI, (QuestsUI * __this));
IL2CPP_REGISTER_METHOD(0x00601090, bool, IsVisible, (QuestsUI * __this));
IL2CPP_REGISTER_METHOD(0x00E96200, void, SelectQuest, (QuestsUI * __this, Quest * quest));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Reset, (QuestsUI * __this));
IL2CPP_REGISTER_METHOD(0x00E96340, void, Show, (QuestsUI * __this));
IL2CPP_REGISTER_METHOD(0x00E96650, Quest *, get_ActiveQuest, (QuestsUI * __this));
IL2CPP_REGISTER_METHOD(0x00E96870, void, Hide, (QuestsUI * __this, bool change));
IL2CPP_REGISTER_METHOD(0x00E96A40, void, ShowImmediate, (QuestsUI * __this));
IL2CPP_REGISTER_METHOD(0x00E96AA0, void, HideImmediate, (QuestsUI * __this));
IL2CPP_REGISTER_METHOD(0x00E96AF0, void, __ctor, (QuestsUI * __this));
}
