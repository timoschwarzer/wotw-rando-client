#include <interception_macros.h>

namespace app::methods::QuestMessageBox {
    IL2CPP_REGISTER_METHOD(0x00E8B040, void, SetHeaderAndFooter, (app::QuestMessageBox * this_ptr, app::String * header, app::String * footer));
    IL2CPP_REGISTER_METHOD(0x00E8B0F0, void, __ctor, (app::QuestMessageBox * this_ptr));
}
