#include <interception_macros.h>

namespace app::methods::PlayFab::OneDSEventsAPI {
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsOneDSAuthenticated, (app::OneDSEventsAPI * this_ptr));
IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsOneDSAuthenticated, (app::OneDSEventsAPI * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x01853F00, void, SetCredentials, (app::OneDSEventsAPI * this_ptr, app::String * project_id_ikey, app::String * ingestion_key, app::String * jwt_token, app::String * header_jwt_ticket_key, app::String * header_jwt_ticket_prefix));
IL2CPP_REGISTER_METHOD(0x01853F30, void, ForgetAllCredentials, (app::OneDSEventsAPI * this_ptr));
IL2CPP_REGISTER_METHOD(0x01854010, Task_1_PlayFab_SharedModels_PlayFabResult_1_ *, WriteTelemetryEventsAsync, (app::OneDSEventsAPI * this_ptr, app::WriteEventsRequest * request, app::Object * custom_data, app::Dictionary_2_System_String_System_String_ * extra_headers));
IL2CPP_REGISTER_METHOD(0x01854150, Task_1_PlayFab_SharedModels_PlayFabResult_1__1 *, GetTelemetryIngestionConfigAsync, (app::TelemetryIngestionConfigRequest * request, app::Object * custom_data, app::Dictionary_2_System_String_System_String_ * extra_headers));
IL2CPP_REGISTER_METHOD(0x01854270, Task *, WaitWhile, (app::Func_1_Boolean_ * condition, int32_t frequency, int32_t timeout));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::OneDSEventsAPI * this_ptr));
}
