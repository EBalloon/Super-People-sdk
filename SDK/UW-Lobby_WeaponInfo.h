// WidgetBlueprintGeneratedClass UW-Lobby_WeaponInfo.UW-Lobby_WeaponInfo_C
class UUW-Lobby_WeaponInfo_C : public UUserWidget {

public:

	struct UImage Image_273; // 0x248 (8)
	struct UUW-Lobby_ItemName_C UW-Lobby_ItemName; // 0x250 (8)
	struct UUW-Lobby_WeaponInfo_Stat_C UW-Lobby_WeaponInfo_Stat; // 0x258 (8)

	void SetWeaponInfo(int32_t WeaponItemID); // Function UW-Lobby_WeaponInfo.UW-Lobby_WeaponInfo_C.SetWeaponInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-Lobby_WeaponInfo.UW-Lobby_WeaponInfo_C.SetWeaponInfo
inline void UUW-Lobby_WeaponInfo_C::SetWeaponInfo(int32_t WeaponItemID) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_WeaponInfo.UW-Lobby_WeaponInfo_C.SetWeaponInfo");

	struct SetWeaponInfo_Params {
		int32_t WeaponItemID;
	}; SetWeaponInfo_Params Params;

	Params.WeaponItemID = WeaponItemID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

