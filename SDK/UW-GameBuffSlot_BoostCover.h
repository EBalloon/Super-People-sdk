// WidgetBlueprintGeneratedClass UW-GameBuffSlot_BoostCover.UW-GameBuffSlot_BoostCover_C
class UUW-GameBuffSlot_BoostCover_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown UW-GameBuffSlot_Boost; // 0x250 (8)
	struct Unknown HoverWidget; // 0x258 (8)

	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-GameBuffSlot_BoostCover.UW-GameBuffSlot_BoostCover_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_UW-GameBuffSlot_BoostCover(int32_t EntryPoint); // Function UW-GameBuffSlot_BoostCover.UW-GameBuffSlot_BoostCover_C.ExecuteUbergraph_UW-GameBuffSlot_BoostCover(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function UW-GameBuffSlot_BoostCover.UW-GameBuffSlot_BoostCover_C.OnMouseEnter
inline void UUW-GameBuffSlot_BoostCover_C::OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GameBuffSlot_BoostCover.UW-GameBuffSlot_BoostCover_C.OnMouseEnter");

	struct OnMouseEnter_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
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

