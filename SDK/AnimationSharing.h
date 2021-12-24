// Class AnimationSharing.AnimSharingStateInstance
class UAnimSharingStateInstance : public UAnimInstance {

public:

	struct Unknown AnimationToPlay; // 0x268 (8)
	float PermutationTimeOffset; // 0x270 (4)
	float PlayRate; // 0x274 (4)
	char bStateBool : 0; // 0x278 (1)
	struct Unknown Instance; // 0x280 (8)

	void GetInstancedActors(struct TArray<Unknown>& Actors); // Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors(Final|Native|Protected|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16A7500>
};

// Class AnimationSharing.AnimSharingTransitionInstance
class UAnimSharingTransitionInstance : public UAnimInstance {

public:

	struct TWeakObjectPtr<struct Unknown> FromComponent; // 0x268 (8)
	struct TWeakObjectPtr<struct Unknown> ToComponent; // 0x270 (8)
	float BlendTime; // 0x278 (4)
	char bBlendBool : 0; // 0x27C (1)
};

// Class AnimationSharing.AnimSharingAdditiveInstance
class UAnimSharingAdditiveInstance : public UAnimInstance {

public:

	struct TWeakObjectPtr<struct Unknown> baseComponent; // 0x268 (8)
	struct TWeakObjectPtr<struct Unknown> AdditiveAnimation; // 0x270 (8)
	float ALPHA; // 0x278 (4)
	char bStateBool : 0; // 0x27C (1)
};

// Class AnimationSharing.AnimSharingInstance
class UAnimSharingInstance : public Object {

public:

	struct TArray<Unknown> RegisteredActors; // 0x28 (16)
	struct Unknown StateProcessor; // 0xA8 (8)
	struct TArray<Unknown> UsedAnimationSequences; // 0xE8 (16)
	struct Unknown StateEnum; // 0x108 (8)
	struct Unknown SharingActor; // 0x110 (8)
};

// Class AnimationSharing.AnimationSharingManager
class UAnimationSharingManager : public Object {

public:

	struct TArray<Unknown> Skeletons; // 0x28 (16)
	struct TArray<Unknown> PerSkeletonData; // 0x38 (16)

	void RegisterActorWithSkeletonBP(struct Unknown InActor, struct Unknown SharingSkeleton); // Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16A7760>
	struct Unknown GetAnimationSharingManager(struct Unknown WorldContextObject); // Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16A7450>
	char CreateAnimationSharingManager(struct Unknown WorldContextObject, struct Unknown Setup); // Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16A7390>
	char AnimationSharingEnabled(); // Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16A7360>
};

// Class AnimationSharing.AnimationSharingSetup
class UAnimationSharingSetup : public Object {

public:

	struct TArray<Unknown> SkeletonSetups; // 0x28 (16)
	struct Unknown ScalabilitySettings; // 0x38 (16)
};

// Class AnimationSharing.AnimationSharingStateProcessor
class UAnimationSharingStateProcessor : public Object {

public:

	struct Unknown AnimationStateEnum; // 0x28 (40)

	void ProcessActorState(int32_t& OutState, struct Unknown InActor, char CurrentState, char OnDemandState, char& bShouldProcess); // Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState(Native|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16A75B0>
	struct Unknown GetAnimationStateEnum(); // Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum(Native|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16A74D0>
};

// ScriptStruct AnimationSharing.AnimationSharingScalability
struct FAnimationSharingScalability {
	struct Unknown UseBlendTransitions; // 0x0 (1)
	struct Unknown BlendSignificanceValue; // 0x4 (4)
	struct Unknown MaximumNumberConcurrentBlends; // 0x8 (4)
	struct Unknown TickSignificanceValue; // 0xC (4)
};

// ScriptStruct AnimationSharing.PerSkeletonAnimationSharingSetup
struct FPerSkeletonAnimationSharingSetup {
	struct Unknown Skeleton; // 0x0 (8)
	struct Unknown SkeletalMesh; // 0x8 (8)
	struct Unknown* BlendAnimBlueprint; // 0x10 (8)
	struct Unknown* AdditiveAnimBlueprint; // 0x18 (8)
	struct Unknown* StateProcessorClass; // 0x20 (8)
	struct TArray<Unknown> AnimationStates; // 0x28 (16)
};

// ScriptStruct AnimationSharing.AnimationStateEntry
struct FAnimationStateEntry {
	char State; // 0x0 (1)
	struct TArray<Unknown> AnimationSetups; // 0x8 (16)
	char bOnDemand : 0; // 0x18 (1)
	char bAdditive : 0; // 0x19 (1)
	float BlendTime; // 0x1C (4)
	char bReturnToPreviousState : 0; // 0x20 (1)
	char bSetNextState : 0; // 0x21 (1)
	char NextState; // 0x22 (1)
	struct Unknown MaximumNumberOfConcurrentInstances; // 0x24 (4)
	float WiggleTimePercentage; // 0x28 (4)
	char bRequiresCurves : 0; // 0x2C (1)
};

// ScriptStruct AnimationSharing.AnimationSetup
struct FAnimationSetup {
	struct Unknown AnimSequence; // 0x0 (8)
	struct Unknown* AnimBlueprint; // 0x8 (8)
	struct Unknown NumRandomizedInstances; // 0x10 (4)
	struct Unknown Enabled; // 0x14 (1)
};

