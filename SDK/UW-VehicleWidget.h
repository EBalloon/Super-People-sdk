// WidgetBlueprintGeneratedClass UW-VehicleWidget.UW-VehicleWidget_C
class UUW-VehicleWidget_C : public UBravoHotelVehicleWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2A8 (8)
	struct UProgressBar FuelGauge; // 0x2B0 (8)
	struct UImage FuelIcon; // 0x2B8 (8)
	struct UProgressBar HPFaint; // 0x2C0 (8)
	struct UProgressBar HPGauge; // 0x2C8 (8)
	struct UImage HPIcon; // 0x2D0 (8)
	struct UTextBlock SpeedText; // 0x2D8 (8)
	struct UOverlay SubInfoParent; // 0x2E0 (8)
	struct UUW-VehicleSeatWidget_C UW-VehicleSeatWidget; // 0x2E8 (8)
	struct ABravoHotelVehicle CachedVehicle; // 0x2F0 (8)
	struct FLinearColor MySeatColor; // 0x2F8 (16)
	struct FLinearColor EmptyFuelColor; // 0x308 (16)
	float InterpTargetHpRate; // 0x318 (4)
	float InterpCurrentHpRate; // 0x31C (4)
	float InterpSpeed; // 0x320 (4)
	struct UCurveFloat HPFaintCurve; // 0x328 (8)
	struct UCurveLinearColor HPColorCurve; // 0x330 (8)
	struct UUW-VehicleSubInfo_Base_C SubInfoWidget; // 0x338 (8)
	char EnableBind : 0; // 0x340 (1)
	struct ABravoHotelVehicle NewVar_1; // 0x348 (8)

	void OnWheelWrecked(int32_t WheelIndex); // Function UW-VehicleWidget.UW-VehicleWidget_C.OnWheelWrecked(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetHPColor(float InPercent); // Function UW-VehicleWidget.UW-VehicleWidget_C.SetHPColor(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnSeatOccupantExited(struct UBravoHotelVehicleSeatComponent Seat); // Function UW-VehicleWidget.UW-VehicleWidget_C.OnSeatOccupantExited(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnSeatOccupantEntered(struct UBravoHotelVehicleSeatComponent Seat); // Function UW-VehicleWidget.UW-VehicleWidget_C.OnSeatOccupantEntered(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void UpdateFuelGauge(); // Function UW-VehicleWidget.UW-VehicleWidget_C.UpdateFuelGauge(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void UpdateSpeedText(); // Function UW-VehicleWidget.UW-VehicleWidget_C.UpdateSpeedText(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Hide(); // Function UW-VehicleWidget.UW-VehicleWidget_C.Hide(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Show(struct UBravoHotelVehicleSeatComponent VehicleSeat); // Function UW-VehicleWidget.UW-VehicleWidget_C.Show(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-VehicleWidget.UW-VehicleWidget_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Construct(); // Function UW-VehicleWidget.UW-VehicleWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetInfo(float CurFuel, float CurHp, struct FString CurSpeed); // Function UW-VehicleWidget.UW-VehicleWidget_C.SetInfo(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ShowVehicle(); // Function UW-VehicleWidget.UW-VehicleWidget_C.ShowVehicle(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnSeatOccupantEnter(struct UBravoHotelVehicleSeatComponent SeatComponent, struct ABravoHotelCharacter Occupant); // Function UW-VehicleWidget.UW-VehicleWidget_C.OnSeatOccupantEnter(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void 鉹@ t元_1(struct UBravoHotelVehicleSeatComponent SeatComponent, struct ABravoHotelCharacter Occupant); // Function UW-VehicleWidget.UW-VehicleWidget_C.鉹@ t元_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void HideVehicle(); // Function UW-VehicleWidget.UW-VehicleWidget_C.HideVehicle(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetInterpTarget(); // Function UW-VehicleWidget.UW-VehicleWidget_C.SetInterpTarget(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_UW-VehicleWidget(int32_t EntryPoint); // Function UW-VehicleWidget.UW-VehicleWidget_C.ExecuteUbergraph_UW-VehicleWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-VehicleWidget.UW-VehicleWidget_C.OnWheelWrecked
