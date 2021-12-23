// Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
class UAnimNotify_PlayNiagaraEffect : UAnimNotify {
	struct Unknown Template; // 0x38 (8)
	struct Unknown LocationOffset; // 0x40 (12)
	struct Unknown RotationOffset; // 0x4C (12)
	struct Unknown Scale; // 0x58 (12)
	char Attached : 0; // 0x80 (1)
	struct FName SocketName; // 0x84 (8)

	struct Unknown GetSpawnedEffect(); // Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect(Final|Native|Public|BlueprintCallable|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1523FB0>
};

// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
class UAnimNotifyState_TimedNiagaraEffect : UAnimNotifyState {
	struct Unknown Template; // 0x30 (8)
	struct FName SocketName; // 0x38 (8)
	struct Unknown LocationOffset; // 0x40 (12)
	struct Unknown RotationOffset; // 0x4C (12)
	char bDestroyAtEnd : 0; // 0x58 (1)
};

