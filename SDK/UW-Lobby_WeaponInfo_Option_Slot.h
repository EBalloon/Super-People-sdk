// WidgetBlueprintGeneratedClass UW-Lobby_WeaponInfo_Option_Slot.UW-Lobby_WeaponInfo_Option_Slot_C
class UUW-Lobby_WeaponInfo_Option_Slot_C : public UUserWidget {

public:

	struct UTextBlock T_Desc; // 0x248 (8)
	struct UUW-Lobby_WeaponInfo_Option_Slot_Icon_C UW-Lobby_WeaponInfo_RandomOption_Slot_3; // 0x250 (8)
	struct FItemOption ItemOption; // 0x258 (184)

	void SetItemOption(struct FItemOption& ItemOption); // Function UW-Lobby_WeaponInfo_Option_Slot.UW-Lobby_WeaponInfo_Option_Slot_C.SetItemOption(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-Lobby_WeaponInfo_Option_Slot.UW-Lobby_WeaponInfo_Option_Slot_C.SetItemOption
inline void UUW-Lobby_WeaponInfo_Option_Slot_C::SetItemOption(struct FItemOption& ItemOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_WeaponInfo_Option_Slot.UW-Lobby_WeaponInfo_Option_Slot_C.SetItemOption");

	struct SetItemOption_Params {
		struct FItemOption& ItemOption;
	}; SetItemOption_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemOption = Params.ItemOption;

}

