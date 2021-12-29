// BlueprintGeneratedClass BP-PlatedJeep_Blue_Appear.BP-PlatedJeep_Blue_Appear_C
class ABP-PlatedJeep_Blue_Appear_C : public ABravoHotelMaterialEffectActor {

public:

	struct Unknown Tire_RL; // 0x460 (8)
	struct Unknown Tire_FL; // 0x468 (8)
	struct Unknown Tire_RR; // 0x470 (8)
	struct Unknown Tire_FR; // 0x478 (8)
	struct Unknown SkeletalMesh; // 0x480 (8)
	struct Unknown DefaultSceneRoot; // 0x488 (8)

	void UserConstructionScript(); // Function BP-PlatedJeep_Blue_Appear.BP-PlatedJeep_Blue_Appear_C.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function BP-PlatedJeep_Blue_Appear.BP-PlatedJeep_Blue_Appear_C.UserConstructionScript
inline void ABP-PlatedJeep_Blue_Appear_C::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-PlatedJeep_Blue_Appear.BP-PlatedJeep_Blue_Appear_C.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

