// WidgetBlueprintGeneratedClass UW-RoutePingWidget_Line.UW-RoutePingWidget_Line_C
class UUW-RoutePingWidget_Line_C : public UBravoHotelRoutePingWidget {

public:

	struct UWidgetAnimation Anim_OnShow; // 0x248 (8)
	struct UImage Line; // 0x250 (8)
	struct FMulticastInlineDelegate OnMarkerClicked; // 0x258 (16)
	char IsLastPoint : 0; // 0x268 (1)

	void SetGuideLine(); // Function UW-RoutePingWidget_Line.UW-RoutePingWidget_Line_C.SetGuideLine(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Set Line Visibility(char IsLastPoint); // Function UW-RoutePingWidget_Line.UW-RoutePingWidget_Line_C.Set Line Visibility(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetLineLength(float Length); // Function UW-RoutePingWidget_Line.UW-RoutePingWidget_Line_C.SetLineLength(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetTeamColor(struct FLinearColor LinearColor); // Function UW-RoutePingWidget_Line.UW-RoutePingWidget_Line_C.SetTeamColor(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnMarkerClicked__DelegateSignature(struct FKey Button, char mapObjectID); // Function UW-RoutePingWidget_Line.UW-RoutePingWidget_Line_C.OnMarkerClicked__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-RoutePingWidget_Line.UW-RoutePingWidget_Line_C.SetGuideLine
inline void UUW-RoutePingWidget_Line_C::SetGuideLine() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RoutePingWidget_Line.UW-RoutePingWidget_Line_C.SetGuideLine");

	struct SetGuideLine_Params {
		
	}; SetGuideLine_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RoutePingWidget_Line.UW-RoutePingWidget_Line_C.Set Line Visibility
inline void UUW-RoutePingWidget_Line_C::Set Line Visibility(char IsLastPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RoutePingWidget_Line.UW-RoutePingWidget_Line_C.Set Line Visibility");

	struct Set Line Visibility_Params {
		char IsLastPoint;
	}; Set Line Visibility_Params Params;

	Params.IsLastPoint = IsLastPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RoutePingWidget_Line.UW-RoutePingWidget_Line_C.SetLineLength
inline void UUW-RoutePingWidget_Line_C::SetLineLength(float Length) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RoutePingWidget_Line.UW-RoutePingWidget_Line_C.SetLineLength");

	struct SetLineLength_Params {
		float Length;
	}; SetLineLength_Params Params;

	Params.Length = Length;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RoutePingWidget_Line.UW-RoutePingWidget_Line_C.SetTeamColor
inline void UUW-RoutePingWidget_Line_C::SetTeamColor(struct FLinearColor LinearColor) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RoutePingWidget_Line.UW-RoutePingWidget_Line_C.SetTeamColor");

	struct SetTeamColor_Params {
		struct FLinearColor LinearColor;
	}; SetTeamColor_Params Params;

	Params.LinearColor = LinearColor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RoutePingWidget_Line.UW-RoutePingWidget_Line_C.OnMarkerClicked__DelegateSignature
inline void UUW-RoutePingWidget_Line_C::OnMarkerClicked__DelegateSignature(struct FKey Button, char mapObjectID) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RoutePingWidget_Line.UW-RoutePingWidget_Line_C.OnMarkerClicked__DelegateSignature");

	struct OnMarkerClicked__DelegateSignature_Params {
		struct FKey Button;
		char mapObjectID;
	}; OnMarkerClicked__DelegateSignature_Params Params;

	Params.Button = Button;
	Params.mapObjectID = mapObjectID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

