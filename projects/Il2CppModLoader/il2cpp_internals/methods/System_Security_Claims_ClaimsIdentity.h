#include <interception_macros.h>

namespace app::methods::System_Security_Claims::ClaimsIdentity {
IL2CPP_REGISTER_METHOD(0x01E1C300, void, __ctor_1, (app::ClaimsIdentity * this_ptr));
IL2CPP_REGISTER_METHOD(0x020C1AE0, void, __ctor_2, (app::ClaimsIdentity * this_ptr, app::IEnumerable_1_System_Security_Claims_Claim_ * claims));
IL2CPP_REGISTER_METHOD(0x020C1B10, void, __ctor_3, (app::ClaimsIdentity * this_ptr, app::IIdentity * identity, app::IEnumerable_1_System_Security_Claims_Claim_ * claims, app::String * authentication_type, app::String * name_type, app::String * role_type));
IL2CPP_REGISTER_METHOD(0x020C1B40, void, __ctor_4, (app::ClaimsIdentity * this_ptr, app::IIdentity * identity, app::IEnumerable_1_System_Security_Claims_Claim_ * claims, app::String * authentication_type, app::String * name_type, app::String * role_type, bool check_auth_type));
IL2CPP_REGISTER_METHODINFO(0x04783A38, ClaimsIdentity__ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C2310, void, __ctor_5, (app::ClaimsIdentity * this_ptr, app::ClaimsIdentity * other));
IL2CPP_REGISTER_METHODINFO(0x04733000, ClaimsIdentity__ctor_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C2680, void, __ctor_6, (app::ClaimsIdentity * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04768068, ClaimsIdentity__ctor_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB9F0, String *, get_AuthenticationType, (app::ClaimsIdentity * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9D0, ClaimsIdentity *, get_Actor, (app::ClaimsIdentity * this_ptr));
IL2CPP_REGISTER_METHOD(0x020C2930, void, set_Actor, (app::ClaimsIdentity * this_ptr, app::ClaimsIdentity * value));
IL2CPP_REGISTER_METHODINFO(0x0470A858, ClaimsIdentity_set_Actor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C2A30, IEnumerable_1_System_Security_Claims_Claim_ *, get_Claims, (app::ClaimsIdentity * this_ptr));
IL2CPP_REGISTER_METHOD(0x020C2BC0, String *, get_Name, (app::ClaimsIdentity * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_NameClaimType, (app::ClaimsIdentity * this_ptr));
IL2CPP_REGISTER_METHOD(0x020C2BF0, ClaimsIdentity *, Clone, (app::ClaimsIdentity * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04760758, ClaimsIdentity_Clone__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C2E90, void, AddClaim, (app::ClaimsIdentity * this_ptr, app::Claim * claim));
IL2CPP_REGISTER_METHODINFO(0x0471E780, ClaimsIdentity_AddClaim__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C2FB0, void, SafeAddClaims, (app::ClaimsIdentity * this_ptr, app::IEnumerable_1_System_Security_Claims_Claim_ * claims));
IL2CPP_REGISTER_METHOD(0x020C31E0, void, SafeAddClaim, (app::ClaimsIdentity * this_ptr, app::Claim * claim));
IL2CPP_REGISTER_METHOD(0x020C32D0, Claim *, FindFirst, (app::ClaimsIdentity * this_ptr, app::String * type));
IL2CPP_REGISTER_METHODINFO(0x04711788, ClaimsIdentity_FindFirst__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C35C0, void, OnSerializingMethod, (app::ClaimsIdentity * this_ptr, app::StreamingContext context));
IL2CPP_REGISTER_METHOD(0x020C3670, void, OnDeserializedMethod, (app::ClaimsIdentity * this_ptr, app::StreamingContext context));
IL2CPP_REGISTER_METHOD(0x020C3750, void, OnDeserializingMethod, (app::ClaimsIdentity * this_ptr, app::StreamingContext context));
IL2CPP_REGISTER_METHOD(0x020C3990, void, GetObjectData, (app::ClaimsIdentity * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0477E7E0, ClaimsIdentity_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C4000, void, DeserializeClaims, (app::ClaimsIdentity * this_ptr, app::String * serialized_claims));
IL2CPP_REGISTER_METHOD(0x020C44C0, String *, SerializeClaims, (app::ClaimsIdentity * this_ptr));
IL2CPP_REGISTER_METHOD(0x020C4810, bool, IsCircular, (app::ClaimsIdentity * this_ptr, app::ClaimsIdentity * subject));
IL2CPP_REGISTER_METHOD(0x020C4860, void, Deserialize, (app::ClaimsIdentity * this_ptr, app::SerializationInfo * info, app::StreamingContext context, bool use_context));
IL2CPP_REGISTER_METHODINFO(0x0479A290, ClaimsIdentity_Deserialize__MethodInfo);
}
