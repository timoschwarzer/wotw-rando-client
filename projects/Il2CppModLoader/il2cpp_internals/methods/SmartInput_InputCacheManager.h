#include <interception_macros.h>

namespace app::methods::SmartInput::InputCacheManager {
    IL2CPP_REGISTER_METHOD(0x006CB5A0, void, DeclareSource, (app::InputCacheManager * this_ptr, app::ICachableInput * input));
    IL2CPP_REGISTER_METHOD(0x006CB720, void, PreDeclare, (app::InputCacheManager * this_ptr));
    IL2CPP_REGISTER_METHOD(0x006CB870, void, PostDeclare, (app::InputCacheManager * this_ptr));
    IL2CPP_REGISTER_METHOD(0x006CCA80, void, SetDirtyReaders, (app::InputCacheManager * this_ptr, int32_t source_index));
    IL2CPP_REGISTER_METHOD(0x006CCC00, void, Refresh, (app::InputCacheManager * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::InputCacheManager * this_ptr));
}
