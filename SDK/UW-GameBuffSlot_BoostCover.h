// WidgetBlueprintGeneratedClass UW-GameBuffSlot_BoostCover.UW-GameBuffSlot_BoostCover_C
class UUW-GameBuffSlot_BoostCover_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UUW-GameBuffSlot_Boost_C UW-GameBuffSlot_Boost; // 0x250 (8)
	struct UUW-Inventory_ItemSlotHover_C HoverWidget; // 0x258 (8)

	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-GameBuffSlot_BoostCover.UW-GameBuffSlot_BoostCover_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_UW-GameBuffSlot_BoostCover(int32_t EntryPoint); // Function UW-GameBuffSlot_BoostCover.UW-GameBuffSlot_BoostCover_C.ExecuteUbergraph_UW-GameBuffSlot_BoostCover(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-GameBuffSlot_BoostCover.UW-GameBuffSlot_BoostCover_C.OnMouseEnter
inline void UUW-GameBuffSlot_BoostCover_C::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GameBuffSlot_BoostCover.UW-GameBuffSlot_BoostCover_C.OnMouseEnter");

	struct OnMouseEnter_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
	}; OnMouseEnter_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-GameBuffSlot_BoostCover.UW-GameBuffSlot_BoostCover_C.ExecuteUbergraph_UW-GameBuffSlot_BoostCover
inline void UUW-GameBuffSlot_BoostCover_C::ExecuteUbergraph_UW-GameBuffSlot_BoostCover(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GameBuffSlot_BoostCover.UW-GameBuffSlot_BoostCover_C.ExecuteUbergraph_UW-GameBuffSlot_BoostCover");

	struct ExecuteUbergraph_UW-GameBuffSlot_BoostCover_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-GameBuffSlot_BoostCover_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

