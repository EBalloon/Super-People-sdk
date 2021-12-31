// AnimBlueprintGeneratedClass ABP-Weapon_ADS.ABP-Weapon_ADS_C
class UABP-Weapon_ADS_C : public UBravoHotelAnimInstanceWeapon {

public:

	struct Unknown UberGraphFrame; // 0x340 (8)
	struct Unknown AnimGraphNode_Root; // 0x348 (48)
	struct Unknown AnimGraphNode_LocalToComponentSpace; // 0x378 (32)
	struct Unknown AnimGraphNode_ComponentToLocalSpace; // 0x398 (32)
	struct Unknown AnimGraphNode_ModifyBone_3; // 0x3B8 (264)
	struct Unknown AnimGraphNode_BlendListByBool; // 0x4C0 (160)
	struct Unknown AnimGraphNode_ModifyBone_2; // 0x560 (264)
	struct Unknown AnimGraphNode_Slot_5; // 0x668 (72)
	struct Unknown AnimGraphNode_ModifyBone; // 0x6B0 (264)
	struct Unknown AnimGraphNode_TwoWayBlend_2; // 0x7B8 (200)
	struct Unknown AnimGraphNode_Slot_4; // 0x880 (72)
	struct Unknown AnimGraphNode_Slot_3; // 0x8C8 (72)
	struct Unknown AnimGraphNode_LayeredBoneBlend; // 0x910 (192)
	struct Unknown AnimGraphNode_Slot_2; // 0x9D0 (72)
	struct Unknown AnimGraphNode_LocalRefPose_2; // 0xA18 (24)
	struct Unknown AnimGraphNode_TwoWayBlend; // 0xA30 (200)
	struct Unknown AnimGraphNode_Slot; // 0xAF8 (72)
	struct Unknown AnimGraphNode_LocalRefPose; // 0xB40 (24)
	struct Unknown AnimGraphNode_SaveCachedPose_3; // 0xB58 (184)
	struct Unknown AnimGraphNode_UseCachedPose_6; // 0xC10 (40)
	struct Unknown AnimGraphNode_UseCachedPose_5; // 0xC38 (40)
	struct Unknown AnimGraphNode_UseCachedPose_4; // 0xC60 (40)
	struct Unknown AnimGraphNode_SaveCachedPose_2; // 0xC88 (184)
	struct Unknown AnimGraphNode_UseCachedPose_3; // 0xD40 (40)
	struct Unknown AnimGraphNode_SaveCachedPose; // 0xD68 (184)
	struct Unknown AnimGraphNode_UseCachedPose_2; // 0xE20 (40)
	struct Unknown AnimGraphNode_UseCachedPose; // 0xE48 (40)

	void AnimGraph(struct Unknown& AnimGraph); // Function ABP-Weapon_ADS.ABP-Weapon_ADS_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_ABP-Weapon_ADS(int32_t EntryPoint); // Function ABP-Weapon_ADS.ABP-Weapon_ADS_C.ExecuteUbergraph_ABP-Weapon_ADS(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
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

