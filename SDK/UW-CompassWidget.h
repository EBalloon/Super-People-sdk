// WidgetBlueprintGeneratedClass UW-CompassWidget.UW-CompassWidget_C
class UUW-CompassWidget_C : public UBravoHotelCompassWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350 (8)
	struct UCanvasPanel CanvasPanel_3; // 0x358 (8)
	struct UCanvasPanel CanvasPanel_4; // 0x360 (8)
	struct UCanvasPanel grid; // 0x368 (8)
	struct UImage Image; // 0x370 (8)
	struct UImage Image_1; // 0x378 (8)
	struct UImage Image_2; // 0x380 (8)
	struct UImage Image_234; // 0x388 (8)
	struct UImage Image_582; // 0x390 (8)
	struct UInvalidationBox InvalidationBox_1; // 0x398 (8)
	struct URetainerBox RetainerBox_108; // 0x3A0 (8)
	struct UUW-PlayerMarkerWidget_C SupplyBoxMarker; // 0x3A8 (8)
	struct UCanvasPanel UnitParent; // 0x3B0 (8)
	struct UUW-CompassUnitWidget_C UW-CompassUnitWidget; // 0x3B8 (8)
	struct UUW-CompassUnitWidget_C UW-CompassUnitWidget_C_2; // 0x3C0 (8)
	struct UUW-CompassUnitWidget_C UW-CompassUnitWidget_C_3; // 0x3C8 (8)
	struct UUW-CompassUnitWidget_C UW-CompassUnitWidget_C_4; // 0x3D0 (8)
	struct UUW-CompassUnitWidget_C UW-CompassUnitWidget_C_5; // 0x3D8 (8)
	struct UUW-CompassUnitWidget_C UW-CompassUnitWidget_C_6; // 0x3E0 (8)
	struct UUW-CompassUnitWidget_C UW-CompassUnitWidget_C_7; // 0x3E8 (8)
	struct UUW-CompassUnitWidget_C UW-CompassUnitWidget_C_8; // 0x3F0 (8)
	struct UUW-CompassUnitWidget_C UW-CompassUnitWidget_C_9; // 0x3F8 (8)
	struct UUW-CompassUnitWidget_C UW-CompassUnitWidget_C_10; // 0x400 (8)
	struct UUW-CompassUnitWidget_C UW-CompassUnitWidget_C_11; // 0x408 (8)
	struct UUW-CompassUnitWidget_C UW-CompassUnitWidget_C_12; // 0x410 (8)
	struct UUW-CompassUnitWidget_C UW-CompassUnitWidget_C_13; // 0x418 (8)
	struct UUW-CompassUnitWidget_C UW-CompassUnitWidget_C_14; // 0x420 (8)
	struct UUW-PlayerMarkerWidget_C UW-PlayerMarkerWidget_C_1; // 0x428 (8)
	struct UTextBlock ViewAngle; // 0x430 (8)
	float ScaleForAngleToDistance; // 0x438 (4)
	float PositionCurveOffset; // 0x43C (4)
	struct UCurveFloat PositionCurve; // 0x440 (8)
	float PositionCurveWeight; // 0x448 (4)
	float ScaleCurveWeight; // 0x44C (4)
	float ScaleCurveOffset; // 0x450 (4)
	int32_t NormalDirectionFontSize; // 0x454 (4)
	int32_t SpecialDirectionFontSize; // 0x458 (4)
	struct TArray<struct UUW-PlayerMarkerWidget_C> ArrayPlayerMarkerWidget; // 0x460 (16)
	struct FLinearColor NorthColor; // 0x470 (16)
	int32_t Angle0To360; // 0x480 (4)
	float TempMarkerPosition; // 0x484 (4)
	float ArrangedAngle; // 0x488 (4)

	struct UUserWidget CreateExpertWeaponItemMarker(); // Function UW-CompassWidget.UW-CompassWidget_C.CreateExpertWeaponItemMarker(Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	struct UUserWidget CreateLocalPingnMarker(); // Function UW-CompassWidget.UW-CompassWidget_C.CreateLocalPingnMarker(Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetWidgetPosition(struct FVector2D Pos, struct UWidget Widget); // Function UW-CompassWidget.UW-CompassWidget_C.SetWidgetPosition(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	struct UUserWidget CreateResuscitationMarker(); // Function UW-CompassWidget.UW-CompassWidget_C.CreateResuscitationMarker(Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	struct UUserWidget CreateMaterialItemMarker(); // Function UW-CompassWidget.UW-CompassWidget_C.CreateMaterialItemMarker(Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	struct FText SetRotation(int32_t Angle); // Function UW-CompassWidget.UW-CompassWidget_C.SetRotation(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	struct UUW-CompassRulerWidget_C CreateRuler(struct FVector2D Position, float Angle); // Function UW-CompassWidget.UW-CompassWidget_C.CreateRuler(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CreateMarkerWidget(int32_t TeamPlayerCnt); // Function UW-CompassWidget.UW-CompassWidget_C.CreateMarkerWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	float GetDirectionAngle(float TargetAngle, float CurrentAngle, struct UCurveFloat Curve); // Function UW-CompassWidget.UW-CompassWidget_C.GetDirectionAngle(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	float GetCurvedFactor(float TargetAngle, float CurrentAngle, float Weight, float Offeset, struct UCurveFloat Curve); // Function UW-CompassWidget.UW-CompassWidget_C.GetCurvedFactor(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	struct UUW-CompassUnitWidget_C CreateUnit(struct FVector2D Position, float Angle); // Function UW-CompassWidget.UW-CompassWidget_C.CreateUnit(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	float ConvertAngleToDistance(float Angle); // Function UW-CompassWidget.UW-CompassWidget_C.ConvertAngleToDistance(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void UpdateMarkerRotation(); // Function UW-CompassWidget.UW-CompassWidget_C.UpdateMarkerRotation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdateControllerRotation(float Value, int32_t RealAngle); // Function UW-CompassWidget.UW-CompassWidget_C.UpdateControllerRotation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Construct(); // Function UW-CompassWidget.UW-CompassWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnUpdateMarkerPosition(int32_t WidgetIdx); // Function UW-CompassWidget.UW-CompassWidget_C.OnUpdateMarkerPosition(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CreateMarker(int32_t Count); // Function UW-CompassWidget.UW-CompassWidget_C.CreateMarker(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnResetUnit(struct UWidget Widget, float UnitAngle); // Function UW-CompassWidget.UW-CompassWidget_C.OnResetUnit(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnUpdateViewAngle(float Value, int32_t RealAngle); // Function UW-CompassWidget.UW-CompassWidget_C.OnUpdateViewAngle(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnSetMarkerInfo(struct FMarkerInfo& MarkerPingInfo, char UsingSpawnAnimation); // Function UW-CompassWidget.UW-CompassWidget_C.OnSetMarkerInfo(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnUpdatePersonalSupplyBoxMarkerPosition(); // Function UW-CompassWidget.UW-CompassWidget_C.OnUpdatePersonalSupplyBoxMarkerPosition(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnSetPersonalSupplyBoxMarkerInfo(struct FMarkerInfo& MarkerPingInfo, char Opened, char UsingSpawnAnimation); // Function UW-CompassWidget.UW-CompassWidget_C.OnSetPersonalSupplyBoxMarkerInfo(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnUpdateMaterialItemMarkerPosition(int32_t PingIndex); // Function UW-CompassWidget.UW-CompassWidget_C.OnUpdateMaterialItemMarkerPosition(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnSetMaterialItemMarkerInfo(struct FMaterialItemMarkerInfo& MaterialMarker, char UsingSpawnAnimation); // Function UW-CompassWidget.UW-CompassWidget_C.OnSetMaterialItemMarkerInfo(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnUpdateResuscitationMarkerPosition(struct UWidget MarkerWidget, struct FVector2D Pos); // Function UW-CompassWidget.UW-CompassWidget_C.OnUpdateResuscitationMarkerPosition(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnSetResuscitationMarkerInfo(struct UWidget MarkerWidget, struct ABravoHotelPlayerState PlayerState); // Function UW-CompassWidget.UW-CompassWidget_C.OnSetResuscitationMarkerInfo(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnSetLocalPingMarkerInfo(struct FLocalPingMarkerInfo& LocalPingMarker, char UsingSpawnAnimation); // Function UW-CompassWidget.UW-CompassWidget_C.OnSetLocalPingMarkerInfo(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnUpdateLocalPingMarkerPosition(int32_t PingIndex); // Function UW-CompassWidget.UW-CompassWidget_C.OnUpdateLocalPingMarkerPosition(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnUpdateExpertWeaponItemMarkerPosition(); // Function UW-CompassWidget.UW-CompassWidget_C.OnUpdateExpertWeaponItemMarkerPosition(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnSetExpertWeaponItemMarkerInfo(struct FExpertWeaponItemMarkerInfo& ExpertWeaponMarker, char UsingSpawnAnimation); // Function UW-CompassWidget.UW-CompassWidget_C.OnSetExpertWeaponItemMarkerInfo(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-CompassWidget(int32_t EntryPoint); // Function UW-CompassWidget.UW-CompassWidget_C.ExecuteUbergraph_UW-CompassWidget(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
};

