#include <interception_macros.h>

namespace app::methods::Mono_Xml::SmallXmlParser_AttrListImpl {
IL2CPP_REGISTER_METHOD(0x0228A230, int32_t, get_Length, (app::SmallXmlParser_AttrListImpl * this_ptr));
IL2CPP_REGISTER_METHOD(0x0228A2C0, String *, GetName, (app::SmallXmlParser_AttrListImpl * this_ptr, int32_t i));
IL2CPP_REGISTER_METHOD(0x0228A370, String *, GetValue_1, (app::SmallXmlParser_AttrListImpl * this_ptr, int32_t i));
IL2CPP_REGISTER_METHOD(0x0228A420, String *, GetValue_2, (app::SmallXmlParser_AttrListImpl * this_ptr, app::String * name));
IL2CPP_REGISTER_METHOD(0x0228A570, String__Array *, get_Names, (app::SmallXmlParser_AttrListImpl * this_ptr));
IL2CPP_REGISTER_METHOD(0x0228A600, String__Array *, get_Values, (app::SmallXmlParser_AttrListImpl * this_ptr));
IL2CPP_REGISTER_METHOD(0x0228A690, void, Clear, (app::SmallXmlParser_AttrListImpl * this_ptr));
IL2CPP_REGISTER_METHOD(0x0228A770, void, Add, (app::SmallXmlParser_AttrListImpl * this_ptr, app::String * name, app::String * value));
IL2CPP_REGISTER_METHOD(0x0228A840, void, __ctor, (app::SmallXmlParser_AttrListImpl * this_ptr));
}
