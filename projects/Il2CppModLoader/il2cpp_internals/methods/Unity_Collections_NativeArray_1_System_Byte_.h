#include <interception_macros.h>

namespace app::methods::Unity_Collections::NativeArray_1_System_Byte_ {
    IL2CPP_REGISTER_METHOD(0x001DFA50, app::Byte__Array *, ToArray, (app::NativeArray_1_System_Byte___Boxed * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04721B58, NativeArray_1_System_Byte__ToArray__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x001DF770, void, __ctor, (app::NativeArray_1_System_Byte___Boxed * this_ptr, int32_t length, app::Allocator__Enum allocator, app::NativeArrayOptions__Enum options));
    IL2CPP_REGISTER_METHODINFO(0x04736840, NativeArray_1_System_Byte___ctor__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x001D9B60, bool, get_IsCreated, (app::NativeArray_1_System_Byte___Boxed * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04709978, NativeArray_1_System_Byte__get_IsCreated__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x001DF8B0, void, Dispose, (app::NativeArray_1_System_Byte___Boxed * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04742AC0, NativeArray_1_System_Byte__Dispose__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x022647E0, void, Allocate, (int32_t length, app::Allocator__Enum allocator, app::NativeArray_1_System_Byte_ * array));
    IL2CPP_REGISTER_METHOD(0x001DF780, int32_t, get_Length, (app::NativeArray_1_System_Byte___Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x001DF790, uint8_t, get_Item, (app::NativeArray_1_System_Byte___Boxed * this_ptr, int32_t index));
    IL2CPP_REGISTER_METHOD(0x001DF820, void, set_Item, (app::NativeArray_1_System_Byte___Boxed * this_ptr, int32_t index, uint8_t value));
    IL2CPP_REGISTER_METHOD(0x001DF930, void, CopyFrom, (app::NativeArray_1_System_Byte___Boxed * this_ptr, app::Byte__Array * array));
    IL2CPP_REGISTER_METHOD(0x001DF9C0, void, CopyTo, (app::NativeArray_1_System_Byte___Boxed * this_ptr, app::Byte__Array * array));
    IL2CPP_REGISTER_METHOD(0x001DFB30, app::NativeArray_1_T_Enumerator_System_Byte_, GetEnumerator, (app::NativeArray_1_System_Byte___Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x001DFB90, app::IEnumerator_1_System_Byte_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::NativeArray_1_System_Byte___Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x001DFC30, app::IEnumerator *, IEnumerable_GetEnumerator, (app::NativeArray_1_System_Byte___Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x001DFCF0, bool, Equals_1, (app::NativeArray_1_System_Byte___Boxed * this_ptr, app::NativeArray_1_System_Byte_ other));
    IL2CPP_REGISTER_METHOD(0x001DFD30, bool, Equals_2, (app::NativeArray_1_System_Byte___Boxed * this_ptr, app::Object * obj));
    IL2CPP_REGISTER_METHOD(0x001DFE40, int32_t, GetHashCode, (app::NativeArray_1_System_Byte___Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02264910, void, Copy_1, (app::Byte__Array * src, app::NativeArray_1_System_Byte_ dst));
    IL2CPP_REGISTER_METHOD(0x022649C0, void, Copy_2, (app::NativeArray_1_System_Byte_ src, app::Byte__Array * dst));
    IL2CPP_REGISTER_METHOD(0x02264A70, void, Copy_3, (app::Byte__Array * src, app::NativeArray_1_System_Byte_ dst, int32_t length));
    IL2CPP_REGISTER_METHOD(0x02264B20, void, Copy_4, (app::NativeArray_1_System_Byte_ src, app::Byte__Array * dst, int32_t length));
    IL2CPP_REGISTER_METHOD(0x02264BD0, void, Copy_5, (app::Byte__Array * src, int32_t src_index, app::NativeArray_1_System_Byte_ dst, int32_t dst_index, int32_t length));
    IL2CPP_REGISTER_METHOD(0x02264D40, void, Copy_6, (app::NativeArray_1_System_Byte_ src, int32_t src_index, app::Byte__Array * dst, int32_t dst_index, int32_t length));
}