// Function UW-CompassWidget.UW-CompassWidget_C.CreateExpertWeaponItemMarker
inline struct UUserWidget UUW-CompassWidget_C::CreateExpertWeaponItemMarker() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget.UW-CompassWidget_C.CreateExpertWeaponItemMarker");

	struct CreateExpertWeaponItemMarker_Params {
		
		struct UUserWidget ReturnValue;

	}; CreateExpertWeaponItemMarker_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-CompassWidget.UW-CompassWidget_C.CreateLocalPingnMarker
inline struct UUserWidget UUW-CompassWidget_C::CreateLocalPingnMarker() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget.UW-CompassWidget_C.CreateLocalPingnMarker");

	struct CreateLocalPingnMarker_Params {
		
		struct UUserWidget ReturnValue;

	}; CreateLocalPingnMarker_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-CompassWidget.UW-CompassWidget_C.SetWidgetPosition
inline void UUW-CompassWidget_C::SetWidgetPosition(struct FVector2D Pos, struct UWidget Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget.UW-CompassWidget_C.SetWidgetPosition");

	struct SetWidgetPosition_Params {
		struct FVector2D Pos;
		struct UWidget Widget;
	}; SetWidgetPosition_Params Params;

	Params.Pos = Pos;
	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CompassWidget.UW-CompassWidget_C.CreateResuscitationMarker
inline struct UUserWidget UUW-CompassWidget_C::CreateResuscitationMarker() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget.UW-CompassWidget_C.CreateResuscitationMarker");

	struct CreateResuscitationMarker_Params {
		
		struct UUserWidget ReturnValue;

	}; CreateResuscitationMarker_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-CompassWidget.UW-CompassWidget_C.CreateMaterialItemMarker
inline struct UUserWidget UUW-CompassWidget_C::CreateMaterialItemMarker() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget.UW-CompassWidget_C.CreateMaterialItemMarker");

	struct CreateMaterialItemMarker_Params {
		
		struct UUserWidget ReturnValue;

	}; CreateMaterialItemMarker_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-CompassWidget.UW-CompassWidget_C.SetRotation
inline struct FText UUW-CompassWidget_C::SetRotation(int32_t Angle) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget.UW-CompassWidget_C.SetRotation");

	struct SetRotation_Params {
		int32_t Angle;
		struct FText ReturnValue;

	}; SetRotation_Params Params;

	Params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-CompassWidget.UW-CompassWidget_C.CreateRuler
inline struct UUW-CompassRulerWidget_C UUW-CompassWidget_C::CreateRuler(struct FVector2D Position, float Angle) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget.UW-CompassWidget_C.CreateRuler");

	struct CreateRuler_Params {
		struct FVector2D Position;
		float Angle;
		struct UUW-CompassRulerWidget_C ReturnValue;

	}; CreateRuler_Params Params;

	Params.Position = Position;
	Params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-CompassWidget.UW-CompassWidget_C.CreateMarkerWidget
inline void UUW-CompassWidget_C::CreateMarkerWidget(int32_t TeamPlayerCnt) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget.UW-CompassWidget_C.CreateMarkerWidget");

	struct CreateMarkerWidget_Params {
		int32_t TeamPlayerCnt;
	}; CreateMarkerWidget_Params Params;

	Params.TeamPlayerCnt = TeamPlayerCnt;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CompassWidget.UW-CompassWidget_C.GetDirectionAngle
inline float UUW-CompassWidget_C::GetDirectionAngle(float TargetAngle, float CurrentAngle, struct UCurveFloat Curve) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget.UW-CompassWidget_C.GetDirectionAngle");

	struct GetDirectionAngle_Params {
		float TargetAngle;
		float CurrentAngle;
		struct UCurveFloat Curve;
		float ReturnValue;

	}; GetDirectionAngle_Params Params;

	Params.TargetAngle = TargetAngle;
	Params.CurrentAngle = CurrentAngle;
	Params.Curve = Curve;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-CompassWidget.UW-CompassWidget_C.GetCurvedFactor
inline float UUW-CompassWidget_C::GetCurvedFactor(float TargetAngle, float CurrentAngle, float Weight, float Offeset, struct UCurveFloat Curve) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget.UW-CompassWidget_C.GetCurvedFactor");

	struct GetCurvedFactor_Params {
		float TargetAngle;
		float CurrentAngle;
		float Weight;
		float Offeset;
		struct UCurveFloat Curve;
		float ReturnValue;

	}; GetCurvedFactor_Params Params;

	Params.TargetAngle = TargetAngle;
	Params.CurrentAngle = CurrentAngle;
	Params.Weight = Weight;
	Params.Offeset = Offeset;
	Params.Curve = Curve;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-CompassWidget.UW-CompassWidget_C.CreateUnit
inline struct UUW-CompassUnitWidget_C UUW-CompassWidget_C::CreateUnit(struct FVector2D Position, float Angle) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget.UW-CompassWidget_C.CreateUnit");

	struct CreateUnit_Params {
		struct FVector2D Position;
		float Angle;
		struct UUW-CompassUnitWidget_C ReturnValue;

	}; CreateUnit_Params Params;

	Params.Position = Position;
	Params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-CompassWidget.UW-CompassWidget_C.ConvertAngleToDistance
inline float UUW-CompassWidget_C::ConvertAngleToDistance(float Angle) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget.UW-CompassWidget_C.ConvertAngleToDistance");

	struct ConvertAngleToDistance_Params {
		float Angle;
		float ReturnValue;

	}; ConvertAngleToDistance_Params Params;

	Params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-CompassWidget.UW-CompassWidget_C.UpdateMarkerRotation
inline void UUW-CompassWidget_C::UpdateMarkerRotation() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget.UW-CompassWidget_C.UpdateMarkerRotation");

	struct UpdateMarkerRotation_Params {
		
	}; UpdateMarkerRotation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CompassWidget.UW-CompassWidget_C.UpdateControllerRotation
inline void UUW-CompassWidget_C::UpdateControllerRotation(float Value, int32_t RealAngle) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget.UW-CompassWidget_C.UpdateControllerRotation");

	struct UpdateControllerRotation_Params {
		float Value;
		int32_t RealAngle;
	}; UpdateControllerRotation_Params Params;

	Params.Value = Value;
	Params.RealAngle = RealAngle;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CompassWidget.UW-CompassWidget_C.Construct
inline void UUW-CompassWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget.UW-CompassWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CompassWidget.UW-CompassWidget_C.OnUpdateMarkerPosition
inline void UUW-CompassWidget_C::OnUpdateMarkerPosition(int32_t WidgetIdx) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget.UW-CompassWidget_C.OnUpdateMarkerPosition");

	struct OnUpdateMarkerPosition_Params {
		int32_t WidgetIdx;
	}; OnUpdateMarkerPosition_Params Params;

	Params.WidgetIdx = WidgetIdx;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CompassWidget.UW-CompassWidget_C.CreateMarker
inline void UUW-CompassWidget_C::CreateMarker(int32_t Count) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget.UW-CompassWidget_C.CreateMarker");

	struct CreateMarker_Params {
		int32_t Count;
	}; CreateMarker_Params Params;

	Params.Count = Count;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CompassWidget.UW-CompassWidget_C.OnResetUnit
inline void UUW-CompassWidget_C::OnResetUnit(struct UWidget Widget, float UnitAngle) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget.UW-CompassWidget_C.OnResetUnit");

	struct OnResetUnit_Params {
		struct UWidget Widget;
		float UnitAngle;
	}; OnResetUnit_Params Params;

	Params.Widget = Widget;
	Params.UnitAngle = UnitAngle;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CompassWidget.UW-CompassWidget_C.OnUpdateViewAngle
inline void UUW-CompassWidget_C::OnUpdateViewAngle(float Value, int32_t RealAngle) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget.UW-CompassWidget_C.OnUpdateViewAngle");

	struct OnUpdateViewAngle_Params {
		float Value;
		int32_t RealAngle;
	}; OnUpdateViewAngle_Params Params;

	Params.Value = Value;
	Params.RealAngle = RealAngle;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CompassWidget.UW-CompassWidget_C.OnSetMarkerInfo
inline void UUW-CompassWidget_C::OnSetMarkerInfo(struct FMarkerInfo& MarkerPingInfo, char UsingSpawnAnimation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget.UW-CompassWidget_C.OnSetMarkerInfo");

	struct OnSetMarkerInfo_Params {
		struct FMarkerInfo& MarkerPingInfo;
		char UsingSpawnAnimation;
	}; OnSetMarkerInfo_Params Params;

	Params.UsingSpawnAnimation = UsingSpawnAnimation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MarkerPingInfo = Params.MarkerPingInfo;

}

// Function UW-CompassWidget.UW-CompassWidget_C.OnUpdatePersonalSupplyBoxMarkerPosition
inline void UUW-CompassWidget_C::OnUpdatePersonalSupplyBoxMarkerPosition() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget.UW-CompassWidget_C.OnUpdatePersonalSupplyBoxMarkerPosition");

	struct OnUpdatePersonalSupplyBoxMarkerPosition_Params {
		
	}; OnUpdatePersonalSupplyBoxMarkerPosition_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CompassWidget.UW-CompassWidget_C.OnSetPersonalSupplyBoxMarkerInfo
inline void UUW-CompassWidget_C::OnSetPersonalSupplyBoxMarkerInfo(struct FMarkerInfo& MarkerPingInfo, char Opened, char UsingSpawnAnimation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget.UW-CompassWidget_C.OnSetPersonalSupplyBoxMarkerInfo");

	struct OnSetPersonalSupplyBoxMarkerInfo_Params {
		struct FMarkerInfo& MarkerPingInfo;
		char Opened;
		char UsingSpawnAnimation;
	}; OnSetPersonalSupplyBoxMarkerInfo_Params Params;

	Params.Opened = Opened;
	Params.UsingSpawnAnimation = UsingSpawnAnimation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MarkerPingInfo = Params.MarkerPingInfo;

}

// Function UW-CompassWidget.UW-CompassWidget_C.OnUpdateMaterialItemMarkerPosition
inline void UUW-CompassWidget_C::OnUpdateMaterialItemMarkerPosition(int32_t PingIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget.UW-CompassWidget_C.OnUpdateMaterialItemMarkerPosition");

	struct OnUpdateMaterialItemMarkerPosition_Params {
		int32_t PingIndex;
	}; OnUpdateMaterialItemMarkerPosition_Params Params;

	Params.PingIndex = PingIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CompassWidget.UW-CompassWidget_C.OnSetMaterialItemMarkerInfo
inline void UUW-CompassWidget_C::OnSetMaterialItemMarkerInfo(struct FMaterialItemMarkerInfo& MaterialMarker, char UsingSpawnAnimation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget.UW-CompassWidget_C.OnSetMaterialItemMarkerInfo");

	struct OnSetMaterialItemMarkerInfo_Params {
		struct FMaterialItemMarkerInfo& MaterialMarker;
		char UsingSpawnAnimation;
	}; OnSetMaterialItemMarkerInfo_Params Params;

	Params.UsingSpawnAnimation = UsingSpawnAnimation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MaterialMarker = Params.MaterialMarker;

}

// Function UW-CompassWidget.UW-CompassWidget_C.OnUpdateResuscitationMarkerPosition
inline void UUW-CompassWidget_C::OnUpdateResuscitationMarkerPosition(struct UWidget MarkerWidget, struct FVector2D Pos) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget.UW-CompassWidget_C.OnUpdateResuscitationMarkerPosition");

	struct OnUpdateResuscitationMarkerPosition_Params {
		struct UWidget MarkerWidget;
		struct FVector2D Pos;
	}; OnUpdateResuscitationMarkerPosition_Params Params;

	Params.MarkerWidget = MarkerWidget;
	Params.Pos = Pos;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CompassWidget.UW-CompassWidget_C.OnSetResuscitationMarkerInfo
inline void UUW-CompassWidget_C::OnSetResuscitationMarkerInfo(struct UWidget MarkerWidget, struct ABravoHotelPlayerState PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget.UW-CompassWidget_C.OnSetResuscitationMarkerInfo");

	struct OnSetResuscitationMarkerInfo_Params {
		struct UWidget MarkerWidget;
		struct ABravoHotelPlayerState PlayerState;
	}; OnSetResuscitationMarkerInfo_Params Params;

	Params.MarkerWidget = MarkerWidget;
	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CompassWidget.UW-CompassWidget_C.OnSetLocalPingMarkerInfo
inline void UUW-CompassWidget_C::OnSetLocalPingMarkerInfo(struct FLocalPingMarkerInfo& LocalPingMarker, char UsingSpawnAnimation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget.UW-CompassWidget_C.OnSetLocalPingMarkerInfo");

	struct OnSetLocalPingMarkerInfo_Params {
		struct FLocalPingMarkerInfo& LocalPingMarker;
		char UsingSpawnAnimation;
	}; OnSetLocalPingMarkerInfo_Params Params;

	Params.UsingSpawnAnimation = UsingSpawnAnimation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	LocalPingMarker = Params.LocalPingMarker;

}

// Function UW-CompassWidget.UW-CompassWidget_C.OnUpdateLocalPingMarkerPosition
inline void UUW-CompassWidget_C::OnUpdateLocalPingMarkerPosition(int32_t PingIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget.UW-CompassWidget_C.OnUpdateLocalPingMarkerPosition");

	struct OnUpdateLocalPingMarkerPosition_Params {
		int32_t PingIndex;
	}; OnUpdateLocalPingMarkerPosition_Params Params;

	Params.PingIndex = PingIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CompassWidget.UW-CompassWidget_C.OnUpdateExpertWeaponItemMarkerPosition
inline void UUW-CompassWidget_C::OnUpdateExpertWeaponItemMarkerPosition() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget.UW-CompassWidget_C.OnUpdateExpertWeaponItemMarkerPosition");

	struct OnUpdateExpertWeaponItemMarkerPosition_Params {
		
	}; OnUpdateExpertWeaponItemMarkerPosition_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CompassWidget.UW-CompassWidget_C.OnSetExpertWeaponItemMarkerInfo
inline void UUW-CompassWidget_C::OnSetExpertWeaponItemMarkerInfo(struct FExpertWeaponItemMarkerInfo& ExpertWeaponMarker, char UsingSpawnAnimation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget.UW-CompassWidget_C.OnSetExpertWeaponItemMarkerInfo");

	struct OnSetExpertWeaponItemMarkerInfo_Params {
		struct FExpertWeaponItemMarkerInfo& ExpertWeaponMarker;
		char UsingSpawnAnimation;
	}; OnSetExpertWeaponItemMarkerInfo_Params Params;

	Params.UsingSpawnAnimation = UsingSpawnAnimation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ExpertWeaponMarker = Params.ExpertWeaponMarker;

}

// Function UW-CompassWidget.UW-CompassWidget_C.ExecuteUbergraph_UW-CompassWidget
inline void UUW-CompassWidget_C::ExecuteUbergraph_UW-CompassWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget.UW-CompassWidget_C.ExecuteUbergraph_UW-CompassWidget");

	struct ExecuteUbergraph_UW-CompassWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-CompassWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

