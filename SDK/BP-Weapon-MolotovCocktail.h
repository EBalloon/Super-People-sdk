// BlueprintGeneratedClass BP-Weapon-MolotovCocktail.BP-Weapon-MolotovCocktail_C
class ABP-Weapon-MolotovCocktail_C : public ABP-GrenadeWeaponBase_C {

public:

	struct Unknown UberGraphFrame; // 0x1FE0 (8)
	struct Unknown ParticleSystem; // 0x1FE8 (8)

	void K2_OnEquip(); // Function BP-Weapon-MolotovCocktail.BP-Weapon-MolotovCocktail_C.K2_OnEquip(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void K2_OnUnEquip(); // Function BP-Weapon-MolotovCocktail.BP-Weapon-MolotovCocktail_C.K2_OnUnEquip(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_BP-Weapon-MolotovCocktail(int32_t EntryPoint); // Function BP-Weapon-MolotovCocktail.BP-Weapon-MolotovCocktail_C.ExecuteUbergraph_BP-Weapon-MolotovCocktail(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
};

// Function BP-Weapon-MolotovCocktail.BP-Weapon-MolotovCocktail_C.K2_OnEquip
inline void ABP-Weapon-MolotovCocktail_C::K2_OnEquip() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Weapon-MolotovCocktail.BP-Weapon-MolotovCocktail_C.K2_OnEquip");

	struct K2_OnEquip_Params {
		
	}; K2_OnEquip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Weapon-MolotovCocktail.BP-Weapon-MolotovCocktail_C.K2_OnUnEquip
inline void ABP-Weapon-MolotovCocktail_C::K2_OnUnEquip() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Weapon-MolotovCocktail.BP-Weapon-MolotovCocktail_C.K2_OnUnEquip");

	struct K2_OnUnEquip_Params {
		
	}; K2_OnUnEquip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Weapon-MolotovCocktail.BP-Weapon-MolotovCocktail_C.ExecuteUbergraph_BP-Weapon-MolotovCocktail
inline void ABP-Weapon-MolotovCocktail_C::ExecuteUbergraph_BP-Weapon-MolotovCocktail(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Weapon-MolotovCocktail.BP-Weapon-MolotovCocktail_C.ExecuteUbergraph_BP-Weapon-MolotovCocktail");

	struct ExecuteUbergraph_BP-Weapon-MolotovCocktail_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-Weapon-MolotovCocktail_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

