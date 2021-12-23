// Enum ChaosSolverEngine.EClusterConnectionTypeEnum
enum class EClusterConnectionTypeEnum : uint8 {
	EClusterConnectionTypeEnum = 0
	EClusterConnectionTypeEnum = 1
	EClusterConnectionTypeEnum = 2
	EClusterConnectionTypeEnum = 3
	EClusterConnectionTypeEnum = 4
	EClusterConnectionTypeEnum = 5
	EClusterConnectionTypeEnum = 6
};

// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
struct UChaosGameplayEventDispatcher : UChaosEventListenerComponent {
	struct TMap<Unknown, Unknown>Unknown CollisionEventRegistrations; // 0x1C8 (80)
	struct TMap<Unknown, Unknown>Unknown BreakEventRegistrations; // 0x218 (80)
};

// Class ChaosSolverEngine.ChaosSolverActor
struct AChaosSolverActor : UActor {
	float TimeStepMultiplier; // 0x310 (4)
	int32_t CollisionIterations; // 0x314 (4)
	int32_t PushOutIterations; // 0x318 (4)
	int32_t PushOutPairIterations; // 0x31C (4)
	float ClusterConnectionFactor; // 0x320 (4)
	enum class Unknow ClusterUnionConnectionType; // 0x324 (1)
	char DoGenerateCollisionData : 0; // 0x325 (1)
	struct Unknown CollisionFilterSettings; // 0x328 (16)
	char DoGenerateBreakingData : 0; // 0x338 (1)
	struct Unknown BreakingFilterSettings; // 0x33C (16)
	char DoGenerateTrailingData : 0; // 0x34C (1)
	struct Unknown TrailingFilterSettings; // 0x350 (16)
	char bHasFloor : 0; // 0x360 (1)
	float FloorHeight; // 0x364 (4)
	float MassScale; // 0x368 (4)
	char bGenerateContactGraph : 0; // 0x36C (1)
	struct Unknown ChaosDebugSubstepControl; // 0x36D (3)
	struct Unknown SpriteComponent; // 0x370 (8)
	struct Unknown GameplayEventDispatcherComponent; // 0x390 (8)

	void SetSolverActive(char bActive); // Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x400B4B0>
	void SetAsCurrentWorldSolver(); // Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x400B490>
};

// Class ChaosSolverEngine.ChaosSolverSettings
struct UChaosSolverSettings : UDeveloperSettings {
	struct Unknown DefaultChaosSolverActorClass; // 0x40 (24)
};

