#include <interception_macros.h>

namespace app::methods::VerletStructure_VerletLink {
IL2CPP_REGISTER_METHOD(0x013D0CC0, void, Init, (app::VerletStructure_VerletLink * this_ptr, app::VerletStructure * verlet_structure));
IL2CPP_REGISTER_METHOD(0x013D0EC0, Vector3, get_Center, (app::VerletStructure_VerletLink * this_ptr));
IL2CPP_REGISTER_METHOD(0x013D1000, Vector3, get_InitialCenter, (app::VerletStructure_VerletLink * this_ptr));
IL2CPP_REGISTER_METHOD(0x013D1140, Vector3, get_Tangent, (app::VerletStructure_VerletLink * this_ptr));
IL2CPP_REGISTER_METHOD(0x013D1310, Vector3, get_Vector, (app::VerletStructure_VerletLink * this_ptr));
IL2CPP_REGISTER_METHOD(0x013D1440, Vector3, get_InitialTangent, (app::VerletStructure_VerletLink * this_ptr));
IL2CPP_REGISTER_METHOD(0x013D1610, Vector3, get_Normal, (app::VerletStructure_VerletLink * this_ptr));
IL2CPP_REGISTER_METHOD(0x013D18A0, Vector3, get_NormalUpBasis, (app::VerletStructure_VerletLink * this_ptr));
IL2CPP_REGISTER_METHOD(0x013D1AD0, Vector3, get_Perpendicular, (app::VerletStructure_VerletLink * this_ptr));
IL2CPP_REGISTER_METHOD(0x013D1CA0, Vector3, get_PerpendicularUpBasis, (app::VerletStructure_VerletLink * this_ptr));
IL2CPP_REGISTER_METHOD(0x013D1E40, Vector3, PerpendicularFixedBasis, (app::VerletStructure_VerletLink * this_ptr, app::Vector3 up_vector));
IL2CPP_REGISTER_METHOD(0x013D1FE0, Vector3, get_InitialNormal, (app::VerletStructure_VerletLink * this_ptr));
IL2CPP_REGISTER_METHOD(0x013D2270, Vector3, get_InitialNormalUpBasis, (app::VerletStructure_VerletLink * this_ptr));
IL2CPP_REGISTER_METHOD(0x013D24A0, Vector3, InitialFixedBasis, (app::VerletStructure_VerletLink * this_ptr, app::Vector3 up_vector));
IL2CPP_REGISTER_METHOD(0x013D26D0, Vector3, get_Normal2D, (app::VerletStructure_VerletLink * this_ptr));
IL2CPP_REGISTER_METHOD(0x013D2900, Vector3, get_InitialNormal2D, (app::VerletStructure_VerletLink * this_ptr));
IL2CPP_REGISTER_METHOD(0x013D2B30, bool, IsConnected_1, (app::VerletStructure_VerletLink * this_ptr, app::VerletStructure_VerletLink * b));
IL2CPP_REGISTER_METHOD(0x013D2B70, bool, IsConnected_2, (app::VerletStructure_VerletLink * this_ptr, int32_t joint));
IL2CPP_REGISTER_METHOD(0x013D2B80, void, Update, (app::VerletStructure_VerletLink * this_ptr));
IL2CPP_REGISTER_METHOD(0x013D2E30, void, __ctor, (app::VerletStructure_VerletLink * this_ptr));
}
