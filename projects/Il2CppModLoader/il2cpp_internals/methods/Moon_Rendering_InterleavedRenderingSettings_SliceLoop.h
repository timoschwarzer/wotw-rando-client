#include <interception_macros.h>

namespace app::methods::Moon_Rendering::InterleavedRenderingSettings_SliceLoop {
    IL2CPP_REGISTER_METHOD(0x0078DA70, int32_t, GetSliceIndexToStore, (app::InterleavedRenderingSettings_SliceLoop * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0078DA80, int32_t, GetSliceIndexToReuse, (app::InterleavedRenderingSettings_SliceLoop * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, GetWriteIndex, (app::InterleavedRenderingSettings_SliceLoop * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0078DA90, int32_t, GetReadIndex, (app::InterleavedRenderingSettings_SliceLoop * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0078DAA0, void, Advance, (app::InterleavedRenderingSettings_SliceLoop * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0078DB40, void, __ctor, (app::InterleavedRenderingSettings_SliceLoop * this_ptr));
}
