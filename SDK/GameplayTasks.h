// Enum GameplayTasks.ETaskResourceOverlapPolicy
enum class ETaskResourceOverlapPolicy : uint8_t {
	StartOnTop = 0,
	StartAtEnd = 1,
	ETaskResourceOverlapPolicy_MAX = 2,
};

// Enum GameplayTasks.EGameplayTaskState
enum class EGameplayTaskState : uint8_t {
	Uninitialized = 0,
	AwaitingActivation = 1,
	Paused = 2,
	Active = 3,
	Finished = 4,
	EGameplayTaskState_MAX = 5,
};

// Enum GameplayTasks.EGameplayTaskRunResult
enum class EGameplayTaskRunResult : uint8_t {
	Error = 0,
	Failed = 1,
	Success_Paused = 2,
	Success_Active = 3,
	Success_Finished = 4,
	EGameplayTaskRunResult_MAX = 5,
};

// Class GameplayTasks.GameplayTask
class UGameplayTask : public Object {

public:

	struct FName InstanceName; // 0x30 (8)
	enum class ETaskResourceOverlapPolicy ResourceOverlapPolicy; // 0x3A (1)
	struct UGameplayTask ChildTask; // 0x60 (8)

	void ReadyForActivation(); // Function GameplayTasks.GameplayTask.ReadyForActivation(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x46877C0>
	void GenericGameplayTaskDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature(MulticastDelegate|Public|Delegate) // <Game_BE.exe+0x2B80160>
	void EndTask(); // Function GameplayTasks.GameplayTask.EndTask(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x4687470>
};

// Class GameplayTasks.GameplayTask_SpawnActor
class UGameplayTask_SpawnActor : public UGameplayTask {

public:

	struct FMulticastInlineDelegate SUCCESS; // 0x68 (16)
	struct FMulticastInlineDelegate DidNotSpawn; // 0x78 (16)
	struct UClass* ClassToSpawn; // 0xA0 (8)

	struct UGameplayTask_SpawnActor SpawnActor(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, struct FVector SpawnLocation, struct FRotator SpawnRotation, struct UClass* Class, char bSpawnOnlyOnAuthority); // Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor(Final|Native|Static|Public|HasDefaults|BlueprintCallable) // <Game_BE.exe+0x46877E0>
	void FinishSpawningActor(struct Object WorldContextObject, struct UActor SpawnedActor); // Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor(Native|Public|BlueprintCallable) // <Game_BE.exe+0x4687490>
	char BeginSpawningActor(struct Object WorldContextObject, struct UActor& SpawnedActor); // Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor(Native|Public|HasOutParms|BlueprintCallable) // <Game_BE.exe+0x46870A0>
};

// Class GameplayTasks.GameplayTask_TimeLimitedExecution
class UGameplayTask_TimeLimitedExecution : public UGameplayTask {

public:

	struct FMulticastInlineDelegate OnFinished; // 0x68 (16)
	struct FMulticastInlineDelegate OnTimeExpired; // 0x78 (16)
};

// Class GameplayTasks.GameplayTask_WaitDelay
class UGameplayTask_WaitDelay : public UGameplayTask {

public:

	struct FMulticastInlineDelegate OnFinish; // 0x68 (16)

	struct UGameplayTask_WaitDelay TaskWaitDelay(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, float Time, char Priority); // Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay(Final|Native|Static|Public|BlueprintCallable) // <Game_BE.exe+0x4687990>
	void TaskDelayDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature(MulticastDelegate|Public|Delegate) // <Game_BE.exe+0x2B80160>
};

// Class GameplayTasks.GameplayTaskResource
class UGameplayTaskResource : public Object {

public:

	int32_t ManualResourceID; // 0x28 (4)
	int8_t AutoResourceID; // 0x2C (1)
	char bManuallySetID : 0; // 0x30 (1)
};

// Class GameplayTasks.GameplayTasksComponent
class UGameplayTasksComponent : public UActorComponent {

public:

	char bIsNetDirty : 0; // 0xBC (1)
	struct TArray<struct UGameplayTask> SimulatedTasks; // 0xC0 (16)
	struct TArray<struct UGameplayTask> TaskPriorityQueue; // 0xD0 (16)
	struct TArray<struct UGameplayTask> TickingTasks; // 0xF0 (16)
	struct TArray<struct UGameplayTask> KnownTasks; // 0x100 (16)
	struct FMulticastInlineDelegate OnClaimedResourcesChange; // 0x110 (16)

