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

