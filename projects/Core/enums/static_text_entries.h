#pragma once

namespace core {
    using text_id = int;

    enum class StaticTextEntry {
        Empty = 0,
        EmptyName = 1,
        Chatter = 2,
        QuestReward = 3,
        Currency = 4,

        // Shops
        OpherSlot0_Normal_Name = 13000, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        OpherSlot0_Normal_Description = 13001, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        OpherSlot0_Locked_Name = 13002, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        OpherSlot0_Locked_Description = 13003, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        OpherSlot0_Hidden_Name = 13004, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        OpherSlot0_Hidden_Description = 13005, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        OpherSlot1_Normal_Name = 13010, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        OpherSlot1_Normal_Description = 13011, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        OpherSlot1_Locked_Name = 13012, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        OpherSlot1_Locked_Description = 13013, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        OpherSlot1_Hidden_Name = 13014, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        OpherSlot1_Hidden_Description = 13015, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        OpherSlot2_Normal_Name = 13020, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        OpherSlot2_Normal_Description = 13021, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        OpherSlot2_Locked_Name = 13022, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        OpherSlot2_Locked_Description = 13023, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        OpherSlot2_Hidden_Name = 13024, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        OpherSlot2_Hidden_Description = 13025, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        OpherSlot3_Normal_Name = 13030, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        OpherSlot3_Normal_Description = 13031, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        OpherSlot3_Locked_Name = 13032, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        OpherSlot3_Locked_Description = 13033, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        OpherSlot3_Hidden_Name = 13034, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        OpherSlot3_Hidden_Description = 13035, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        OpherSlot4_Normal_Name = 13040, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        OpherSlot4_Normal_Description = 13041, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        OpherSlot4_Locked_Name = 13042, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        OpherSlot4_Locked_Description = 13043, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        OpherSlot4_Hidden_Name = 13044, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        OpherSlot4_Hidden_Description = 13045, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        OpherSlot5_Normal_Name = 13050, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        OpherSlot5_Normal_Description = 13051, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        OpherSlot5_Locked_Name = 13052, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        OpherSlot5_Locked_Description = 13053, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        OpherSlot5_Hidden_Name = 13054, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        OpherSlot5_Hidden_Description = 13055, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        OpherSlot6_Normal_Name = 13060, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        OpherSlot6_Normal_Description = 13061, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        OpherSlot6_Locked_Name = 13062, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        OpherSlot6_Locked_Description = 13063, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        OpherSlot6_Hidden_Name = 13064, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        OpherSlot6_Hidden_Description = 13065, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        OpherSlot7_Normal_Name = 13070, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        OpherSlot7_Normal_Description = 13071, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        OpherSlot7_Locked_Name = 13072, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        OpherSlot7_Locked_Description = 13073, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        OpherSlot7_Hidden_Name = 13074, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        OpherSlot7_Hidden_Description = 13075, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        OpherSlot8_Normal_Name = 13080, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        OpherSlot8_Normal_Description = 13081, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        OpherSlot8_Locked_Name = 13082, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        OpherSlot8_Locked_Description = 13083, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        OpherSlot8_Hidden_Name = 13084, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        OpherSlot8_Hidden_Description = 13085, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        OpherSlot9_Normal_Name = 13090, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        OpherSlot9_Normal_Description = 13091, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        OpherSlot9_Locked_Name = 13092, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        OpherSlot9_Locked_Description = 13093, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        OpherSlot9_Hidden_Name = 13094, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        OpherSlot9_Hidden_Description = 13095, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        OpherSlot10_Normal_Name = 13100, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        OpherSlot10_Normal_Description = 13101, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        OpherSlot10_Locked_Name = 13102, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        OpherSlot10_Locked_Description = 13103, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        OpherSlot10_Hidden_Name = 13104, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        OpherSlot10_Hidden_Description = 13105, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        OpherSlot11_Normal_Name = 13110, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        OpherSlot11_Normal_Description = 13111, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        OpherSlot11_Locked_Name = 13112, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        OpherSlot11_Locked_Description = 13113, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        OpherSlot11_Hidden_Name = 13114, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        OpherSlot11_Hidden_Description = 13115, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        TwillenSlot0_Normal_Name = 14000, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        TwillenSlot0_Normal_Description = 14001, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        TwillenSlot0_Locked_Name = 14002, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        TwillenSlot0_Locked_Description = 14003, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        TwillenSlot0_Hidden_Name = 14004, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        TwillenSlot0_Hidden_Description = 14005, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        TwillenSlot1_Normal_Name = 14010, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        TwillenSlot1_Normal_Description = 14011, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        TwillenSlot1_Locked_Name = 14012, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        TwillenSlot1_Locked_Description = 14013, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        TwillenSlot1_Hidden_Name = 14014, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        TwillenSlot1_Hidden_Description = 14015, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        TwillenSlot2_Normal_Name = 14020, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        TwillenSlot2_Normal_Description = 14021, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        TwillenSlot2_Locked_Name = 14022, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        TwillenSlot2_Locked_Description = 14023, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        TwillenSlot2_Hidden_Name = 14024, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        TwillenSlot2_Hidden_Description = 14025, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        TwillenSlot3_Normal_Name = 14030, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        TwillenSlot3_Normal_Description = 14031, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        TwillenSlot3_Locked_Name = 14032, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        TwillenSlot3_Locked_Description = 14033, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        TwillenSlot3_Hidden_Name = 14034, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        TwillenSlot3_Hidden_Description = 14035, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        TwillenSlot4_Normal_Name = 14040, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        TwillenSlot4_Normal_Description = 14041, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        TwillenSlot4_Locked_Name = 14042, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        TwillenSlot4_Locked_Description = 14043, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        TwillenSlot4_Hidden_Name = 14044, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        TwillenSlot4_Hidden_Description = 14045, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        TwillenSlot5_Normal_Name = 14050, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        TwillenSlot5_Normal_Description = 14051, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        TwillenSlot5_Locked_Name = 14052, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        TwillenSlot5_Locked_Description = 14053, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        TwillenSlot5_Hidden_Name = 14054, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        TwillenSlot5_Hidden_Description = 14055, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        TwillenSlot6_Normal_Name = 14060, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        TwillenSlot6_Normal_Description = 14061, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        TwillenSlot6_Locked_Name = 14062, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        TwillenSlot6_Locked_Description = 14063, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        TwillenSlot6_Hidden_Name = 14064, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        TwillenSlot6_Hidden_Description = 14065, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        TwillenSlot7_Normal_Name = 14070, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        TwillenSlot7_Normal_Description = 14071, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        TwillenSlot7_Locked_Name = 14072, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        TwillenSlot7_Locked_Description = 14073, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        TwillenSlot7_Hidden_Name = 14074, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        TwillenSlot7_Hidden_Description = 14075, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        LupoSlot0_Normal_Name = 11000, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        LupoSlot0_Normal_Description = 11001, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        LupoSlot0_Locked_Name = 11002, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        LupoSlot0_Locked_Description = 11003, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        LupoSlot0_Hidden_Name = 11004, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        LupoSlot0_Hidden_Description = 11005, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        LupoSlot1_Normal_Name = 11010, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        LupoSlot1_Normal_Description = 11011, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        LupoSlot1_Locked_Name = 11012, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        LupoSlot1_Locked_Description = 11013, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        LupoSlot1_Hidden_Name = 11014, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        LupoSlot1_Hidden_Description = 11015, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        LupoSlot2_Normal_Name = 11020, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        LupoSlot2_Normal_Description = 11021, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        LupoSlot2_Locked_Name = 11022, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        LupoSlot2_Locked_Description = 11023, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        LupoSlot2_Hidden_Name = 11024, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        LupoSlot2_Hidden_Description = 11025, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        // Lupo Maps
        LupoMarshIntroduction = 8010, // 8000 + (GameWorldAreaID * 10) + 0
        LupoMarshSalesPitch = 8011, // 8000 + (GameWorldAreaID * 10) + 1
        LupoMarshNoSale = 8012, // 8000 + (GameWorldAreaID * 10) + 2
        LupoMarshBroke = 8013, // 8000 + (GameWorldAreaID * 10) + 3
        LupoMarshThanks = 8014, // 8000 + (GameWorldAreaID * 10) + 4

