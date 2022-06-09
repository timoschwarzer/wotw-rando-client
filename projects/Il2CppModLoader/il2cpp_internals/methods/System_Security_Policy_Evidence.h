#include <interception_macros.h>

namespace app::methods::System_Security_Policy::Evidence {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::Evidence * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E1BCF0, int32_t, get_Count, (app::Evidence * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (app::Evidence * this_ptr));
IL2CPP_REGISTER_METHOD(0x004C50A0, Object *, get_SyncRoot, (app::Evidence * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E1BD50, void, CopyTo, (app::Evidence * this_ptr, app::Array * array, int32_t index));
IL2CPP_REGISTER_METHOD(0x01E1BE10, IEnumerator *, GetEnumerator, (app::Evidence * this_ptr));
}
