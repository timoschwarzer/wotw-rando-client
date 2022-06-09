#include <interception_macros.h>

namespace app::methods::Moon_ArtOptimization::SerializableUberShaderWrapper {
    IL2CPP_REGISTER_METHOD(0x00CB20B0, app::SerializableUberSaderModifierWrapper *, GetOrCreateModifierWrapper, (app::SerializableUberShaderWrapper * this_ptr, app::UberShaderModifier * modifier));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Rebind, (app::SerializableUberShaderWrapper * this_ptr, app::UberShaderComponent * uber_shader));
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::List_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ *, get_Modifiers, (app::SerializableUberShaderWrapper * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00CB22E0, void, __ctor, (app::SerializableUberShaderWrapper * this_ptr));
}
