// AnimBlueprintGeneratedClass ABP-Gatling_.ABP-Gatling__C
class UABP-Gatling__C : public UBravoHotelAnimInstanceWeapon {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340 (8)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x348 (48)
	struct FAnimNode_Slot AnimGraphNode_Slot_3; // 0x378 (72)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x3C0 (200)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose_3; // 0x488 (24)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x4A0 (72)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose_2; // 0x4E8 (24)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x500 (24)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x518 (72)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x560 (160)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP-Gatling_.ABP-Gatling__C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_ABP-Gatling_(int32_t EntryPoint); // Function ABP-Gatling_.ABP-Gatling__C.ExecuteUbergraph_ABP-Gatling_(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function ABP-Gatling_.ABP-Gatling__C.AnimGraph
inline void UABP-Gatling__C::AnimGraph(struct FPoseLink& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Gatling_.ABP-Gatling__C.AnimGraph");

	struct AnimGraph_Params {
		struct FPoseLink& AnimGraph;
	}; AnimGraph_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnimGraph = Params.AnimGraph;

}

// Function ABP-Gatling_.ABP-Gatling__C.ExecuteUbergraph_ABP-Gatling_
inline void UABP-Gatling__C::ExecuteUbergraph_ABP-Gatling_(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Gatling_.ABP-Gatling__C.ExecuteUbergraph_ABP-Gatling_");

	struct ExecuteUbergraph_ABP-Gatling__Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ABP-Gatling__Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

