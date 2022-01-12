// BlueprintGeneratedClass BP-OutGameParachute.BP-OutGameParachute_C
class ABP-OutGameParachute_C : public ABravoHotelOutGameParachuteActor {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318 (8)
	struct USkeletalMeshComponent ParachuteBag_SkeletalMesh; // 0x320 (8)
	struct USkeletalMeshComponent Parachute_SkeletalMesh; // 0x328 (8)
	struct USceneComponent DefaultSceneRoot; // 0x330 (8)

	void ReceiveBeginPlay(); // Function BP-OutGameParachute.BP-OutGameParachute_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetSkinMaterial(struct UMaterialInterface Material); // Function BP-OutGameParachute.BP-OutGameParachute_C.SetSkinMaterial(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_BP-OutGameParachute(int32_t EntryPoint); // Function BP-OutGameParachute.BP-OutGameParachute_C.ExecuteUbergraph_BP-OutGameParachute(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
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
inline void ABP-OutGameParachute_C::SetSkinMaterial(struct UMaterialInterface Material) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-OutGameParachute.BP-OutGameParachute_C.SetSkinMaterial");

	struct SetSkinMaterial_Params {
		struct UMaterialInterface Material;
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

