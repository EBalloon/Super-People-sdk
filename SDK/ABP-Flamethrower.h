// AnimBlueprintGeneratedClass ABP-Flamethrower.ABP-Flamethrower_C
class UABP-Flamethrower_C : public UBravoHotelAnimInstanceWeapon {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340 (8)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x348 (48)
	struct FAnimNode_Slot AnimGraphNode_Slot_3; // 0x378 (72)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x3C0 (200)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose_3; // 0x488 (24)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose_2; // 0x4A0 (24)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x4B8 (72)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x500 (72)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x548 (24)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x560 (160)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP-Flamethrower.ABP-Flamethrower_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_ABP-Flamethrower(int32_t EntryPoint); // Function ABP-Flamethrower.ABP-Flamethrower_C.ExecuteUbergraph_ABP-Flamethrower(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function ABP-Flamethrower.ABP-Flamethrower_C.AnimGraph
inline void UABP-Flamethrower_C::AnimGraph(struct FPoseLink& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Flamethrower.ABP-Flamethrower_C.AnimGraph");

	struct AnimGraph_Params {
		struct FPoseLink& AnimGraph;
	}; AnimGraph_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnimGraph = Params.AnimGraph;

}

// Function ABP-Flamethrower.ABP-Flamethrower_C.ExecuteUbergraph_ABP-Flamethrower
inline void UABP-Flamethrower_C::ExecuteUbergraph_ABP-Flamethrower(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Flamethrower.ABP-Flamethrower_C.ExecuteUbergraph_ABP-Flamethrower");

	struct ExecuteUbergraph_ABP-Flamethrower_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ABP-Flamethrower_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

