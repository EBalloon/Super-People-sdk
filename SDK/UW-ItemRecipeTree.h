// WidgetBlueprintGeneratedClass UW-ItemRecipeTree.UW-ItemRecipeTree_C
class UUW-ItemRecipeTree_C : public UBravoHotelItemRecipeTreeWidget {

public:

	struct Unknown UberGraphFrame; // 0x258 (8)
	struct Unknown HorizontalBox_11; // 0x260 (8)
	struct Unknown HorizontalBox_12; // 0x268 (8)
	struct Unknown HorizontalBox_13; // 0x270 (8)
	struct Unknown HorizontalBox_14; // 0x278 (8)
	struct Unknown HorizontalBox_15; // 0x280 (8)
	struct Unknown HorizontalBox_16; // 0x288 (8)
	struct Unknown HorizontalBox_00; // 0x290 (8)
	struct Unknown HorizontalBox_02; // 0x298 (8)
	struct Unknown HorizontalBox_03; // 0x2A0 (8)
	struct Unknown HorizontalBox_04; // 0x2A8 (8)
	struct Unknown HorizontalBox_05; // 0x2B0 (8)
	struct Unknown HorizontalBox_06; // 0x2B8 (8)
	struct Unknown HorizontalBox_07; // 0x2C0 (8)
	struct Unknown HorizontalBox_08; // 0x2C8 (8)
	struct Unknown HorizontalBox_09; // 0x2D0 (8)
	struct Unknown Line00; // 0x2D8 (8)
	struct Unknown Line01; // 0x2E0 (8)
	struct Unknown Line02; // 0x2E8 (8)
	struct Unknown Line03; // 0x2F0 (8)
	struct Unknown Line04; // 0x2F8 (8)
	struct Unknown Line05; // 0x300 (8)
	struct Unknown Line06; // 0x308 (8)
	struct Unknown Line07; // 0x310 (8)
	struct Unknown Line08; // 0x318 (8)
	struct Unknown Line09; // 0x320 (8)
	struct Unknown Line10; // 0x328 (8)
	struct Unknown Line11; // 0x330 (8)
	struct Unknown Line12; // 0x338 (8)
	struct Unknown Line13; // 0x340 (8)
	struct Unknown Line14; // 0x348 (8)
	struct Unknown Line15; // 0x350 (8)
	struct Unknown Overlay_Main; // 0x358 (8)
	struct Unknown Slot00; // 0x360 (8)
	struct Unknown Slot01; // 0x368 (8)
	struct Unknown Slot02; // 0x370 (8)
	struct Unknown Slot03; // 0x378 (8)
	struct Unknown Slot04; // 0x380 (8)
	struct Unknown Slot05; // 0x388 (8)
	struct Unknown Slot06; // 0x390 (8)
	struct Unknown Slot07; // 0x398 (8)
	struct Unknown Slot08; // 0x3A0 (8)
	struct Unknown Slot09; // 0x3A8 (8)
	struct Unknown Slot10; // 0x3B0 (8)
	struct Unknown Slot11; // 0x3B8 (8)
	struct Unknown Slot12; // 0x3C0 (8)
	struct Unknown Slot13; // 0x3C8 (8)
	struct Unknown Slot14; // 0x3D0 (8)
	struct Unknown Slot15; // 0x3D8 (8)
	struct Unknown Slot16; // 0x3E0 (8)
	struct Unknown Slot17; // 0x3E8 (8)
	struct Unknown Slot18; // 0x3F0 (8)
	struct Unknown Slot19; // 0x3F8 (8)
	struct Unknown Slot20; // 0x400 (8)
	struct Unknown Slot21; // 0x408 (8)
	struct Unknown Slot22; // 0x410 (8)
	struct Unknown Slot23; // 0x418 (8)
	struct Unknown Slot24; // 0x420 (8)
	struct Unknown Slot25; // 0x428 (8)
	struct Unknown Slot26; // 0x430 (8)
	struct Unknown Slot27; // 0x438 (8)
	struct Unknown Slot28; // 0x440 (8)
	struct Unknown Slot29; // 0x448 (8)
	struct Unknown Slot30; // 0x450 (8)
	struct Unknown Slot31; // 0x458 (8)
	struct Unknown VerticalBox_2438; // 0x460 (8)
	struct Unknown HoverWidget; // 0x468 (8)
	struct FName HaveItemKey; // 0x470 (8)
	struct FName TargetItemKey; // 0x478 (8)
	char IsSearchExpertWeapon : 0; // 0x480 (1)

