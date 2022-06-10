#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::ValueTuple {
    IL2CPP_REGISTER_METHOD(0x00249B10, bool, Equals_1, (app::ValueTuple__Boxed * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x00221FF0, bool, Equals_2, (app::ValueTuple__Boxed * this_ptr, app::ValueTuple other))
    IL2CPP_REGISTER_METHOD(0x00249BB0, bool, IStructuralEquatable_Equals, (app::ValueTuple__Boxed * this_ptr, app::Object * other, app::IEqualityComparer * comparer))
    IL2CPP_REGISTER_METHOD(0x00249C50, int32_t, IComparable_CompareTo, (app::ValueTuple__Boxed * this_ptr, app::Object * other))
    IL2CPP_REGISTER_METHODINFO(0x04729B88, ValueTuple_System_IComparable_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0013BB70, int32_t, CompareTo, (app::ValueTuple__Boxed * this_ptr, app::ValueTuple other))
    IL2CPP_REGISTER_METHOD(0x00249D80, int32_t, IStructuralComparable_CompareTo, (app::ValueTuple__Boxed * this_ptr, app::Object * other, app::IComparer * comparer))
    IL2CPP_REGISTER_METHODINFO(0x04747D10, ValueTuple_System_Collections_IStructuralComparable_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0013BB70, int32_t, GetHashCode, (app::ValueTuple__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013BB70, int32_t, IStructuralEquatable_GetHashCode, (app::ValueTuple__Boxed * this_ptr, app::IEqualityComparer * comparer))
    IL2CPP_REGISTER_METHOD(0x00249EB0, app::String *, ToString, (app::ValueTuple__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0314ADC0, int32_t, CombineHashCodes_1, (int32_t h1, int32_t h2))
    IL2CPP_REGISTER_METHOD(0x0314AE90, int32_t, CombineHashCodes_2, (int32_t h1, int32_t h2, int32_t h3))
    IL2CPP_REGISTER_METHOD(0x0314AF60, int32_t, CombineHashCodes_3, (int32_t h1, int32_t h2, int32_t h3, int32_t h4))
}