inline void UUW-VehicleWidget_C::OnWheelWrecked(int32_t WheelIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleWidget.UW-VehicleWidget_C.OnWheelWrecked");

	struct OnWheelWrecked_Params {
		int32_t WheelIndex;
	}; OnWheelWrecked_Params Params;

	Params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VehicleWidget.UW-VehicleWidget_C.SetHPColor
inline void UUW-VehicleWidget_C::SetHPColor(float InPercent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleWidget.UW-VehicleWidget_C.SetHPColor");

	struct SetHPColor_Params {
		float InPercent;
	}; SetHPColor_Params Params;

	Params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VehicleWidget.UW-VehicleWidget_C.OnSeatOccupantExited
inline void UUW-VehicleWidget_C::OnSeatOccupantExited(struct UBravoHotelVehicleSeatComponent Seat) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleWidget.UW-VehicleWidget_C.OnSeatOccupantExited");

	struct OnSeatOccupantExited_Params {
		struct UBravoHotelVehicleSeatComponent Seat;
	}; OnSeatOccupantExited_Params Params;

	Params.Seat = Seat;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VehicleWidget.UW-VehicleWidget_C.OnSeatOccupantEntered
inline void UUW-VehicleWidget_C::OnSeatOccupantEntered(struct UBravoHotelVehicleSeatComponent Seat) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleWidget.UW-VehicleWidget_C.OnSeatOccupantEntered");

	struct OnSeatOccupantEntered_Params {
		struct UBravoHotelVehicleSeatComponent Seat;
	}; OnSeatOccupantEntered_Params Params;

	Params.Seat = Seat;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VehicleWidget.UW-VehicleWidget_C.UpdateFuelGauge
inline void UUW-VehicleWidget_C::UpdateFuelGauge() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleWidget.UW-VehicleWidget_C.UpdateFuelGauge");

	struct UpdateFuelGauge_Params {
		
	}; UpdateFuelGauge_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VehicleWidget.UW-VehicleWidget_C.UpdateSpeedText
inline void UUW-VehicleWidget_C::UpdateSpeedText() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleWidget.UW-VehicleWidget_C.UpdateSpeedText");

	struct UpdateSpeedText_Params {
		
	}; UpdateSpeedText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VehicleWidget.UW-VehicleWidget_C.Hide
inline void UUW-VehicleWidget_C::Hide() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleWidget.UW-VehicleWidget_C.Hide");

	struct Hide_Params {
		
	}; Hide_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VehicleWidget.UW-VehicleWidget_C.Show
inline void UUW-VehicleWidget_C::Show(struct UBravoHotelVehicleSeatComponent VehicleSeat) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleWidget.UW-VehicleWidget_C.Show");

	struct Show_Params {
		struct UBravoHotelVehicleSeatComponent VehicleSeat;
	}; Show_Params Params;

	Params.VehicleSeat = VehicleSeat;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VehicleWidget.UW-VehicleWidget_C.Tick
inline void UUW-VehicleWidget_C::Tick(struct FGeometry MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleWidget.UW-VehicleWidget_C.Tick");

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

// Function UW-VehicleWidget.UW-VehicleWidget_C.Construct
inline void UUW-VehicleWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleWidget.UW-VehicleWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VehicleWidget.UW-VehicleWidget_C.SetInfo
inline void UUW-VehicleWidget_C::SetInfo(float CurFuel, float CurHp, struct FString CurSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleWidget.UW-VehicleWidget_C.SetInfo");

	struct SetInfo_Params {
		float CurFuel;
		float CurHp;
		struct FString CurSpeed;
	}; SetInfo_Params Params;

	Params.CurFuel = CurFuel;
	Params.CurHp = CurHp;
	Params.CurSpeed = CurSpeed;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VehicleWidget.UW-VehicleWidget_C.ShowVehicle
inline void UUW-VehicleWidget_C::ShowVehicle() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleWidget.UW-VehicleWidget_C.ShowVehicle");

	struct ShowVehicle_Params {
		
	}; ShowVehicle_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VehicleWidget.UW-VehicleWidget_C.OnSeatOccupantEnter
inline void UUW-VehicleWidget_C::OnSeatOccupantEnter(struct UBravoHotelVehicleSeatComponent SeatComponent, struct ABravoHotelCharacter Occupant) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleWidget.UW-VehicleWidget_C.OnSeatOccupantEnter");

	struct OnSeatOccupantEnter_Params {
		struct UBravoHotelVehicleSeatComponent SeatComponent;
		struct ABravoHotelCharacter Occupant;
	}; OnSeatOccupantEnter_Params Params;

	Params.SeatComponent = SeatComponent;
	Params.Occupant = Occupant;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VehicleWidget.UW-VehicleWidget_C.鉹@ t元_1
inline void UUW-VehicleWidget_C::鉹@ t元_1(struct UBravoHotelVehicleSeatComponent SeatComponent, struct ABravoHotelCharacter Occupant) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleWidget.UW-VehicleWidget_C.鉹@ t元_1");

	struct 鉹@ t元_1_Params {
		struct UBravoHotelVehicleSeatComponent SeatComponent;
		struct ABravoHotelCharacter Occupant;
	}; 鉹@ t元_1_Params Params;

	Params.SeatComponent = SeatComponent;
	Params.Occupant = Occupant;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VehicleWidget.UW-VehicleWidget_C.HideVehicle
inline void UUW-VehicleWidget_C::HideVehicle() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleWidget.UW-VehicleWidget_C.HideVehicle");

	struct HideVehicle_Params {
		
	}; HideVehicle_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VehicleWidget.UW-VehicleWidget_C.SetInterpTarget
inline void UUW-VehicleWidget_C::SetInterpTarget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleWidget.UW-VehicleWidget_C.SetInterpTarget");

	struct SetInterpTarget_Params {
		
	}; SetInterpTarget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VehicleWidget.UW-VehicleWidget_C.ExecuteUbergraph_UW-VehicleWidget
inline void UUW-VehicleWidget_C::ExecuteUbergraph_UW-VehicleWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleWidget.UW-VehicleWidget_C.ExecuteUbergraph_UW-VehicleWidget");

	struct ExecuteUbergraph_UW-VehicleWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-VehicleWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

