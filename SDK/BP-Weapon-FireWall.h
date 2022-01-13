// BlueprintGeneratedClass BP-Weapon-FireWall.BP-Weapon-FireWall_C
class ABP-Weapon-FireWall_C : public ABP-GrenadeWeaponBase_C {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1FD0 (8)
	struct UParticleSystemComponent ParticleSystem; // 0x1FD8 (8)

	void K2_OnEquip(); // Function BP-Weapon-FireWall.BP-Weapon-FireWall_C.K2_OnEquip(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void K2_OnUnEquip(); // Function BP-Weapon-FireWall.BP-Weapon-FireWall_C.K2_OnUnEquip(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_BP-Weapon-FireWall(int32_t EntryPoint); // Function BP-Weapon-FireWall.BP-Weapon-FireWall_C.ExecuteUbergraph_BP-Weapon-FireWall(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function BP-Weapon-FireWall.BP-Weapon-FireWall_C.K2_OnEquip
inline void ABP-Weapon-FireWall_C::K2_OnEquip() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Weapon-FireWall.BP-Weapon-FireWall_C.K2_OnEquip");

	struct K2_OnEquip_Params {
		
	}; K2_OnEquip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Weapon-FireWall.BP-Weapon-FireWall_C.K2_OnUnEquip
inline void ABP-Weapon-FireWall_C::K2_OnUnEquip() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Weapon-FireWall.BP-Weapon-FireWall_C.K2_OnUnEquip");

	struct K2_OnUnEquip_Params {
		
	}; K2_OnUnEquip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Weapon-FireWall.BP-Weapon-FireWall_C.ExecuteUbergraph_BP-Weapon-FireWall
inline void ABP-Weapon-FireWall_C::ExecuteUbergraph_BP-Weapon-FireWall(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Weapon-FireWall.BP-Weapon-FireWall_C.ExecuteUbergraph_BP-Weapon-FireWall");

	struct ExecuteUbergraph_BP-Weapon-FireWall_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-Weapon-FireWall_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

