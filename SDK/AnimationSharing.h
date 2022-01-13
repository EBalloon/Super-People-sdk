// Class AnimationSharing.AnimSharingStateInstance
class UAnimSharingStateInstance : public UAnimInstance {

public:

	struct UAnimSequence AnimationToPlay; // 0x270 (8)
	float PermutationTimeOffset; // 0x278 (4)
	float PlayRate; // 0x27C (4)
	char bStateBool : 0; // 0x280 (1)
	struct UAnimSharingInstance Instance; // 0x288 (8)

	void GetInstancedActors(struct TArray<struct UActor>& Actors); // Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors(Final|Native|Protected|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16BD1E0>
};

// Class AnimationSharing.AnimSharingTransitionInstance
class UAnimSharingTransitionInstance : public UAnimInstance {

public:

	struct TWeakObjectPtr<struct USkeletalMeshComponent> FromComponent; // 0x270 (8)
	struct TWeakObjectPtr<struct USkeletalMeshComponent> ToComponent; // 0x278 (8)
	float BlendTime; // 0x280 (4)
	char bBlendBool : 0; // 0x284 (1)
};

// Class AnimationSharing.AnimSharingAdditiveInstance
class UAnimSharingAdditiveInstance : public UAnimInstance {

public:

	struct TWeakObjectPtr<struct USkeletalMeshComponent> baseComponent; // 0x270 (8)
	struct TWeakObjectPtr<struct UAnimSequence> AdditiveAnimation; // 0x278 (8)
	float ALPHA; // 0x280 (4)
	char bStateBool : 0; // 0x284 (1)
};

// Class AnimationSharing.AnimSharingInstance
class UAnimSharingInstance : public Object {

public:

	struct TArray<struct UActor> RegisteredActors; // 0x28 (16)
	struct UAnimationSharingStateProcessor StateProcessor; // 0xA8 (8)
	struct TArray<struct UAnimSequence> UsedAnimationSequences; // 0xE8 (16)
	struct UEnum StateEnum; // 0x108 (8)
	struct UActor SharingActor; // 0x110 (8)
};

// Class AnimationSharing.AnimationSharingManager
class UAnimationSharingManager : public Object {

public:

	struct TArray<struct USkeleton> Skeletons; // 0x28 (16)
	struct TArray<struct UAnimSharingInstance> PerSkeletonData; // 0x78 (16)

	void RegisterActorWithSkeletonBP(struct UActor InActor, struct USkeleton SharingSkeleton); // Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16BD440>
	struct UAnimationSharingManager GetAnimationSharingManager(struct Object WorldContextObject); // Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16BD130>
	char CreateAnimationSharingManager(struct Object WorldContextObject, struct UAnimationSharingSetup Setup); // Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16BD070>
	char AnimationSharingEnabled(); // Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16BD040>
};

// Class AnimationSharing.AnimationSharingSetup
class UAnimationSharingSetup : public Object {

public:

	struct TArray<struct FPerSkeletonAnimationSharingSetup> SkeletonSetups; // 0x28 (16)
	struct FAnimationSharingScalability ScalabilitySettings; // 0x38 (16)
};

// Class AnimationSharing.AnimationSharingStateProcessor
class UAnimationSharingStateProcessor : public Object {

public:

	struct TSoftObjectPtr<UEnum> AnimationStateEnum; // 0x28 (40)

	void ProcessActorState(int32_t& OutState, struct UActor InActor, char CurrentState, char OnDemandState, char& bShouldProcess); // Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState(Native|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16BD290>
	struct UEnum GetAnimationStateEnum(); // Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum(Native|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16BD1B0>
};

// ScriptStruct AnimationSharing.AnimationSharingScalability
struct FAnimationSharingScalability {
	struct FPerPlatformBool UseBlendTransitions; // 0x0 (1)
	struct FPerPlatformFloat BlendSignificanceValue; // 0x4 (4)
	struct FPerPlatformInt MaximumNumberConcurrentBlends; // 0x8 (4)
	struct FPerPlatformFloat TickSignificanceValue; // 0xC (4)
};

