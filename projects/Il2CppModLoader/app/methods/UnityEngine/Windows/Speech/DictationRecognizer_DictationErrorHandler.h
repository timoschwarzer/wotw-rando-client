#include <interception_macros.h>

namespace app::methods::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::DictationRecognizer_DictationErrorHandler * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02C11970, void, Invoke, (app::DictationRecognizer_DictationErrorHandler * this_ptr, app::String * error, int32_t hresult))
    IL2CPP_REGISTER_METHOD(0x02C79ED0, app::IAsyncResult *, BeginInvoke, (app::DictationRecognizer_DictationErrorHandler * this_ptr, app::String * error, int32_t hresult, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::DictationRecognizer_DictationErrorHandler * this_ptr, app::IAsyncResult * result))
}
