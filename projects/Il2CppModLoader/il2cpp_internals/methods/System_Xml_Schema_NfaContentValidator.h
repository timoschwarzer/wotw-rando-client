#include <interception_macros.h>

namespace app::methods::System_Xml_Schema::NfaContentValidator {
IL2CPP_REGISTER_METHOD(0x016D0120, void, __ctor, (app::NfaContentValidator * this_ptr, app::BitSet * firstpos, app::BitSet__Array * followpos, app::SymbolsDictionary * symbols, app::Positions * positions, int32_t end_marker_pos, app::XmlSchemaContentType__Enum content_type, bool is_open, bool is_emptiable));
IL2CPP_REGISTER_METHOD(0x016D0210, void, InitValidation, (app::NfaContentValidator * this_ptr, app::ValidationState * context));
IL2CPP_REGISTER_METHOD(0x016D0470, Object *, ValidateElement, (app::NfaContentValidator * this_ptr, app::XmlQualifiedName * name, app::ValidationState * context, app::int32_t * error_code));
IL2CPP_REGISTER_METHOD(0x016D0750, bool, CompleteValidation, (app::NfaContentValidator * this_ptr, app::ValidationState * context));
IL2CPP_REGISTER_METHOD(0x016D0800, ArrayList *, ExpectedElements, (app::NfaContentValidator * this_ptr, app::ValidationState * context, bool is_required_only));
IL2CPP_REGISTER_METHOD(0x016D0AE0, ArrayList *, ExpectedParticles, (app::NfaContentValidator * this_ptr, app::ValidationState * context, bool is_required_only, app::XmlSchemaSet * schema_set));
}