	void ShowTreeNode(struct Unknown WidgetInfo, char bShow, char bCombinable); // Function UW-ItemRecipeTree.UW-ItemRecipeTree_C.ShowTreeNode(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetTreeNodeByInfo(struct Unknown TreeData, struct Unknown WidgetInfo, char Complete); // Function UW-ItemRecipeTree.UW-ItemRecipeTree_C.SetTreeNodeByInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Construct(); // Function UW-ItemRecipeTree.UW-ItemRecipeTree_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetItemKey(struct FName ItemKey, struct FName HaveItemKey); // Function UW-ItemRecipeTree.UW-ItemRecipeTree_C.SetItemKey(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Destruct(); // Function UW-ItemRecipeTree.UW-ItemRecipeTree_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_UW-ItemRecipeTree(int32_t EntryPoint); // Function UW-ItemRecipeTree.UW-ItemRecipeTree_C.ExecuteUbergraph_UW-ItemRecipeTree(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B812B0>
};

// Function UW-ItemRecipeTree.UW-ItemRecipeTree_C.ShowTreeNode
inline void UUW-ItemRecipeTree_C::ShowTreeNode(struct Unknown WidgetInfo, char bShow, char bCombinable) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTree.UW-ItemRecipeTree_C.ShowTreeNode");

	struct ShowTreeNode_Params {
		struct Unknown WidgetInfo;
		char bShow;
		char bCombinable;
	}; ShowTreeNode_Params Params;

	Params.WidgetInfo = WidgetInfo;
	Params.bShow = bShow;
	Params.bCombinable = bCombinable;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemRecipeTree.UW-ItemRecipeTree_C.SetTreeNodeByInfo
inline void UUW-ItemRecipeTree_C::SetTreeNodeByInfo(struct Unknown TreeData, struct Unknown WidgetInfo, char Complete) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTree.UW-ItemRecipeTree_C.SetTreeNodeByInfo");

	struct SetTreeNodeByInfo_Params {
		struct Unknown TreeData;
		struct Unknown WidgetInfo;
		char Complete;
	}; SetTreeNodeByInfo_Params Params;

	Params.TreeData = TreeData;
	Params.WidgetInfo = WidgetInfo;
	Params.Complete = Complete;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemRecipeTree.UW-ItemRecipeTree_C.Construct
inline void UUW-ItemRecipeTree_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTree.UW-ItemRecipeTree_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemRecipeTree.UW-ItemRecipeTree_C.SetItemKey
inline void UUW-ItemRecipeTree_C::SetItemKey(struct FName ItemKey, struct FName HaveItemKey) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTree.UW-ItemRecipeTree_C.SetItemKey");

	struct SetItemKey_Params {
		struct FName ItemKey;
		struct FName HaveItemKey;
	}; SetItemKey_Params Params;

	Params.ItemKey = ItemKey;
	Params.HaveItemKey = HaveItemKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemRecipeTree.UW-ItemRecipeTree_C.Destruct
inline void UUW-ItemRecipeTree_C::Destruct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTree.UW-ItemRecipeTree_C.Destruct");

	struct Destruct_Params {
		
	}; Destruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemRecipeTree.UW-ItemRecipeTree_C.ExecuteUbergraph_UW-ItemRecipeTree
inline void UUW-ItemRecipeTree_C::ExecuteUbergraph_UW-ItemRecipeTree(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTree.UW-ItemRecipeTree_C.ExecuteUbergraph_UW-ItemRecipeTree");

	struct ExecuteUbergraph_UW-ItemRecipeTree_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ItemRecipeTree_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