        LupoHollowIntroduction = 8020, // 8000 + (GameWorldAreaID * 10) + 0
        LupoHollowSalesPitch = 8021, // 8000 + (GameWorldAreaID * 10) + 1
        LupoHollowNoSale = 8022, // 8000 + (GameWorldAreaID * 10) + 2
        LupoHollowBroke = 8023, // 8000 + (GameWorldAreaID * 10) + 3
        LupoHollowThanks = 8024, // 8000 + (GameWorldAreaID * 10) + 4

        LupoWellspringIntroduction = 8040, // 8000 + (GameWorldAreaID * 10) + 0
        LupoWellspringSalesPitch = 8041, // 8000 + (GameWorldAreaID * 10) + 1
        LupoWellspringNoSale = 8042, // 8000 + (GameWorldAreaID * 10) + 2
        LupoWellspringBroke = 8043, // 8000 + (GameWorldAreaID * 10) + 3
        LupoWellspringThanks = 8044, // 8000 + (GameWorldAreaID * 10) + 4

        LupoBurrowIntroduction = 8050, // 8000 + (GameWorldAreaID * 10) + 0
        LupoBurrowSalesPitch = 8051, // 8000 + (GameWorldAreaID * 10) + 1
        LupoBurrowNoSale = 8052, // 8000 + (GameWorldAreaID * 10) + 2
        LupoBurrowBroke = 8053, // 8000 + (GameWorldAreaID * 10) + 3
        LupoBurrowThanks = 8054, // 8000 + (GameWorldAreaID * 10) + 4

