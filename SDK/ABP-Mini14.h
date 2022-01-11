// AnimBlueprintGeneratedClass ABP-Mini14.ABP-Mini14_C
class UABP-Mini14_C : public UBravoHotelAnimInstanceWeapon {

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

	void AnimGraph(struct Unknown& AnimGraph); // Function ABP-Mini14.ABP-Mini14_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_ABP-Mini14(int32_t EntryPoint); // Function ABP-Mini14.ABP-Mini14_C.ExecuteUbergraph_ABP-Mini14(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
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

