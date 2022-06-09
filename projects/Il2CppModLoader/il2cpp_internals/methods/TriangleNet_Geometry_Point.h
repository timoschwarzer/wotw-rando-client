#include <interception_macros.h>

namespace app::methods::TriangleNet_Geometry::Point {
    IL2CPP_REGISTER_METHOD(0x0261CAF0, void, __ctor_1, (app::Point * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0261CB00, void, __ctor_2, (app::Point * this_ptr, double x, double y));
    IL2CPP_REGISTER_METHOD(0x0261CB20, void, __ctor_3, (app::Point * this_ptr, double x, double y, int32_t label));
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_ID, (app::Point * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_ID, (app::Point * this_ptr, int32_t value));
    IL2CPP_REGISTER_METHOD(0x0261CB30, double, get_X, (app::Point * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0261CB40, void, set_X, (app::Point * this_ptr, double value));
    IL2CPP_REGISTER_METHOD(0x0261CB50, double, get_Y, (app::Point * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0261CB60, void, set_Y, (app::Point * this_ptr, double value));
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_Label, (app::Point * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_Label, (app::Point * this_ptr, int32_t value));
    IL2CPP_REGISTER_METHOD(0x0261CB70, bool, operator____1, (app::Point * a, app::Point * b));
    IL2CPP_REGISTER_METHOD(0x0261CBB0, bool, operator____2, (app::Point * a, app::Point * b));
    IL2CPP_REGISTER_METHOD(0x0261CBF0, bool, Equals_1, (app::Point * this_ptr, app::Object * obj));
    IL2CPP_REGISTER_METHOD(0x0261CCF0, bool, Equals_2, (app::Point * this_ptr, app::Point * p));
    IL2CPP_REGISTER_METHOD(0x0261CD20, int32_t, CompareTo, (app::Point * this_ptr, app::Point * other));
    IL2CPP_REGISTER_METHOD(0x0261CD90, int32_t, GetHashCode, (app::Point * this_ptr));
}
