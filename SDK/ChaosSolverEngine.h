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

	struct TMap<struct UPrimitiveComponent, struct FChaosHandlerSet> CollisionEventRegistrations; // 0x1C8 (80)
	struct TMap<struct UPrimitiveComponent, struct FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x218 (80)
};

// Class ChaosSolverEngine.ChaosSolverActor
class AChaosSolverActor : public UActor {

public:

	float TimeStepMultiplier; // 0x318 (4)
	int32_t CollisionIterations; // 0x31C (4)
	int32_t PushOutIterations; // 0x320 (4)
	int32_t PushOutPairIterations; // 0x324 (4)
	float ClusterConnectionFactor; // 0x328 (4)
	enum class EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x32C (1)
	char DoGenerateCollisionData : 0; // 0x32D (1)
	struct FSolverCollisionFilterSettings CollisionFilterSettings; // 0x330 (16)
	char DoGenerateBreakingData : 0; // 0x340 (1)
	struct FSolverBreakingFilterSettings BreakingFilterSettings; // 0x344 (16)
	char DoGenerateTrailingData : 0; // 0x354 (1)
	struct FSolverTrailingFilterSettings TrailingFilterSettings; // 0x358 (16)
	char bHasFloor : 0; // 0x368 (1)
	float FloorHeight; // 0x36C (4)
	float MassScale; // 0x370 (4)
	char bGenerateContactGraph : 0; // 0x374 (1)
	struct FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x375 (3)
	struct UBillboardComponent SpriteComponent; // 0x378 (8)
	struct UChaosGameplayEventDispatcher GameplayEventDispatcherComponent; // 0x398 (8)

	void SetSolverActive(char bActive); // Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive(Native|Public|BlueprintCallable) // <Game_BE.exe+0x47D9D30>
	void SetAsCurrentWorldSolver(); // Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x47D9D10>
};

// Class ChaosSolverEngine.ChaosSolverSettings
class UChaosSolverSettings : public UDeveloperSettings {

public:

	struct FSoftClassPath DefaultChaosSolverActorClass; // 0x40 (24)
};

// ScriptStruct ChaosSolverEngine.ChaosPhysicsCollisionInfo
struct FChaosPhysicsCollisionInfo {
	struct UPrimitiveComponent Component; // 0x0 (8)
	struct UPrimitiveComponent OtherComponent; // 0x8 (8)
	struct FVector Location; // 0x10 (12)
	struct FVector Normal; // 0x1C (12)
	struct FVector AccumulatedImpulse; // 0x28 (12)
	struct FVector Velocity; // 0x34 (12)
	struct FVector OtherVelocity; // 0x40 (12)
	struct FVector AngularVelocity; // 0x4C (12)
	struct FVector OtherAngularVelocity; // 0x58 (12)
	float Mass; // 0x64 (4)
	float OtherMass; // 0x68 (4)
};

// ScriptStruct ChaosSolverEngine.ChaosBreakEvent
struct FChaosBreakEvent {
	struct UPrimitiveComponent Component; // 0x0 (8)
	struct FVector Location; // 0x8 (12)
	struct FVector Velocity; // 0x14 (12)
	struct FVector AngularVelocity; // 0x20 (12)
	float Mass; // 0x2C (4)
};

// ScriptStruct ChaosSolverEngine.ChaosHandlerSet
struct FChaosHandlerSet {
	struct TSet<struct Object> ChaosHandlers; // 0x8 (80)
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

