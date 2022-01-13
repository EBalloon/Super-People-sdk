// WidgetBlueprintGeneratedClass UW-Lobby_WeaponInfo_RandomOption.UW-Lobby_WeaponInfo_RandomOption_C
class UUW-Lobby_WeaponInfo_RandomOption_C : public UUserWidget {

public:

	struct UTextBlock T_Desc; // 0x248 (8)
	struct UUW-Lobby_WeaponInfo_Option_Slot_Icon_C UW-Lobby_WeaponInfo_Buff; // 0x250 (8)
	struct UUW-Lobby_WeaponInfo_Option_Slot_Icon_C UW-Lobby_WeaponInfo_Buff_2; // 0x258 (8)
	struct UUW-Lobby_WeaponInfo_Option_Slot_Icon_C UW-Lobby_WeaponInfo_Buff_3; // 0x260 (8)
	struct UUW-Lobby_WeaponInfo_Option_Slot_Icon_C UW-Lobby_WeaponInfo_Buff_4; // 0x268 (8)
	struct UUW-Lobby_WeaponInfo_Option_Slot_Icon_C UW-Lobby_WeaponInfo_Buff_5; // 0x270 (8)
	struct UUW-Lobby_WeaponInfo_Option_Slot_Icon_C UW-Lobby_WeaponInfo_Buff_6; // 0x278 (8)
	struct UUW-Lobby_WeaponInfo_Option_Slot_Icon_C UW-Lobby_WeaponInfo_Buff_7; // 0x280 (8)
	struct UUW-Lobby_WeaponInfo_Option_Slot_Icon_C UW-Lobby_WeaponInfo_Buff_8; // 0x288 (8)
	struct UUW-Lobby_WeaponInfo_Option_Slot_Icon_C UW-Lobby_WeaponInfo_Buff_9; // 0x290 (8)
	struct UUW-Lobby_WeaponInfo_Option_Slot_Icon_C UW-Lobby_WeaponInfo_Buff_10; // 0x298 (8)
	struct UWrapBox WrapBox_Options; // 0x2A0 (8)

	void SetRandomOptionDesc(struct FText Desc); // Function UW-Lobby_WeaponInfo_RandomOption.UW-Lobby_WeaponInfo_RandomOption_C.SetRandomOptionDesc(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetOptions(struct TArray<int32_t>& OptionIDList); // Function UW-Lobby_WeaponInfo_RandomOption.UW-Lobby_WeaponInfo_RandomOption_C.SetOptions(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-Lobby_WeaponInfo_RandomOption.UW-Lobby_WeaponInfo_RandomOption_C.SetRandomOptionDesc
inline void UUW-Lobby_WeaponInfo_RandomOption_C::SetRandomOptionDesc(struct FText Desc) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_WeaponInfo_RandomOption.UW-Lobby_WeaponInfo_RandomOption_C.SetRandomOptionDesc");

	struct SetRandomOptionDesc_Params {
		struct FText Desc;
	}; SetRandomOptionDesc_Params Params;

	Params.Desc = Desc;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_WeaponInfo_RandomOption.UW-Lobby_WeaponInfo_RandomOption_C.SetOptions
inline void UUW-Lobby_WeaponInfo_RandomOption_C::SetOptions(struct TArray<int32_t>& OptionIDList) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_WeaponInfo_RandomOption.UW-Lobby_WeaponInfo_RandomOption_C.SetOptions");

	struct SetOptions_Params {
		struct TArray<int32_t>& OptionIDList;
	}; SetOptions_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OptionIDList = Params.OptionIDList;

}

