// Enum GameplayTasks.ETaskResourceOverlapPolicy
enum class ETaskResourceOverlapPolicy : uint8 {
	ETaskResourceOverlapPolicy = 0,
	ETaskResourceOverlapPolicy = 1,
	ETaskResourceOverlapPolicy = 2
};

// Enum GameplayTasks.EGameplayTaskState
enum class EGameplayTaskState : uint8 {
	EGameplayTaskState = 0,
	EGameplayTaskState = 1,
	EGameplayTaskState = 2,
	EGameplayTaskState = 3,
	EGameplayTaskState = 4,
	EGameplayTaskState = 5
};

// Enum GameplayTasks.EGameplayTaskRunResult
enum class EGameplayTaskRunResult : uint8 {
	EGameplayTaskRunResult = 0,
	EGameplayTaskRunResult = 1,
	EGameplayTaskRunResult = 2,
	EGameplayTaskRunResult = 3,
	EGameplayTaskRunResult = 4,
	EGameplayTaskRunResult = 5
};

// Class GameplayTasks.GameplayTask
struct UGameplayTask : Object {
	struct FName InstanceName; //  0x30 Size(8)
	enum class Unknow ResourceOverlapPolicy; //  0x3a Size(1)
	struct Unknown ChildTask; //  0x60 Size(8)

	void ReadyForActivation(); // Function GameplayTasks.GameplayTask.ReadyForActivation(Final|Native|Public|BlueprintCallable) // <Game+0x3eb8da0>
};

// Class GameplayTasks.GameplayTask_SpawnActor
struct UGameplayTask_SpawnActor : UGameplayTask {
	struct FMulticastInlineDelegate SUCCESS; //  0x68 Size(10)
	struct FMulticastInlineDelegate DidNotSpawn; //  0x78 Size(10)
	struct Unknown* ClassToSpawn; //  0xa0 Size(8)

	struct Unknown SpawnActor(struct TScriptInterface<IUnknown> TaskOwner, struct Unknown SpawnLocation, struct Unknown SpawnRotation, struct Unknown* Class, char bSpawnOnlyOnAuthority); // Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor(Final|Native|Static|Public|HasDefaults|BlueprintCallable) // <Game+0x3eb8dc0>
};

// Class GameplayTasks.GameplayTask_TimeLimitedExecuti
struct UGameplayTask_TimeLimitedExecuti : UGameplayTask {
	struct FMulticastInlineDelegate OnFinished; //  0x68 Size(10)
	struct FMulticastInlineDelegate OnTimeExpired; //  0x78 Size(10)
};

// Class GameplayTasks.GameplayTask_WaitDelay
struct UGameplayTask_WaitDelay : UGameplayTask {
	struct FMulticastInlineDelegate OnFinish; //  0x68 Size(10)

	struct Unknown TaskWaitDelay(struct TScriptInterface<IUnknown> TaskOwner, float Time, char Priority); // Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay(Final|Native|Static|Public|BlueprintCallable) // <Game+0x3eb8f70>
};

// Class GameplayTasks.GameplayTaskResource
struct UGameplayTaskResource : Object {
	int32_t ManualResourceID; //  0x28 Size(4)
	int8_t AutoResourceID; //  0x2c Size(1)
	char bManuallySetID; //  0x30 Size(1)
};

// Class GameplayTasks.GameplayTasksComponent
struct UGameplayTasksComponent : UActorComponent {
	char bIsNetDirty; //  0xbc Size(1)
	struct TArray<Unknown> SimulatedTasks; //  0xc0 Size(10)
	struct TArray<Unknown> TaskPriorityQueue; //  0xd0 Size(10)
	struct TArray<Unknown> TickingTasks; //  0xf0 Size(10)
	struct TArray<Unknown> KnownTasks; //  0x100 Size(10)
	struct FMulticastInlineDelegate OnClaimedResourcesChange; //  0x110 Size(10)

	void OnRep_SimulatedTasks(); // Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks(Final|Native|Public) // <Game+0x3eb8d80>
};

