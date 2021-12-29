// BlueprintGeneratedClass BP-Projectile_FireWallCell.BP-Projectile_FireWallCell_C
class ABP-Projectile_FireWallCell_C : public ABravoHotelProjectileMolotovFireCell {

public:

	struct Unknown UberGraphFrame; // 0x398 (8)
	float TextureScale; // 0x3A0 (4)
	float BurnArea; // 0x3A4 (4)

	void ReceiveBeginPlay(); // Function BP-Projectile_FireWallCell.BP-Projectile_FireWallCell_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_BP-Projectile_FireWallCell(int32_t EntryPoint); // Function BP-Projectile_FireWallCell.BP-Projectile_FireWallCell_C.ExecuteUbergraph_BP-Projectile_FireWallCell(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function BP-Projectile_FireWallCell.BP-Projectile_FireWallCell_C.ReceiveBeginPlay
inline void ABP-Projectile_FireWallCell_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Projectile_FireWallCell.BP-Projectile_FireWallCell_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Projectile_FireWallCell.BP-Projectile_FireWallCell_C.ExecuteUbergraph_BP-Projectile_FireWallCell
inline void ABP-Projectile_FireWallCell_C::ExecuteUbergraph_BP-Projectile_FireWallCell(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Projectile_FireWallCell.BP-Projectile_FireWallCell_C.ExecuteUbergraph_BP-Projectile_FireWallCell");

	struct ExecuteUbergraph_BP-Projectile_FireWallCell_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-Projectile_FireWallCell_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

