// BlueprintGeneratedClass BP-Weapon_M16A4_LV6_A.BP-Weapon_M16A4_LV6_A_C
class ABP-Weapon_M16A4_LV6_A_C : public ABP-Weapon_M16A4_LV1_C {

public:

	struct Unknown UberGraphFrame; // 0x22A0 (8)

	void ReceiveBeginPlay(); // Function BP-Weapon_M16A4_LV6_A.BP-Weapon_M16A4_LV6_A_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_BP-Weapon_M16A4_LV6_A(int32_t EntryPoint); // Function BP-Weapon_M16A4_LV6_A.BP-Weapon_M16A4_LV6_A_C.ExecuteUbergraph_BP-Weapon_M16A4_LV6_A(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function BP-Weapon_M16A4_LV6_A.BP-Weapon_M16A4_LV6_A_C.ReceiveBeginPlay
inline void ABP-Weapon_M16A4_LV6_A_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Weapon_M16A4_LV6_A.BP-Weapon_M16A4_LV6_A_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Weapon_M16A4_LV6_A.BP-Weapon_M16A4_LV6_A_C.ExecuteUbergraph_BP-Weapon_M16A4_LV6_A
inline void ABP-Weapon_M16A4_LV6_A_C::ExecuteUbergraph_BP-Weapon_M16A4_LV6_A(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Weapon_M16A4_LV6_A.BP-Weapon_M16A4_LV6_A_C.ExecuteUbergraph_BP-Weapon_M16A4_LV6_A");

	struct ExecuteUbergraph_BP-Weapon_M16A4_LV6_A_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-Weapon_M16A4_LV6_A_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

