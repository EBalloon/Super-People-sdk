// BlueprintGeneratedClass BP-Weapon_Gatling.BP-Weapon_Gatling_C
class ABP-Weapon_Gatling_C : public ABP-RangedWeaponBase_C {

public:

	struct Unknown UberGraphFrame; // 0x22B0 (8)
	float BarrelHeatEffect_Effect_Intensity_B2A9FBB3451595B9BFEF019625EA581E; // 0x22B8 (4)
	char BarrelHeatEffect__Direction_B2A9FBB3451595B9BFEF019625EA581E; // 0x22BC (1)
	struct Unknown BarrelHeatEffect; // 0x22C0 (8)

	void BarrelHeatEffect__FinishedFunc(); // Function BP-Weapon_Gatling.BP-Weapon_Gatling_C.BarrelHeatEffect__FinishedFunc(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BarrelHeatEffect__UpdateFunc(); // Function BP-Weapon_Gatling.BP-Weapon_Gatling_C.BarrelHeatEffect__UpdateFunc(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ReceiveBeginPlay(); // Function BP-Weapon_Gatling.BP-Weapon_Gatling_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void K2_OnStartSimulateFire(); // Function BP-Weapon_Gatling.BP-Weapon_Gatling_C.K2_OnStartSimulateFire(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void K2_OnEndSimulateFire(); // Function BP-Weapon_Gatling.BP-Weapon_Gatling_C.K2_OnEndSimulateFire(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_BP-Weapon_Gatling(int32_t EntryPoint); // Function BP-Weapon_Gatling.BP-Weapon_Gatling_C.ExecuteUbergraph_BP-Weapon_Gatling(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
};

// Function BP-Weapon_Gatling.BP-Weapon_Gatling_C.BarrelHeatEffect__FinishedFunc
inline void ABP-Weapon_Gatling_C::BarrelHeatEffect__FinishedFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Weapon_Gatling.BP-Weapon_Gatling_C.BarrelHeatEffect__FinishedFunc");

	struct BarrelHeatEffect__FinishedFunc_Params {
		
	}; BarrelHeatEffect__FinishedFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Weapon_Gatling.BP-Weapon_Gatling_C.BarrelHeatEffect__UpdateFunc
inline void ABP-Weapon_Gatling_C::BarrelHeatEffect__UpdateFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Weapon_Gatling.BP-Weapon_Gatling_C.BarrelHeatEffect__UpdateFunc");

	struct BarrelHeatEffect__UpdateFunc_Params {
		
	}; BarrelHeatEffect__UpdateFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Weapon_Gatling.BP-Weapon_Gatling_C.ReceiveBeginPlay
inline void ABP-Weapon_Gatling_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Weapon_Gatling.BP-Weapon_Gatling_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Weapon_Gatling.BP-Weapon_Gatling_C.K2_OnStartSimulateFire
inline void ABP-Weapon_Gatling_C::K2_OnStartSimulateFire() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Weapon_Gatling.BP-Weapon_Gatling_C.K2_OnStartSimulateFire");

	struct K2_OnStartSimulateFire_Params {
		
	}; K2_OnStartSimulateFire_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Weapon_Gatling.BP-Weapon_Gatling_C.K2_OnEndSimulateFire
inline void ABP-Weapon_Gatling_C::K2_OnEndSimulateFire() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Weapon_Gatling.BP-Weapon_Gatling_C.K2_OnEndSimulateFire");

	struct K2_OnEndSimulateFire_Params {
		
	}; K2_OnEndSimulateFire_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Weapon_Gatling.BP-Weapon_Gatling_C.ExecuteUbergraph_BP-Weapon_Gatling
inline void ABP-Weapon_Gatling_C::ExecuteUbergraph_BP-Weapon_Gatling(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Weapon_Gatling.BP-Weapon_Gatling_C.ExecuteUbergraph_BP-Weapon_Gatling");

	struct ExecuteUbergraph_BP-Weapon_Gatling_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-Weapon_Gatling_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

