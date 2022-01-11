// BlueprintGeneratedClass BP-Weapon_M16A4_LV7.BP-Weapon_M16A4_LV7_C
class ABP-Weapon_M16A4_LV7_C : public ABP-Weapon_M16A4_LV1_C {

public:

	struct Unknown UberGraphFrame; // 0x22B0 (8)

	void ReceiveBeginPlay(); // Function BP-Weapon_M16A4_LV7.BP-Weapon_M16A4_LV7_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_BP-Weapon_M16A4_LV7(int32_t EntryPoint); // Function BP-Weapon_M16A4_LV7.BP-Weapon_M16A4_LV7_C.ExecuteUbergraph_BP-Weapon_M16A4_LV7(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
};

// Function BP-Weapon_M16A4_LV7.BP-Weapon_M16A4_LV7_C.ReceiveBeginPlay
inline void ABP-Weapon_M16A4_LV7_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Weapon_M16A4_LV7.BP-Weapon_M16A4_LV7_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Weapon_M16A4_LV7.BP-Weapon_M16A4_LV7_C.ExecuteUbergraph_BP-Weapon_M16A4_LV7
inline void ABP-Weapon_M16A4_LV7_C::ExecuteUbergraph_BP-Weapon_M16A4_LV7(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Weapon_M16A4_LV7.BP-Weapon_M16A4_LV7_C.ExecuteUbergraph_BP-Weapon_M16A4_LV7");

	struct ExecuteUbergraph_BP-Weapon_M16A4_LV7_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-Weapon_M16A4_LV7_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

