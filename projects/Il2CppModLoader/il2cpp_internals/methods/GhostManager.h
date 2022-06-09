#include <interception_macros.h>

namespace app::methods::GhostManager {
    IL2CPP_REGISTER_METHOD(0x00E22090, bool, get_IsPreRecordTrackingEnabled, ());
    IL2CPP_REGISTER_METHOD(0x00E22120, void, Start, (app::GhostManager * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E22220, void, ResetStatics, (app::GhostManager * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E222B0, bool, ShouldSaveRaceDataOffline, ());
    IL2CPP_REGISTER_METHOD(0x00E223E0, app::String *, GetRaceDirectory, (app::String * race_i_d));
    IL2CPP_REGISTER_METHOD(0x00E22500, app::String *, GetOfflineRaceDirectory, (app::String * race_i_d));
    IL2CPP_REGISTER_METHOD(0x00E22620, void, CreateDirectory, (app::String * directory));
    IL2CPP_REGISTER_METHOD(0x00E22650, bool, FileExists, (app::String * file_path));
    IL2CPP_REGISTER_METHOD(0x00E22660, void, WriteFileFromByteArray, (app::String * path, app::Byte__Array * data));
    IL2CPP_REGISTER_METHOD(0x00E22670, app::Byte__Array *, ReadBytesFromFilePath, (app::String * file_path));
    IL2CPP_REGISTER_METHOD(0x00E22680, app::String *, GetGhostFile, (app::String * directory));
    IL2CPP_REGISTER_METHOD(0x00E22720, app::GhostPlayer *, createGhost_1, (app::GhostManager * this_ptr, app::String * ghost_input_file));
    IL2CPP_REGISTER_METHOD(0x00E229D0, app::GhostPlayer *, createGhost_2, (app::GhostManager * this_ptr, app::String * display_name, app::String * replay));
    IL2CPP_REGISTER_METHOD(0x00E22BA0, void, OnRaceFinish, (app::String * race_id, app::GhostRecorder * recorder, app::RaceTimer * timer, app::ScoreResult__Enum * result, app::ITrialData * trial_data));
    IL2CPP_REGISTER_METHOD(0x00E22D60, void, StoreRaceDataOffline, (app::String * race_name, app::GhostRecorder * recorder, app::RaceTimer * timer, app::ITrialData * trial_data));
    IL2CPP_REGISTER_METHOD(0x00E23920, void, DeleteGhostFile, (app::String * file_path));
    IL2CPP_REGISTER_METHOD(0x00E23950, bool, get_IsRecording, ());
    IL2CPP_REGISTER_METHOD(0x00E23A10, app::GhostRecorder *, GetRecorder, ());
    IL2CPP_REGISTER_METHOD(0x00E23AF0, app::GhostRecorder *, GetOrCreateRecorder, ());
    IL2CPP_REGISTER_METHOD(0x00E23C70, void, StartPreRecording, ());
    IL2CPP_REGISTER_METHOD(0x00E23CF0, void, StopPreRecording, ());
    IL2CPP_REGISTER_METHOD(0x00E23D70, void, OnDestroy, (app::GhostManager * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E23F50, void, NotifyInstantiation, (app::GameObject * instance, app::GameObject * prefab, app::String * prefab_guid));
    IL2CPP_REGISTER_METHOD(0x00E24330, void, NotifySceneRecordableObjectExistence, (app::IRecordable * recordable));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RegisterAnimatorForRecording, (app::MoonAnimator * animator));
    IL2CPP_REGISTER_METHOD(0x00E243F0, void, NotifyUberStateValueChange, (app::IGenericUberState * uber_state, float value));
    IL2CPP_REGISTER_METHODINFO(0x0477C790, GhostManager_NotifyUberStateValueChange__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::GhostManager * this_ptr));
}
