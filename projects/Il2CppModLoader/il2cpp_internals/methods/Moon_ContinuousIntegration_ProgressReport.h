#include <interception_macros.h>

namespace app::methods::Moon_ContinuousIntegration::ProgressReport {
    IL2CPP_REGISTER_METHOD(0x0318B700, void, __ctor_1, (app::ProgressReport * this_ptr, app::String * task_name));
    IL2CPP_REGISTER_METHOD(0x0318B7C0, void, __ctor_2, (app::ProgressReport * this_ptr, app::String * task_name, int32_t task_index, int32_t task_count));
    IL2CPP_REGISTER_METHOD(0x0318BA90, void, Dispose, (app::ProgressReport * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00502220, app::String *, Build_1, (app::ProgressReport * this_ptr, app::String * task_name));
    IL2CPP_REGISTER_METHOD(0x0318BB30, app::String *, Build_2, (app::ProgressReport * this_ptr, app::String * task_name, int32_t task_index, int32_t task_count));
}
