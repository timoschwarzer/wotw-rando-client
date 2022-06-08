#include <interception_macros.h>

namespace app::methods::MaterialPropertiesUtility {
IL2CPP_REGISTER_METHOD(0x01382A20, void, ApplyShaderProperty, (OverridableShaderProperty * shaderPropertyFrom, OverridableShaderProperty * shaderPropertyTo));
IL2CPP_REGISTER_METHOD(0x01382A50, void, ApplyTextureProperties, (Dictionary_2_System_String_OverridableTextureProperty_ * texturePropertiesDictionaryFrom, Dictionary_2_System_String_OverridableTextureProperty_ * texturePropertiesDictionaryTo));
IL2CPP_REGISTER_METHOD(0x01382D80, void, ApplyFloatProperties, (Dictionary_2_System_String_OverridableFloatProperty_ * floatPropertiesDictionaryFrom, Dictionary_2_System_String_OverridableFloatProperty_ * floatPropertiesDictionaryTo));
IL2CPP_REGISTER_METHOD(0x013830C0, void, ApplyColorProperties, (Dictionary_2_System_String_OverridableColorProperty_ * colorPropertiesDictionaryFrom, Dictionary_2_System_String_OverridableColorProperty_ * colorPropertiesDictionaryTo));
}
