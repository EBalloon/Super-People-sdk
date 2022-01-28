// WidgetBlueprintGeneratedClass UW-Inventory_Perk.UW-Inventory_Perk_C
class UUW-Inventory_Perk_C : public UBravoHotelInventoryPerkWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2E8 (8)
	struct UWidgetAnimation Anim_Glow; // 0x2F0 (8)
	struct UWidgetAnimation HideFreeSupply; // 0x2F8 (8)
	struct UWidgetAnimation ShowFreeSupply; // 0x300 (8)
	struct UWidgetAnimation LevelUp; // 0x308 (8)
	struct UWidgetAnimation Ability_Defense; // 0x310 (8)
	struct UWidgetAnimation Ability_Speed; // 0x318 (8)
	struct UWidgetAnimation Ability_Power; // 0x320 (8)
	struct UWidgetAnimation Survive_FadeInOut; // 0x328 (8)
	struct UWidgetAnimation Anim_LevelUpDefense; // 0x330 (8)
	struct UWidgetAnimation Anim_LevelUpSpeed; // 0x338 (8)
	struct UWidgetAnimation Anim_LevelUpPower; // 0x340 (8)
	struct UButton btn_ItemTree; // 0x348 (8)
	struct UButton btn_PerkDeckDisabled; // 0x350 (8)
	struct UButton btn_PerkDeckDisabled_2; // 0x358 (8)
	struct UButton btn_PerkDeckEnabled; // 0x360 (8)
	struct UButton btn_PerkDeckEnabled_2; // 0x368 (8)
	struct UCanvasPanel Canvas_BG; // 0x370 (8)
	struct UCanvasPanel Canvas_ChangeClass; // 0x378 (8)
	struct UCanvasPanel Canvas_ChangeDisable; // 0x380 (8)
	struct UCanvasPanel Canvas_ChangeDisable_2; // 0x388 (8)
	struct UCanvasPanel Canvas_ChangeEnable; // 0x390 (8)
	struct UCanvasPanel Canvas_ChangeEnable_2; // 0x398 (8)
	struct UCanvasPanel Canvas_ChangeSupply; // 0x3A0 (8)
	struct UCanvasPanel Canvas_LevelupEffect; // 0x3A8 (8)
	struct UCanvasPanel Canvas_Main; // 0x3B0 (8)
	struct UCanvasPanel Canvas_Perk; // 0x3B8 (8)
	struct UCanvasPanel Canvas_SupplyButton; // 0x3C0 (8)
	struct UCanvasPanel Canvas_UltimateEffect; // 0x3C8 (8)
	struct UCanvasPanel Canvas_UltimateLightEffect; // 0x3D0 (8)
	struct UHorizontalBox HorizontalBox_300; // 0x3D8 (8)
	struct UHorizontalBox HorizontalBox_303; // 0x3E0 (8)
	struct UHorizontalBox HorizontalBox_Stat; // 0x3E8 (8)
	struct UHorizontalBox HorizontalBox_UnlockLevel; // 0x3F0 (8)
	struct UImage Image; // 0x3F8 (8)
	struct UImage Image_5; // 0x400 (8)
	struct UImage Image_86; // 0x408 (8)
	struct UImage Image_126; // 0x410 (8)
	struct UImage Image_163; // 0x418 (8)
	struct UImage Image_180; // 0x420 (8)
	struct UImage Image_200; // 0x428 (8)
	struct UImage Image_203; // 0x430 (8)
	struct UImage Image_222; // 0x438 (8)
	struct UImage Image_384; // 0x440 (8)
	struct UImage Image_387; // 0x448 (8)
	struct UImage Image_388; // 0x450 (8)
	struct UImage Image_389; // 0x458 (8)
	struct UImage Image_485; // 0x460 (8)
	struct UImage Image_571; // 0x468 (8)
	struct UImage Image_1098; // 0x470 (8)
	struct UImage Image_1100; // 0x478 (8)
	struct UImage Image_1104; // 0x480 (8)
	struct UImage Image_Cycle; // 0x488 (8)
	struct UImage Image_Cycle_2; // 0x490 (8)
	struct UImage IMG_ClassIcon; // 0x498 (8)
	struct UImage IMG_PerkDeckIcon; // 0x4A0 (8)
	struct UImage IMG_Supply; // 0x4A8 (8)
	struct UImage IMG_UltimatedSkill; // 0x4B0 (8)
	struct UInvalidationBox InvalidationBox_1; // 0x4B8 (8)
	struct UKeyImageWidget_C KeyImageWidget; // 0x4C0 (8)
	struct UCanvasPanel NotEnoughGold; // 0x4C8 (8)
	struct UOverlay Over_Ultimate; // 0x4D0 (8)
	struct UOverlay Overlay_UltimateKey; // 0x4D8 (8)
	struct USpacer Spacer_251; // 0x4E0 (8)
	struct UTextBlock T_ClassName; // 0x4E8 (8)
	struct UTextBlock T_Defense; // 0x4F0 (8)
	struct UTextBlock T_DefenseAnim; // 0x4F8 (8)
	struct UTextBlock T_Power; // 0x500 (8)
	struct UTextBlock T_PowerAnim; // 0x508 (8)
	struct UTextBlock T_Speed; // 0x510 (8)
	struct UTextBlock T_SpeedAnim; // 0x518 (8)
	struct UTextBlock T_UltimateName; // 0x520 (8)
	struct UTextBlock T_UnlockLevel; // 0x528 (8)
	struct UTextBlock T_UnlockLevel2; // 0x530 (8)
	struct UTextBlock T_WeaponName; // 0x538 (8)
	struct UTextBlock TextBlock_2; // 0x540 (8)
	struct UTextBlock TextBlock_3; // 0x548 (8)
	struct UTextBlock TextBlock_4; // 0x550 (8)
	struct UTextBlock TextBlock_9; // 0x558 (8)
	struct UTextBlock TextBlock_ClassLevel; // 0x560 (8)
	struct UTextBlock TextBlock_Count_Blue; // 0x568 (8)
	struct UTextBlock TextBlock_Count_Green; // 0x570 (8)
	struct UTextBlock TextBlock_Count_Red; // 0x578 (8)
	struct UTextBlock TextBlock_Defense; // 0x580 (8)
	struct UTextBlock TextBlock_Power; // 0x588 (8)
	struct UTextBlock TextBlock_Price; // 0x590 (8)
	struct UTextBlock TextBlock_Price_2; // 0x598 (8)
	struct UTextBlock TextBlock_Select; // 0x5A0 (8)
	struct UTextBlock TextBlock_Select_2; // 0x5A8 (8)
	struct UTextBlock TextBlock_Speed; // 0x5B0 (8)
	struct UTextBlock TextBlock_SurviveMessage01; // 0x5B8 (8)
	struct UTextBlock TextBlock_SurviveMessage02; // 0x5C0 (8)
	struct UTextBlock TextBlock_UltimateDesc; // 0x5C8 (8)
	struct UHorizontalBox Title; // 0x5D0 (8)
	struct UImage UltiLight_001; // 0x5D8 (8)
	struct UImage UltiLight_002; // 0x5E0 (8)
	struct UImage UltiLight_003; // 0x5E8 (8)
	struct UUW-Inventory_PerkSlot_C UW-Inventory_PerkSlot; // 0x5F0 (8)
	struct UUW-Inventory_PerkSlot_C UW-Inventory_PerkSlot_2; // 0x5F8 (8)
	struct UUW-Inventory_PerkSlot_C UW-Inventory_PerkSlot_3; // 0x600 (8)
	struct UUW-Inventory_PerkSlot_C UW-Inventory_PerkSlot_4; // 0x608 (8)
	struct UUW-Inventory_PerkSlot_C UW-Inventory_PerkSlot_5; // 0x610 (8)
	struct UUW-Inventory_PerkSlot_C UW-Inventory_PerkSlot_6; // 0x618 (8)
	struct UUW-Inventory_PerkSlot_C UW-Inventory_PerkSlot_7; // 0x620 (8)
	struct UUW-Inventory_PerkSlot_C UW-Inventory_PerkSlot_8; // 0x628 (8)
	struct UUW-Inventory_PerkSlot_C UW-Inventory_PerkSlot_9; // 0x630 (8)
	struct UVerticalBox VB_Health; // 0x638 (8)
	struct UVerticalBox VB_Power; // 0x640 (8)
	struct UVerticalBox VB_Speed; // 0x648 (8)
	struct UVerticalBox VerticalBox_Blue; // 0x650 (8)
	struct UVerticalBox VerticalBox_Green; // 0x658 (8)
	struct UVerticalBox VerticalBox_Red; // 0x660 (8)
	struct UWidgetSwitcher WidgetSwitcher_ChangeClass; // 0x668 (8)
	struct UWidgetSwitcher WidgetSwitcher_ChangeSupply; // 0x670 (8)
	struct UWidgetSwitcher WidgetSwitcher_TreeAndClass; // 0x678 (8)
	struct UWidgetSwitcher WidgetSwitcher_Ultimate; // 0x680 (8)
	struct FName CurrentPerkDeckName; // 0x688 (8)
	struct TArray<struct UUW-Inventory_PerkSlot_C> CurrentPerkInfos; // 0x690 (16)
	struct FName ExpertWeaponKey; // 0x6A0 (8)
	struct TMap<struct FName, struct UUW-Inventory_PerkSlot_C> CurrentPerkCells; // 0x6A8 (80)
	int32_t PerkMode; // 0x6F8 (4)
	struct UUW-Inventory_ItemSlotHover_C HoverWidget; // 0x700 (8)
	int32_t PowerValue; // 0x708 (4)
	struct FTimerHandle TimerHandle_Power; // 0x710 (8)
	int32_t SpeedValue; // 0x718 (4)
	struct FTimerHandle TimerHandle_Speed; // 0x720 (8)
	int32_t DefenseValue; // 0x728 (4)
	struct FTimerHandle TimerHandle_Defense; // 0x730 (8)
	char bPlayAbilityCountSoundStart : 0; // 0x738 (1)
	char bPlayAbilityCountSoundEnd : 0; // 0x739 (1)
	struct UAkAudioEvent LevelUpSound; // 0x740 (8)
	char EnableSupplyBtn : 0; // 0x748 (1)
	struct FTimerHandle FreeSupplyTimer; // 0x750 (8)
	struct FTimerHandle NotEnoughtGoldTimer; // 0x758 (8)
	struct TArray<struct UUW-ListWidget_GainPerk_C> GainPerkPopups; // 0x760 (16)
	char IsPlayingUltimateSound : 0; // 0x770 (1)
	int32_t LastLevel; // 0x774 (4)
	struct FPerkDeckClassInfo PerkDeckClassInfo; // 0x778 (40)

	void SequenceEvent__ENTRYPOINTUW-Inventory_Perk_2(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.SequenceEvent__ENTRYPOINTUW-Inventory_Perk_2(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SequenceEvent__ENTRYPOINTUW-Inventory_Perk_1(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.SequenceEvent__ENTRYPOINTUW-Inventory_Perk_1(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetEnabledInvalidationbox(char Enabled); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.SetEnabledInvalidationbox(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ResetUltimateSound(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.ResetUltimateSound(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateInvalidationbox(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.UpdateInvalidationbox(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnChangedToggleType(enum class EToggleWidgetModeType ToggleType); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.OnChangedToggleType(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnBattleRoyaleStateChanged(enum class EBattleRoyaleState PreviousState, enum class EBattleRoyaleState CurrentState); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.OnBattleRoyaleStateChanged(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateStatsInfo(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.UpdateStatsInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetUltimateSkillKeyIcon(struct TArray<enum class EKeySettingType>& Type); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.SetUltimateSkillKeyIcon(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void PlayAbilityCountSoundEnd(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.PlayAbilityCountSoundEnd(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void PlayAbilityCountSoundStart(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.PlayAbilityCountSoundStart(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowStatusHovered(struct UWidget InHoveredWidget); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.ShowStatusHovered(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetAbilityAnimation(struct FTimerHandle& Handle, int32_t Value, struct UWidgetAnimation Animation, struct FString FunctionName, int32_t Index); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.SetAbilityAnimation(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void InitAnimation(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.InitAnimation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void DefenseCountAnimation(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.DefenseCountAnimation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SpeedCountAnimation(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.SpeedCountAnimation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void PowerCountAnimation(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.PowerCountAnimation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void PlaySoundBonusLevelUp(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.PlaySoundBonusLevelUp(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void PlaySoundTimeBonus(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.PlaySoundTimeBonus(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void GetPositionTargetPerk(enum class EPerkSlotFlag PerkSlot, int32_t PerkIndex, char& Result, struct FVector2D& Position); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.GetPositionTargetPerk(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void GetSlotAndIndexTargetPerk(struct FName TargetPerkName, char& HasPerk, enum class EPerkSlotFlag& PerkSlot, int32_t& PerkIndex); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.GetSlotAndIndexTargetPerk(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AddUltimateSkillUnlockEffect(int32_t CurrentLevel); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.AddUltimateSkillUnlockEffect(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ResetPerkCells(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.ResetPerkCells(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetClassLevelText(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.SetClassLevelText(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void PerkLevelUpEffect(struct FPerkUIInfo PerkInfo, int32_t CurrentLevel); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.PerkLevelUpEffect(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetPerkdeckWidget(char State); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.SetPerkdeckWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowUltimatePerk(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.ShowUltimatePerk(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void PlayStatsLevelUpAnim(struct FDisplayAbility IncreasedAbility); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.PlayStatsLevelUpAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void PlayLevelTextAnim(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.PlayLevelTextAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CheckUltimateOpen(int32_t CurrentLevel); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.CheckUltimateOpen(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void PerkLevelUp(struct FPerkUIInfo PerkInfo, int32_t CurrentLevel, int32_t LastLevel, char& UltimateSound); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.PerkLevelUp(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetUltimateSkillInfo(char UseLocalPlayerInfo, char IsMaxLevel); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.SetUltimateSkillInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetPriceFontColor(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.SetPriceFontColor(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FText Get_TextBlock_Price_Text_1(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.Get_TextBlock_Price_Text_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CreatePerkDeck(char UseLocalPlayerInfo, char IsMaxLevel); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.CreatePerkDeck(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetPerks(struct UUW-Inventory_ItemSlotHover_C HoverWidget, char bUseLocalPlayerInfo, char bMaxLevel, char bPerkDeckMode, struct FPerkDeckClassInfo PerkDeckClassInfo); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.SetPerks(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnLoaded_99DDE97542548A0CC17B5FBAD209C3DD(struct Object Loaded); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.OnLoaded_99DDE97542548A0CC17B5FBAD209C3DD(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnLoaded_4F86CE894B71E485811BFEA8F94AD46E(struct Object Loaded); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.OnLoaded_4F86CE894B71E485811BFEA8F94AD46E(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnLoaded_9E0A9EF44F73119D77D7119DEA0EF67A(struct Object Loaded); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.OnLoaded_9E0A9EF44F73119D77D7119DEA0EF67A(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Destruct(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AsyncLoadIcon(struct TSoftObjectPtr<Object> Image); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.AsyncLoadIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AsyncCohIcon(struct TSoftObjectPtr<Object> Image); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.AsyncCohIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void PlayReadyGivePerk(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.PlayReadyGivePerk(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void StopReadyGivePerk(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.StopReadyGivePerk(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AsyncClassIcon(struct TSoftObjectPtr<Object> Image); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.AsyncClassIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AbilityPowerAnimationFinished(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.AbilityPowerAnimationFinished(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AbilitySpeedAnimationFinished(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.AbilitySpeedAnimationFinished(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void LevelUpAnimationFinished(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.LevelUpAnimationFinished(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void PlayKillGivePerk(int32_t KillCount); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.PlayKillGivePerk(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnHoveredWidget(struct UWidget HoveredWidget); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.OnHoveredWidget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__btn_PerkDeck_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.BndEvt__btn_PerkDeck_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AbilityDefenseAnimationFinished(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.AbilityDefenseAnimationFinished(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.BndEvt__btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__btn_PerkDeck_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.BndEvt__btn_PerkDeck_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__btn_PerkDeck_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.BndEvt__btn_PerkDeck_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Construct(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__btn_PerkDeckDisabled_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.BndEvt__btn_PerkDeckDisabled_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__btn_PerkDeckEnabled_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.BndEvt__btn_PerkDeckEnabled_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void 鉹@t元_1(enum class EBattleRoyaleState PrevState, enum class EBattleRoyaleState CurrentState); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.鉹@t元_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CheckFreeSupply(char IsInventoryOpen); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.CheckFreeSupply(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void 鉹@t元_2(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.鉹@t元_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void StartUltimateAnim(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.StartUltimateAnim(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateUnlockLevel(int32_t NewLevel); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.UpdateUnlockLevel(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void K2_RefreshPerkDeck(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.K2_RefreshPerkDeck(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void 鉹@t元_3(); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.鉹@t元_3(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetEnoughGold(char IsEnough); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.SetEnoughGold(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_UW-Inventory_Perk(int32_t EntryPoint); // Function UW-Inventory_Perk.UW-Inventory_Perk_C.ExecuteUbergraph_UW-Inventory_Perk(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.SequenceEvent__ENTRYPOINTUW-Inventory_Perk_2
inline void UUW-Inventory_Perk_C::SequenceEvent__ENTRYPOINTUW-Inventory_Perk_2() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.SequenceEvent__ENTRYPOINTUW-Inventory_Perk_2");

	struct SequenceEvent__ENTRYPOINTUW-Inventory_Perk_2_Params {
		
	}; SequenceEvent__ENTRYPOINTUW-Inventory_Perk_2_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.SequenceEvent__ENTRYPOINTUW-Inventory_Perk_1
inline void UUW-Inventory_Perk_C::SequenceEvent__ENTRYPOINTUW-Inventory_Perk_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.SequenceEvent__ENTRYPOINTUW-Inventory_Perk_1");

	struct SequenceEvent__ENTRYPOINTUW-Inventory_Perk_1_Params {
		
	}; SequenceEvent__ENTRYPOINTUW-Inventory_Perk_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.SetEnabledInvalidationbox
inline void UUW-Inventory_Perk_C::SetEnabledInvalidationbox(char Enabled) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.SetEnabledInvalidationbox");

	struct SetEnabledInvalidationbox_Params {
		char Enabled;
	}; SetEnabledInvalidationbox_Params Params;

	Params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.ResetUltimateSound
inline void UUW-Inventory_Perk_C::ResetUltimateSound() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.ResetUltimateSound");

	struct ResetUltimateSound_Params {
		
	}; ResetUltimateSound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.UpdateInvalidationbox
inline void UUW-Inventory_Perk_C::UpdateInvalidationbox() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.UpdateInvalidationbox");

	struct UpdateInvalidationbox_Params {
		
	}; UpdateInvalidationbox_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.OnChangedToggleType
inline void UUW-Inventory_Perk_C::OnChangedToggleType(enum class EToggleWidgetModeType ToggleType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.OnChangedToggleType");

	struct OnChangedToggleType_Params {
		enum class EToggleWidgetModeType ToggleType;
	}; OnChangedToggleType_Params Params;

	Params.ToggleType = ToggleType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.OnBattleRoyaleStateChanged
inline void UUW-Inventory_Perk_C::OnBattleRoyaleStateChanged(enum class EBattleRoyaleState PreviousState, enum class EBattleRoyaleState CurrentState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.OnBattleRoyaleStateChanged");

	struct OnBattleRoyaleStateChanged_Params {
		enum class EBattleRoyaleState PreviousState;
		enum class EBattleRoyaleState CurrentState;
	}; OnBattleRoyaleStateChanged_Params Params;

	Params.PreviousState = PreviousState;
	Params.CurrentState = CurrentState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.UpdateStatsInfo
inline void UUW-Inventory_Perk_C::UpdateStatsInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.UpdateStatsInfo");

	struct UpdateStatsInfo_Params {
		
	}; UpdateStatsInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.OnMouseButtonDown
inline struct FEventReply UUW-Inventory_Perk_C::OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.OnMouseButtonDown");

	struct OnMouseButtonDown_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseButtonDown_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.SetUltimateSkillKeyIcon
inline void UUW-Inventory_Perk_C::SetUltimateSkillKeyIcon(struct TArray<enum class EKeySettingType>& Type) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.SetUltimateSkillKeyIcon");

	struct SetUltimateSkillKeyIcon_Params {
		struct TArray<enum class EKeySettingType>& Type;
	}; SetUltimateSkillKeyIcon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Type = Params.Type;

}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.PlayAbilityCountSoundEnd
inline void UUW-Inventory_Perk_C::PlayAbilityCountSoundEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.PlayAbilityCountSoundEnd");

	struct PlayAbilityCountSoundEnd_Params {
		
	}; PlayAbilityCountSoundEnd_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.PlayAbilityCountSoundStart
inline void UUW-Inventory_Perk_C::PlayAbilityCountSoundStart() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.PlayAbilityCountSoundStart");

	struct PlayAbilityCountSoundStart_Params {
		
	}; PlayAbilityCountSoundStart_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.ShowStatusHovered
inline void UUW-Inventory_Perk_C::ShowStatusHovered(struct UWidget InHoveredWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.ShowStatusHovered");

	struct ShowStatusHovered_Params {
		struct UWidget InHoveredWidget;
	}; ShowStatusHovered_Params Params;

	Params.InHoveredWidget = InHoveredWidget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.SetAbilityAnimation
inline void UUW-Inventory_Perk_C::SetAbilityAnimation(struct FTimerHandle& Handle, int32_t Value, struct UWidgetAnimation Animation, struct FString FunctionName, int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.SetAbilityAnimation");

	struct SetAbilityAnimation_Params {
		struct FTimerHandle& Handle;
		int32_t Value;
		struct UWidgetAnimation Animation;
		struct FString FunctionName;
		int32_t Index;
	}; SetAbilityAnimation_Params Params;

	Params.Value = Value;
	Params.Animation = Animation;
	Params.FunctionName = FunctionName;
	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Handle = Params.Handle;

}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.InitAnimation
inline void UUW-Inventory_Perk_C::InitAnimation() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.InitAnimation");

	struct InitAnimation_Params {
		
	}; InitAnimation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.DefenseCountAnimation
inline void UUW-Inventory_Perk_C::DefenseCountAnimation() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.DefenseCountAnimation");

	struct DefenseCountAnimation_Params {
		
	}; DefenseCountAnimation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.SpeedCountAnimation
inline void UUW-Inventory_Perk_C::SpeedCountAnimation() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.SpeedCountAnimation");

	struct SpeedCountAnimation_Params {
		
	}; SpeedCountAnimation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.PowerCountAnimation
inline void UUW-Inventory_Perk_C::PowerCountAnimation() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.PowerCountAnimation");

	struct PowerCountAnimation_Params {
		
	}; PowerCountAnimation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.PlaySoundBonusLevelUp
inline void UUW-Inventory_Perk_C::PlaySoundBonusLevelUp() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.PlaySoundBonusLevelUp");

	struct PlaySoundBonusLevelUp_Params {
		
	}; PlaySoundBonusLevelUp_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.PlaySoundTimeBonus
inline void UUW-Inventory_Perk_C::PlaySoundTimeBonus() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.PlaySoundTimeBonus");

	struct PlaySoundTimeBonus_Params {
		
	}; PlaySoundTimeBonus_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.GetPositionTargetPerk
inline void UUW-Inventory_Perk_C::GetPositionTargetPerk(enum class EPerkSlotFlag PerkSlot, int32_t PerkIndex, char& Result, struct FVector2D& Position) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.GetPositionTargetPerk");

	struct GetPositionTargetPerk_Params {
		enum class EPerkSlotFlag PerkSlot;
		int32_t PerkIndex;
		char& Result;
		struct FVector2D& Position;
	}; GetPositionTargetPerk_Params Params;

	Params.PerkSlot = PerkSlot;
	Params.PerkIndex = PerkIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;
	Position = Params.Position;

}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.GetSlotAndIndexTargetPerk
inline void UUW-Inventory_Perk_C::GetSlotAndIndexTargetPerk(struct FName TargetPerkName, char& HasPerk, enum class EPerkSlotFlag& PerkSlot, int32_t& PerkIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.GetSlotAndIndexTargetPerk");

	struct GetSlotAndIndexTargetPerk_Params {
		struct FName TargetPerkName;
		char& HasPerk;
		enum class EPerkSlotFlag& PerkSlot;
		int32_t& PerkIndex;
	}; GetSlotAndIndexTargetPerk_Params Params;

	Params.TargetPerkName = TargetPerkName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	HasPerk = Params.HasPerk;
	PerkSlot = Params.PerkSlot;
	PerkIndex = Params.PerkIndex;

}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.AddUltimateSkillUnlockEffect
inline void UUW-Inventory_Perk_C::AddUltimateSkillUnlockEffect(int32_t CurrentLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.AddUltimateSkillUnlockEffect");

	struct AddUltimateSkillUnlockEffect_Params {
		int32_t CurrentLevel;
	}; AddUltimateSkillUnlockEffect_Params Params;

	Params.CurrentLevel = CurrentLevel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.ResetPerkCells
inline void UUW-Inventory_Perk_C::ResetPerkCells() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.ResetPerkCells");

	struct ResetPerkCells_Params {
		
	}; ResetPerkCells_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.SetClassLevelText
inline void UUW-Inventory_Perk_C::SetClassLevelText() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.SetClassLevelText");

	struct SetClassLevelText_Params {
		
	}; SetClassLevelText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.PerkLevelUpEffect
inline void UUW-Inventory_Perk_C::PerkLevelUpEffect(struct FPerkUIInfo PerkInfo, int32_t CurrentLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.PerkLevelUpEffect");

	struct PerkLevelUpEffect_Params {
		struct FPerkUIInfo PerkInfo;
		int32_t CurrentLevel;
	}; PerkLevelUpEffect_Params Params;

	Params.PerkInfo = PerkInfo;
	Params.CurrentLevel = CurrentLevel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.SetPerkdeckWidget
inline void UUW-Inventory_Perk_C::SetPerkdeckWidget(char State) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.SetPerkdeckWidget");

	struct SetPerkdeckWidget_Params {
		char State;
	}; SetPerkdeckWidget_Params Params;

	Params.State = State;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.ShowUltimatePerk
inline void UUW-Inventory_Perk_C::ShowUltimatePerk() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.ShowUltimatePerk");

	struct ShowUltimatePerk_Params {
		
	}; ShowUltimatePerk_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.PlayStatsLevelUpAnim
inline void UUW-Inventory_Perk_C::PlayStatsLevelUpAnim(struct FDisplayAbility IncreasedAbility) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.PlayStatsLevelUpAnim");

	struct PlayStatsLevelUpAnim_Params {
		struct FDisplayAbility IncreasedAbility;
	}; PlayStatsLevelUpAnim_Params Params;

	Params.IncreasedAbility = IncreasedAbility;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.PlayLevelTextAnim
inline void UUW-Inventory_Perk_C::PlayLevelTextAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.PlayLevelTextAnim");

	struct PlayLevelTextAnim_Params {
		
	}; PlayLevelTextAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.CheckUltimateOpen
inline void UUW-Inventory_Perk_C::CheckUltimateOpen(int32_t CurrentLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.CheckUltimateOpen");

	struct CheckUltimateOpen_Params {
		int32_t CurrentLevel;
	}; CheckUltimateOpen_Params Params;

	Params.CurrentLevel = CurrentLevel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.PerkLevelUp
inline void UUW-Inventory_Perk_C::PerkLevelUp(struct FPerkUIInfo PerkInfo, int32_t CurrentLevel, int32_t LastLevel, char& UltimateSound) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.PerkLevelUp");

	struct PerkLevelUp_Params {
		struct FPerkUIInfo PerkInfo;
		int32_t CurrentLevel;
		int32_t LastLevel;
		char& UltimateSound;
	}; PerkLevelUp_Params Params;

	Params.PerkInfo = PerkInfo;
	Params.CurrentLevel = CurrentLevel;
	Params.LastLevel = LastLevel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	UltimateSound = Params.UltimateSound;

}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.SetUltimateSkillInfo
inline void UUW-Inventory_Perk_C::SetUltimateSkillInfo(char UseLocalPlayerInfo, char IsMaxLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.SetUltimateSkillInfo");

	struct SetUltimateSkillInfo_Params {
		char UseLocalPlayerInfo;
		char IsMaxLevel;
	}; SetUltimateSkillInfo_Params Params;

	Params.UseLocalPlayerInfo = UseLocalPlayerInfo;
	Params.IsMaxLevel = IsMaxLevel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.SetPriceFontColor
inline void UUW-Inventory_Perk_C::SetPriceFontColor() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.SetPriceFontColor");

	struct SetPriceFontColor_Params {
		
	}; SetPriceFontColor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.Get_TextBlock_Price_Text_1
inline struct FText UUW-Inventory_Perk_C::Get_TextBlock_Price_Text_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.Get_TextBlock_Price_Text_1");

	struct Get_TextBlock_Price_Text_1_Params {
		
		struct FText ReturnValue;

	}; Get_TextBlock_Price_Text_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.CreatePerkDeck
inline void UUW-Inventory_Perk_C::CreatePerkDeck(char UseLocalPlayerInfo, char IsMaxLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.CreatePerkDeck");

	struct CreatePerkDeck_Params {
		char UseLocalPlayerInfo;
		char IsMaxLevel;
	}; CreatePerkDeck_Params Params;

	Params.UseLocalPlayerInfo = UseLocalPlayerInfo;
	Params.IsMaxLevel = IsMaxLevel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.SetPerks
inline void UUW-Inventory_Perk_C::SetPerks(struct UUW-Inventory_ItemSlotHover_C HoverWidget, char bUseLocalPlayerInfo, char bMaxLevel, char bPerkDeckMode, struct FPerkDeckClassInfo PerkDeckClassInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.SetPerks");

	struct SetPerks_Params {
		struct UUW-Inventory_ItemSlotHover_C HoverWidget;
		char bUseLocalPlayerInfo;
		char bMaxLevel;
		char bPerkDeckMode;
		struct FPerkDeckClassInfo PerkDeckClassInfo;
	}; SetPerks_Params Params;

	Params.HoverWidget = HoverWidget;
	Params.bUseLocalPlayerInfo = bUseLocalPlayerInfo;
	Params.bMaxLevel = bMaxLevel;
	Params.bPerkDeckMode = bPerkDeckMode;
	Params.PerkDeckClassInfo = PerkDeckClassInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.OnLoaded_99DDE97542548A0CC17B5FBAD209C3DD
inline void UUW-Inventory_Perk_C::OnLoaded_99DDE97542548A0CC17B5FBAD209C3DD(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.OnLoaded_99DDE97542548A0CC17B5FBAD209C3DD");

	struct OnLoaded_99DDE97542548A0CC17B5FBAD209C3DD_Params {
		struct Object Loaded;
	}; OnLoaded_99DDE97542548A0CC17B5FBAD209C3DD_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.OnLoaded_4F86CE894B71E485811BFEA8F94AD46E
inline void UUW-Inventory_Perk_C::OnLoaded_4F86CE894B71E485811BFEA8F94AD46E(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.OnLoaded_4F86CE894B71E485811BFEA8F94AD46E");

	struct OnLoaded_4F86CE894B71E485811BFEA8F94AD46E_Params {
		struct Object Loaded;
	}; OnLoaded_4F86CE894B71E485811BFEA8F94AD46E_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.OnLoaded_9E0A9EF44F73119D77D7119DEA0EF67A
inline void UUW-Inventory_Perk_C::OnLoaded_9E0A9EF44F73119D77D7119DEA0EF67A(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.OnLoaded_9E0A9EF44F73119D77D7119DEA0EF67A");

	struct OnLoaded_9E0A9EF44F73119D77D7119DEA0EF67A_Params {
		struct Object Loaded;
	}; OnLoaded_9E0A9EF44F73119D77D7119DEA0EF67A_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.Destruct
inline void UUW-Inventory_Perk_C::Destruct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.Destruct");

	struct Destruct_Params {
		
	}; Destruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.AsyncLoadIcon
inline void UUW-Inventory_Perk_C::AsyncLoadIcon(struct TSoftObjectPtr<Object> Image) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.AsyncLoadIcon");

	struct AsyncLoadIcon_Params {
		struct TSoftObjectPtr<Object> Image;
	}; AsyncLoadIcon_Params Params;

	Params.Image = Image;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.AsyncCohIcon
inline void UUW-Inventory_Perk_C::AsyncCohIcon(struct TSoftObjectPtr<Object> Image) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.AsyncCohIcon");

	struct AsyncCohIcon_Params {
		struct TSoftObjectPtr<Object> Image;
	}; AsyncCohIcon_Params Params;

	Params.Image = Image;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.PlayReadyGivePerk
inline void UUW-Inventory_Perk_C::PlayReadyGivePerk() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.PlayReadyGivePerk");

	struct PlayReadyGivePerk_Params {
		
	}; PlayReadyGivePerk_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.StopReadyGivePerk
inline void UUW-Inventory_Perk_C::StopReadyGivePerk() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.StopReadyGivePerk");

	struct StopReadyGivePerk_Params {
		
	}; StopReadyGivePerk_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.AsyncClassIcon
inline void UUW-Inventory_Perk_C::AsyncClassIcon(struct TSoftObjectPtr<Object> Image) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.AsyncClassIcon");

	struct AsyncClassIcon_Params {
		struct TSoftObjectPtr<Object> Image;
	}; AsyncClassIcon_Params Params;

	Params.Image = Image;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.AbilityPowerAnimationFinished
inline void UUW-Inventory_Perk_C::AbilityPowerAnimationFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.AbilityPowerAnimationFinished");

	struct AbilityPowerAnimationFinished_Params {
		
	}; AbilityPowerAnimationFinished_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.AbilitySpeedAnimationFinished
inline void UUW-Inventory_Perk_C::AbilitySpeedAnimationFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.AbilitySpeedAnimationFinished");

	struct AbilitySpeedAnimationFinished_Params {
		
	}; AbilitySpeedAnimationFinished_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.LevelUpAnimationFinished
inline void UUW-Inventory_Perk_C::LevelUpAnimationFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.LevelUpAnimationFinished");

	struct LevelUpAnimationFinished_Params {
		
	}; LevelUpAnimationFinished_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.PlayKillGivePerk
inline void UUW-Inventory_Perk_C::PlayKillGivePerk(int32_t KillCount) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.PlayKillGivePerk");

	struct PlayKillGivePerk_Params {
		int32_t KillCount;
	}; PlayKillGivePerk_Params Params;

	Params.KillCount = KillCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.OnHoveredWidget
inline void UUW-Inventory_Perk_C::OnHoveredWidget(struct UWidget HoveredWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.OnHoveredWidget");

	struct OnHoveredWidget_Params {
		struct UWidget HoveredWidget;
	}; OnHoveredWidget_Params Params;

	Params.HoveredWidget = HoveredWidget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.BndEvt__btn_PerkDeck_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
inline void UUW-Inventory_Perk_C::BndEvt__btn_PerkDeck_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.BndEvt__btn_PerkDeck_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__btn_PerkDeck_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_PerkDeck_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.AbilityDefenseAnimationFinished
inline void UUW-Inventory_Perk_C::AbilityDefenseAnimationFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.AbilityDefenseAnimationFinished");

	struct AbilityDefenseAnimationFinished_Params {
		
	}; AbilityDefenseAnimationFinished_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.BndEvt__btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
inline void UUW-Inventory_Perk_C::BndEvt__btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.BndEvt__btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.BndEvt__btn_PerkDeck_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
inline void UUW-Inventory_Perk_C::BndEvt__btn_PerkDeck_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.BndEvt__btn_PerkDeck_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__btn_PerkDeck_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_PerkDeck_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.BndEvt__btn_PerkDeck_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-Inventory_Perk_C::BndEvt__btn_PerkDeck_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.BndEvt__btn_PerkDeck_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__btn_PerkDeck_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_PerkDeck_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.Construct
inline void UUW-Inventory_Perk_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.BndEvt__btn_PerkDeckDisabled_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
inline void UUW-Inventory_Perk_C::BndEvt__btn_PerkDeckDisabled_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.BndEvt__btn_PerkDeckDisabled_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__btn_PerkDeckDisabled_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_PerkDeckDisabled_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.BndEvt__btn_PerkDeckEnabled_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
inline void UUW-Inventory_Perk_C::BndEvt__btn_PerkDeckEnabled_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.BndEvt__btn_PerkDeckEnabled_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__btn_PerkDeckEnabled_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_PerkDeckEnabled_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.鉹@t元_1
inline void UUW-Inventory_Perk_C::鉹@t元_1(enum class EBattleRoyaleState PrevState, enum class EBattleRoyaleState CurrentState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.鉹@t元_1");

	struct 鉹@t元_1_Params {
		enum class EBattleRoyaleState PrevState;
		enum class EBattleRoyaleState CurrentState;
	}; 鉹@t元_1_Params Params;

	Params.PrevState = PrevState;
	Params.CurrentState = CurrentState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.CheckFreeSupply
inline void UUW-Inventory_Perk_C::CheckFreeSupply(char IsInventoryOpen) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.CheckFreeSupply");

	struct CheckFreeSupply_Params {
		char IsInventoryOpen;
	}; CheckFreeSupply_Params Params;

	Params.IsInventoryOpen = IsInventoryOpen;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.鉹@t元_2
inline void UUW-Inventory_Perk_C::鉹@t元_2() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.鉹@t元_2");

	struct 鉹@t元_2_Params {
		
	}; 鉹@t元_2_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.StartUltimateAnim
inline void UUW-Inventory_Perk_C::StartUltimateAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.StartUltimateAnim");

	struct StartUltimateAnim_Params {
		
	}; StartUltimateAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.UpdateUnlockLevel
inline void UUW-Inventory_Perk_C::UpdateUnlockLevel(int32_t NewLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.UpdateUnlockLevel");

	struct UpdateUnlockLevel_Params {
		int32_t NewLevel;
	}; UpdateUnlockLevel_Params Params;

	Params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.K2_RefreshPerkDeck
inline void UUW-Inventory_Perk_C::K2_RefreshPerkDeck() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.K2_RefreshPerkDeck");

	struct K2_RefreshPerkDeck_Params {
		
	}; K2_RefreshPerkDeck_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.鉹@t元_3
inline void UUW-Inventory_Perk_C::鉹@t元_3() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.鉹@t元_3");

	struct 鉹@t元_3_Params {
		
	}; 鉹@t元_3_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.SetEnoughGold
inline void UUW-Inventory_Perk_C::SetEnoughGold(char IsEnough) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.SetEnoughGold");

	struct SetEnoughGold_Params {
		char IsEnough;
	}; SetEnoughGold_Params Params;

	Params.IsEnough = IsEnough;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Perk.UW-Inventory_Perk_C.ExecuteUbergraph_UW-Inventory_Perk
inline void UUW-Inventory_Perk_C::ExecuteUbergraph_UW-Inventory_Perk(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Perk.UW-Inventory_Perk_C.ExecuteUbergraph_UW-Inventory_Perk");

	struct ExecuteUbergraph_UW-Inventory_Perk_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Inventory_Perk_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

