// BlueprintGeneratedClass BP_KeyMapping.BP_KeyMapping_C
class UBP_KeyMapping_C : public Object {

public:

	struct FString Name; // 0x28 (16)
	float Scale; // 0x38 (4)
	struct UBP_KeyCombination_C Primary Combination; // 0x40 (8)
	struct UBP_KeyCombination_C Secondary Combination; // 0x48 (8)
	struct UBP_KeyAction_C Parent Action; // 0x50 (8)

	void Revert To Default KeyMapping(); // Function BP_KeyMapping.BP_KeyMapping_C.Revert To Default KeyMapping(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Load Key Mapping(struct UBP_GameSettings_C Game Settings, struct FString Action Name, struct FString Category); // Function BP_KeyMapping.BP_KeyMapping_C.Load Key Mapping(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Save Key Mapping(struct UBP_GameSettings_C Game Settings, struct FSKeyActionSave& KeySave); // Function BP_KeyMapping.BP_KeyMapping_C.Save Key Mapping(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Key Mapping Current State(struct APlayerController Player Controller, float& Mapping Value, char& Is Active, char& Just Pressed, char& Just Released); // Function BP_KeyMapping.BP_KeyMapping_C.Key Mapping Current State(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Init Key Mapping(struct FSKeyMapping Key Mapping, struct UBP_KeyMapping_C& Mapping); // Function BP_KeyMapping.BP_KeyMapping_C.Init Key Mapping(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function BP_KeyMapping.BP_KeyMapping_C.Revert To Default KeyMapping
inline void UBP_KeyMapping_C::Revert To Default KeyMapping() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyMapping.BP_KeyMapping_C.Revert To Default KeyMapping");

	struct Revert To Default KeyMapping_Params {
		
	}; Revert To Default KeyMapping_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_KeyMapping.BP_KeyMapping_C.Load Key Mapping
inline void UBP_KeyMapping_C::Load Key Mapping(struct UBP_GameSettings_C Game Settings, struct FString Action Name, struct FString Category) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyMapping.BP_KeyMapping_C.Load Key Mapping");

	struct Load Key Mapping_Params {
		struct UBP_GameSettings_C Game Settings;
		struct FString Action Name;
		struct FString Category;
	}; Load Key Mapping_Params Params;

	Params.Game Settings = Game Settings;
	Params.Action Name = Action Name;
	Params.Category = Category;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_KeyMapping.BP_KeyMapping_C.Save Key Mapping
inline void UBP_KeyMapping_C::Save Key Mapping(struct UBP_GameSettings_C Game Settings, struct FSKeyActionSave& KeySave) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyMapping.BP_KeyMapping_C.Save Key Mapping");

	struct Save Key Mapping_Params {
		struct UBP_GameSettings_C Game Settings;
		struct FSKeyActionSave& KeySave;
	}; Save Key Mapping_Params Params;

	Params.Game Settings = Game Settings;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeySave = Params.KeySave;

}

// Function BP_KeyMapping.BP_KeyMapping_C.Key Mapping Current State
inline void UBP_KeyMapping_C::Key Mapping Current State(struct APlayerController Player Controller, float& Mapping Value, char& Is Active, char& Just Pressed, char& Just Released) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyMapping.BP_KeyMapping_C.Key Mapping Current State");

	struct Key Mapping Current State_Params {
		struct APlayerController Player Controller;
		float& Mapping Value;
		char& Is Active;
		char& Just Pressed;
		char& Just Released;
	}; Key Mapping Current State_Params Params;

	Params.Player Controller = Player Controller;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Mapping Value = Params.Mapping Value;
	Is Active = Params.Is Active;
	Just Pressed = Params.Just Pressed;
	Just Released = Params.Just Released;

}

// Function BP_KeyMapping.BP_KeyMapping_C.Init Key Mapping
inline void UBP_KeyMapping_C::Init Key Mapping(struct FSKeyMapping Key Mapping, struct UBP_KeyMapping_C& Mapping) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyMapping.BP_KeyMapping_C.Init Key Mapping");

	struct Init Key Mapping_Params {
		struct FSKeyMapping Key Mapping;
		struct UBP_KeyMapping_C& Mapping;
	}; Init Key Mapping_Params Params;

	Params.Key Mapping = Key Mapping;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Mapping = Params.Mapping;

}

