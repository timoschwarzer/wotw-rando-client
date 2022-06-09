#include <interception_macros.h>

namespace app::methods::System_Collections::BitArray {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_1, (app::BitArray * this_ptr));
IL2CPP_REGISTER_METHOD(0x0201D5A0, void, __ctor_2, (app::BitArray * this_ptr, int32_t length));
IL2CPP_REGISTER_METHOD(0x0201D5B0, void, __ctor_3, (app::BitArray * this_ptr, int32_t length, bool default_value));
IL2CPP_REGISTER_METHODINFO(0x04730858, BitArray__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201D720, void, __ctor_4, (app::BitArray * this_ptr, app::Int32__Array * values));
IL2CPP_REGISTER_METHODINFO(0x04718450, BitArray__ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201D8C0, bool, get_Item, (app::BitArray * this_ptr, int32_t index));
IL2CPP_REGISTER_METHOD(0x0201D8D0, void, set_Item, (app::BitArray * this_ptr, int32_t index, bool value));
IL2CPP_REGISTER_METHOD(0x0201D8E0, bool, Get, (app::BitArray * this_ptr, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0473FA08, BitArray_Get__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201DA00, void, Set, (app::BitArray * this_ptr, int32_t index, bool value));
IL2CPP_REGISTER_METHODINFO(0x0472B7A0, BitArray_Set__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Length, (app::BitArray * this_ptr));
IL2CPP_REGISTER_METHOD(0x0201DB90, void, set_Length, (app::BitArray * this_ptr, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x047385A8, BitArray_set_Length__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201DDA0, void, CopyTo, (app::BitArray * this_ptr, app::Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x047861E0, BitArray_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::BitArray * this_ptr));
IL2CPP_REGISTER_METHOD(0x0201E200, Object *, Clone, (app::BitArray * this_ptr));
IL2CPP_REGISTER_METHOD(0x0201E4C0, Object *, get_SyncRoot, (app::BitArray * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (app::BitArray * this_ptr));
IL2CPP_REGISTER_METHOD(0x0201E620, IEnumerator *, GetEnumerator, (app::BitArray * this_ptr));
IL2CPP_REGISTER_METHOD(0x0201E780, int32_t, GetArrayLength, (int32_t n, int32_t div));
}
