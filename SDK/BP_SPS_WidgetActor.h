// BlueprintGeneratedClass BP_SPS_WidgetActor.BP_SPS_WidgetActor_C
class ABP_SPS_WidgetActor_C : public ABravoHotelSmartPingActor {

public:

	struct Unknown UberGraphFrame; // 0x5C8 (8)
	struct Unknown Widget_Screen; // 0x5D0 (8)
	struct Unknown Widget_World; // 0x5D8 (8)
	struct Unknown DefaultSceneRoot; // 0x5E0 (8)
	struct Unknown SmartPingWidget_World; // 0x5E8 (8)
	struct Unknown DeactivateTimer; // 0x5F0 (8)
	struct Unknown SmartPingComponent; // 0x5F8 (8)
	struct Unknown ScreenToWorldLocation; // 0x600 (12)
	float ScreenRotation; // 0x60C (4)
	struct Unknown HoldSound; // 0x610 (8)
	struct Unknown PhaseTimer; // 0x618 (8)
	struct Unknown TempWidget; // 0x620 (8)
	int32_t PingIndex; // 0x628 (4)
	struct Unknown SaveTempPingInfo; // 0x630 (56)
	struct Unknown LineActor; // 0x668 (8)
	struct Unknown SmartPingWidget_Screen; // 0x670 (8)
	char EnableShow : 0; // 0x678 (1)

	void GetTeamColor(int32_t TeamIndex, struct Unknown& OutColor); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.GetTeamColor(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	struct Unknown CreateLocationActor(struct Unknown& SpawnLocation); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.CreateLocationActor(Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void GetEnableShow(char IsPersonalBox, char& bRet); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.GetEnableShow(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void GetDurationFrompingType(enum class Unknow PingType, float& Time); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.GetDurationFrompingType(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ReceiveBeginPlay(); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Deactivate(char Force); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.Deactivate(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void TestLocation(struct Unknown& Location); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.TestLocation(Event|Public|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void TestLocation2D(struct Unknown& Location); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.TestLocation2D(Event|Public|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdateRotation(float NewLineRate); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.UpdateRotation(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetInNm(char IsIn); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.SetInNm(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetPersonalSupplyBoxPingType(enum class Unknow NewState); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.SetPersonalSupplyBoxPingType(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetRemoveMaterialPing(); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.SetRemoveMaterialPing(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetRemoveExpertWeaponPing(); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.SetRemoveExpertWeaponPing(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_BP_SPS_WidgetActor(int32_t EntryPoint); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.ExecuteUbergraph_BP_SPS_WidgetActor(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
};

// Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.GetTeamColor
inline void ABP_SPS_WidgetActor_C::GetTeamColor(int32_t TeamIndex, struct Unknown& OutColor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.GetTeamColor");

	struct GetTeamColor_Params {
		int32_t TeamIndex;
		struct Unknown& OutColor;
	}; GetTeamColor_Params Params;

	Params.TeamIndex = TeamIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutColor = Params.OutColor;

}

// Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.CreateLocationActor
inline struct Unknown ABP_SPS_WidgetActor_C::CreateLocationActor(struct Unknown& SpawnLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.CreateLocationActor");

	struct CreateLocationActor_Params {
		struct Unknown& SpawnLocation;
		struct Unknown ReturnValue;

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
inline void ABP_SPS_WidgetActor_C::GetDurationFrompingType(enum class Unknow PingType, float& Time) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.GetDurationFrompingType");

	struct GetDurationFrompingType_Params {
		enum class Unknow PingType;
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
inline void ABP_SPS_WidgetActor_C::TestLocation(struct Unknown& Location) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.TestLocation");

	struct TestLocation_Params {
		struct Unknown& Location;
	}; TestLocation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Location = Params.Location;

}

// Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.TestLocation2D
inline void ABP_SPS_WidgetActor_C::TestLocation2D(struct Unknown& Location) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.TestLocation2D");

	struct TestLocation2D_Params {
		struct Unknown& Location;
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
inline void ABP_SPS_WidgetActor_C::SetPersonalSupplyBoxPingType(enum class Unknow NewState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.SetPersonalSupplyBoxPingType");

	struct SetPersonalSupplyBoxPingType_Params {
		enum class Unknow NewState;
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

