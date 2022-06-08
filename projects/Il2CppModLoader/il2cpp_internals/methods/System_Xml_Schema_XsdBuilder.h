#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::XsdBuilder {
IL2CPP_REGISTER_METHOD(0x01938610, void, __ctor, (XsdBuilder * __this, XmlReader * reader, XmlNamespaceManager * curmgr, XmlSchema * schema, XmlNameTable * nameTable, SchemaNames * schemaNames, ValidationEventHandler * eventhandler));
IL2CPP_REGISTER_METHOD(0x01938B50, bool, ProcessElement, (XsdBuilder * __this, String * prefix, String * name, String * ns));
IL2CPP_REGISTER_METHOD(0x01938E40, void, ProcessAttribute, (XsdBuilder * __this, String * prefix, String * name, String * ns, String * value));
IL2CPP_REGISTER_METHOD(0x01939760, bool, IsContentParsed, (XsdBuilder * __this));
IL2CPP_REGISTER_METHOD(0x00FAE9B0, void, ProcessMarkup, (XsdBuilder * __this, XmlNode__Array * markup));
IL2CPP_REGISTER_METHOD(0x01939780, void, ProcessCData, (XsdBuilder * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01939820, void, StartChildren, (XsdBuilder * __this));
IL2CPP_REGISTER_METHOD(0x01939A20, void, EndChildren, (XsdBuilder * __this));
IL2CPP_REGISTER_METHOD(0x01939A70, void, Push, (XsdBuilder * __this));
IL2CPP_REGISTER_METHOD(0x01939D50, void, Pop, (XsdBuilder * __this));
IL2CPP_REGISTER_METHOD(0x01939E80, SchemaNames_Token__Enum, get_CurrentElement, (XsdBuilder * __this));
IL2CPP_REGISTER_METHOD(0x01939EA0, SchemaNames_Token__Enum, get_ParentElement, (XsdBuilder * __this));
IL2CPP_REGISTER_METHOD(0x01939F60, XmlSchemaObject *, get_ParentContainer, (XsdBuilder * __this));
IL2CPP_REGISTER_METHOD(0x0193A050, XmlSchemaObject *, GetContainer, (XsdBuilder * __this, XsdBuilder_State__Enum state));
IL2CPP_REGISTER_METHOD(0x0193A2A0, void, SetContainer, (XsdBuilder * __this, XsdBuilder_State__Enum state, Object * container));
IL2CPP_REGISTER_METHOD(0x0193A8B0, void, BuildAnnotated_Id, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0477D8F0, XsdBuilder_BuildAnnotated_Id__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193A8F0, void, BuildSchema_AttributeFormDefault, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x047357C8, XsdBuilder_BuildSchema_AttributeFormDefault__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193A9F0, void, BuildSchema_ElementFormDefault, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04700CD8, XsdBuilder_BuildSchema_ElementFormDefault__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193AAF0, void, BuildSchema_TargetNamespace, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0478ADD8, XsdBuilder_BuildSchema_TargetNamespace__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193AB20, void, BuildSchema_Version, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0478DC30, XsdBuilder_BuildSchema_Version__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193AB50, void, BuildSchema_FinalDefault, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0471A518, XsdBuilder_BuildSchema_FinalDefault__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193AC10, void, BuildSchema_BlockDefault, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04704FB0, XsdBuilder_BuildSchema_BlockDefault__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193ACD0, void, InitSchema, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0477ABF8, XsdBuilder_InitSchema__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193ACF0, void, InitInclude, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04739B90, XsdBuilder_InitInclude__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193AE90, void, BuildInclude_SchemaLocation, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04793298, XsdBuilder_BuildInclude_SchemaLocation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193AEC0, void, InitImport, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0472F2D0, XsdBuilder_InitImport__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193B060, void, BuildImport_Namespace, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0477D388, XsdBuilder_BuildImport_Namespace__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193B090, void, BuildImport_SchemaLocation, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04779F90, XsdBuilder_BuildImport_SchemaLocation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193B0C0, void, InitRedefine, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04709640, XsdBuilder_InitRedefine__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193B260, void, BuildRedefine_SchemaLocation, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04738BC8, XsdBuilder_BuildRedefine_SchemaLocation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193B290, void, EndRedefine, (XsdBuilder * builder));
IL2CPP_REGISTER_METHODINFO(0x047306C8, XsdBuilder_EndRedefine__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193B2B0, void, InitAttribute, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04730768, XsdBuilder_InitAttribute__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193B460, void, BuildAttribute_Default, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04771E58, XsdBuilder_BuildAttribute_Default__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193B490, void, BuildAttribute_Fixed, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0474B288, XsdBuilder_BuildAttribute_Fixed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193B4C0, void, BuildAttribute_Form, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04739668, XsdBuilder_BuildAttribute_Form__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193B5C0, void, BuildAttribute_Use, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0476CD50, XsdBuilder_BuildAttribute_Use__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193B6C0, void, BuildAttribute_Ref, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04748AE8, XsdBuilder_BuildAttribute_Ref__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193B790, void, BuildAttribute_Name, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0472DA58, XsdBuilder_BuildAttribute_Name__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193B7C0, void, BuildAttribute_Type, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04710008, XsdBuilder_BuildAttribute_Type__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193B890, void, InitElement, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04768F60, XsdBuilder_InitElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193BAE0, void, BuildElement_Abstract, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0477F230, XsdBuilder_BuildElement_Abstract__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193BBA0, void, BuildElement_Block, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0478A4D0, XsdBuilder_BuildElement_Block__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193BC60, void, BuildElement_Default, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04741A48, XsdBuilder_BuildElement_Default__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193BC90, void, BuildElement_Form, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0476A0B8, XsdBuilder_BuildElement_Form__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193BD90, void, BuildElement_SubstitutionGroup, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04764798, XsdBuilder_BuildElement_SubstitutionGroup__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193BE50, void, BuildElement_Final, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04736ED8, XsdBuilder_BuildElement_Final__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193BF10, void, BuildElement_Fixed, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0477DEA0, XsdBuilder_BuildElement_Fixed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193BF40, void, BuildElement_MaxOccurs, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04709178, XsdBuilder_BuildElement_MaxOccurs__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193BF70, void, BuildElement_MinOccurs, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0477F928, XsdBuilder_BuildElement_MinOccurs__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193BFA0, void, BuildElement_Name, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04725B90, XsdBuilder_BuildElement_Name__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193BFD0, void, BuildElement_Nillable, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04765660, XsdBuilder_BuildElement_Nillable__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193C090, void, BuildElement_Ref, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04759DB0, XsdBuilder_BuildElement_Ref__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193C150, void, BuildElement_Type, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04757408, XsdBuilder_BuildElement_Type__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193C210, void, InitSimpleType, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04728348, XsdBuilder_InitSimpleType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193C740, void, BuildSimpleType_Name, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04757400, XsdBuilder_BuildSimpleType_Name__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193C770, void, BuildSimpleType_Final, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0474FE48, XsdBuilder_BuildSimpleType_Final__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193C830, void, InitSimpleTypeUnion, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04722FE8, XsdBuilder_InitSimpleTypeUnion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193CAF0, void, BuildSimpleTypeUnion_MemberTypes, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04746F68, XsdBuilder_BuildSimpleTypeUnion_MemberTypes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193CD00, void, InitSimpleTypeList, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0473C168, XsdBuilder_InitSimpleTypeList__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193CEB0, void, BuildSimpleTypeList_ItemType, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x047464F0, XsdBuilder_BuildSimpleTypeList_ItemType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193CF80, void, InitSimpleTypeRestriction, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0477AED8, XsdBuilder_InitSimpleTypeRestriction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193D130, void, BuildSimpleTypeRestriction_Base, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0473ECA8, XsdBuilder_BuildSimpleTypeRestriction_Base__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193D200, void, InitComplexType, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04780DD8, XsdBuilder_InitComplexType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193D4A0, void, BuildComplexType_Abstract, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04716660, XsdBuilder_BuildComplexType_Abstract__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193D580, void, BuildComplexType_Block, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04777D90, XsdBuilder_BuildComplexType_Block__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193D640, void, BuildComplexType_Final, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x047270D0, XsdBuilder_BuildComplexType_Final__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193D700, void, BuildComplexType_Mixed, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x047417C0, XsdBuilder_BuildComplexType_Mixed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193D7D0, void, BuildComplexType_Name, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04775AA0, XsdBuilder_BuildComplexType_Name__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193D800, void, InitComplexContent, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04771BA0, XsdBuilder_InitComplexContent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193DA20, void, BuildComplexContent_Mixed, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0472AD60, XsdBuilder_BuildComplexContent_Mixed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193DAE0, void, InitComplexContentExtension, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0471A608, XsdBuilder_InitComplexContentExtension__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193DE00, void, BuildComplexContentExtension_Base, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0475F348, XsdBuilder_BuildComplexContentExtension_Base__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193DED0, void, InitComplexContentRestriction, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x047029F8, XsdBuilder_InitComplexContentRestriction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193E1A0, void, BuildComplexContentRestriction_Base, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04705288, XsdBuilder_BuildComplexContentRestriction_Base__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193E270, void, InitSimpleContent, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0471F298, XsdBuilder_InitSimpleContent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193E490, void, InitSimpleContentExtension, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0476FBA0, XsdBuilder_InitSimpleContentExtension__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193E660, void, BuildSimpleContentExtension_Base, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04761750, XsdBuilder_BuildSimpleContentExtension_Base__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193E730, void, InitSimpleContentRestriction, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0475F850, XsdBuilder_InitSimpleContentRestriction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193E900, void, BuildSimpleContentRestriction_Base, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04772EC0, XsdBuilder_BuildSimpleContentRestriction_Base__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193E9D0, void, InitAttributeGroup, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04755F28, XsdBuilder_InitAttributeGroup__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193EBA0, void, BuildAttributeGroup_Name, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0474D348, XsdBuilder_BuildAttributeGroup_Name__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193EBD0, void, InitAttributeGroupRef, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0474ADA8, XsdBuilder_InitAttributeGroupRef__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193EDC0, void, BuildAttributeGroupRef_Ref, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04778EA8, XsdBuilder_BuildAttributeGroupRef_Ref__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193EE90, void, InitAnyAttribute, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04759D78, XsdBuilder_InitAnyAttribute__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193F280, void, BuildAnyAttribute_Namespace, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0477F648, XsdBuilder_BuildAnyAttribute_Namespace__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193F2B0, void, BuildAnyAttribute_ProcessContents, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04760A50, XsdBuilder_BuildAnyAttribute_ProcessContents__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193F3B0, void, InitGroup, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04760318, XsdBuilder_InitGroup__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193F600, void, BuildGroup_Name, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04739578, XsdBuilder_BuildGroup_Name__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193F630, void, InitGroupRef, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0473EA68, XsdBuilder_InitGroupRef__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193F850, void, BuildParticle_MaxOccurs, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0470ADD8, XsdBuilder_BuildParticle_MaxOccurs__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193F880, void, BuildParticle_MinOccurs, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0472ECF0, XsdBuilder_BuildParticle_MinOccurs__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193F8B0, void, BuildGroupRef_Ref, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04799090, XsdBuilder_BuildGroupRef_Ref__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193F980, void, InitAll, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04787CE0, XsdBuilder_InitAll__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193FAF0, void, InitChoice, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0472F6E8, XsdBuilder_InitChoice__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193FC60, void, InitSequence, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04752250, XsdBuilder_InitSequence__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193FDD0, void, InitAny, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04751600, XsdBuilder_InitAny__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193FF40, void, BuildAny_Namespace, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0473A6B8, XsdBuilder_BuildAny_Namespace__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0193FF70, void, BuildAny_ProcessContents, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04749CB8, XsdBuilder_BuildAny_ProcessContents__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01940070, void, InitNotation, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0470EB38, XsdBuilder_InitNotation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01940280, void, BuildNotation_Name, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04744A50, XsdBuilder_BuildNotation_Name__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019402B0, void, BuildNotation_Public, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x047423E0, XsdBuilder_BuildNotation_Public__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019402E0, void, BuildNotation_System, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04793618, XsdBuilder_BuildNotation_System__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01940310, void, InitFacet, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04736BA0, XsdBuilder_InitFacet__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01940E30, void, BuildFacet_Fixed, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04780040, XsdBuilder_BuildFacet_Fixed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01940F00, void, BuildFacet_Value, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04703E80, XsdBuilder_BuildFacet_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01940F30, void, InitIdentityConstraint, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04750B50, XsdBuilder_InitIdentityConstraint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01941300, void, BuildIdentityConstraint_Name, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04740928, XsdBuilder_BuildIdentityConstraint_Name__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01941330, void, BuildIdentityConstraint_Refer, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04730928, XsdBuilder_BuildIdentityConstraint_Refer__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019415A0, void, InitSelector, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04746690, XsdBuilder_InitSelector__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01941750, void, BuildSelector_XPath, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04782560, XsdBuilder_BuildSelector_XPath__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01941780, void, InitField, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0477D4D8, XsdBuilder_InitField__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01941750, void, BuildField_XPath, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04782B30, XsdBuilder_BuildField_XPath__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01941940, void, InitAnnotation, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0470BD10, XsdBuilder_InitAnnotation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01941C20, void, InitAppinfo, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04707D28, XsdBuilder_InitAppinfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01941DB0, void, BuildAppinfo_Source, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04762838, XsdBuilder_BuildAppinfo_Source__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01941E70, void, EndAppinfo, (XsdBuilder * builder));
IL2CPP_REGISTER_METHODINFO(0x04753930, XsdBuilder_EndAppinfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01941EB0, void, InitDocumentation, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0475F770, XsdBuilder_InitDocumentation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01942040, void, BuildDocumentation_Source, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x0470D940, XsdBuilder_BuildDocumentation_Source__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01942100, void, BuildDocumentation_XmlLang, (XsdBuilder * builder, String * value));
IL2CPP_REGISTER_METHODINFO(0x04778A78, XsdBuilder_BuildDocumentation_XmlLang__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01942360, void, EndDocumentation, (XsdBuilder * builder));
IL2CPP_REGISTER_METHODINFO(0x0478BD78, XsdBuilder_EndDocumentation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019423A0, void, AddAttribute, (XsdBuilder * __this, XmlSchemaObject * value));
IL2CPP_REGISTER_METHOD(0x019426E0, void, AddParticle, (XsdBuilder * __this, XmlSchemaParticle * particle));
IL2CPP_REGISTER_METHOD(0x01942AC0, bool, GetNextState, (XsdBuilder * __this, XmlQualifiedName * qname));
IL2CPP_REGISTER_METHOD(0x01942D50, bool, IsSkipableElement, (XsdBuilder * __this, XmlQualifiedName * qname));
IL2CPP_REGISTER_METHOD(0x01942D90, void, SetMinOccurs, (XsdBuilder * __this, XmlSchemaParticle * particle, String * value));
IL2CPP_REGISTER_METHOD(0x01942E60, void, SetMaxOccurs, (XsdBuilder * __this, XmlSchemaParticle * particle, String * value));
IL2CPP_REGISTER_METHOD(0x01942F30, bool, ParseBoolean, (XsdBuilder * __this, String * value, String * attributeName));
IL2CPP_REGISTER_METHOD(0x01943020, int32_t, ParseEnum, (XsdBuilder * __this, String * value, String * attributeName, String__Array * values));
IL2CPP_REGISTER_METHOD(0x01943180, XmlQualifiedName *, ParseQName, (XsdBuilder * __this, String * value, String * attributeName));
IL2CPP_REGISTER_METHOD(0x019432C0, int32_t, ParseBlockFinalEnum, (XsdBuilder * __this, String * value, String * attributeName));
IL2CPP_REGISTER_METHOD(0x004C50A0, String *, ParseUriReference, (String * s));
IL2CPP_REGISTER_METHOD(0x01943650, void, SendValidationEvent, (XsdBuilder * __this, String * code, String * arg0, String * arg1, String * arg2));
IL2CPP_REGISTER_METHOD(0x01943960, void, SendValidationEvent, (XsdBuilder * __this, String * code, String * msg));
IL2CPP_REGISTER_METHOD(0x01943B60, void, SendValidationEvent, (XsdBuilder * __this, String * code, String__Array * args, XmlSeverityType__Enum severity));
IL2CPP_REGISTER_METHOD(0x01943D70, void, SendValidationEvent, (XsdBuilder * __this, XmlSchemaException * e, XmlSeverityType__Enum severity));
IL2CPP_REGISTER_METHODINFO(0x04777058, XsdBuilder_SendValidationEvent_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01943F40, void, SendValidationEvent, (XsdBuilder * __this, XmlSchemaException * e));
IL2CPP_REGISTER_METHOD(0x01943F50, void, RecordPosition, (XsdBuilder * __this));
IL2CPP_REGISTER_METHOD(0x01944030, void, __cctor, ());
}
