// BlueprintGeneratedClass BP_AreaRectLight.BP_AreaRectLight_C
struct ABP_AreaRectLight_C : UActor {
	struct Unknown UberGraphFrame; // 0x310 (8)
	struct Unknown Arrow; // 0x318 (8)
	struct Unknown DefaultSceneRoot; // 0x320 (8)
	struct TArray<Unknown> LightList; // 0x328 (16)
	float Intensity; // 0x338 (4)
	struct Unknown Color; // 0x33C (16)
	float FocalAngleOuter; // 0x34C (4)
	float FocalAngleInner; // 0x350 (4)
	float AttenuationDistance; // 0x354 (4)
	float LightWidth; // 0x358 (4)
	float LightLength; // 0x35C (4)
	char CastShadows : 0; // 0x360 (1)
	int32_t LightSamplesSquared; // 0x364 (4)
	float SourceRadiusMult; // 0x368 (4)
	float CenterOfInterestLength; // 0x36C (4)
	char Enabled : 0; // 0x370 (1)
	struct Unknown Channels; // 0x371 (1)
	float SoftRadius; // 0x374 (4)
	float ShadowBias; // 0x378 (4)
	float ShadowResolutionScale; // 0x37C (4)
	struct TArray<Unknown> LightSet01; // 0x380 (16)
	struct TArray<Unknown> LightSet02; // 0x390 (16)
	struct TArray<Unknown> LightSet03; // 0x3A0 (16)
	char LightVisibility01 : 0; // 0x3B0 (1)
	char LightVisibility02 : 0; // 0x3B1 (1)
	char LightVisibility03 : 0; // 0x3B2 (1)
	char LightVisibility04 : 0; // 0x3B3 (1)
	char LightVisibility05 : 0; // 0x3B4 (1)
	char LightVisibility06 : 0; // 0x3B5 (1)
	char LightVisibility07 : 0; // 0x3B6 (1)
	char LightVisibility08 : 0; // 0x3B7 (1)
	char LightVisibility09 : 0; // 0x3B8 (1)

	void NewFunction_1(); // Function BP_AreaRectLight.BP_AreaRectLight_C.NewFunction_1(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void LightArraySetup(); // Function BP_AreaRectLight.BP_AreaRectLight_C.LightArraySetup(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void UpdateLightValues(); // Function BP_AreaRectLight.BP_AreaRectLight_C.UpdateLightValues(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void UserConstructionScript(); // Function BP_AreaRectLight.BP_AreaRectLight_C.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveBeginPlay(); // Function BP_AreaRectLight.BP_AreaRectLight_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveTick(float DeltaSeconds); // Function BP_AreaRectLight.BP_AreaRectLight_C.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_BP_AreaRectLight(int32_t EntryPoint); // Function BP_AreaRectLight.BP_AreaRectLight_C.ExecuteUbergraph_BP_AreaRectLight(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

