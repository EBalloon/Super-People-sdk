// BlueprintGeneratedClass BP-SpectatorPawn.BP-SpectatorPawn_C
class ABP-SpectatorPawn_C : public ABravoHotelSpectatorPawn {

public:

	struct Unknown UberGraphFrame; // 0x3D0 (8)
	struct Unknown Camera; // 0x3D8 (8)
	struct Unknown SpringArm; // 0x3E0 (8)
	char bKillCam : 0; // 0x3E8 (1)

	void TargetSetting(); // Function BP-SpectatorPawn.BP-SpectatorPawn_C.TargetSetting(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void GetTargetByUID(int32_t UID, struct Unknown& TargetPawn); // Function BP-SpectatorPawn.BP-SpectatorPawn_C.GetTargetByUID(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void KillCamTarget(); // Function BP-SpectatorPawn.BP-SpectatorPawn_C.KillCamTarget(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnSetTarget(); // Function BP-SpectatorPawn.BP-SpectatorPawn_C.OnSetTarget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_BP-SpectatorPawn(int32_t EntryPoint); // Function BP-SpectatorPawn.BP-SpectatorPawn_C.ExecuteUbergraph_BP-SpectatorPawn(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function BP-SpectatorPawn.BP-SpectatorPawn_C.TargetSetting
inline void ABP-SpectatorPawn_C::TargetSetting() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorPawn.BP-SpectatorPawn_C.TargetSetting");

	struct TargetSetting_Params {
		
	}; TargetSetting_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorPawn.BP-SpectatorPawn_C.GetTargetByUID
inline void ABP-SpectatorPawn_C::GetTargetByUID(int32_t UID, struct Unknown& TargetPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorPawn.BP-SpectatorPawn_C.GetTargetByUID");

	struct GetTargetByUID_Params {
		int32_t UID;
		struct Unknown& TargetPawn;
	}; GetTargetByUID_Params Params;

	Params.UID = UID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	TargetPawn = Params.TargetPawn;

}

// Function BP-SpectatorPawn.BP-SpectatorPawn_C.KillCamTarget
inline void ABP-SpectatorPawn_C::KillCamTarget() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorPawn.BP-SpectatorPawn_C.KillCamTarget");

	struct KillCamTarget_Params {
		
	}; KillCamTarget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorPawn.BP-SpectatorPawn_C.OnSetTarget
inline void ABP-SpectatorPawn_C::OnSetTarget() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorPawn.BP-SpectatorPawn_C.OnSetTarget");

	struct OnSetTarget_Params {
		
	}; OnSetTarget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorPawn.BP-SpectatorPawn_C.ExecuteUbergraph_BP-SpectatorPawn
inline void ABP-SpectatorPawn_C::ExecuteUbergraph_BP-SpectatorPawn(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorPawn.BP-SpectatorPawn_C.ExecuteUbergraph_BP-SpectatorPawn");

	struct ExecuteUbergraph_BP-SpectatorPawn_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-SpectatorPawn_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

