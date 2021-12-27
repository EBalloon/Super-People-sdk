// BlueprintGeneratedClass BP_KeyCombination.BP_KeyCombination_C
class UBP_KeyCombination_C : public Object {

public:

	struct FString Name; // 0x28 (16)
	struct TArray<Unknown> Key; // 0x38 (16)
	struct TArray<Unknown> Default; // 0x48 (16)
	char Can : 0; // 0x58 (1)
	struct TArray<Unknown> Conflicting; // 0x60 (16)
	struct TArray<Unknown> Conflicting; // 0x70 (16)
	struct FMulticastInlineDelegate Combination; // 0x80 (16)
	struct Unknown Parent; // 0x90 (8)

	void Get(struct FString Separator, struct FString No, char Display, struct FString& Display); // Function BP_KeyCombination.BP_KeyCombination_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Add(struct Unknown InputPin, struct Unknown& Input); // Function BP_KeyCombination.BP_KeyCombination_C.Add(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Equal(struct TArray<Unknown>& Combination, char& Result); // Function BP_KeyCombination.BP_KeyCombination_C.Equal(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Equal(struct TArray<Unknown>& Conflicts, char& Result); // Function BP_KeyCombination.BP_KeyCombination_C.Equal(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Evaluate(struct Unknown Player, char& Is, char& Just, char& Just); // Function BP_KeyCombination.BP_KeyCombination_C.Evaluate(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Clear(); // Function BP_KeyCombination.BP_KeyCombination_C.Clear(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Add(struct Unknown Conflicted, char Conflicted); // Function BP_KeyCombination.BP_KeyCombination_C.Add(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Detect(struct Unknown Input, char& Conflict); // Function BP_KeyCombination.BP_KeyCombination_C.Detect(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Replace(struct TArray<Unknown>& Key); // Function BP_KeyCombination.BP_KeyCombination_C.Replace(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Load(struct Unknown Game, struct FString Action, struct FString Category, struct FString Name, char Primary); // Function BP_KeyCombination.BP_KeyCombination_C.Load(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Save(struct Unknown Game, struct Unknown& KeySave); // Function BP_KeyCombination.BP_KeyCombination_C.Save(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Key(struct Unknown Player, char Ignore, float& Axis, char& Is, char& Just, char& Just); // Function BP_KeyCombination.BP_KeyCombination_C.Key(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Init(struct FString Name, char Can, struct TArray<Unknown>& Key, struct Unknown& Combination); // Function BP_KeyCombination.BP_KeyCombination_C.Init(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Combination(struct Unknown Combination); // Function BP_KeyCombination.BP_KeyCombination_C.Combination(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// Function BP_KeyCombination.BP_KeyCombination_C.Get
inline void UBP_KeyCombination_C::Get(struct FString Separator, struct FString No, char Display, struct FString& Display) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyCombination.BP_KeyCombination_C.Get");

	struct Get_Params {
		struct FString Separator;
		struct FString No;
		char Display;
		struct FString& Display;
	}; Get_Params Params;

	Params.Separator = Separator;
	Params.No = No;
	Params.Display = Display;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Display = Params.Display;

}

// Function BP_KeyCombination.BP_KeyCombination_C.Add
inline void UBP_KeyCombination_C::Add(struct Unknown InputPin, struct Unknown& Input) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyCombination.BP_KeyCombination_C.Add");

	struct Add_Params {
		struct Unknown InputPin;
		struct Unknown& Input;
	}; Add_Params Params;

	Params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Input = Params.Input;

}

// Function BP_KeyCombination.BP_KeyCombination_C.Equal
inline void UBP_KeyCombination_C::Equal(struct TArray<Unknown>& Combination, char& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyCombination.BP_KeyCombination_C.Equal");

	struct Equal_Params {
		struct TArray<Unknown>& Combination;
		char& Result;
	}; Equal_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Combination = Params.Combination;
	Result = Params.Result;

}

// Function BP_KeyCombination.BP_KeyCombination_C.Equal
inline void UBP_KeyCombination_C::Equal(struct TArray<Unknown>& Conflicts, char& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyCombination.BP_KeyCombination_C.Equal");

	struct Equal_Params {
		struct TArray<Unknown>& Conflicts;
		char& Result;
	}; Equal_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Conflicts = Params.Conflicts;
	Result = Params.Result;

}

