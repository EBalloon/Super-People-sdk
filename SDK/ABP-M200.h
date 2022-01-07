// AnimBlueprintGeneratedClass ABP-M200.ABP-M200_C
class UABP-M200_C : public UBravoHotelAnimInstanceWeapon {

public:

	struct Unknown UberGraphFrame; // 0x340 (8)
	struct Unknown AnimGraphNode_Root; // 0x348 (48)
	struct Unknown AnimGraphNode_Slot_3; // 0x378 (72)
	struct Unknown AnimGraphNode_TwoWayBlend; // 0x3C0 (200)
	struct Unknown AnimGraphNode_LocalRefPose_3; // 0x488 (24)
	struct Unknown AnimGraphNode_LocalRefPose_2; // 0x4A0 (24)
	struct Unknown AnimGraphNode_Slot_2; // 0x4B8 (72)
	struct Unknown AnimGraphNode_Slot; // 0x500 (72)
	struct Unknown AnimGraphNode_LocalRefPose; // 0x548 (24)
	struct Unknown AnimGraphNode_BlendListByBool; // 0x560 (160)

	void AnimGraph(struct Unknown& AnimGraph); // Function ABP-M200.ABP-M200_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_ABP-M200(int32_t EntryPoint); // Function ABP-M200.ABP-M200_C.ExecuteUbergraph_ABP-M200(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function ABP-M200.ABP-M200_C.AnimGraph
inline void UABP-M200_C::AnimGraph(struct Unknown& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-M200.ABP-M200_C.AnimGraph");

	struct AnimGraph_Params {
		struct Unknown& AnimGraph;
	}; AnimGraph_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnimGraph = Params.AnimGraph;

}

// Function ABP-M200.ABP-M200_C.ExecuteUbergraph_ABP-M200
inline void UABP-M200_C::ExecuteUbergraph_ABP-M200(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-M200.ABP-M200_C.ExecuteUbergraph_ABP-M200");

	struct ExecuteUbergraph_ABP-M200_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ABP-M200_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

