// AnimBlueprintGeneratedClass ABP-Riverine.ABP-Riverine_C
class UABP-Riverine_C : public UBravoHotelVehicleAnimInstance {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0xA30 (8)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xA38 (48)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose_2; // 0xA68 (16)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0xA78 (32)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xA98 (264)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xBA0 (160)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0xC40 (16)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xC50 (32)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP-Riverine.ABP-Riverine_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP-Riverine.ABP-Riverine_C.BlueprintUpdateAnimation(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_ABP-Riverine(int32_t EntryPoint); // Function ABP-Riverine.ABP-Riverine_C.ExecuteUbergraph_ABP-Riverine(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function ABP-Riverine.ABP-Riverine_C.AnimGraph
inline void UABP-Riverine_C::AnimGraph(struct FPoseLink& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Riverine.ABP-Riverine_C.AnimGraph");

	struct AnimGraph_Params {
		struct FPoseLink& AnimGraph;
	}; AnimGraph_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnimGraph = Params.AnimGraph;

}

// Function ABP-Riverine.ABP-Riverine_C.BlueprintUpdateAnimation
inline void UABP-Riverine_C::BlueprintUpdateAnimation(float DeltaTimeX) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Riverine.ABP-Riverine_C.BlueprintUpdateAnimation");

	struct BlueprintUpdateAnimation_Params {
		float DeltaTimeX;
	}; BlueprintUpdateAnimation_Params Params;

	Params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ABP-Riverine.ABP-Riverine_C.ExecuteUbergraph_ABP-Riverine
inline void UABP-Riverine_C::ExecuteUbergraph_ABP-Riverine(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Riverine.ABP-Riverine_C.ExecuteUbergraph_ABP-Riverine");

	struct ExecuteUbergraph_ABP-Riverine_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ABP-Riverine_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

