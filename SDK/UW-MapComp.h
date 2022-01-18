// WidgetBlueprintGeneratedClass UW-MapComp.UW-MapComp_C
class UUW-MapComp_C : public UBravoHotelMapCompWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x500 (8)
	struct UCanvasPanel Aircraft; // 0x508 (8)
	struct UImage Background; // 0x510 (8)
	struct UCanvasPanel Canvas; // 0x518 (8)
	struct UInvalidationBox InvalidationBox_1; // 0x520 (8)
	struct UImage TestDescentEndPoint_2; // 0x528 (8)
	struct UImage TestDescentStartPoint_2; // 0x530 (8)
	struct UImage TestLineRouteDotline_2; // 0x538 (8)
	int32_t MapDisplayInfoFlag; // 0x540 (4)
	struct FMulticastInlineDelegate OnWheelOnMap; // 0x548 (16)
	struct FMulticastInlineDelegate OnMouseButtonUpOnMap; // 0x558 (16)
	struct FMulticastInlineDelegate OnObjectClickOnMap; // 0x568 (16)
	struct FMulticastInlineDelegate OnDragginOnMap; // 0x578 (16)
	char IsDragging : 0; // 0x588 (1)
	float DeltaValue; // 0x58C (4)
	struct TArray<struct FString> GridString_XAxis; // 0x590 (16)
	struct TArray<struct FString> GridString_YAxis; // 0x5A0 (16)
	struct UUW-WorldMapMarkerWidget_C PersonalSupplyBoxRef; // 0x5B0 (8)
	struct UUW-PlayerIconWidget_C ReplayFreeCamWidget; // 0x5B8 (8)
	float MapScaleInterpSpeed; // 0x5C0 (4)
	char MouseRightBtnDown : 0; // 0x5C4 (1)
	struct FTimerHandle SelectPingMenuTimer; // 0x5C8 (8)
	struct UWBP_SPS_SelectionMenu_C SelectionMenu; // 0x5D0 (8)
	struct FMulticastInlineDelegate OnMouseButtonDownOnMap; // 0x5D8 (16)
	struct FVector2D MouseButtonDownPos; // 0x5E8 (8)
	char IsUpdateMapScale : 0; // 0x5F0 (1)
	float MapScaleInerpSpeedRatio; // 0x5F4 (4)
	char IsDrawingRoutePing : 0; // 0x5F8 (1)
	struct TArray<struct FVector2D> IgnoreAreaCircleLines; // 0x600 (16)

	void CheckAgreePing(char& bRet, struct FVector& Location); // Function UW-MapComp.UW-MapComp_C.CheckAgreePing(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Get Cur Mouse Point(struct FVector2D& Pos); // Function UW-MapComp.UW-MapComp_C.Get Cur Mouse Point(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void CalcMapScaleInterpSpeed(int32_t TargetZoomLevel); // Function UW-MapComp.UW-MapComp_C.CalcMapScaleInterpSpeed(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Remove Area Widget(enum class EWorldMapAreaWidgetType Type, struct FAreaWidgetInfo Info); // Function UW-MapComp.UW-MapComp_C.Remove Area Widget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void UpdateReplayCircleMask(); // Function UW-MapComp.UW-MapComp_C.UpdateReplayCircleMask(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void UpdateMapPos(); // Function UW-MapComp.UW-MapComp_C.UpdateMapPos(Public|BlueprintCallable|BlueprintEvent|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void UpdateCircleMask(struct FVector2D centerPosOnWorld, float radiusOnWorld, struct FName CirclePosName, struct FName CircleRadiusName, float MaskAdditionalRadius, struct UMaterialInstanceDynamic MaterialInstance); // Function UW-MapComp.UW-MapComp_C.UpdateCircleMask(Public|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Update Circle Masks(); // Function UW-MapComp.UW-MapComp_C.Update Circle Masks(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void UpdateCircleInfosImpl(); // Function UW-MapComp.UW-MapComp_C.UpdateCircleInfosImpl(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void UpdateMapScale(); // Function UW-MapComp.UW-MapComp_C.UpdateMapScale(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void PlayTargetPosAnim(); // Function UW-MapComp.UW-MapComp_C.PlayTargetPosAnim(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void CreatePersonalSupplyBox(); // Function UW-MapComp.UW-MapComp_C.CreatePersonalSupplyBox(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void CreateFreeCamWidget(); // Function UW-MapComp.UW-MapComp_C.CreateFreeCamWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void CreateAirCraftWidget(); // Function UW-MapComp.UW-MapComp_C.CreateAirCraftWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void CreateMapPlayerWidget_Impl(); // Function UW-MapComp.UW-MapComp_C.CreateMapPlayerWidget_Impl(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnAttackedWidget(int32_t UniquePlayerId); // Function UW-MapComp.UW-MapComp_C.OnAttackedWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnFireWidget(int32_t UniquePlayerId, struct FRotator Rotation, float Length); // Function UW-MapComp.UW-MapComp_C.OnFireWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetSkillMapFactor(float Distance, float& Factor); // Function UW-MapComp.UW-MapComp_C.GetSkillMapFactor(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Add Area Widget(enum class EWorldMapAreaWidgetType AreaWidgetType, struct FAreaWidgetInfo AreaWidgetInfo); // Function UW-MapComp.UW-MapComp_C.Add Area Widget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void WantChangeVisibility(enum class ESlateVisibility WantVisibility, struct UWidget ChangeWidget); // Function UW-MapComp.UW-MapComp_C.WantChangeVisibility(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetMiniMapFactor(float& Factor); // Function UW-MapComp.UW-MapComp_C.GetMiniMapFactor(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ConvertSizeWorldToMap(struct FVector2D Size, struct FVector2D& Ret); // Function UW-MapComp.UW-MapComp_C.ConvertSizeWorldToMap(Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnMarkerClicked(struct FKey Button, char mapObjectID); // Function UW-MapComp.UW-MapComp_C.OnMarkerClicked(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void CalPosRelatedMapOnViewport(struct FVector2D PosOnViewport, struct FVector2D& Ret); // Function UW-MapComp.UW-MapComp_C.CalPosRelatedMapOnViewport(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ConvertPosViewportToMap(struct FVector2D PosOnViewport, struct FVector2D& Ret); // Function UW-MapComp.UW-MapComp_C.ConvertPosViewportToMap(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-MapComp.UW-MapComp_C.OnMouseMove(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetMarker(char isOn, struct FVector2D PosOnViewport, float Heigh); // Function UW-MapComp.UW-MapComp_C.SetMarker(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-MapComp.UW-MapComp_C.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-MapComp.UW-MapComp_C.OnMouseButtonUp(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-MapComp.UW-MapComp_C.OnMouseWheel(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnPaint(struct FPaintContext& Context); // Function UW-MapComp.UW-MapComp_C.OnPaint(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void AddWidgetComp(struct UClass* WidgetClass, struct FVector2D Anchor, struct FVector2D Pivot, struct FVector2D Size, int32_t ZOrder, struct UUserWidget& Ret); // Function UW-MapComp.UW-MapComp_C.AddWidgetComp(Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ConvertForwardToDegree(struct FVector Forward, float& Degree); // Function UW-MapComp.UW-MapComp_C.ConvertForwardToDegree(Private|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnLoaded_C5F225F94B2C743064A54D84F3497501(struct Object Loaded); // Function UW-MapComp.UW-MapComp_C.OnLoaded_C5F225F94B2C743064A54D84F3497501(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void DebugStringOnMapEvent(struct FString DebugString, struct FVector WorldPosition, float RemainTime, float FontSize); // Function UW-MapComp.UW-MapComp_C.DebugStringOnMapEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void CreateMapPlayerWidget(); // Function UW-MapComp.UW-MapComp_C.CreateMapPlayerWidget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void UpdateSupplyBoxInfo(); // Function UW-MapComp.UW-MapComp_C.UpdateSupplyBoxInfo(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void UpdateFreeCamPosition(); // Function UW-MapComp.UW-MapComp_C.UpdateFreeCamPosition(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void UpdateFreeCamAngle(); // Function UW-MapComp.UW-MapComp_C.UpdateFreeCamAngle(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetFreeCamEnable(char bEnable); // Function UW-MapComp.UW-MapComp_C.SetFreeCamEnable(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetAircraftVisibility(char bVisible); // Function UW-MapComp.UW-MapComp_C.SetAircraftVisibility(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void PreUpdateComponents(); // Function UW-MapComp.UW-MapComp_C.PreUpdateComponents(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void UpdateCircleInfos(); // Function UW-MapComp.UW-MapComp_C.UpdateCircleInfos(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void UpdateReplayCircleInfos(); // Function UW-MapComp.UW-MapComp_C.UpdateReplayCircleInfos(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetVisiblePingMenu(char Visible); // Function UW-MapComp.UW-MapComp_C.SetVisiblePingMenu(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ChangeMap(char IsWeightMap); // Function UW-MapComp.UW-MapComp_C.ChangeMap(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnMouseUp(struct FPointerEvent Mouse); // Function UW-MapComp.UW-MapComp_C.OnMouseUp(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_UW-MapComp(int32_t EntryPoint); // Function UW-MapComp.UW-MapComp_C.ExecuteUbergraph_UW-MapComp(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnMouseButtonDownOnMap__DelegateSignature(struct FKey Button, struct FVector2D PosOnViewport); // Function UW-MapComp.UW-MapComp_C.OnMouseButtonDownOnMap__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnDragginOnMap__DelegateSignature(struct FVector2D Delta); // Function UW-MapComp.UW-MapComp_C.OnDragginOnMap__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnObjectClickOnMap__DelegateSignature(struct FKey Button, char mapObjectID); // Function UW-MapComp.UW-MapComp_C.OnObjectClickOnMap__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnMouseButtonUpOnMap__DelegateSignature(struct FKey Button, struct FVector2D PosOnViewport); // Function UW-MapComp.UW-MapComp_C.OnMouseButtonUpOnMap__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnWheelOnMap__DelegateSignature(float Delta, struct FVector2D PosOnViewport); // Function UW-MapComp.UW-MapComp_C.OnWheelOnMap__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function UW-MapComp.UW-MapComp_C.CheckAgreePing
