// AnimBlueprintGeneratedClass ABP-Motorcycle.ABP-Motorcycle_C
class UABP-Motorcycle_C : public UBravoHotelVehicleAnimInstance {

public:

	struct Unknown UberGraphFrame; // 0xA20 (8)
	struct Unknown AnimGraphNode_ComponentToLocalSpace_2; // 0xA28 (32)
	struct Unknown AnimGraphNode_MeshRefPose_2; // 0xA48 (16)
	struct Unknown AnimGraphNode_MeshRefPose; // 0xA58 (16)
	struct Unknown AnimGraphNode_WheelHandler; // 0xA68 (224)
	struct Unknown AnimGraphNode_ComponentToLocalSpace; // 0xB48 (32)
	struct Unknown AnimGraphNode_ModifyBone_2; // 0xB68 (264)
	struct Unknown AnimGraphNode_BlendListByBool; // 0xC70 (160)
	struct Unknown AnimGraphNode_Root; // 0xD10 (48)
	struct Unknown AnimGraphNode_RotationMultiplier_3; // 0xD40 (240)
	struct Unknown AnimGraphNode_RotationMultiplier_2; // 0xE30 (240)
	struct Unknown AnimGraphNode_BoneDrivenController_4; // 0xF20 (280)
	struct Unknown AnimGraphNode_CopyBone; // 0x1038 (240)
	struct Unknown AnimGraphNode_RotationMultiplier; // 0x1128 (240)
	struct Unknown AnimGraphNode_BoneDrivenController_3; // 0x1218 (280)
	struct Unknown AnimGraphNode_BoneDrivenController_2; // 0x1330 (280)
	struct Unknown AnimGraphNode_BoneDrivenController; // 0x1448 (280)
	struct Unknown AnimGraphNode_ModifyBone; // 0x1560 (264)
	struct Unknown CV-Motorcycle_Rotate_Center; // 0x1668 (8)
	struct Unknown RotateCenterValue; // 0x1670 (12)

	void AnimGraph(struct Unknown& AnimGraph); // Function ABP-Motorcycle.ABP-Motorcycle_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP-Motorcycle.ABP-Motorcycle_C.BlueprintUpdateAnimation(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_ABP-Motorcycle(int32_t EntryPoint); // Function ABP-Motorcycle.ABP-Motorcycle_C.ExecuteUbergraph_ABP-Motorcycle(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function ABP-Motorcycle.ABP-Motorcycle_C.AnimGraph
inline void UABP-Motorcycle_C::AnimGraph(struct Unknown& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Motorcycle.ABP-Motorcycle_C.AnimGraph");

	struct AnimGraph_Params {
		struct Unknown& AnimGraph;
	}; AnimGraph_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnimGraph = Params.AnimGraph;

}

// Function ABP-Motorcycle.ABP-Motorcycle_C.BlueprintUpdateAnimation
inline void UABP-Motorcycle_C::BlueprintUpdateAnimation(float DeltaTimeX) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Motorcycle.ABP-Motorcycle_C.BlueprintUpdateAnimation");

	struct BlueprintUpdateAnimation_Params {
		float DeltaTimeX;
	}; BlueprintUpdateAnimation_Params Params;

	Params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ABP-Motorcycle.ABP-Motorcycle_C.ExecuteUbergraph_ABP-Motorcycle
inline void UABP-Motorcycle_C::ExecuteUbergraph_ABP-Motorcycle(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Motorcycle.ABP-Motorcycle_C.ExecuteUbergraph_ABP-Motorcycle");

	struct ExecuteUbergraph_ABP-Motorcycle_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ABP-Motorcycle_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

