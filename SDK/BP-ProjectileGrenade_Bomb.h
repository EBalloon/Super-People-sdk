// BlueprintGeneratedClass BP-ProjectileGrenade_Bomb.BP-ProjectileGrenade_Bomb_C
class ABP-ProjectileGrenade_Bomb_C : public ABravoHotelProjectileGrenadeBomb {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6C8 (8)
	struct UAkComponent Ak; // 0x6D0 (8)

	void BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent HitComponent, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP-ProjectileGrenade_Bomb.BP-ProjectileGrenade_Bomb_C.BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_BP-ProjectileGrenade_Bomb(int32_t EntryPoint); // Function BP-ProjectileGrenade_Bomb.BP-ProjectileGrenade_Bomb_C.ExecuteUbergraph_BP-ProjectileGrenade_Bomb(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function BP-ProjectileGrenade_Bomb.BP-ProjectileGrenade_Bomb_C.BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
inline void ABP-ProjectileGrenade_Bomb_C::BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent HitComponent, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-ProjectileGrenade_Bomb.BP-ProjectileGrenade_Bomb_C.BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	struct BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params {
		struct UPrimitiveComponent HitComponent;
		struct UActor OtherActor;
		struct UPrimitiveComponent OtherComp;
		struct FVector NormalImpulse;
		struct FHitResult& Hit;
	}; BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params Params;

	Params.HitComponent = HitComponent;
	Params.OtherActor = OtherActor;
	Params.OtherComp = OtherComp;
	Params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Hit = Params.Hit;

}

// Function BP-ProjectileGrenade_Bomb.BP-ProjectileGrenade_Bomb_C.ExecuteUbergraph_BP-ProjectileGrenade_Bomb
inline void ABP-ProjectileGrenade_Bomb_C::ExecuteUbergraph_BP-ProjectileGrenade_Bomb(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-ProjectileGrenade_Bomb.BP-ProjectileGrenade_Bomb_C.ExecuteUbergraph_BP-ProjectileGrenade_Bomb");

	struct ExecuteUbergraph_BP-ProjectileGrenade_Bomb_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-ProjectileGrenade_Bomb_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

