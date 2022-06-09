#include <interception_macros.h>

namespace app::methods::Newtonsoft_Json_Serialization::DefaultReferenceResolver {
IL2CPP_REGISTER_METHOD(0x0186A530, BidirectionalDictionary_2_System_String_System_Object_ *, GetMappings, (app::DefaultReferenceResolver * this_ptr, app::Object * context));
IL2CPP_REGISTER_METHODINFO(0x047106C8, DefaultReferenceResolver_GetMappings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0186A690, Object *, ResolveReference, (app::DefaultReferenceResolver * this_ptr, app::Object * context, app::String * reference));
IL2CPP_REGISTER_METHOD(0x0186A7A0, String *, GetReference, (app::DefaultReferenceResolver * this_ptr, app::Object * context, app::Object * value));
IL2CPP_REGISTER_METHOD(0x0186A920, void, AddReference, (app::DefaultReferenceResolver * this_ptr, app::Object * context, app::String * reference, app::Object * value));
IL2CPP_REGISTER_METHOD(0x0186A9E0, bool, IsReferenced, (app::DefaultReferenceResolver * this_ptr, app::Object * context, app::Object * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::DefaultReferenceResolver * this_ptr));
}
