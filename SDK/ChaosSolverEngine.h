// Enum ChaosSolverEngine.EClusterConnectionTypeEnum
enum class EClusterConnectionTypeEnum : uint8_t {
	EClusterConnectionTypeEnum = 0,
	EClusterConnectionTypeEnum = 1,
	EClusterConnectionTypeEnum = 2,
	EClusterConnectionTypeEnum = 3,
	EClusterConnectionTypeEnum = 4,
	EClusterConnectionTypeEnum = 5,
	EClusterConnectionTypeEnum = 6,
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

	void SetSolverActive(char bActive); // Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x400C6E0>
	void SetAsCurrentWorldSolver(); // Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x400C6C0>
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

