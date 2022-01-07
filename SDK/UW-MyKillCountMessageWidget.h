// WidgetBlueprintGeneratedClass UW-MyKillCountMessageWidget.UW-MyKillCountMessageWidget_C
class UUW-MyKillCountMessageWidget_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Anim_HideKillAssist; // 0x250 (8)
	struct Unknown Anim_ShowAssist; // 0x258 (8)
	struct Unknown Anim_ShowKill; // 0x260 (8)
	struct Unknown T_AssistCount; // 0x268 (8)
	struct Unknown T_KillCount; // 0x270 (8)
	int32_t DefaultFontSize; // 0x278 (4)
	int32_t MiniFontSize; // 0x27C (4)
	char IsShowingKillCount : 0; // 0x280 (1)
	struct Unknown Timer_HideKillCountText; // 0x288 (8)
	float RemainTime; // 0x290 (4)

	void SetHideTimer(); // Function UW-MyKillCountMessageWidget.UW-MyKillCountMessageWidget_C.SetHideTimer(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void UpdateAssistTextSize(); // Function UW-MyKillCountMessageWidget.UW-MyKillCountMessageWidget_C.UpdateAssistTextSize(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ShowKillCount(char bIsKill, struct FText Text); // Function UW-MyKillCountMessageWidget.UW-MyKillCountMessageWidget_C.ShowKillCount(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void HideKillCountText(); // Function UW-MyKillCountMessageWidget.UW-MyKillCountMessageWidget_C.HideKillCountText(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnAnimationFinished(struct Unknown Animation); // Function UW-MyKillCountMessageWidget.UW-MyKillCountMessageWidget_C.OnAnimationFinished(BlueprintCosmetic|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_UW-MyKillCountMessageWidget(int32_t EntryPoint); // Function UW-MyKillCountMessageWidget.UW-MyKillCountMessageWidget_C.ExecuteUbergraph_UW-MyKillCountMessageWidget(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function UW-MyKillCountMessageWidget.UW-MyKillCountMessageWidget_C.SetHideTimer
inline void UUW-MyKillCountMessageWidget_C::SetHideTimer() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MyKillCountMessageWidget.UW-MyKillCountMessageWidget_C.SetHideTimer");

	struct SetHideTimer_Params {
		
	}; SetHideTimer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MyKillCountMessageWidget.UW-MyKillCountMessageWidget_C.UpdateAssistTextSize
inline void UUW-MyKillCountMessageWidget_C::UpdateAssistTextSize() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MyKillCountMessageWidget.UW-MyKillCountMessageWidget_C.UpdateAssistTextSize");

	struct UpdateAssistTextSize_Params {
		
	}; UpdateAssistTextSize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MyKillCountMessageWidget.UW-MyKillCountMessageWidget_C.ShowKillCount
inline void UUW-MyKillCountMessageWidget_C::ShowKillCount(char bIsKill, struct FText Text) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MyKillCountMessageWidget.UW-MyKillCountMessageWidget_C.ShowKillCount");

	struct ShowKillCount_Params {
		char bIsKill;
		struct FText Text;
	}; ShowKillCount_Params Params;

	Params.bIsKill = bIsKill;
	Params.Text = Text;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MyKillCountMessageWidget.UW-MyKillCountMessageWidget_C.HideKillCountText
inline void UUW-MyKillCountMessageWidget_C::HideKillCountText() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MyKillCountMessageWidget.UW-MyKillCountMessageWidget_C.HideKillCountText");

	struct HideKillCountText_Params {
		
	}; HideKillCountText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MyKillCountMessageWidget.UW-MyKillCountMessageWidget_C.OnAnimationFinished
inline void UUW-MyKillCountMessageWidget_C::OnAnimationFinished(struct Unknown Animation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MyKillCountMessageWidget.UW-MyKillCountMessageWidget_C.OnAnimationFinished");

	struct OnAnimationFinished_Params {
		struct Unknown Animation;
	}; OnAnimationFinished_Params Params;

	Params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MyKillCountMessageWidget.UW-MyKillCountMessageWidget_C.ExecuteUbergraph_UW-MyKillCountMessageWidget
inline void UUW-MyKillCountMessageWidget_C::ExecuteUbergraph_UW-MyKillCountMessageWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MyKillCountMessageWidget.UW-MyKillCountMessageWidget_C.ExecuteUbergraph_UW-MyKillCountMessageWidget");

	struct ExecuteUbergraph_UW-MyKillCountMessageWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-MyKillCountMessageWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

