#include <interception_macros.h>

namespace app::methods::DatadogMetricsEvent {
IL2CPP_REGISTER_METHOD(0x02E90170, String *, get_Url, (app::DatadogMetricsEvent * this_ptr));
IL2CPP_REGISTER_METHOD(0x02E90260, void, __ctor, (app::DatadogMetricsEvent * this_ptr, app::String * metric));
IL2CPP_REGISTER_METHOD(0x02E904B0, String *, ToJson, (app::DatadogMetricsEvent * this_ptr));
IL2CPP_REGISTER_METHOD(0x02E90960, DatadogMetricsEvent *, AddTag, (app::DatadogMetricsEvent * this_ptr, app::String * key, app::String * value));
IL2CPP_REGISTER_METHOD(0x02E90AC0, DatadogMetricsEvent *, AddPoint, (app::DatadogMetricsEvent * this_ptr, int64_t time, int64_t value));
IL2CPP_REGISTER_METHOD(0x02E90C00, DatadogMetricsEvent *, AddPointNow, (app::DatadogMetricsEvent * this_ptr, int64_t value));
}
