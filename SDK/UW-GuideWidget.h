// WidgetBlueprintGeneratedClass UW-GuideWidget.UW-GuideWidget_C
class UUW-GuideWidget_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown ADS_Pannel; // 0x250 (8)
	struct Unknown ADSZoom; // 0x258 (8)
	struct Unknown CanvasPanel_Main; // 0x260 (8)
	struct Unknown Descent; // 0x268 (8)
	struct Unknown Descent_Pannel; // 0x270 (8)
	struct Unknown Drive; // 0x278 (8)
	struct Unknown Drive_Pannel; // 0x280 (8)
	struct Unknown Key_ADSZeroingM; // 0x288 (8)
	struct Unknown Key_ADSZeroingP; // 0x290 (8)
	struct Unknown Key_ADSZoomIn; // 0x298 (8)
	struct Unknown Key_ADSZoomOut; // 0x2A0 (8)
	struct Unknown Ladder; // 0x2A8 (8)
	struct Unknown Ladder_Pannel; // 0x2B0 (8)
	struct Unknown Parachuting; // 0x2B8 (8)
	struct Unknown Parachuting_Pannel; // 0x2C0 (8)
	struct Unknown SmartPing; // 0x2C8 (8)
	struct Unknown SmartPing_Pannel; // 0x2D0 (8)
	struct Unknown Spectate; // 0x2D8 (8)
	struct Unknown Spectate_Pannel; // 0x2E0 (8)
	struct Unknown Swim; // 0x2E8 (8)
	struct Unknown Swim_Pannel; // 0x2F0 (8)
	struct Unknown T_ADSZeroingM; // 0x2F8 (8)
	struct Unknown T_ADSZeroingP; // 0x300 (8)
	struct Unknown T_ADSZoomIn; // 0x308 (8)
	struct Unknown T_ADSZoomOut; // 0x310 (8)
	struct Unknown UseItem; // 0x318 (8)
	struct Unknown UseItem_Pannel; // 0x320 (8)
	struct Unknown WidgetSwitcher_Guide; // 0x328 (8)
	struct Unknown WorldMap; // 0x330 (8)
	struct Unknown WorldMap_Always; // 0x338 (8)
	struct Unknown WorldMap_Pannel; // 0x340 (8)

	void UpdateWorldMapGuideOpacity(int32_t PreZoomLevel, int32_t NewZoomLevel); // Function UW-GuideWidget.UW-GuideWidget_C.UpdateWorldMapGuideOpacity(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void CheckMainVisibility(); // Function UW-GuideWidget.UW-GuideWidget_C.CheckMainVisibility(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void RefreshKeys(); // Function UW-GuideWidget.UW-GuideWidget_C.RefreshKeys(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void CheckADSMode(); // Function UW-GuideWidget.UW-GuideWidget_C.CheckADSMode(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void UpdateVisibleSpectateWidget(); // Function UW-GuideWidget.UW-GuideWidget_C.UpdateVisibleSpectateWidget(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetGuideMode(struct FText Message); // Function UW-GuideWidget.UW-GuideWidget_C.SetGuideMode(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetVisibilityByUserSettings(); // Function UW-GuideWidget.UW-GuideWidget_C.SetVisibilityByUserSettings(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Construct(); // Function UW-GuideWidget.UW-GuideWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnChangedPlayerInfosDelegate_Event_1(); // Function UW-GuideWidget.UW-GuideWidget_C.OnChangedPlayerInfosDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Destruct(); // Function UW-GuideWidget.UW-GuideWidget_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnGameUserSettingsApply_Key_Event_1(struct TArray<Unknown>& List); // Function UW-GuideWidget.UW-GuideWidget_C.OnGameUserSettingsApply_Key_Event_1(HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnChangeWorldMapZoomLevelDelegate_Event_1(int32_t PreZoomLevel, int32_t NewZoomLevel); // Function UW-GuideWidget.UW-GuideWidget_C.OnChangeWorldMapZoomLevelDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_UW-GuideWidget(int32_t EntryPoint); // Function UW-GuideWidget.UW-GuideWidget_C.ExecuteUbergraph_UW-GuideWidget(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B812B0>
};

