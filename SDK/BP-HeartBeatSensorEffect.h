// BlueprintGeneratedClass BP-HeartBeatSensorEffect.BP-HeartBeatSensorEffect_C
class ABP-HeartBeatSensorEffect_C : public UActor {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318 (8)
	struct UWidgetComponent Widget; // 0x320 (8)
	struct USceneComponent DefaultSceneRoot; // 0x328 (8)
	struct ABravoHotelCharacter TargetCharacter; // 0x330 (8)
	struct UCurveFloat LoudnessCurve; // 0x338 (8)
	float HeartBeatSensorLength; // 0x340 (4)
	enum class ECharacterGroundState TagetGroundState; // 0x344 (1)
	char IsFiring : 0; // 0x345 (1)
	struct ABravoHotelRangedWeapon CurrentWeapon; // 0x348 (8)
	struct FTimerHandle SingleTimerEvent; // 0x350 (8)
	char IsSingleFiring : 0; // 0x358 (1)

	void ReceiveTick(float DeltaSeconds); // Function BP-HeartBeatSensorEffect.BP-HeartBeatSensorEffect_C.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetTarget(struct ABravoHotelCharacter TargetCharacter, float HeartBeatSensorLength); // Function BP-HeartBeatSensorEffect.BP-HeartBeatSensorEffect_C.SetTarget(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnCharacterMovementUpdated_tじ_1(float DeltaSeconds, struct FVector OldLocation, struct FVector OldVelocity); // Function BP-HeartBeatSensorEffect.BP-HeartBeatSensorEffect_C.OnCharacterMovementUpdated_tじ_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_BP-HeartBeatSensorEffect(int32_t EntryPoint); // Function BP-HeartBeatSensorEffect.BP-HeartBeatSensorEffect_C.ExecuteUbergraph_BP-HeartBeatSensorEffect(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
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
inline void ABP-HeartBeatSensorEffect_C::SetTarget(struct ABravoHotelCharacter TargetCharacter, float HeartBeatSensorLength) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HeartBeatSensorEffect.BP-HeartBeatSensorEffect_C.SetTarget");

	struct SetTarget_Params {
		struct ABravoHotelCharacter TargetCharacter;
		float HeartBeatSensorLength;
	}; SetTarget_Params Params;

	Params.TargetCharacter = TargetCharacter;
	Params.HeartBeatSensorLength = HeartBeatSensorLength;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HeartBeatSensorEffect.BP-HeartBeatSensorEffect_C.OnCharacterMovementUpdated_tじ_1
inline void ABP-HeartBeatSensorEffect_C::OnCharacterMovementUpdated_tじ_1(float DeltaSeconds, struct FVector OldLocation, struct FVector OldVelocity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HeartBeatSensorEffect.BP-HeartBeatSensorEffect_C.OnCharacterMovementUpdated_tじ_1");

	struct OnCharacterMovementUpdated_tじ_1_Params {
		float DeltaSeconds;
		struct FVector OldLocation;
		struct FVector OldVelocity;
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

