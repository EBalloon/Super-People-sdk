// AnimBlueprintGeneratedClass ABP_StingRay.ABP_StingRay_C
class UABP_StingRay_C : public UBravoHotelVehicleAnimInstance {

public:

	struct Unknown UberGraphFrame; // 0xA30 (8)
	struct Unknown AnimGraphNode_ModifyBone; // 0xA38 (264)
	struct Unknown AnimGraphNode_BlendListByBool; // 0xB40 (160)
	struct Unknown AnimGraphNode_MeshRefPose_2; // 0xBE0 (16)
	struct Unknown AnimGraphNode_RotationMultiplier; // 0xBF0 (240)
	struct Unknown AnimGraphNode_ComponentToLocalSpace_2; // 0xCE0 (32)
	struct Unknown AnimGraphNode_WheelHandler; // 0xD00 (224)
	struct Unknown AnimGraphNode_ComponentToLocalSpace; // 0xDE0 (32)
	struct Unknown AnimGraphNode_MeshRefPose; // 0xE00 (16)
	struct Unknown AnimGraphNode_Root; // 0xE10 (48)

	void AnimGraph(struct Unknown& AnimGraph); // Function ABP_StingRay.ABP_StingRay_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_StingRay.ABP_StingRay_C.BlueprintUpdateAnimation(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_ABP_StingRay(int32_t EntryPoint); // Function ABP_StingRay.ABP_StingRay_C.ExecuteUbergraph_ABP_StingRay(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
};

// Function ABP_StingRay.ABP_StingRay_C.AnimGraph
inline void UABP_StingRay_C::AnimGraph(struct Unknown& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP_StingRay.ABP_StingRay_C.AnimGraph");

	struct AnimGraph_Params {
		struct Unknown& AnimGraph;
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

