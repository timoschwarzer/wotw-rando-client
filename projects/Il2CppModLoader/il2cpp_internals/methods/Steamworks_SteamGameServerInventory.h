#include <interception_macros.h>

namespace app::methods::Steamworks::SteamGameServerInventory {
IL2CPP_REGISTER_METHOD(0x027FAAF0, EResult__Enum, GetResultStatus, (SteamInventoryResult_t resultHandle));
IL2CPP_REGISTER_METHOD(0x027FAB20, bool, GetResultItems, (SteamInventoryResult_t resultHandle, SteamItemDetails_t__Array * pOutItemsArray, uint32_t * punOutItemsArraySize));
IL2CPP_REGISTER_METHODINFO(0x0476F668, SteamGameServerInventory_GetResultItems__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027FAC20, bool, GetResultItemProperty, (SteamInventoryResult_t resultHandle, uint32_t unItemIndex, String * pchPropertyName, String * * pchValueBuffer, uint32_t * punValueBufferSizeOut));
IL2CPP_REGISTER_METHOD(0x027FAED0, uint32_t, GetResultTimestamp, (SteamInventoryResult_t resultHandle));
IL2CPP_REGISTER_METHOD(0x027FAF00, bool, CheckResultSteamID, (SteamInventoryResult_t resultHandle, CSteamID steamIDExpected));
IL2CPP_REGISTER_METHOD(0x027FAF40, void, DestroyResult, (SteamInventoryResult_t resultHandle));
IL2CPP_REGISTER_METHOD(0x027FAF70, bool, GetAllItems, (SteamInventoryResult_t * pResultHandle));
IL2CPP_REGISTER_METHOD(0x027FAFA0, bool, GetItemsByID, (SteamInventoryResult_t * pResultHandle, SteamItemInstanceID_t__Array * pInstanceIDs, uint32_t unCountInstanceIDs));
IL2CPP_REGISTER_METHOD(0x027FAFF0, bool, SerializeResult, (SteamInventoryResult_t resultHandle, Byte__Array * pOutBuffer, uint32_t * punOutBufferSize));
IL2CPP_REGISTER_METHOD(0x027FB040, bool, DeserializeResult, (SteamInventoryResult_t * pOutResultHandle, Byte__Array * pBuffer, uint32_t unBufferSize, bool bRESERVED_MUST_BE_FALSE));
IL2CPP_REGISTER_METHOD(0x027FB0B0, bool, GenerateItems, (SteamInventoryResult_t * pResultHandle, SteamItemDef_t__Array * pArrayItemDefs, UInt32__Array * punArrayQuantity, uint32_t unArrayLength));
IL2CPP_REGISTER_METHOD(0x027FB120, bool, GrantPromoItems, (SteamInventoryResult_t * pResultHandle));
IL2CPP_REGISTER_METHOD(0x027FB150, bool, AddPromoItem, (SteamInventoryResult_t * pResultHandle, SteamItemDef_t itemDef));
IL2CPP_REGISTER_METHOD(0x027FB190, bool, AddPromoItems, (SteamInventoryResult_t * pResultHandle, SteamItemDef_t__Array * pArrayItemDefs, uint32_t unArrayLength));
IL2CPP_REGISTER_METHOD(0x027FB1E0, bool, ConsumeItem, (SteamInventoryResult_t * pResultHandle, SteamItemInstanceID_t itemConsume, uint32_t unQuantity));
IL2CPP_REGISTER_METHOD(0x027FB230, bool, ExchangeItems, (SteamInventoryResult_t * pResultHandle, SteamItemDef_t__Array * pArrayGenerate, UInt32__Array * punArrayGenerateQuantity, uint32_t unArrayGenerateLength, SteamItemInstanceID_t__Array * pArrayDestroy, UInt32__Array * punArrayDestroyQuantity, uint32_t unArrayDestroyLength));
IL2CPP_REGISTER_METHOD(0x027FB2C0, bool, TransferItemQuantity, (SteamInventoryResult_t * pResultHandle, SteamItemInstanceID_t itemIdSource, uint32_t unQuantity, SteamItemInstanceID_t itemIdDest));
IL2CPP_REGISTER_METHOD(0x027FB330, void, SendItemDropHeartbeat, ());
IL2CPP_REGISTER_METHOD(0x027FB350, bool, TriggerItemDrop, (SteamInventoryResult_t * pResultHandle, SteamItemDef_t dropListDefinition));
IL2CPP_REGISTER_METHOD(0x027FB390, bool, TradeItems, (SteamInventoryResult_t * pResultHandle, CSteamID steamIDTradePartner, SteamItemInstanceID_t__Array * pArrayGive, UInt32__Array * pArrayGiveQuantity, uint32_t nArrayGiveLength, SteamItemInstanceID_t__Array * pArrayGet, UInt32__Array * pArrayGetQuantity, uint32_t nArrayGetLength));
IL2CPP_REGISTER_METHOD(0x027FB430, bool, LoadItemDefinitions, ());
IL2CPP_REGISTER_METHOD(0x027FB450, bool, GetItemDefinitionIDs, (SteamItemDef_t__Array * pItemDefIDs, uint32_t * punItemDefIDsArraySize));
IL2CPP_REGISTER_METHODINFO(0x04705248, SteamGameServerInventory_GetItemDefinitionIDs__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027FB540, bool, GetItemDefinitionProperty, (SteamItemDef_t iDefinition, String * pchPropertyName, String * * pchValueBuffer, uint32_t * punValueBufferSizeOut));
IL2CPP_REGISTER_METHOD(0x027FB7E0, SteamAPICall_t, RequestEligiblePromoItemDefinitionsIDs, (CSteamID steamID));
IL2CPP_REGISTER_METHOD(0x027FB890, bool, GetEligiblePromoItemDefinitionIDs, (CSteamID steamID, SteamItemDef_t__Array * pItemDefIDs, uint32_t * punItemDefIDsArraySize));
IL2CPP_REGISTER_METHODINFO(0x04760390, SteamGameServerInventory_GetEligiblePromoItemDefinitionIDs__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027FB990, SteamAPICall_t, StartPurchase, (SteamItemDef_t__Array * pArrayItemDefs, UInt32__Array * punArrayQuantity, uint32_t unArrayLength));
IL2CPP_REGISTER_METHOD(0x027FBA70, SteamAPICall_t, RequestPrices, ());
IL2CPP_REGISTER_METHOD(0x027FBB20, uint32_t, GetNumItemsWithPrices, ());
IL2CPP_REGISTER_METHOD(0x027FBB40, bool, GetItemsWithPrices, (SteamItemDef_t__Array * pArrayItemDefs, UInt64__Array * pCurrentPrices, UInt64__Array * pBasePrices, uint32_t unArrayLength));
IL2CPP_REGISTER_METHODINFO(0x04702E10, SteamGameServerInventory_GetItemsWithPrices__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027FBCF0, bool, GetItemPrice, (SteamItemDef_t iDefinition, uint64_t * pCurrentPrice, uint64_t * pBasePrice));
IL2CPP_REGISTER_METHOD(0x027FBD40, SteamInventoryUpdateHandle_t, StartUpdateProperties, ());
IL2CPP_REGISTER_METHOD(0x027FBDF0, bool, RemoveProperty, (SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, String * pchPropertyName));
IL2CPP_REGISTER_METHOD(0x027FC020, bool, SetProperty, (SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, String * pchPropertyName, String * pchPropertyValue));
IL2CPP_REGISTER_METHOD(0x027FC370, bool, SetProperty, (SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, String * pchPropertyName, bool bValue));
IL2CPP_REGISTER_METHOD(0x027FC5A0, bool, SetProperty1, (SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, String * pchPropertyName, int64_t nValue));
IL2CPP_REGISTER_METHOD(0x027FC7D0, bool, SetProperty2, (SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, String * pchPropertyName, float flValue));
IL2CPP_REGISTER_METHOD(0x027FCA10, bool, SubmitUpdateProperties, (SteamInventoryUpdateHandle_t handle, SteamInventoryResult_t * pResultHandle));
}
