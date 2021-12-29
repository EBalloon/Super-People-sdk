// WidgetBlueprintGeneratedClass UW-SkillMapWidget.UW-SkillMapWidget_C
class UUW-SkillMapWidget_C : public UBravoHotelSkillMapWidget {

public:

	struct Unknown UberGraphFrame; // 0x250 (8)
	struct Unknown Tutorial_MouseCursor; // 0x258 (8)
	struct Unknown Tutorial_Arrow_Loop2; // 0x260 (8)
	struct Unknown RadarDecoLight; // 0x268 (8)
	struct Unknown RadarCircle_M; // 0x270 (8)
	struct Unknown BackgroundBlur_154; // 0x278 (8)
	struct Unknown BP-MapComp; // 0x280 (8)
	struct Unknown Button_Nuclear; // 0x288 (8)
	struct Unknown CP_RealMapSize; // 0x290 (8)
	struct Unknown Image; // 0x298 (8)
	struct Unknown Image_2; // 0x2A0 (8)
	struct Unknown Image_3; // 0x2A8 (8)
	struct Unknown Image_4; // 0x2B0 (8)
	struct Unknown Image_5; // 0x2B8 (8)
	struct Unknown Image_6; // 0x2C0 (8)
	struct Unknown Image_7; // 0x2C8 (8)
	struct Unknown Image_171; // 0x2D0 (8)
	struct Unknown Image_181; // 0x2D8 (8)
	struct Unknown Image_228; // 0x2E0 (8)
	struct Unknown Image_326; // 0x2E8 (8)
	struct Unknown Image_405; // 0x2F0 (8)
	struct Unknown Image_508; // 0x2F8 (8)
	struct Unknown Img_MapBackGround; // 0x300 (8)
	struct Unknown Img_MapCenter; // 0x308 (8)
	struct Unknown Img_RadarDummy; // 0x310 (8)
	struct Unknown Tutorial; // 0x318 (8)
	struct Unknown UW-Radar_tutorial; // 0x320 (8)
	struct Unknown MapBackGroundPosition; // 0x328 (8)
	struct Unknown RadarDummyPosition; // 0x330 (8)

