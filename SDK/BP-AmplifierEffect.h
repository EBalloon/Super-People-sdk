// BlueprintGeneratedClass BP-AmplifierEffect.BP-AmplifierEffect_C
class ABP-AmplifierEffect_C : public UActor {

public:

	struct Unknown UberGraphFrame; // 0x300 (8)
	struct Unknown Widget; // 0x308 (8)
	struct Unknown DefaultSceneRoot; // 0x310 (8)
	struct Unknown TargetCharacter; // 0x318 (8)
	struct Unknown LoudnessCurve; // 0x320 (8)
	float AmplifierLength; // 0x328 (4)
	enum class Unknow TagetGroundState; // 0x32C (1)
	char IsFiring : 0; // 0x32D (1)
	struct Unknown CurrentWeapon; // 0x330 (8)
	struct Unknown SingleTimerEvent; // 0x338 (8)
	char IsSingleFiring : 0; // 0x340 (1)

	void OnCharacterMovementUpdated_tじ_1(float DeltaSeconds, struct Unknown OldLocation, struct Unknown OldVelocity); // Function BP-AmplifierEffect.BP-AmplifierEffect_C.OnCharacterMovementUpdated_tじ_1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnCharacterGroundStateChangeDelegate_tじ_1(enum class Unknow State); // Function BP-AmplifierEffect.BP-AmplifierEffect_C.OnCharacterGroundStateChangeDelegate_tじ_1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ReceiveTick(float DeltaSeconds); // Function BP-AmplifierEffect.BP-AmplifierEffect_C.ReceiveTick(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetTarget(struct Unknown TargetCharacter, float AmplifierLength); // Function BP-AmplifierEffect.BP-AmplifierEffect_C.SetTarget(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void CharacterMovementEvent(float DeltaSeconds, struct Unknown OldLocation, struct Unknown OldVelocity); // Function BP-AmplifierEffect.BP-AmplifierEffect_C.CharacterMovementEvent(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnStartSimulateFire(); // Function BP-AmplifierEffect.BP-AmplifierEffect_C.OnStartSimulateFire(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SingleStopEvent(); // Function BP-AmplifierEffect.BP-AmplifierEffect_C.SingleStopEvent(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_BP-AmplifierEffect(int32_t EntryPoint); // Function BP-AmplifierEffect.BP-AmplifierEffect_C.ExecuteUbergraph_BP-AmplifierEffect(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B812B0>
};

// Function BP-AmplifierEffect.BP-AmplifierEffect_C.OnCharacterMovementUpdated_tじ_1
inline void ABP-AmplifierEffect_C::OnCharacterMovementUpdated_tじ_1(float DeltaSeconds, struct Unknown OldLocation, struct Unknown OldVelocity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-AmplifierEffect.BP-AmplifierEffect_C.OnCharacterMovementUpdated_tじ_1");

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

// Function BP-AmplifierEffect.BP-AmplifierEffect_C.OnCharacterGroundStateChangeDelegate_tじ_1
inline void ABP-AmplifierEffect_C::OnCharacterGroundStateChangeDelegate_tじ_1(enum class Unknow State) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-AmplifierEffect.BP-AmplifierEffect_C.OnCharacterGroundStateChangeDelegate_tじ_1");

	struct OnCharacterGroundStateChangeDelegate_tじ_1_Params {
		enum class Unknow State;
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
inline void ABP-AmplifierEffect_C::SetTarget(struct Unknown TargetCharacter, float AmplifierLength) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-AmplifierEffect.BP-AmplifierEffect_C.SetTarget");

	struct SetTarget_Params {
		struct Unknown TargetCharacter;
		float AmplifierLength;
	}; SetTarget_Params Params;

	Params.TargetCharacter = TargetCharacter;
	Params.AmplifierLength = AmplifierLength;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-AmplifierEffect.BP-AmplifierEffect_C.CharacterMovementEvent
inline void ABP-AmplifierEffect_C::CharacterMovementEvent(float DeltaSeconds, struct Unknown OldLocation, struct Unknown OldVelocity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-AmplifierEffect.BP-AmplifierEffect_C.CharacterMovementEvent");

	struct CharacterMovementEvent_Params {
		float DeltaSeconds;
		struct Unknown OldLocation;
		struct Unknown OldVelocity;
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

