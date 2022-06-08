#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::FacetsChecker_FacetsCompiler {
IL2CPP_REGISTER_METHOD(0x001E6F60, void, __ctor, (FacetsChecker_FacetsCompiler__Boxed * __this, DatatypeImplementation * baseDatatype, RestrictionFacets * restriction));
IL2CPP_REGISTER_METHOD(0x001E6F70, void, CompileLengthFacet, (FacetsChecker_FacetsCompiler__Boxed * __this, XmlSchemaFacet * facet));
IL2CPP_REGISTER_METHODINFO(0x0472F820, FacetsChecker_FacetsCompiler_CompileLengthFacet__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E6F80, void, CompileMinLengthFacet, (FacetsChecker_FacetsCompiler__Boxed * __this, XmlSchemaFacet * facet));
IL2CPP_REGISTER_METHODINFO(0x047085B8, FacetsChecker_FacetsCompiler_CompileMinLengthFacet__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E6F90, void, CompileMaxLengthFacet, (FacetsChecker_FacetsCompiler__Boxed * __this, XmlSchemaFacet * facet));
IL2CPP_REGISTER_METHODINFO(0x0477E2E8, FacetsChecker_FacetsCompiler_CompileMaxLengthFacet__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E6FA0, void, CompilePatternFacet, (FacetsChecker_FacetsCompiler__Boxed * __this, XmlSchemaPatternFacet * facet));
IL2CPP_REGISTER_METHOD(0x001E6FB0, void, CompileEnumerationFacet, (FacetsChecker_FacetsCompiler__Boxed * __this, XmlSchemaFacet * facet, IXmlNamespaceResolver * nsmgr, XmlNameTable * nameTable));
IL2CPP_REGISTER_METHOD(0x001E6FC0, void, CompileWhitespaceFacet, (FacetsChecker_FacetsCompiler__Boxed * __this, XmlSchemaFacet * facet));
IL2CPP_REGISTER_METHODINFO(0x04751E00, FacetsChecker_FacetsCompiler_CompileWhitespaceFacet__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E6FD0, void, CompileMaxInclusiveFacet, (FacetsChecker_FacetsCompiler__Boxed * __this, XmlSchemaFacet * facet));
IL2CPP_REGISTER_METHODINFO(0x04768328, FacetsChecker_FacetsCompiler_CompileMaxInclusiveFacet__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E6FE0, void, CompileMaxExclusiveFacet, (FacetsChecker_FacetsCompiler__Boxed * __this, XmlSchemaFacet * facet));
IL2CPP_REGISTER_METHODINFO(0x0472BDF8, FacetsChecker_FacetsCompiler_CompileMaxExclusiveFacet__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E6FF0, void, CompileMinInclusiveFacet, (FacetsChecker_FacetsCompiler__Boxed * __this, XmlSchemaFacet * facet));
IL2CPP_REGISTER_METHODINFO(0x0470CAF0, FacetsChecker_FacetsCompiler_CompileMinInclusiveFacet__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E7000, void, CompileMinExclusiveFacet, (FacetsChecker_FacetsCompiler__Boxed * __this, XmlSchemaFacet * facet));
IL2CPP_REGISTER_METHODINFO(0x04703210, FacetsChecker_FacetsCompiler_CompileMinExclusiveFacet__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E7010, void, CompileTotalDigitsFacet, (FacetsChecker_FacetsCompiler__Boxed * __this, XmlSchemaFacet * facet));
IL2CPP_REGISTER_METHODINFO(0x047201C8, FacetsChecker_FacetsCompiler_CompileTotalDigitsFacet__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E7020, void, CompileFractionDigitsFacet, (FacetsChecker_FacetsCompiler__Boxed * __this, XmlSchemaFacet * facet));
IL2CPP_REGISTER_METHODINFO(0x04736A88, FacetsChecker_FacetsCompiler_CompileFractionDigitsFacet__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E7030, void, FinishFacetCompile, (FacetsChecker_FacetsCompiler__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x04760090, FacetsChecker_FacetsCompiler_FinishFacetCompile__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E7040, void, CheckValue, (FacetsChecker_FacetsCompiler__Boxed * __this, Object * value, XmlSchemaFacet * facet));
IL2CPP_REGISTER_METHODINFO(0x04734728, FacetsChecker_FacetsCompiler_CheckValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E7050, void, CompileFacetCombinations, (FacetsChecker_FacetsCompiler__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x0473F470, FacetsChecker_FacetsCompiler_CompileFacetCombinations__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E7060, void, CopyFacetsFromBaseType, (FacetsChecker_FacetsCompiler__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E7070, Object *, ParseFacetValue, (FacetsChecker_FacetsCompiler__Boxed * __this, XmlSchemaDatatype * datatype, XmlSchemaFacet * facet, String * code, IXmlNamespaceResolver * nsmgr, XmlNameTable * nameTable));
IL2CPP_REGISTER_METHODINFO(0x04710428, FacetsChecker_FacetsCompiler_ParseFacetValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0236E690, String *, Preprocess, (String * pattern));
IL2CPP_REGISTER_METHOD(0x001E7080, void, CheckProhibitedFlag, (FacetsChecker_FacetsCompiler__Boxed * __this, XmlSchemaFacet * facet, RestrictionFlags__Enum flag, String * errorCode));
IL2CPP_REGISTER_METHODINFO(0x047160F0, FacetsChecker_FacetsCompiler_CheckProhibitedFlag__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E7090, void, CheckDupFlag, (FacetsChecker_FacetsCompiler__Boxed * __this, XmlSchemaFacet * facet, RestrictionFlags__Enum flag, String * errorCode));
IL2CPP_REGISTER_METHODINFO(0x0472C5C0, FacetsChecker_FacetsCompiler_CheckDupFlag__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E70A0, void, SetFlag, (FacetsChecker_FacetsCompiler__Boxed * __this, XmlSchemaFacet * facet, RestrictionFlags__Enum flag));
IL2CPP_REGISTER_METHOD(0x001E7110, void, SetFlag, (FacetsChecker_FacetsCompiler__Boxed * __this, RestrictionFlags__Enum flag));
IL2CPP_REGISTER_METHOD(0x0236EC50, void, __cctor, ());
}
