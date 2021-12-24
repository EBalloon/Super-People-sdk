// BlueprintGeneratedClass BP_BlueZone.BP_BlueZone_C
class ABP_BlueZone_C : public ABravoHotelBlueZone {

public:

	struct Unknown UberGraphFrame; // 0x7C0 (8)
	struct Unknown StaticMesh; // 0x7C8 (8)
	struct Unknown MagneticDecal; // 0x7D0 (8)
	float Puls_PulsScale_0F5B0359412DDBACBDF407BB69788854; // 0x7D8 (4)
	char Puls__Direction_0F5B0359412DDBACBDF407BB69788854; // 0x7DC (1)
	struct Unknown Puls; // 0x7E0 (8)
	float Height; // 0x7E8 (4)
	float SeaLevelZ; // 0x7EC (4)
	char bIsMatchEnded : 0; // 0x7F0 (1)
	float ModifyingOpacityTime; // 0x7F4 (4)
	float CurrentOpacity; // 0x7F8 (4)
	float ScaleModifier; // 0x7FC (4)
	struct Unknown ParametersCurve; // 0x800 (8)
	float MaterialParameterRadius; // 0x808 (4)
	char bWasMpUpdated : 0; // 0x80C (1)
	float PreRadius; // 0x810 (4)

	void ShouldUpdateParameter(char& Result); // Function BP_BlueZone.BP_BlueZone_C.ShouldUpdateParameter(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateMaterialParameterCollections(); // Function BP_BlueZone.BP_BlueZone_C.UpdateMaterialParameterCollections(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ToggleVisibility(); // Function BP_BlueZone.BP_BlueZone_C.ToggleVisibility(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char IsRequiredUpdateBlueZone(); // Function BP_BlueZone.BP_BlueZone_C.IsRequiredUpdateBlueZone(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Puls__FinishedFunc(); // Function BP_BlueZone.BP_BlueZone_C.Puls__FinishedFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Puls__UpdateFunc(); // Function BP_BlueZone.BP_BlueZone_C.Puls__UpdateFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnBattleRotyaleStateChanged(enum class Unknow PrevState, enum class Unknow CurrentState); // Function BP_BlueZone.BP_BlueZone_C.OnBattleRotyaleStateChanged(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateOpacityToZero(); // Function BP_BlueZone.BP_BlueZone_C.UpdateOpacityToZero(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void On(int32_t PrevPhase, int32_t CurrentPhase); // Function BP_BlueZone.BP_BlueZone_C.On(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnWorldShifted(struct Unknown InWorld, struct Unknown PreviousOrigin, struct Unknown CurrentOrigin); // Function BP_BlueZone.BP_BlueZone_C.OnWorldShifted(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetCharacterLocation(struct Unknown CharacterLocation); // Function BP_BlueZone.BP_BlueZone_C.SetCharacterLocation(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StopPulsAnimation(); // Function BP_BlueZone.BP_BlueZone_C.StopPulsAnimation(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateBlueZone(); // Function BP_BlueZone.BP_BlueZone_C.UpdateBlueZone(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateCenterAndRadius(struct Unknown Center, float Radius); // Function BP_BlueZone.BP_BlueZone_C.UpdateCenterAndRadius(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveTick(float DeltaSeconds); // Function BP_BlueZone.BP_BlueZone_C.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveBeginPlay(); // Function BP_BlueZone.BP_BlueZone_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_BP_BlueZone(int32_t EntryPoint); // Function BP_BlueZone.BP_BlueZone_C.ExecuteUbergraph_BP_BlueZone(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

