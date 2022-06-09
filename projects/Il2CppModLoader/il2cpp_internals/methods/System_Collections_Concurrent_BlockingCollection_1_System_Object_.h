#include <interception_macros.h>

namespace app::methods::System_Collections_Concurrent::BlockingCollection_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02AD81F0, bool, get_IsAddingCompleted, (app::BlockingCollection_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02AD8230, bool, get_IsCompleted, (app::BlockingCollection_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02AD82B0, int32_t, get_Count, (app::BlockingCollection_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02AD8300, bool, ICollection_get_IsSynchronized, (app::BlockingCollection_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02AD8330, app::Object *, ICollection_get_SyncRoot, (app::BlockingCollection_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04778C08, BlockingCollection_1_System_Object__System_Collections_ICollection_get_SyncRoot__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02AD8390, void, __ctor_1, (app::BlockingCollection_1_System_Object_ * this_ptr, int32_t bounded_capacity));
    IL2CPP_REGISTER_METHOD(0x02AD84D0, void, __ctor_2, (app::BlockingCollection_1_System_Object_ * this_ptr, app::IProducerConsumerCollection_1_System_Object_ * collection, int32_t bounded_capacity));
    IL2CPP_REGISTER_METHODINFO(0x04761C18, BlockingCollection_1_System_Object___ctor_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02AD8680, void, Initialize, (app::BlockingCollection_1_System_Object_ * this_ptr, app::IProducerConsumerCollection_1_System_Object_ * collection, int32_t bounded_capacity, int32_t collection_count));
    IL2CPP_REGISTER_METHOD(0x02AD8A90, void, Add, (app::BlockingCollection_1_System_Object_ * this_ptr, app::Object * item, app::CancellationToken cancellation_token));
    IL2CPP_REGISTER_METHOD(0x02AD8AD0, bool, TryAdd, (app::BlockingCollection_1_System_Object_ * this_ptr, app::Object * item));
    IL2CPP_REGISTER_METHOD(0x02AD8B00, bool, TryAddWithNoTimeValidation, (app::BlockingCollection_1_System_Object_ * this_ptr, app::Object * item, int32_t milliseconds_timeout, app::CancellationToken cancellation_token));
    IL2CPP_REGISTER_METHODINFO(0x0477B8A8, BlockingCollection_1_System_Object__TryAddWithNoTimeValidation__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02AD9130, bool, TryTake, (app::BlockingCollection_1_System_Object_ * this_ptr, app::Object * * item, int32_t milliseconds_timeout, app::CancellationToken cancellation_token));
    IL2CPP_REGISTER_METHOD(0x02AD91D0, bool, TryTakeWithNoTimeValidation, (app::BlockingCollection_1_System_Object_ * this_ptr, app::Object * * item, int32_t milliseconds_timeout, app::CancellationToken cancellation_token, app::CancellationTokenSource * combined_token_source));
    IL2CPP_REGISTER_METHODINFO(0x04767978, BlockingCollection_1_System_Object__TryTakeWithNoTimeValidation__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02AD96D0, void, CompleteAdding, (app::BlockingCollection_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02AD99D0, void, CancelWaitingConsumers, (app::BlockingCollection_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02AD9A10, void, CancelWaitingProducers, (app::BlockingCollection_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02AD9A50, void, Dispose_1, (app::BlockingCollection_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02AD9B10, void, Dispose_2, (app::BlockingCollection_1_System_Object_ * this_ptr, bool disposing));
    IL2CPP_REGISTER_METHOD(0x02AD9B50, app::Object__Array *, ToArray, (app::BlockingCollection_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02AD9BE0, void, ICollection_CopyTo, (app::BlockingCollection_1_System_Object_ * this_ptr, app::Array * array, int32_t index));
    IL2CPP_REGISTER_METHODINFO(0x04793C30, BlockingCollection_1_System_Object__System_Collections_ICollection_CopyTo__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02AD9E90, app::IEnumerable_1_System_Object_ *, GetConsumingEnumerable_1, (app::BlockingCollection_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02AD9F60, app::IEnumerable_1_System_Object_ *, GetConsumingEnumerable_2, (app::BlockingCollection_1_System_Object_ * this_ptr, app::CancellationToken cancellation_token));
    IL2CPP_REGISTER_METHOD(0x02ADA0A0, app::IEnumerator_1_System_Object_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::BlockingCollection_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02ADA130, app::IEnumerator *, IEnumerable_GetEnumerator, (app::BlockingCollection_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02ADA190, void, ValidateMillisecondsTimeout, (int32_t milliseconds_timeout));
    IL2CPP_REGISTER_METHODINFO(0x04722480, BlockingCollection_1_System_Object__ValidateMillisecondsTimeout__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02ADA2D0, void, CheckDisposed, (app::BlockingCollection_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04799778, BlockingCollection_1_System_Object__CheckDisposed__MethodInfo);
}
