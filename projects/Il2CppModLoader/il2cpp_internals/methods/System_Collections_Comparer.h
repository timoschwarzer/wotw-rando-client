#include <interception_macros.h>

namespace app::methods::System::Collections::Comparer {
IL2CPP_REGISTER_METHOD(0x0063D180, void, __ctor, (Comparer * __this));
IL2CPP_REGISTER_METHOD(0x02020380, void, __ctor, (Comparer * __this, CultureInfo * culture));
IL2CPP_REGISTER_METHODINFO(0x04745FF8, Comparer__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02020450, void, __ctor, (Comparer * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x020205C0, int32_t, Compare, (Comparer * __this, Object * a, Object * b));
IL2CPP_REGISTER_METHODINFO(0x04704B98, Comparer_Compare__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02020750, void, GetObjectData, (Comparer * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0471D0F8, Comparer_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02020820, void, __cctor, ());
}
