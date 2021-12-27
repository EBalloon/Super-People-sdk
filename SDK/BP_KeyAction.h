// BlueprintGeneratedClass BP_KeyAction.BP_KeyAction_C
class UBP_KeyAction_C : public Object {

public:

	struct FString Action; // 0x28 (16)
	struct FString Category; // 0x38 (16)
	struct TArray<Unknown> Key; // 0x48 (16)

	void Get(struct FString Mapping, struct Unknown& Mapping, char& SUCCESS); // Function BP_KeyAction.BP_KeyAction_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Load(struct Unknown Game); // Function BP_KeyAction.BP_KeyAction_C.Load(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Save(struct Unknown Game); // Function BP_KeyAction.BP_KeyAction_C.Save(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Key(struct Unknown Player, float& Action, char& Just, char& Just); // Function BP_KeyAction.BP_KeyAction_C.Key(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Init(struct Unknown Key, struct FString Action, struct Unknown& Action); // Function BP_KeyAction.BP_KeyAction_C.Init(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// Function BP_KeyAction.BP_KeyAction_C.Get
inline void UBP_KeyAction_C::Get(struct FString Mapping, struct Unknown& Mapping, char& SUCCESS) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyAction.BP_KeyAction_C.Get");

	struct Get_Params {
		struct FString Mapping;
		struct Unknown& Mapping;
		char& SUCCESS;
	}; Get_Params Params;

	Params.Mapping = Mapping;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Mapping = Params.Mapping;
	SUCCESS = Params.SUCCESS;

}

// Function BP_KeyAction.BP_KeyAction_C.Load
inline void UBP_KeyAction_C::Load(struct Unknown Game) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyAction.BP_KeyAction_C.Load");

	struct Load_Params {
		struct Unknown Game;
	}; Load_Params Params;

	Params.Game = Game;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_KeyAction.BP_KeyAction_C.Save
inline void UBP_KeyAction_C::Save(struct Unknown Game) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyAction.BP_KeyAction_C.Save");

	struct Save_Params {
		struct Unknown Game;
	}; Save_Params Params;

	Params.Game = Game;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_KeyAction.BP_KeyAction_C.Key
inline void UBP_KeyAction_C::Key(struct Unknown Player, float& Action, char& Just, char& Just) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyAction.BP_KeyAction_C.Key");

	struct Key_Params {
		struct Unknown Player;
		float& Action;
		char& Just;
		char& Just;
	}; Key_Params Params;

	Params.Player = Player;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Action = Params.Action;
	Just = Params.Just;
	Just = Params.Just;

}

// Function BP_KeyAction.BP_KeyAction_C.Init
inline void UBP_KeyAction_C::Init(struct Unknown Key, struct FString Action, struct Unknown& Action) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyAction.BP_KeyAction_C.Init");

	struct Init_Params {
		struct Unknown Key;
		struct FString Action;
		struct Unknown& Action;
	}; Init_Params Params;

	Params.Key = Key;
	Params.Action = Action;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Action = Params.Action;

}

