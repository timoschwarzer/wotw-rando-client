#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Collections::Generic::Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478D620, Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem_ * this_ptr, app::SurfaceMaterialType__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x04758C28, Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem__ContainsKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem_ * this_ptr, app::SurfaceMaterialType__Enum key, app::ParticleSystem * value))
    IL2CPP_REGISTER_METHODINFO(0x04741028, Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C35530, app::ParticleSystem *, get_Item, (app::Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem_ * this_ptr, app::SurfaceMaterialType__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x0473C590, Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_SurfaceMaterialType_UnityEngine_ParticleSystem_, GetEnumerator, (app::Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04742C38, Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04749608, Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem__Clear__MethodInfo)
}
