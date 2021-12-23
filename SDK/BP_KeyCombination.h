// BlueprintGeneratedClass BP_KeyCombination.BP_KeyCombination_C
class UBP_KeyCombination_C : Object {
	struct FString Name; // 0x28 (16)
	struct TArray<Unknown> Key; // 0x38 (16)
	struct TArray<Unknown> Default; // 0x48 (16)
	char Can : 0; // 0x58 (1)
	struct TArray<Unknown> Conflicting; // 0x60 (16)
	struct TArray<Unknown> Conflicting; // 0x70 (16)
	struct FMulticastInlineDelegate Combination; // 0x80 (16)
	struct Unknown Parent; // 0x90 (8)

	void Get(struct FString Separator, struct FString No, char Display, struct FString& Display); // Function BP_KeyCombination.BP_KeyCombination_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Add(struct Unknown InputPin, struct Unknown& Input); // Function BP_KeyCombination.BP_KeyCombination_C.Add(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Equal(struct TArray<Unknown>& Combination, char& Result); // Function BP_KeyCombination.BP_KeyCombination_C.Equal(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Equal(struct TArray<Unknown>& Conflicts, char& Result); // Function BP_KeyCombination.BP_KeyCombination_C.Equal(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Evaluate(struct Unknown Player, char& Is, char& Just, char& Just); // Function BP_KeyCombination.BP_KeyCombination_C.Evaluate(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Clear(); // Function BP_KeyCombination.BP_KeyCombination_C.Clear(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Add(struct Unknown Conflicted, char Conflicted); // Function BP_KeyCombination.BP_KeyCombination_C.Add(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Detect(struct Unknown Input, char& Conflict); // Function BP_KeyCombination.BP_KeyCombination_C.Detect(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Replace(struct TArray<Unknown>& Key); // Function BP_KeyCombination.BP_KeyCombination_C.Replace(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Load(struct Unknown Game, struct FString Action, struct FString Category, struct FString Name, char Primary); // Function BP_KeyCombination.BP_KeyCombination_C.Load(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Save(struct Unknown Game, struct Unknown& KeySave); // Function BP_KeyCombination.BP_KeyCombination_C.Save(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Key(struct Unknown Player, char Ignore, float& Axis, char& Is, char& Just, char& Just); // Function BP_KeyCombination.BP_KeyCombination_C.Key(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Init(struct FString Name, char Can, struct TArray<Unknown>& Key, struct Unknown& Combination); // Function BP_KeyCombination.BP_KeyCombination_C.Init(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Combination(struct Unknown Combination); // Function BP_KeyCombination.BP_KeyCombination_C.Combination(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

