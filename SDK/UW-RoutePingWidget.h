// WidgetBlueprintGeneratedClass UW-RoutePingWidget.UW-RoutePingWidget_C
class UUW-RoutePingWidget_C : public UBravoHotelRoutePingWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Canvas; // 0x250 (8)
	struct FMulticastInlineDelegate OnMarkerClicked; // 0x258 (16)
	struct Unknown PlayerState; // 0x268 (8)
	struct TArray<Unknown> PointsArray; // 0x270 (16)
	struct Unknown StartPosition; // 0x280 (8)
	struct TArray<Unknown> PointWidgets; // 0x288 (16)
	struct TArray<Unknown> LineWidgets; // 0x298 (16)
	struct Unknown UW-MapCompRef; // 0x2A8 (8)
	char IsDrawing : 0; // 0x2B0 (1)
	struct Unknown GuideLineWidgetRef; // 0x2B8 (8)
	struct Unknown GuideLinePos; // 0x2C0 (8)
	char IsUpdate : 0; // 0x2C8 (1)

	void InitGuideLine(); // Function UW-RoutePingWidget.UW-RoutePingWidget_C.InitGuideLine(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ResetGuideLine(); // Function UW-RoutePingWidget.UW-RoutePingWidget_C.ResetGuideLine(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void UpdateGuideLine(); // Function UW-RoutePingWidget.UW-RoutePingWidget_C.UpdateGuideLine(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void IsValidGuideLine(char& Valid); // Function UW-RoutePingWidget.UW-RoutePingWidget_C.IsValidGuideLine(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetLineInfo(struct Unknown LineRef, struct Unknown CurrentPos, struct Unknown NextPos); // Function UW-RoutePingWidget.UW-RoutePingWidget_C.SetLineInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void GetAngleCurrentToNext(struct Unknown CurrentPos, struct Unknown NextPos, float& Angle); // Function UW-RoutePingWidget.UW-RoutePingWidget_C.GetAngleCurrentToNext(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetRouteWidgets(); // Function UW-RoutePingWidget.UW-RoutePingWidget_C.SetRouteWidgets(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetTeamColor(); // Function UW-RoutePingWidget.UW-RoutePingWidget_C.SetTeamColor(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void MakeWidgets(); // Function UW-RoutePingWidget.UW-RoutePingWidget_C.MakeWidgets(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Initialize(struct Unknown PlayerState); // Function UW-RoutePingWidget.UW-RoutePingWidget_C.Initialize(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void UpdateRoutePing(struct Unknown MapCompWidget, struct TArray<Unknown>& Positions, char IsUpdate); // Function UW-RoutePingWidget.UW-RoutePingWidget_C.UpdateRoutePing(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function UW-RoutePingWidget.UW-RoutePingWidget_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_UW-RoutePingWidget(int32_t EntryPoint); // Function UW-RoutePingWidget.UW-RoutePingWidget_C.ExecuteUbergraph_UW-RoutePingWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnMarkerClicked__DelegateSignature(struct Unknown Button, char mapObjectID); // Function UW-RoutePingWidget.UW-RoutePingWidget_C.OnMarkerClicked__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-RoutePingWidget.UW-RoutePingWidget_C.InitGuideLine
inline void UUW-RoutePingWidget_C::InitGuideLine() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RoutePingWidget.UW-RoutePingWidget_C.InitGuideLine");

	struct InitGuideLine_Params {
		
	}; InitGuideLine_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RoutePingWidget.UW-RoutePingWidget_C.ResetGuideLine
inline void UUW-RoutePingWidget_C::ResetGuideLine() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RoutePingWidget.UW-RoutePingWidget_C.ResetGuideLine");

	struct ResetGuideLine_Params {
		
	}; ResetGuideLine_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RoutePingWidget.UW-RoutePingWidget_C.UpdateGuideLine
inline void UUW-RoutePingWidget_C::UpdateGuideLine() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RoutePingWidget.UW-RoutePingWidget_C.UpdateGuideLine");

	struct UpdateGuideLine_Params {
		
	}; UpdateGuideLine_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RoutePingWidget.UW-RoutePingWidget_C.IsValidGuideLine
inline void UUW-RoutePingWidget_C::IsValidGuideLine(char& Valid) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RoutePingWidget.UW-RoutePingWidget_C.IsValidGuideLine");

	struct IsValidGuideLine_Params {
		char& Valid;
	}; IsValidGuideLine_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Valid = Params.Valid;

}

