// Class AnimationSharing.AnimSharingStateInstance
struct UAnimSharingStateInstance : UAnimInstance {
	struct Unknown AnimationToPlay; //  0x268 Size(8)
	float PermutationTimeOffset; //  0x270 Size(4)
	float PlayRate; //  0x274 Size(4)
	char bStateBool; //  0x278 Size(1)
	struct Unknown Instance; //  0x280 Size(8)

	void GetInstancedActors(struct TArray<Unknown>& Actors); // Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors(Final|Native|Protected|HasOutParms|BlueprintCallable) // <Game+0x16a6090>
};

// Class AnimationSharing.AnimSharingTransitionInstance
struct UAnimSharingTransitionInstance : UAnimInstance {
	struct TWeakObjectPtr<struct Unknown> FromComponent; //  0x268 Size(8)
	struct TWeakObjectPtr<struct Unknown> ToComponent; //  0x270 Size(8)
	float BlendTime; //  0x278 Size(4)
	char bBlendBool; //  0x27c Size(1)
};

// Class AnimationSharing.AnimSharingAdditiveInstance
struct UAnimSharingAdditiveInstance : UAnimInstance {
	struct TWeakObjectPtr<struct Unknown> baseComponent; //  0x268 Size(8)
	struct TWeakObjectPtr<struct Unknown> AdditiveAnimation; //  0x270 Size(8)
	float ALPHA; //  0x278 Size(4)
	char bStateBool; //  0x27c Size(1)
};

// Class AnimationSharing.AnimSharingInstance
struct UAnimSharingInstance : Object {
	struct TArray<Unknown> RegisteredActors; //  0x28 Size(10)
	struct Unknown StateProcessor; //  0xa8 Size(8)
	struct TArray<Unknown> UsedAnimationSequences; //  0xe8 Size(10)
	struct Unknown StateEnum; //  0x108 Size(8)
	struct Unknown SharingActor; //  0x110 Size(8)
};

// Class AnimationSharing.AnimationSharingManager
struct UAnimationSharingManager : Object {
	struct TArray<Unknown> Skeletons; //  0x28 Size(10)
	struct TArray<Unknown> PerSkeletonData; //  0x38 Size(10)

	void RegisterActorWithSkeletonBP(struct Unknown InActor, struct Unknown SharingSkeleton); // Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP(Final|Native|Public|BlueprintCallable) // <Game+0x16a62f0>
};

// Class AnimationSharing.AnimationSharingSetup
struct UAnimationSharingSetup : Object {
	struct TArray<Unknown> SkeletonSetups; //  0x28 Size(10)
	struct Unknown ScalabilitySettings; //  0x38 Size(10)
};

// Class AnimationSharing.AnimationSharingStateProces
struct UAnimationSharingStateProces : Object {
	struct TSoftObjectPtr<Unknown> AnimationStateEnum; //  0x28 Size(28)

	void ProcessActorState(int32_t& OutState, struct Unknown InActor, char CurrentState, char OnDemandState, char& bShouldProcess); // Function AnimationSharing.AnimationSharingStateProces.ProcessActorState(Native|Event|Public|HasOutParms|BlueprintEvent) // <Game+0x16a6140>
};