// Function UW-GuideWidget.UW-GuideWidget_C.UpdateWorldMapGuideOpacity
inline void UUW-GuideWidget_C::UpdateWorldMapGuideOpacity(int32_t PreZoomLevel, int32_t NewZoomLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GuideWidget.UW-GuideWidget_C.UpdateWorldMapGuideOpacity");

	struct UpdateWorldMapGuideOpacity_Params {
		int32_t PreZoomLevel;
		int32_t NewZoomLevel;
	}; UpdateWorldMapGuideOpacity_Params Params;

	Params.PreZoomLevel = PreZoomLevel;
	Params.NewZoomLevel = NewZoomLevel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GuideWidget.UW-GuideWidget_C.CheckMainVisibility
inline void UUW-GuideWidget_C::CheckMainVisibility() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GuideWidget.UW-GuideWidget_C.CheckMainVisibility");

	struct CheckMainVisibility_Params {
		
	}; CheckMainVisibility_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GuideWidget.UW-GuideWidget_C.RefreshKeys
inline void UUW-GuideWidget_C::RefreshKeys() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GuideWidget.UW-GuideWidget_C.RefreshKeys");

	struct RefreshKeys_Params {
		
	}; RefreshKeys_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GuideWidget.UW-GuideWidget_C.CheckADSMode
inline void UUW-GuideWidget_C::CheckADSMode() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GuideWidget.UW-GuideWidget_C.CheckADSMode");

	struct CheckADSMode_Params {
		
	}; CheckADSMode_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GuideWidget.UW-GuideWidget_C.UpdateVisibleSpectateWidget
inline void UUW-GuideWidget_C::UpdateVisibleSpectateWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GuideWidget.UW-GuideWidget_C.UpdateVisibleSpectateWidget");

	struct UpdateVisibleSpectateWidget_Params {
		
	}; UpdateVisibleSpectateWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GuideWidget.UW-GuideWidget_C.SetGuideMode
inline void UUW-GuideWidget_C::SetGuideMode(struct FText Message) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GuideWidget.UW-GuideWidget_C.SetGuideMode");

	struct SetGuideMode_Params {
		struct FText Message;
	}; SetGuideMode_Params Params;

	Params.Message = Message;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GuideWidget.UW-GuideWidget_C.SetVisibilityByUserSettings
inline void UUW-GuideWidget_C::SetVisibilityByUserSettings() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GuideWidget.UW-GuideWidget_C.SetVisibilityByUserSettings");

	struct SetVisibilityByUserSettings_Params {
		
	}; SetVisibilityByUserSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GuideWidget.UW-GuideWidget_C.Construct
inline void UUW-GuideWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GuideWidget.UW-GuideWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GuideWidget.UW-GuideWidget_C.OnChangedPlayerInfosDelegate_Event_1
inline void UUW-GuideWidget_C::OnChangedPlayerInfosDelegate_Event_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GuideWidget.UW-GuideWidget_C.OnChangedPlayerInfosDelegate_Event_1");

	struct OnChangedPlayerInfosDelegate_Event_1_Params {
		
	}; OnChangedPlayerInfosDelegate_Event_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GuideWidget.UW-GuideWidget_C.Destruct
inline void UUW-GuideWidget_C::Destruct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GuideWidget.UW-GuideWidget_C.Destruct");

	struct Destruct_Params {
		
	}; Destruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GuideWidget.UW-GuideWidget_C.OnGameUserSettingsApply_Key_Event_1
inline void UUW-GuideWidget_C::OnGameUserSettingsApply_Key_Event_1(struct TArray<Unknown>& List) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GuideWidget.UW-GuideWidget_C.OnGameUserSettingsApply_Key_Event_1");

	struct OnGameUserSettingsApply_Key_Event_1_Params {
		struct TArray<Unknown>& List;
	}; OnGameUserSettingsApply_Key_Event_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	List = Params.List;

}

// Function UW-GuideWidget.UW-GuideWidget_C.OnChangeWorldMapZoomLevelDelegate_Event_1
inline void UUW-GuideWidget_C::OnChangeWorldMapZoomLevelDelegate_Event_1(int32_t PreZoomLevel, int32_t NewZoomLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GuideWidget.UW-GuideWidget_C.OnChangeWorldMapZoomLevelDelegate_Event_1");

	struct OnChangeWorldMapZoomLevelDelegate_Event_1_Params {
		int32_t PreZoomLevel;
		int32_t NewZoomLevel;
	}; OnChangeWorldMapZoomLevelDelegate_Event_1_Params Params;

	Params.PreZoomLevel = PreZoomLevel;
	Params.NewZoomLevel = NewZoomLevel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GuideWidget.UW-GuideWidget_C.ExecuteUbergraph_UW-GuideWidget
inline void UUW-GuideWidget_C::ExecuteUbergraph_UW-GuideWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GuideWidget.UW-GuideWidget_C.ExecuteUbergraph_UW-GuideWidget");

	struct ExecuteUbergraph_UW-GuideWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-GuideWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

