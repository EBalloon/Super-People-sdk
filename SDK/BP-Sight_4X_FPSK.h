// BlueprintGeneratedClass BP-Sight_4X_FPSK.BP-Sight_4X_FPSK_C
class ABP-Sight_4X_FPSK_C : public ABP-Sight_Base_C {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x428 (8)
	struct UStaticMeshComponent Sphere; // 0x430 (8)

	void SetTexture5mm(); // Function BP-Sight_4X_FPSK.BP-Sight_4X_FPSK_C.SetTexture5mm(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_BP-Sight_4X_FPSK(int32_t EntryPoint); // Function BP-Sight_4X_FPSK.BP-Sight_4X_FPSK_C.ExecuteUbergraph_BP-Sight_4X_FPSK(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function BP-Sight_4X_FPSK.BP-Sight_4X_FPSK_C.SetTexture5mm
inline void ABP-Sight_4X_FPSK_C::SetTexture5mm() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Sight_4X_FPSK.BP-Sight_4X_FPSK_C.SetTexture5mm");

	struct SetTexture5mm_Params {
		
	}; SetTexture5mm_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Sight_4X_FPSK.BP-Sight_4X_FPSK_C.ExecuteUbergraph_BP-Sight_4X_FPSK
inline void ABP-Sight_4X_FPSK_C::ExecuteUbergraph_BP-Sight_4X_FPSK(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Sight_4X_FPSK.BP-Sight_4X_FPSK_C.ExecuteUbergraph_BP-Sight_4X_FPSK");

	struct ExecuteUbergraph_BP-Sight_4X_FPSK_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-Sight_4X_FPSK_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

