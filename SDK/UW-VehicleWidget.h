// WidgetBlueprintGeneratedClass UW-VehicleWidget.UW-VehicleWidget_C
class UUW-VehicleWidget_C : public UBravoHotelVehicleWidget {

public:

	struct Unknown UberGraphFrame; // 0x2A8 (8)
	struct Unknown FuelGauge; // 0x2B0 (8)
	struct Unknown FuelIcon; // 0x2B8 (8)
	struct Unknown HPFaint; // 0x2C0 (8)
	struct Unknown HPGauge; // 0x2C8 (8)
	struct Unknown HPIcon; // 0x2D0 (8)
	struct Unknown SpeedText; // 0x2D8 (8)
	struct Unknown SubInfoParent; // 0x2E0 (8)
	struct Unknown UW-VehicleSeatWidget; // 0x2E8 (8)
	struct Unknown CachedVehicle; // 0x2F0 (8)
	struct Unknown MySeatColor; // 0x2F8 (16)
	struct Unknown EmptyFuelColor; // 0x308 (16)
	float InterpTargetHpRate; // 0x318 (4)
	float InterpCurrentHpRate; // 0x31C (4)
	float InterpSpeed; // 0x320 (4)
	struct Unknown HPFaintCurve; // 0x328 (8)
	struct Unknown HPColorCurve; // 0x330 (8)
	struct Unknown SubInfoWidget; // 0x338 (8)
	char EnableBind : 0; // 0x340 (1)
	struct Unknown NewVar_1; // 0x348 (8)

	void OnWheelWrecked(int32_t WheelIndex); // Function UW-VehicleWidget.UW-VehicleWidget_C.OnWheelWrecked(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetHPColor(float InPercent); // Function UW-VehicleWidget.UW-VehicleWidget_C.SetHPColor(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnSeatOccupantExited(struct Unknown Seat); // Function UW-VehicleWidget.UW-VehicleWidget_C.OnSeatOccupantExited(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnSeatOccupantEntered(struct Unknown Seat); // Function UW-VehicleWidget.UW-VehicleWidget_C.OnSeatOccupantEntered(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void UpdateFuelGauge(); // Function UW-VehicleWidget.UW-VehicleWidget_C.UpdateFuelGauge(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void UpdateSpeedText(); // Function UW-VehicleWidget.UW-VehicleWidget_C.UpdateSpeedText(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Hide(); // Function UW-VehicleWidget.UW-VehicleWidget_C.Hide(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Show(struct Unknown VehicleSeat); // Function UW-VehicleWidget.UW-VehicleWidget_C.Show(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function UW-VehicleWidget.UW-VehicleWidget_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Construct(); // Function UW-VehicleWidget.UW-VehicleWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetInfo(float CurFuel, float CurHp, struct FString CurSpeed); // Function UW-VehicleWidget.UW-VehicleWidget_C.SetInfo(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ShowVehicle(); // Function UW-VehicleWidget.UW-VehicleWidget_C.ShowVehicle(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnSeatOccupantEnter(struct Unknown SeatComponent, struct Unknown Occupant); // Function UW-VehicleWidget.UW-VehicleWidget_C.OnSeatOccupantEnter(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void 鉹@ t元_1(struct Unknown SeatComponent, struct Unknown Occupant); // Function UW-VehicleWidget.UW-VehicleWidget_C.鉹@ t元_1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void HideVehicle(); // Function UW-VehicleWidget.UW-VehicleWidget_C.HideVehicle(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetInterpTarget(); // Function UW-VehicleWidget.UW-VehicleWidget_C.SetInterpTarget(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_UW-VehicleWidget(int32_t EntryPoint); // Function UW-VehicleWidget.UW-VehicleWidget_C.ExecuteUbergraph_UW-VehicleWidget(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B812B0>
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
inline void UUW-VehicleWidget_C::OnSeatOccupantExited(struct Unknown Seat) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleWidget.UW-VehicleWidget_C.OnSeatOccupantExited");

	struct OnSeatOccupantExited_Params {
		struct Unknown Seat;
	}; OnSeatOccupantExited_Params Params;

	Params.Seat = Seat;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VehicleWidget.UW-VehicleWidget_C.OnSeatOccupantEntered
inline void UUW-VehicleWidget_C::OnSeatOccupantEntered(struct Unknown Seat) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleWidget.UW-VehicleWidget_C.OnSeatOccupantEntered");

	struct OnSeatOccupantEntered_Params {
		struct Unknown Seat;
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
inline void UUW-VehicleWidget_C::Show(struct Unknown VehicleSeat) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleWidget.UW-VehicleWidget_C.Show");

	struct Show_Params {
		struct Unknown VehicleSeat;
	}; Show_Params Params;

	Params.VehicleSeat = VehicleSeat;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VehicleWidget.UW-VehicleWidget_C.Tick
inline void UUW-VehicleWidget_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleWidget.UW-VehicleWidget_C.Tick");

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
inline void UUW-VehicleWidget_C::OnSeatOccupantEnter(struct Unknown SeatComponent, struct Unknown Occupant) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleWidget.UW-VehicleWidget_C.OnSeatOccupantEnter");

	struct OnSeatOccupantEnter_Params {
		struct Unknown SeatComponent;
		struct Unknown Occupant;
	}; OnSeatOccupantEnter_Params Params;

	Params.SeatComponent = SeatComponent;
	Params.Occupant = Occupant;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VehicleWidget.UW-VehicleWidget_C.鉹@ t元_1
inline void UUW-VehicleWidget_C::鉹@ t元_1(struct Unknown SeatComponent, struct Unknown Occupant) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleWidget.UW-VehicleWidget_C.鉹@ t元_1");

	struct 鉹@ t元_1_Params {
		struct Unknown SeatComponent;
		struct Unknown Occupant;
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

