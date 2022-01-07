// WidgetBlueprintGeneratedClass UW-Inventory_ItemInfoTooltip.UW-Inventory_ItemInfoTooltip_C
class UUW-Inventory_ItemInfoTooltip_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Image_94; // 0x250 (8)
	struct Unknown Image_224; // 0x258 (8)
	struct Unknown RichTextBlock_321; // 0x260 (8)
	struct Unknown InventoryRef; // 0x268 (8)

	struct Unknown OnMouseButtonDown_1(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-Inventory_ItemInfoTooltip.UW-Inventory_ItemInfoTooltip_C.OnMouseButtonDown_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void HideInfo(); // Function UW-Inventory_ItemInfoTooltip.UW-Inventory_ItemInfoTooltip_C.HideInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ShowInfo(struct Unknown InvenRef); // Function UW-Inventory_ItemInfoTooltip.UW-Inventory_ItemInfoTooltip_C.ShowInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function UW-Inventory_ItemInfoTooltip.UW-Inventory_ItemInfoTooltip_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ForceCloseInfo(); // Function UW-Inventory_ItemInfoTooltip.UW-Inventory_ItemInfoTooltip_C.ForceCloseInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_UW-Inventory_ItemInfoTooltip(int32_t EntryPoint); // Function UW-Inventory_ItemInfoTooltip.UW-Inventory_ItemInfoTooltip_C.ExecuteUbergraph_UW-Inventory_ItemInfoTooltip(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function UW-Inventory_ItemInfoTooltip.UW-Inventory_ItemInfoTooltip_C.OnMouseButtonDown_1
inline struct Unknown UUW-Inventory_ItemInfoTooltip_C::OnMouseButtonDown_1(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemInfoTooltip.UW-Inventory_ItemInfoTooltip_C.OnMouseButtonDown_1");

	struct OnMouseButtonDown_1_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; OnMouseButtonDown_1_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-Inventory_ItemInfoTooltip.UW-Inventory_ItemInfoTooltip_C.HideInfo
inline void UUW-Inventory_ItemInfoTooltip_C::HideInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemInfoTooltip.UW-Inventory_ItemInfoTooltip_C.HideInfo");

	struct HideInfo_Params {
		
	}; HideInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemInfoTooltip.UW-Inventory_ItemInfoTooltip_C.ShowInfo
inline void UUW-Inventory_ItemInfoTooltip_C::ShowInfo(struct Unknown InvenRef) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemInfoTooltip.UW-Inventory_ItemInfoTooltip_C.ShowInfo");

	struct ShowInfo_Params {
		struct Unknown InvenRef;
	}; ShowInfo_Params Params;

	Params.InvenRef = InvenRef;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemInfoTooltip.UW-Inventory_ItemInfoTooltip_C.OnMouseLeave
inline void UUW-Inventory_ItemInfoTooltip_C::OnMouseLeave(struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemInfoTooltip.UW-Inventory_ItemInfoTooltip_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct Unknown& MouseEvent;
	}; OnMouseLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-Inventory_ItemInfoTooltip.UW-Inventory_ItemInfoTooltip_C.ForceCloseInfo
inline void UUW-Inventory_ItemInfoTooltip_C::ForceCloseInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemInfoTooltip.UW-Inventory_ItemInfoTooltip_C.ForceCloseInfo");

	struct ForceCloseInfo_Params {
		
	}; ForceCloseInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemInfoTooltip.UW-Inventory_ItemInfoTooltip_C.ExecuteUbergraph_UW-Inventory_ItemInfoTooltip
inline void UUW-Inventory_ItemInfoTooltip_C::ExecuteUbergraph_UW-Inventory_ItemInfoTooltip(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemInfoTooltip.UW-Inventory_ItemInfoTooltip_C.ExecuteUbergraph_UW-Inventory_ItemInfoTooltip");

	struct ExecuteUbergraph_UW-Inventory_ItemInfoTooltip_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Inventory_ItemInfoTooltip_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

