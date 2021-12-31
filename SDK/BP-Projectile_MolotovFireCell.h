// BlueprintGeneratedClass BP-Projectile_MolotovFireCell.BP-Projectile_MolotovFireCell_C
class ABP-Projectile_MolotovFireCell_C : public ABravoHotelProjectileMolotovFireCell {

public:

	struct Unknown UberGraphFrame; // 0x398 (8)
	float TextureScale; // 0x3A0 (4)
	float BurnArea; // 0x3A4 (4)

	void ReceiveBeginPlay(); // Function BP-Projectile_MolotovFireCell.BP-Projectile_MolotovFireCell_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_BP-Projectile_MolotovFireCell(int32_t EntryPoint); // Function BP-Projectile_MolotovFireCell.BP-Projectile_MolotovFireCell_C.ExecuteUbergraph_BP-Projectile_MolotovFireCell(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function BP-Projectile_MolotovFireCell.BP-Projectile_MolotovFireCell_C.ReceiveBeginPlay
inline void ABP-Projectile_MolotovFireCell_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Projectile_MolotovFireCell.BP-Projectile_MolotovFireCell_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Projectile_MolotovFireCell.BP-Projectile_MolotovFireCell_C.ExecuteUbergraph_BP-Projectile_MolotovFireCell
inline void ABP-Projectile_MolotovFireCell_C::ExecuteUbergraph_BP-Projectile_MolotovFireCell(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Projectile_MolotovFireCell.BP-Projectile_MolotovFireCell_C.ExecuteUbergraph_BP-Projectile_MolotovFireCell");

	struct ExecuteUbergraph_BP-Projectile_MolotovFireCell_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-Projectile_MolotovFireCell_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

