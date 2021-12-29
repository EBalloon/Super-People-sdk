// BlueprintGeneratedClass BP_KeyCombination.BP_KeyCombination_C
class UBP_KeyCombination_C : public Object {

public:

	struct FString Name; // 0x28 (16)
	struct TArray<Unknown> Key Inputs; // 0x38 (16)
	struct TArray<Unknown> Default Combination; // 0x48 (16)
	char Can't Be None : 0; // 0x58 (1)
	struct TArray<Unknown> Conflicting Mappings Blocked; // 0x60 (16)
	struct TArray<Unknown> Conflicting Mappings Info; // 0x70 (16)
	struct FMulticastInlineDelegate Combination Updated; // 0x80 (16)
	struct Unknown Parent Mapping; // 0x90 (8)

	void Get Key Combination Display Name(struct FString Separator, struct FString No Key Display, char Display Type, struct FString& Display Name); // Function BP_KeyCombination.BP_KeyCombination_C.Get Key Combination Display Name(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Add Key Input(struct Unknown InputPin, struct Unknown& Input); // Function BP_KeyCombination.BP_KeyCombination_C.Add Key Input(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Equal All Keys(struct TArray<Unknown>& Combination, char& Result); // Function BP_KeyCombination.BP_KeyCombination_C.Equal All Keys(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Equal All Conflicts(struct TArray<Unknown>& Conflicts, char& Result); // Function BP_KeyCombination.BP_KeyCombination_C.Equal All Conflicts(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Evaluate Blocking Combinations(struct Unknown Player Controller, char& Is Active, char& Just Pressed, char& Just Released); // Function BP_KeyCombination.BP_KeyCombination_C.Evaluate Blocking Combinations(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Clear Conflicting Combinations(); // Function BP_KeyCombination.BP_KeyCombination_C.Clear Conflicting Combinations(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Add Conflicting Combination(struct Unknown Conflicted Combination, char Conflicted ); // Function BP_KeyCombination.BP_KeyCombination_C.Add Conflicting Combination(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Detect Conflict(struct Unknown Input Combination, char& Conflict Type); // Function BP_KeyCombination.BP_KeyCombination_C.Detect Conflict(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Replace Key Combination(struct TArray<Unknown>& Key Combination); // Function BP_KeyCombination.BP_KeyCombination_C.Replace Key Combination(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Load Key Combination(struct Unknown Game Settings, struct FString Action Name, struct FString Category, struct FString Name, char Primary); // Function BP_KeyCombination.BP_KeyCombination_C.Load Key Combination(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Save Key Combination(struct Unknown Game Settings, struct Unknown& KeySave); // Function BP_KeyCombination.BP_KeyCombination_C.Save Key Combination(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Key Combination Current State(struct Unknown Player Controller, char Ignore Conflicts, float& Axis Value, char& Is Active, char& Just Pressed, char& Just Released); // Function BP_KeyCombination.BP_KeyCombination_C.Key Combination Current State(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Init Key Combination(struct FString Name, char Can't Be None, struct TArray<Unknown>& Key Combination, struct Unknown& Combination); // Function BP_KeyCombination.BP_KeyCombination_C.Init Key Combination(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Combination Updated__DelegateSignature(struct Unknown Combination); // Function BP_KeyCombination.BP_KeyCombination_C.Combination Updated__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function BP_KeyCombination.BP_KeyCombination_C.Get Key Combination Display Name
inline void UBP_KeyCombination_C::Get Key Combination Display Name(struct FString Separator, struct FString No Key Display, char Display Type, struct FString& Display Name) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyCombination.BP_KeyCombination_C.Get Key Combination Display Name");

	struct Get Key Combination Display Name_Params {
		struct FString Separator;
		struct FString No Key Display;
		char Display Type;
		struct FString& Display Name;
	}; Get Key Combination Display Name_Params Params;

	Params.Separator = Separator;
	Params.No Key Display = No Key Display;
	Params.Display Type = Display Type;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Display Name = Params.Display Name;

}

// Function BP_KeyCombination.BP_KeyCombination_C.Add Key Input
inline void UBP_KeyCombination_C::Add Key Input(struct Unknown InputPin, struct Unknown& Input) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyCombination.BP_KeyCombination_C.Add Key Input");

	struct Add Key Input_Params {
		struct Unknown InputPin;
		struct Unknown& Input;
	}; Add Key Input_Params Params;

	Params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Input = Params.Input;

}

// Function BP_KeyCombination.BP_KeyCombination_C.Equal All Keys
inline void UBP_KeyCombination_C::Equal All Keys(struct TArray<Unknown>& Combination, char& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyCombination.BP_KeyCombination_C.Equal All Keys");

	struct Equal All Keys_Params {
		struct TArray<Unknown>& Combination;
		char& Result;
	}; Equal All Keys_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Combination = Params.Combination;
	Result = Params.Result;

}

// Function BP_KeyCombination.BP_KeyCombination_C.Equal All Conflicts
inline void UBP_KeyCombination_C::Equal All Conflicts(struct TArray<Unknown>& Conflicts, char& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyCombination.BP_KeyCombination_C.Equal All Conflicts");

	struct Equal All Conflicts_Params {
		struct TArray<Unknown>& Conflicts;
		char& Result;
	}; Equal All Conflicts_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Conflicts = Params.Conflicts;
	Result = Params.Result;

}

