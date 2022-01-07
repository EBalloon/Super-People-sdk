// Enum ChaosSolverEngine.EClusterConnectionTypeEnum
enum class EClusterConnectionTypeEnum : uint8_t {
	Chaos_PointImplicit = 0,
	Chaos_DelaunayTriangulation = 1,
	Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
	Chaos_PointImplicitAugmentedWithMinimalDelaunay = 3,
	Chaos_None = 4,
	Chaos_EClsuterCreationParameters_Max = 5,
	Chaos_MAX = 6,
};

// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent {

public:

	struct TMap<Unknown, Unknown> CollisionEventRegistrations; // 0x1C8 (80)
	struct TMap<Unknown, Unknown> BreakEventRegistrations; // 0x218 (80)
};

// Class ChaosSolverEngine.ChaosSolverActor
class AChaosSolverActor : public UActor {

public:

	float TimeStepMultiplier; // 0x300 (4)
	int32_t CollisionIterations; // 0x304 (4)
	int32_t PushOutIterations; // 0x308 (4)
	int32_t PushOutPairIterations; // 0x30C (4)
	float ClusterConnectionFactor; // 0x310 (4)
	enum class Unknow ClusterUnionConnectionType; // 0x314 (1)
	char DoGenerateCollisionData : 0; // 0x315 (1)
	struct Unknown CollisionFilterSettings; // 0x318 (16)
	char DoGenerateBreakingData : 0; // 0x328 (1)
	struct Unknown BreakingFilterSettings; // 0x32C (16)
	char DoGenerateTrailingData : 0; // 0x33C (1)
	struct Unknown TrailingFilterSettings; // 0x340 (16)
	char bHasFloor : 0; // 0x350 (1)
	float FloorHeight; // 0x354 (4)
	float MassScale; // 0x358 (4)
	char bGenerateContactGraph : 0; // 0x35C (1)
	struct Unknown ChaosDebugSubstepControl; // 0x35D (3)
	struct Unknown SpriteComponent; // 0x360 (8)
	struct Unknown GameplayEventDispatcherComponent; // 0x380 (8)

	void SetSolverActive(char bActive); // Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47DAC90>
	void SetAsCurrentWorldSolver(); // Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47DAC70>
};

// Class ChaosSolverEngine.ChaosSolverSettings
class UChaosSolverSettings : public UDeveloperSettings {

public:

	struct Unknown DefaultChaosSolverActorClass; // 0x40 (24)
};

// ScriptStruct ChaosSolverEngine.ChaosPhysicsCollisionInfo
struct FChaosPhysicsCollisionInfo {
	struct Unknown Component; // 0x0 (8)
	struct Unknown OtherComponent; // 0x8 (8)
	struct Unknown Location; // 0x10 (12)
	struct Unknown Normal; // 0x1C (12)
	struct Unknown AccumulatedImpulse; // 0x28 (12)
	struct Unknown Velocity; // 0x34 (12)
	struct Unknown OtherVelocity; // 0x40 (12)
	struct Unknown AngularVelocity; // 0x4C (12)
	struct Unknown OtherAngularVelocity; // 0x58 (12)
	float Mass; // 0x64 (4)
	float OtherMass; // 0x68 (4)
};

// ScriptStruct ChaosSolverEngine.ChaosBreakEvent
struct FChaosBreakEvent {
	struct Unknown Component; // 0x0 (8)
	struct Unknown Location; // 0x8 (12)
	struct Unknown Velocity; // 0x14 (12)
	struct Unknown AngularVelocity; // 0x20 (12)
	float Mass; // 0x2C (4)
};

// ScriptStruct ChaosSolverEngine.ChaosHandlerSet
struct FChaosHandlerSet {
	struct TSet<Unknown> ChaosHandlers; // 0x8 (80)
};

// ScriptStruct ChaosSolverEngine.ChaosDebugSubstepControl
struct FChaosDebugSubstepControl {
	char bPause : 0; // 0x0 (1)
	char bSubstep : 0; // 0x1 (1)
	char bStep : 0; // 0x2 (1)
};

// Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive
inline void AChaosSolverActor::SetSolverActive(char bActive) {
	static auto fn = UObject::FindObject<UFunction>("Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive");

	struct SetSolverActive_Params {
		char bActive;
	}; SetSolverActive_Params Params;

	Params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver
inline void AChaosSolverActor::SetAsCurrentWorldSolver() {
	static auto fn = UObject::FindObject<UFunction>("Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver");

	struct SetAsCurrentWorldSolver_Params {
		
	}; SetAsCurrentWorldSolver_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

