// BlueprintGeneratedClass BP-Weapon_M16A4_LV6.BP-Weapon_M16A4_LV6_C
class ABP-Weapon_M16A4_LV6_C : public ABP-Weapon_M16A4_LV1_C {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2330 (8)

	void ReceiveBeginPlay(); // Function BP-Weapon_M16A4_LV6.BP-Weapon_M16A4_LV6_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_BP-Weapon_M16A4_LV6(int32_t EntryPoint); // Function BP-Weapon_M16A4_LV6.BP-Weapon_M16A4_LV6_C.ExecuteUbergraph_BP-Weapon_M16A4_LV6(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
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

