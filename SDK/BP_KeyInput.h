// BlueprintGeneratedClass BP_KeyInput.BP_KeyInput_C
class UBP_KeyInput_C : public Object {

public:

	struct Unknown Key Input; // 0x28 (24)
	char Analog Use Negative Axis : 0; // 0x40 (1)
	float Analog Previous Axis Value; // 0x44 (4)
	float Analog Current Axis Value; // 0x48 (4)
	float World Delta Seconds; // 0x4C (4)
	char Input is Using Delta : 0; // 0x50 (1)
	struct FString Display Name; // 0x58 (16)

	void Generate Display Name(); // Function BP_KeyInput.BP_KeyInput_C.Generate Display Name(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Save Key Input(struct Unknown Game Settings, struct Unknown& KeySave); // Function BP_KeyInput.BP_KeyInput_C.Save Key Input(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Update Analog Axis Value(float World Delta Seconds, struct Unknown Player Controller); // Function BP_KeyInput.BP_KeyInput_C.Update Analog Axis Value(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Key Input Current State(struct Unknown Controller, float& Axis Value, char& Down, char& Just Pressed, char& Just Released); // Function BP_KeyInput.BP_KeyInput_C.Key Input Current State(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Init Key Input(struct Unknown Key Input, struct Unknown& Input); // Function BP_KeyInput.BP_KeyInput_C.Init Key Input(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
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
inline void UBP_KeyInput_C::Save Key Input(struct Unknown Game Settings, struct Unknown& KeySave) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyInput.BP_KeyInput_C.Save Key Input");

	struct Save Key Input_Params {
		struct Unknown Game Settings;
		struct Unknown& KeySave;
	}; Save Key Input_Params Params;

	Params.Game Settings = Game Settings;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeySave = Params.KeySave;

}

// Function BP_KeyInput.BP_KeyInput_C.Update Analog Axis Value
inline void UBP_KeyInput_C::Update Analog Axis Value(float World Delta Seconds, struct Unknown Player Controller) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyInput.BP_KeyInput_C.Update Analog Axis Value");

	struct Update Analog Axis Value_Params {
		float World Delta Seconds;
		struct Unknown Player Controller;
	}; Update Analog Axis Value_Params Params;

	Params.World Delta Seconds = World Delta Seconds;
	Params.Player Controller = Player Controller;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_KeyInput.BP_KeyInput_C.Key Input Current State
inline void UBP_KeyInput_C::Key Input Current State(struct Unknown Controller, float& Axis Value, char& Down, char& Just Pressed, char& Just Released) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyInput.BP_KeyInput_C.Key Input Current State");

	struct Key Input Current State_Params {
		struct Unknown Controller;
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
inline void UBP_KeyInput_C::Init Key Input(struct Unknown Key Input, struct Unknown& Input) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyInput.BP_KeyInput_C.Init Key Input");

	struct Init Key Input_Params {
		struct Unknown Key Input;
		struct Unknown& Input;
	}; Init Key Input_Params Params;

	Params.Key Input = Key Input;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Input = Params.Input;

}

