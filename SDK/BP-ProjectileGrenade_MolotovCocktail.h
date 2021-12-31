// BlueprintGeneratedClass BP-ProjectileGrenade_MolotovCocktail.BP-ProjectileGrenade_MolotovCocktail_C
class ABP-ProjectileGrenade_MolotovCocktail_C : public ABravoHotelProjectileGrenadeMolotovCocktail {

public:

	struct Unknown UberGraphFrame; // 0x7F0 (8)
	float TextureScale; // 0x7F8 (4)
	float CollisionSize; // 0x7FC (4)

	void ActiveThrowingProjectileMainEffect(); // Function BP-ProjectileGrenade_MolotovCocktail.BP-ProjectileGrenade_MolotovCocktail_C.ActiveThrowingProjectileMainEffect(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_BP-ProjectileGrenade_MolotovCocktail(int32_t EntryPoint); // Function BP-ProjectileGrenade_MolotovCocktail.BP-ProjectileGrenade_MolotovCocktail_C.ExecuteUbergraph_BP-ProjectileGrenade_MolotovCocktail(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function BP-ProjectileGrenade_MolotovCocktail.BP-ProjectileGrenade_MolotovCocktail_C.ActiveThrowingProjectileMainEffect
inline void ABP-ProjectileGrenade_MolotovCocktail_C::ActiveThrowingProjectileMainEffect() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-ProjectileGrenade_MolotovCocktail.BP-ProjectileGrenade_MolotovCocktail_C.ActiveThrowingProjectileMainEffect");

	struct ActiveThrowingProjectileMainEffect_Params {
		
	}; ActiveThrowingProjectileMainEffect_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-ProjectileGrenade_MolotovCocktail.BP-ProjectileGrenade_MolotovCocktail_C.ExecuteUbergraph_BP-ProjectileGrenade_MolotovCocktail
inline void ABP-ProjectileGrenade_MolotovCocktail_C::ExecuteUbergraph_BP-ProjectileGrenade_MolotovCocktail(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-ProjectileGrenade_MolotovCocktail.BP-ProjectileGrenade_MolotovCocktail_C.ExecuteUbergraph_BP-ProjectileGrenade_MolotovCocktail");

	struct ExecuteUbergraph_BP-ProjectileGrenade_MolotovCocktail_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-ProjectileGrenade_MolotovCocktail_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

