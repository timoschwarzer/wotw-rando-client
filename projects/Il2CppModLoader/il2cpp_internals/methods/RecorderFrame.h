#include <interception_macros.h>

namespace app::methods::RecorderFrame {
    IL2CPP_REGISTER_METHOD(0x008EFBB0, void, SaveToFile, (app::RecorderFrame * this_ptr, app::BinaryWriter* binary_writer));
    IL2CPP_REGISTER_METHOD(0x008EFE50, void, LoadFromFile, (app::RecorderFrame * this_ptr, app::BinaryReader* binary_reader, int32_t current_version));
    IL2CPP_REGISTER_METHODINFO(0x04728200, RecorderFrame_LoadFromFile__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x008F0E20, void, __ctor, (app::RecorderFrame * this_ptr));
    IL2CPP_REGISTER_METHOD(0x016AA910, Object*, GetFrameDataOfType_1, (app::RecorderFrame * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01EB9AE0, List_1_System_Object_*, GetFrameData_1, (app::RecorderFrame * this_ptr));
    IL2CPP_REGISTER_METHOD(0x016AA910, CharacterData*, GetFrameDataOfType_2, (app::RecorderFrame * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047412A0, RecorderFrame_GetFrameDataOfType_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x016AA910, CameraData*, GetFrameDataOfType_3, (app::RecorderFrame * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0476B050, RecorderFrame_GetFrameDataOfType_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x016AA910, CheckpointData*, GetFrameDataOfType_4, (app::RecorderFrame * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04791B00, RecorderFrame_GetFrameDataOfType_3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x016AA910, InputData*, GetFrameDataOfType_5, (app::RecorderFrame * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0476F5E8, RecorderFrame_GetFrameDataOfType_4__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x016AA910, AnalogueInputData*, GetFrameDataOfType_6, (app::RecorderFrame * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047314D0, RecorderFrame_GetFrameDataOfType_5__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x016AA910, DeathsData*, GetFrameDataOfType_7, (app::RecorderFrame * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047939A0, RecorderFrame_GetFrameDataOfType_6__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x016AA910, EntityData*, GetFrameDataOfType_8, (app::RecorderFrame * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04741018, RecorderFrame_GetFrameDataOfType_7__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x016AA910, CursorInputData*, GetFrameDataOfType_9, (app::RecorderFrame * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0476FF90, RecorderFrame_GetFrameDataOfType_8__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01EB9AE0, List_1_CharacterData_*, GetFrameData_2, (app::RecorderFrame * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04768758, RecorderFrame_GetFrameData_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01EB9AE0, List_1_BuildData_*, GetFrameData_3, (app::RecorderFrame * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04794350, RecorderFrame_GetFrameData_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01EB9AE0, List_1_CheckpointData_*, GetFrameData_4, (app::RecorderFrame * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0472BCE0, RecorderFrame_GetFrameData_3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01EB9AE0, List_1_AbilitiesData_*, GetFrameData_5, (app::RecorderFrame * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0470B768, RecorderFrame_GetFrameData_4__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01EB9AE0, List_1_InputData_*, GetFrameData_6, (app::RecorderFrame * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047861C0, RecorderFrame_GetFrameData_5__MethodInfo);
} // namespace app::methods::RecorderFrame
