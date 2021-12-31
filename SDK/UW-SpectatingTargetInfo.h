// WidgetBlueprintGeneratedClass UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C
class UUW-SpectatingTargetInfo_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Spectator_Ani; // 0x250 (8)
	struct Unknown Button_Report; // 0x258 (8)
	struct Unknown Canvas_Finding; // 0x260 (8)
	struct Unknown Canvas_Target; // 0x268 (8)
	struct Unknown Deco; // 0x270 (8)
	struct Unknown Image_351; // 0x278 (8)
	struct Unknown IMG_ClassIcon; // 0x280 (8)
	struct Unknown NickName; // 0x288 (8)
	struct Unknown Overlay_Report; // 0x290 (8)
	struct Unknown ReportDescriptionText; // 0x298 (8)
	struct Unknown Text_Report; // 0x2A0 (8)
	struct Unknown TextBlock_3; // 0x2A8 (8)
	struct Unknown TextBlock_208; // 0x2B0 (8)
	struct Unknown VerticalBox_Report; // 0x2B8 (8)
	struct Unknown WidgetSwitcher_136; // 0x2C0 (8)
	char IsReportAbleDateTime : 0; // 0x2C8 (1)
	struct Unknown TargetPlayerState; // 0x2D0 (8)

	void ReportSended(); // Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.ReportSended(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Check Report Enable From User Name(); // Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.Check Report Enable From User Name(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetTargetPlayerInfo(struct Unknown PlayerState); // Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.SetTargetPlayerInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnLoaded_4A4EF93A4D64362A89D43DA6D9BD2749(struct Unknown Loaded); // Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.OnLoaded_4A4EF93A4D64362A89D43DA6D9BD2749(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void AsyncClassIcon(struct Unknown Image); // Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.AsyncClassIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__Button_Report_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.BndEvt__Button_Report_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Construct(); // Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__Button_Report_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.BndEvt__Button_Report_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__Button_Report_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.BndEvt__Button_Report_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetReplayReportAbleDateTime(); // Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.SetReplayReportAbleDateTime(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void CheckTargetValid(); // Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.CheckTargetValid(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_UW-SpectatingTargetInfo(int32_t EntryPoint); // Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.ExecuteUbergraph_UW-SpectatingTargetInfo(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.ReportSended
inline void UUW-SpectatingTargetInfo_C::ReportSended() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.ReportSended");

	struct ReportSended_Params {
		
	}; ReportSended_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.Check Report Enable From User Name
inline void UUW-SpectatingTargetInfo_C::Check Report Enable From User Name() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.Check Report Enable From User Name");

	struct Check Report Enable From User Name_Params {
		
	}; Check Report Enable From User Name_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.SetTargetPlayerInfo
inline void UUW-SpectatingTargetInfo_C::SetTargetPlayerInfo(struct Unknown PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.SetTargetPlayerInfo");

	struct SetTargetPlayerInfo_Params {
		struct Unknown PlayerState;
	}; SetTargetPlayerInfo_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.OnLoaded_4A4EF93A4D64362A89D43DA6D9BD2749
inline void UUW-SpectatingTargetInfo_C::OnLoaded_4A4EF93A4D64362A89D43DA6D9BD2749(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.OnLoaded_4A4EF93A4D64362A89D43DA6D9BD2749");

	struct OnLoaded_4A4EF93A4D64362A89D43DA6D9BD2749_Params {
		struct Unknown Loaded;
	}; OnLoaded_4A4EF93A4D64362A89D43DA6D9BD2749_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.AsyncClassIcon
inline void UUW-SpectatingTargetInfo_C::AsyncClassIcon(struct Unknown Image) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.AsyncClassIcon");

	struct AsyncClassIcon_Params {
		struct Unknown Image;
	}; AsyncClassIcon_Params Params;

	Params.Image = Image;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.BndEvt__Button_Report_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-SpectatingTargetInfo_C::BndEvt__Button_Report_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.BndEvt__Button_Report_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_Report_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Report_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.Construct
inline void UUW-SpectatingTargetInfo_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.BndEvt__Button_Report_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
inline void UUW-SpectatingTargetInfo_C::BndEvt__Button_Report_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.BndEvt__Button_Report_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_Report_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Report_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.BndEvt__Button_Report_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
inline void UUW-SpectatingTargetInfo_C::BndEvt__Button_Report_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.BndEvt__Button_Report_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_Report_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Report_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.SetReplayReportAbleDateTime
inline void UUW-SpectatingTargetInfo_C::SetReplayReportAbleDateTime() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.SetReplayReportAbleDateTime");

	struct SetReplayReportAbleDateTime_Params {
		
	}; SetReplayReportAbleDateTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.CheckTargetValid
inline void UUW-SpectatingTargetInfo_C::CheckTargetValid() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.CheckTargetValid");

	struct CheckTargetValid_Params {
		
	}; CheckTargetValid_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.ExecuteUbergraph_UW-SpectatingTargetInfo
inline void UUW-SpectatingTargetInfo_C::ExecuteUbergraph_UW-SpectatingTargetInfo(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.ExecuteUbergraph_UW-SpectatingTargetInfo");

	struct ExecuteUbergraph_UW-SpectatingTargetInfo_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-SpectatingTargetInfo_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

