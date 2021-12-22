// Enum ChaosSolverEngine.EClusterConnectionTypeEnum
enum class EClusterConnectionTypeEnum : uint8 {
	EClusterConnectionTypeEnum = 0,
	EClusterConnectionTypeEnum = 1,
	EClusterConnectionTypeEnum = 2,
	EClusterConnectionTypeEnum = 3,
	EClusterConnectionTypeEnum = 4,
	EClusterConnectionTypeEnum = 5,
	EClusterConnectionTypeEnum = 6
};

// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
struct UChaosGameplayEventDispatcher : UChaosEventListenerComponent {
	struct TMap<{}, {}>Unknown CollisionEventRegistrations; //  0x1c8 Size(50)
	struct TMap<{}, {}>Unknown BreakEventRegistrations; //  0x218 Size(50)
};

// Class ChaosSolverEngine.ChaosSolverActor
struct AChaosSolverActor : UActor {
	float TimeStepMultiplier; //  0x310 Size(4)
	int32_t CollisionIterations; //  0x314 Size(4)
	int32_t PushOutIterations; //  0x318 Size(4)
	int32_t PushOutPairIterations; //  0x31c Size(4)
	float ClusterConnectionFactor; //  0x320 Size(4)
	enum class Unknow ClusterUnionConnectionType; //  0x324 Size(1)
	char DoGenerateCollisionData; //  0x325 Size(1)
	struct Unknown CollisionFilterSettings; //  0x328 Size(10)
	char DoGenerateBreakingData; //  0x338 Size(1)
	struct Unknown BreakingFilterSettings; //  0x33c Size(10)
	char DoGenerateTrailingData; //  0x34c Size(1)
	struct Unknown TrailingFilterSettings; //  0x350 Size(10)
	char bHasFloor; //  0x360 Size(1)
	float FloorHeight; //  0x364 Size(4)
	float MassScale; //  0x368 Size(4)
	char bGenerateContactGraph; //  0x36c Size(1)
	struct Unknown ChaosDebugSubstepControl; //  0x36d Size(3)
	struct Unknown SpriteComponent; //  0x370 Size(8)
	struct Unknown GameplayEventDispatcherComponent; //  0x390 Size(8)

	void SetSolverActive(char bActive); // Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive(Native|Public|BlueprintCallable) // <Game+0x400b4b0>
};

// Class ChaosSolverEngine.ChaosSolverSettings
struct UChaosSolverSettings : UDeveloperSettings {
	struct Unknown DefaultChaosSolverActorClas; //  0x40 Size(18)
};

