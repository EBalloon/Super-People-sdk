// Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
class UAnimNotify_PlayNiagaraEffect : public UAnimNotify {

public:

	struct UNiagaraSystem Template; // 0x38 (8)
	struct FVector LocationOffset; // 0x40 (12)
	struct FRotator RotationOffset; // 0x4C (12)
	struct FVector Scale; // 0x58 (12)
	char Attached : 0; // 0x80 (1)
	struct FName SocketName; // 0x84 (8)

	struct UFXSystemComponent GetSpawnedEffect(); // Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect(Final|Native|Public|BlueprintCallable|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1549E10>
};

// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
class UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState {

public:

	struct UNiagaraSystem Template; // 0x30 (8)
	struct FName SocketName; // 0x38 (8)
	struct FVector LocationOffset; // 0x40 (12)
	struct FRotator RotationOffset; // 0x4C (12)
	char bDestroyAtEnd : 0; // 0x58 (1)
};

// Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect
inline struct UFXSystemComponent UAnimNotify_PlayNiagaraEffect::GetSpawnedEffect() {
	static auto fn = UObject::FindObject<UFunction>("Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect");

	struct GetSpawnedEffect_Params {
		
		struct UFXSystemComponent ReturnValue;

	}; GetSpawnedEffect_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

