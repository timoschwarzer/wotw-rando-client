#include <interception_macros.h>

namespace app::methods::SystemIntegration_Races::PlayFabFileDownloader {
    IL2CPP_REGISTER_METHOD(0x00521550, void, __ctor, (app::PlayFabFileDownloader * this_ptr, app::String * owner_id, app::String * file_name, app::RaceDataLeaderBoardType__Enum data, int32_t max_size));
    IL2CPP_REGISTER_METHOD(0x00521570, app::Task_1_System_Byte_ *, Perform, (app::PlayFabFileDownloader * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00521B10, void, OnGetFileMeta, (app::PlayFabFileDownloader * this_ptr, app::GetFilesResponse * result));
    IL2CPP_REGISTER_METHODINFO(0x047938F8, PlayFabFileDownloader_OnGetFileMeta__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00521E40, void, GetActualFile, (app::PlayFabFileDownloader * this_ptr, app::GetFileMetadata * file_data));
    IL2CPP_REGISTER_METHOD(0x005221F0, void, FileDownloadComplete, (app::PlayFabFileDownloader * this_ptr, app::Byte__Array * data));
    IL2CPP_REGISTER_METHODINFO(0x0475CB38, PlayFabFileDownloader_FileDownloadComplete__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00522290, void, OnError, (app::PlayFabFileDownloader * this_ptr, app::PlayFabError * obj));
    IL2CPP_REGISTER_METHODINFO(0x0474BB90, PlayFabFileDownloader_OnError__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x005223D0, bool, _OnGetFileMeta_b__7_1, (app::PlayFabFileDownloader * this_ptr, app::GetFileMetadata * o));
    IL2CPP_REGISTER_METHODINFO(0x04721A20, PlayFabFileDownloader__OnGetFileMeta_b__7_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00522420, void, _GetActualFile_b__8_0, (app::PlayFabFileDownloader * this_ptr, app::String * err));
    IL2CPP_REGISTER_METHODINFO(0x047692A8, PlayFabFileDownloader__GetActualFile_b__8_0__MethodInfo);
}
