#include <interception_macros.h>

namespace app::methods::FullSerializer_Internal::fsReflectedConverter {
IL2CPP_REGISTER_METHOD(0x0165C8F0, bool, CanProcess, (app::fsReflectedConverter * this_ptr, app::Type * type));
IL2CPP_REGISTER_METHOD(0x0165CA20, fsResult, TrySerialize, (app::fsReflectedConverter * this_ptr, app::Object * instance, app::fsData * * serialized, app::Type * storage_type));
IL2CPP_REGISTER_METHOD(0x0165CD00, fsResult, TryDeserialize, (app::fsReflectedConverter * this_ptr, app::fsData * data, app::Object * * instance, app::Type * storage_type));
IL2CPP_REGISTER_METHOD(0x0165D060, Object *, CreateInstance, (app::fsReflectedConverter * this_ptr, app::fsData * data, app::Type * storage_type));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::fsReflectedConverter * this_ptr));
}
