#include <interception_macros.h>

namespace app::methods::SaveSlotBackupsManager {
IL2CPP_REGISTER_METHOD(0x0091DD70, void, add_OnFinishedReadingBackups, (Action_1_Int32_ * value));
IL2CPP_REGISTER_METHOD(0x0091DEB0, void, remove_OnFinishedReadingBackups, (Action_1_Int32_ * value));
IL2CPP_REGISTER_METHOD(0x0091DFF0, SaveSlotBackupsManager *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x003FDCE0, int32_t, get_CurrentReadingSlot, (SaveSlotBackupsManager * __this));
IL2CPP_REGISTER_METHOD(0x004C6660, int32_t, get_CurrentReadingBackup, (SaveSlotBackupsManager * __this));
IL2CPP_REGISTER_METHOD(0x0091E090, SaveSlotBackup *, get_CurrentSlotBackup, (SaveSlotBackupsManager * __this));
IL2CPP_REGISTER_METHOD(0x0091E0B0, float, get_GameJustLoadedDelay, (SaveSlotBackupsManager * __this));
IL2CPP_REGISTER_METHOD(0x0091E0C0, int32_t, get_SaveSlotBackupsCount, (SaveSlotBackupsManager * __this));
IL2CPP_REGISTER_METHOD(0x008682A0, float, get_LastSaveTime, (SaveSlotBackupsManager * __this));
IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_CreateBackupPending, (SaveSlotBackupsManager * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, List_1_SaveSlotBackupsManager_BackupParseQueue_ *, get_BackupParsingQueue, (SaveSlotBackupsManager * __this));
IL2CPP_REGISTER_METHOD(0x0091E150, void, Awake, (SaveSlotBackupsManager * __this));
IL2CPP_REGISTER_METHOD(0x0091E320, void, OnDestroy, (SaveSlotBackupsManager * __this));
IL2CPP_REGISTER_METHOD(0x0091E630, void, OnGameReset, (SaveSlotBackupsManager * __this));
IL2CPP_REGISTER_METHODINFO(0x04765798, SaveSlotBackupsManager_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0091E630, void, OnSaveGameCacheCleared, (SaveSlotBackupsManager * __this));
IL2CPP_REGISTER_METHOD(0x0091E640, void, RequestReadBackups, (int32_t slotIndex));
IL2CPP_REGISTER_METHOD(0x0091EA40, SaveSlotBackup *, SaveSlotBackupAtIndex, (int32_t index));
IL2CPP_REGISTER_METHOD(0x0091EB20, void, DeleteAllBackups, (int32_t slotIndex));
IL2CPP_REGISTER_METHOD(0x0091EDD0, void, CreateCurrentBackup, ());
IL2CPP_REGISTER_METHOD(0x0091F480, void, PerformRecentBackup, (SaveSlotBackupsManager * __this, int32_t slotIndex));
IL2CPP_REGISTER_METHOD(0x0091F510, void, PerformTimeGatedBackup, (SaveSlotBackupsManager * __this, int32_t slotIndex));
IL2CPP_REGISTER_METHOD(0x0091F5B0, void, PerformBackup, (SaveSlotBackupsManager * __this, SaveSlotBackup * saveSlot, int32_t backupIndex, String * backupName));
IL2CPP_REGISTER_METHOD(0x0091FC70, void, ResetBackupDelay, ());
IL2CPP_REGISTER_METHOD(0x0091FD90, void, SetupGameLoadedDelay, (float delay));
IL2CPP_REGISTER_METHOD(0x0091FF00, bool, IsBusyWithGracePeriod, (SaveSlotBackupsManager * __this));
IL2CPP_REGISTER_METHOD(0x0091FF30, void, Update, (SaveSlotBackupsManager * __this));
IL2CPP_REGISTER_METHOD(0x00920CB0, void, ClearCache, (SaveSlotBackupsManager * __this));
IL2CPP_REGISTER_METHOD(0x00920EB0, SaveSlotBackup *, FindByIndex, (SaveSlotBackupsManager * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00920F60, String *, BackupName, (SaveSlotBackupsManager * __this, int32_t slot, int32_t index));
IL2CPP_REGISTER_METHOD(0x00921130, void, LookForBackup_PC_Switch, (SaveSlotBackupsManager * __this, int32_t slotIndex, int32_t backupIndex));
IL2CPP_REGISTER_METHOD(0x002FA000, void, LoadAllBackUps_XBoxOne, (SaveSlotBackupsManager * __this, int32_t slotIndex));
IL2CPP_REGISTER_METHOD(0x009219D0, bool, IsBusyLoading, (SaveSlotBackupsManager * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, LoadBackup_XboxOne, (SaveSlotBackupsManager * __this, int32_t slotIndex, int32_t backupIndex));
IL2CPP_REGISTER_METHOD(0x00921AA0, void, ReportFailure, (SaveSlotBackupsManager * __this, SaveSlotBackup * currentSlot, String * errorMessage));
IL2CPP_REGISTER_METHOD(0x00921B70, bool, ParseBackup, (SaveSlotBackupsManager * __this, int32_t slotIndex, int32_t backupIndex, Byte__Array * bytes));
IL2CPP_REGISTER_METHOD(0x00922470, void, __ctor, (SaveSlotBackupsManager * __this));
IL2CPP_REGISTER_METHOD(0x00922840, void, __cctor, ());
}
