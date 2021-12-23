// Class AnimationSharing.AnimSharingStateInstance
struct UAnimSharingStateInstance : UAnimInstance {
	struct Unknown AnimationToPlay; // 0x268 (8)
	float PermutationTimeOffset; // 0x270 (4)
	float PlayRate; // 0x274 (4)
	char bStateBool : 0; // 0x278 (1)
	struct Unknown Instance; // 0x280 (8)

	void GetInstancedActors(struct TArray<Unknown>& Actors); // Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors(Final|Native|Protected|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16A6090>
};

// Class AnimationSharing.AnimSharingTransitionInstance
struct UAnimSharingTransitionInstance : UAnimInstance {
	struct TWeakObjectPtr<struct Unknown> FromComponent; // 0x268 (8)
	struct TWeakObjectPtr<struct Unknown> ToComponent; // 0x270 (8)
	float BlendTime; // 0x278 (4)
	char bBlendBool : 0; // 0x27C (1)
};

// Class AnimationSharing.AnimSharingAdditiveInstance
struct UAnimSharingAdditiveInstance : UAnimInstance {
	struct TWeakObjectPtr<struct Unknown> baseComponent; // 0x268 (8)
	struct TWeakObjectPtr<struct Unknown> AdditiveAnimation; // 0x270 (8)
	float ALPHA; // 0x278 (4)
	char bStateBool : 0; // 0x27C (1)
};

// Class AnimationSharing.AnimSharingInstance
struct UAnimSharingInstance : Object {
	struct TArray<Unknown> RegisteredActors; // 0x28 (16)
	struct Unknown StateProcessor; // 0xA8 (8)
	struct TArray<Unknown> UsedAnimationSequences; // 0xE8 (16)
	struct Unknown StateEnum; // 0x108 (8)
	struct Unknown SharingActor; // 0x110 (8)
};

// Class AnimationSharing.AnimationSharingManager
struct UAnimationSharingManager : Object {
	struct TArray<Unknown> Skeletons; // 0x28 (16)
	struct TArray<Unknown> PerSkeletonData; // 0x38 (16)

	void RegisterActorWithSkeletonBP(struct Unknown InActor, struct Unknown SharingSkeleton); // Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16A62F0>
	struct Unknown GetAnimationSharingManager(struct Unknown WorldContextObject); // Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16A5FE0>
	char CreateAnimationSharingManager(struct Unknown WorldContextObject, struct Unknown Setup); // Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16A5F20>
	char AnimationSharingEnabled(); // Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16A5EF0>
};

// Class AnimationSharing.AnimationSharingSetup
struct UAnimationSharingSetup : Object {
	struct TArray<Unknown> SkeletonSetups; // 0x28 (16)
	struct Unknown ScalabilitySettings; // 0x38 (16)
};

// Class AnimationSharing.AnimationSharingStateProcessor
struct UAnimationSharingStateProcessor : Object {
	struct TSoftObjectPtr<Unknown> AnimationStateEnum; // 0x28 (40)

	void ProcessActorState(int32_t& OutState, struct Unknown InActor, char CurrentState, char OnDemandState, char& bShouldProcess); // Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState(Native|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16A6140>
	struct Unknown GetAnimationStateEnum(); // Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum(Native|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16A6060>
};

