// BlueprintGeneratedClass BP-Weapon_M16A4_LV7_A.BP-Weapon_M16A4_LV7_A_C
class ABP-Weapon_M16A4_LV7_A_C : public ABP-Weapon_M16A4_LV1_C {

public:

	struct Unknown UberGraphFrame; // 0x22F0 (8)

	void ReceiveBeginPlay(); // Function BP-Weapon_M16A4_LV7_A.BP-Weapon_M16A4_LV7_A_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_BP-Weapon_M16A4_LV7_A(int32_t EntryPoint); // Function BP-Weapon_M16A4_LV7_A.BP-Weapon_M16A4_LV7_A_C.ExecuteUbergraph_BP-Weapon_M16A4_LV7_A(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function BP-Weapon_M16A4_LV7_A.BP-Weapon_M16A4_LV7_A_C.ReceiveBeginPlay
inline void ABP-Weapon_M16A4_LV7_A_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Weapon_M16A4_LV7_A.BP-Weapon_M16A4_LV7_A_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Weapon_M16A4_LV7_A.BP-Weapon_M16A4_LV7_A_C.ExecuteUbergraph_BP-Weapon_M16A4_LV7_A
inline void ABP-Weapon_M16A4_LV7_A_C::ExecuteUbergraph_BP-Weapon_M16A4_LV7_A(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Weapon_M16A4_LV7_A.BP-Weapon_M16A4_LV7_A_C.ExecuteUbergraph_BP-Weapon_M16A4_LV7_A");

	struct ExecuteUbergraph_BP-Weapon_M16A4_LV7_A_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-Weapon_M16A4_LV7_A_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

