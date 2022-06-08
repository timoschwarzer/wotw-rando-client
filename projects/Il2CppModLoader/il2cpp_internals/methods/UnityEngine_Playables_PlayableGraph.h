#include <interception_macros.h>

namespace app::methods::UnityEngine::Playables::PlayableGraph {
IL2CPP_REGISTER_METHOD(0x02964A30, PlayableGraph, Create, ());
IL2CPP_REGISTER_METHOD(0x02964AA0, PlayableGraph, Create, (String * name));
IL2CPP_REGISTER_METHOD(0x00216700, void, Destroy, (PlayableGraph__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00216760, bool, IsValid, (PlayableGraph__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002167C0, void, EvaluateAnimation, (PlayableGraph__Boxed * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x002167D0, void, SetTimeUpdateMode, (PlayableGraph__Boxed * __this, DirectorUpdateMode__Enum value));
IL2CPP_REGISTER_METHOD(0x00216830, int32_t, GetPlayableCount, (PlayableGraph__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00216890, int32_t, GetOutputCount, (PlayableGraph__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002168F0, void, DestroyOutputInternal, (PlayableGraph__Boxed * __this, PlayableOutputHandle handle));
IL2CPP_REGISTER_METHOD(0x00216950, bool, ConnectInternal, (PlayableGraph__Boxed * __this, PlayableHandle source, int32_t sourceOutputPort, PlayableHandle destination, int32_t destinationInputPort));
IL2CPP_REGISTER_METHOD(0x002169E0, void, DisconnectInternal, (PlayableGraph__Boxed * __this, PlayableHandle playable, int32_t inputPort));
IL2CPP_REGISTER_METHOD(0x00216A50, void, DestroyPlayableInternal, (PlayableGraph__Boxed * __this, PlayableHandle playable));
IL2CPP_REGISTER_METHOD(0x02964C20, void, Create_Injected, (String * name, PlayableGraph * ret));
IL2CPP_REGISTER_METHOD(0x02964C80, void, Destroy_Injected, (PlayableGraph * _unity_self));
IL2CPP_REGISTER_METHOD(0x02964B20, bool, IsValid_Injected, (PlayableGraph * _unity_self));
IL2CPP_REGISTER_METHOD(0x02964B70, void, EvaluateAnimation_Injected, (PlayableGraph * _unity_self, float deltaTime));
IL2CPP_REGISTER_METHOD(0x02964CD0, void, SetTimeUpdateMode_Injected, (PlayableGraph * _unity_self, DirectorUpdateMode__Enum value));
IL2CPP_REGISTER_METHOD(0x02964BD0, int32_t, GetPlayableCount_Injected, (PlayableGraph * _unity_self));
IL2CPP_REGISTER_METHOD(0x02964D30, int32_t, GetOutputCount_Injected, (PlayableGraph * _unity_self));
IL2CPP_REGISTER_METHOD(0x02964D80, void, DestroyOutputInternal_Injected, (PlayableGraph * _unity_self, PlayableOutputHandle * handle));
IL2CPP_REGISTER_METHOD(0x02964DE0, bool, ConnectInternal_Injected, (PlayableGraph * _unity_self, PlayableHandle * source, int32_t sourceOutputPort, PlayableHandle * destination, int32_t destinationInputPort));
IL2CPP_REGISTER_METHOD(0x02964E70, void, DisconnectInternal_Injected, (PlayableGraph * _unity_self, PlayableHandle * playable, int32_t inputPort));
IL2CPP_REGISTER_METHOD(0x02964EE0, void, DestroyPlayableInternal_Injected, (PlayableGraph * _unity_self, PlayableHandle * playable));
IL2CPP_REGISTER_METHOD(0x0012CDE0, bool, Connect, (PlayableGraph__Boxed * __this, Playable source, int32_t sourceOutputPort, AnimationLayerMixerPlayable destination, int32_t destinationInputPort));
IL2CPP_REGISTER_METHODINFO(0x04703178, PlayableGraph_Connect__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012EB80, void, DestroyPlayable, (PlayableGraph__Boxed * __this, AnimationLayerMixerPlayable playable));
IL2CPP_REGISTER_METHODINFO(0x0477FD08, PlayableGraph_DestroyPlayable__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012EB80, void, DestroyPlayable, (PlayableGraph__Boxed * __this, Playable playable));
IL2CPP_REGISTER_METHODINFO(0x04796BD8, PlayableGraph_DestroyPlayable_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012EB20, void, DestroyOutput, (PlayableGraph__Boxed * __this, AnimationPlayableOutput output));
IL2CPP_REGISTER_METHODINFO(0x04785B18, PlayableGraph_DestroyOutput__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012EBE0, void, Disconnect, (PlayableGraph__Boxed * __this, AnimationLayerMixerPlayable input, int32_t inputPort));
IL2CPP_REGISTER_METHODINFO(0x04785F50, PlayableGraph_Disconnect__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012EBE0, void, Disconnect, (PlayableGraph__Boxed * __this, Playable input, int32_t inputPort));
IL2CPP_REGISTER_METHODINFO(0x047353A0, PlayableGraph_Disconnect_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012EBE0, void, Disconnect, (PlayableGraph__Boxed * __this, AnimationMixerPlayable input, int32_t inputPort));
IL2CPP_REGISTER_METHODINFO(0x0471AC10, PlayableGraph_Disconnect_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012EB80, void, DestroyPlayable, (PlayableGraph__Boxed * __this, AnimationMixerPlayable playable));
IL2CPP_REGISTER_METHODINFO(0x04706D98, PlayableGraph_DestroyPlayable_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012EB80, void, DestroyPlayable, (PlayableGraph__Boxed * __this, AnimationClipPlayable playable));
IL2CPP_REGISTER_METHODINFO(0x047434C0, PlayableGraph_DestroyPlayable_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012CDE0, bool, Connect, (PlayableGraph__Boxed * __this, Playable source, int32_t sourceOutputPort, AnimationMixerPlayable destination, int32_t destinationInputPort));
IL2CPP_REGISTER_METHOD(0x0012CDE0, bool, Connect, (PlayableGraph__Boxed * __this, Playable source, int32_t sourceOutputPort, Playable destination, int32_t destinationInputPort));
}
