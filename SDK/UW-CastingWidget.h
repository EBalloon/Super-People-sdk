// WidgetBlueprintGeneratedClass UW-CastingWidget.UW-CastingWidget_C
class UUW-CastingWidget_C : public UBravoHotelItemUseWidget {

public:

	struct Unknown UberGraphFrame; // 0x268 (8)
	struct Unknown Flicker; // 0x270 (8)
	struct Unknown BaseGuage; // 0x278 (8)
	struct Unknown Guage; // 0x280 (8)
	struct Unknown HB_CancelMessage; // 0x288 (8)
	struct Unknown Image_921; // 0x290 (8)
	struct Unknown Percent; // 0x298 (8)
	struct Unknown ProgressBar_Item; // 0x2A0 (8)
	struct Unknown RichT_Message; // 0x2A8 (8)
	struct Unknown TextBlock_1; // 0x2B0 (8)
	struct Unknown TextBlock_Time; // 0x2B8 (8)
	struct Unknown UseMessage; // 0x2C0 (8)
	struct Unknown VerticalBox_2; // 0x2C8 (8)
	float PercentValue; // 0x2D0 (4)
	char KnockState : 0; // 0x2D4 (1)
	float HideTimer; // 0x2D8 (4)
	struct Unknown ProgressStyle; // 0x2E0 (416)
	char IsShowRevive : 0; // 0x480 (1)
	struct Unknown CastingInfo; // 0x488 (24)
	float CurrentTime; // 0x4A0 (4)
	int32_t KeyFontSize; // 0x4A4 (4)
	float KeySizeScale; // 0x4A8 (4)
	int32_t CurrentLanguage; // 0x4AC (4)

	void CheckLanguage(); // Function UW-CastingWidget.UW-CastingWidget_C.CheckLanguage(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void IsTarget(struct Unknown Target, char& IsTarget); // Function UW-CastingWidget.UW-CastingWidget_C.IsTarget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void RefreshCastingUI(); // Function UW-CastingWidget.UW-CastingWidget_C.RefreshCastingUI(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void UpdateProgress(); // Function UW-CastingWidget.UW-CastingWidget_C.UpdateProgress(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void HideCastingUI(); // Function UW-CastingWidget.UW-CastingWidget_C.HideCastingUI(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ShowCastingUI(struct Unknown CastingInfo); // Function UW-CastingWidget.UW-CastingWidget_C.ShowCastingUI(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function UW-CastingWidget.UW-CastingWidget_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Construct(); // Function UW-CastingWidget.UW-CastingWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetCancelMessage(struct FText Desc); // Function UW-CastingWidget.UW-CastingWidget_C.SetCancelMessage(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void PreConstruct(char IsDesignTime); // Function UW-CastingWidget.UW-CastingWidget_C.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_UW-CastingWidget(int32_t EntryPoint); // Function UW-CastingWidget.UW-CastingWidget_C.ExecuteUbergraph_UW-CastingWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function UW-CastingWidget.UW-CastingWidget_C.CheckLanguage
inline void UUW-CastingWidget_C::CheckLanguage() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CastingWidget.UW-CastingWidget_C.CheckLanguage");

	struct CheckLanguage_Params {
		
	}; CheckLanguage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CastingWidget.UW-CastingWidget_C.IsTarget
inline void UUW-CastingWidget_C::IsTarget(struct Unknown Target, char& IsTarget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CastingWidget.UW-CastingWidget_C.IsTarget");

	struct IsTarget_Params {
		struct Unknown Target;
		char& IsTarget;
	}; IsTarget_Params Params;

	Params.Target = Target;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsTarget = Params.IsTarget;

}

// Function UW-CastingWidget.UW-CastingWidget_C.RefreshCastingUI
inline void UUW-CastingWidget_C::RefreshCastingUI() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CastingWidget.UW-CastingWidget_C.RefreshCastingUI");

	struct RefreshCastingUI_Params {
		
	}; RefreshCastingUI_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CastingWidget.UW-CastingWidget_C.UpdateProgress
inline void UUW-CastingWidget_C::UpdateProgress() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CastingWidget.UW-CastingWidget_C.UpdateProgress");

	struct UpdateProgress_Params {
		
	}; UpdateProgress_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CastingWidget.UW-CastingWidget_C.HideCastingUI
inline void UUW-CastingWidget_C::HideCastingUI() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CastingWidget.UW-CastingWidget_C.HideCastingUI");

	struct HideCastingUI_Params {
		
	}; HideCastingUI_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CastingWidget.UW-CastingWidget_C.ShowCastingUI
inline void UUW-CastingWidget_C::ShowCastingUI(struct Unknown CastingInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CastingWidget.UW-CastingWidget_C.ShowCastingUI");

	struct ShowCastingUI_Params {
		struct Unknown CastingInfo;
	}; ShowCastingUI_Params Params;

	Params.CastingInfo = CastingInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CastingWidget.UW-CastingWidget_C.Tick
inline void UUW-CastingWidget_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CastingWidget.UW-CastingWidget_C.Tick");

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

// Function UW-CastingWidget.UW-CastingWidget_C.Construct
inline void UUW-CastingWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CastingWidget.UW-CastingWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CastingWidget.UW-CastingWidget_C.SetCancelMessage
inline void UUW-CastingWidget_C::SetCancelMessage(struct FText Desc) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CastingWidget.UW-CastingWidget_C.SetCancelMessage");

	struct SetCancelMessage_Params {
		struct FText Desc;
	}; SetCancelMessage_Params Params;

	Params.Desc = Desc;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CastingWidget.UW-CastingWidget_C.PreConstruct
inline void UUW-CastingWidget_C::PreConstruct(char IsDesignTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CastingWidget.UW-CastingWidget_C.PreConstruct");

	struct PreConstruct_Params {
		char IsDesignTime;
	}; PreConstruct_Params Params;

	Params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CastingWidget.UW-CastingWidget_C.ExecuteUbergraph_UW-CastingWidget
inline void UUW-CastingWidget_C::ExecuteUbergraph_UW-CastingWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CastingWidget.UW-CastingWidget_C.ExecuteUbergraph_UW-CastingWidget");

	struct ExecuteUbergraph_UW-CastingWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-CastingWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

