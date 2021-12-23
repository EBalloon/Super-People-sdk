// BlueprintGeneratedClass BP_KeyAction.BP_KeyAction_C
struct UBP_KeyAction_C : Object {
	struct FString Action; // 0x28 (16)
	struct FString Category; // 0x38 (16)
	struct TArray<Unknown> Key; // 0x48 (16)

	void Get(struct FString Mapping, struct Unknown& Mapping, char& SUCCESS); // Function BP_KeyAction.BP_KeyAction_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Load(struct Unknown Game); // Function BP_KeyAction.BP_KeyAction_C.Load(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Save(struct Unknown Game); // Function BP_KeyAction.BP_KeyAction_C.Save(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Key(struct Unknown Player, float& Action, char& Just, char& Just); // Function BP_KeyAction.BP_KeyAction_C.Key(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Init(struct Unknown Key, struct FString Action, struct Unknown& Action); // Function BP_KeyAction.BP_KeyAction_C.Init(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

