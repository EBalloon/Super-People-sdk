// AnimBlueprintGeneratedClass ABP-Weapon_ADS.ABP-Weapon_ADS_C
class UABP-Weapon_ADS_C : public UBravoHotelAnimInstanceWeapon {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340 (8)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x348 (48)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x378 (32)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x398 (32)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x3B8 (264)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x4C0 (160)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x560 (264)
	struct FAnimNode_Slot AnimGraphNode_Slot_5; // 0x668 (72)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x6B0 (264)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_2; // 0x7B8 (200)
	struct FAnimNode_Slot AnimGraphNode_Slot_4; // 0x880 (72)
	struct FAnimNode_Slot AnimGraphNode_Slot_3; // 0x8C8 (72)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x910 (192)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x9D0 (72)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose_2; // 0xA18 (24)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0xA30 (200)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0xAF8 (72)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0xB40 (24)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0xB58 (184)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0xC10 (40)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0xC38 (40)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0xC60 (40)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0xC88 (184)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0xD40 (40)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xD68 (184)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xE20 (40)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xE48 (40)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP-Weapon_ADS.ABP-Weapon_ADS_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_ABP-Weapon_ADS(int32_t EntryPoint); // Function ABP-Weapon_ADS.ABP-Weapon_ADS_C.ExecuteUbergraph_ABP-Weapon_ADS(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function ABP-Weapon_ADS.ABP-Weapon_ADS_C.AnimGraph
inline void UABP-Weapon_ADS_C::AnimGraph(struct FPoseLink& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Weapon_ADS.ABP-Weapon_ADS_C.AnimGraph");

	struct AnimGraph_Params {
		struct FPoseLink& AnimGraph;
	}; AnimGraph_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnimGraph = Params.AnimGraph;

}

// Function ABP-Weapon_ADS.ABP-Weapon_ADS_C.ExecuteUbergraph_ABP-Weapon_ADS
inline void UABP-Weapon_ADS_C::ExecuteUbergraph_ABP-Weapon_ADS(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Weapon_ADS.ABP-Weapon_ADS_C.ExecuteUbergraph_ABP-Weapon_ADS");

	struct ExecuteUbergraph_ABP-Weapon_ADS_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ABP-Weapon_ADS_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