	void OnRep_SimulatedTasks(); // Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks(Final|Native|Public) // <Game_BE.exe+0x46877A0>
	enum class EGameplayTaskRunResult K2_RunGameplayTask(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, struct UGameplayTask Task, char Priority, struct TArray<struct UClass*> AdditionalRequiredResources, struct TArray<struct UClass*> AdditionalClaimedResources); // Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask(Final|Native|Static|Public|BlueprintCallable) // <Game_BE.exe+0x4687560>
};

// Function GameplayTasks.GameplayTask.ReadyForActivation
inline void UGameplayTask::ReadyForActivation() {
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask.ReadyForActivation");

	struct ReadyForActivation_Params {
		
	}; ReadyForActivation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature
inline void UGameplayTask::GenericGameplayTaskDelegate__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature");

	struct GenericGameplayTaskDelegate__DelegateSignature_Params {
		
	}; GenericGameplayTaskDelegate__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GameplayTasks.GameplayTask.EndTask
inline void UGameplayTask::EndTask() {
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask.EndTask");

	struct EndTask_Params {
		
	}; EndTask_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor
inline struct UGameplayTask_SpawnActor UGameplayTask_SpawnActor::SpawnActor(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, struct FVector SpawnLocation, struct FRotator SpawnRotation, struct UClass* Class, char bSpawnOnlyOnAuthority) {
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor");

	struct SpawnActor_Params {
		struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner;
		struct FVector SpawnLocation;
		struct FRotator SpawnRotation;
		struct UClass* Class;
		char bSpawnOnlyOnAuthority;
		struct UGameplayTask_SpawnActor ReturnValue;

	}; SpawnActor_Params Params;

	Params.TaskOwner = TaskOwner;
	Params.SpawnLocation = SpawnLocation;
	Params.SpawnRotation = SpawnRotation;
	Params.Class = Class;
	Params.bSpawnOnlyOnAuthority = bSpawnOnlyOnAuthority;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
inline void UGameplayTask_SpawnActor::FinishSpawningActor(struct Object WorldContextObject, struct UActor SpawnedActor) {
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor");

	struct FinishSpawningActor_Params {
		struct Object WorldContextObject;
		struct UActor SpawnedActor;
	}; FinishSpawningActor_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
inline char UGameplayTask_SpawnActor::BeginSpawningActor(struct Object WorldContextObject, struct UActor& SpawnedActor) {
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor");

	struct BeginSpawningActor_Params {
		struct Object WorldContextObject;
		struct UActor& SpawnedActor;
		char ReturnValue;

	}; BeginSpawningActor_Params Params;

	Params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SpawnedActor = Params.SpawnedActor;


	return params.ReturnValue;
}

// Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
inline struct UGameplayTask_WaitDelay UGameplayTask_WaitDelay::TaskWaitDelay(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, float Time, char Priority) {
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay");

	struct TaskWaitDelay_Params {
		struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner;
		float Time;
		char Priority;
		struct UGameplayTask_WaitDelay ReturnValue;

	}; TaskWaitDelay_Params Params;

	Params.TaskOwner = TaskOwner;
	Params.Time = Time;
	Params.Priority = Priority;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature
inline void UGameplayTask_WaitDelay::TaskDelayDelegate__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature");

	struct TaskDelayDelegate__DelegateSignature_Params {
		
	}; TaskDelayDelegate__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
inline void UGameplayTasksComponent::OnRep_SimulatedTasks() {
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks");

	struct OnRep_SimulatedTasks_Params {
		
	}; OnRep_SimulatedTasks_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
inline enum class EGameplayTaskRunResult UGameplayTasksComponent::K2_RunGameplayTask(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, struct UGameplayTask Task, char Priority, struct TArray<struct UClass*> AdditionalRequiredResources, struct TArray<struct UClass*> AdditionalClaimedResources) {
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask");

	struct K2_RunGameplayTask_Params {
		struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner;
		struct UGameplayTask Task;
		char Priority;
		struct TArray<struct UClass*> AdditionalRequiredResources;
		struct TArray<struct UClass*> AdditionalClaimedResources;
		enum class EGameplayTaskRunResult ReturnValue;

	}; K2_RunGameplayTask_Params Params;

	Params.TaskOwner = TaskOwner;
	Params.Task = Task;
	Params.Priority = Priority;
	Params.AdditionalRequiredResources = AdditionalRequiredResources;
	Params.AdditionalClaimedResources = AdditionalClaimedResources;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

