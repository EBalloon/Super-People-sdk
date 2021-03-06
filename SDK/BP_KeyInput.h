// BlueprintGeneratedClass BP_KeyInput.BP_KeyInput_C
class UBP_KeyInput_C : public Object {

public:

	struct FKey Key Input; // 0x28 (24)
	char Analog Use Negative Axis : 0; // 0x40 (1)
	float Analog Previous Axis Value; // 0x44 (4)
	float Analog Current Axis Value; // 0x48 (4)
	float World Delta Seconds; // 0x4C (4)
	char Input is Using Delta : 0; // 0x50 (1)
	struct FString Display Name; // 0x58 (16)

	void Generate Display Name(); // Function BP_KeyInput.BP_KeyInput_C.Generate Display Name(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Save Key Input(struct UBP_GameSettings_C Game Settings, struct FSKeyActionSave& KeySave); // Function BP_KeyInput.BP_KeyInput_C.Save Key Input(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Update Analog Axis Value(float World Delta Seconds, struct APlayerController Player Controller); // Function BP_KeyInput.BP_KeyInput_C.Update Analog Axis Value(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Key Input Current State(struct APlayerController Controller, float& Axis Value, char& Down, char& Just Pressed, char& Just Released); // Function BP_KeyInput.BP_KeyInput_C.Key Input Current State(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Init Key Input(struct FSKeyInput Key Input, struct UBP_KeyInput_C& Input); // Function BP_KeyInput.BP_KeyInput_C.Init Key Input(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function BP_KeyInput.BP_KeyInput_C.Generate Display Name
inline void UBP_KeyInput_C::Generate Display Name() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyInput.BP_KeyInput_C.Generate Display Name");

	struct Generate Display Name_Params {
		
	}; Generate Display Name_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_KeyInput.BP_KeyInput_C.Save Key Input
inline void UBP_KeyInput_C::Save Key Input(struct UBP_GameSettings_C Game Settings, struct FSKeyActionSave& KeySave) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyInput.BP_KeyInput_C.Save Key Input");

	struct Save Key Input_Params {
		struct UBP_GameSettings_C Game Settings;
		struct FSKeyActionSave& KeySave;
	}; Save Key Input_Params Params;

	Params.Game Settings = Game Settings;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeySave = Params.KeySave;

}

// Function BP_KeyInput.BP_KeyInput_C.Update Analog Axis Value
inline void UBP_KeyInput_C::Update Analog Axis Value(float World Delta Seconds, struct APlayerController Player Controller) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyInput.BP_KeyInput_C.Update Analog Axis Value");

	struct Update Analog Axis Value_Params {
		float World Delta Seconds;
		struct APlayerController Player Controller;
	}; Update Analog Axis Value_Params Params;

	Params.World Delta Seconds = World Delta Seconds;
	Params.Player Controller = Player Controller;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_KeyInput.BP_KeyInput_C.Key Input Current State
inline void UBP_KeyInput_C::Key Input Current State(struct APlayerController Controller, float& Axis Value, char& Down, char& Just Pressed, char& Just Released) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyInput.BP_KeyInput_C.Key Input Current State");

	struct Key Input Current State_Params {
		struct APlayerController Controller;
		float& Axis Value;
		char& Down;
		char& Just Pressed;
		char& Just Released;
	}; Key Input Current State_Params Params;

	Params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Axis Value = Params.Axis Value;
	Down = Params.Down;
	Just Pressed = Params.Just Pressed;
	Just Released = Params.Just Released;

}

// Function BP_KeyInput.BP_KeyInput_C.Init Key Input
inline void UBP_KeyInput_C::Init Key Input(struct FSKeyInput Key Input, struct UBP_KeyInput_C& Input) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyInput.BP_KeyInput_C.Init Key Input");

	struct Init Key Input_Params {
		struct FSKeyInput Key Input;
		struct UBP_KeyInput_C& Input;
	}; Init Key Input_Params Params;

	Params.Key Input = Key Input;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Input = Params.Input;

}