// Function BP_KeyCombination.BP_KeyCombination_C.Evaluate Blocking Combinations
inline void UBP_KeyCombination_C::Evaluate Blocking Combinations(struct Unknown Player Controller, char& Is Active, char& Just Pressed, char& Just Released) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyCombination.BP_KeyCombination_C.Evaluate Blocking Combinations");

	struct Evaluate Blocking Combinations_Params {
		struct Unknown Player Controller;
		char& Is Active;
		char& Just Pressed;
		char& Just Released;
	}; Evaluate Blocking Combinations_Params Params;

	Params.Player Controller = Player Controller;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Is Active = Params.Is Active;
	Just Pressed = Params.Just Pressed;
	Just Released = Params.Just Released;

}

// Function BP_KeyCombination.BP_KeyCombination_C.Clear Conflicting Combinations
inline void UBP_KeyCombination_C::Clear Conflicting Combinations() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyCombination.BP_KeyCombination_C.Clear Conflicting Combinations");

	struct Clear Conflicting Combinations_Params {
		
	}; Clear Conflicting Combinations_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_KeyCombination.BP_KeyCombination_C.Add Conflicting Combination
inline void UBP_KeyCombination_C::Add Conflicting Combination(struct Unknown Conflicted Combination, char Conflicted ) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyCombination.BP_KeyCombination_C.Add Conflicting Combination");

	struct Add Conflicting Combination_Params {
		struct Unknown Conflicted Combination;
		char Conflicted ;
	}; Add Conflicting Combination_Params Params;

	Params.Conflicted Combination = Conflicted Combination;
	Params.Conflicted  = Conflicted ;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_KeyCombination.BP_KeyCombination_C.Detect Conflict
inline void UBP_KeyCombination_C::Detect Conflict(struct Unknown Input Combination, char& Conflict Type) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyCombination.BP_KeyCombination_C.Detect Conflict");

	struct Detect Conflict_Params {
		struct Unknown Input Combination;
		char& Conflict Type;
	}; Detect Conflict_Params Params;

	Params.Input Combination = Input Combination;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Conflict Type = Params.Conflict Type;

}

// Function BP_KeyCombination.BP_KeyCombination_C.Replace Key Combination
inline void UBP_KeyCombination_C::Replace Key Combination(struct TArray<Unknown>& Key Combination) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyCombination.BP_KeyCombination_C.Replace Key Combination");

	struct Replace Key Combination_Params {
		struct TArray<Unknown>& Key Combination;
	}; Replace Key Combination_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Key Combination = Params.Key Combination;

}

// Function BP_KeyCombination.BP_KeyCombination_C.Load Key Combination
inline void UBP_KeyCombination_C::Load Key Combination(struct Unknown Game Settings, struct FString Action Name, struct FString Category, struct FString Name, char Primary) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyCombination.BP_KeyCombination_C.Load Key Combination");

	struct Load Key Combination_Params {
		struct Unknown Game Settings;
		struct FString Action Name;
		struct FString Category;
		struct FString Name;
		char Primary;
	}; Load Key Combination_Params Params;

	Params.Game Settings = Game Settings;
	Params.Action Name = Action Name;
	Params.Category = Category;
	Params.Name = Name;
	Params.Primary = Primary;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_KeyCombination.BP_KeyCombination_C.Save Key Combination
inline void UBP_KeyCombination_C::Save Key Combination(struct Unknown Game Settings, struct Unknown& KeySave) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyCombination.BP_KeyCombination_C.Save Key Combination");

	struct Save Key Combination_Params {
		struct Unknown Game Settings;
		struct Unknown& KeySave;
	}; Save Key Combination_Params Params;

	Params.Game Settings = Game Settings;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeySave = Params.KeySave;

}

// Function BP_KeyCombination.BP_KeyCombination_C.Key Combination Current State
inline void UBP_KeyCombination_C::Key Combination Current State(struct Unknown Player Controller, char Ignore Conflicts, float& Axis Value, char& Is Active, char& Just Pressed, char& Just Released) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyCombination.BP_KeyCombination_C.Key Combination Current State");

	struct Key Combination Current State_Params {
		struct Unknown Player Controller;
		char Ignore Conflicts;
		float& Axis Value;
		char& Is Active;
		char& Just Pressed;
		char& Just Released;
	}; Key Combination Current State_Params Params;

	Params.Player Controller = Player Controller;
	Params.Ignore Conflicts = Ignore Conflicts;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Axis Value = Params.Axis Value;
	Is Active = Params.Is Active;
	Just Pressed = Params.Just Pressed;
	Just Released = Params.Just Released;

}

// Function BP_KeyCombination.BP_KeyCombination_C.Init Key Combination
inline void UBP_KeyCombination_C::Init Key Combination(struct FString Name, char Can't Be None, struct TArray<Unknown>& Key Combination, struct Unknown& Combination) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyCombination.BP_KeyCombination_C.Init Key Combination");

	struct Init Key Combination_Params {
		struct FString Name;
		char Can't Be None;
		struct TArray<Unknown>& Key Combination;
		struct Unknown& Combination;
	}; Init Key Combination_Params Params;

	Params.Name = Name;
	Params.Can't Be None = Can't Be None;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Key Combination = Params.Key Combination;
	Combination = Params.Combination;

}

// Function BP_KeyCombination.BP_KeyCombination_C.Combination Updated__DelegateSignature
inline void UBP_KeyCombination_C::Combination Updated__DelegateSignature(struct Unknown Combination) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyCombination.BP_KeyCombination_C.Combination Updated__DelegateSignature");

	struct Combination Updated__DelegateSignature_Params {
		struct Unknown Combination;
	}; Combination Updated__DelegateSignature_Params Params;

	Params.Combination = Combination;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

