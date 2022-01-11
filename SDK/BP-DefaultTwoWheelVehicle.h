// BlueprintGeneratedClass BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C
class ABP-DefaultTwoWheelVehicle_C : public ABP-DefaultGroundVehicle_C {

public:

	struct Unknown UberGraphFrame; // 0xD98 (8)
	struct Unknown AdditionalStuntRotation; // 0xDA0 (12)
	char Pressed_Pitch : 0; // 0xDAC (1)
	char Pressed_Roll : 0; // 0xDAD (1)
	char AutoRotate_Roll : 0; // 0xDAE (1)
	char CanStunt_Roll : 0; // 0xDAF (1)
	float StuntValue_Pitch; // 0xDB0 (4)
	float StuntValue_Roll; // 0xDB4 (4)
	float StuntInterpSpeed_Pitch; // 0xDB8 (4)
	float StuntInterpSpeed_Roll; // 0xDBC (4)
	float StuntInterpSpeedRate; // 0xDC0 (4)
	float StuntDirection_Pitch; // 0xDC4 (4)
	float StuntDirection_Roll; // 0xDC8 (4)
	float TargetStunt_Pitch; // 0xDCC (4)
	float TargetStunt_Roll; // 0xDD0 (4)
	float ParkingForceValue; // 0xDD4 (4)
	float RaisingForceValue; // 0xDD8 (4)
	struct Unknown Handle_SetParkingForce; // 0xDE0 (8)

	void Stunt(); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.Stunt(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ServerAddStuntRotation(struct Unknown AdditionalRot); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.ServerAddStuntRotation(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void StartPitch(); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.StartPitch(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void StopPitch(); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.StopPitch(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CalcStuntValuePitch(); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.CalcStuntValuePitch(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CalcStuntValueRoll(); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.CalcStuntValueRoll(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void StartRoll(); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.StartRoll(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void StopRoll(); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.StopRoll(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ResetStunt(); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.ResetStunt(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void StuntSpeedInterp(); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.StuntSpeedInterp(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_BP-DefaultTwoWheelVehicle(int32_t EntryPoint); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.ExecuteUbergraph_BP-DefaultTwoWheelVehicle(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
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
inline void ABP-DefaultTwoWheelVehicle_C::ServerAddStuntRotation(struct Unknown AdditionalRot) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.ServerAddStuntRotation");

	struct ServerAddStuntRotation_Params {
		struct Unknown AdditionalRot;
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

