// BlueprintGeneratedClass BP-ATV_Disappear.BP-ATV_Disappear_C
class ABP-ATV_Disappear_C : public ABravoHotelMaterialEffectActor {

public:

	struct Unknown Tire_RL; // 0x450 (8)
	struct Unknown Tire_FL; // 0x458 (8)
	struct Unknown Tire_RR; // 0x460 (8)
	struct Unknown Tire_FR; // 0x468 (8)
	struct Unknown SkeletalMesh; // 0x470 (8)
	struct Unknown DefaultSceneRoot; // 0x478 (8)

	void UserConstructionScript(); // Function BP-ATV_Disappear.BP-ATV_Disappear_C.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
};

// Function BP-ATV_Disappear.BP-ATV_Disappear_C.UserConstructionScript
inline void ABP-ATV_Disappear_C::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-ATV_Disappear.BP-ATV_Disappear_C.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

