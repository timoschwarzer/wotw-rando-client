#include <interception_macros.h>

namespace app::methods::NegativeScaleFixer_TransformAndWorldMatrix {
IL2CPP_REGISTER_METHOD(0x002FA280, Transform *, get_Transform, (app::NegativeScaleFixer_TransformAndWorldMatrix * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Transform, (app::NegativeScaleFixer_TransformAndWorldMatrix * this_ptr, app::Transform * value));
IL2CPP_REGISTER_METHOD(0x0088C880, void, __ctor, (app::NegativeScaleFixer_TransformAndWorldMatrix * this_ptr, app::Transform * transform));
IL2CPP_REGISTER_METHOD(0x0088C970, void, ReApplyWorldTransform, (app::NegativeScaleFixer_TransformAndWorldMatrix * this_ptr));
}
