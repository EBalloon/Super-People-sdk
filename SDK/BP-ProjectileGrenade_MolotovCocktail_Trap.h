// BlueprintGeneratedClass BP-ProjectileGrenade_MolotovCocktail_Trap.BP-ProjectileGrenade_MolotovCocktail_Trap_C
class ABP-ProjectileGrenade_MolotovCocktail_Trap_C : public ABravoHotelProjectileGrenadeMolotovCocktail {

public:

	struct Unknown UberGraphFrame; // 0x7F0 (8)
	float TextureScale; // 0x7F8 (4)
	float CollisionSize; // 0x7FC (4)

	void ActiveThrowingProjectileMainEffect(); // Function BP-ProjectileGrenade_MolotovCocktail_Trap.BP-ProjectileGrenade_MolotovCocktail_Trap_C.ActiveThrowingProjectileMainEffect(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_BP-ProjectileGrenade_MolotovCocktail_Trap(int32_t EntryPoint); // Function BP-ProjectileGrenade_MolotovCocktail_Trap.BP-ProjectileGrenade_MolotovCocktail_Trap_C.ExecuteUbergraph_BP-ProjectileGrenade_MolotovCocktail_Trap(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function BP-ProjectileGrenade_MolotovCocktail_Trap.BP-ProjectileGrenade_MolotovCocktail_Trap_C.ActiveThrowingProjectileMainEffect
inline void ABP-ProjectileGrenade_MolotovCocktail_Trap_C::ActiveThrowingProjectileMainEffect() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-ProjectileGrenade_MolotovCocktail_Trap.BP-ProjectileGrenade_MolotovCocktail_Trap_C.ActiveThrowingProjectileMainEffect");

	struct ActiveThrowingProjectileMainEffect_Params {
		
	}; ActiveThrowingProjectileMainEffect_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-ProjectileGrenade_MolotovCocktail_Trap.BP-ProjectileGrenade_MolotovCocktail_Trap_C.ExecuteUbergraph_BP-ProjectileGrenade_MolotovCocktail_Trap
inline void ABP-ProjectileGrenade_MolotovCocktail_Trap_C::ExecuteUbergraph_BP-ProjectileGrenade_MolotovCocktail_Trap(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-ProjectileGrenade_MolotovCocktail_Trap.BP-ProjectileGrenade_MolotovCocktail_Trap_C.ExecuteUbergraph_BP-ProjectileGrenade_MolotovCocktail_Trap");

	struct ExecuteUbergraph_BP-ProjectileGrenade_MolotovCocktail_Trap_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-ProjectileGrenade_MolotovCocktail_Trap_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

