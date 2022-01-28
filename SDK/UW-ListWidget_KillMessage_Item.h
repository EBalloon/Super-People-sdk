// WidgetBlueprintGeneratedClass UW-ListWidget_KillMessage_Item.UW-ListWidget_KillMessage_Item_C
class UUW-ListWidget_KillMessage_Item_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UWidgetAnimation Anim_Hide; // 0x250 (8)
	struct UWidgetAnimation Anim_Down; // 0x258 (8)
	struct UHorizontalBox HorizontalBox_Killer; // 0x260 (8)
	struct UScaleBox ScaleBox_KillerIcon; // 0x268 (8)
	struct UImage T_ClassIcon; // 0x270 (8)
	struct UTextBlock T_Level; // 0x278 (8)
	struct UTextBlock T_Lv; // 0x280 (8)
	struct UTextBlock T_Name; // 0x288 (8)
	struct FMulticastInlineDelegate OnTimeOut; // 0x290 (16)
	struct ABravoHotelPlayerState LocalPlayerState; // 0x2A0 (8)

	void OnLoaded_9DF86FA64782B378E42DBB813545BD34(struct Object Loaded); // Function UW-ListWidget_KillMessage_Item.UW-ListWidget_KillMessage_Item_C.OnLoaded_9DF86FA64782B378E42DBB813545BD34(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetPlayerInfo(struct ABravoHotelPlayerState PlayerState, struct FSlateColor InfoColor); // Function UW-ListWidget_KillMessage_Item.UW-ListWidget_KillMessage_Item_C.SetPlayerInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_UW-ListWidget_KillMessage_Item(int32_t EntryPoint); // Function UW-ListWidget_KillMessage_Item.UW-ListWidget_KillMessage_Item_C.ExecuteUbergraph_UW-ListWidget_KillMessage_Item(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnTimeOut__DelegateSignature(int32_t ArrayIndex, struct UUW-ListWidget_KillMessage_C Slot); // Function UW-ListWidget_KillMessage_Item.UW-ListWidget_KillMessage_Item_C.OnTimeOut__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-ListWidget_KillMessage_Item.UW-ListWidget_KillMessage_Item_C.OnLoaded_9DF86FA64782B378E42DBB813545BD34
inline void UUW-ListWidget_KillMessage_Item_C::OnLoaded_9DF86FA64782B378E42DBB813545BD34(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_KillMessage_Item.UW-ListWidget_KillMessage_Item_C.OnLoaded_9DF86FA64782B378E42DBB813545BD34");

	struct OnLoaded_9DF86FA64782B378E42DBB813545BD34_Params {
		struct Object Loaded;
	}; OnLoaded_9DF86FA64782B378E42DBB813545BD34_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget_KillMessage_Item.UW-ListWidget_KillMessage_Item_C.SetPlayerInfo
inline void UUW-ListWidget_KillMessage_Item_C::SetPlayerInfo(struct ABravoHotelPlayerState PlayerState, struct FSlateColor InfoColor) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_KillMessage_Item.UW-ListWidget_KillMessage_Item_C.SetPlayerInfo");

	struct SetPlayerInfo_Params {
		struct ABravoHotelPlayerState PlayerState;
		struct FSlateColor InfoColor;
	}; SetPlayerInfo_Params Params;

	Params.PlayerState = PlayerState;
	Params.InfoColor = InfoColor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget_KillMessage_Item.UW-ListWidget_KillMessage_Item_C.ExecuteUbergraph_UW-ListWidget_KillMessage_Item
inline void UUW-ListWidget_KillMessage_Item_C::ExecuteUbergraph_UW-ListWidget_KillMessage_Item(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_KillMessage_Item.UW-ListWidget_KillMessage_Item_C.ExecuteUbergraph_UW-ListWidget_KillMessage_Item");

	struct ExecuteUbergraph_UW-ListWidget_KillMessage_Item_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ListWidget_KillMessage_Item_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget_KillMessage_Item.UW-ListWidget_KillMessage_Item_C.OnTimeOut__DelegateSignature
inline void UUW-ListWidget_KillMessage_Item_C::OnTimeOut__DelegateSignature(int32_t ArrayIndex, struct UUW-ListWidget_KillMessage_C Slot) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_KillMessage_Item.UW-ListWidget_KillMessage_Item_C.OnTimeOut__DelegateSignature");

	struct OnTimeOut__DelegateSignature_Params {
		int32_t ArrayIndex;
		struct UUW-ListWidget_KillMessage_C Slot;
	}; OnTimeOut__DelegateSignature_Params Params;

	Params.ArrayIndex = ArrayIndex;
	Params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

