// WidgetBlueprintGeneratedClass UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C
class UUW-MatchEnd_RewardSlot_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown HorizontalBox_Rarity; // 0x250 (8)
	struct Unknown Image_bg; // 0x258 (8)
	struct Unknown Image_Icon; // 0x260 (8)
	struct Unknown T_Name; // 0x268 (8)
	struct Unknown T_WeaponType; // 0x270 (8)
	struct Unknown TextBlock_186; // 0x278 (8)
	struct Unknown Tooltip; // 0x280 (8)
	struct Unknown ItemInfo; // 0x288 (8)
	struct Unknown ItemDetailInfo; // 0x290 (1168)

	void SetRarity(); // Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.SetRarity(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void GetHoverPosition(struct Unknown ViewportSize, struct Unknown MousePosition, struct Unknown HoverSize, struct Unknown& Out); // Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.GetHoverPosition(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Init(struct Unknown ItemInfo); // Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.Init(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OnLoaded_476BD37943992650800406AA289D7379(struct Unknown Loaded); // Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.OnLoaded_476BD37943992650800406AA289D7379(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Construct(); // Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void AsyncLoadIcon(struct Unknown Icon); // Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.AsyncLoadIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_UW-MatchEnd_RewardSlot(int32_t EntryPoint); // Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.ExecuteUbergraph_UW-MatchEnd_RewardSlot(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
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
inline void UUW-MatchEnd_RewardSlot_C::GetHoverPosition(struct Unknown ViewportSize, struct Unknown MousePosition, struct Unknown HoverSize, struct Unknown& Out) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.GetHoverPosition");

	struct GetHoverPosition_Params {
		struct Unknown ViewportSize;
		struct Unknown MousePosition;
		struct Unknown HoverSize;
		struct Unknown& Out;
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
inline void UUW-MatchEnd_RewardSlot_C::Init(struct Unknown ItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.Init");

	struct Init_Params {
		struct Unknown ItemInfo;
	}; Init_Params Params;

	Params.ItemInfo = ItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.OnLoaded_476BD37943992650800406AA289D7379
inline void UUW-MatchEnd_RewardSlot_C::OnLoaded_476BD37943992650800406AA289D7379(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.OnLoaded_476BD37943992650800406AA289D7379");

	struct OnLoaded_476BD37943992650800406AA289D7379_Params {
		struct Unknown Loaded;
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
inline void UUW-MatchEnd_RewardSlot_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.Tick");

	struct Tick_Params {
		struct Unknown MyGeometry;
		float InDeltaTime;
	}; Tick_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.OnMouseEnter
inline void UUW-MatchEnd_RewardSlot_C::OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.OnMouseEnter");

	struct OnMouseEnter_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
	}; OnMouseEnter_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.OnMouseLeave
inline void UUW-MatchEnd_RewardSlot_C::OnMouseLeave(struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct Unknown& MouseEvent;
	}; OnMouseLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.AsyncLoadIcon
inline void UUW-MatchEnd_RewardSlot_C::AsyncLoadIcon(struct Unknown Icon) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.AsyncLoadIcon");

	struct AsyncLoadIcon_Params {
		struct Unknown Icon;
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

