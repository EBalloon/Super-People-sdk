// BlueprintGeneratedClass BP-HeartBeatSensorEffect.BP-HeartBeatSensorEffect_C
class ABP-HeartBeatSensorEffect_C : public UActor {

public:

	struct Unknown UberGraphFrame; // 0x318 (8)
	struct Unknown Widget; // 0x320 (8)
	struct Unknown DefaultSceneRoot; // 0x328 (8)
	struct Unknown TargetCharacter; // 0x330 (8)
	struct Unknown LoudnessCurve; // 0x338 (8)
	float HeartBeatSensorLength; // 0x340 (4)
	enum class Unknow TagetGroundState; // 0x344 (1)
	char IsFiring : 0; // 0x345 (1)
	struct Unknown CurrentWeapon; // 0x348 (8)
	struct Unknown SingleTimerEvent; // 0x350 (8)
	char IsSingleFiring : 0; // 0x358 (1)

	void ReceiveTick(float DeltaSeconds); // Function BP-HeartBeatSensorEffect.BP-HeartBeatSensorEffect_C.ReceiveTick(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetTarget(struct Unknown TargetCharacter, float HeartBeatSensorLength); // Function BP-HeartBeatSensorEffect.BP-HeartBeatSensorEffect_C.SetTarget(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnCharacterMovementUpdated_tじ_1(float DeltaSeconds, struct Unknown OldLocation, struct Unknown OldVelocity); // Function BP-HeartBeatSensorEffect.BP-HeartBeatSensorEffect_C.OnCharacterMovementUpdated_tじ_1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_BP-HeartBeatSensorEffect(int32_t EntryPoint); // Function BP-HeartBeatSensorEffect.BP-HeartBeatSensorEffect_C.ExecuteUbergraph_BP-HeartBeatSensorEffect(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
};

// Function BP-HeartBeatSensorEffect.BP-HeartBeatSensorEffect_C.ReceiveTick
inline void ABP-HeartBeatSensorEffect_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HeartBeatSensorEffect.BP-HeartBeatSensorEffect_C.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HeartBeatSensorEffect.BP-HeartBeatSensorEffect_C.SetTarget
inline void ABP-HeartBeatSensorEffect_C::SetTarget(struct Unknown TargetCharacter, float HeartBeatSensorLength) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HeartBeatSensorEffect.BP-HeartBeatSensorEffect_C.SetTarget");

	struct SetTarget_Params {
		struct Unknown TargetCharacter;
		float HeartBeatSensorLength;
	}; SetTarget_Params Params;

	Params.TargetCharacter = TargetCharacter;
	Params.HeartBeatSensorLength = HeartBeatSensorLength;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HeartBeatSensorEffect.BP-HeartBeatSensorEffect_C.OnCharacterMovementUpdated_tじ_1
inline void ABP-HeartBeatSensorEffect_C::OnCharacterMovementUpdated_tじ_1(float DeltaSeconds, struct Unknown OldLocation, struct Unknown OldVelocity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HeartBeatSensorEffect.BP-HeartBeatSensorEffect_C.OnCharacterMovementUpdated_tじ_1");

	struct OnCharacterMovementUpdated_tじ_1_Params {
		float DeltaSeconds;
		struct Unknown OldLocation;
		struct Unknown OldVelocity;
	}; OnCharacterMovementUpdated_tじ_1_Params Params;

	Params.DeltaSeconds = DeltaSeconds;
	Params.OldLocation = OldLocation;
	Params.OldVelocity = OldVelocity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HeartBeatSensorEffect.BP-HeartBeatSensorEffect_C.ExecuteUbergraph_BP-HeartBeatSensorEffect
inline void ABP-HeartBeatSensorEffect_C::ExecuteUbergraph_BP-HeartBeatSensorEffect(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HeartBeatSensorEffect.BP-HeartBeatSensorEffect_C.ExecuteUbergraph_BP-HeartBeatSensorEffect");

	struct ExecuteUbergraph_BP-HeartBeatSensorEffect_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-HeartBeatSensorEffect_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

