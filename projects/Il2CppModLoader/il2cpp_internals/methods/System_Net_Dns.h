#include <interception_macros.h>

namespace app::methods::System::Net::Dns {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x01EB0B40, IAsyncResult *, BeginGetHostByName, (String * hostName, AsyncCallback * requestCallback, Object * stateObject));
IL2CPP_REGISTER_METHODINFO(0x04747A40, Dns_BeginGetHostByName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB0D00, IAsyncResult *, BeginResolve, (String * hostName, AsyncCallback * requestCallback, Object * stateObject));
IL2CPP_REGISTER_METHODINFO(0x04749020, Dns_BeginResolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB0EC0, IAsyncResult *, BeginGetHostAddresses, (String * hostNameOrAddress, AsyncCallback * requestCallback, Object * state));
IL2CPP_REGISTER_METHODINFO(0x04759008, Dns_BeginGetHostAddresses__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB1120, IAsyncResult *, BeginGetHostEntry, (String * hostNameOrAddress, AsyncCallback * requestCallback, Object * stateObject));
IL2CPP_REGISTER_METHODINFO(0x0471CDB0, Dns_BeginGetHostEntry__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB1380, IAsyncResult *, BeginGetHostEntry, (IPAddress * address, AsyncCallback * requestCallback, Object * stateObject));
IL2CPP_REGISTER_METHODINFO(0x04779358, Dns_BeginGetHostEntry_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB1540, IPHostEntry *, EndGetHostByName, (IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHODINFO(0x04795AD0, Dns_EndGetHostByName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB16E0, IPHostEntry *, EndResolve, (IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHODINFO(0x0470FB18, Dns_EndResolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB1880, IPAddress__Array *, EndGetHostAddresses, (IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHODINFO(0x04758330, Dns_EndGetHostAddresses__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB1A20, IPHostEntry *, EndGetHostEntry, (IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHODINFO(0x0478C640, Dns_EndGetHostEntry__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB1C20, bool, GetHostByName_internal, (String * host, String * * h_name, String__Array * * h_aliases, String__Array * * h_addr_list, int32_t hint));
IL2CPP_REGISTER_METHOD(0x01EB1C30, bool, GetHostByAddr_internal, (String * addr, String * * h_name, String__Array * * h_aliases, String__Array * * h_addr_list, int32_t hint));
IL2CPP_REGISTER_METHOD(0x01EB1C40, bool, GetHostName_internal, (String * * h_name));
IL2CPP_REGISTER_METHOD(0x01EB1D40, void, Error_11001, (String * hostName));
IL2CPP_REGISTER_METHODINFO(0x04731188, Dns_Error_11001__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB1DB0, IPHostEntry *, hostent_to_IPHostEntry, (String * originalHostName, String * h_name, String__Array * h_aliases, String__Array * h_addrlist));
IL2CPP_REGISTER_METHOD(0x01EB21E0, IPHostEntry *, GetHostByAddress, (IPAddress * address));
IL2CPP_REGISTER_METHODINFO(0x0470B4E8, Dns_GetHostByAddress__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB22D0, IPHostEntry *, GetHostByAddress, (String * address));
IL2CPP_REGISTER_METHODINFO(0x04742150, Dns_GetHostByAddress_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB23B0, IPHostEntry *, GetHostByAddressFromString, (String * address, bool parse));
IL2CPP_REGISTER_METHOD(0x01EB2570, IPHostEntry *, GetHostEntry, (String * hostNameOrAddress));
IL2CPP_REGISTER_METHODINFO(0x04769D00, Dns_GetHostEntry__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB2830, IPHostEntry *, GetHostEntry, (IPAddress * address));
IL2CPP_REGISTER_METHODINFO(0x04734680, Dns_GetHostEntry_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB2920, IPAddress__Array *, GetHostAddresses, (String * hostNameOrAddress));
IL2CPP_REGISTER_METHODINFO(0x0474DA18, Dns_GetHostAddresses__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB2B50, IPHostEntry *, GetHostByName, (String * hostName));
IL2CPP_REGISTER_METHODINFO(0x0472B488, Dns_GetHostByName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB2CD0, String *, GetHostName, ());
IL2CPP_REGISTER_METHOD(0x01EB2E60, IPHostEntry *, Resolve, (String * hostName));
IL2CPP_REGISTER_METHODINFO(0x04704AD8, Dns_Resolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB3010, Task_1_System_Net_IPAddress_ *, GetHostAddressesAsync, (String * hostNameOrAddress));
IL2CPP_REGISTER_METHOD(0x01EB32B0, Task_1_System_Net_IPHostEntry_ *, GetHostEntryAsync, (IPAddress * address));
IL2CPP_REGISTER_METHOD(0x01EB3550, Task_1_System_Net_IPHostEntry_ *, GetHostEntryAsync, (String * hostNameOrAddress));
}
