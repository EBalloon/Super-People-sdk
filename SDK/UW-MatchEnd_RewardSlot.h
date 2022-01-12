// WidgetBlueprintGeneratedClass UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C
class UUW-MatchEnd_RewardSlot_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UHorizontalBox HorizontalBox_Rarity; // 0x250 (8)
	struct UImage Image_bg; // 0x258 (8)
	struct UImage Image_Icon; // 0x260 (8)
	struct UTextBlock T_Name; // 0x268 (8)
	struct UTextBlock T_WeaponType; // 0x270 (8)
	struct UTextBlock TextBlock_186; // 0x278 (8)
	struct UUW-Inventory_ItemSlotHover_C Tooltip; // 0x280 (8)
	struct FRewardItemInfo ItemInfo; // 0x288 (8)
	struct FInventoryItemDetailInfo ItemDetailInfo; // 0x290 (1168)

	void SetRarity(); // Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.SetRarity(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void GetHoverPosition(struct FVector2D ViewportSize, struct FVector2D MousePosition, struct FVector2D HoverSize, struct FVector2D& Out); // Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.GetHoverPosition(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Init(struct FRewardItemInfo ItemInfo); // Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.Init(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnLoaded_476BD37943992650800406AA289D7379(struct Object Loaded); // Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.OnLoaded_476BD37943992650800406AA289D7379(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Construct(); // Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AsyncLoadIcon(struct TSoftObjectPtr<Object> Icon); // Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.AsyncLoadIcon(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-MatchEnd_RewardSlot(int32_t EntryPoint); // Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.ExecuteUbergraph_UW-MatchEnd_RewardSlot(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
};

// Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.SetRarity
inline void UUW-MatchEnd_RewardSlot_C::SetRarity() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.SetRarity");

	struct SetRarity_Params {
		
	}; SetRarity_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.GetHoverPosition
inline void UUW-MatchEnd_RewardSlot_C::GetHoverPosition(struct FVector2D ViewportSize, struct FVector2D MousePosition, struct FVector2D HoverSize, struct FVector2D& Out) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.GetHoverPosition");

	struct GetHoverPosition_Params {
		struct FVector2D ViewportSize;
		struct FVector2D MousePosition;
		struct FVector2D HoverSize;
		struct FVector2D& Out;
	}; GetHoverPosition_Params Params;

	Params.ViewportSize = ViewportSize;
	Params.MousePosition = MousePosition;
	Params.HoverSize = HoverSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Out = Params.Out;

}

// Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.Init
inline void UUW-MatchEnd_RewardSlot_C::Init(struct FRewardItemInfo ItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.Init");

	struct Init_Params {
		struct FRewardItemInfo ItemInfo;
	}; Init_Params Params;

	Params.ItemInfo = ItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.OnLoaded_476BD37943992650800406AA289D7379
inline void UUW-MatchEnd_RewardSlot_C::OnLoaded_476BD37943992650800406AA289D7379(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.OnLoaded_476BD37943992650800406AA289D7379");

	struct OnLoaded_476BD37943992650800406AA289D7379_Params {
		struct Object Loaded;
	}; OnLoaded_476BD37943992650800406AA289D7379_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.Construct
inline void UUW-MatchEnd_RewardSlot_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.Tick
inline void UUW-MatchEnd_RewardSlot_C::Tick(struct FGeometry MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.Tick");

	struct Tick_Params {
		struct FGeometry MyGeometry;
		float InDeltaTime;
	}; Tick_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.OnMouseEnter
inline void UUW-MatchEnd_RewardSlot_C::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.OnMouseEnter");

	struct OnMouseEnter_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
	}; OnMouseEnter_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.OnMouseLeave
inline void UUW-MatchEnd_RewardSlot_C::OnMouseLeave(struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct FPointerEvent& MouseEvent;
	}; OnMouseLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.AsyncLoadIcon
inline void UUW-MatchEnd_RewardSlot_C::AsyncLoadIcon(struct TSoftObjectPtr<Object> Icon) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.AsyncLoadIcon");

	struct AsyncLoadIcon_Params {
		struct TSoftObjectPtr<Object> Icon;
	}; AsyncLoadIcon_Params Params;

	Params.Icon = Icon;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.ExecuteUbergraph_UW-MatchEnd_RewardSlot
inline void UUW-MatchEnd_RewardSlot_C::ExecuteUbergraph_UW-MatchEnd_RewardSlot(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.ExecuteUbergraph_UW-MatchEnd_RewardSlot");

	struct ExecuteUbergraph_UW-MatchEnd_RewardSlot_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-MatchEnd_RewardSlot_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

