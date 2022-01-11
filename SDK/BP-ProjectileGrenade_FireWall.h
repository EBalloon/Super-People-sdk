// BlueprintGeneratedClass BP-ProjectileGrenade_FireWall.BP-ProjectileGrenade_FireWall_C
class ABP-ProjectileGrenade_FireWall_C : public ABravoHotelProjectileGrenadeMolotovCocktail {

public:

	struct Unknown UberGraphFrame; // 0x7F8 (8)
	float TextureScale; // 0x800 (4)
	float CollisionSize; // 0x804 (4)

	void ActiveThrowingProjectileMainEffect(); // Function BP-ProjectileGrenade_FireWall.BP-ProjectileGrenade_FireWall_C.ActiveThrowingProjectileMainEffect(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_BP-ProjectileGrenade_FireWall(int32_t EntryPoint); // Function BP-ProjectileGrenade_FireWall.BP-ProjectileGrenade_FireWall_C.ExecuteUbergraph_BP-ProjectileGrenade_FireWall(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
};

// Function BP-ProjectileGrenade_FireWall.BP-ProjectileGrenade_FireWall_C.ActiveThrowingProjectileMainEffect
inline void ABP-ProjectileGrenade_FireWall_C::ActiveThrowingProjectileMainEffect() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-ProjectileGrenade_FireWall.BP-ProjectileGrenade_FireWall_C.ActiveThrowingProjectileMainEffect");

	struct ActiveThrowingProjectileMainEffect_Params {
		
	}; ActiveThrowingProjectileMainEffect_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-ProjectileGrenade_FireWall.BP-ProjectileGrenade_FireWall_C.ExecuteUbergraph_BP-ProjectileGrenade_FireWall
inline void ABP-ProjectileGrenade_FireWall_C::ExecuteUbergraph_BP-ProjectileGrenade_FireWall(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-ProjectileGrenade_FireWall.BP-ProjectileGrenade_FireWall_C.ExecuteUbergraph_BP-ProjectileGrenade_FireWall");

	struct ExecuteUbergraph_BP-ProjectileGrenade_FireWall_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-ProjectileGrenade_FireWall_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