	void MapClickEvent(struct Unknown ClickLocation); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.MapClickEvent(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void CalcAllMapRatioByTargetRadius(float& Ratio); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.CalcAllMapRatioByTargetRadius(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OnMapLeftClick(struct Unknown PosOnViewport); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.OnMapLeftClick(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void PlayRadarOpenSound(); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.PlayRadarOpenSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void CheckPositionChanged(); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.CheckPositionChanged(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SetSkillMapRate(); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.SetSkillMapRate(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Construct(); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OnSkillMapStart(); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.OnSkillMapStart(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void AddAreaWidget(enum class Unknow WorldMapAreaWidgetType, struct Unknown& AreaWidgetInfo); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.AddAreaWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void BndEvt__Button_Nuclear_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.BndEvt__Button_Nuclear_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ResetMapPlayers(); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.ResetMapPlayers(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OnClickOnMap(struct Unknown Button, struct Unknown PosOnViewport); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.OnClickOnMap(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_UW-SkillMapWidget(int32_t EntryPoint); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.ExecuteUbergraph_UW-SkillMapWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function UW-SkillMapWidget.UW-SkillMapWidget_C.MapClickEvent
inline void UUW-SkillMapWidget_C::MapClickEvent(struct Unknown ClickLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SkillMapWidget.UW-SkillMapWidget_C.MapClickEvent");

	struct MapClickEvent_Params {
		struct Unknown ClickLocation;
	}; MapClickEvent_Params Params;

	Params.ClickLocation = ClickLocation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SkillMapWidget.UW-SkillMapWidget_C.CalcAllMapRatioByTargetRadius
inline void UUW-SkillMapWidget_C::CalcAllMapRatioByTargetRadius(float& Ratio) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SkillMapWidget.UW-SkillMapWidget_C.CalcAllMapRatioByTargetRadius");

	struct CalcAllMapRatioByTargetRadius_Params {
		float& Ratio;
	}; CalcAllMapRatioByTargetRadius_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Ratio = Params.Ratio;

}

// Function UW-SkillMapWidget.UW-SkillMapWidget_C.OnMapLeftClick
inline void UUW-SkillMapWidget_C::OnMapLeftClick(struct Unknown PosOnViewport) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SkillMapWidget.UW-SkillMapWidget_C.OnMapLeftClick");

	struct OnMapLeftClick_Params {
		struct Unknown PosOnViewport;
	}; OnMapLeftClick_Params Params;

	Params.PosOnViewport = PosOnViewport;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SkillMapWidget.UW-SkillMapWidget_C.PlayRadarOpenSound
inline void UUW-SkillMapWidget_C::PlayRadarOpenSound() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SkillMapWidget.UW-SkillMapWidget_C.PlayRadarOpenSound");

	struct PlayRadarOpenSound_Params {
		
	}; PlayRadarOpenSound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SkillMapWidget.UW-SkillMapWidget_C.CheckPositionChanged
inline void UUW-SkillMapWidget_C::CheckPositionChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SkillMapWidget.UW-SkillMapWidget_C.CheckPositionChanged");

	struct CheckPositionChanged_Params {
		
	}; CheckPositionChanged_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SkillMapWidget.UW-SkillMapWidget_C.SetSkillMapRate
inline void UUW-SkillMapWidget_C::SetSkillMapRate() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SkillMapWidget.UW-SkillMapWidget_C.SetSkillMapRate");

	struct SetSkillMapRate_Params {
		
	}; SetSkillMapRate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SkillMapWidget.UW-SkillMapWidget_C.Tick
inline void UUW-SkillMapWidget_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SkillMapWidget.UW-SkillMapWidget_C.Tick");

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

// Function UW-SkillMapWidget.UW-SkillMapWidget_C.Construct
inline void UUW-SkillMapWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SkillMapWidget.UW-SkillMapWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SkillMapWidget.UW-SkillMapWidget_C.OnSkillMapStart
inline void UUW-SkillMapWidget_C::OnSkillMapStart() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SkillMapWidget.UW-SkillMapWidget_C.OnSkillMapStart");

	struct OnSkillMapStart_Params {
		
	}; OnSkillMapStart_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SkillMapWidget.UW-SkillMapWidget_C.AddAreaWidget
inline void UUW-SkillMapWidget_C::AddAreaWidget(enum class Unknow WorldMapAreaWidgetType, struct Unknown& AreaWidgetInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SkillMapWidget.UW-SkillMapWidget_C.AddAreaWidget");

	struct AddAreaWidget_Params {
		enum class Unknow WorldMapAreaWidgetType;
		struct Unknown& AreaWidgetInfo;
	}; AddAreaWidget_Params Params;

	Params.WorldMapAreaWidgetType = WorldMapAreaWidgetType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AreaWidgetInfo = Params.AreaWidgetInfo;

}

// Function UW-SkillMapWidget.UW-SkillMapWidget_C.BndEvt__Button_Nuclear_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-SkillMapWidget_C::BndEvt__Button_Nuclear_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SkillMapWidget.UW-SkillMapWidget_C.BndEvt__Button_Nuclear_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_Nuclear_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Nuclear_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SkillMapWidget.UW-SkillMapWidget_C.ResetMapPlayers
inline void UUW-SkillMapWidget_C::ResetMapPlayers() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SkillMapWidget.UW-SkillMapWidget_C.ResetMapPlayers");

	struct ResetMapPlayers_Params {
		
	}; ResetMapPlayers_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SkillMapWidget.UW-SkillMapWidget_C.OnClickOnMap
inline void UUW-SkillMapWidget_C::OnClickOnMap(struct Unknown Button, struct Unknown PosOnViewport) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SkillMapWidget.UW-SkillMapWidget_C.OnClickOnMap");

	struct OnClickOnMap_Params {
		struct Unknown Button;
		struct Unknown PosOnViewport;
	}; OnClickOnMap_Params Params;

	Params.Button = Button;
	Params.PosOnViewport = PosOnViewport;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SkillMapWidget.UW-SkillMapWidget_C.ExecuteUbergraph_UW-SkillMapWidget
inline void UUW-SkillMapWidget_C::ExecuteUbergraph_UW-SkillMapWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SkillMapWidget.UW-SkillMapWidget_C.ExecuteUbergraph_UW-SkillMapWidget");

	struct ExecuteUbergraph_UW-SkillMapWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-SkillMapWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

