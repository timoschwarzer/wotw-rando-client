#include <interception_macros.h>

namespace app::methods::Moon_Network_Web::Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback_ {
IL2CPP_REGISTER_METHOD(0x002FB960, void, SetPath, (app::Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback_ * this_ptr, app::String * path));
IL2CPP_REGISTER_METHODINFO(0x04715080, Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback__SetPath__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0052A000, void, SetMethod, (app::Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback_ * this_ptr, app::Method__Enum method_1));
IL2CPP_REGISTER_METHODINFO(0x04741F80, Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback__SetMethod__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02722930, void, SetDataReader, (app::Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback_ * this_ptr, app::IDataReader * data_reader));
IL2CPP_REGISTER_METHODINFO(0x04739278, Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback__SetDataReader__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02722770, void, Send, (app::Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback_ * this_ptr, app::Action_1_Moon_Telemetry_Web_MoonTelemetrySendCallback_ * callback));
IL2CPP_REGISTER_METHODINFO(0x04765E60, Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback__Send__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Path, (app::Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x00529FF0, Method__Enum, get_Method, (app::Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB00, IDataReader *, get_DataReader, (app::Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, Dictionary_2_System_String_System_String_ *, get_Headers, (app::Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x027229E0, IRequestCallback *, CreateRequestCallbackObject, (app::Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02722AA0, void, Finish, (app::Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback_ * this_ptr, app::IRequestCallback * result));
}
