// WidgetBlueprintGeneratedClass UW-Matchend_BuffList.UW-Matchend_BuffList_C
class UUW-Matchend_BuffList_C : public UUserWidget {

public:

	struct UCanvasPanel CanvasPanel_Buff; // 0x248 (8)
	struct UImage Image_Icon_Buff; // 0x250 (8)
	struct UImage Image_Icon_BuffBg; // 0x258 (8)
	struct UImage Image_Icon_Ultimate; // 0x260 (8)
	struct USizeBox SizeBox_Perk; // 0x268 (8)
	struct USizeBox SizeBox_Ultimate; // 0x270 (8)
	struct UTextBlock T_Desc; // 0x278 (8)
	struct UUW-Inventory_PerkSlot_C UW-Inventory_PerkSlot; // 0x280 (8)
	struct UUW-MatchEnd_ItemIcon_C UW-MatchEnd_ItemIcon; // 0x288 (8)
	struct UWidgetSwitcher WidgetSwitcher_BuffType; // 0x290 (8)

	void SetBuffInfo(struct FDamageBuffInfo& DamageBuffInfo); // Function UW-Matchend_BuffList.UW-Matchend_BuffList_C.SetBuffInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-Matchend_BuffList.UW-Matchend_BuffList_C.SetBuffInfo
inline void UUW-Matchend_BuffList_C::SetBuffInfo(struct FDamageBuffInfo& DamageBuffInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Matchend_BuffList.UW-Matchend_BuffList_C.SetBuffInfo");

	struct SetBuffInfo_Params {
		struct FDamageBuffInfo& DamageBuffInfo;
	}; SetBuffInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	DamageBuffInfo = Params.DamageBuffInfo;

}

