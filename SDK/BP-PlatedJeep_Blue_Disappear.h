// BlueprintGeneratedClass BP-PlatedJeep_Blue_Disappear.BP-PlatedJeep_Blue_Disappear_C
class ABP-PlatedJeep_Blue_Disappear_C : public ABravoHotelMaterialEffectActor {

public:

	struct UStaticMeshComponent Tire_RL; // 0x450 (8)
	struct UStaticMeshComponent Tire_FL; // 0x458 (8)
	struct UStaticMeshComponent Tire_RR; // 0x460 (8)
	struct UStaticMeshComponent Tire_FR; // 0x468 (8)
	struct USkeletalMeshComponent SkeletalMesh; // 0x470 (8)
	struct USceneComponent DefaultSceneRoot; // 0x478 (8)

	void UserConstructionScript(); // Function BP-PlatedJeep_Blue_Disappear.BP-PlatedJeep_Blue_Disappear_C.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function BP-PlatedJeep_Blue_Disappear.BP-PlatedJeep_Blue_Disappear_C.UserConstructionScript
inline void ABP-PlatedJeep_Blue_Disappear_C::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-PlatedJeep_Blue_Disappear.BP-PlatedJeep_Blue_Disappear_C.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

