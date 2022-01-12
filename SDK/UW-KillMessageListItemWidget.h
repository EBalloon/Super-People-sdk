// WidgetBlueprintGeneratedClass UW-KillMessageListItemWidget.UW-KillMessageListItemWidget_C
class UUW-KillMessageListItemWidget_C : public UBravoHotelKillInfoSlotWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258 (8)
	struct UWidgetAnimation Anim_Hide; // 0x260 (8)
	struct UWidgetAnimation Anim_Down; // 0x268 (8)
	struct UHorizontalBox HorizontalBox_Killer; // 0x270 (8)
	struct UScaleBox ScaleBox_KillerIcon; // 0x278 (8)
	struct UImage T_ClassIcon; // 0x280 (8)
	struct UTextBlock T_Level; // 0x288 (8)
	struct UTextBlock T_LV; // 0x290 (8)
	struct UTextBlock T_Name; // 0x298 (8)
	struct FMulticastInlineDelegate OnTimeOut; // 0x2A0 (16)
	struct ABravoHotelPlayerState LocalPlayerState; // 0x2B0 (8)

	void OnLoaded_9DF86FA64782B378E42DBB813545BD34(struct Object Loaded); // Function UW-KillMessageListItemWidget.UW-KillMessageListItemWidget_C.OnLoaded_9DF86FA64782B378E42DBB813545BD34(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetPlayerInfo(struct ABravoHotelPlayerState PlayerState, struct FSlateColor InfoColor); // Function UW-KillMessageListItemWidget.UW-KillMessageListItemWidget_C.SetPlayerInfo(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-KillMessageListItemWidget(int32_t EntryPoint); // Function UW-KillMessageListItemWidget.UW-KillMessageListItemWidget_C.ExecuteUbergraph_UW-KillMessageListItemWidget(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
	void OnTimeOut__DelegateSignature(int32_t ArrayIndex, struct UUW-KillMessageListWidget_C Slot); // Function UW-KillMessageListItemWidget.UW-KillMessageListItemWidget_C.OnTimeOut__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
};

// Function UW-KillMessageListItemWidget.UW-KillMessageListItemWidget_C.OnLoaded_9DF86FA64782B378E42DBB813545BD34
inline void UUW-KillMessageListItemWidget_C::OnLoaded_9DF86FA64782B378E42DBB813545BD34(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KillMessageListItemWidget.UW-KillMessageListItemWidget_C.OnLoaded_9DF86FA64782B378E42DBB813545BD34");

	struct OnLoaded_9DF86FA64782B378E42DBB813545BD34_Params {
		struct Object Loaded;
	}; OnLoaded_9DF86FA64782B378E42DBB813545BD34_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-KillMessageListItemWidget.UW-KillMessageListItemWidget_C.SetPlayerInfo
inline void UUW-KillMessageListItemWidget_C::SetPlayerInfo(struct ABravoHotelPlayerState PlayerState, struct FSlateColor InfoColor) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KillMessageListItemWidget.UW-KillMessageListItemWidget_C.SetPlayerInfo");

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

// Function UW-KillMessageListItemWidget.UW-KillMessageListItemWidget_C.ExecuteUbergraph_UW-KillMessageListItemWidget
inline void UUW-KillMessageListItemWidget_C::ExecuteUbergraph_UW-KillMessageListItemWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KillMessageListItemWidget.UW-KillMessageListItemWidget_C.ExecuteUbergraph_UW-KillMessageListItemWidget");

	struct ExecuteUbergraph_UW-KillMessageListItemWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-KillMessageListItemWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-KillMessageListItemWidget.UW-KillMessageListItemWidget_C.OnTimeOut__DelegateSignature
inline void UUW-KillMessageListItemWidget_C::OnTimeOut__DelegateSignature(int32_t ArrayIndex, struct UUW-KillMessageListWidget_C Slot) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KillMessageListItemWidget.UW-KillMessageListItemWidget_C.OnTimeOut__DelegateSignature");

	struct OnTimeOut__DelegateSignature_Params {
		int32_t ArrayIndex;
		struct UUW-KillMessageListWidget_C Slot;
	}; OnTimeOut__DelegateSignature_Params Params;

	Params.ArrayIndex = ArrayIndex;
	Params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

