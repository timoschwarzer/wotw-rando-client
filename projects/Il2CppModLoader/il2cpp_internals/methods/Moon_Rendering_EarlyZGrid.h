#include <interception_macros.h>

namespace app::methods::Moon_Rendering::EarlyZGrid {
IL2CPP_REGISTER_METHOD(0x00118FE0, void, __ctor, (app::EarlyZGrid__Boxed * this_ptr, app::Bounds bounds, app::Vector3 cell_size));
IL2CPP_REGISTER_METHOD(0x00119030, Bounds, getCellBounds, (app::EarlyZGrid__Boxed * this_ptr, app::Vector3 cell));
IL2CPP_REGISTER_METHOD(0x00119290, Vector3Int, getCellCoord, (app::EarlyZGrid__Boxed * this_ptr, app::Vector3 point));
IL2CPP_REGISTER_METHOD(0x001192E0, int32_t, getCellIndex, (app::EarlyZGrid__Boxed * this_ptr, app::Vector3 point));
IL2CPP_REGISTER_METHOD(0x00119340, int32_t, getCellCount, (app::EarlyZGrid__Boxed * this_ptr, app::Bounds bounds));
IL2CPP_REGISTER_METHOD(0x001194E0, int32_t, getCellCountXY, (app::EarlyZGrid__Boxed * this_ptr, app::Bounds bounds));
IL2CPP_REGISTER_METHOD(0x0078A070, Vector3, mad, (app::Vector3 m, app::Vector3 a, app::Vector3 b));
}
