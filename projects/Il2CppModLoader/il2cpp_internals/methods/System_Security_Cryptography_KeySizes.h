#include <interception_macros.h>

namespace app::methods::System_Security_Cryptography::KeySizes {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_MinSize, (app::KeySizes * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_MaxSize, (app::KeySizes * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_SkipSize, (app::KeySizes * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0133CEF0, void, __ctor, (app::KeySizes * this_ptr, int32_t min_size, int32_t max_size, int32_t skip_size));
    IL2CPP_REGISTER_METHOD(0x020DBE90, bool, IsLegal, (app::KeySizes * this_ptr, int32_t key_size));
    IL2CPP_REGISTER_METHOD(0x020DBEC0, bool, IsLegalKeySize, (app::KeySizes__Array * legal_keys, int32_t size));
}
