// WidgetBlueprintGeneratedClass UW-MapComp.UW-MapComp_C
class UUW-MapComp_C : public UBravoHotelMapCompWidget {

public:

	struct Unknown UberGraphFrame; // 0x500 (8)
	struct Unknown Aircraft; // 0x508 (8)
	struct Unknown Background; // 0x510 (8)
	struct Unknown Canvas; // 0x518 (8)
	struct Unknown InvalidationBox_1; // 0x520 (8)
	struct Unknown TestDescentEndPoint_2; // 0x528 (8)
	struct Unknown TestDescentStartPoint_2; // 0x530 (8)
	struct Unknown TestLineRouteDotline_2; // 0x538 (8)
	int32_t MapDisplayInfoFlag; // 0x540 (4)
	struct FMulticastInlineDelegate OnWheelOnMap; // 0x548 (16)
	struct FMulticastInlineDelegate OnMouseButtonUpOnMap; // 0x558 (16)
	struct FMulticastInlineDelegate OnObjectClickOnMap; // 0x568 (16)
	struct FMulticastInlineDelegate OnDragginOnMap; // 0x578 (16)
	char IsDragging : 0; // 0x588 (1)
	float DeltaValue; // 0x58C (4)
	struct TArray<Unknown> GridString_XAxis; // 0x590 (16)
	struct TArray<Unknown> GridString_YAxis; // 0x5A0 (16)
	struct Unknown PersonalSupplyBoxRef; // 0x5B0 (8)
	struct Unknown ReplayFreeCamWidget; // 0x5B8 (8)
	float MapScaleInterpSpeed; // 0x5C0 (4)
	char MouseRightBtnDown : 0; // 0x5C4 (1)
	struct Unknown SelectPingMenuTimer; // 0x5C8 (8)
	struct Unknown SelectionMenu; // 0x5D0 (8)
	struct FMulticastInlineDelegate OnMouseButtonDownOnMap; // 0x5D8 (16)
	struct Unknown MouseButtonDownPos; // 0x5E8 (8)
	char IsUpdateMapScale : 0; // 0x5F0 (1)
	float MapScaleInerpSpeedRatio; // 0x5F4 (4)
	char IsDrawingRoutePing : 0; // 0x5F8 (1)
	struct TArray<Unknown> IgnoreAreaCircleLines; // 0x600 (16)

