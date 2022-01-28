// BlueprintGeneratedClass BP-AmplifierEffect.BP-AmplifierEffect_C
class ABP-AmplifierEffect_C : public UActor {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328 (8)
	struct UWidgetComponent Widget; // 0x330 (8)
	struct USceneComponent DefaultSceneRoot; // 0x338 (8)
	struct ABravoHotelCharacter TargetCharacter; // 0x340 (8)
	struct UCurveFloat LoudnessCurve; // 0x348 (8)
	float AmplifierLength; // 0x350 (4)
	enum class ECharacterGroundState TagetGroundState; // 0x354 (1)
	char IsFiring : 0; // 0x355 (1)
	struct ABravoHotelRangedWeapon CurrentWeapon; // 0x358 (8)
	struct FTimerHandle SingleTimerEvent; // 0x360 (8)
	char IsSingleFiring : 0; // 0x368 (1)

	void OnCharacterMovementUpdated_tじ_1(float DeltaSeconds, struct FVector OldLocation, struct FVector OldVelocity); // Function BP-AmplifierEffect.BP-AmplifierEffect_C.OnCharacterMovementUpdated_tじ_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnCharacterGroundStateChangeDelegate_tじ_1(enum class ECharacterGroundState State); // Function BP-AmplifierEffect.BP-AmplifierEffect_C.OnCharacterGroundStateChangeDelegate_tじ_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ReceiveTick(float DeltaSeconds); // Function BP-AmplifierEffect.BP-AmplifierEffect_C.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetTarget(struct ABravoHotelCharacter TargetCharacter, float AmplifierLength); // Function BP-AmplifierEffect.BP-AmplifierEffect_C.SetTarget(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CharacterMovementEvent(float DeltaSeconds, struct FVector OldLocation, struct FVector OldVelocity); // Function BP-AmplifierEffect.BP-AmplifierEffect_C.CharacterMovementEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnStartSimulateFire(); // Function BP-AmplifierEffect.BP-AmplifierEffect_C.OnStartSimulateFire(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SingleStopEvent(); // Function BP-AmplifierEffect.BP-AmplifierEffect_C.SingleStopEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_BP-AmplifierEffect(int32_t EntryPoint); // Function BP-AmplifierEffect.BP-AmplifierEffect_C.ExecuteUbergraph_BP-AmplifierEffect(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function BP-AmplifierEffect.BP-AmplifierEffect_C.OnCharacterMovementUpdated_tじ_1
inline void ABP-AmplifierEffect_C::OnCharacterMovementUpdated_tじ_1(float DeltaSeconds, struct FVector OldLocation, struct FVector OldVelocity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-AmplifierEffect.BP-AmplifierEffect_C.OnCharacterMovementUpdated_tじ_1");

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

// Function BP-AmplifierEffect.BP-AmplifierEffect_C.OnCharacterGroundStateChangeDelegate_tじ_1
inline void ABP-AmplifierEffect_C::OnCharacterGroundStateChangeDelegate_tじ_1(enum class ECharacterGroundState State) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-AmplifierEffect.BP-AmplifierEffect_C.OnCharacterGroundStateChangeDelegate_tじ_1");

	struct OnCharacterGroundStateChangeDelegate_tじ_1_Params {
		enum class ECharacterGroundState State;
	}; OnCharacterGroundStateChangeDelegate_tじ_1_Params Params;

	Params.State = State;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-AmplifierEffect.BP-AmplifierEffect_C.ReceiveTick
inline void ABP-AmplifierEffect_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-AmplifierEffect.BP-AmplifierEffect_C.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-AmplifierEffect.BP-AmplifierEffect_C.SetTarget
inline void ABP-AmplifierEffect_C::SetTarget(struct ABravoHotelCharacter TargetCharacter, float AmplifierLength) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-AmplifierEffect.BP-AmplifierEffect_C.SetTarget");

	struct SetTarget_Params {
		struct ABravoHotelCharacter TargetCharacter;
		float AmplifierLength;
	}; SetTarget_Params Params;

	Params.TargetCharacter = TargetCharacter;
	Params.AmplifierLength = AmplifierLength;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-AmplifierEffect.BP-AmplifierEffect_C.CharacterMovementEvent
inline void ABP-AmplifierEffect_C::CharacterMovementEvent(float DeltaSeconds, struct FVector OldLocation, struct FVector OldVelocity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-AmplifierEffect.BP-AmplifierEffect_C.CharacterMovementEvent");

	struct CharacterMovementEvent_Params {
		float DeltaSeconds;
		struct FVector OldLocation;
		struct FVector OldVelocity;
	}; CharacterMovementEvent_Params Params;

	Params.DeltaSeconds = DeltaSeconds;
	Params.OldLocation = OldLocation;
	Params.OldVelocity = OldVelocity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-AmplifierEffect.BP-AmplifierEffect_C.OnStartSimulateFire
inline void ABP-AmplifierEffect_C::OnStartSimulateFire() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-AmplifierEffect.BP-AmplifierEffect_C.OnStartSimulateFire");

	struct OnStartSimulateFire_Params {
		
	}; OnStartSimulateFire_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-AmplifierEffect.BP-AmplifierEffect_C.SingleStopEvent
inline void ABP-AmplifierEffect_C::SingleStopEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-AmplifierEffect.BP-AmplifierEffect_C.SingleStopEvent");

	struct SingleStopEvent_Params {
		
	}; SingleStopEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-AmplifierEffect.BP-AmplifierEffect_C.ExecuteUbergraph_BP-AmplifierEffect
inline void ABP-AmplifierEffect_C::ExecuteUbergraph_BP-AmplifierEffect(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-AmplifierEffect.BP-AmplifierEffect_C.ExecuteUbergraph_BP-AmplifierEffect");

	struct ExecuteUbergraph_BP-AmplifierEffect_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-AmplifierEffect_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

