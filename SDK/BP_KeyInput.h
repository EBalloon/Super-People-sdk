// BlueprintGeneratedClass BP_KeyInput.BP_KeyInput_C
struct UBP_KeyInput_C : Object {
	struct Unknown Key; // 0x28 (24)
	char Analog : 0; // 0x40 (1)
	float Analog; // 0x44 (4)
	float Analog; // 0x48 (4)
	float World; // 0x4C (4)
	char Input : 0; // 0x50 (1)
	struct FString Display; // 0x58 (16)

	void Generate(); // Function BP_KeyInput.BP_KeyInput_C.Generate(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Save(struct Unknown Game, struct Unknown& KeySave); // Function BP_KeyInput.BP_KeyInput_C.Save(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Update(float World, struct Unknown Player); // Function BP_KeyInput.BP_KeyInput_C.Update(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Key(struct Unknown Controller, float& Axis, char& Down, char& Just, char& Just); // Function BP_KeyInput.BP_KeyInput_C.Key(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Init(struct Unknown Key, struct Unknown& Input); // Function BP_KeyInput.BP_KeyInput_C.Init(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

