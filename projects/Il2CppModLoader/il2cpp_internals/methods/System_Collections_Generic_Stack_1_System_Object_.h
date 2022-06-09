#include <interception_macros.h>

namespace app::methods::System_Collections_Generic::Stack_1_System_Object_ {
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::Stack_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Stack_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02CF7A10, Object *, ICollection_get_SyncRoot, (app::Stack_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x0243CB70, void, __ctor_1, (app::Stack_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02CF78E0, void, __ctor_2, (app::Stack_1_System_Object_ * this_ptr, int32_t capacity));
IL2CPP_REGISTER_METHODINFO(0x047923D0, Stack_1_System_Object___ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02031F00, void, Clear, (app::Stack_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02CF7B70, bool, Contains, (app::Stack_1_System_Object_ * this_ptr, app::Object * item));
IL2CPP_REGISTER_METHOD(0x02CF7BC0, void, ICollection_CopyTo, (app::Stack_1_System_Object_ * this_ptr, app::Array * array, int32_t array_index));
IL2CPP_REGISTER_METHODINFO(0x04735D50, Stack_1_System_Object__System_Collections_ICollection_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02CF7E60, Stack_1_T_Enumerator_System_Object_, GetEnumerator, (app::Stack_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02CF7EA0, IEnumerator_1_System_Object_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::Stack_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02CF7EA0, IEnumerator *, IEnumerable_GetEnumerator, (app::Stack_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02CF7F30, Object *, Peek, (app::Stack_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02CF7F90, Object *, Pop, (app::Stack_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02CF8030, void, Push, (app::Stack_1_System_Object_ * this_ptr, app::Object * item));
IL2CPP_REGISTER_METHOD(0x02CF80F0, Object__Array *, ToArray, (app::Stack_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02CF81D0, void, ThrowForEmptyStack, (app::Stack_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04710768, Stack_1_System_Object__ThrowForEmptyStack__MethodInfo);
}
