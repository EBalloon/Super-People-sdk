// BlueprintGeneratedClass BP-ProjectileGrenade_MolotovCocktail.BP-ProjectileGrenade_MolotovCocktail_C
class ABP-ProjectileGrenade_MolotovCocktail_C : public ABravoHotelProjectileGrenadeMolotovCocktail {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7F8 (8)
	float TextureScale; // 0x800 (4)
	float CollisionSize; // 0x804 (4)

	void ActiveThrowingProjectileMainEffect(); // Function BP-ProjectileGrenade_MolotovCocktail.BP-ProjectileGrenade_MolotovCocktail_C.ActiveThrowingProjectileMainEffect(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_BP-ProjectileGrenade_MolotovCocktail(int32_t EntryPoint); // Function BP-ProjectileGrenade_MolotovCocktail.BP-ProjectileGrenade_MolotovCocktail_C.ExecuteUbergraph_BP-ProjectileGrenade_MolotovCocktail(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
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

