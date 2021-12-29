// BlueprintGeneratedClass BP-MK3DSpectatorPawn.BP-MK3DSpectatorPawn_C
class ABP-MK3DSpectatorPawn_C : public ABravoHotelMK3DSpectatorPawn {

public:

	struct Unknown UberGraphFrame; // 0x3C0 (8)
	struct Unknown FreeCam; // 0x3C8 (8)
	struct Unknown SpringArm; // 0x3D0 (8)
	struct Unknown ReplayMainWidget; // 0x3D8 (8)
	char ViewMode; // 0x3E0 (1)

	void GetReplayWidget(struct Unknown& ReplayMainWidget); // Function BP-MK3DSpectatorPawn.BP-MK3DSpectatorPawn_C.GetReplayWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ReceiveBeginPlay(); // Function BP-MK3DSpectatorPawn.BP-MK3DSpectatorPawn_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OnChangedCurrentSpeedLevel(); // Function BP-MK3DSpectatorPawn.BP-MK3DSpectatorPawn_C.OnChangedCurrentSpeedLevel(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_BP-MK3DSpectatorPawn(int32_t EntryPoint); // Function BP-MK3DSpectatorPawn.BP-MK3DSpectatorPawn_C.ExecuteUbergraph_BP-MK3DSpectatorPawn(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function BP-MK3DSpectatorPawn.BP-MK3DSpectatorPawn_C.GetReplayWidget
inline void ABP-MK3DSpectatorPawn_C::GetReplayWidget(struct Unknown& ReplayMainWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-MK3DSpectatorPawn.BP-MK3DSpectatorPawn_C.GetReplayWidget");

	struct GetReplayWidget_Params {
		struct Unknown& ReplayMainWidget;
	}; GetReplayWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ReplayMainWidget = Params.ReplayMainWidget;

}

// Function BP-MK3DSpectatorPawn.BP-MK3DSpectatorPawn_C.ReceiveBeginPlay
inline void ABP-MK3DSpectatorPawn_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-MK3DSpectatorPawn.BP-MK3DSpectatorPawn_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-MK3DSpectatorPawn.BP-MK3DSpectatorPawn_C.OnChangedCurrentSpeedLevel
inline void ABP-MK3DSpectatorPawn_C::OnChangedCurrentSpeedLevel() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-MK3DSpectatorPawn.BP-MK3DSpectatorPawn_C.OnChangedCurrentSpeedLevel");

	struct OnChangedCurrentSpeedLevel_Params {
		
	}; OnChangedCurrentSpeedLevel_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-MK3DSpectatorPawn.BP-MK3DSpectatorPawn_C.ExecuteUbergraph_BP-MK3DSpectatorPawn
inline void ABP-MK3DSpectatorPawn_C::ExecuteUbergraph_BP-MK3DSpectatorPawn(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-MK3DSpectatorPawn.BP-MK3DSpectatorPawn_C.ExecuteUbergraph_BP-MK3DSpectatorPawn");

	struct ExecuteUbergraph_BP-MK3DSpectatorPawn_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-MK3DSpectatorPawn_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

