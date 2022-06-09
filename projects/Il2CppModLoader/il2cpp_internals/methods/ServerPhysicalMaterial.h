#include <interception_macros.h>

namespace app::methods::ServerPhysicalMaterial {
    IL2CPP_REGISTER_METHOD(0x00AC3150, app::ServerPhysicalMaterial_PhysicalMaterialData, CreateData, (app::PhysicMaterial * physic_material));
    IL2CPP_REGISTER_METHOD(0x00AC3300, app::PhysicMaterial *, CreateMaterial, (app::ServerPhysicalMaterial_PhysicalMaterialData data));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::ServerPhysicalMaterial * this_ptr));
}
