// BlueprintGeneratedClass BP_SPS_WidgetActor.BP_SPS_WidgetActor_C
class ABP_SPS_WidgetActor_C : public ABravoHotelSmartPingActor {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5B0 (8)
	struct UWidgetComponent Widget_Screen; // 0x5B8 (8)
	struct UWidgetComponent Widget_World; // 0x5C0 (8)
	struct USceneComponent DefaultSceneRoot; // 0x5C8 (8)
	struct UWBP_SPS_Icon_C SmartPingWidget_World; // 0x5D0 (8)
	struct FTimerHandle DeactivateTimer; // 0x5D8 (8)
	struct USmartPingSystem_C SmartPingComponent; // 0x5E0 (8)
	struct FVector ScreenToWorldLocation; // 0x5E8 (12)
	float ScreenRotation; // 0x5F4 (4)
	struct UAudioComponent HoldSound; // 0x5F8 (8)
	struct FTimerHandle PhaseTimer; // 0x600 (8)
	struct UTemp_C TempWidget; // 0x608 (8)
	int32_t PingIndex; // 0x610 (4)
	struct FBravoHotelPingInfo SaveTempPingInfo; // 0x618 (56)
	struct ALine_WidgetActor_C LineActor; // 0x650 (8)
	struct UWBP_SPS_Icon_C SmartPingWidget_Screen; // 0x658 (8)
	char EnableShow : 0; // 0x660 (1)

	void GetTeamColor(int32_t TeamIndex, struct FLinearColor& OutColor); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.GetTeamColor(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct UActor CreateLocationActor(struct FVector& SpawnLocation); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.CreateLocationActor(Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetEnableShow(char IsPersonalBox, char& bRet); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.GetEnableShow(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetDurationFrompingType(enum class EPingType PingType, float& Time); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.GetDurationFrompingType(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ReceiveBeginPlay(); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Deactivate(char Force); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.Deactivate(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void TestLocation(struct FVector& Location); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.TestLocation(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void TestLocation2D(struct FVector2D& Location); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.TestLocation2D(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void UpdateRotation(float NewLineRate); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.UpdateRotation(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetInNm(char IsIn); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.SetInNm(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetPersonalSupplyBoxPingType(enum class EPersonalSupplyBoxPingType NewState); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.SetPersonalSupplyBoxPingType(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetRemoveMaterialPing(); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.SetRemoveMaterialPing(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetRemoveExpertWeaponPing(); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.SetRemoveExpertWeaponPing(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_BP_SPS_WidgetActor(int32_t EntryPoint); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.ExecuteUbergraph_BP_SPS_WidgetActor(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.GetTeamColor
inline void ABP_SPS_WidgetActor_C::GetTeamColor(int32_t TeamIndex, struct FLinearColor& OutColor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.GetTeamColor");

	struct GetTeamColor_Params {
		int32_t TeamIndex;
		struct FLinearColor& OutColor;
	}; GetTeamColor_Params Params;

	Params.TeamIndex = TeamIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutColor = Params.OutColor;

}

// Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.CreateLocationActor
inline struct UActor ABP_SPS_WidgetActor_C::CreateLocationActor(struct FVector& SpawnLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.CreateLocationActor");

	struct CreateLocationActor_Params {
		struct FVector& SpawnLocation;
		struct UActor ReturnValue;

	}; CreateLocationActor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SpawnLocation = Params.SpawnLocation;


	return params.ReturnValue;
}

// Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.GetEnableShow
inline void ABP_SPS_WidgetActor_C::GetEnableShow(char IsPersonalBox, char& bRet) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.GetEnableShow");

	struct GetEnableShow_Params {
		char IsPersonalBox;
		char& bRet;
	}; GetEnableShow_Params Params;

	Params.IsPersonalBox = IsPersonalBox;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bRet = Params.bRet;

}

// Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.GetDurationFrompingType
inline void ABP_SPS_WidgetActor_C::GetDurationFrompingType(enum class EPingType PingType, float& Time) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.GetDurationFrompingType");

	struct GetDurationFrompingType_Params {
		enum class EPingType PingType;
		float& Time;
	}; GetDurationFrompingType_Params Params;

	Params.PingType = PingType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Time = Params.Time;

}

// Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.ReceiveBeginPlay
inline void ABP_SPS_WidgetActor_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.Deactivate
inline void ABP_SPS_WidgetActor_C::Deactivate(char Force) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.Deactivate");

	struct Deactivate_Params {
		char Force;
	}; Deactivate_Params Params;

	Params.Force = Force;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.TestLocation
inline void ABP_SPS_WidgetActor_C::TestLocation(struct FVector& Location) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.TestLocation");

	struct TestLocation_Params {
		struct FVector& Location;
	}; TestLocation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Location = Params.Location;

}

// Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.TestLocation2D
inline void ABP_SPS_WidgetActor_C::TestLocation2D(struct FVector2D& Location) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.TestLocation2D");

	struct TestLocation2D_Params {
		struct FVector2D& Location;
	}; TestLocation2D_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Location = Params.Location;

}

// Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.UpdateRotation
inline void ABP_SPS_WidgetActor_C::UpdateRotation(float NewLineRate) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.UpdateRotation");

	struct UpdateRotation_Params {
		float NewLineRate;
	}; UpdateRotation_Params Params;

	Params.NewLineRate = NewLineRate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.SetInNm
inline void ABP_SPS_WidgetActor_C::SetInNm(char IsIn) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.SetInNm");

	struct SetInNm_Params {
		char IsIn;
	}; SetInNm_Params Params;

	Params.IsIn = IsIn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.SetPersonalSupplyBoxPingType
inline void ABP_SPS_WidgetActor_C::SetPersonalSupplyBoxPingType(enum class EPersonalSupplyBoxPingType NewState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.SetPersonalSupplyBoxPingType");

	struct SetPersonalSupplyBoxPingType_Params {
		enum class EPersonalSupplyBoxPingType NewState;
	}; SetPersonalSupplyBoxPingType_Params Params;

	Params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.SetRemoveMaterialPing
inline void ABP_SPS_WidgetActor_C::SetRemoveMaterialPing() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.SetRemoveMaterialPing");

	struct SetRemoveMaterialPing_Params {
		
	}; SetRemoveMaterialPing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.SetRemoveExpertWeaponPing
inline void ABP_SPS_WidgetActor_C::SetRemoveExpertWeaponPing() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.SetRemoveExpertWeaponPing");

	struct SetRemoveExpertWeaponPing_Params {
		
	}; SetRemoveExpertWeaponPing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.ExecuteUbergraph_BP_SPS_WidgetActor
inline void ABP_SPS_WidgetActor_C::ExecuteUbergraph_BP_SPS_WidgetActor(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.ExecuteUbergraph_BP_SPS_WidgetActor");

	struct ExecuteUbergraph_BP_SPS_WidgetActor_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP_SPS_WidgetActor_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

