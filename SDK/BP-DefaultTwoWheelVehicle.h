// BlueprintGeneratedClass BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C
class ABP-DefaultTwoWheelVehicle_C : public ABP-DefaultGroundVehicle_C {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0xDA0 (8)
	struct FRotator AdditionalStuntRotation; // 0xDA8 (12)
	char Pressed_Pitch : 0; // 0xDB4 (1)
	char Pressed_Roll : 0; // 0xDB5 (1)
	char AutoRotate_Roll : 0; // 0xDB6 (1)
	char CanStunt_Roll : 0; // 0xDB7 (1)
	float StuntValue_Pitch; // 0xDB8 (4)
	float StuntValue_Roll; // 0xDBC (4)
	float StuntInterpSpeed_Pitch; // 0xDC0 (4)
	float StuntInterpSpeed_Roll; // 0xDC4 (4)
	float StuntInterpSpeedRate; // 0xDC8 (4)
	float StuntDirection_Pitch; // 0xDCC (4)
	float StuntDirection_Roll; // 0xDD0 (4)
	float TargetStunt_Pitch; // 0xDD4 (4)
	float TargetStunt_Roll; // 0xDD8 (4)
	float ParkingForceValue; // 0xDDC (4)
	float RaisingForceValue; // 0xDE0 (4)
	struct FTimerHandle Handle_SetParkingForce; // 0xDE8 (8)

	void Stunt(); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.Stunt(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ServerAddStuntRotation(struct FRotator AdditionalRot); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.ServerAddStuntRotation(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void StartPitch(); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.StartPitch(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void StopPitch(); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.StopPitch(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void CalcStuntValuePitch(); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.CalcStuntValuePitch(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void CalcStuntValueRoll(); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.CalcStuntValueRoll(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void StartRoll(); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.StartRoll(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void StopRoll(); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.StopRoll(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ResetStunt(); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.ResetStunt(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void StuntSpeedInterp(); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.StuntSpeedInterp(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_BP-DefaultTwoWheelVehicle(int32_t EntryPoint); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.ExecuteUbergraph_BP-DefaultTwoWheelVehicle(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.Stunt
inline void ABP-DefaultTwoWheelVehicle_C::Stunt() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.Stunt");

	struct Stunt_Params {
		
	}; Stunt_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.ServerAddStuntRotation
inline void ABP-DefaultTwoWheelVehicle_C::ServerAddStuntRotation(struct FRotator AdditionalRot) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.ServerAddStuntRotation");

	struct ServerAddStuntRotation_Params {
		struct FRotator AdditionalRot;
	}; ServerAddStuntRotation_Params Params;

	Params.AdditionalRot = AdditionalRot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.StartPitch
inline void ABP-DefaultTwoWheelVehicle_C::StartPitch() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.StartPitch");

	struct StartPitch_Params {
		
	}; StartPitch_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.StopPitch
inline void ABP-DefaultTwoWheelVehicle_C::StopPitch() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.StopPitch");

	struct StopPitch_Params {
		
	}; StopPitch_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.CalcStuntValuePitch
inline void ABP-DefaultTwoWheelVehicle_C::CalcStuntValuePitch() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.CalcStuntValuePitch");

	struct CalcStuntValuePitch_Params {
		
	}; CalcStuntValuePitch_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.CalcStuntValueRoll
inline void ABP-DefaultTwoWheelVehicle_C::CalcStuntValueRoll() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.CalcStuntValueRoll");

	struct CalcStuntValueRoll_Params {
		
	}; CalcStuntValueRoll_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.StartRoll
inline void ABP-DefaultTwoWheelVehicle_C::StartRoll() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.StartRoll");

	struct StartRoll_Params {
		
	}; StartRoll_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.StopRoll
inline void ABP-DefaultTwoWheelVehicle_C::StopRoll() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.StopRoll");

	struct StopRoll_Params {
		
	}; StopRoll_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.ResetStunt
inline void ABP-DefaultTwoWheelVehicle_C::ResetStunt() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.ResetStunt");

	struct ResetStunt_Params {
		
	}; ResetStunt_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.StuntSpeedInterp
inline void ABP-DefaultTwoWheelVehicle_C::StuntSpeedInterp() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.StuntSpeedInterp");

	struct StuntSpeedInterp_Params {
		
	}; StuntSpeedInterp_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.ExecuteUbergraph_BP-DefaultTwoWheelVehicle
inline void ABP-DefaultTwoWheelVehicle_C::ExecuteUbergraph_BP-DefaultTwoWheelVehicle(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.ExecuteUbergraph_BP-DefaultTwoWheelVehicle");

	struct ExecuteUbergraph_BP-DefaultTwoWheelVehicle_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-DefaultTwoWheelVehicle_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

