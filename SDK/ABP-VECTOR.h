// AnimBlueprintGeneratedClass ABP-VECTOR.ABP-VECTOR_C
class UABP-VECTOR_C : public UBravoHotelAnimInstanceWeapon {

public:

	struct Unknown UberGraphFrame; // 0x330 (8)
	struct Unknown AnimGraphNode_Root; // 0x338 (48)
	struct Unknown AnimGraphNode_BlendListByEnum; // 0x368 (176)
	struct Unknown AnimGraphNode_SequencePlayer_4; // 0x418 (120)
	struct Unknown AnimGraphNode_SequencePlayer_3; // 0x490 (120)
	struct Unknown AnimGraphNode_SequencePlayer_2; // 0x508 (120)
	struct Unknown AnimGraphNode_SequencePlayer; // 0x580 (120)
	struct Unknown AnimGraphNode_Slot_4; // 0x5F8 (72)
	struct Unknown AnimGraphNode_TwoWayBlend; // 0x640 (200)
	struct Unknown AnimGraphNode_LayeredBoneBlend; // 0x708 (192)
	struct Unknown AnimGraphNode_LocalRefPose_3; // 0x7C8 (24)
	struct Unknown AnimGraphNode_Slot_3; // 0x7E0 (72)
	struct Unknown AnimGraphNode_LocalRefPose_2; // 0x828 (24)
	struct Unknown AnimGraphNode_Slot_2; // 0x840 (72)
	struct Unknown AnimGraphNode_Slot; // 0x888 (72)
	struct Unknown AnimGraphNode_LocalRefPose; // 0x8D0 (24)
	struct Unknown AnimGraphNode_BlendListByBool; // 0x8E8 (160)

	void AnimGraph(struct Unknown& AnimGraph); // Function ABP-VECTOR.ABP-VECTOR_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_ABP-VECTOR(int32_t EntryPoint); // Function ABP-VECTOR.ABP-VECTOR_C.ExecuteUbergraph_ABP-VECTOR(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function ABP-VECTOR.ABP-VECTOR_C.AnimGraph
inline void UABP-VECTOR_C::AnimGraph(struct Unknown& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-VECTOR.ABP-VECTOR_C.AnimGraph");

	struct AnimGraph_Params {
		struct Unknown& AnimGraph;
	}; AnimGraph_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnimGraph = Params.AnimGraph;

}

// Function ABP-VECTOR.ABP-VECTOR_C.ExecuteUbergraph_ABP-VECTOR
inline void UABP-VECTOR_C::ExecuteUbergraph_ABP-VECTOR(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-VECTOR.ABP-VECTOR_C.ExecuteUbergraph_ABP-VECTOR");

	struct ExecuteUbergraph_ABP-VECTOR_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ABP-VECTOR_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

