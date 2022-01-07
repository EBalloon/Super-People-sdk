// BlueprintGeneratedClass BP-PhysicsStaticMeshActor.BP-PhysicsStaticMeshActor_C
class ABP-PhysicsStaticMeshActor_C : public UActor {

public:

	struct Unknown UberGraphFrame; // 0x300 (8)
	struct Unknown StaticMesh; // 0x308 (8)
	struct Unknown DefaultSceneRoot; // 0x310 (8)
	float DestructibleMeshLifeTime; // 0x318 (4)

	void ReceiveBeginPlay(); // Function BP-PhysicsStaticMeshActor.BP-PhysicsStaticMeshActor_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_BP-PhysicsStaticMeshActor(int32_t EntryPoint); // Function BP-PhysicsStaticMeshActor.BP-PhysicsStaticMeshActor_C.ExecuteUbergraph_BP-PhysicsStaticMeshActor(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
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

