#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::ValueTuple_2_Int32_Object_ {
    IL2CPP_REGISTER_METHOD(0x0013C010, void, ctor, (app::ValueTuple_2_Int32_Object___Boxed * this_ptr, int32_t item1, app::Object * item2))
    IL2CPP_REGISTER_METHOD(0x0021CCF0, bool, Equals_1, (app::ValueTuple_2_Int32_Object___Boxed * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x0021CE00, bool, Equals_2, (app::ValueTuple_2_Int32_Object___Boxed * this_ptr, app::ValueTuple_2_Int32_Object_ other))
    IL2CPP_REGISTER_METHOD(0x0021CE20, bool, IStructuralEquatable_Equals, (app::ValueTuple_2_Int32_Object___Boxed * this_ptr, app::Object * other, app::IEqualityComparer * comparer))
    IL2CPP_REGISTER_METHOD(0x0021CE30, int32_t, IComparable_CompareTo, (app::ValueTuple_2_Int32_Object___Boxed * this_ptr, app::Object * other))
    IL2CPP_REGISTER_METHODINFO(0x0478D0C0, ValueTuple_2_Int32_Object__System_IComparable_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0021CE40, int32_t, CompareTo, (app::ValueTuple_2_Int32_Object___Boxed * this_ptr, app::ValueTuple_2_Int32_Object_ other))
    IL2CPP_REGISTER_METHOD(0x0021CE60, int32_t, IStructuralComparable_CompareTo, (app::ValueTuple_2_Int32_Object___Boxed * this_ptr, app::Object * other, app::IComparer * comparer))
    IL2CPP_REGISTER_METHODINFO(0x04787EA8, ValueTuple_2_Int32_Object__System_Collections_IStructuralComparable_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0021CE70, int32_t, GetHashCode, (app::ValueTuple_2_Int32_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0021CEC0, int32_t, IStructuralEquatable_GetHashCode, (app::ValueTuple_2_Int32_Object___Boxed * this_ptr, app::IEqualityComparer * comparer))
    IL2CPP_REGISTER_METHOD(0x0021D000, int32_t, GetHashCodeCore, (app::ValueTuple_2_Int32_Object___Boxed * this_ptr, app::IEqualityComparer * comparer))
    IL2CPP_REGISTER_METHOD(0x0021D120, app::String *, ToString, (app::ValueTuple_2_Int32_Object___Boxed * this_ptr))
}
