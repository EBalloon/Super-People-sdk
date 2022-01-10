// BlueprintGeneratedClass BP-Sight_4X_FPSK.BP-Sight_4X_FPSK_C
class ABP-Sight_4X_FPSK_C : public ABP-Sight_Base_C {

public:

	struct Unknown UberGraphFrame; // 0x410 (8)
	struct Unknown Sphere; // 0x418 (8)

	void SetTexture5mm(); // Function BP-Sight_4X_FPSK.BP-Sight_4X_FPSK_C.SetTexture5mm(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_BP-Sight_4X_FPSK(int32_t EntryPoint); // Function BP-Sight_4X_FPSK.BP-Sight_4X_FPSK_C.ExecuteUbergraph_BP-Sight_4X_FPSK(Final|UbergraphFunction) // <Game_BE.exe+0x2B812B0>
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

