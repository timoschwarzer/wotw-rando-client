#include <interception_macros.h>

namespace app::methods::Mono_Net::CFArray {
IL2CPP_REGISTER_METHOD(0x02173690, void, __ctor, (app::CFArray * this_ptr, app::void * handle, bool own));
IL2CPP_REGISTER_METHOD(0x021736A0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x021737C0, void *, CFArrayGetCount, (app::void * handle));
IL2CPP_REGISTER_METHOD(0x02173860, int32_t, get_Count, (app::CFArray * this_ptr));
IL2CPP_REGISTER_METHOD(0x02173980, void *, CFArrayGetValueAtIndex, (app::void * handle, app::void * index));
IL2CPP_REGISTER_METHOD(0x02173A30, void *, get_Item, (app::CFArray * this_ptr, int32_t index));
}
