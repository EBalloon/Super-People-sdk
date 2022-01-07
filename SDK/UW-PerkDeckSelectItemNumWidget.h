// WidgetBlueprintGeneratedClass UW-PerkDeckSelectItemNumWidget.UW-PerkDeckSelectItemNumWidget_C
class UUW-PerkDeckSelectItemNumWidget_C : public UUserWidget {

public:

	struct Unknown Image_Selected; // 0x248 (8)
	struct Unknown TextBlock_Selected; // 0x250 (8)
	int32_t PlayerIndex; // 0x258 (4)

	void SetTeamIndex(int32_t PlayerIndex); // Function UW-PerkDeckSelectItemNumWidget.UW-PerkDeckSelectItemNumWidget_C.SetTeamIndex(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function UW-PerkDeckSelectItemNumWidget.UW-PerkDeckSelectItemNumWidget_C.SetTeamIndex
inline void UUW-PerkDeckSelectItemNumWidget_C::SetTeamIndex(int32_t PlayerIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckSelectItemNumWidget.UW-PerkDeckSelectItemNumWidget_C.SetTeamIndex");

	struct SetTeamIndex_Params {
		int32_t PlayerIndex;
	}; SetTeamIndex_Params Params;

	Params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

