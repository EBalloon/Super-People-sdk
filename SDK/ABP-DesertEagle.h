// AnimBlueprintGeneratedClass ABP-DesertEagle.ABP-DesertEagle_C
class UABP-DesertEagle_C : public UBravoHotelAnimInstanceWeapon {

public:

	struct Unknown UberGraphFrame; // 0x330 (8)
	struct Unknown AnimGraphNode_Root; // 0x338 (48)
	struct Unknown AnimGraphNode_Slot_3; // 0x368 (72)
	struct Unknown AnimGraphNode_TwoWayBlend; // 0x3B0 (200)
	struct Unknown AnimGraphNode_LocalRefPose_3; // 0x478 (24)
	struct Unknown AnimGraphNode_Slot_2; // 0x490 (72)
	struct Unknown AnimGraphNode_LocalRefPose_2; // 0x4D8 (24)
	struct Unknown AnimGraphNode_BlendListByBool; // 0x4F0 (160)
	struct Unknown AnimGraphNode_Slot; // 0x590 (72)
	struct Unknown AnimGraphNode_LocalRefPose; // 0x5D8 (24)

	void AnimGraph(struct Unknown& AnimGraph); // Function ABP-DesertEagle.ABP-DesertEagle_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_ABP-DesertEagle(int32_t EntryPoint); // Function ABP-DesertEagle.ABP-DesertEagle_C.ExecuteUbergraph_ABP-DesertEagle(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function ABP-DesertEagle.ABP-DesertEagle_C.AnimGraph
inline void UABP-DesertEagle_C::AnimGraph(struct Unknown& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-DesertEagle.ABP-DesertEagle_C.AnimGraph");

	struct AnimGraph_Params {
		struct Unknown& AnimGraph;
	}; AnimGraph_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnimGraph = Params.AnimGraph;

}

// Function ABP-DesertEagle.ABP-DesertEagle_C.ExecuteUbergraph_ABP-DesertEagle
inline void UABP-DesertEagle_C::ExecuteUbergraph_ABP-DesertEagle(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-DesertEagle.ABP-DesertEagle_C.ExecuteUbergraph_ABP-DesertEagle");

	struct ExecuteUbergraph_ABP-DesertEagle_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ABP-DesertEagle_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

