// Class AnimationSharing.AnimSharingStateInstance
struct UAnimSharingStateInstance : UAnimInstance {
	Unknown AnimationToPlay; //  0x268 Size(8)
	float PermutationTimeOffset; //  0x270 Size(4)
	float PlayRate; //  0x274 Size(4)
	char bStateBool; //  0x278 Size(1)
	Unknown Instance; //  0x280 Size(8)

	void GetInstancedActors(Unknown& Actors); // Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors(Final|Native|Protected|HasOutParms|BlueprintCallable) // <Game+0x16a54d0>
};

// Class AnimationSharing.AnimSharingTransitionInstance
struct UAnimSharingTransitionInstance : UAnimInstance {
	Unknown FromComponent; //  0x268 Size(8)
	Unknown ToComponent; //  0x270 Size(8)
	float BlendTime; //  0x278 Size(4)
	char bBlendBool; //  0x27c Size(1)
};

// Class AnimationSharing.AnimSharingAdditiveInstance
struct UAnimSharingAdditiveInstance : UAnimInstance {
	Unknown baseComponent; //  0x268 Size(8)
	Unknown AdditiveAnimation; //  0x270 Size(8)
	float ALPHA; //  0x278 Size(4)
	char bStateBool; //  0x27c Size(1)
};

// Class AnimationSharing.AnimSharingInstance
struct UAnimSharingInstance : Object {
	Unknown RegisteredActors; //  0x28 Size(10)
	Unknown StateProcessor; //  0xa8 Size(8)
	Unknown UsedAnimationSequences; //  0xe8 Size(10)
	Unknown StateEnum; //  0x108 Size(8)
	Unknown SharingActor; //  0x110 Size(8)
};

// Class AnimationSharing.AnimationSharingManager
struct UAnimationSharingManager : Object {
	Unknown Skeletons; //  0x28 Size(10)
	Unknown PerSkeletonData; //  0x38 Size(10)

	void RegisterActorWithSkeletonBP(Unknown InActor, Unknown SharingSkeleton); // Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP(Final|Native|Public|BlueprintCallable) // <Game+0x16a5730>
};

// Class AnimationSharing.AnimationSharingSetup
struct UAnimationSharingSetup : Object {
	Unknown SkeletonSetups; //  0x28 Size(10)
	Unknown ScalabilitySettings; //  0x38 Size(10)
};

// Class AnimationSharing.AnimationSharingStateProcessor
struct UAnimationSharingStateProcessor : Object {
	Unknown AnimationStateEnum; //  0x28 Size(28)

	void ProcessActorState(int32_t& OutState, Unknown InActor, Unknown CurrentState, Unknown OnDemandState, char& bShouldProcess); // Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState(Native|Event|Public|HasOutParms|BlueprintEvent) // <Game+0x16a5580>
};

