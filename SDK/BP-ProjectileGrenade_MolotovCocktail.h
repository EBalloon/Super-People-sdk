// BlueprintGeneratedClass BP-ProjectileGrenade_MolotovCocktail.BP-ProjectileGrenade_MolotovCocktail_C
class ABP-ProjectileGrenade_MolotovCocktail_C : public ABravoHotelProjectileGrenadeMolotovCocktail {

public:

	struct Unknown UberGraphFrame; // 0x7E0 (8)
	float TextureScale; // 0x7E8 (4)
	float CollisionSize; // 0x7EC (4)

	void ActiveThrowingProjectileMainEffect(); // Function BP-ProjectileGrenade_MolotovCocktail.BP-ProjectileGrenade_MolotovCocktail_C.ActiveThrowingProjectileMainEffect(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_BP-ProjectileGrenade_MolotovCocktail(int32_t EntryPoint); // Function BP-ProjectileGrenade_MolotovCocktail.BP-ProjectileGrenade_MolotovCocktail_C.ExecuteUbergraph_BP-ProjectileGrenade_MolotovCocktail(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B812B0>
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