	void CheckAgreePing(char& bRet, struct Unknown& Location); // Function UW-MapComp.UW-MapComp_C.CheckAgreePing(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Get Cur Mouse Point(struct Unknown& Pos); // Function UW-MapComp.UW-MapComp_C.Get Cur Mouse Point(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void CalcMapScaleInterpSpeed(int32_t TargetZoomLevel); // Function UW-MapComp.UW-MapComp_C.CalcMapScaleInterpSpeed(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Remove Area Widget(enum class Unknow Type, struct Unknown Info); // Function UW-MapComp.UW-MapComp_C.Remove Area Widget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void UpdateReplayCircleMask(); // Function UW-MapComp.UW-MapComp_C.UpdateReplayCircleMask(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void UpdateMapPos(); // Function UW-MapComp.UW-MapComp_C.UpdateMapPos(Public|BlueprintCallable|BlueprintEvent|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void UpdateCircleMask(struct Unknown centerPosOnWorld, float radiusOnWorld, struct FName CirclePosName, struct FName CircleRadiusName, float MaskAdditionalRadius, struct Unknown MaterialInstance); // Function UW-MapComp.UW-MapComp_C.UpdateCircleMask(Public|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Update Circle Masks(); // Function UW-MapComp.UW-MapComp_C.Update Circle Masks(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void UpdateCircleInfosImpl(); // Function UW-MapComp.UW-MapComp_C.UpdateCircleInfosImpl(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void UpdateMapScale(); // Function UW-MapComp.UW-MapComp_C.UpdateMapScale(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void PlayTargetPosAnim(); // Function UW-MapComp.UW-MapComp_C.PlayTargetPosAnim(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void CreatePersonalSupplyBox(); // Function UW-MapComp.UW-MapComp_C.CreatePersonalSupplyBox(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void CreateFreeCamWidget(); // Function UW-MapComp.UW-MapComp_C.CreateFreeCamWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void CreateAirCraftWidget(); // Function UW-MapComp.UW-MapComp_C.CreateAirCraftWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void CreateMapPlayerWidget_Impl(); // Function UW-MapComp.UW-MapComp_C.CreateMapPlayerWidget_Impl(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnAttackedWidget(int32_t UniquePlayerId); // Function UW-MapComp.UW-MapComp_C.OnAttackedWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnFireWidget(int32_t UniquePlayerId, struct Unknown Rotation, float Length); // Function UW-MapComp.UW-MapComp_C.OnFireWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void GetSkillMapFactor(float Distance, float& Factor); // Function UW-MapComp.UW-MapComp_C.GetSkillMapFactor(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Add Area Widget(enum class Unknow AreaWidgetType, struct Unknown AreaWidgetInfo); // Function UW-MapComp.UW-MapComp_C.Add Area Widget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void WantChangeVisibility(enum class Unknow WantVisibility, struct Unknown ChangeWidget); // Function UW-MapComp.UW-MapComp_C.WantChangeVisibility(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void GetMiniMapFactor(float& Factor); // Function UW-MapComp.UW-MapComp_C.GetMiniMapFactor(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ConvertSizeWorldToMap(struct Unknown Size, struct Unknown& Ret); // Function UW-MapComp.UW-MapComp_C.ConvertSizeWorldToMap(Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnMarkerClicked(struct Unknown Button, char mapObjectID); // Function UW-MapComp.UW-MapComp_C.OnMarkerClicked(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void CalPosRelatedMapOnViewport(struct Unknown PosOnViewport, struct Unknown& Ret); // Function UW-MapComp.UW-MapComp_C.CalPosRelatedMapOnViewport(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ConvertPosViewportToMap(struct Unknown PosOnViewport, struct Unknown& Ret); // Function UW-MapComp.UW-MapComp_C.ConvertPosViewportToMap(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	struct Unknown OnMouseMove(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-MapComp.UW-MapComp_C.OnMouseMove(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetMarker(char isOn, struct Unknown PosOnViewport, float Heigh); // Function UW-MapComp.UW-MapComp_C.SetMarker(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-MapComp.UW-MapComp_C.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	struct Unknown OnMouseButtonUp(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-MapComp.UW-MapComp_C.OnMouseButtonUp(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	struct Unknown OnMouseWheel(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-MapComp.UW-MapComp_C.OnMouseWheel(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnPaint(struct Unknown& Context); // Function UW-MapComp.UW-MapComp_C.OnPaint(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void AddWidgetComp(struct Unknown* WidgetClass, struct Unknown Anchor, struct Unknown Pivot, struct Unknown Size, int32_t ZOrder, struct Unknown& Ret); // Function UW-MapComp.UW-MapComp_C.AddWidgetComp(Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ConvertForwardToDegree(struct Unknown Forward, float& Degree); // Function UW-MapComp.UW-MapComp_C.ConvertForwardToDegree(Private|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnLoaded_C5F225F94B2C743064A54D84F3497501(struct Unknown Loaded); // Function UW-MapComp.UW-MapComp_C.OnLoaded_C5F225F94B2C743064A54D84F3497501(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void DebugStringOnMapEvent(struct FString DebugString, struct Unknown WorldPosition, float RemainTime, float FontSize); // Function UW-MapComp.UW-MapComp_C.DebugStringOnMapEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void CreateMapPlayerWidget(); // Function UW-MapComp.UW-MapComp_C.CreateMapPlayerWidget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void UpdateSupplyBoxInfo(); // Function UW-MapComp.UW-MapComp_C.UpdateSupplyBoxInfo(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void UpdateFreeCamPosition(); // Function UW-MapComp.UW-MapComp_C.UpdateFreeCamPosition(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void UpdateFreeCamAngle(); // Function UW-MapComp.UW-MapComp_C.UpdateFreeCamAngle(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetFreeCamEnable(char bEnable); // Function UW-MapComp.UW-MapComp_C.SetFreeCamEnable(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetAircraftVisibility(char bVisible); // Function UW-MapComp.UW-MapComp_C.SetAircraftVisibility(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void PreUpdateComponents(); // Function UW-MapComp.UW-MapComp_C.PreUpdateComponents(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void UpdateCircleInfos(); // Function UW-MapComp.UW-MapComp_C.UpdateCircleInfos(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void UpdateReplayCircleInfos(); // Function UW-MapComp.UW-MapComp_C.UpdateReplayCircleInfos(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetVisiblePingMenu(char Visible); // Function UW-MapComp.UW-MapComp_C.SetVisiblePingMenu(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ChangeMap(char IsWeightMap); // Function UW-MapComp.UW-MapComp_C.ChangeMap(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnMouseUp(struct Unknown Mouse); // Function UW-MapComp.UW-MapComp_C.OnMouseUp(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_UW-MapComp(int32_t EntryPoint); // Function UW-MapComp.UW-MapComp_C.ExecuteUbergraph_UW-MapComp(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnMouseButtonDownOnMap__DelegateSignature(struct Unknown Button, struct Unknown PosOnViewport); // Function UW-MapComp.UW-MapComp_C.OnMouseButtonDownOnMap__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnDragginOnMap__DelegateSignature(struct Unknown Delta); // Function UW-MapComp.UW-MapComp_C.OnDragginOnMap__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnObjectClickOnMap__DelegateSignature(struct Unknown Button, char mapObjectID); // Function UW-MapComp.UW-MapComp_C.OnObjectClickOnMap__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnMouseButtonUpOnMap__DelegateSignature(struct Unknown Button, struct Unknown PosOnViewport); // Function UW-MapComp.UW-MapComp_C.OnMouseButtonUpOnMap__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnWheelOnMap__DelegateSignature(float Delta, struct Unknown PosOnViewport); // Function UW-MapComp.UW-MapComp_C.OnWheelOnMap__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function UW-MapComp.UW-MapComp_C.CheckAgreePing
inline void UUW-MapComp_C::CheckAgreePing(char& bRet, struct Unknown& Location) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.CheckAgreePing");

