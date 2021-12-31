// BlueprintGeneratedClass BP-Projectile_FlameThrowerFireCell.BP-Projectile_FlameThrowerFireCell_C
class ABP-Projectile_FlameThrowerFireCell_C : public ABravoHotelProjectileMolotovFireCell {

public:

	struct Unknown UberGraphFrame; // 0x398 (8)
	float TextureScale; // 0x3A0 (4)
	float BurnArea; // 0x3A4 (4)

	void ReceiveBeginPlay(); // Function BP-Projectile_FlameThrowerFireCell.BP-Projectile_FlameThrowerFireCell_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_BP-Projectile_FlameThrowerFireCell(int32_t EntryPoint); // Function BP-Projectile_FlameThrowerFireCell.BP-Projectile_FlameThrowerFireCell_C.ExecuteUbergraph_BP-Projectile_FlameThrowerFireCell(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function BP-Projectile_FlameThrowerFireCell.BP-Projectile_FlameThrowerFireCell_C.ReceiveBeginPlay
inline void ABP-Projectile_FlameThrowerFireCell_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Projectile_FlameThrowerFireCell.BP-Projectile_FlameThrowerFireCell_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Projectile_FlameThrowerFireCell.BP-Projectile_FlameThrowerFireCell_C.ExecuteUbergraph_BP-Projectile_FlameThrowerFireCell
inline void ABP-Projectile_FlameThrowerFireCell_C::ExecuteUbergraph_BP-Projectile_FlameThrowerFireCell(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Projectile_FlameThrowerFireCell.BP-Projectile_FlameThrowerFireCell_C.ExecuteUbergraph_BP-Projectile_FlameThrowerFireCell");

	struct ExecuteUbergraph_BP-Projectile_FlameThrowerFireCell_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-Projectile_FlameThrowerFireCell_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

