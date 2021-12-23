// BlueprintGeneratedClass BP_SPS_WidgetActor.BP_SPS_WidgetActor_C
class ABP_SPS_WidgetActor_C : ABravoHotelSmartPingActor {
	struct Unknown UberGraphFrame; // 0x5B8 (8)
	struct Unknown Widget_Screen; // 0x5C0 (8)
	struct Unknown Widget_World; // 0x5C8 (8)
	struct Unknown DefaultSceneRoot; // 0x5D0 (8)
	struct Unknown SmartPingWidget_World; // 0x5D8 (8)
	struct Unknown DeactivateTimer; // 0x5E0 (8)
	struct Unknown SmartPingComponent; // 0x5E8 (8)
	struct Unknown ScreenToWorldLocation; // 0x5F0 (12)
	float ScreenRotation; // 0x5FC (4)
	struct Unknown HoldSound; // 0x600 (8)
	struct Unknown PhaseTimer; // 0x608 (8)
	struct Unknown TempWidget; // 0x610 (8)
	int32_t PingIndex; // 0x618 (4)
	struct Unknown SaveTempPingInfo; // 0x620 (56)
	struct Unknown LineActor; // 0x658 (8)
	struct Unknown SmartPingWidget_Screen; // 0x660 (8)
	char EnableShow : 0; // 0x668 (1)

	void GetTeamColor(int32_t TeamIndex, struct Unknown& OutColor); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.GetTeamColor(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	struct Unknown CreateLocationActor(struct Unknown& SpawnLocation); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.CreateLocationActor(Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetEnableShow(char IsPersonalBox, char& bRet); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.GetEnableShow(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetDurationFrompingType(enum class Unknow PingType, float& Time); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.GetDurationFrompingType(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveBeginPlay(); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Deactivate(char Force); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.Deactivate(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void TestLocation(struct Unknown& Location); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.TestLocation(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void TestLocation2D(struct Unknown& Location); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.TestLocation2D(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void UpdateRotation(float NewLineRate); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.UpdateRotation(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetInNm(char IsIn); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.SetInNm(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetPersonalSupplyBoxPingType(enum class Unknow NewState); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.SetPersonalSupplyBoxPingType(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetRemoveMaterialPing(); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.SetRemoveMaterialPing(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetRemoveExpertWeaponPing(); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.SetRemoveExpertWeaponPing(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_BP_SPS_WidgetActor(int32_t EntryPoint); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.ExecuteUbergraph_BP_SPS_WidgetActor(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

