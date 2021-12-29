// AnimBlueprintGeneratedClass ABP-Weapon_ADS.ABP-Weapon_ADS_C
class UABP-Weapon_ADS_C : public UBravoHotelAnimInstanceWeapon {

public:

	struct Unknown UberGraphFrame; // 0x330 (8)
	struct Unknown AnimGraphNode_Root; // 0x338 (48)
	struct Unknown AnimGraphNode_LocalToComponentSpace; // 0x368 (32)
	struct Unknown AnimGraphNode_ComponentToLocalSpace; // 0x388 (32)
	struct Unknown AnimGraphNode_ModifyBone_3; // 0x3A8 (264)
	struct Unknown AnimGraphNode_BlendListByBool; // 0x4B0 (160)
	struct Unknown AnimGraphNode_ModifyBone_2; // 0x550 (264)
	struct Unknown AnimGraphNode_Slot_5; // 0x658 (72)
	struct Unknown AnimGraphNode_ModifyBone; // 0x6A0 (264)
	struct Unknown AnimGraphNode_TwoWayBlend_2; // 0x7A8 (200)
	struct Unknown AnimGraphNode_Slot_4; // 0x870 (72)
	struct Unknown AnimGraphNode_Slot_3; // 0x8B8 (72)
	struct Unknown AnimGraphNode_LayeredBoneBlend; // 0x900 (192)
	struct Unknown AnimGraphNode_Slot_2; // 0x9C0 (72)
	struct Unknown AnimGraphNode_LocalRefPose_2; // 0xA08 (24)
	struct Unknown AnimGraphNode_TwoWayBlend; // 0xA20 (200)
	struct Unknown AnimGraphNode_Slot; // 0xAE8 (72)
	struct Unknown AnimGraphNode_LocalRefPose; // 0xB30 (24)
	struct Unknown AnimGraphNode_SaveCachedPose_3; // 0xB48 (184)
	struct Unknown AnimGraphNode_UseCachedPose_6; // 0xC00 (40)
	struct Unknown AnimGraphNode_UseCachedPose_5; // 0xC28 (40)
	struct Unknown AnimGraphNode_UseCachedPose_4; // 0xC50 (40)
	struct Unknown AnimGraphNode_SaveCachedPose_2; // 0xC78 (184)
	struct Unknown AnimGraphNode_UseCachedPose_3; // 0xD30 (40)
	struct Unknown AnimGraphNode_SaveCachedPose; // 0xD58 (184)
	struct Unknown AnimGraphNode_UseCachedPose_2; // 0xE10 (40)
	struct Unknown AnimGraphNode_UseCachedPose; // 0xE38 (40)

	void AnimGraph(struct Unknown& AnimGraph); // Function ABP-Weapon_ADS.ABP-Weapon_ADS_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_ABP-Weapon_ADS(int32_t EntryPoint); // Function ABP-Weapon_ADS.ABP-Weapon_ADS_C.ExecuteUbergraph_ABP-Weapon_ADS(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function ABP-Weapon_ADS.ABP-Weapon_ADS_C.AnimGraph
inline void UABP-Weapon_ADS_C::AnimGraph(struct Unknown& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Weapon_ADS.ABP-Weapon_ADS_C.AnimGraph");

	struct AnimGraph_Params {
		struct Unknown& AnimGraph;
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

