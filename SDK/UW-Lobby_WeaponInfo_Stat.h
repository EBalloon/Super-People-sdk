// WidgetBlueprintGeneratedClass UW-Lobby_WeaponInfo_Stat.UW-Lobby_WeaponInfo_Stat_C
class UUW-Lobby_WeaponInfo_Stat_C : public UUserWidget {

public:

	struct Unknown Image; // 0x248 (8)
	struct Unknown Image_2; // 0x250 (8)
	struct Unknown Image_3; // 0x258 (8)
	struct Unknown Image_4; // 0x260 (8)
	struct Unknown Image_5; // 0x268 (8)
	struct Unknown Image_6; // 0x270 (8)
	struct Unknown Image_7; // 0x278 (8)
	struct Unknown Image_8; // 0x280 (8)
	struct Unknown Image_9; // 0x288 (8)
	struct Unknown Image_106; // 0x290 (8)
	struct Unknown T_Accuracy; // 0x298 (8)
	struct Unknown T_EffectiveRange; // 0x2A0 (8)
	struct Unknown T_FireRate; // 0x2A8 (8)
	struct Unknown T_MagSize; // 0x2B0 (8)
	struct Unknown T_Power; // 0x2B8 (8)

	void SetWeaponStat(struct Unknown& WeaponInfo); // Function UW-Lobby_WeaponInfo_Stat.UW-Lobby_WeaponInfo_Stat_C.SetWeaponStat(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-Lobby_WeaponInfo_Stat.UW-Lobby_WeaponInfo_Stat_C.SetWeaponStat
inline void UUW-Lobby_WeaponInfo_Stat_C::SetWeaponStat(struct Unknown& WeaponInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_WeaponInfo_Stat.UW-Lobby_WeaponInfo_Stat_C.SetWeaponStat");

	struct SetWeaponStat_Params {
		struct Unknown& WeaponInfo;
	}; SetWeaponStat_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	WeaponInfo = Params.WeaponInfo;

}

