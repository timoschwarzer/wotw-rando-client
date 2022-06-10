#include <interception_macros.h>

namespace app::methods::GhostFrame {
    IL2CPP_REGISTER_METHOD(0x00E199E0, void, SaveToFile, (app::GhostFrame * this_ptr, app::BinaryWriter * binary_writer))
    IL2CPP_REGISTER_METHOD(0x00E19C20, app::IGhostFrameData *, GetFrameDataOfTypeFast, (app::GhostFrame * this_ptr, app::GhostFrame_FrameDataTypes__Enum typ))
    IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_FrameDataCacheCount, (app::GhostFrame * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E19D20, app::IGhostFrameData__Array *, GetFrameDataFast, (app::GhostFrame * this_ptr, app::GhostFrame_FrameDataTypes__Enum typ))
    IL2CPP_REGISTER_METHOD(0x00E19F10, app::List_1_IGhostFrameData_ *, GetFrameDataStructsFast, (app::GhostFrame * this_ptr, app::GhostFrame_FrameDataTypes__Enum typ))
    IL2CPP_REGISTER_METHOD(0x00E1A160, void, LoadFromFile, (app::GhostFrame * this_ptr, app::BinaryReader * binary_reader, int32_t version))
    IL2CPP_REGISTER_METHODINFO(0x047765E8, GhostFrame_LoadFromFile__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E1B280, void, ctor, (app::GhostFrame * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015E9B60, app::Object *, GetFrameDataOfType, (app::GhostFrame * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EB8580, app::List_1_System_Object_ *, GetFrameData, (app::GhostFrame * this_ptr))
}