inline void UUW-MapComp_C::CheckAgreePing(char& bRet, struct FVector& Location) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.CheckAgreePing");

	struct CheckAgreePing_Params {
		char& bRet;
		struct FVector& Location;
	}; CheckAgreePing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bRet = Params.bRet;
	Location = Params.Location;

}

// Function UW-MapComp.UW-MapComp_C.Get Cur Mouse Point
inline void UUW-MapComp_C::Get Cur Mouse Point(struct FVector2D& Pos) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.Get Cur Mouse Point");

	struct Get Cur Mouse Point_Params {
		struct FVector2D& Pos;
	}; Get Cur Mouse Point_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Pos = Params.Pos;

}

// Function UW-MapComp.UW-MapComp_C.CalcMapScaleInterpSpeed
inline void UUW-MapComp_C::CalcMapScaleInterpSpeed(int32_t TargetZoomLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.CalcMapScaleInterpSpeed");

	struct CalcMapScaleInterpSpeed_Params {
		int32_t TargetZoomLevel;
	}; CalcMapScaleInterpSpeed_Params Params;

	Params.TargetZoomLevel = TargetZoomLevel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.Remove Area Widget
inline void UUW-MapComp_C::Remove Area Widget(enum class EWorldMapAreaWidgetType Type, struct FAreaWidgetInfo Info) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.Remove Area Widget");

	struct Remove Area Widget_Params {
		enum class EWorldMapAreaWidgetType Type;
		struct FAreaWidgetInfo Info;
	}; Remove Area Widget_Params Params;

	Params.Type = Type;
	Params.Info = Info;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.UpdateReplayCircleMask
inline void UUW-MapComp_C::UpdateReplayCircleMask() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.UpdateReplayCircleMask");

	struct UpdateReplayCircleMask_Params {
		
	}; UpdateReplayCircleMask_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.UpdateMapPos
inline void UUW-MapComp_C::UpdateMapPos() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.UpdateMapPos");

	struct UpdateMapPos_Params {
		
	}; UpdateMapPos_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.UpdateCircleMask
inline void UUW-MapComp_C::UpdateCircleMask(struct FVector2D centerPosOnWorld, float radiusOnWorld, struct FName CirclePosName, struct FName CircleRadiusName, float MaskAdditionalRadius, struct UMaterialInstanceDynamic MaterialInstance) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.UpdateCircleMask");

	struct UpdateCircleMask_Params {
		struct FVector2D centerPosOnWorld;
		float radiusOnWorld;
		struct FName CirclePosName;
		struct FName CircleRadiusName;
		float MaskAdditionalRadius;
		struct UMaterialInstanceDynamic MaterialInstance;
	}; UpdateCircleMask_Params Params;

	Params.centerPosOnWorld = centerPosOnWorld;
	Params.radiusOnWorld = radiusOnWorld;
	Params.CirclePosName = CirclePosName;
	Params.CircleRadiusName = CircleRadiusName;
	Params.MaskAdditionalRadius = MaskAdditionalRadius;
	Params.MaterialInstance = MaterialInstance;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.Update Circle Masks
inline void UUW-MapComp_C::Update Circle Masks() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.Update Circle Masks");

	struct Update Circle Masks_Params {
		
	}; Update Circle Masks_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.UpdateCircleInfosImpl
inline void UUW-MapComp_C::UpdateCircleInfosImpl() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.UpdateCircleInfosImpl");

	struct UpdateCircleInfosImpl_Params {
		
	}; UpdateCircleInfosImpl_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.UpdateMapScale
inline void UUW-MapComp_C::UpdateMapScale() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.UpdateMapScale");

	struct UpdateMapScale_Params {
		
	}; UpdateMapScale_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.PlayTargetPosAnim
inline void UUW-MapComp_C::PlayTargetPosAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.PlayTargetPosAnim");

	struct PlayTargetPosAnim_Params {
		
	}; PlayTargetPosAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.CreatePersonalSupplyBox
inline void UUW-MapComp_C::CreatePersonalSupplyBox() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.CreatePersonalSupplyBox");

	struct CreatePersonalSupplyBox_Params {
		
	}; CreatePersonalSupplyBox_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.CreateFreeCamWidget
inline void UUW-MapComp_C::CreateFreeCamWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.CreateFreeCamWidget");

	struct CreateFreeCamWidget_Params {
		
	}; CreateFreeCamWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.CreateAirCraftWidget
inline void UUW-MapComp_C::CreateAirCraftWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.CreateAirCraftWidget");

	struct CreateAirCraftWidget_Params {
		
	}; CreateAirCraftWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.CreateMapPlayerWidget_Impl
inline void UUW-MapComp_C::CreateMapPlayerWidget_Impl() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.CreateMapPlayerWidget_Impl");

	struct CreateMapPlayerWidget_Impl_Params {
		
	}; CreateMapPlayerWidget_Impl_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.OnAttackedWidget
inline void UUW-MapComp_C::OnAttackedWidget(int32_t UniquePlayerId) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.OnAttackedWidget");

	struct OnAttackedWidget_Params {
		int32_t UniquePlayerId;
	}; OnAttackedWidget_Params Params;

	Params.UniquePlayerId = UniquePlayerId;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.OnFireWidget
inline void UUW-MapComp_C::OnFireWidget(int32_t UniquePlayerId, struct FRotator Rotation, float Length) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.OnFireWidget");

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

// Function UW-MapComp.UW-MapComp_C.GetSkillMapFactor
inline void UUW-MapComp_C::GetSkillMapFactor(float Distance, float& Factor) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.GetSkillMapFactor");

	struct GetSkillMapFactor_Params {
		float Distance;
		float& Factor;
	}; GetSkillMapFactor_Params Params;

	Params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Factor = Params.Factor;

}

