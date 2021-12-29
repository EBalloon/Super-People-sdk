// BlueprintGeneratedClass BP-OutGameParachute.BP-OutGameParachute_C
class ABP-OutGameParachute_C : public ABravoHotelOutGameParachuteActor {

public:

	struct Unknown UberGraphFrame; // 0x310 (8)
	struct Unknown ParachuteBag_SkeletalMesh; // 0x318 (8)
	struct Unknown Parachute_SkeletalMesh; // 0x320 (8)
	struct Unknown DefaultSceneRoot; // 0x328 (8)

	void ReceiveBeginPlay(); // Function BP-OutGameParachute.BP-OutGameParachute_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SetSkinMaterial(struct Unknown Material); // Function BP-OutGameParachute.BP-OutGameParachute_C.SetSkinMaterial(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_BP-OutGameParachute(int32_t EntryPoint); // Function BP-OutGameParachute.BP-OutGameParachute_C.ExecuteUbergraph_BP-OutGameParachute(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function BP-OutGameParachute.BP-OutGameParachute_C.ReceiveBeginPlay
inline void ABP-OutGameParachute_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-OutGameParachute.BP-OutGameParachute_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-OutGameParachute.BP-OutGameParachute_C.SetSkinMaterial
inline void ABP-OutGameParachute_C::SetSkinMaterial(struct Unknown Material) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-OutGameParachute.BP-OutGameParachute_C.SetSkinMaterial");

	struct SetSkinMaterial_Params {
		struct Unknown Material;
	}; SetSkinMaterial_Params Params;

	Params.Material = Material;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-OutGameParachute.BP-OutGameParachute_C.ExecuteUbergraph_BP-OutGameParachute
inline void ABP-OutGameParachute_C::ExecuteUbergraph_BP-OutGameParachute(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-OutGameParachute.BP-OutGameParachute_C.ExecuteUbergraph_BP-OutGameParachute");

	struct ExecuteUbergraph_BP-OutGameParachute_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-OutGameParachute_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

