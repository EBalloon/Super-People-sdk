// BlueprintGeneratedClass BP-PlatedJeep_Blue_Disappear.BP-PlatedJeep_Blue_Disappear_C
class ABP-PlatedJeep_Blue_Disappear_C : public ABravoHotelMaterialEffectActor {

public:

	struct Unknown Tire_RL; // 0x468 (8)
	struct Unknown Tire_FL; // 0x470 (8)
	struct Unknown Tire_RR; // 0x478 (8)
	struct Unknown Tire_FR; // 0x480 (8)
	struct Unknown SkeletalMesh; // 0x488 (8)
	struct Unknown DefaultSceneRoot; // 0x490 (8)

	void UserConstructionScript(); // Function BP-PlatedJeep_Blue_Disappear.BP-PlatedJeep_Blue_Disappear_C.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
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