// Function UW-MapComp.UW-MapComp_C.Add Area Widget
inline void UUW-MapComp_C::Add Area Widget(enum class EWorldMapAreaWidgetType AreaWidgetType, struct FAreaWidgetInfo AreaWidgetInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.Add Area Widget");

	struct Add Area Widget_Params {
		enum class EWorldMapAreaWidgetType AreaWidgetType;
		struct FAreaWidgetInfo AreaWidgetInfo;
	}; Add Area Widget_Params Params;

	Params.AreaWidgetType = AreaWidgetType;
	Params.AreaWidgetInfo = AreaWidgetInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.WantChangeVisibility
inline void UUW-MapComp_C::WantChangeVisibility(enum class ESlateVisibility WantVisibility, struct UWidget ChangeWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.WantChangeVisibility");

	struct WantChangeVisibility_Params {
		enum class ESlateVisibility WantVisibility;
		struct UWidget ChangeWidget;
	}; WantChangeVisibility_Params Params;

	Params.WantVisibility = WantVisibility;
	Params.ChangeWidget = ChangeWidget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.GetMiniMapFactor
inline void UUW-MapComp_C::GetMiniMapFactor(float& Factor) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.GetMiniMapFactor");

	struct GetMiniMapFactor_Params {
		float& Factor;
	}; GetMiniMapFactor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Factor = Params.Factor;

}

// Function UW-MapComp.UW-MapComp_C.ConvertSizeWorldToMap
inline void UUW-MapComp_C::ConvertSizeWorldToMap(struct FVector2D Size, struct FVector2D& Ret) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.ConvertSizeWorldToMap");

	struct ConvertSizeWorldToMap_Params {
		struct FVector2D Size;
		struct FVector2D& Ret;
	}; ConvertSizeWorldToMap_Params Params;

	Params.Size = Size;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Ret = Params.Ret;

}

