// AnimBlueprintGeneratedClass ABP_StingRay.ABP_StingRay_C
class UABP_StingRay_C : public UBravoHotelVehicleAnimInstance {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0xA40 (8)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xA48 (264)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xB50 (160)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose_2; // 0xBF0 (16)
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier; // 0xC00 (240)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0xCF0 (32)
	struct FAnimNode_WheelHandler AnimGraphNode_WheelHandler; // 0xD10 (224)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xDF0 (32)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0xE10 (16)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xE20 (48)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_StingRay.ABP_StingRay_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_StingRay.ABP_StingRay_C.BlueprintUpdateAnimation(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_ABP_StingRay(int32_t EntryPoint); // Function ABP_StingRay.ABP_StingRay_C.ExecuteUbergraph_ABP_StingRay(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function ABP_StingRay.ABP_StingRay_C.AnimGraph
inline void UABP_StingRay_C::AnimGraph(struct FPoseLink& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP_StingRay.ABP_StingRay_C.AnimGraph");

	struct AnimGraph_Params {
		struct FPoseLink& AnimGraph;
	}; AnimGraph_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnimGraph = Params.AnimGraph;

}

// Function ABP_StingRay.ABP_StingRay_C.BlueprintUpdateAnimation
inline void UABP_StingRay_C::BlueprintUpdateAnimation(float DeltaTimeX) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP_StingRay.ABP_StingRay_C.BlueprintUpdateAnimation");

	struct BlueprintUpdateAnimation_Params {
		float DeltaTimeX;
	}; BlueprintUpdateAnimation_Params Params;

	Params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ABP_StingRay.ABP_StingRay_C.ExecuteUbergraph_ABP_StingRay
inline void UABP_StingRay_C::ExecuteUbergraph_ABP_StingRay(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP_StingRay.ABP_StingRay_C.ExecuteUbergraph_ABP_StingRay");

	struct ExecuteUbergraph_ABP_StingRay_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ABP_StingRay_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

