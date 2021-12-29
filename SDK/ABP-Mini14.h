// AnimBlueprintGeneratedClass ABP-Mini14.ABP-Mini14_C
class UABP-Mini14_C : public UBravoHotelAnimInstanceWeapon {

public:

	struct Unknown UberGraphFrame; // 0x330 (8)
	struct Unknown AnimGraphNode_Root; // 0x338 (48)
	struct Unknown AnimGraphNode_Slot_3; // 0x368 (72)
	struct Unknown AnimGraphNode_TwoWayBlend; // 0x3B0 (200)
	struct Unknown AnimGraphNode_LocalRefPose_3; // 0x478 (24)
	struct Unknown AnimGraphNode_LocalRefPose_2; // 0x490 (24)
	struct Unknown AnimGraphNode_Slot_2; // 0x4A8 (72)
	struct Unknown AnimGraphNode_Slot; // 0x4F0 (72)
	struct Unknown AnimGraphNode_LocalRefPose; // 0x538 (24)
	struct Unknown AnimGraphNode_BlendListByBool; // 0x550 (160)

	void AnimGraph(struct Unknown& AnimGraph); // Function ABP-Mini14.ABP-Mini14_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_ABP-Mini14(int32_t EntryPoint); // Function ABP-Mini14.ABP-Mini14_C.ExecuteUbergraph_ABP-Mini14(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function ABP-Mini14.ABP-Mini14_C.AnimGraph
inline void UABP-Mini14_C::AnimGraph(struct Unknown& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Mini14.ABP-Mini14_C.AnimGraph");

	struct AnimGraph_Params {
		struct Unknown& AnimGraph;
	}; AnimGraph_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnimGraph = Params.AnimGraph;

}

// Function ABP-Mini14.ABP-Mini14_C.ExecuteUbergraph_ABP-Mini14
inline void UABP-Mini14_C::ExecuteUbergraph_ABP-Mini14(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Mini14.ABP-Mini14_C.ExecuteUbergraph_ABP-Mini14");

	struct ExecuteUbergraph_ABP-Mini14_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ABP-Mini14_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

