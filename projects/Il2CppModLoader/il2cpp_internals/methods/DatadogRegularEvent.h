#include <interception_macros.h>

namespace app::methods::DatadogRegularEvent {
IL2CPP_REGISTER_METHOD(0x02E91080, String *, get_Url, (app::DatadogRegularEvent * this_ptr));
IL2CPP_REGISTER_METHOD(0x02E91170, void, __ctor, (app::DatadogRegularEvent * this_ptr, app::String * key, app::String * title, app::String * text));
IL2CPP_REGISTER_METHOD(0x01950620, int32_t, get_UniqueHash, (app::DatadogRegularEvent * this_ptr));
IL2CPP_REGISTER_METHOD(0x02E91370, DatadogRegularEvent *, AddTag, (app::DatadogRegularEvent * this_ptr, app::String * key, app::String * value));
}