// Function UW-MapComp.UW-MapComp_C.OnMarkerClicked
inline void UUW-MapComp_C::OnMarkerClicked(struct FKey Button, char mapObjectID) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.OnMarkerClicked");

	struct OnMarkerClicked_Params {
		struct FKey Button;
		char mapObjectID;
	}; OnMarkerClicked_Params Params;

	Params.Button = Button;
	Params.mapObjectID = mapObjectID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.CalPosRelatedMapOnViewport
inline void UUW-MapComp_C::CalPosRelatedMapOnViewport(struct FVector2D PosOnViewport, struct FVector2D& Ret) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.CalPosRelatedMapOnViewport");

	struct CalPosRelatedMapOnViewport_Params {
		struct FVector2D PosOnViewport;
		struct FVector2D& Ret;
	}; CalPosRelatedMapOnViewport_Params Params;

	Params.PosOnViewport = PosOnViewport;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Ret = Params.Ret;

}

// Function UW-MapComp.UW-MapComp_C.ConvertPosViewportToMap
inline void UUW-MapComp_C::ConvertPosViewportToMap(struct FVector2D PosOnViewport, struct FVector2D& Ret) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.ConvertPosViewportToMap");

	struct ConvertPosViewportToMap_Params {
		struct FVector2D PosOnViewport;
		struct FVector2D& Ret;
	}; ConvertPosViewportToMap_Params Params;

	Params.PosOnViewport = PosOnViewport;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Ret = Params.Ret;

}

