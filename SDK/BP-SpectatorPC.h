// BlueprintGeneratedClass BP-SpectatorPC.BP-SpectatorPC_C
class ABP-SpectatorPC_C : public ABravoHotelSpectatorController {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1410 (8)
	struct ABP-SpectatorPawn_C Observer; // 0x1418 (8)
	char PlayingKillCam : 0; // 0x1420 (1)
	struct UBP-SpectatorHUD_C AfterGameHUD; // 0x1428 (8)
	struct UBravoHotelGameInstance GameInstanceRef; // 0x1430 (8)
	char bKillCamFinish : 0; // 0x1438 (1)

	void SetObserver(); // Function BP-SpectatorPC.BP-SpectatorPC_C.SetObserver(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ReceiveBeginPlay(); // Function BP-SpectatorPC.BP-SpectatorPC_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void NextObservingTarget(); // Function BP-SpectatorPC.BP-SpectatorPC_C.NextObservingTarget(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void PreObservingTarget(); // Function BP-SpectatorPC.BP-SpectatorPC_C.PreObservingTarget(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetKillCamStartTime(); // Function BP-SpectatorPC.BP-SpectatorPC_C.SetKillCamStartTime(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnKillcamFinish(); // Function BP-SpectatorPC.BP-SpectatorPC_C.OnKillcamFinish(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetTargetPlayerInfo(struct ABravoHotelPlayerState PlayerState); // Function BP-SpectatorPC.BP-SpectatorPC_C.SetTargetPlayerInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_BP-SpectatorPC(int32_t EntryPoint); // Function BP-SpectatorPC.BP-SpectatorPC_C.ExecuteUbergraph_BP-SpectatorPC(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
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
inline void ABP-SpectatorPC_C::SetTargetPlayerInfo(struct ABravoHotelPlayerState PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorPC.BP-SpectatorPC_C.SetTargetPlayerInfo");

	struct SetTargetPlayerInfo_Params {
		struct ABravoHotelPlayerState PlayerState;
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

