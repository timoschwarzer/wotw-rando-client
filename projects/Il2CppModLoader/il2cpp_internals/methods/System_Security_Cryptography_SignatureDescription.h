#include <interception_macros.h>

namespace app::methods::System_Security_Cryptography::SignatureDescription {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_1, (app::SignatureDescription * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E0FB90, void, __ctor_2, (app::SignatureDescription * this_ptr, app::SecurityElement * el));
    IL2CPP_REGISTER_METHODINFO(0x0476AB78, SignatureDescription__ctor_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_KeyAlgorithm, (app::SignatureDescription * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_KeyAlgorithm, (app::SignatureDescription * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String *, get_DigestAlgorithm, (app::SignatureDescription * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_DigestAlgorithm, (app::SignatureDescription * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String *, get_FormatterAlgorithm, (app::SignatureDescription * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_FormatterAlgorithm, (app::SignatureDescription * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String *, get_DeformatterAlgorithm, (app::SignatureDescription * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_DeformatterAlgorithm, (app::SignatureDescription * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHOD(0x01E0FCA0, app::AsymmetricSignatureDeformatter *, CreateDeformatter, (app::SignatureDescription * this_ptr, app::AsymmetricAlgorithm * key));
    IL2CPP_REGISTER_METHOD(0x01E0FDA0, app::AsymmetricSignatureFormatter *, CreateFormatter, (app::SignatureDescription * this_ptr, app::AsymmetricAlgorithm * key));
    IL2CPP_REGISTER_METHOD(0x01E0FEA0, app::HashAlgorithm *, CreateDigest, (app::SignatureDescription * this_ptr));
}
