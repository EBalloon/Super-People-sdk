// BlueprintGeneratedClass BP-HeartBeatSensorEffect.BP-HeartBeatSensorEffect_C
class ABP-HeartBeatSensorEffect_C : public UActor {

public:

	struct Unknown UberGraphFrame; // 0x310 (8)
	struct Unknown Widget; // 0x318 (8)
	struct Unknown DefaultSceneRoot; // 0x320 (8)
	struct Unknown TargetCharacter; // 0x328 (8)
	struct Unknown LoudnessCurve; // 0x330 (8)
	float HeartBeatSensorLength; // 0x338 (4)
	enum class Unknow TagetGroundState; // 0x33C (1)
	char IsFiring : 0; // 0x33D (1)
	struct Unknown CurrentWeapon; // 0x340 (8)
	struct Unknown SingleTimerEvent; // 0x348 (8)
	char IsSingleFiring : 0; // 0x350 (1)

	void ReceiveTick(float DeltaSeconds); // Function BP-HeartBeatSensorEffect.BP-HeartBeatSensorEffect_C.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetTarget(struct Unknown TargetCharacter, float HeartBeatSensorLength); // Function BP-HeartBeatSensorEffect.BP-HeartBeatSensorEffect_C.SetTarget(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnCharacterMovementUpdated_tじ_1(float DeltaSeconds, struct Unknown OldLocation, struct Unknown OldVelocity); // Function BP-HeartBeatSensorEffect.BP-HeartBeatSensorEffect_C.OnCharacterMovementUpdated_tじ_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_BP-HeartBeatSensorEffect(int32_t EntryPoint); // Function BP-HeartBeatSensorEffect.BP-HeartBeatSensorEffect_C.ExecuteUbergraph_BP-HeartBeatSensorEffect(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
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