	struct CheckAgreePing_Params {
		char& bRet;
		struct Unknown& Location;
	}; CheckAgreePing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bRet = Params.bRet;
	Location = Params.Location;

}

// Function UW-MapComp.UW-MapComp_C.Get Cur Mouse Point
inline void UUW-MapComp_C::Get Cur Mouse Point(struct Unknown& Pos) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.Get Cur Mouse Point");

	struct Get Cur Mouse Point_Params {
		struct Unknown& Pos;
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
inline void UUW-MapComp_C::Remove Area Widget(enum class Unknow Type, struct Unknown Info) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.Remove Area Widget");

	struct Remove Area Widget_Params {
		enum class Unknow Type;
		struct Unknown Info;
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
inline void UUW-MapComp_C::UpdateCircleMask(struct Unknown centerPosOnWorld, float radiusOnWorld, struct FName CirclePosName, struct FName CircleRadiusName, float MaskAdditionalRadius, struct Unknown MaterialInstance) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.UpdateCircleMask");

	struct UpdateCircleMask_Params {
		struct Unknown centerPosOnWorld;
		float radiusOnWorld;
		struct FName CirclePosName;
		struct FName CircleRadiusName;
		float MaskAdditionalRadius;
		struct Unknown MaterialInstance;
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
inline void UUW-MapComp_C::OnFireWidget(int32_t UniquePlayerId, struct Unknown Rotation, float Length) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.OnFireWidget");

	struct OnFireWidget_Params {
		int32_t UniquePlayerId;
		struct Unknown Rotation;
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
inline void UUW-MapComp_C::Add Area Widget(enum class Unknow AreaWidgetType, struct Unknown AreaWidgetInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.Add Area Widget");

	struct Add Area Widget_Params {
		enum class Unknow AreaWidgetType;
		struct Unknown AreaWidgetInfo;
	}; Add Area Widget_Params Params;

	Params.AreaWidgetType = AreaWidgetType;
	Params.AreaWidgetInfo = AreaWidgetInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.WantChangeVisibility
inline void UUW-MapComp_C::WantChangeVisibility(enum class Unknow WantVisibility, struct Unknown ChangeWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.WantChangeVisibility");

	struct WantChangeVisibility_Params {
		enum class Unknow WantVisibility;
		struct Unknown ChangeWidget;
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
inline void UUW-MapComp_C::ConvertSizeWorldToMap(struct Unknown Size, struct Unknown& Ret) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.ConvertSizeWorldToMap");

	struct ConvertSizeWorldToMap_Params {
		struct Unknown Size;
		struct Unknown& Ret;
	}; ConvertSizeWorldToMap_Params Params;

	Params.Size = Size;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Ret = Params.Ret;

}

// Function UW-MapComp.UW-MapComp_C.OnMarkerClicked
inline void UUW-MapComp_C::OnMarkerClicked(struct Unknown Button, char mapObjectID) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.OnMarkerClicked");

	struct OnMarkerClicked_Params {
		struct Unknown Button;
		char mapObjectID;
	}; OnMarkerClicked_Params Params;

	Params.Button = Button;
	Params.mapObjectID = mapObjectID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.CalPosRelatedMapOnViewport
inline void UUW-MapComp_C::CalPosRelatedMapOnViewport(struct Unknown PosOnViewport, struct Unknown& Ret) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.CalPosRelatedMapOnViewport");

	struct CalPosRelatedMapOnViewport_Params {
		struct Unknown PosOnViewport;
		struct Unknown& Ret;
	}; CalPosRelatedMapOnViewport_Params Params;

	Params.PosOnViewport = PosOnViewport;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Ret = Params.Ret;

}

// Function UW-MapComp.UW-MapComp_C.ConvertPosViewportToMap
inline void UUW-MapComp_C::ConvertPosViewportToMap(struct Unknown PosOnViewport, struct Unknown& Ret) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.ConvertPosViewportToMap");

	struct ConvertPosViewportToMap_Params {
		struct Unknown PosOnViewport;
		struct Unknown& Ret;
	}; ConvertPosViewportToMap_Params Params;

	Params.PosOnViewport = PosOnViewport;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Ret = Params.Ret;

}

// Function UW-MapComp.UW-MapComp_C.OnMouseMove
inline struct Unknown UUW-MapComp_C::OnMouseMove(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.OnMouseMove");

	struct OnMouseMove_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; OnMouseMove_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-MapComp.UW-MapComp_C.SetMarker
inline void UUW-MapComp_C::SetMarker(char isOn, struct Unknown PosOnViewport, float Heigh) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.SetMarker");

	struct SetMarker_Params {
		char isOn;
		struct Unknown PosOnViewport;
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
inline struct Unknown UUW-MapComp_C::OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.OnMouseButtonDown");

	struct OnMouseButtonDown_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; OnMouseButtonDown_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-MapComp.UW-MapComp_C.OnMouseButtonUp
inline struct Unknown UUW-MapComp_C::OnMouseButtonUp(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.OnMouseButtonUp");

	struct OnMouseButtonUp_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; OnMouseButtonUp_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-MapComp.UW-MapComp_C.OnMouseWheel
inline struct Unknown UUW-MapComp_C::OnMouseWheel(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.OnMouseWheel");

	struct OnMouseWheel_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; OnMouseWheel_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-MapComp.UW-MapComp_C.OnPaint
inline void UUW-MapComp_C::OnPaint(struct Unknown& Context) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.OnPaint");

	struct OnPaint_Params {
		struct Unknown& Context;
	}; OnPaint_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Context = Params.Context;

}

// Function UW-MapComp.UW-MapComp_C.AddWidgetComp
inline void UUW-MapComp_C::AddWidgetComp(struct Unknown* WidgetClass, struct Unknown Anchor, struct Unknown Pivot, struct Unknown Size, int32_t ZOrder, struct Unknown& Ret) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.AddWidgetComp");

	struct AddWidgetComp_Params {
		struct Unknown* WidgetClass;
		struct Unknown Anchor;
		struct Unknown Pivot;
		struct Unknown Size;
		int32_t ZOrder;
		struct Unknown& Ret;
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
inline void UUW-MapComp_C::ConvertForwardToDegree(struct Unknown Forward, float& Degree) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.ConvertForwardToDegree");

	struct ConvertForwardToDegree_Params {
		struct Unknown Forward;
		float& Degree;
	}; ConvertForwardToDegree_Params Params;

	Params.Forward = Forward;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Degree = Params.Degree;

}

// Function UW-MapComp.UW-MapComp_C.OnLoaded_C5F225F94B2C743064A54D84F3497501
inline void UUW-MapComp_C::OnLoaded_C5F225F94B2C743064A54D84F3497501(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.OnLoaded_C5F225F94B2C743064A54D84F3497501");

	struct OnLoaded_C5F225F94B2C743064A54D84F3497501_Params {
		struct Unknown Loaded;
	}; OnLoaded_C5F225F94B2C743064A54D84F3497501_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.DebugStringOnMapEvent
inline void UUW-MapComp_C::DebugStringOnMapEvent(struct FString DebugString, struct Unknown WorldPosition, float RemainTime, float FontSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.DebugStringOnMapEvent");

	struct DebugStringOnMapEvent_Params {
		struct FString DebugString;
		struct Unknown WorldPosition;
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
inline void UUW-MapComp_C::OnMouseUp(struct Unknown Mouse) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.OnMouseUp");

	struct OnMouseUp_Params {
		struct Unknown Mouse;
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
inline void UUW-MapComp_C::OnMouseButtonDownOnMap__DelegateSignature(struct Unknown Button, struct Unknown PosOnViewport) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.OnMouseButtonDownOnMap__DelegateSignature");

	struct OnMouseButtonDownOnMap__DelegateSignature_Params {
		struct Unknown Button;
		struct Unknown PosOnViewport;
	}; OnMouseButtonDownOnMap__DelegateSignature_Params Params;

	Params.Button = Button;
	Params.PosOnViewport = PosOnViewport;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.OnDragginOnMap__DelegateSignature
inline void UUW-MapComp_C::OnDragginOnMap__DelegateSignature(struct Unknown Delta) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.OnDragginOnMap__DelegateSignature");

	struct OnDragginOnMap__DelegateSignature_Params {
		struct Unknown Delta;
	}; OnDragginOnMap__DelegateSignature_Params Params;

	Params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.OnObjectClickOnMap__DelegateSignature
inline void UUW-MapComp_C::OnObjectClickOnMap__DelegateSignature(struct Unknown Button, char mapObjectID) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.OnObjectClickOnMap__DelegateSignature");

	struct OnObjectClickOnMap__DelegateSignature_Params {
		struct Unknown Button;
		char mapObjectID;
	}; OnObjectClickOnMap__DelegateSignature_Params Params;

	Params.Button = Button;
	Params.mapObjectID = mapObjectID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.OnMouseButtonUpOnMap__DelegateSignature
inline void UUW-MapComp_C::OnMouseButtonUpOnMap__DelegateSignature(struct Unknown Button, struct Unknown PosOnViewport) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.OnMouseButtonUpOnMap__DelegateSignature");

	struct OnMouseButtonUpOnMap__DelegateSignature_Params {
		struct Unknown Button;
		struct Unknown PosOnViewport;
	}; OnMouseButtonUpOnMap__DelegateSignature_Params Params;

	Params.Button = Button;
	Params.PosOnViewport = PosOnViewport;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapComp.UW-MapComp_C.OnWheelOnMap__DelegateSignature
inline void UUW-MapComp_C::OnWheelOnMap__DelegateSignature(float Delta, struct Unknown PosOnViewport) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapComp.UW-MapComp_C.OnWheelOnMap__DelegateSignature");

	struct OnWheelOnMap__DelegateSignature_Params {
		float Delta;
		struct Unknown PosOnViewport;
	}; OnWheelOnMap__DelegateSignature_Params Params;

	Params.Delta = Delta;
	Params.PosOnViewport = PosOnViewport;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

