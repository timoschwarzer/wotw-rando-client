#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Steamworks::CCallbackBaseVTable_RunCRDel {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::CCallbackBaseVTable_RunCRDel * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x015F7A10, void, Invoke, (app::CCallbackBaseVTable_RunCRDel * this_ptr, void * thisptr, void * pv_param, bool b_i_o_failure, uint64_t h_steam_a_p_i_call))
    IL2CPP_REGISTER_METHOD(0x015F7E30, app::IAsyncResult *, BeginInvoke, (app::CCallbackBaseVTable_RunCRDel * this_ptr, void * thisptr, void * pv_param, bool b_i_o_failure, uint64_t h_steam_a_p_i_call, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::CCallbackBaseVTable_RunCRDel * this_ptr, app::IAsyncResult * result))
}
