#include <interception_macros.h>

namespace app::methods::UnityEngine_Windows_Speech::DictationRecognizer_DictationHypothesisDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::DictationRecognizer_DictationHypothesisDelegate * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::DictationRecognizer_DictationHypothesisDelegate * this_ptr, app::String * text));
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::DictationRecognizer_DictationHypothesisDelegate * this_ptr, app::String * text, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::DictationRecognizer_DictationHypothesisDelegate * this_ptr, app::IAsyncResult * result));
}
