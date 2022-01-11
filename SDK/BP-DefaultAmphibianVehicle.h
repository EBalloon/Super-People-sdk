// BlueprintGeneratedClass BP-DefaultAmphibianVehicle.BP-DefaultAmphibianVehicle_C
class ABP-DefaultAmphibianVehicle_C : public ABP-DefaultWheeledVehicle_C {

public:

	struct Unknown UberGraphFrame; // 0xD78 (8)

	void ReceiveUnpossessed(struct Unknown OldController); // Function BP-DefaultAmphibianVehicle.BP-DefaultAmphibianVehicle_C.ReceiveUnpossessed(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void PlayCameraShake_ModeChange(); // Function BP-DefaultAmphibianVehicle.BP-DefaultAmphibianVehicle_C.PlayCameraShake_ModeChange(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnPlaySplashParticle(char IsToWater); // Function BP-DefaultAmphibianVehicle.BP-DefaultAmphibianVehicle_C.OnPlaySplashParticle(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnChangedAmphibiousMode(char bTrue); // Function BP-DefaultAmphibianVehicle.BP-DefaultAmphibianVehicle_C.OnChangedAmphibiousMode(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_BP-DefaultAmphibianVehicle(int32_t EntryPoint); // Function BP-DefaultAmphibianVehicle.BP-DefaultAmphibianVehicle_C.ExecuteUbergraph_BP-DefaultAmphibianVehicle(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
};

// Function BP-DefaultAmphibianVehicle.BP-DefaultAmphibianVehicle_C.ReceiveUnpossessed
inline void ABP-DefaultAmphibianVehicle_C::ReceiveUnpossessed(struct Unknown OldController) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultAmphibianVehicle.BP-DefaultAmphibianVehicle_C.ReceiveUnpossessed");

	struct ReceiveUnpossessed_Params {
		struct Unknown OldController;
	}; ReceiveUnpossessed_Params Params;

	Params.OldController = OldController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultAmphibianVehicle.BP-DefaultAmphibianVehicle_C.PlayCameraShake_ModeChange
inline void ABP-DefaultAmphibianVehicle_C::PlayCameraShake_ModeChange() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultAmphibianVehicle.BP-DefaultAmphibianVehicle_C.PlayCameraShake_ModeChange");

	struct PlayCameraShake_ModeChange_Params {
		
	}; PlayCameraShake_ModeChange_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultAmphibianVehicle.BP-DefaultAmphibianVehicle_C.OnPlaySplashParticle
inline void ABP-DefaultAmphibianVehicle_C::OnPlaySplashParticle(char IsToWater) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultAmphibianVehicle.BP-DefaultAmphibianVehicle_C.OnPlaySplashParticle");

	struct OnPlaySplashParticle_Params {
		char IsToWater;
	}; OnPlaySplashParticle_Params Params;

	Params.IsToWater = IsToWater;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultAmphibianVehicle.BP-DefaultAmphibianVehicle_C.OnChangedAmphibiousMode
inline void ABP-DefaultAmphibianVehicle_C::OnChangedAmphibiousMode(char bTrue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultAmphibianVehicle.BP-DefaultAmphibianVehicle_C.OnChangedAmphibiousMode");

	struct OnChangedAmphibiousMode_Params {
		char bTrue;
	}; OnChangedAmphibiousMode_Params Params;

	Params.bTrue = bTrue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultAmphibianVehicle.BP-DefaultAmphibianVehicle_C.ExecuteUbergraph_BP-DefaultAmphibianVehicle
inline void ABP-DefaultAmphibianVehicle_C::ExecuteUbergraph_BP-DefaultAmphibianVehicle(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultAmphibianVehicle.BP-DefaultAmphibianVehicle_C.ExecuteUbergraph_BP-DefaultAmphibianVehicle");

	struct ExecuteUbergraph_BP-DefaultAmphibianVehicle_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-DefaultAmphibianVehicle_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

