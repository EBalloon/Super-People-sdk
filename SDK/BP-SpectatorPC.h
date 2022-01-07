// BlueprintGeneratedClass BP-SpectatorPC.BP-SpectatorPC_C
class ABP-SpectatorPC_C : public ABravoHotelSpectatorController {

public:

	struct Unknown UberGraphFrame; // 0x1438 (8)
	struct Unknown Observer; // 0x1440 (8)
	char PlayingKillCam : 0; // 0x1448 (1)
	struct Unknown AfterGameHUD; // 0x1450 (8)
	struct Unknown GameInstanceRef; // 0x1458 (8)
	char bKillCamFinish : 0; // 0x1460 (1)

	void SetObserver(); // Function BP-SpectatorPC.BP-SpectatorPC_C.SetObserver(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ReceiveBeginPlay(); // Function BP-SpectatorPC.BP-SpectatorPC_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void NextObservingTarget(); // Function BP-SpectatorPC.BP-SpectatorPC_C.NextObservingTarget(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void PreObservingTarget(); // Function BP-SpectatorPC.BP-SpectatorPC_C.PreObservingTarget(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetKillCamStartTime(); // Function BP-SpectatorPC.BP-SpectatorPC_C.SetKillCamStartTime(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnKillcamFinish(); // Function BP-SpectatorPC.BP-SpectatorPC_C.OnKillcamFinish(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetTargetPlayerInfo(struct Unknown PlayerState); // Function BP-SpectatorPC.BP-SpectatorPC_C.SetTargetPlayerInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_BP-SpectatorPC(int32_t EntryPoint); // Function BP-SpectatorPC.BP-SpectatorPC_C.ExecuteUbergraph_BP-SpectatorPC(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function BP-SpectatorPC.BP-SpectatorPC_C.SetObserver
inline void ABP-SpectatorPC_C::SetObserver() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorPC.BP-SpectatorPC_C.SetObserver");

	struct SetObserver_Params {
		
	}; SetObserver_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorPC.BP-SpectatorPC_C.ReceiveBeginPlay
inline void ABP-SpectatorPC_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorPC.BP-SpectatorPC_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorPC.BP-SpectatorPC_C.NextObservingTarget
inline void ABP-SpectatorPC_C::NextObservingTarget() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorPC.BP-SpectatorPC_C.NextObservingTarget");

	struct NextObservingTarget_Params {
		
	}; NextObservingTarget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorPC.BP-SpectatorPC_C.PreObservingTarget
inline void ABP-SpectatorPC_C::PreObservingTarget() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorPC.BP-SpectatorPC_C.PreObservingTarget");

	struct PreObservingTarget_Params {
		
	}; PreObservingTarget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorPC.BP-SpectatorPC_C.SetKillCamStartTime
inline void ABP-SpectatorPC_C::SetKillCamStartTime() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorPC.BP-SpectatorPC_C.SetKillCamStartTime");

	struct SetKillCamStartTime_Params {
		
	}; SetKillCamStartTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorPC.BP-SpectatorPC_C.OnKillcamFinish
inline void ABP-SpectatorPC_C::OnKillcamFinish() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorPC.BP-SpectatorPC_C.OnKillcamFinish");

	struct OnKillcamFinish_Params {
		
	}; OnKillcamFinish_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorPC.BP-SpectatorPC_C.SetTargetPlayerInfo
inline void ABP-SpectatorPC_C::SetTargetPlayerInfo(struct Unknown PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorPC.BP-SpectatorPC_C.SetTargetPlayerInfo");

	struct SetTargetPlayerInfo_Params {
		struct Unknown PlayerState;
	}; SetTargetPlayerInfo_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorPC.BP-SpectatorPC_C.ExecuteUbergraph_BP-SpectatorPC
inline void ABP-SpectatorPC_C::ExecuteUbergraph_BP-SpectatorPC(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorPC.BP-SpectatorPC_C.ExecuteUbergraph_BP-SpectatorPC");

	struct ExecuteUbergraph_BP-SpectatorPC_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-SpectatorPC_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

