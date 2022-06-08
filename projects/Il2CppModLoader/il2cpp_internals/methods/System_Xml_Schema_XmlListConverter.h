#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::XmlListConverter {
IL2CPP_REGISTER_METHOD(0x0224A020, void, __ctor, (XmlListConverter * __this, XmlBaseConverter * atomicConverter));
IL2CPP_REGISTER_METHOD(0x0224A110, void, __ctor, (XmlListConverter * __this, XmlBaseConverter * atomicConverter, Type * clrTypeDefault));
IL2CPP_REGISTER_METHOD(0x0224A1E0, void, __ctor, (XmlListConverter * __this, XmlSchemaType * schemaType));
IL2CPP_REGISTER_METHOD(0x0224A290, XmlValueConverter *, Create, (XmlValueConverter * atomicConverter));
IL2CPP_REGISTER_METHOD(0x0224A530, Object *, ChangeType, (XmlListConverter * __this, Object * value, Type * destinationType, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x0471C1B8, XmlListConverter_ChangeType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0224A680, Object *, ChangeListType, (XmlListConverter * __this, Object * value, Type * destinationType, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x047088B0, XmlListConverter_ChangeListType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0224B530, bool, IsListType, (XmlListConverter * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x0224B750, IList *, ToList, (XmlListConverter * __this, Object * list, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHOD(0x0224BB80, List_1_System_String_ *, StringAsList, (XmlListConverter * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0224BD00, String *, ListAsString, (XmlListConverter * __this, IEnumerable * list, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHOD(0x0224C070, Exception *, CreateInvalidClrMappingException, (XmlListConverter * __this, Type * sourceType, Type * destinationType));
IL2CPP_REGISTER_METHOD(0x0158A190, Object__Array *, ToArray, (XmlListConverter * __this, Object * list, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x0472DA48, XmlListConverter_ToArray__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01587370, Boolean__Array *, ToArray, (XmlListConverter * __this, Object * list, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x0475B048, XmlListConverter_ToArray_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01587890, Byte__Array *, ToArray, (XmlListConverter * __this, Object * list, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x04797C48, XmlListConverter_ToArray_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0158A190, Byte__Array__Array *, ToArray, (XmlListConverter * __this, Object * list, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x0472D7C0, XmlListConverter_ToArray_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01587DB0, DateTime__Array *, ToArray, (XmlListConverter * __this, Object * list, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x04779438, XmlListConverter_ToArray_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015882D0, DateTimeOffset__Array *, ToArray, (XmlListConverter * __this, Object * list, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x04715318, XmlListConverter_ToArray_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015887F0, Decimal__Array *, ToArray, (XmlListConverter * __this, Object * list, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x047877F8, XmlListConverter_ToArray_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01588D10, Double__Array *, ToArray, (XmlListConverter * __this, Object * list, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x0471C518, XmlListConverter_ToArray_7__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01589230, Int16__Array *, ToArray, (XmlListConverter * __this, Object * list, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x04738FF8, XmlListConverter_ToArray_8__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01589750, Int32__Array *, ToArray, (XmlListConverter * __this, Object * list, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x0471ED28, XmlListConverter_ToArray_9__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01589C70, Int64__Array *, ToArray, (XmlListConverter * __this, Object * list, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x04791A68, XmlListConverter_ToArray_10__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0158A670, SByte__Array *, ToArray, (XmlListConverter * __this, Object * list, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x047160D8, XmlListConverter_ToArray_11__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0158AB90, Single__Array *, ToArray, (XmlListConverter * __this, Object * list, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x0478E9D8, XmlListConverter_ToArray_12__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0158A190, String__Array *, ToArray, (XmlListConverter * __this, Object * list, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x0473F1F8, XmlListConverter_ToArray_13__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0158B0B0, TimeSpan__Array *, ToArray, (XmlListConverter * __this, Object * list, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x04736E68, XmlListConverter_ToArray_14__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0158B5D0, UInt16__Array *, ToArray, (XmlListConverter * __this, Object * list, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x04727FF8, XmlListConverter_ToArray_15__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0158BAF0, UInt32__Array *, ToArray, (XmlListConverter * __this, Object * list, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x0470EA90, XmlListConverter_ToArray_16__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0158C010, UInt64__Array *, ToArray, (XmlListConverter * __this, Object * list, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x04730610, XmlListConverter_ToArray_17__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0158A190, Uri__Array *, ToArray, (XmlListConverter * __this, Object * list, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x0474BE28, XmlListConverter_ToArray_18__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0158A190, XmlAtomicValue__Array *, ToArray, (XmlListConverter * __this, Object * list, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x04786FB0, XmlListConverter_ToArray_19__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0158A190, XmlQualifiedName__Array *, ToArray, (XmlListConverter * __this, Object * list, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x0478B018, XmlListConverter_ToArray_20__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0158A190, XPathItem__Array *, ToArray, (XmlListConverter * __this, Object * list, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x0473E5A0, XmlListConverter_ToArray_21__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0158A190, XPathNavigator__Array *, ToArray, (XmlListConverter * __this, Object * list, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x04799CF8, XmlListConverter_ToArray_22__MethodInfo);
}
