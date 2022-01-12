// WidgetBlueprintGeneratedClass UW-Lobby_WeaponInfo_Stat.UW-Lobby_WeaponInfo_Stat_C
class UUW-Lobby_WeaponInfo_Stat_C : public UUserWidget {

public:

	struct UImage Image; // 0x248 (8)
	struct UImage Image_2; // 0x250 (8)
	struct UImage Image_3; // 0x258 (8)
	struct UImage Image_4; // 0x260 (8)
	struct UImage Image_5; // 0x268 (8)
	struct UImage Image_6; // 0x270 (8)
	struct UImage Image_7; // 0x278 (8)
	struct UImage Image_8; // 0x280 (8)
	struct UImage Image_9; // 0x288 (8)
	struct UImage Image_106; // 0x290 (8)
	struct UTextBlock T_Accuracy; // 0x298 (8)
	struct UTextBlock T_EffectiveRange; // 0x2A0 (8)
	struct UTextBlock T_FireRate; // 0x2A8 (8)
	struct UTextBlock T_MagSize; // 0x2B0 (8)
	struct UTextBlock T_Power; // 0x2B8 (8)

	void SetWeaponStat(struct FBravoHotelWeaponInfo& WeaponInfo); // Function UW-Lobby_WeaponInfo_Stat.UW-Lobby_WeaponInfo_Stat_C.SetWeaponStat(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
};

// Function UW-Lobby_WeaponInfo_Stat.UW-Lobby_WeaponInfo_Stat_C.SetWeaponStat
inline void UUW-Lobby_WeaponInfo_Stat_C::SetWeaponStat(struct FBravoHotelWeaponInfo& WeaponInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_WeaponInfo_Stat.UW-Lobby_WeaponInfo_Stat_C.SetWeaponStat");

	struct SetWeaponStat_Params {
		struct FBravoHotelWeaponInfo& WeaponInfo;
	}; SetWeaponStat_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	WeaponInfo = Params.WeaponInfo;

}

