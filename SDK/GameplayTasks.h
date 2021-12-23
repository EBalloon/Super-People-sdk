// Enum GameplayTasks.ETaskResourceOverlapPolicy
enum class ETaskResourceOverlapPolicy : uint8 {
	ETaskResourceOverlapPolicy = 0
	ETaskResourceOverlapPolicy = 1
	ETaskResourceOverlapPolicy = 2
};

// Enum GameplayTasks.EGameplayTaskState
enum class EGameplayTaskState : uint8 {
	EGameplayTaskState = 0
	EGameplayTaskState = 1
	EGameplayTaskState = 2
	EGameplayTaskState = 3
	EGameplayTaskState = 4
	EGameplayTaskState = 5
};

// Enum GameplayTasks.EGameplayTaskRunResult
enum class EGameplayTaskRunResult : uint8 {
	EGameplayTaskRunResult = 0
	EGameplayTaskRunResult = 1
	EGameplayTaskRunResult = 2
	EGameplayTaskRunResult = 3
	EGameplayTaskRunResult = 4
	EGameplayTaskRunResult = 5
};

// Class GameplayTasks.GameplayTask
struct UGameplayTask : Object {
	struct FName InstanceName; // 0x30 (8)
	enum class Unknow ResourceOverlapPolicy; // 0x3A (1)
	struct Unknown ChildTask; // 0x60 (8)

	void ReadyForActivation(); // Function GameplayTasks.GameplayTask.ReadyForActivation(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3EB8DA0>
	void GenericGameplayTaskDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void EndTask(); // Function GameplayTasks.GameplayTask.EndTask(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3EB8A50>
};

// Class GameplayTasks.GameplayTask_SpawnActor
struct UGameplayTask_SpawnActor : UGameplayTask {
	struct FMulticastInlineDelegate SUCCESS; // 0x68 (16)
	struct FMulticastInlineDelegate DidNotSpawn; // 0x78 (16)
	struct Unknown* ClassToSpawn; // 0xA0 (8)

	struct Unknown SpawnActor(struct TScriptInterface<IUnknown> TaskOwner, struct Unknown SpawnLocation, struct Unknown SpawnRotation, struct Unknown* Class, char bSpawnOnlyOnAuthority); // Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor(Final|Native|Static|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3EB8DC0>
	void FinishSpawningActor(struct Unknown WorldContextObject, struct Unknown SpawnedActor); // Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3EB8A70>
	char BeginSpawningActor(struct Unknown WorldContextObject, struct Unknown& SpawnedActor); // Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor(Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3EB8680>
};

// Class GameplayTasks.GameplayTask_TimeLimitedExecution
struct UGameplayTask_TimeLimitedExecution : UGameplayTask {
	struct FMulticastInlineDelegate OnFinished; // 0x68 (16)
	struct FMulticastInlineDelegate OnTimeExpired; // 0x78 (16)
};

// Class GameplayTasks.GameplayTask_WaitDelay
struct UGameplayTask_WaitDelay : UGameplayTask {
	struct FMulticastInlineDelegate OnFinish; // 0x68 (16)

	struct Unknown TaskWaitDelay(struct TScriptInterface<IUnknown> TaskOwner, float Time, char Priority); // Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3EB8F70>
	void TaskDelayDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// Class GameplayTasks.GameplayTaskResource
struct UGameplayTaskResource : Object {
	int32_t ManualResourceID; // 0x28 (4)
	int8_t AutoResourceID; // 0x2C (1)
	char bManuallySetID : 0; // 0x30 (1)
};

// Class GameplayTasks.GameplayTasksComponent
struct UGameplayTasksComponent : UActorComponent {
	char bIsNetDirty : 0; // 0xBC (1)
	struct TArray<Unknown> SimulatedTasks; // 0xC0 (16)
	struct TArray<Unknown> TaskPriorityQueue; // 0xD0 (16)
	struct TArray<Unknown> TickingTasks; // 0xF0 (16)
	struct TArray<Unknown> KnownTasks; // 0x100 (16)
	struct FMulticastInlineDelegate OnClaimedResourcesChange; // 0x110 (16)

	void OnRep_SimulatedTasks(); // Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3EB8D80>
	enum class Unknow K2_RunGameplayTask(struct TScriptInterface<IUnknown> TaskOwner, struct Unknown Task, char Priority, struct TArray<Unknown> AdditionalRequiredResources, struct TArray<Unknown> AdditionalClaimedResources); // Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3EB8B40>
};

