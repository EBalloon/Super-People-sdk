// BlueprintGeneratedClass BP-Weapon_M16A4_LV6.BP-Weapon_M16A4_LV6_C
class ABP-Weapon_M16A4_LV6_C : public ABP-Weapon_M16A4_LV1_C {

public:

	struct Unknown UberGraphFrame; // 0x22B0 (8)

	void ReceiveBeginPlay(); // Function BP-Weapon_M16A4_LV6.BP-Weapon_M16A4_LV6_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_BP-Weapon_M16A4_LV6(int32_t EntryPoint); // Function BP-Weapon_M16A4_LV6.BP-Weapon_M16A4_LV6_C.ExecuteUbergraph_BP-Weapon_M16A4_LV6(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
};

// Function BP-Weapon_M16A4_LV6.BP-Weapon_M16A4_LV6_C.ReceiveBeginPlay
inline void ABP-Weapon_M16A4_LV6_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Weapon_M16A4_LV6.BP-Weapon_M16A4_LV6_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Weapon_M16A4_LV6.BP-Weapon_M16A4_LV6_C.ExecuteUbergraph_BP-Weapon_M16A4_LV6
inline void ABP-Weapon_M16A4_LV6_C::ExecuteUbergraph_BP-Weapon_M16A4_LV6(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Weapon_M16A4_LV6.BP-Weapon_M16A4_LV6_C.ExecuteUbergraph_BP-Weapon_M16A4_LV6");

	struct ExecuteUbergraph_BP-Weapon_M16A4_LV6_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-Weapon_M16A4_LV6_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

