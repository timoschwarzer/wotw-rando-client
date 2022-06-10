#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_UnityEngine_Color_ {
    IL2CPP_REGISTER_METHOD(0x02F65E30, void, Sort_1, (app::Color__Array * keys, int32_t index, int32_t length, app::IComparer_1_UnityEngine_Color_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x04741358, ArraySortHelper_1_UnityEngine_Color__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F66150, int32_t, BinarySearch, (app::Color__Array * array, int32_t index, int32_t length, app::Color value, app::IComparer_1_UnityEngine_Color_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x047181D0, ArraySortHelper_1_UnityEngine_Color__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F66300, void, Sort_2, (app::Color__Array * keys, int32_t index, int32_t length, app::Comparison_1_UnityEngine_Color_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x04729950, ArraySortHelper_1_UnityEngine_Color__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::Color__Array * array, int32_t index, int32_t length, app::Color value, app::IComparer_1_UnityEngine_Color_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::Color__Array * keys, app::Comparison_1_UnityEngine_Color_ * comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::Color__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::Color__Array * keys, int32_t left, int32_t length, app::Comparison_1_UnityEngine_Color_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::Color__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_UnityEngine_Color_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::Color__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Color_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::Color__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Color_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::Color__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_UnityEngine_Color_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::Color__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Color_ * comparer))
}
