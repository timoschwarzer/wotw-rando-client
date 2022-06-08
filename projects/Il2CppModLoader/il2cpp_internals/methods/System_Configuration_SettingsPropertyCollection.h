#include <interception_macros.h>

namespace app::methods::System::Configuration::SettingsPropertyCollection {
IL2CPP_REGISTER_METHOD(0x02963130, void, __ctor, (SettingsPropertyCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x04746DD8, SettingsPropertyCollection__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02963160, int32_t, get_Count, (SettingsPropertyCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x047106D8, SettingsPropertyCollection_get_Count__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02963190, bool, get_IsSynchronized, (SettingsPropertyCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x0477DC60, SettingsPropertyCollection_get_IsSynchronized__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029631C0, SettingsProperty *, get_Item, (SettingsPropertyCollection * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x047849D0, SettingsPropertyCollection_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029631F0, Object *, get_SyncRoot, (SettingsPropertyCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x0476F220, SettingsPropertyCollection_get_SyncRoot__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02963220, void, Add, (SettingsPropertyCollection * __this, SettingsProperty * property));
IL2CPP_REGISTER_METHODINFO(0x04726408, SettingsPropertyCollection_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02963250, void, Clear, (SettingsPropertyCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x047918F8, SettingsPropertyCollection_Clear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02963280, Object *, Clone, (SettingsPropertyCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x04764780, SettingsPropertyCollection_Clone__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029632B0, void, CopyTo, (SettingsPropertyCollection * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04741E10, SettingsPropertyCollection_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029632E0, IEnumerator *, GetEnumerator, (SettingsPropertyCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x04786D98, SettingsPropertyCollection_GetEnumerator__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02963310, void, OnAdd, (SettingsPropertyCollection * __this, SettingsProperty * property));
IL2CPP_REGISTER_METHODINFO(0x047992A8, SettingsPropertyCollection_OnAdd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02963340, void, OnAddComplete, (SettingsPropertyCollection * __this, SettingsProperty * property));
IL2CPP_REGISTER_METHODINFO(0x04729BA0, SettingsPropertyCollection_OnAddComplete__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02963370, void, OnClear, (SettingsPropertyCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x04783C90, SettingsPropertyCollection_OnClear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029633A0, void, OnClearComplete, (SettingsPropertyCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x047263D0, SettingsPropertyCollection_OnClearComplete__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029633D0, void, OnRemove, (SettingsPropertyCollection * __this, SettingsProperty * property));
IL2CPP_REGISTER_METHODINFO(0x0474C170, SettingsPropertyCollection_OnRemove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02963400, void, OnRemoveComplete, (SettingsPropertyCollection * __this, SettingsProperty * property));
IL2CPP_REGISTER_METHODINFO(0x0478D9A8, SettingsPropertyCollection_OnRemoveComplete__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02963430, void, Remove, (SettingsPropertyCollection * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x04767060, SettingsPropertyCollection_Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02963460, void, SetReadOnly, (SettingsPropertyCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x04762FE8, SettingsPropertyCollection_SetReadOnly__MethodInfo);
}