// Function UW-MapComp.UW-MapComp_C.OnMouseMove
inline struct FEventReply UUW-MapComp_C::OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.OnMouseMove");

	struct OnMouseMove_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseMove_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-MapComp.UW-MapComp_C.SetMarker
inline void UUW-MapComp_C::SetMarker(char isOn, struct FVector2D PosOnViewport, float Heigh) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.SetMarker");

	struct SetMarker_Params {
		char isOn;
		struct FVector2D PosOnViewport;
		float Heigh;
	}; SetMarker_Params Params;

	Params.isOn = isOn;
	Params.PosOnViewport = PosOnViewport;
	Params.Heigh = Heigh;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.OnMouseButtonDown
inline struct FEventReply UUW-MapComp_C::OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.OnMouseButtonDown");

	struct OnMouseButtonDown_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseButtonDown_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-MapComp.UW-MapComp_C.OnMouseButtonUp
inline struct FEventReply UUW-MapComp_C::OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.OnMouseButtonUp");

	struct OnMouseButtonUp_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseButtonUp_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-MapComp.UW-MapComp_C.OnMouseWheel
inline struct FEventReply UUW-MapComp_C::OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.OnMouseWheel");

	struct OnMouseWheel_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseWheel_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-MapComp.UW-MapComp_C.OnPaint
