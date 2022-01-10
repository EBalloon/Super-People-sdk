// Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
class UAnimNotify_PlayNiagaraEffect : public UAnimNotify {

public:

	struct Unknown Template; // 0x38 (8)
	struct Unknown LocationOffset; // 0x40 (12)
	struct Unknown RotationOffset; // 0x4C (12)
	struct Unknown Scale; // 0x58 (12)
	char Attached : 0; // 0x80 (1)
	struct FName SocketName; // 0x84 (8)

	struct Unknown GetSpawnedEffect(); // Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect(Final|Native|Public|BlueprintCallable|Const) // <Game_BE.exe+0x15397E0>
};

// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
class UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState {

public:

	struct Unknown Template; // 0x30 (8)
	struct FName SocketName; // 0x38 (8)
	struct Unknown LocationOffset; // 0x40 (12)
	struct Unknown RotationOffset; // 0x4C (12)
	char bDestroyAtEnd : 0; // 0x58 (1)
};

// Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect
inline struct Unknown UAnimNotify_PlayNiagaraEffect::GetSpawnedEffect() {
	static auto fn = UObject::FindObject<UFunction>("Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect");

	struct GetSpawnedEffect_Params {
		
		struct Unknown ReturnValue;

	}; GetSpawnedEffect_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

