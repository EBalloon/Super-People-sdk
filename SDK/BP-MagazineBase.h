// BlueprintGeneratedClass BP-MagazineBase.BP-MagazineBase_C
class ABP-MagazineBase_C : public ABravoHotelMagazineForDrop {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370 (8)
	float PhysicsSimulateTime; // 0x378 (4)
	float LifeTime; // 0x37C (4)
	float AddImpulse; // 0x380 (4)
	char Stance; // 0x384 (1)
	float AddImpulse_Crouched; // 0x388 (4)
	float AddImpulse_Proned; // 0x38C (4)

	void ReceiveBeginPlay(); // Function BP-MagazineBase.BP-MagazineBase_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_BP-MagazineBase(int32_t EntryPoint); // Function BP-MagazineBase.BP-MagazineBase_C.ExecuteUbergraph_BP-MagazineBase(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function BP-MagazineBase.BP-MagazineBase_C.ReceiveBeginPlay
inline void ABP-MagazineBase_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-MagazineBase.BP-MagazineBase_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-MagazineBase.BP-MagazineBase_C.ExecuteUbergraph_BP-MagazineBase
inline void ABP-MagazineBase_C::ExecuteUbergraph_BP-MagazineBase(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-MagazineBase.BP-MagazineBase_C.ExecuteUbergraph_BP-MagazineBase");

	struct ExecuteUbergraph_BP-MagazineBase_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-MagazineBase_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

