#include <interception_macros.h>

namespace app::methods::System::Predicate_1_System_Collections_DictionaryEntry_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Predicate_1_System_Collections_DictionaryEntry_ * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x02885850, bool, Invoke, (app::Predicate_1_System_Collections_DictionaryEntry_ * this_ptr, app::DictionaryEntry obj));
    IL2CPP_REGISTER_METHOD(0x02A51030, app::IAsyncResult *, BeginInvoke, (app::Predicate_1_System_Collections_DictionaryEntry_ * this_ptr, app::DictionaryEntry obj, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_System_Collections_DictionaryEntry_ * this_ptr, app::IAsyncResult * result));
}
