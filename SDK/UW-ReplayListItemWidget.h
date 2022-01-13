// WidgetBlueprintGeneratedClass UW-ReplayListItemWidget.UW-ReplayListItemWidget_C
class UUW-ReplayListItemWidget_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UCanvasPanel AdministratorPanel; // 0x250 (8)
	struct UVerticalBox Cheat; // 0x258 (8)
	struct UImage Image_Lock; // 0x260 (8)
	struct UImage Image_Version; // 0x268 (8)
	struct UButton ReplayListItemBtn_; // 0x270 (8)
	struct UTextBlock TextBlock_BattleMode; // 0x278 (8)
	struct UTextBlock TextBlock_Day; // 0x280 (8)
	struct UTextBlock TextBlock_FileSize; // 0x288 (8)
	struct UTextBlock TextBlock_FPP; // 0x290 (8)
	struct UTextBlock TextBlock_MapName; // 0x298 (8)
	struct UTextBlock TextBlock_Month; // 0x2A0 (8)
	struct UTextBlock TextBlock_PlayerRank; // 0x2A8 (8)
	struct UTextBlock TextBlock_PlayTime; // 0x2B0 (8)
	struct UTextBlock TextBlock_Time; // 0x2B8 (8)
	struct UTextBlock TextBlock_TotalCount; // 0x2C0 (8)
	struct UTextBlock TextBlock_TotalPlayerCount; // 0x2C8 (8)
	struct UTextBlock TextBlock_Year; // 0x2D0 (8)
	struct FMulticastInlineDelegate Click; // 0x2D8 (16)
	struct FMKReplayListItemInfo ReplayItemInfo; // 0x2E8 (296)
	struct FButtonStyle Style; // 0x410 (632)
	struct UBravoHotelReplayListWidget ReplayListWidget; // 0x688 (8)

	void GetBattleModeString(int32_t Idx, struct FText& Str); // Function UW-ReplayListItemWidget.UW-ReplayListItemWidget_C.GetBattleModeString(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void GetReportType(struct FText& Type); // Function UW-ReplayListItemWidget.UW-ReplayListItemWidget_C.GetReportType(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Clicked(); // Function UW-ReplayListItemWidget.UW-ReplayListItemWidget_C.Clicked(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void UpdateKeep(char State); // Function UW-ReplayListItemWidget.UW-ReplayListItemWidget_C.UpdateKeep(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void RevertButtonStyle(); // Function UW-ReplayListItemWidget.UW-ReplayListItemWidget_C.RevertButtonStyle(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Init(struct FMKReplayListItemInfo ItemInfo, char Supported, struct UBravoHotelReplayListWidget ReplayListWidget); // Function UW-ReplayListItemWidget.UW-ReplayListItemWidget_C.Init(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Construct(); // Function UW-ReplayListItemWidget.UW-ReplayListItemWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__ReplayListItemBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayListItemWidget.UW-ReplayListItemWidget_C.BndEvt__ReplayListItemBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_UW-ReplayListItemWidget(int32_t EntryPoint); // Function UW-ReplayListItemWidget.UW-ReplayListItemWidget_C.ExecuteUbergraph_UW-ReplayListItemWidget(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Click__DelegateSignature(struct FMKReplayListItemInfo ItemInfo); // Function UW-ReplayListItemWidget.UW-ReplayListItemWidget_C.Click__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-ReplayListItemWidget.UW-ReplayListItemWidget_C.GetBattleModeString
inline void UUW-ReplayListItemWidget_C::GetBattleModeString(int32_t Idx, struct FText& Str) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListItemWidget.UW-ReplayListItemWidget_C.GetBattleModeString");

	struct GetBattleModeString_Params {
		int32_t Idx;
		struct FText& Str;
	}; GetBattleModeString_Params Params;

	Params.Idx = Idx;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Str = Params.Str;

}

// Function UW-ReplayListItemWidget.UW-ReplayListItemWidget_C.GetReportType
inline void UUW-ReplayListItemWidget_C::GetReportType(struct FText& Type) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListItemWidget.UW-ReplayListItemWidget_C.GetReportType");

	struct GetReportType_Params {
		struct FText& Type;
	}; GetReportType_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Type = Params.Type;

}

// Function UW-ReplayListItemWidget.UW-ReplayListItemWidget_C.Clicked
inline void UUW-ReplayListItemWidget_C::Clicked() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListItemWidget.UW-ReplayListItemWidget_C.Clicked");

	struct Clicked_Params {
		
	}; Clicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayListItemWidget.UW-ReplayListItemWidget_C.UpdateKeep
inline void UUW-ReplayListItemWidget_C::UpdateKeep(char State) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListItemWidget.UW-ReplayListItemWidget_C.UpdateKeep");

	struct UpdateKeep_Params {
		char State;
	}; UpdateKeep_Params Params;

	Params.State = State;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayListItemWidget.UW-ReplayListItemWidget_C.RevertButtonStyle
inline void UUW-ReplayListItemWidget_C::RevertButtonStyle() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListItemWidget.UW-ReplayListItemWidget_C.RevertButtonStyle");

	struct RevertButtonStyle_Params {
		
	}; RevertButtonStyle_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayListItemWidget.UW-ReplayListItemWidget_C.Init
inline void UUW-ReplayListItemWidget_C::Init(struct FMKReplayListItemInfo ItemInfo, char Supported, struct UBravoHotelReplayListWidget ReplayListWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListItemWidget.UW-ReplayListItemWidget_C.Init");

	struct Init_Params {
		struct FMKReplayListItemInfo ItemInfo;
		char Supported;
		struct UBravoHotelReplayListWidget ReplayListWidget;
	}; Init_Params Params;

	Params.ItemInfo = ItemInfo;
	Params.Supported = Supported;
	Params.ReplayListWidget = ReplayListWidget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayListItemWidget.UW-ReplayListItemWidget_C.Construct
inline void UUW-ReplayListItemWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListItemWidget.UW-ReplayListItemWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayListItemWidget.UW-ReplayListItemWidget_C.BndEvt__ReplayListItemBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-ReplayListItemWidget_C::BndEvt__ReplayListItemBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListItemWidget.UW-ReplayListItemWidget_C.BndEvt__ReplayListItemBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__ReplayListItemBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__ReplayListItemBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayListItemWidget.UW-ReplayListItemWidget_C.ExecuteUbergraph_UW-ReplayListItemWidget
inline void UUW-ReplayListItemWidget_C::ExecuteUbergraph_UW-ReplayListItemWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListItemWidget.UW-ReplayListItemWidget_C.ExecuteUbergraph_UW-ReplayListItemWidget");

	struct ExecuteUbergraph_UW-ReplayListItemWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ReplayListItemWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayListItemWidget.UW-ReplayListItemWidget_C.Click__DelegateSignature
inline void UUW-ReplayListItemWidget_C::Click__DelegateSignature(struct FMKReplayListItemInfo ItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListItemWidget.UW-ReplayListItemWidget_C.Click__DelegateSignature");

	struct Click__DelegateSignature_Params {
		struct FMKReplayListItemInfo ItemInfo;
	}; Click__DelegateSignature_Params Params;

	Params.ItemInfo = ItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

