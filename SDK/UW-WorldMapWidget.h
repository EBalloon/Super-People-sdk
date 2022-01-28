// WidgetBlueprintGeneratedClass UW-WorldMapWidget.UW-WorldMapWidget_C
class UUW-WorldMapWidget_C : public UBravoHotelWorldMapWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2B8 (8)
	struct UWidgetAnimation FadeIn; // 0x2C0 (8)
	struct UWidgetAnimation NewAnimation_2; // 0x2C8 (8)
	struct UImage Bg; // 0x2D0 (8)
	struct UBP-CheckWeightMap_C BP-CheckWeightMap; // 0x2D8 (8)
	struct UUW-MapComp_C BP-MapComp; // 0x2E0 (8)
	struct UButton CloseButton; // 0x2E8 (8)
	struct UButton ShowHelBoxButton; // 0x2F0 (8)
	struct UUW-ClassinfoitemBoardWidget_C UW-ClassinfoitemBoardWidget; // 0x2F8 (8)
	struct UWidgetSwitcher WidgetSwitcher_1; // 0x300 (8)
	int32_t MAX_ZOOM_LEVEL; // 0x308 (4)
	int32_t zoomLevel; // 0x30C (4)
	float MAX_SCALE_FACTOR; // 0x310 (4)
	int32_t InitializeCount; // 0x314 (4)
	struct FVector2D PosOnViewport; // 0x318 (8)
	float CurrentScaleFactor; // 0x320 (4)
	struct FVector2D MouseButtonDownPos; // 0x324 (8)
	struct FTimerHandle SelectPingMenuTimer; // 0x330 (8)
	struct UWBP_SPS_SelectionMenu_C SelectionMenu; // 0x338 (8)
	char IsRoutePing : 0; // 0x340 (1)
	int32_t MaxRoutePointCount; // 0x344 (4)
	struct TArray<struct FVector> RoutePointArray; // 0x348 (16)

	struct UBravoHotelMapCompWidget GetMapCompWidget(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.GetMapCompWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetClassInfoBoardVisibilityByZoomLevel(int32_t LastZoomLevel, int32_t NewZoomLevel); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.SetClassInfoBoardVisibilityByZoomLevel(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void GetZoomLevel(int32_t& zoomLevel); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.GetZoomLevel(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void StopRoutePing(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.StopRoutePing(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateRoutePing(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.UpdateRoutePing(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void IsFullRoutePing(char& NewParam); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.IsFullRoutePing(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CheckRoutePing(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.CheckRoutePing(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ResetRoutePing(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.ResetRoutePing(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AddRoutePing(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.AddRoutePing(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetRoutePing(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.SetRoutePing(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetVisiblePingMenu(char Visible); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.SetVisiblePingMenu(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void DebugStringOnMap(struct FString DebugString, struct FVector WorldPosition, float RemainTime, float FontSize); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.DebugStringOnMap(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnMapDragging(struct FVector2D deltaOnViewport); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnMapDragging(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void RemoveMarker(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.RemoveMarker(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnMapRightClick(struct FVector2D PosOnViewport, char IsAgree, struct FVector ForceLocation); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnMapRightClick(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetZoom(int32_t NewZoomLevel); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.SetZoom(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnMapZoomOut(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnMapZoomOut(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnMapZoomIn(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnMapZoomIn(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CalcScaleFactorByZoom(int32_t zoomLevel, float& ScaleFactor); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.CalcScaleFactorByZoom(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void IsZoomLevelInRange(int32_t zoomLevel, char& Ret); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.IsZoomLevelInRange(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Construct(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_91_OnButtonClickedEvent__DelegateSignature(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_91_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__ShowHelBoxButton_K2Node_ComponentBoundEvent_452_OnButtonClickedEvent__DelegateSignature(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.BndEvt__ShowHelBoxButton_K2Node_ComponentBoundEvent_452_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnAttackedWidget(int32_t UniquePlayerId); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnAttackedWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnFireWidget(int32_t UniquePlayerId, struct FRotator Rotation, float Length); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnFireWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnViewportSized(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnViewportSized(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void NotifyTargetPawnPos(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.NotifyTargetPawnPos(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateWorldMapClassInfo(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.UpdateWorldMapClassInfo(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnInputSmartPingAgreeWorldMap(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnInputSmartPingAgreeWorldMap(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnInputStopSmartPingWorldMap(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnInputStopSmartPingWorldMap(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnInputSmartPingMenuWorldMap(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnInputSmartPingMenuWorldMap(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnInputSmartPingWorldMap(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnInputSmartPingWorldMap(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void 鉹@t元_1(char IsShow); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.鉹@t元_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowPingMenu(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.ShowPingMenu(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnMouseButtonDownOnMap(struct FKey Button, struct FVector2D PosOnViewport); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnMouseButtonDownOnMap(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnMouseButtonUpOnMap(struct FKey Button, struct FVector2D PosOnViewport); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnMouseButtonUpOnMap(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnDraggingOnMap(struct FVector2D Delta); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnDraggingOnMap(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnWheelOnMap(float Delta, struct FVector2D PosOnViewport); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnWheelOnMap(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnObjectClickOnMap(struct FKey Button, char mapObjectID); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnObjectClickOnMap(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_UW-WorldMapWidget(int32_t EntryPoint); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.ExecuteUbergraph_UW-WorldMapWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.GetMapCompWidget
inline struct UBravoHotelMapCompWidget UUW-WorldMapWidget_C::GetMapCompWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.GetMapCompWidget");

	struct GetMapCompWidget_Params {
		
		struct UBravoHotelMapCompWidget ReturnValue;

	}; GetMapCompWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.SetClassInfoBoardVisibilityByZoomLevel
inline void UUW-WorldMapWidget_C::SetClassInfoBoardVisibilityByZoomLevel(int32_t LastZoomLevel, int32_t NewZoomLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.SetClassInfoBoardVisibilityByZoomLevel");

	struct SetClassInfoBoardVisibilityByZoomLevel_Params {
		int32_t LastZoomLevel;
		int32_t NewZoomLevel;
	}; SetClassInfoBoardVisibilityByZoomLevel_Params Params;

	Params.LastZoomLevel = LastZoomLevel;
	Params.NewZoomLevel = NewZoomLevel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.GetZoomLevel
inline void UUW-WorldMapWidget_C::GetZoomLevel(int32_t& zoomLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.GetZoomLevel");

	struct GetZoomLevel_Params {
		int32_t& zoomLevel;
	}; GetZoomLevel_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	zoomLevel = Params.zoomLevel;

}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.StopRoutePing
inline void UUW-WorldMapWidget_C::StopRoutePing() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.StopRoutePing");

	struct StopRoutePing_Params {
		
	}; StopRoutePing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.UpdateRoutePing
inline void UUW-WorldMapWidget_C::UpdateRoutePing() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.UpdateRoutePing");

	struct UpdateRoutePing_Params {
		
	}; UpdateRoutePing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.IsFullRoutePing
inline void UUW-WorldMapWidget_C::IsFullRoutePing(char& NewParam) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.IsFullRoutePing");

	struct IsFullRoutePing_Params {
		char& NewParam;
	}; IsFullRoutePing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NewParam = Params.NewParam;

}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.CheckRoutePing
inline void UUW-WorldMapWidget_C::CheckRoutePing() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.CheckRoutePing");

	struct CheckRoutePing_Params {
		
	}; CheckRoutePing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.ResetRoutePing
inline void UUW-WorldMapWidget_C::ResetRoutePing() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.ResetRoutePing");

	struct ResetRoutePing_Params {
		
	}; ResetRoutePing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.AddRoutePing
inline void UUW-WorldMapWidget_C::AddRoutePing() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.AddRoutePing");

	struct AddRoutePing_Params {
		
	}; AddRoutePing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.SetRoutePing
inline void UUW-WorldMapWidget_C::SetRoutePing() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.SetRoutePing");

	struct SetRoutePing_Params {
		
	}; SetRoutePing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.SetVisiblePingMenu
inline void UUW-WorldMapWidget_C::SetVisiblePingMenu(char Visible) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.SetVisiblePingMenu");

	struct SetVisiblePingMenu_Params {
		char Visible;
	}; SetVisiblePingMenu_Params Params;

	Params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.DebugStringOnMap
inline void UUW-WorldMapWidget_C::DebugStringOnMap(struct FString DebugString, struct FVector WorldPosition, float RemainTime, float FontSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.DebugStringOnMap");

	struct DebugStringOnMap_Params {
		struct FString DebugString;
		struct FVector WorldPosition;
		float RemainTime;
		float FontSize;
	}; DebugStringOnMap_Params Params;

	Params.DebugString = DebugString;
	Params.WorldPosition = WorldPosition;
	Params.RemainTime = RemainTime;
	Params.FontSize = FontSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnMapDragging
inline void UUW-WorldMapWidget_C::OnMapDragging(struct FVector2D deltaOnViewport) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnMapDragging");

	struct OnMapDragging_Params {
		struct FVector2D deltaOnViewport;
	}; OnMapDragging_Params Params;

	Params.deltaOnViewport = deltaOnViewport;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.RemoveMarker
inline void UUW-WorldMapWidget_C::RemoveMarker() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.RemoveMarker");

	struct RemoveMarker_Params {
		
	}; RemoveMarker_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnMapRightClick
inline void UUW-WorldMapWidget_C::OnMapRightClick(struct FVector2D PosOnViewport, char IsAgree, struct FVector ForceLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnMapRightClick");

	struct OnMapRightClick_Params {
		struct FVector2D PosOnViewport;
		char IsAgree;
		struct FVector ForceLocation;
	}; OnMapRightClick_Params Params;

	Params.PosOnViewport = PosOnViewport;
	Params.IsAgree = IsAgree;
	Params.ForceLocation = ForceLocation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.SetZoom
inline void UUW-WorldMapWidget_C::SetZoom(int32_t NewZoomLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.SetZoom");

	struct SetZoom_Params {
		int32_t NewZoomLevel;
	}; SetZoom_Params Params;

	Params.NewZoomLevel = NewZoomLevel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnMapZoomOut
inline void UUW-WorldMapWidget_C::OnMapZoomOut() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnMapZoomOut");

	struct OnMapZoomOut_Params {
		
	}; OnMapZoomOut_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnMapZoomIn
inline void UUW-WorldMapWidget_C::OnMapZoomIn() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnMapZoomIn");

	struct OnMapZoomIn_Params {
		
	}; OnMapZoomIn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.CalcScaleFactorByZoom
inline void UUW-WorldMapWidget_C::CalcScaleFactorByZoom(int32_t zoomLevel, float& ScaleFactor) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.CalcScaleFactorByZoom");

	struct CalcScaleFactorByZoom_Params {
		int32_t zoomLevel;
		float& ScaleFactor;
	}; CalcScaleFactorByZoom_Params Params;

	Params.zoomLevel = zoomLevel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ScaleFactor = Params.ScaleFactor;

}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.IsZoomLevelInRange
inline void UUW-WorldMapWidget_C::IsZoomLevelInRange(int32_t zoomLevel, char& Ret) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.IsZoomLevelInRange");

	struct IsZoomLevelInRange_Params {
		int32_t zoomLevel;
		char& Ret;
	}; IsZoomLevelInRange_Params Params;

	Params.zoomLevel = zoomLevel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Ret = Params.Ret;

}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.Construct
inline void UUW-WorldMapWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.Tick
inline void UUW-WorldMapWidget_C::Tick(struct FGeometry MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.Tick");

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

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_91_OnButtonClickedEvent__DelegateSignature
inline void UUW-WorldMapWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_91_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_91_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_0_K2Node_ComponentBoundEvent_91_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_0_K2Node_ComponentBoundEvent_91_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.BndEvt__ShowHelBoxButton_K2Node_ComponentBoundEvent_452_OnButtonClickedEvent__DelegateSignature
inline void UUW-WorldMapWidget_C::BndEvt__ShowHelBoxButton_K2Node_ComponentBoundEvent_452_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.BndEvt__ShowHelBoxButton_K2Node_ComponentBoundEvent_452_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__ShowHelBoxButton_K2Node_ComponentBoundEvent_452_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__ShowHelBoxButton_K2Node_ComponentBoundEvent_452_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnAttackedWidget
inline void UUW-WorldMapWidget_C::OnAttackedWidget(int32_t UniquePlayerId) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnAttackedWidget");

	struct OnAttackedWidget_Params {
		int32_t UniquePlayerId;
	}; OnAttackedWidget_Params Params;

	Params.UniquePlayerId = UniquePlayerId;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnFireWidget
inline void UUW-WorldMapWidget_C::OnFireWidget(int32_t UniquePlayerId, struct FRotator Rotation, float Length) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnFireWidget");

	struct OnFireWidget_Params {
		int32_t UniquePlayerId;
		struct FRotator Rotation;
		float Length;
	}; OnFireWidget_Params Params;

	Params.UniquePlayerId = UniquePlayerId;
	Params.Rotation = Rotation;
	Params.Length = Length;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnViewportSized
inline void UUW-WorldMapWidget_C::OnViewportSized() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnViewportSized");

	struct OnViewportSized_Params {
		
	}; OnViewportSized_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.NotifyTargetPawnPos
inline void UUW-WorldMapWidget_C::NotifyTargetPawnPos() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.NotifyTargetPawnPos");

	struct NotifyTargetPawnPos_Params {
		
	}; NotifyTargetPawnPos_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.UpdateWorldMapClassInfo
inline void UUW-WorldMapWidget_C::UpdateWorldMapClassInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.UpdateWorldMapClassInfo");

	struct UpdateWorldMapClassInfo_Params {
		
	}; UpdateWorldMapClassInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnInputSmartPingAgreeWorldMap
inline void UUW-WorldMapWidget_C::OnInputSmartPingAgreeWorldMap() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnInputSmartPingAgreeWorldMap");

	struct OnInputSmartPingAgreeWorldMap_Params {
		
	}; OnInputSmartPingAgreeWorldMap_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnInputStopSmartPingWorldMap
inline void UUW-WorldMapWidget_C::OnInputStopSmartPingWorldMap() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnInputStopSmartPingWorldMap");

	struct OnInputStopSmartPingWorldMap_Params {
		
	}; OnInputStopSmartPingWorldMap_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnInputSmartPingMenuWorldMap
inline void UUW-WorldMapWidget_C::OnInputSmartPingMenuWorldMap() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnInputSmartPingMenuWorldMap");

	struct OnInputSmartPingMenuWorldMap_Params {
		
	}; OnInputSmartPingMenuWorldMap_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnInputSmartPingWorldMap
inline void UUW-WorldMapWidget_C::OnInputSmartPingWorldMap() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnInputSmartPingWorldMap");

	struct OnInputSmartPingWorldMap_Params {
		
	}; OnInputSmartPingWorldMap_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.鉹@t元_1
inline void UUW-WorldMapWidget_C::鉹@t元_1(char IsShow) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.鉹@t元_1");

	struct 鉹@t元_1_Params {
		char IsShow;
	}; 鉹@t元_1_Params Params;

	Params.IsShow = IsShow;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.ShowPingMenu
inline void UUW-WorldMapWidget_C::ShowPingMenu() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.ShowPingMenu");

	struct ShowPingMenu_Params {
		
	}; ShowPingMenu_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnMouseButtonDownOnMap
inline void UUW-WorldMapWidget_C::OnMouseButtonDownOnMap(struct FKey Button, struct FVector2D PosOnViewport) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnMouseButtonDownOnMap");

	struct OnMouseButtonDownOnMap_Params {
		struct FKey Button;
		struct FVector2D PosOnViewport;
	}; OnMouseButtonDownOnMap_Params Params;

	Params.Button = Button;
	Params.PosOnViewport = PosOnViewport;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnMouseButtonUpOnMap
inline void UUW-WorldMapWidget_C::OnMouseButtonUpOnMap(struct FKey Button, struct FVector2D PosOnViewport) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnMouseButtonUpOnMap");

	struct OnMouseButtonUpOnMap_Params {
		struct FKey Button;
		struct FVector2D PosOnViewport;
	}; OnMouseButtonUpOnMap_Params Params;

	Params.Button = Button;
	Params.PosOnViewport = PosOnViewport;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnDraggingOnMap
inline void UUW-WorldMapWidget_C::OnDraggingOnMap(struct FVector2D Delta) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnDraggingOnMap");

	struct OnDraggingOnMap_Params {
		struct FVector2D Delta;
	}; OnDraggingOnMap_Params Params;

	Params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnWheelOnMap
inline void UUW-WorldMapWidget_C::OnWheelOnMap(float Delta, struct FVector2D PosOnViewport) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnWheelOnMap");

	struct OnWheelOnMap_Params {
		float Delta;
		struct FVector2D PosOnViewport;
	}; OnWheelOnMap_Params Params;

	Params.Delta = Delta;
	Params.PosOnViewport = PosOnViewport;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnObjectClickOnMap
inline void UUW-WorldMapWidget_C::OnObjectClickOnMap(struct FKey Button, char mapObjectID) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnObjectClickOnMap");

	struct OnObjectClickOnMap_Params {
		struct FKey Button;
		char mapObjectID;
	}; OnObjectClickOnMap_Params Params;

	Params.Button = Button;
	Params.mapObjectID = mapObjectID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapWidget.UW-WorldMapWidget_C.ExecuteUbergraph_UW-WorldMapWidget
inline void UUW-WorldMapWidget_C::ExecuteUbergraph_UW-WorldMapWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapWidget.UW-WorldMapWidget_C.ExecuteUbergraph_UW-WorldMapWidget");

	struct ExecuteUbergraph_UW-WorldMapWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-WorldMapWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

