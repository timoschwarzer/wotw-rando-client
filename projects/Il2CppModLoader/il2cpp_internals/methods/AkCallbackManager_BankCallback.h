#include <interception_macros.h>

namespace app::methods::AkCallbackManager_BankCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::AkCallbackManager_BankCallback * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x026D3B90, void, Invoke, (app::AkCallbackManager_BankCallback * this_ptr, uint32_t in_bank_i_d, app::void * in__in_memory_bank_ptr, app::AKRESULT__Enum in_e_load_result, uint32_t in_mem_pool_id, app::Object * in__cookie));
IL2CPP_REGISTER_METHOD(0x026D4000, IAsyncResult *, BeginInvoke, (app::AkCallbackManager_BankCallback * this_ptr, uint32_t in_bank_i_d, app::void * in__in_memory_bank_ptr, app::AKRESULT__Enum in_e_load_result, uint32_t in_mem_pool_id, app::Object * in__cookie, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::AkCallbackManager_BankCallback * this_ptr, app::IAsyncResult * result));
}
