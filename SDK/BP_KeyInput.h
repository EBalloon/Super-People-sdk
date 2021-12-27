// BlueprintGeneratedClass BP_KeyInput.BP_KeyInput_C
class UBP_KeyInput_C : public Object {

public:

	struct Unknown Key; // 0x28 (24)
	char Analog : 0; // 0x40 (1)
	float Analog; // 0x44 (4)
	float Analog; // 0x48 (4)
	float World; // 0x4C (4)
	char Input : 0; // 0x50 (1)
	struct FString Display; // 0x58 (16)

	void Generate(); // Function BP_KeyInput.BP_KeyInput_C.Generate(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Save(struct Unknown Game, struct Unknown& KeySave); // Function BP_KeyInput.BP_KeyInput_C.Save(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Update(float World, struct Unknown Player); // Function BP_KeyInput.BP_KeyInput_C.Update(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Key(struct Unknown Controller, float& Axis, char& Down, char& Just, char& Just); // Function BP_KeyInput.BP_KeyInput_C.Key(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Init(struct Unknown Key, struct Unknown& Input); // Function BP_KeyInput.BP_KeyInput_C.Init(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// Function BP_KeyInput.BP_KeyInput_C.Generate
inline void UBP_KeyInput_C::Generate() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyInput.BP_KeyInput_C.Generate");

	struct Generate_Params {
		
	}; Generate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_KeyInput.BP_KeyInput_C.Save
inline void UBP_KeyInput_C::Save(struct Unknown Game, struct Unknown& KeySave) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyInput.BP_KeyInput_C.Save");

	struct Save_Params {
		struct Unknown Game;
		struct Unknown& KeySave;
	}; Save_Params Params;

	Params.Game = Game;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeySave = Params.KeySave;

}

// Function BP_KeyInput.BP_KeyInput_C.Update
inline void UBP_KeyInput_C::Update(float World, struct Unknown Player) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyInput.BP_KeyInput_C.Update");

	struct Update_Params {
		float World;
		struct Unknown Player;
	}; Update_Params Params;

	Params.World = World;
	Params.Player = Player;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_KeyInput.BP_KeyInput_C.Key
inline void UBP_KeyInput_C::Key(struct Unknown Controller, float& Axis, char& Down, char& Just, char& Just) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyInput.BP_KeyInput_C.Key");

	struct Key_Params {
		struct Unknown Controller;
		float& Axis;
		char& Down;
		char& Just;
		char& Just;
	}; Key_Params Params;

	Params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Axis = Params.Axis;
	Down = Params.Down;
	Just = Params.Just;
	Just = Params.Just;

}

// Function BP_KeyInput.BP_KeyInput_C.Init
inline void UBP_KeyInput_C::Init(struct Unknown Key, struct Unknown& Input) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyInput.BP_KeyInput_C.Init");

	struct Init_Params {
		struct Unknown Key;
		struct Unknown& Input;
	}; Init_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Input = Params.Input;

}

