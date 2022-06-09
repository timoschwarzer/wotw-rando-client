#include <interception_macros.h>

namespace app::methods::System_Net::ConnectionPool {
IL2CPP_REGISTER_METHOD(0x01E99BC0, Mutex *, get_CreationMutex, (app::ConnectionPool * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E99C90, ManualResetEvent *, get_ErrorEvent, (app::ConnectionPool * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E99D60, Semaphore_1 *, get_Semaphore, (app::ConnectionPool * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E99E30, void, __ctor, (app::ConnectionPool * this_ptr, app::ServicePoint * service_point, int32_t max_pool_size, int32_t min_pool_size, int32_t idle_timeout, app::CreateConnectionDelegate * create_connection_callback));
IL2CPP_REGISTER_METHOD(0x01E99FA0, void, Initialize, (app::ConnectionPool * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E9A700, void, QueueRequest, (app::ConnectionPool * this_ptr, app::ConnectionPool_AsyncConnectionPoolRequest * async_request));
IL2CPP_REGISTER_METHOD(0x01E9AA60, void, AsyncThread, (app::ConnectionPool * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0470B638, ConnectionPool_AsyncThread__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FD750, int32_t, get_Count, (app::ConnectionPool * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC00, ServicePoint *, get_ServicePoint, (app::ConnectionPool * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FF8B0, int32_t, get_MaxPoolSize, (app::ConnectionPool * this_ptr));
IL2CPP_REGISTER_METHOD(0x006DC050, int32_t, get_MinPoolSize, (app::ConnectionPool * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E9AEC0, bool, get_ErrorOccurred, (app::ConnectionPool * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E9AED0, void, CleanupCallbackWrapper, (app::TimerThread_Timer * timer, int32_t time_noticed, app::Object * context));
IL2CPP_REGISTER_METHODINFO(0x04746DE8, ConnectionPool_CleanupCallbackWrapper__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E9B0B0, void, ForceCleanup, (app::ConnectionPool * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E9B220, void, CleanupCallback, (app::ConnectionPool * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E9B460, PooledStream *, Create, (app::ConnectionPool * this_ptr, app::CreateConnectionDelegate * create_connection_callback));
IL2CPP_REGISTER_METHODINFO(0x0478A330, ConnectionPool_Create__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E9B6D0, void, Destroy, (app::ConnectionPool * this_ptr, app::PooledStream * pooled_stream));
IL2CPP_REGISTER_METHOD(0x01E9B870, void, CancelErrorCallbackWrapper, (app::TimerThread_Timer * timer, int32_t time_noticed, app::Object * context));
IL2CPP_REGISTER_METHODINFO(0x047376D0, ConnectionPool_CancelErrorCallbackWrapper__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E9B9D0, void, CancelErrorCallback, (app::ConnectionPool * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E9BA30, PooledStream *, GetFromPool, (app::ConnectionPool * this_ptr, app::Object * owning_object));
IL2CPP_REGISTER_METHOD(0x01E9BB90, PooledStream *, Get, (app::ConnectionPool * this_ptr, app::Object * owning_object, int32_t result, app::bool * continue_loop, app::WaitHandle__Array * * wait_handles));
IL2CPP_REGISTER_METHODINFO(0x0474FAA0, ConnectionPool_Get__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E9BF00, void, Abort, (app::ConnectionPool * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E9C110, PooledStream *, GetConnection, (app::ConnectionPool * this_ptr, app::Object * owning_object, app::GeneralAsyncDelegate * async_callback, int32_t creation_timeout));
IL2CPP_REGISTER_METHODINFO(0x0478D718, ConnectionPool_GetConnection__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E9C470, void, PutConnection_1, (app::ConnectionPool * this_ptr, app::PooledStream * pooled_stream, app::Object * owning_object, int32_t creation_timeout));
IL2CPP_REGISTER_METHOD(0x01E9C490, void, PutConnection_2, (app::ConnectionPool * this_ptr, app::PooledStream * pooled_stream, app::Object * owning_object, int32_t creation_timeout, bool can_reuse));
IL2CPP_REGISTER_METHODINFO(0x0470E788, ConnectionPool_PutConnection_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E9C840, void, PutNew, (app::ConnectionPool * this_ptr, app::PooledStream * pooled_stream));
IL2CPP_REGISTER_METHOD(0x01E9C8C0, bool, ReclaimEmancipatedObjects, (app::ConnectionPool * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E9CBC0, PooledStream *, UserCreateRequest, (app::ConnectionPool * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E9CC20, void, __cctor, ());
}