        LupoReachIntroduction = 8070, // 8000 + (GameWorldAreaID * 10) + 0
        LupoReachSalesPitch = 8071, // 8000 + (GameWorldAreaID * 10) + 1
        LupoReachNoSale = 8072, // 8000 + (GameWorldAreaID * 10) + 2
        LupoReachBroke = 8073, // 8000 + (GameWorldAreaID * 10) + 3
        LupoReachThanks = 8074, // 8000 + (GameWorldAreaID * 10) + 4

        LupoPoolsIntroduction = 8080, // 8000 + (GameWorldAreaID * 10) + 0
        LupoPoolsSalesPitch = 8081, // 8000 + (GameWorldAreaID * 10) + 1
        LupoPoolsNoSale = 8082, // 8000 + (GameWorldAreaID * 10) + 2
        LupoPoolsBroke = 8083, // 8000 + (GameWorldAreaID * 10) + 3
        LupoPoolsThanks = 8084, // 8000 + (GameWorldAreaID * 10) + 4

        LupoDepthsIntroduction = 8090, // 8000 + (GameWorldAreaID * 10) + 0
        LupoDepthsSalesPitch = 8091, // 8000 + (GameWorldAreaID * 10) + 1
        LupoDepthsNoSale = 8092, // 8000 + (GameWorldAreaID * 10) + 2
        LupoDepthsBroke = 8093, // 8000 + (GameWorldAreaID * 10) + 3
        LupoDepthsThanks = 8094, // 8000 + (GameWorldAreaID * 10) + 4

        LupoWastesIntroduction = 8110, // 8000 + (GameWorldAreaID * 10) + 0
        LupoWastesSalesPitch = 8111, // 8000 + (GameWorldAreaID * 10) + 1
        LupoWastesNoSale = 8112, // 8000 + (GameWorldAreaID * 10) + 2
        LupoWastesBroke = 8113, // 8000 + (GameWorldAreaID * 10) + 3
        LupoWastesThanks = 8114, // 8000 + (GameWorldAreaID * 10) + 4

        LupoWillowIntroduction = 8140, // 8000 + (GameWorldAreaID * 10) + 0
        LupoWillowSalesPitch = 8141, // 8000 + (GameWorldAreaID * 10) + 1
        LupoWillowNoSale = 8142, // 8000 + (GameWorldAreaID * 10) + 2
        LupoWillowBroke = 8143, // 8000 + (GameWorldAreaID * 10) + 3
        LupoWillowThanks = 8144, // 8000 + (GameWorldAreaID * 10) + 4

        // Step 0 quests
        QuestMissingKeyStep0 = 50,
        QuestHandToHandStep0 = 51,
        QuestTreeKeeperStep0 = 52,

        // Hints
        MapHint = 90,
        ProgressHint = 91,

        // Spirit Trial Texts (the ones that show up above the spirit trial start)
        TrialTextMarsh = 100,
        TrialTextHollow = 101,
        TrialTextWellspring = 102,
        TrialTextWoods = 103,
        TrialTextReach = 104,
        TrialTextDepths = 105,
        TrialTextPools = 106,
        TrialTextWastes = 107,

        STATIC_TEXT_ENTRY_END = 1000000
    };
} // namespace core

using static_text_entry = core::StaticTextEntry;
inline core::text_id operator*(static_text_entry entry) {
    return static_cast<core::text_id>(entry);
}
