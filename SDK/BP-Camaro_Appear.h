// BlueprintGeneratedClass BP-Camaro_Appear.BP-Camaro_Appear_C
class ABP-Camaro_Appear_C : public ABravoHotelMaterialEffectActor {

public:

	struct UStaticMeshComponent Tire_RL; // 0x478 (8)
	struct UStaticMeshComponent Tire_FL; // 0x480 (8)
	struct UStaticMeshComponent Tire_RR; // 0x488 (8)
	struct UStaticMeshComponent Tire_FR; // 0x490 (8)
	struct USkeletalMeshComponent SkeletalMesh; // 0x498 (8)
	struct USceneComponent DefaultSceneRoot; // 0x4A0 (8)

	void UserConstructionScript(); // Function BP-Camaro_Appear.BP-Camaro_Appear_C.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function BP-Camaro_Appear.BP-Camaro_Appear_C.UserConstructionScript
inline void ABP-Camaro_Appear_C::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Camaro_Appear.BP-Camaro_Appear_C.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