inline void UUW-MapComp_C::OnPaint(struct FPaintContext& Context) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.OnPaint");

	struct OnPaint_Params {
		struct FPaintContext& Context;
	}; OnPaint_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Context = Params.Context;

}

// Function UW-MapComp.UW-MapComp_C.AddWidgetComp
inline void UUW-MapComp_C::AddWidgetComp(struct UClass* WidgetClass, struct FVector2D Anchor, struct FVector2D Pivot, struct FVector2D Size, int32_t ZOrder, struct UUserWidget& Ret) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.AddWidgetComp");

	struct AddWidgetComp_Params {
		struct UClass* WidgetClass;
		struct FVector2D Anchor;
		struct FVector2D Pivot;
		struct FVector2D Size;
		int32_t ZOrder;
		struct UUserWidget& Ret;
	}; AddWidgetComp_Params Params;

	Params.WidgetClass = WidgetClass;
	Params.Anchor = Anchor;
	Params.Pivot = Pivot;
	Params.Size = Size;
	Params.ZOrder = ZOrder;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Ret = Params.Ret;

}

// Function UW-MapComp.UW-MapComp_C.ConvertForwardToDegree
inline void UUW-MapComp_C::ConvertForwardToDegree(struct FVector Forward, float& Degree) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.ConvertForwardToDegree");

	struct ConvertForwardToDegree_Params {
		struct FVector Forward;
		float& Degree;
	}; ConvertForwardToDegree_Params Params;

	Params.Forward = Forward;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Degree = Params.Degree;

}