// Function BP_KeyCombination.BP_KeyCombination_C.Evaluate
inline void UBP_KeyCombination_C::Evaluate(struct Unknown Player, char& Is, char& Just, char& Just) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyCombination.BP_KeyCombination_C.Evaluate");

	struct Evaluate_Params {
		struct Unknown Player;
		char& Is;
		char& Just;
		char& Just;
	}; Evaluate_Params Params;

	Params.Player = Player;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Is = Params.Is;
	Just = Params.Just;
	Just = Params.Just;

}

// Function BP_KeyCombination.BP_KeyCombination_C.Clear
inline void UBP_KeyCombination_C::Clear() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyCombination.BP_KeyCombination_C.Clear");

	struct Clear_Params {
		
	}; Clear_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_KeyCombination.BP_KeyCombination_C.Add
inline void UBP_KeyCombination_C::Add(struct Unknown Conflicted, char Conflicted) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyCombination.BP_KeyCombination_C.Add");

	struct Add_Params {
		struct Unknown Conflicted;
		char Conflicted;
	}; Add_Params Params;

	Params.Conflicted = Conflicted;
	Params.Conflicted = Conflicted;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_KeyCombination.BP_KeyCombination_C.Detect
inline void UBP_KeyCombination_C::Detect(struct Unknown Input, char& Conflict) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyCombination.BP_KeyCombination_C.Detect");

	struct Detect_Params {
		struct Unknown Input;
		char& Conflict;
	}; Detect_Params Params;

	Params.Input = Input;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Conflict = Params.Conflict;

}

// Function BP_KeyCombination.BP_KeyCombination_C.Replace
inline void UBP_KeyCombination_C::Replace(struct TArray<Unknown>& Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyCombination.BP_KeyCombination_C.Replace");

	struct Replace_Params {
		struct TArray<Unknown>& Key;
	}; Replace_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Key = Params.Key;

}

// Function BP_KeyCombination.BP_KeyCombination_C.Load
inline void UBP_KeyCombination_C::Load(struct Unknown Game, struct FString Action, struct FString Category, struct FString Name, char Primary) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyCombination.BP_KeyCombination_C.Load");

	struct Load_Params {
		struct Unknown Game;
		struct FString Action;
		struct FString Category;
		struct FString Name;
		char Primary;
	}; Load_Params Params;

	Params.Game = Game;
	Params.Action = Action;
	Params.Category = Category;
	Params.Name = Name;
	Params.Primary = Primary;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_KeyCombination.BP_KeyCombination_C.Save
inline void UBP_KeyCombination_C::Save(struct Unknown Game, struct Unknown& KeySave) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyCombination.BP_KeyCombination_C.Save");

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

// Function BP_KeyCombination.BP_KeyCombination_C.Key
inline void UBP_KeyCombination_C::Key(struct Unknown Player, char Ignore, float& Axis, char& Is, char& Just, char& Just) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyCombination.BP_KeyCombination_C.Key");

	struct Key_Params {
		struct Unknown Player;
		char Ignore;
		float& Axis;
		char& Is;
		char& Just;
		char& Just;
	}; Key_Params Params;

	Params.Player = Player;
	Params.Ignore = Ignore;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Axis = Params.Axis;
	Is = Params.Is;
	Just = Params.Just;
	Just = Params.Just;

}

// Function BP_KeyCombination.BP_KeyCombination_C.Init
inline void UBP_KeyCombination_C::Init(struct FString Name, char Can, struct TArray<Unknown>& Key, struct Unknown& Combination) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyCombination.BP_KeyCombination_C.Init");

	struct Init_Params {
		struct FString Name;
		char Can;
		struct TArray<Unknown>& Key;
		struct Unknown& Combination;
	}; Init_Params Params;

	Params.Name = Name;
	Params.Can = Can;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Key = Params.Key;
	Combination = Params.Combination;

}

// Function BP_KeyCombination.BP_KeyCombination_C.Combination
inline void UBP_KeyCombination_C::Combination(struct Unknown Combination) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyCombination.BP_KeyCombination_C.Combination");

	struct Combination_Params {
		struct Unknown Combination;
	}; Combination_Params Params;

	Params.Combination = Combination;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