// ScriptStruct AnimationSharing.PerSkeletonAnimationSharingSetup
struct FPerSkeletonAnimationSharingSetup {
	struct USkeleton Skeleton; // 0x18 (8)
	struct USkeletalMesh SkeletalMesh; // 0x28 (8)
	struct UClass* BlendAnimBlueprint; // 0x10 (8)
	struct UClass* AdditiveAnimBlueprint; // 0x20 (8)
	struct UClass* StateProcessorClass; // 0x30 (8)
	struct TArray<struct FAnimationStateEntry> AnimationStates; // 0x0 (16)
};

// ScriptStruct AnimationSharing.AnimationStateEntry
struct FAnimationStateEntry {
	char State; // 0x0 (1)
	struct TArray<struct FAnimationSetup> AnimationSetups; // 0x8 (16)
	char bOnDemand : 0; // 0x18 (1)
	char bAdditive : 0; // 0x19 (1)
	float BlendTime; // 0x1C (4)
	char bReturnToPreviousState : 0; // 0x20 (1)
	char bSetNextState : 0; // 0x21 (1)
	char NextState; // 0x22 (1)
	struct FPerPlatformInt MaximumNumberOfConcurrentInstances; // 0x24 (4)
	float WiggleTimePercentage; // 0x28 (4)
	char bRequiresCurves : 0; // 0x2C (1)
};

// ScriptStruct AnimationSharing.AnimationSetup
struct FAnimationSetup {
	struct UAnimSequence AnimSequence; // 0x0 (8)
	struct UClass* AnimBlueprint; // 0x8 (8)
	struct FPerPlatformInt NumRandomizedInstances; // 0x10 (4)
	struct FPerPlatformBool Enabled; // 0x14 (1)
};

// Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors
inline void UAnimSharingStateInstance::GetInstancedActors(struct TArray<struct UActor>& Actors) {
	static auto fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors");

	struct GetInstancedActors_Params {
		struct TArray<struct UActor>& Actors;
	}; GetInstancedActors_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Actors = Params.Actors;

}

// Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP
inline void UAnimationSharingManager::RegisterActorWithSkeletonBP(struct UActor InActor, struct USkeleton SharingSkeleton) {
	static auto fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP");

	struct RegisterActorWithSkeletonBP_Params {
		struct UActor InActor;
		struct USkeleton SharingSkeleton;
	}; RegisterActorWithSkeletonBP_Params Params;

	Params.InActor = InActor;
	Params.SharingSkeleton = SharingSkeleton;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager
inline struct UAnimationSharingManager UAnimationSharingManager::GetAnimationSharingManager(struct Object WorldContextObject) {
	static auto fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager");

	struct GetAnimationSharingManager_Params {
		struct Object WorldContextObject;
		struct UAnimationSharingManager ReturnValue;

	}; GetAnimationSharingManager_Params Params;

	Params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager
inline char UAnimationSharingManager::CreateAnimationSharingManager(struct Object WorldContextObject, struct UAnimationSharingSetup Setup) {
	static auto fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager");

	struct CreateAnimationSharingManager_Params {
		struct Object WorldContextObject;
		struct UAnimationSharingSetup Setup;
		char ReturnValue;

	}; CreateAnimationSharingManager_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.Setup = Setup;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled
inline char UAnimationSharingManager::AnimationSharingEnabled() {
	static auto fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled");

	struct AnimationSharingEnabled_Params {
		
		char ReturnValue;

	}; AnimationSharingEnabled_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState
inline void UAnimationSharingStateProcessor::ProcessActorState(int32_t& OutState, struct UActor InActor, char CurrentState, char OnDemandState, char& bShouldProcess) {
	static auto fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState");

	struct ProcessActorState_Params {
		int32_t& OutState;
		struct UActor InActor;
		char CurrentState;
		char OnDemandState;
		char& bShouldProcess;
	}; ProcessActorState_Params Params;

	Params.InActor = InActor;
	Params.CurrentState = CurrentState;
	Params.OnDemandState = OnDemandState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutState = Params.OutState;
	bShouldProcess = Params.bShouldProcess;

}

// Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum
inline struct UEnum UAnimationSharingStateProcessor::GetAnimationStateEnum() {
	static auto fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum");

	struct GetAnimationStateEnum_Params {
		
		struct UEnum ReturnValue;

	}; GetAnimationStateEnum_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

