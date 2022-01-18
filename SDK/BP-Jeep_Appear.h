// BlueprintGeneratedClass BP-Jeep_Appear.BP-Jeep_Appear_C
class ABP-Jeep_Appear_C : public ABravoHotelMaterialEffectActor {

public:

	struct UStaticMeshComponent Tire_RL; // 0x450 (8)
	struct UStaticMeshComponent Tire_FL; // 0x458 (8)
	struct UStaticMeshComponent Tire_RR; // 0x460 (8)
	struct UStaticMeshComponent Tire_FR; // 0x468 (8)
	struct USkeletalMeshComponent SkeletalMesh; // 0x470 (8)
	struct USceneComponent DefaultSceneRoot; // 0x478 (8)

	void UserConstructionScript(); // Function BP-Jeep_Appear.BP-Jeep_Appear_C.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function BP-Jeep_Appear.BP-Jeep_Appear_C.UserConstructionScript
inline void ABP-Jeep_Appear_C::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Jeep_Appear.BP-Jeep_Appear_C.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