// Function UW-RoutePingWidget.UW-RoutePingWidget_C.SetLineInfo
inline void UUW-RoutePingWidget_C::SetLineInfo(struct Unknown LineRef, struct Unknown CurrentPos, struct Unknown NextPos) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RoutePingWidget.UW-RoutePingWidget_C.SetLineInfo");

	struct SetLineInfo_Params {
		struct Unknown LineRef;
		struct Unknown CurrentPos;
		struct Unknown NextPos;
	}; SetLineInfo_Params Params;

	Params.LineRef = LineRef;
	Params.CurrentPos = CurrentPos;
	Params.NextPos = NextPos;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RoutePingWidget.UW-RoutePingWidget_C.GetAngleCurrentToNext
inline void UUW-RoutePingWidget_C::GetAngleCurrentToNext(struct Unknown CurrentPos, struct Unknown NextPos, float& Angle) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RoutePingWidget.UW-RoutePingWidget_C.GetAngleCurrentToNext");

	struct GetAngleCurrentToNext_Params {
		struct Unknown CurrentPos;
		struct Unknown NextPos;
		float& Angle;
	}; GetAngleCurrentToNext_Params Params;

	Params.CurrentPos = CurrentPos;
	Params.NextPos = NextPos;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Angle = Params.Angle;

}

// Function UW-RoutePingWidget.UW-RoutePingWidget_C.SetRouteWidgets
inline void UUW-RoutePingWidget_C::SetRouteWidgets() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RoutePingWidget.UW-RoutePingWidget_C.SetRouteWidgets");

	struct SetRouteWidgets_Params {
		
	}; SetRouteWidgets_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RoutePingWidget.UW-RoutePingWidget_C.SetTeamColor
inline void UUW-RoutePingWidget_C::SetTeamColor() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RoutePingWidget.UW-RoutePingWidget_C.SetTeamColor");

	struct SetTeamColor_Params {
		
	}; SetTeamColor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RoutePingWidget.UW-RoutePingWidget_C.MakeWidgets
inline void UUW-RoutePingWidget_C::MakeWidgets() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RoutePingWidget.UW-RoutePingWidget_C.MakeWidgets");

	struct MakeWidgets_Params {
		
	}; MakeWidgets_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RoutePingWidget.UW-RoutePingWidget_C.Initialize
inline void UUW-RoutePingWidget_C::Initialize(struct Unknown PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RoutePingWidget.UW-RoutePingWidget_C.Initialize");

	struct Initialize_Params {
		struct Unknown PlayerState;
	}; Initialize_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RoutePingWidget.UW-RoutePingWidget_C.UpdateRoutePing
inline void UUW-RoutePingWidget_C::UpdateRoutePing(struct Unknown MapCompWidget, struct TArray<Unknown>& Positions, char IsUpdate) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RoutePingWidget.UW-RoutePingWidget_C.UpdateRoutePing");

	struct UpdateRoutePing_Params {
		struct Unknown MapCompWidget;
		struct TArray<Unknown>& Positions;
		char IsUpdate;
	}; UpdateRoutePing_Params Params;

	Params.MapCompWidget = MapCompWidget;
	Params.IsUpdate = IsUpdate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Positions = Params.Positions;

}

// Function UW-RoutePingWidget.UW-RoutePingWidget_C.Tick
inline void UUW-RoutePingWidget_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RoutePingWidget.UW-RoutePingWidget_C.Tick");

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

// Function UW-RoutePingWidget.UW-RoutePingWidget_C.ExecuteUbergraph_UW-RoutePingWidget
inline void UUW-RoutePingWidget_C::ExecuteUbergraph_UW-RoutePingWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RoutePingWidget.UW-RoutePingWidget_C.ExecuteUbergraph_UW-RoutePingWidget");

	struct ExecuteUbergraph_UW-RoutePingWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-RoutePingWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RoutePingWidget.UW-RoutePingWidget_C.OnMarkerClicked__DelegateSignature
inline void UUW-RoutePingWidget_C::OnMarkerClicked__DelegateSignature(struct Unknown Button, char mapObjectID) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RoutePingWidget.UW-RoutePingWidget_C.OnMarkerClicked__DelegateSignature");

	struct OnMarkerClicked__DelegateSignature_Params {
		struct Unknown Button;
		char mapObjectID;
	}; OnMarkerClicked__DelegateSignature_Params Params;

	Params.Button = Button;
	Params.mapObjectID = mapObjectID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

