// AnimBlueprintGeneratedClass ABP-C1911.ABP-C1911_C
class UABP-C1911_C : public UBravoHotelAnimInstanceWeapon {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330 (8)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x338 (48)
	struct FAnimNode_Slot AnimGraphNode_Slot_3; // 0x368 (72)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x3B0 (200)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose_3; // 0x478 (24)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x490 (72)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose_2; // 0x4D8 (24)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x4F0 (160)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x590 (72)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x5D8 (24)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP-C1911.ABP-C1911_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_ABP-C1911(int32_t EntryPoint); // Function ABP-C1911.ABP-C1911_C.ExecuteUbergraph_ABP-C1911(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function ABP-C1911.ABP-C1911_C.AnimGraph
inline void UABP-C1911_C::AnimGraph(struct FPoseLink& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-C1911.ABP-C1911_C.AnimGraph");

	struct AnimGraph_Params {
		struct FPoseLink& AnimGraph;
	}; AnimGraph_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnimGraph = Params.AnimGraph;

}

// Function ABP-C1911.ABP-C1911_C.ExecuteUbergraph_ABP-C1911
inline void UABP-C1911_C::ExecuteUbergraph_ABP-C1911(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-C1911.ABP-C1911_C.ExecuteUbergraph_ABP-C1911");

	struct ExecuteUbergraph_ABP-C1911_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ABP-C1911_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

