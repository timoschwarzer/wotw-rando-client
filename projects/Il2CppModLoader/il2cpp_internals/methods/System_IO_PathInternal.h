#include <interception_macros.h>

namespace app::methods::System_IO::PathInternal {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsPartiallyQualified, (app::String * path));
    IL2CPP_REGISTER_METHOD(0x0237AF80, bool, HasIllegalCharacters, (app::String * path, bool check_additional));
}
