// WidgetBlueprintGeneratedClass UW-GuideWidget.UW-GuideWidget_C
class UUW-GuideWidget_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UCanvasPanel ADS_Pannel; // 0x250 (8)
	struct UHorizontalBox ADSZoom; // 0x258 (8)
	struct UCanvasPanel CanvasPanel_Main; // 0x260 (8)
	struct UHorizontalBox Descent; // 0x268 (8)
	struct UCanvasPanel Descent_Pannel; // 0x270 (8)
	struct UVerticalBox Drive; // 0x278 (8)
	struct UCanvasPanel Drive_Pannel; // 0x280 (8)
	struct UKeyImageWidget_C Key_ADSZeroingM; // 0x288 (8)
	struct UKeyImageWidget_C Key_ADSZeroingP; // 0x290 (8)
	struct UKeyImageWidget_C Key_ADSZoomIn; // 0x298 (8)
	struct UKeyImageWidget_C Key_ADSZoomOut; // 0x2A0 (8)
	struct UHorizontalBox Ladder; // 0x2A8 (8)
	struct UCanvasPanel Ladder_Pannel; // 0x2B0 (8)
	struct UHorizontalBox Parachuting; // 0x2B8 (8)
	struct UCanvasPanel Parachuting_Pannel; // 0x2C0 (8)
	struct UHorizontalBox SmartPing; // 0x2C8 (8)
	struct UCanvasPanel SmartPing_Pannel; // 0x2D0 (8)
	struct UHorizontalBox Spectate; // 0x2D8 (8)
	struct UCanvasPanel Spectate_Pannel; // 0x2E0 (8)
	struct UHorizontalBox Swim; // 0x2E8 (8)
	struct UCanvasPanel Swim_Pannel; // 0x2F0 (8)
	struct UTextBlock T_ADSZeroingM; // 0x2F8 (8)
	struct UTextBlock T_ADSZeroingP; // 0x300 (8)
	struct UTextBlock T_ADSZoomIn; // 0x308 (8)
	struct UTextBlock T_ADSZoomOut; // 0x310 (8)
	struct UHorizontalBox UseItem; // 0x318 (8)
	struct UCanvasPanel UseItem_Pannel; // 0x320 (8)
	struct UWidgetSwitcher WidgetSwitcher_Guide; // 0x328 (8)
	struct UHorizontalBox WorldMap; // 0x330 (8)
	struct UHorizontalBox WorldMap_Always; // 0x338 (8)
	struct UCanvasPanel WorldMap_Pannel; // 0x340 (8)
	enum class EToggleWidgetModeType CurrentToggleWidgetType; // 0x348 (1)

	void UpdateWorldMapGuideOpacity(int32_t PreZoomLevel, int32_t NewZoomLevel); // Function UW-GuideWidget.UW-GuideWidget_C.UpdateWorldMapGuideOpacity(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CheckMainVisibility(); // Function UW-GuideWidget.UW-GuideWidget_C.CheckMainVisibility(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void RefreshKeys(); // Function UW-GuideWidget.UW-GuideWidget_C.RefreshKeys(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CheckADSMode(); // Function UW-GuideWidget.UW-GuideWidget_C.CheckADSMode(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateVisibleSpectateWidget(); // Function UW-GuideWidget.UW-GuideWidget_C.UpdateVisibleSpectateWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetGuideMode(struct FText Message); // Function UW-GuideWidget.UW-GuideWidget_C.SetGuideMode(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetVisibilityByUserSettings(); // Function UW-GuideWidget.UW-GuideWidget_C.SetVisibilityByUserSettings(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Construct(); // Function UW-GuideWidget.UW-GuideWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnChangedPlayerInfosDelegate_Event_1(); // Function UW-GuideWidget.UW-GuideWidget_C.OnChangedPlayerInfosDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Destruct(); // Function UW-GuideWidget.UW-GuideWidget_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnGameUserSettingsApply_Key_Event_1(struct TArray<enum class EKeySettingType>& List); // Function UW-GuideWidget.UW-GuideWidget_C.OnGameUserSettingsApply_Key_Event_1(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnChangeWorldMapZoomLevelDelegate_Event_1(int32_t PreZoomLevel, int32_t NewZoomLevel); // Function UW-GuideWidget.UW-GuideWidget_C.OnChangeWorldMapZoomLevelDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnToggleWidgetDelegate_Event_1(enum class EToggleWidgetModeType& ToggleType); // Function UW-GuideWidget.UW-GuideWidget_C.OnToggleWidgetDelegate_Event_1(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_UW-GuideWidget(int32_t EntryPoint); // Function UW-GuideWidget.UW-GuideWidget_C.ExecuteUbergraph_UW-GuideWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
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
inline void UUW-GuideWidget_C::OnGameUserSettingsApply_Key_Event_1(struct TArray<enum class EKeySettingType>& List) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GuideWidget.UW-GuideWidget_C.OnGameUserSettingsApply_Key_Event_1");

	struct OnGameUserSettingsApply_Key_Event_1_Params {
		struct TArray<enum class EKeySettingType>& List;
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

// Function UW-GuideWidget.UW-GuideWidget_C.OnToggleWidgetDelegate_Event_1
inline void UUW-GuideWidget_C::OnToggleWidgetDelegate_Event_1(enum class EToggleWidgetModeType& ToggleType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GuideWidget.UW-GuideWidget_C.OnToggleWidgetDelegate_Event_1");

	struct OnToggleWidgetDelegate_Event_1_Params {
		enum class EToggleWidgetModeType& ToggleType;
	}; OnToggleWidgetDelegate_Event_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ToggleType = Params.ToggleType;

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

