#include <interception_macros.h>

namespace app::methods::Moon::HierarchyPerformanceTest::HierarchyTestBulkOutput {
    IL2CPP_REGISTER_METHOD(0x0149F6A0, void, ctor, (app::HierarchyTestBulkOutput * this_ptr, app::HierarchyTestBulkToolData * data, app::String * file_name, app::String * file_extension))
    IL2CPP_REGISTER_METHOD(0x0149F810, app::String *, Save, (app::HierarchyTestBulkOutput * this_ptr, app::String * file_name, app::String * file_extension))
    IL2CPP_REGISTER_METHOD(0x0149FBC0, void, BuildContent, (app::HierarchyTestBulkOutput * this_ptr, app::StringBuilder * sb))
    IL2CPP_REGISTER_METHOD(0x014A02A0, void, AppendResults, (app::HierarchyTestBulkOutput * this_ptr, app::List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_ * sorted_results, app::String * tag, app::String * root_name, app::StringBuilder * sb, bool check_error))
    IL2CPP_REGISTER_METHOD(0x014A0460, app::String *, FormatResult, (app::HierarchyTestBulkOutput * this_ptr, app::String * tag, app::String * root_name, app::HPerfTestResult * result))
}
