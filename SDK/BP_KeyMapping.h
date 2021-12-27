// BlueprintGeneratedClass BP_KeyMapping.BP_KeyMapping_C
class UBP_KeyMapping_C : public Object {

public:

	struct FString Name; // 0x28 (16)
	float Scale; // 0x38 (4)
	struct Unknown Primary; // 0x40 (8)
	struct Unknown Secondary; // 0x48 (8)
	struct Unknown Parent; // 0x50 (8)

	void Revert(); // Function BP_KeyMapping.BP_KeyMapping_C.Revert(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Load(struct Unknown Game, struct FString Action, struct FString Category); // Function BP_KeyMapping.BP_KeyMapping_C.Load(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Save(struct Unknown Game, struct Unknown& KeySave); // Function BP_KeyMapping.BP_KeyMapping_C.Save(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Key(struct Unknown Player, float& Mapping, char& Is, char& Just, char& Just); // Function BP_KeyMapping.BP_KeyMapping_C.Key(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Init(struct Unknown Key, struct Unknown& Mapping); // Function BP_KeyMapping.BP_KeyMapping_C.Init(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// Function BP_KeyMapping.BP_KeyMapping_C.Revert
inline void UBP_KeyMapping_C::Revert() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyMapping.BP_KeyMapping_C.Revert");

	struct Revert_Params {
		
	}; Revert_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_KeyMapping.BP_KeyMapping_C.Load
inline void UBP_KeyMapping_C::Load(struct Unknown Game, struct FString Action, struct FString Category) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyMapping.BP_KeyMapping_C.Load");

	struct Load_Params {
		struct Unknown Game;
		struct FString Action;
		struct FString Category;
	}; Load_Params Params;

	Params.Game = Game;
	Params.Action = Action;
	Params.Category = Category;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_KeyMapping.BP_KeyMapping_C.Save
inline void UBP_KeyMapping_C::Save(struct Unknown Game, struct Unknown& KeySave) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyMapping.BP_KeyMapping_C.Save");

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

// Function BP_KeyMapping.BP_KeyMapping_C.Key
inline void UBP_KeyMapping_C::Key(struct Unknown Player, float& Mapping, char& Is, char& Just, char& Just) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyMapping.BP_KeyMapping_C.Key");

	struct Key_Params {
		struct Unknown Player;
		float& Mapping;
		char& Is;
		char& Just;
		char& Just;
	}; Key_Params Params;

	Params.Player = Player;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Mapping = Params.Mapping;
	Is = Params.Is;
	Just = Params.Just;
	Just = Params.Just;

}

// Function BP_KeyMapping.BP_KeyMapping_C.Init
inline void UBP_KeyMapping_C::Init(struct Unknown Key, struct Unknown& Mapping) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyMapping.BP_KeyMapping_C.Init");

	struct Init_Params {
		struct Unknown Key;
		struct Unknown& Mapping;
	}; Init_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Mapping = Params.Mapping;

}