// Function UW-MapComp.UW-MapComp_C.OnLoaded_C5F225F94B2C743064A54D84F3497501
inline void UUW-MapComp_C::OnLoaded_C5F225F94B2C743064A54D84F3497501(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.OnLoaded_C5F225F94B2C743064A54D84F3497501");

	struct OnLoaded_C5F225F94B2C743064A54D84F3497501_Params {
		struct Object Loaded;
	}; OnLoaded_C5F225F94B2C743064A54D84F3497501_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.DebugStringOnMapEvent
inline void UUW-MapComp_C::DebugStringOnMapEvent(struct FString DebugString, struct FVector WorldPosition, float RemainTime, float FontSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.DebugStringOnMapEvent");

	struct DebugStringOnMapEvent_Params {
		struct FString DebugString;
		struct FVector WorldPosition;
		float RemainTime;
		float FontSize;
	}; DebugStringOnMapEvent_Params Params;

	Params.DebugString = DebugString;
	Params.WorldPosition = WorldPosition;
	Params.RemainTime = RemainTime;
	Params.FontSize = FontSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.CreateMapPlayerWidget
inline void UUW-MapComp_C::CreateMapPlayerWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.CreateMapPlayerWidget");

	struct CreateMapPlayerWidget_Params {
		
	}; CreateMapPlayerWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.UpdateSupplyBoxInfo
inline void UUW-MapComp_C::UpdateSupplyBoxInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.UpdateSupplyBoxInfo");

	struct UpdateSupplyBoxInfo_Params {
		
	}; UpdateSupplyBoxInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.UpdateFreeCamPosition
inline void UUW-MapComp_C::UpdateFreeCamPosition() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.UpdateFreeCamPosition");

	struct UpdateFreeCamPosition_Params {
		
	}; UpdateFreeCamPosition_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.UpdateFreeCamAngle
inline void UUW-MapComp_C::UpdateFreeCamAngle() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.UpdateFreeCamAngle");

	struct UpdateFreeCamAngle_Params {
		
	}; UpdateFreeCamAngle_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.SetFreeCamEnable
inline void UUW-MapComp_C::SetFreeCamEnable(char bEnable) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.SetFreeCamEnable");

	struct SetFreeCamEnable_Params {
		char bEnable;
	}; SetFreeCamEnable_Params Params;

	Params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.SetAircraftVisibility
inline void UUW-MapComp_C::SetAircraftVisibility(char bVisible) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.SetAircraftVisibility");

	struct SetAircraftVisibility_Params {
		char bVisible;
	}; SetAircraftVisibility_Params Params;

	Params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.PreUpdateComponents
inline void UUW-MapComp_C::PreUpdateComponents() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.PreUpdateComponents");

	struct PreUpdateComponents_Params {
		
	}; PreUpdateComponents_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.UpdateCircleInfos
inline void UUW-MapComp_C::UpdateCircleInfos() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.UpdateCircleInfos");

	struct UpdateCircleInfos_Params {
		
	}; UpdateCircleInfos_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.UpdateReplayCircleInfos
inline void UUW-MapComp_C::UpdateReplayCircleInfos() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.UpdateReplayCircleInfos");

	struct UpdateReplayCircleInfos_Params {
		
	}; UpdateReplayCircleInfos_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.SetVisiblePingMenu
inline void UUW-MapComp_C::SetVisiblePingMenu(char Visible) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.SetVisiblePingMenu");

	struct SetVisiblePingMenu_Params {
		char Visible;
	}; SetVisiblePingMenu_Params Params;

	Params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.ChangeMap
inline void UUW-MapComp_C::ChangeMap(char IsWeightMap) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.ChangeMap");

	struct ChangeMap_Params {
		char IsWeightMap;
	}; ChangeMap_Params Params;

	Params.IsWeightMap = IsWeightMap;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.OnMouseUp
inline void UUW-MapComp_C::OnMouseUp(struct FPointerEvent Mouse) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.OnMouseUp");

	struct OnMouseUp_Params {
		struct FPointerEvent Mouse;
	}; OnMouseUp_Params Params;

	Params.Mouse = Mouse;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.ExecuteUbergraph_UW-MapComp
inline void UUW-MapComp_C::ExecuteUbergraph_UW-MapComp(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.ExecuteUbergraph_UW-MapComp");

	struct ExecuteUbergraph_UW-MapComp_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-MapComp_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.OnMouseButtonDownOnMap__DelegateSignature
inline void UUW-MapComp_C::OnMouseButtonDownOnMap__DelegateSignature(struct FKey Button, struct FVector2D PosOnViewport) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.OnMouseButtonDownOnMap__DelegateSignature");

	struct OnMouseButtonDownOnMap__DelegateSignature_Params {
		struct FKey Button;
		struct FVector2D PosOnViewport;
	}; OnMouseButtonDownOnMap__DelegateSignature_Params Params;

	Params.Button = Button;
	Params.PosOnViewport = PosOnViewport;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.OnDragginOnMap__DelegateSignature
inline void UUW-MapComp_C::OnDragginOnMap__DelegateSignature(struct FVector2D Delta) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.OnDragginOnMap__DelegateSignature");

	struct OnDragginOnMap__DelegateSignature_Params {
		struct FVector2D Delta;
	}; OnDragginOnMap__DelegateSignature_Params Params;

	Params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.OnObjectClickOnMap__DelegateSignature
inline void UUW-MapComp_C::OnObjectClickOnMap__DelegateSignature(struct FKey Button, char mapObjectID) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.OnObjectClickOnMap__DelegateSignature");

	struct OnObjectClickOnMap__DelegateSignature_Params {
		struct FKey Button;
		char mapObjectID;
	}; OnObjectClickOnMap__DelegateSignature_Params Params;

	Params.Button = Button;
	Params.mapObjectID = mapObjectID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.OnMouseButtonUpOnMap__DelegateSignature
inline void UUW-MapComp_C::OnMouseButtonUpOnMap__DelegateSignature(struct FKey Button, struct FVector2D PosOnViewport) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.OnMouseButtonUpOnMap__DelegateSignature");

	struct OnMouseButtonUpOnMap__DelegateSignature_Params {
		struct FKey Button;
		struct FVector2D PosOnViewport;
	}; OnMouseButtonUpOnMap__DelegateSignature_Params Params;

	Params.Button = Button;
	Params.PosOnViewport = PosOnViewport;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.OnWheelOnMap__DelegateSignature
inline void UUW-MapComp_C::OnWheelOnMap__DelegateSignature(float Delta, struct FVector2D PosOnViewport) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.OnWheelOnMap__DelegateSignature");

	struct OnWheelOnMap__DelegateSignature_Params {
		float Delta;
		struct FVector2D PosOnViewport;
	}; OnWheelOnMap__DelegateSignature_Params Params;

	Params.Delta = Delta;
	Params.PosOnViewport = PosOnViewport;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

