// WidgetBlueprintGeneratedClass UW-MatchEnd_RewardSlot_02.UW-MatchEnd_RewardSlot_02_C
class UUW-MatchEnd_RewardSlot_02_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UHorizontalBox HorizontalBox; // 0x250 (8)
	struct UHorizontalBox HorizontalBox_2; // 0x258 (8)
	struct UImage Image; // 0x260 (8)
	struct UImage Image_2; // 0x268 (8)
	struct UImage Image_3; // 0x270 (8)
	struct UImage Image_4; // 0x278 (8)
	struct UImage Image_5; // 0x280 (8)
	struct UImage Image_6; // 0x288 (8)
	struct UImage Image_7; // 0x290 (8)
	struct UImage Image_8; // 0x298 (8)
	struct UImage Image_9; // 0x2A0 (8)
	struct UImage Image_10; // 0x2A8 (8)
	struct UImage Image_11; // 0x2B0 (8)
	struct UImage Image_12; // 0x2B8 (8)
	struct UImage Image_13; // 0x2C0 (8)
	struct UImage Image_14; // 0x2C8 (8)
	struct UImage Image_15; // 0x2D0 (8)
	struct UImage Image_72; // 0x2D8 (8)
	struct UImage Image_164; // 0x2E0 (8)
	struct UImage Image_352; // 0x2E8 (8)
	struct UImage Image_659; // 0x2F0 (8)
	struct UOverlay Overlay_4; // 0x2F8 (8)
	struct USizeBox SizeBox; // 0x300 (8)
	struct USizeBox SizeBox_54; // 0x308 (8)
	struct UTextBlock T_WeaponType; // 0x310 (8)
	struct UTextBlock TextBlock_176; // 0x318 (8)
	struct UTextBlock TextBlock_258; // 0x320 (8)
	struct UTextBlock TextBlock_331; // 0x328 (8)
	struct UWidgetSwitcher WidgetSwitcher_1; // 0x330 (8)
	struct FRewardItemInfo ItemInfo; // 0x338 (8)
	struct FInventoryItemDetailInfo ItemDetailInfo; // 0x340 (1168)
	struct FText LocalText; // 0x7D0 (24)
	char bIsSmallIcon : 0; // 0x7E8 (1)

	void IsMaterialData(struct FName ItemKey, char& bRet, int32_t& Index); // Function UW-MatchEnd_RewardSlot_02.UW-MatchEnd_RewardSlot_02_C.IsMaterialData(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetRarity(); // Function UW-MatchEnd_RewardSlot_02.UW-MatchEnd_RewardSlot_02_C.SetRarity(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Init(struct FRewardItemInfo ItemInfo, char UseSmallIcon); // Function UW-MatchEnd_RewardSlot_02.UW-MatchEnd_RewardSlot_02_C.Init(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void AsyncLoadIcon(struct TSoftObjectPtr<Object> Icon); // Function UW-MatchEnd_RewardSlot_02.UW-MatchEnd_RewardSlot_02_C.AsyncLoadIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_UW-MatchEnd_RewardSlot_02(int32_t EntryPoint); // Function UW-MatchEnd_RewardSlot_02.UW-MatchEnd_RewardSlot_02_C.ExecuteUbergraph_UW-MatchEnd_RewardSlot_02(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function UW-MatchEnd_RewardSlot_02.UW-MatchEnd_RewardSlot_02_C.IsMaterialData
inline void UUW-MatchEnd_RewardSlot_02_C::IsMaterialData(struct FName ItemKey, char& bRet, int32_t& Index) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_RewardSlot_02.UW-MatchEnd_RewardSlot_02_C.IsMaterialData");

	struct IsMaterialData_Params {
		struct FName ItemKey;
		char& bRet;
		int32_t& Index;
	}; IsMaterialData_Params Params;

	Params.ItemKey = ItemKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bRet = Params.bRet;
	Index = Params.Index;

}

// Function UW-MatchEnd_RewardSlot_02.UW-MatchEnd_RewardSlot_02_C.SetRarity
inline void UUW-MatchEnd_RewardSlot_02_C::SetRarity() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_RewardSlot_02.UW-MatchEnd_RewardSlot_02_C.SetRarity");

	struct SetRarity_Params {
		
	}; SetRarity_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_RewardSlot_02.UW-MatchEnd_RewardSlot_02_C.Init
inline void UUW-MatchEnd_RewardSlot_02_C::Init(struct FRewardItemInfo ItemInfo, char UseSmallIcon) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_RewardSlot_02.UW-MatchEnd_RewardSlot_02_C.Init");

	struct Init_Params {
		struct FRewardItemInfo ItemInfo;
		char UseSmallIcon;
	}; Init_Params Params;

	Params.ItemInfo = ItemInfo;
	Params.UseSmallIcon = UseSmallIcon;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_RewardSlot_02.UW-MatchEnd_RewardSlot_02_C.AsyncLoadIcon
inline void UUW-MatchEnd_RewardSlot_02_C::AsyncLoadIcon(struct TSoftObjectPtr<Object> Icon) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_RewardSlot_02.UW-MatchEnd_RewardSlot_02_C.AsyncLoadIcon");

	struct AsyncLoadIcon_Params {
		struct TSoftObjectPtr<Object> Icon;
	}; AsyncLoadIcon_Params Params;

	Params.Icon = Icon;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_RewardSlot_02.UW-MatchEnd_RewardSlot_02_C.ExecuteUbergraph_UW-MatchEnd_RewardSlot_02
inline void UUW-MatchEnd_RewardSlot_02_C::ExecuteUbergraph_UW-MatchEnd_RewardSlot_02(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_RewardSlot_02.UW-MatchEnd_RewardSlot_02_C.ExecuteUbergraph_UW-MatchEnd_RewardSlot_02");

	struct ExecuteUbergraph_UW-MatchEnd_RewardSlot_02_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-MatchEnd_RewardSlot_02_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

