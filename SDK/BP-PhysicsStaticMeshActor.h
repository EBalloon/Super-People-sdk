// BlueprintGeneratedClass BP-PhysicsStaticMeshActor.BP-PhysicsStaticMeshActor_C
class ABP-PhysicsStaticMeshActor_C : public UActor {

public:

	struct Unknown UberGraphFrame; // 0x318 (8)
	struct Unknown StaticMesh; // 0x320 (8)
	struct Unknown DefaultSceneRoot; // 0x328 (8)
	float DestructibleMeshLifeTime; // 0x330 (4)

	void ReceiveBeginPlay(); // Function BP-PhysicsStaticMeshActor.BP-PhysicsStaticMeshActor_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_BP-PhysicsStaticMeshActor(int32_t EntryPoint); // Function BP-PhysicsStaticMeshActor.BP-PhysicsStaticMeshActor_C.ExecuteUbergraph_BP-PhysicsStaticMeshActor(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
};

// Function BP-PhysicsStaticMeshActor.BP-PhysicsStaticMeshActor_C.ReceiveBeginPlay
inline void ABP-PhysicsStaticMeshActor_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-PhysicsStaticMeshActor.BP-PhysicsStaticMeshActor_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-PhysicsStaticMeshActor.BP-PhysicsStaticMeshActor_C.ExecuteUbergraph_BP-PhysicsStaticMeshActor
inline void ABP-PhysicsStaticMeshActor_C::ExecuteUbergraph_BP-PhysicsStaticMeshActor(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-PhysicsStaticMeshActor.BP-PhysicsStaticMeshActor_C.ExecuteUbergraph_BP-PhysicsStaticMeshActor");

	struct ExecuteUbergraph_BP-PhysicsStaticMeshActor_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-PhysicsStaticMeshActor_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

