#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::CsvReader__ReadRow_d__10 {
    IL2CPP_REGISTER_METHOD(0x01426B00, void, ctor, (app::CsvReader_ReadRow_d_10 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::CsvReader_ReadRow_d_10 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030EA4A0, bool, MoveNext, (app::CsvReader_ReadRow_d_10 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3DD30, app::CsvReader_Cell, System_Collections_Generic_IEnumerator_Moon_CsvReader_Cell__get_Current, (app::CsvReader_ReadRow_d_10 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030EA580, void, IEnumerator_Reset, (app::CsvReader_ReadRow_d_10 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04777DE8, CsvReader_ReadRow_d_10_System_Collections_IEnumerator_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x030EA5D0, app::Object *, IEnumerator_get_Current, (app::CsvReader_ReadRow_d_10 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030EA660, app::IEnumerator_1_Moon_CsvReader_Cell_ *, System_Collections_Generic_IEnumerable_Moon_CsvReader_Cell__GetEnumerator, (app::CsvReader_ReadRow_d_10 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030EA850, app::IEnumerator *, IEnumerable_GetEnumerator, (app::CsvReader_ReadRow_d_10 * this_ptr))
}
