#include <interception_macros.h>

namespace app::methods::System::Collections::Concurrent::BlockingCollection_1_PlayFab::IPlayFabEmitEventRequest_ {
IL2CPP_REGISTER_METHOD(0x02AD9130, bool, TryTake, (BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest_ * __this, IPlayFabEmitEventRequest * * item, int32_t millisecondsTimeout, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHODINFO(0x04772148, BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest__TryTake__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AD8230, bool, get_IsCompleted, (BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest_ * __this));
IL2CPP_REGISTER_METHODINFO(0x0474E660, BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest__get_IsCompleted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AD96D0, void, CompleteAdding, (BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04705C40, BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest__CompleteAdding__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AD8AD0, bool, TryAdd, (BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest_ * __this, IPlayFabEmitEventRequest * item));
IL2CPP_REGISTER_METHODINFO(0x0474A808, BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest__TryAdd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AD8390, void, __ctor, (BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest_ * __this, int32_t boundedCapacity));
IL2CPP_REGISTER_METHODINFO(0x04780FB8, BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest___ctor__MethodInfo);
}
