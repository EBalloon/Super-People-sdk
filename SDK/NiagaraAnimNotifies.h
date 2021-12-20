// Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
struct UAnimNotify_PlayNiagaraEffect : UAnimNotify {
	Unknown Template; //  0x38 Size(8)
	Unknown LocationOffset; //  0x40 Size(c)
	Unknown RotationOffset; //  0x4c Size(c)
	Unknown Scale; //  0x58 Size(c)
	char Attached; //  0x80 Size(1)
	struct FName SocketName; //  0x84 Size(8)

	Unknown GetSpawnedEffect(); // Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect(Final|Native|Public|BlueprintCallable|Const) // <Game+0x1523770>
};

// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
struct UAnimNotifyState_TimedNiagaraEffect : UAnimNotifyState {
	Unknown Template; //  0x30 Size(8)
	struct FName SocketName; //  0x38 Size(8)
	Unknown LocationOffset; //  0x40 Size(c)
	Unknown RotationOffset; //  0x4c Size(c)
	char bDestroyAtEnd; //  0x58 Size(1)
};

