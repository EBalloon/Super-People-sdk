// WidgetBlueprintGeneratedClass U.U
class UU : public UU {

public:

	struct Unknown UberGraphFrame; // 0x1360 (8)
	struct Unknown Ani_Tutorial_Glow; // 0x1368 (8)
	struct Unknown P_Upgrade_Arrow; // 0x1370 (8)
	struct Unknown C_SlotHover_ItemState_Hide; // 0x1378 (8)
	struct Unknown C_SlotHover_ItemState_Show; // 0x1380 (8)
	struct Unknown Hover_Gold; // 0x1388 (8)
	struct Unknown P_SlotHover; // 0x1390 (8)
	struct Unknown BGImage; // 0x1398 (8)
	struct Unknown CanvasPanel_ITemState; // 0x13A0 (8)
	struct Unknown Count; // 0x13A8 (8)
	struct Unknown Effect_Craft; // 0x13B0 (8)
	struct Unknown HorizontalBox_Rarity; // 0x13B8 (8)
	struct Unknown HoverImage; // 0x13C0 (8)
	struct Unknown HoverImage_Gold; // 0x13C8 (8)
	struct Unknown IconRepair; // 0x13D0 (8)
	struct Unknown Image_1; // 0x13D8 (8)
	struct Unknown Image_2; // 0x13E0 (8)
	struct Unknown Image_222; // 0x13E8 (8)
	struct Unknown ItemImage; // 0x13F0 (8)
	struct Unknown ItemNameName; // 0x13F8 (8)
	struct Unknown ItemState_Text; // 0x1400 (8)
	struct Unknown NeedMaterial; // 0x1408 (8)
	struct Unknown Overlay_Key; // 0x1410 (8)
	struct Unknown ProgressBar_475; // 0x1418 (8)
	struct Unknown SizeBox_1; // 0x1420 (8)
	struct Unknown TextBlock_ShortCut; // 0x1428 (8)
	struct Unknown Tutorial_Glow; // 0x1430 (8)
	struct Unknown U; // 0x1438 (8)
	struct Unknown U; // 0x1440 (8)
	struct Unknown WeaponItemImage; // 0x1448 (8)
	char bGold : 0; // 0x1450 (1)
	struct Unknown SelectedHoverImage; // 0x1458 (8)
	struct Unknown MedicalBGColor; // 0x1460 (16)
	struct FMulticastInlineDelegate SetSlotInfo; // 0x1470 (16)
	int32_t SlotIndex; // 0x1480 (4)
	struct FName RecipeKey; // 0x1484 (8)
	struct Unknown RecipeData; // 0x1490 (56)
	char bLeftClicked : 0; // 0x14C8 (1)
	char CanCraft : 0; // 0x14C9 (1)

	void Get(char& bResult, struct Unknown& WeaponInfo); // Function U.U.Get(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetKeyNameFromKey(struct Unknown& Key, struct FString& Name, char& bRet); // Function U.U.GetKeyNameFromKey(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetKeyText(); // Function U.U.SetKeyText(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetRightClickBig(); // Function U.U.SetRightClickBig(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetRightClickSmall(char IsVisible); // Function U.U.SetRightClickSmall(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnMouseButtonUp(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseButtonUp(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetInfo(struct FName RecipeKey, int32_t SlotIndex); // Function U.U.SetInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetItemRarityColor(enum class Unknow CurrentSlot, struct Unknown ImageWidget); // Function U.U.SetItemRarityColor(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void MouseEnterImpl(); // Function U.U.MouseEnterImpl(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetWeaponImage_Internal(struct Unknown IconTexture); // Function U.U.SetWeaponImage_Internal(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown Set(struct Unknown IconTexture); // Function U.U.Set(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsDraging(char& bResult); // Function U.U.IsDraging(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragDetected(struct Unknown MyGeometry, struct Unknown& PointerEvent, struct Unknown& Operation); // Function U.U.OnDragDetected(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnRButtonClick(char& bResult); // Function U.U.OnRButtonClick(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown Set_BGImage_Brush_1(); // Function U.U.Set_BGImage_Brush_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown SetItemImage(); // Function U.U.SetItemImage(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_DABF06DE406801A7910E4CB19855F653(struct Unknown Loaded); // Function U.U.OnLoaded_DABF06DE406801A7910E4CB19855F653(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function U.U.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadIconTexture(struct Unknown IconTexture); // Function U.U.AsyncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnUpdateCastingDelegateEvent(struct Unknown& CastingInfo, float CastingPercent); // Function U.U.OnUpdateCastingDelegateEvent(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetSlotInfo__DelegateSignature(struct Unknown TargetActor, struct Unknown ItemInfo); // Function U.U.SetSlotInfo__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown Image_112; // 0x248 (8)
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown TextBlock_Gold; // 0x248 (8)
	struct Unknown TextBlock_Title; // 0x250 (8)
	struct Unknown ColorType1; // 0x258 (40)
	struct Unknown ColorType2; // 0x280 (40)

	void Init(struct FText Title, int32_t Value); // Function U.U.Init(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown U; // 0x250 (8)
	struct Unknown HoverWidget; // 0x258 (8)

	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown EnemySkull; // 0x250 (8)
	struct Unknown Image_436; // 0x258 (8)
	struct Unknown Pawn; // 0x260 (8)

	void SetDiedPawnInfo(struct Unknown BroadCastInfo); // Function U.U.SetDiedPawnInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StartAnim(); // Function U.U.StartAnim(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StartSetPosition(); // Function U.U.StartSetPosition(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Button_Main; // 0x250 (8)
	struct Unknown Image_ClassIcon; // 0x258 (8)
	struct Unknown Image_ComingSoonBg; // 0x260 (8)
	struct Unknown Image_Disabled; // 0x268 (8)
	struct Unknown Image_Outline; // 0x270 (8)
	struct Unknown Image_Push; // 0x278 (8)
	struct Unknown Overlay_Main; // 0x280 (8)
	struct Unknown T_ComingSoon; // 0x288 (8)
	struct Unknown U; // 0x290 (8)
	struct Unknown U_2; // 0x298 (8)
	struct Unknown U_3; // 0x2A0 (8)
	struct Unknown U; // 0x2A8 (8)
	struct Unknown VerticalBox_Selected; // 0x2B0 (8)
	struct Unknown PerkDeckClassInfo; // 0x2B8 (40)
	int32_t SelectedNum; // 0x2E0 (4)
	int32_t SelectedMinIndex; // 0x2E4 (4)
	struct FMulticastInlineDelegate ChooseClass; // 0x2E8 (16)
	int32_t ClassIndex; // 0x2F8 (4)
	struct FMulticastInlineDelegate HoverClass; // 0x300 (16)
	char bIsLocalSelected : 0; // 0x310 (1)
	char bIsSelected : 0; // 0x311 (1)
	struct Unknown CurrentPerkDeckData; // 0x318 (1200)
	char bIsDuplicateSelectPossible : 0; // 0x7C8 (1)
	char bButtonDisabled : 0; // 0x7C9 (1)
	char bNoUpdatedDisabled : 0; // 0x7CA (1)
	char bIsBlocked : 0; // 0x7CB (1)

	void SetBlocked(char IsBlocked, char ComingSoon); // Function U.U.SetBlocked(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DisableWithoutSelected(); // Function U.U.DisableWithoutSelected(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateButtonDisabled(); // Function U.U.UpdateButtonDisabled(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateOutLine(); // Function U.U.UpdateOutLine(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetSelectedInfo(struct Unknown& PlayerState); // Function U.U.SetSelectedInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetSelected(); // Function U.U.ResetSelected(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPerkDeckClassInfoByRowName(struct FName RowName); // Function U.U.SetPerkDeckClassInfoByRowName(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPerkDeckClassInfo(struct Unknown& PerkDeckClassInfo, int32_t ClassIndex); // Function U.U.SetPerkDeckClassInfo(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_4ECB692A48B41C9343CA15BDA4F3DA1C(struct Unknown Loaded); // Function U.U.OnLoaded_4ECB692A48B41C9343CA15BDA4F3DA1C(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_101_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_101_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_101_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_101_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Main_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Main_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadingClassSelectIcon(struct Unknown Texture); // Function U.U.AsyncLoadingClassSelectIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverClass__DelegateSignature(int32_t ClassIndex, char IsHoverd); // Function U.U.HoverClass__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ChooseClass__DelegateSignature(int32_t ClassIndex); // Function U.U.ChooseClass__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelVoiceTalkWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Image; // 0x250 (8)
	struct Unknown ScrollBox_99; // 0x258 (8)
	struct Unknown U; // 0x260 (8)
	struct Unknown U_135; // 0x268 (8)
	struct Unknown U_196; // 0x270 (8)
	struct TArray<Unknown> TempTeamPlayers; // 0x278 (16)

	void CheckCreateSlot(char& bRet); // Function U.U.CheckCreateSlot(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ChangeVolumeState(struct Unknown VoiceTalkState); // Function U.U.ChangeVolumeState(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown GoldImage; // 0x250 (8)
	struct Unknown Image_362; // 0x258 (8)
	struct Unknown Message; // 0x260 (8)
	struct Unknown PriceValue; // 0x268 (8)
	struct Unknown SizeBox_2; // 0x270 (8)

	void SetPriceData(struct FText ItemName, int32_t Price); // Function U.U.SetPriceData(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetData(struct FText Msg); // Function U.U.SetData(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelNetworkDelayWidget {

public:

	struct Unknown Image_350; // 0x260 (8)
	struct Unknown Image_409; // 0x268 (8)
	struct Unknown Image_479; // 0x270 (8)
	struct Unknown Image_564; // 0x278 (8)
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelScopeWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Idle; // 0x250 (8)
	struct Unknown Scope_In; // 0x258 (8)
	struct Unknown CanvasPanel_1; // 0x260 (8)
	struct Unknown Scope_Center; // 0x268 (8)
	struct Unknown Scope_Center_Dot; // 0x270 (8)

	void SetScopeImageAngle(float NewAngle); // Function U.U.SetScopeImageAngle(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_OnEnterADS(); // Function U.U.K2_OnEnterADS(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_OnExitADS(); // Function U.U.K2_OnExitADS(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelReplayPlayerListGroup {

public:

	struct Unknown UberGraphFrame; // 0x260 (8)
	struct Unknown Img_TeamColor; // 0x268 (8)
	struct Unknown T_TeamNum; // 0x270 (8)
	struct Unknown VB_PlayerList; // 0x278 (8)

	void CheckEmptyGroup(); // Function U.U.CheckEmptyGroup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTeamColor(); // Function U.U.SetTeamColor(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTeamNumText(); // Function U.U.SetTeamNumText(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Init(struct Unknown PlayerState); // Function U.U.Init(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdatePlayerInfo(enum class Unknow PlayerListSortType); // Function U.U.UpdatePlayerInfo(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown IMG_PerkLevelUpFx; // 0x250 (8)
	enum class Unknow PerkSlot; // 0x258 (1)
	struct Unknown PerkFxTexture; // 0x260 (8)
	char PlayAnimation_1 : 0; // 0x268 (1)
	float CurrentAnimationTime; // 0x26C (4)
	float AnimLastTime; // 0x270 (4)
	struct Unknown PerkFxMaterialInstance; // 0x278 (8)
	struct Unknown UltimatePerkFxTexture; // 0x280 (8)

	void InitFxInfo(); // Function U.U.InitFxInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelInventoryPerkSlotWidget {

public:

	struct Unknown UberGraphFrame; // 0x2A0 (8)
	struct Unknown LevelUp; // 0x2A8 (8)
	struct Unknown Blank_SkillBG; // 0x2B0 (8)
	struct Unknown Get_SkillBG; // 0x2B8 (8)
	struct Unknown IMG_CoolTime; // 0x2C0 (8)
	struct Unknown IMG_PerkIcon; // 0x2C8 (8)
	struct Unknown KeyImageWidget; // 0x2D0 (8)
	struct Unknown Lv1; // 0x2D8 (8)
	struct Unknown Lv2; // 0x2E0 (8)
	struct Unknown Lv3; // 0x2E8 (8)
	struct Unknown Over_CoolTime; // 0x2F0 (8)
	struct Unknown T_CoolTime; // 0x2F8 (8)
	struct Unknown T_PerkName; // 0x300 (8)
	struct Unknown WidgetSwitcher_Icon; // 0x308 (8)
	char bHover : 0; // 0x310 (1)
	float CurrentExpPercent; // 0x314 (4)
	int32_t CurrentLevel; // 0x318 (4)
	int32_t LastLevel; // 0x31C (4)
	float TargetExpPercent; // 0x320 (4)
	float ExpSpeed; // 0x324 (4)
	struct Unknown PerkData; // 0x328 (224)
	float CurrentLevelPercent; // 0x408 (4)
	int32_t MaxLevel; // 0x40C (4)
	struct Unknown HoverWidget; // 0x410 (8)
	struct TArray<Unknown> LvArray; // 0x418 (16)

	void SetForVisual(); // Function U.U.SetForVisual(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPerkName(); // Function U.U.SetPerkName(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitActiveColor(); // Function U.U.InitActiveColor(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Init(struct TArray<Unknown>& List); // Function U.U.Init(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitLevelWidget(); // Function U.U.InitLevelWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateForInit(); // Function U.U.UpdateForInit(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateLevelWidget(); // Function U.U.UpdateLevelWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitSkillBGImg(); // Function U.U.InitSkillBGImg(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown GetSlotColor(); // Function U.U.GetSlotColor(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetLevelUp(int32_t TargetLevel, int32_t TargetExp); // Function U.U.SetLevelUp(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	float GetExpPercent(); // Function U.U.GetExpPercent(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPerk(struct Unknown HoverWidget, struct Unknown PerkInfo, char JustVisual); // Function U.U.SetPerk(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_40E2F69B49645C79FC493E8F13CDBE28(struct Unknown Loaded); // Function U.U.OnLoaded_40E2F69B49645C79FC493E8F13CDBE28(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_D7551D6C4C375F77D2FAE6B8B3229914(struct Unknown Loaded); // Function U.U.OnLoaded_D7551D6C4C375F77D2FAE6B8B3229914(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_66A872FA4BD6D4BAE1E1DBAA7A175011(struct Unknown Loaded); // Function U.U.OnLoaded_66A872FA4BD6D4BAE1E1DBAA7A175011(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadIcon(struct Unknown Image); // Function U.U.AsyncLoadIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadBG(struct Unknown Image); // Function U.U.AsyncLoadBG(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadBlank(struct Unknown Image); // Function U.U.AsyncLoadBlank(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelPlayerInfoProgressWidget {

public:

	struct Unknown UberGraphFrame; // 0x2E8 (8)
	struct Unknown Anim_Healing; // 0x2F0 (8)
	struct Unknown HorizontalBox_Health; // 0x2F8 (8)
	struct Unknown Image_eager; // 0x300 (8)
	struct Unknown SizeBox_main; // 0x308 (8)
	struct Unknown Curve_ProgressMaxSizeRatio; // 0x310 (8)
	float DefaultSlotSize; // 0x318 (4)
	float MaxHealthSize; // 0x31C (4)
	float CurrentHealthSize; // 0x320 (4)
	float CurrentMaxHealth; // 0x324 (4)

	void GetHealthPosition(float InHealth, float& PositionX); // Function U.U.GetHealthPosition(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HiddenAllSlots(); // Function U.U.HiddenAllSlots(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnSetSlotWidgets(int32_t InNewMaxHealth); // Function U.U.OnSetSlotWidgets(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetSlotWidgets(int32_t InNewMaxHealth); // Function U.U.SetSlotWidgets(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayIncreaseMaxHealthAnim(int32_t InLastHealth, int32_t InNewHealth); // Function U.U.PlayIncreaseMaxHealthAnim(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowDecreaseCurrentHealthAnim(int32_t InNewHealth); // Function U.U.ShowDecreaseCurrentHealthAnim(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateOverHealing(int32_t InNewHealth, char bFlag); // Function U.U.UpdateOverHealing(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Button; // 0x250 (8)
	struct Unknown Button_Text; // 0x258 (8)
	struct Unknown Overlay_Button; // 0x260 (8)
	struct FText ButtonText; // 0x268 (24)
	struct FMulticastInlineDelegate OnClicked; // 0x280 (16)
	struct FMulticastInlineDelegate OnPressed; // 0x290 (16)
	struct FMulticastInlineDelegate OnReleased; // 0x2A0 (16)
	struct FMulticastInlineDelegate OnHovered; // 0x2B0 (16)

	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PreConstruct(char IsDesignTime); // Function U.U.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSign(); // Function U.U.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSign(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnInitialized(); // Function U.U.OnInitialized(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnHovered__DelegateSignature(); // Function U.U.OnHovered__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnReleased__DelegateSignature(); // Function U.U.OnReleased__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnPressed__DelegateSignature(); // Function U.U.OnPressed__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnClicked__DelegateSignature(); // Function U.U.OnClicked__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelItemUseWidget {

public:

	struct Unknown UberGraphFrame; // 0x268 (8)
	struct Unknown Flicker; // 0x270 (8)
	struct Unknown BaseGuage; // 0x278 (8)
	struct Unknown Guage; // 0x280 (8)
	struct Unknown HB_CancelMessage; // 0x288 (8)
	struct Unknown Image_921; // 0x290 (8)
	struct Unknown Percent; // 0x298 (8)
	struct Unknown ProgressBar_Item; // 0x2A0 (8)
	struct Unknown RichT_Message; // 0x2A8 (8)
	struct Unknown TextBlock_1; // 0x2B0 (8)
	struct Unknown TextBlock_Time; // 0x2B8 (8)
	struct Unknown UseMessage; // 0x2C0 (8)
	struct Unknown VerticalBox_2; // 0x2C8 (8)
	float PercentValue; // 0x2D0 (4)
	char KnockState : 0; // 0x2D4 (1)
	float HideTimer; // 0x2D8 (4)
	struct Unknown ProgressStyle; // 0x2E0 (416)
	char IsShowRevive : 0; // 0x480 (1)
	struct Unknown CastingInfo; // 0x488 (24)
	float CurrentTime; // 0x4A0 (4)
	int32_t KeyFontSize; // 0x4A4 (4)
	float KeySizeScale; // 0x4A8 (4)
	int32_t CurrentLanguage; // 0x4AC (4)

	void CheckLanguage(); // Function U.U.CheckLanguage(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsTarget(struct Unknown Target, char& IsTarget); // Function U.U.IsTarget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RefreshCastingUI(); // Function U.U.RefreshCastingUI(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateProgress(); // Function U.U.UpdateProgress(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideCastingUI(); // Function U.U.HideCastingUI(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowCastingUI(struct Unknown CastingInfo); // Function U.U.ShowCastingUI(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetCancelMessage(struct FText Desc); // Function U.U.SetCancelMessage(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PreConstruct(char IsDesignTime); // Function U.U.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelAircraftRouteWidget {

public:

	struct Unknown UberGraphFrame; // 0x2B0 (8)
	struct Unknown Propeller1; // 0x2B8 (8)
	struct Unknown Aircraft; // 0x2C0 (8)
	struct Unknown Image_156; // 0x2C8 (8)
	struct Unknown Image_236; // 0x2D0 (8)
	struct Unknown Image_237; // 0x2D8 (8)
	struct Unknown MapCompRef; // 0x2E0 (8)

	void StopAirCraftAnimation(); // Function U.U.StopAirCraftAnimation(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateAirCraftScaleByMouseWheel(float Delta); // Function U.U.UpdateAirCraftScaleByMouseWheel(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StartAirCraftAnimation(); // Function U.U.StartAirCraftAnimation(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateAircraftAngle(float Angle); // Function U.U.UpdateAircraftAngle(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Image_94; // 0x250 (8)
	struct Unknown Image_224; // 0x258 (8)
	struct Unknown RichTextBlock_321; // 0x260 (8)
	struct Unknown InventoryRef; // 0x268 (8)

	struct Unknown OnMouseButtonDown_1(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseButtonDown_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideInfo(); // Function U.U.HideInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowInfo(struct Unknown InvenRef); // Function U.U.ShowInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function U.U.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ForceCloseInfo(); // Function U.U.ForceCloseInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelTeamInfoWidget {

public:

	struct Unknown UberGraphFrame; // 0x258 (8)
	struct Unknown U; // 0x260 (8)
	struct Unknown U_2; // 0x268 (8)
	struct Unknown VerticalBox_InfoList; // 0x270 (8)

	struct Unknown CreateSlot(); // Function U.U.CreateSlot(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateInvalidationbox(); // Function U.U.UpdateInvalidationbox(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UU {

public:

	struct Unknown UberGraphFrame; // 0x2A0 (8)
	struct Unknown VisualBorder; // 0x2A8 (8)

	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown HorizontalBox_Rarity; // 0x248 (8)
	struct Unknown T_WeaponName; // 0x250 (8)

	void SetNameByID(int32_t ItemId); // Function U.U.SetNameByID(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetName(struct FText Name, int32_t Rarity); // Function U.U.SetName(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelRoutePingWidget {

public:

	struct Unknown Anim_OnShow; // 0x248 (8)
	struct Unknown BackColor; // 0x250 (8)
	struct Unknown T_Num; // 0x258 (8)
	struct FMulticastInlineDelegate OnMarkerClicked; // 0x260 (16)

	void SetPointAngle(float Angle); // Function U.U.SetPointAngle(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SelectPointIcon(int32_t Index, char IsLastPoint, char IsUpdate); // Function U.U.SelectPointIcon(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTeamColor(struct Unknown LinearColor); // Function U.U.SetTeamColor(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMarkerClicked__DelegateSignature(struct Unknown Button, char mapObjectID); // Function U.U.OnMarkerClicked__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown ArmorSlot; // 0x248 (8)
	struct Unknown BagSlot; // 0x250 (8)
	struct Unknown BottomSlot; // 0x258 (8)
	struct Unknown EyeWearSlot; // 0x260 (8)
	struct Unknown GhillieSlot; // 0x268 (8)
	struct Unknown GlovesSlot; // 0x270 (8)
	struct Unknown HatSlot; // 0x278 (8)
	struct Unknown HelmetSlot; // 0x280 (8)
	struct Unknown MaskSlot; // 0x288 (8)
	struct Unknown OuterSlot; // 0x290 (8)
	struct Unknown ShoesSlot; // 0x298 (8)
	struct Unknown TopSlot; // 0x2A0 (8)
	struct Unknown U; // 0x2A8 (8)
	struct Unknown Timer_UpdateItemList; // 0x2B0 (8)

	void SetEquippedSlot(struct Unknown InventoryItemInfo); // Function U.U.SetEquippedSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetEquippedList(); // Function U.U.ResetEquippedList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetEquippedItems(); // Function U.U.SetEquippedItems(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetWeaponItems(); // Function U.U.SetWeaponItems(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateItemList(); // Function U.U.UpdateItemList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideItemList(); // Function U.U.HideItemList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowItemList(); // Function U.U.ShowItemList(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelInventoryWidget {

public:

	struct Unknown UberGraphFrame; // 0x278 (8)
	struct Unknown FadeIn; // 0x280 (8)
	struct Unknown BackgroundBlur_1; // 0x288 (8)
	struct Unknown BackPackBound_begin; // 0x290 (8)
	struct Unknown BackPackBound_end; // 0x298 (8)
	struct Unknown BlackMarketOverlay; // 0x2A0 (8)
	struct Unknown BT; // 0x2A8 (8)
	struct Unknown Button_SortByTime; // 0x2B0 (8)
	struct Unknown Button_SortByType; // 0x2B8 (8)
	struct Unknown CanvasPanel_1; // 0x2C0 (8)
	struct Unknown CanvasPanel_7; // 0x2C8 (8)
	struct Unknown CanvasPanel_16; // 0x2D0 (8)
	struct Unknown Carried_Area; // 0x2D8 (8)
	struct Unknown CarriedBound_begin; // 0x2E0 (8)
	struct Unknown CarriedBound_end; // 0x2E8 (8)
	struct Unknown CarriedList; // 0x2F0 (8)
	struct Unknown CarriedList_StrongBox; // 0x2F8 (8)
	struct Unknown CheckBox; // 0x300 (8)
	struct Unknown CheckBox_1; // 0x308 (8)
	struct Unknown CheckBox_2; // 0x310 (8)
	struct Unknown CombineRecipe; // 0x318 (8)
	struct Unknown EquippedList; // 0x320 (8)
	struct Unknown HorizontalBox; // 0x328 (8)
	struct Unknown HorizontalBox_7; // 0x330 (8)
	struct Unknown HorizontalBox_WeightMax; // 0x338 (8)
	struct Unknown Image; // 0x340 (8)
	struct Unknown Image_2; // 0x348 (8)
	struct Unknown Image_3; // 0x350 (8)
	struct Unknown Image_5; // 0x358 (8)
	struct Unknown Image_6; // 0x360 (8)
	struct Unknown Image_7; // 0x368 (8)
	struct Unknown Image_8; // 0x370 (8)
	struct Unknown Image_9; // 0x378 (8)
	struct Unknown Image_10; // 0x380 (8)
	struct Unknown Image_223; // 0x388 (8)
	struct Unknown Image_227; // 0x390 (8)
	struct Unknown Image_271; // 0x398 (8)
	struct Unknown Image_324; // 0x3A0 (8)
	struct Unknown Image_489; // 0x3A8 (8)
	struct Unknown Image_556; // 0x3B0 (8)
	struct Unknown Image_Guess; // 0x3B8 (8)
	struct Unknown Image_ItemInfo; // 0x3C0 (8)
	struct Unknown IM; // 0x3C8 (8)
	struct Unknown IM; // 0x3D0 (8)
	struct Unknown InputMaskImage; // 0x3D8 (8)
	struct Unknown Material_Area; // 0x3E0 (8)
	struct Unknown MaterialBound_begin; // 0x3E8 (8)
	struct Unknown MaterialBound_end; // 0x3F0 (8)
	struct Unknown ProgressBar_MaxWeight; // 0x3F8 (8)
	struct Unknown ProgressBar_Weight; // 0x400 (8)
	struct Unknown ProgressBar_WeightBag; // 0x408 (8)
	struct Unknown ProximityBound; // 0x410 (8)
	struct Unknown ProximityList; // 0x418 (8)
	struct Unknown StrongBox_Area; // 0x420 (8)
	struct Unknown T_AdditionalMaxWeight; // 0x428 (8)
	struct Unknown T_AdditionalMaxWeightSymbol; // 0x430 (8)
	struct Unknown T_AdditionalWeight; // 0x438 (8)
	struct Unknown T_AdditionalWeightSymbol; // 0x440 (8)
	struct Unknown T_MaxWeight; // 0x448 (8)
	struct Unknown T_StrongboxCount; // 0x450 (8)
	struct Unknown T_Weight; // 0x458 (8)
	struct Unknown T_WeightSlash; // 0x460 (8)
	struct Unknown TextBlock_11; // 0x468 (8)
	struct Unknown TextBlock_CurrentGold; // 0x470 (8)
	struct Unknown TextBlock_SortByTime; // 0x478 (8)
	struct Unknown TextBlock_SortByType; // 0x480 (8)
	struct Unknown U; // 0x488 (8)
	struct Unknown U; // 0x490 (8)
	struct Unknown U; // 0x498 (8)
	struct Unknown U; // 0x4A0 (8)
	struct Unknown U; // 0x4A8 (8)
	struct Unknown U; // 0x4B0 (8)
	struct Unknown WeaponBound; // 0x4B8 (8)
	struct Unknown WeaponList; // 0x4C0 (8)
	struct Unknown WeightPerCent; // 0x4C8 (8)
	struct Unknown PlayerController; // 0x4D0 (8)
	char bItemDrag : 0; // 0x4D8 (1)
	struct Unknown DropPopup; // 0x4E0 (8)
	float MaximumWeight; // 0x4E8 (4)
	int32_t OldProximityItemCount; // 0x4EC (4)
	struct Unknown ProximityGround; // 0x4F0 (8)
	struct Unknown DefaultPawnRef; // 0x4F8 (8)
	struct TArray<Unknown> ProximityGroundPool; // 0x500 (16)
	struct Unknown OldDefaultPawnRef; // 0x510 (8)
	struct Unknown CharacterTimerHandle; // 0x518 (8)
	struct TArray<Unknown> DropBoxWidgetList; // 0x520 (16)
	struct Unknown DropBoxParentWidget; // 0x530 (8)
	struct Unknown SavedInventorySettings; // 0x538 (8)
	struct Unknown EquipedWeapon; // 0x540 (8)
	struct TArray<Unknown> OldWeaponList; // 0x548 (16)
	char ChangeAttachments : 0; // 0x558 (1)
	struct Unknown ItemHoverWidget; // 0x560 (8)
	struct Unknown MainWidget; // 0x568 (8)
	struct FMulticastInlineDelegate EventDispatcher_OnCloseInventory; // 0x570 (16)
	struct TArray<Unknown> StealableWidgetList; // 0x580 (16)
	char bItemInfoHovered : 0; // 0x590 (1)
	char bFirstTimeNotifyItemInfo : 0; // 0x591 (1)
	struct Unknown Timer_ItemInfoTooltip; // 0x598 (8)
	char IsShowingItemInfoTooltip : 0; // 0x5A0 (1)
	int32_t FirstTimeCapsuleItem; // 0x5A4 (4)
	int32_t FirstTimeCraft; // 0x5A8 (4)
	char bGoldWarning : 0; // 0x5AC (1)
	struct Unknown DefaultWeightColor; // 0x5B0 (40)
	struct Unknown MinusWeightColor; // 0x5D8 (40)
	struct Unknown PlusWeightColor; // 0x600 (40)

	void AllHiddenMaterialWidget(); // Function U.U.AllHiddenMaterialWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetAllSlotScrollToStart(); // Function U.U.ResetAllSlotScrollToStart(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetWeightText(struct Unknown& WeightTextRef, struct Unknown& SymbolTextRef, float Weight); // Function U.U.SetWeightText(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetAllHoverEffect(); // Function U.U.ResetAllHoverEffect(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverRecipeByItem(struct FName ItemKey); // Function U.U.HoverRecipeByItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckEndFirstTimeValues(); // Function U.U.CheckEndFirstTimeValues(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckFirstTimeCraft(char& Return); // Function U.U.CheckFirstTimeCraft(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckFirstTimeCapsuleItem(char& Return); // Function U.U.CheckFirstTimeCapsuleItem(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckAnyEquippableAttachmentEmptySlot(struct Unknown& NewAttachmentItemInfo, char& IsEmpty); // Function U.U.CheckAnyEquippableAttachmentEmptySlot(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideItemArea(); // Function U.U.HideItemArea(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowItemArea(struct Unknown& ItemInfo, char CanEquip); // Function U.U.ShowItemArea(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckItemInfoHovered(); // Function U.U.CheckItemInfoHovered(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetCarriedSlotItems(struct TArray<Unknown>& Items); // Function U.U.GetCarriedSlotItems(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsInCarriedBound(char& State); // Function U.U.IsInCarriedBound(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsInBound(struct Unknown Begin, struct Unknown End, char& State); // Function U.U.IsInBound(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsInMaterialBound(char& State); // Function U.U.IsInMaterialBound(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsInBackPackBound(char& State); // Function U.U.IsInBackPackBound(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckCompleteItems(); // Function U.U.CheckCompleteItems(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverResetMaterial(); // Function U.U.HoverResetMaterial(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverRecipe(struct FName RecipeKey); // Function U.U.HoverRecipe(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AllHiddenRecipeWidget(); // Function U.U.AllHiddenRecipeWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsMaterialItem(struct Unknown InventoryItemInfo, char& out_Result); // Function U.U.IsMaterialItem(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowItemDorpPopup(struct Unknown BaseSlot, struct Unknown MaterialSlot, char& State); // Function U.U.ShowItemDorpPopup(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char CheckMaterialBound(struct Unknown DropPos, struct Unknown Operation); // Function U.U.CheckMaterialBound(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetRecipeItem(); // Function U.U.SetRecipeItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetMaterialItem(); // Function U.U.SetMaterialItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	enum class Unknow Get_CombineRecipe_Visibility_1(); // Function U.U.Get_CombineRecipe_Visibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetVisibleInventoryCharacter(char bVisible); // Function U.U.SetVisibleInventoryCharacter(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetStealable(); // Function U.U.SetStealable(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	enum class Unknow Get_IM_1(); // Function U.U.Get_IM_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverResetKeepedSlot(); // Function U.U.HoverResetKeepedSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverKeepedSlot(struct Unknown InventoryItemInfo); // Function U.U.HoverKeepedSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetKeepedItem(); // Function U.U.SetKeepedItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetMainWidget(struct Unknown& MainWidget); // Function U.U.GetMainWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckPreViewWeapon(char& State); // Function U.U.CheckPreViewWeapon(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DropBoxCompareQuantity(struct TArray<Unknown>& InventoryItemInfo, struct Unknown DropBoxInfo, char& SlotUpdate); // Function U.U.DropBoxCompareQuantity(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckBoxState(char State, struct Unknown CheckBox); // Function U.U.CheckBoxState(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText Get_TextBlock_CurrentGold_Text_1(); // Function U.U.Get_TextBlock_CurrentGold_Text_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RemoveDropBoxItem(struct Unknown Actor, struct Unknown Slot); // Function U.U.RemoveDropBoxItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddDropBoxItem(struct Unknown SlotInfo, struct Unknown Actor); // Function U.U.AddDropBoxItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void FindDropBox(struct Unknown Actor, struct Unknown& DropBox, char& State); // Function U.U.FindDropBox(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateDropBoxItem(struct Unknown Actor); // Function U.U.UpdateDropBoxItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPerkBoxIcon(); // Function U.U.SetPerkBoxIcon(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char IsShowingDropPopup(); // Function U.U.IsShowingDropPopup(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckDefaultPawn(char& NewDefaultPawn); // Function U.U.CheckDefaultPawn(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateCarriedSlotInfo(); // Function U.U.UpdateCarriedSlotInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AllHiddenCarriedWidget(); // Function U.U.AllHiddenCarriedWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateProximityGroundSlotInfo(); // Function U.U.UpdateProximityGroundSlotInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateProximityGroundWidget(); // Function U.U.UpdateProximityGroundWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddProximityGroundPool(); // Function U.U.AddProximityGroundPool(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitProximityGroundPool(); // Function U.U.InitProximityGroundPool(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetChracterVisible(char State); // Function U.U.SetChracterVisible(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char OnDragOver(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDragOver(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckWeaponBound(struct Unknown DropPos, struct Unknown Operation); // Function U.U.CheckWeaponBound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char CheckCarriedBound(struct Unknown DropPos, struct Unknown Operation); // Function U.U.CheckCarriedBound(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckProximityBound(struct Unknown DropPos, struct Unknown Operation); // Function U.U.CheckProximityBound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	enum class Unknow ShowBlackMarketButton(); // Function U.U.ShowBlackMarketButton(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateWeaponMesh(struct Unknown NewWeapon, int32_t SlotIndex); // Function U.U.UpdateWeaponMesh(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetWearbleItemInfo(enum class Unknow WearableType, char& bHas, struct Unknown& ItemInfo, struct Unknown& ItemDetailInfo); // Function U.U.GetWearbleItemInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CalcItemWeight(char IsAddOrRemove, struct Unknown ItemInfo); // Function U.U.CalcItemWeight(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetWeightPlus(float WeightPlus, float MaxWeightPlus); // Function U.U.SetWeightPlus(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetWeightProgress(); // Function U.U.SetWeightProgress(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetDragWeaponAttachmentItemFromCarriedSlot(); // Function U.U.ResetDragWeaponAttachmentItemFromCarriedSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetDragWeaponAttachmentItemFrom(struct Unknown InventoryItemInfo); // Function U.U.SetDragWeaponAttachmentItemFrom(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetDragWeaponAttachmentSlot(struct Unknown InventoryItemInfo); // Function U.U.SetDragWeaponAttachmentSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetInventoryItemDetailInfo(struct Unknown InventoryItemInfo, struct Unknown& InventoryItemDetailInfo, char& bResult); // Function U.U.GetInventoryItemDetailInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetDragCarriedSlot(struct Unknown InventoryItemInfo); // Function U.U.SetDragCarriedSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetDragWeaponSlot(struct Unknown WeaponInfo); // Function U.U.SetDragWeaponSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetDragWeaponItemFromCarriedSlot(); // Function U.U.ResetDragWeaponItemFromCarriedSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetDragWeaponItemFromCarriedSlot(struct Unknown InventoryItemInfo); // Function U.U.SetDragWeaponItemFromCarriedSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetDragWeaponItemFromEquippedSlot(); // Function U.U.ResetDragWeaponItemFromEquippedSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetDragWeaponItemFromEquippedSlot(struct Unknown InventoryItemInfo); // Function U.U.SetDragWeaponItemFromEquippedSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetDragProximitySlot(struct Unknown InventoryItemInfo); // Function U.U.SetDragProximitySlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverResetCarriedSlotList(); // Function U.U.HoverResetCarriedSlotList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverResetEquipSlot(); // Function U.U.HoverResetEquipSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverResetAttachItemSlotList(); // Function U.U.HoverResetAttachItemSlotList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverResetWeaponSlotList(); // Function U.U.HoverResetWeaponSlotList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverAttachItemSlot(struct Unknown InventoryItemInfo); // Function U.U.HoverAttachItemSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverWeaponSlot(struct Unknown InventoryItemInfo); // Function U.U.HoverWeaponSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetItemDrag(char bDrag); // Function U.U.SetItemDrag(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsItemDrag(char& bResult); // Function U.U.IsItemDrag(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetDrag(); // Function U.U.ResetDrag(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	enum class Unknow Get_InputMaskImage_Visibility_1(); // Function U.U.Get_InputMaskImage_Visibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EnableInventory(); // Function U.U.EnableInventory(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DisableInventory(); // Function U.U.DisableInventory(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EnableCarriedSlotList(); // Function U.U.EnableCarriedSlotList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DisableCarriedSlotList(); // Function U.U.DisableCarriedSlotList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverCarriedSlotList(struct Unknown InventoryItemInfo); // Function U.U.HoverCarriedSlotList(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetCharacter(char& Result, struct Unknown& CharacterRef); // Function U.U.GetCharacter(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetInventoryComponent(char& Result, struct Unknown& InventoryComponent); // Function U.U.GetInventoryComponent(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverEquipSlot(struct Unknown InventoryItemInfo); // Function U.U.HoverEquipSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	float Get_WeightProgess_Percent_1(); // Function U.U.Get_WeightProgess_Percent_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText Get_WeightPerCent_Text_1(); // Function U.U.Get_WeightPerCent_Text_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetHover(struct Unknown InventoryItemInfo, char& bResult); // Function U.U.ResetHover(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsCarriable(struct Unknown InventoryItemInfo, char& out_Result, char& InStrongbox); // Function U.U.IsCarriable(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetCarriedItems(); // Function U.U.SetCarriedItems(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetProximityItems(char bResetDrag); // Function U.U.SetProximityItems(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetEquippedItems(); // Function U.U.SetEquippedItems(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetWeaponItems(); // Function U.U.SetWeaponItems(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPreview(); // Function U.U.SetPreview(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_SortByTime_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_SortByTime_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_SortByType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_SortByType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChan(char bIsChecked); // Function U.U.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChan(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__BT(); // Function U.U.BndEvt__BT(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CharacterVisible_Event(); // Function U.U.CharacterVisible_Ev(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Open(); // Function U.U.Open(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Close(); // Function U.U.Close(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CloseDropPopup(); // Function U.U.CloseDropPopup(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AcceptDropPopup(); // Function U.U.AcceptDropPopup(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void WeaponAmmoDelegate_Event_1(int32_t SlotIdx, int32_t CurAmmo, int32_t MaxAmmo); // Function U.U.WeaponAmmoDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void NotifyNewWeapon(); // Function U.U.NotifyNewWeapon(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowInventoryCharacter(char IsShow); // Function U.U.ShowInventoryCharacter(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function U.U.BndEvt__CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DelayCheckCompleteItems(); // Function U.U.DelayCheckCompleteItems(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowFirstTimeItemInfoTooltip(); // Function U.U.ShowFirstTimeItemInfoTooltip(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__CheckBox_1_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChan(char bIsChecked); // Function U.U.BndEvt__CheckBox_1_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChan(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowStatupAnim(struct Unknown& StatupParameters, enum class Unknow StatupType); // Function U.U.ShowStatupAnim(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateSearchMaterialItem(); // Function U.U.UpdateSearchMaterialItem(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateSearchExpertWeapon(); // Function U.U.UpdateSearchExpertWeapon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void NotEnoughSpaceDelegate_Event_1(); // Function U.U.NotEnoughSpaceDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnRefreshWeightProgress(); // Function U.U.OnRefreshWeightProgress(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangeMaterial(); // Function U.U.OnChangeMaterial(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangeWeapon(); // Function U.U.OnChangeWeapon(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangeDetectedItems(); // Function U.U.OnChangeDetectedItems(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangeWeaponAttachment(); // Function U.U.OnChangeWeaponAttachment(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangeWearableItem(); // Function U.U.OnChangeWearableItem(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangeBagpackItem(); // Function U.U.OnChangeBagpackItem(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EventDispatcher_OnCloseInventory__DelegateSignature(); // Function U.U.EventDispatcher_OnCloseInventory__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Bg; // 0x250 (8)
	struct Unknown Button_Cancle; // 0x258 (8)
	struct Unknown Button_OK; // 0x260 (8)
	struct Unknown Image; // 0x268 (8)
	struct Unknown Image_168; // 0x270 (8)
	struct Unknown Image_423; // 0x278 (8)
	struct Unknown Image_853; // 0x280 (8)
	struct Unknown Image_1449; // 0x288 (8)
	struct Unknown Image_1451; // 0x290 (8)
	struct Unknown Image_1452; // 0x298 (8)
	struct Unknown Image_1453; // 0x2A0 (8)
	struct Unknown Image_1454; // 0x2A8 (8)
	struct Unknown Image_1965; // 0x2B0 (8)
	struct Unknown Image_1967; // 0x2B8 (8)
	struct Unknown Image_1968; // 0x2C0 (8)
	struct Unknown Image_1969; // 0x2C8 (8)
	struct Unknown Image_1970; // 0x2D0 (8)
	struct Unknown Image_1971; // 0x2D8 (8)
	struct Unknown Image_1972; // 0x2E0 (8)
	struct Unknown Image_1973; // 0x2E8 (8)
	struct Unknown Image_1974; // 0x2F0 (8)
	struct Unknown Image_1975; // 0x2F8 (8)
	struct Unknown Image_1976; // 0x300 (8)
	struct Unknown Image_1977; // 0x308 (8)
	struct Unknown Image_1978; // 0x310 (8)
	struct Unknown Image_2324; // 0x318 (8)
	struct Unknown TextBlock_CurrentGold; // 0x320 (8)
	struct Unknown TextBlock_Price; // 0x328 (8)
	struct Unknown TargetCharacter; // 0x330 (8)

	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_159_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_159_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Cancle_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Cancle_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown HorizontalBox_Rarity; // 0x250 (8)
	struct Unknown Image_bg; // 0x258 (8)
	struct Unknown Image_Icon; // 0x260 (8)
	struct Unknown T_Name; // 0x268 (8)
	struct Unknown T_WeaponType; // 0x270 (8)
	struct Unknown TextBlock_186; // 0x278 (8)
	struct Unknown Tooltip; // 0x280 (8)
	struct Unknown ItemInfo; // 0x288 (8)
	struct Unknown ItemDetailInfo; // 0x290 (1168)

	void SetRarity(); // Function U.U.SetRarity(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetHoverPosition(struct Unknown ViewportSize, struct Unknown MousePosition, struct Unknown HoverSize, struct Unknown& Out); // Function U.U.GetHoverPosition(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Init(struct Unknown ItemInfo); // Function U.U.Init(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_476BD37943992650800406AA289D7379(struct Unknown Loaded); // Function U.U.OnLoaded_476BD37943992650800406AA289D7379(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function U.U.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadIcon(struct Unknown Icon); // Function U.U.AsyncLoadIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelKillInfoWidget {

public:

	struct Unknown UberGraphFrame; // 0x2C0 (8)
	struct Unknown KillMessageList; // 0x2C8 (8)
	struct Unknown U; // 0x2D0 (8)
	struct Unknown U_2; // 0x2D8 (8)
	struct Unknown U_3; // 0x2E0 (8)
	struct Unknown U_4; // 0x2E8 (8)
	struct Unknown U_5; // 0x2F0 (8)
	struct Unknown U_6; // 0x2F8 (8)
	struct Unknown U_7; // 0x300 (8)
	struct Unknown U_8; // 0x308 (8)
	struct Unknown U_9; // 0x310 (8)
	struct Unknown U_10; // 0x318 (8)
	struct TArray<Unknown> TmpInfoList; // 0x320 (16)

	void AddKillMessage(struct Unknown& BroadCastInfo); // Function U.U.AddKillMessage(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UU {

public:

	struct Unknown UberGraphFrame; // 0x268 (8)
	struct Unknown SeatIcons; // 0x270 (8)
	struct Unknown WheelIcons; // 0x278 (8)

	void Setup(struct Unknown VehicleInstance); // Function U.U.Setup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelScopeWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown CanvasPanel_1; // 0x250 (8)
	struct Unknown Image_19; // 0x258 (8)
	struct Unknown Image_20; // 0x260 (8)
	struct Unknown Image_21; // 0x268 (8)
	struct Unknown Image_22; // 0x270 (8)
	struct Unknown Image_23; // 0x278 (8)
	struct Unknown Image_24; // 0x280 (8)
	struct Unknown WidgetSwitcher_167; // 0x288 (8)
	struct Unknown NewVar_1; // 0x290 (8)

	void SetScopeImageAngle(float NewAngle); // Function U.U.SetScopeImageAngle(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelPopupWidget {

public:

	struct Unknown UberGraphFrame; // 0x268 (8)
	struct Unknown Bg; // 0x270 (8)
	struct Unknown btn_Cancel; // 0x278 (8)
	struct Unknown btn_OK; // 0x280 (8)
	struct Unknown Desc; // 0x288 (8)
	struct Unknown Image_2; // 0x290 (8)
	struct Unknown Overlay; // 0x298 (8)
	struct Unknown Overlay_1; // 0x2A0 (8)
	struct Unknown Overlay_2; // 0x2A8 (8)
	struct Unknown RichTextBlock_244; // 0x2B0 (8)
	struct Unknown TextBlock_17; // 0x2B8 (8)
	struct Unknown Throbber_159; // 0x2C0 (8)
	struct Unknown Title; // 0x2C8 (8)
	struct Unknown WidgetSwitcher_1; // 0x2D0 (8)
	struct FName MapNameToExit; // 0x2D8 (8)
	char IsExitGame : 0; // 0x2E0 (1)
	struct Unknown ControllerRef; // 0x2E8 (8)
	char IsTutorial : 0; // 0x2F0 (1)
	char IsDeathCam : 0; // 0x2F1 (1)
	struct FMulticastInlineDelegate EventDispatcher_Mov; // 0x2F8 (16)
	char ErrorType : 0; // 0x308 (1)
	char IsPerkDeckSelectMode : 0; // 0x309 (1)
	struct FMulticastInlineDelegate EventDispatcher_TrySelectMode; // 0x310 (16)
	char OkayType : 0; // 0x320 (1)

	void SetOptionChangedFromBenchmark(); // Function U.U.SetOptionChangedFromBenchmark(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PerkDeckSelectMode(); // Function U.U.PerkDeckSelectMode(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsStartedGame(char& bRet); // Function U.U.IsStartedGame(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsSoloPlay(char& bRet); // Function U.U.IsSoloPlay(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetMessage(int32_t ErrorCode, struct FString ErrorID, struct FString Param, struct FString& Title, struct FString& Desc); // Function U.U.GetMessage(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EnterDeathCam(char IsWinningCam, char IsTargetCameraKiller); // Function U.U.EnterDeathCam(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EnterWindow(); // Function U.U.EnterWindow(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetMyTeamAlive(char& ALIVE); // Function U.U.GetMyTeamAlive(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EnterLobby(); // Function U.U.EnterLobby(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnMouseWheel(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseWheel(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_OK_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__btn_OK_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSign(); // Function U.U.BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSign(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayerLogout(); // Function U.U.PlayerLogout(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void LeaveGame(); // Function U.U.LeaveGame(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangedFinalRankDelegate_Event(); // Function U.U.OnChangedFinalRankDelegate_Event(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void FinalResult_Internal(); // Function U.U.FinalResult_Internal(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void MoveLobby(); // Function U.U.MoveLobby(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Show_2(); // Function U.U.Show_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Hide_2(); // Function U.U.Hide_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetMessageEx(int32_t ErrorIdx, struct FString ErrorID, struct FString Parameter, char bConfirm, char bCancel, char bWaiting, struct Unknown& evt); // Function U.U.SetMessageEx(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void QuitGame(float DelayTime); // Function U.U.QuitGame(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Destruct(); // Function U.U.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EventDispatcher_TrySelectMode__DelegateSignature(); // Function U.U.EventDispatcher_TrySelectMode__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EventDispatcher_Mov(); // Function U.U.EventDispatcher_Movl(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Character_BG_Motion; // 0x250 (8)
	struct Unknown Image_308; // 0x258 (8)
	struct Unknown ScrollBox_KeepedList; // 0x260 (8)
	struct Unknown TextBlock_Count; // 0x268 (8)
	struct Unknown PlayerController; // 0x270 (8)

	void HoverRecipeItems(struct TArray<Unknown>& ItemKeys); // Function U.U.HoverRecipeItems(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverRecipeTree(struct FName ItemKey); // Function U.U.HoverRecipeTree(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CompleteItems(struct TArray<Unknown>& ItemKeys); // Function U.U.CompleteItems(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DisableCarriedListHover(); // Function U.U.DisableCarriedListHover(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char DropItem(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.DropItem(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetInventoryComponent(char& Result, struct Unknown& InventoryComponentRef); // Function U.U.GetInventoryComponent(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Reset(); // Function U.U.Reset(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverItems(struct TArray<Unknown>& ItemKeys); // Function U.U.HoverItems(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverReset(); // Function U.U.HoverReset(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragEnter(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDragEnter(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragLeave(struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDragLeave(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelAliveInfoWidget {

public:

	struct Unknown UberGraphFrame; // 0x288 (8)
	struct Unknown GoldDesc_Hide; // 0x290 (8)
	struct Unknown GoldDesc_Show; // 0x298 (8)
	struct Unknown Revival_Add; // 0x2A0 (8)
	struct Unknown AliveCount_Text; // 0x2A8 (8)
	struct Unknown AliveCount_Text_2; // 0x2B0 (8)
	struct Unknown HorizontalBox_8; // 0x2B8 (8)
	struct Unknown HorizontalBox_16; // 0x2C0 (8)
	struct Unknown HorizontalBox_89; // 0x2C8 (8)
	struct Unknown HorizontalBox_Alive; // 0x2D0 (8)
	struct Unknown HorizontalBox_Assist; // 0x2D8 (8)
	struct Unknown HorizontalBox_CurrentGold; // 0x2E0 (8)
	struct Unknown HorizontalBox_Kill; // 0x2E8 (8)
	struct Unknown HorizontalBox_Team; // 0x2F0 (8)
	struct Unknown Image; // 0x2F8 (8)
	struct Unknown Image_1; // 0x300 (8)
	struct Unknown Image_2; // 0x308 (8)
	struct Unknown Image_6; // 0x310 (8)
	struct Unknown Image_102; // 0x318 (8)
	struct Unknown Image_271; // 0x320 (8)
	struct Unknown Image_376; // 0x328 (8)
	struct Unknown Image_378; // 0x330 (8)
	struct Unknown Image_1584; // 0x338 (8)
	struct Unknown KillAliveBG; // 0x340 (8)
	struct Unknown KillAliveBG_2; // 0x348 (8)
	struct Unknown KillAliveBG_3; // 0x350 (8)
	struct Unknown KillAliveBG_4; // 0x358 (8)
	struct Unknown KillCount_Text; // 0x360 (8)
	struct Unknown KillCount_Text_2; // 0x368 (8)
	struct Unknown RichTextBlock_275; // 0x370 (8)
	struct Unknown SizeBox_1; // 0x378 (8)
	struct Unknown SizeBox_3; // 0x380 (8)
	struct Unknown Spacer_2; // 0x388 (8)
	struct Unknown T_AliveCount; // 0x390 (8)
	struct Unknown T_AssistCount; // 0x398 (8)
	struct Unknown T_KillCount; // 0x3A0 (8)
	struct Unknown T_TeamCount; // 0x3A8 (8)
	struct Unknown TextBlock_1; // 0x3B0 (8)
	struct Unknown TextBlock_CurrentGold; // 0x3B8 (8)
	char ShowKillCountUI : 0; // 0x3C0 (1)
	int32_t CurrentKillCount; // 0x3C4 (4)
	int32_t NewVar_1; // 0x3C8 (4)
	struct Unknown ShowGoldDescHandle; // 0x3D0 (8)
	struct Unknown AliveCount_Text_1_1; // 0x3D8 (8)
	struct Unknown KillCount_Text_1_1; // 0x3E0 (8)

	enum class Unknow Get_HorizontalBox_CurrentGold_Visibility_1(); // Function U.U.Get_HorizontalBox_CurrentGold_Visibility_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetBGImageMarginValue(int32_t AliveCount); // Function U.U.SetBGImageMarginValue(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetAliveCount(int32_t AliveCount); // Function U.U.SetAliveCount(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetKillCount(int32_t KillCount); // Function U.U.SetKillCount(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideKillCount(); // Function U.U.HideKillCount(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowKillCount(); // Function U.U.ShowKillCount(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetKillCount_BP(int32_t NewKillCount); // Function U.U.SetKillCount_BP(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetAliveTeamCount_BP(int32_t NewAliveTeamCount, int32_t TeamSize); // Function U.U.SetAliveTeamCount_BP(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowResuscitation(); // Function U.U.ShowResuscitation(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Show_GoldDesc(); // Function U.U.Show_GoldDesc(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Hide_GoldDesc(); // Function U.U.Hide_GoldDesc(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetAssistCount_BP(int32_t NewKillCount); // Function U.U.SetAssistCount_BP(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetAliveCount_BP(int32_t NewAliveCount); // Function U.U.SetAliveCount_BP(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelReplayPlayerListWidget {

public:

	struct Unknown UberGraphFrame; // 0x2E0 (8)
	struct Unknown Bt_ListNext; // 0x2E8 (8)
	struct Unknown BT_ListPrev; // 0x2F0 (8)
	struct Unknown ScrollBox_PlayerItem; // 0x2F8 (8)
	struct Unknown T_SortType; // 0x300 (8)
	struct Unknown VB_ListMain; // 0x308 (8)

	struct Unknown CreatePlayerListGroup(struct Unknown PlayerState); // Function U.U.CreatePlayerListGroup(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetSortTypeText(); // Function U.U.SetSortTypeText(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown CreatePlayerButton(struct Unknown PlayerState); // Function U.U.CreatePlayerButton(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__BT_ListPrev(); // Function U.U.BndEvt__BT_ListPrevracks(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Bt_ListNext_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Bt_ListNext_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Button_306; // 0x250 (8)
	struct Unknown CanvasPanel_Line; // 0x258 (8)
	struct Unknown CanvasPanel_Position; // 0x260 (8)
	struct Unknown Image_Leader; // 0x268 (8)
	struct Unknown Image_Rank; // 0x270 (8)
	struct Unknown Img_Cut; // 0x278 (8)
	struct Unknown Img_MS; // 0x280 (8)
	struct Unknown Img_MS_2; // 0x288 (8)
	struct Unknown Img_MS_3; // 0x290 (8)
	struct Unknown Img_PlayerLine; // 0x298 (8)
	struct Unknown Img_PlayerPoint; // 0x2A0 (8)
	struct Unknown Img_Voice; // 0x2A8 (8)
	struct Unknown Img_VoiceElimination; // 0x2B0 (8)
	struct Unknown Overlay_OnReady; // 0x2B8 (8)
	struct Unknown Overlay_Position; // 0x2C0 (8)
	struct Unknown Overlay_TeamOnReady; // 0x2C8 (8)
	struct Unknown T_PlayerName; // 0x2D0 (8)
	struct Unknown T_PlayerName_2; // 0x2D8 (8)
	struct Unknown WidgetSwitcher_3; // 0x2E0 (8)
	struct Unknown WidgetSwitcher_IsTeam; // 0x2E8 (8)
	struct Unknown WidgetSwitcher_State; // 0x2F0 (8)
	int32_t LastSeaponTierId; // 0x2F8 (4)
	float WidgetHalfSizeX; // 0x2FC (4)

	void Set(char IsLeft, char IsSoloMode, struct Unknown CharacterRef, struct Unknown MemberInfo); // Function U.U.Set(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Init(struct Unknown PartyInfo, char bIsSoloMode); // Function U.U.Init(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_53B5B77C4172B8F96BC2979B2702DE82(struct Unknown Loaded); // Function U.U.OnLoaded_53B5B77C4172B8F96BC2979B2702DE82(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncIcon(struct Unknown Asset); // Function U.U.AsyncIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Button_98; // 0x250 (8)
	struct Unknown Time_2; // 0x258 (8)
	struct Unknown SavedEvent; // 0x260 (40)
	struct FString SavedReplayFileName; // 0x288 (16)
	struct Unknown ReplayListWidget; // 0x298 (8)

	void Init(struct Unknown Event, struct FString ReplayFileName, struct Unknown ReplayListWidget); // Function U.U.Init(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_97_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_97_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelWorldMapWidget {

public:

	struct Unknown UberGraphFrame; // 0x2B8 (8)
	struct Unknown FadeIn; // 0x2C0 (8)
	struct Unknown NewAnimation_2; // 0x2C8 (8)
	struct Unknown Bg; // 0x2D0 (8)
	struct Unknown B; // 0x2D8 (8)
	struct Unknown B; // 0x2E0 (8)
	struct Unknown CloseButton; // 0x2E8 (8)
	struct Unknown ShowHelBoxButton; // 0x2F0 (8)
	struct Unknown U; // 0x2F8 (8)
	struct Unknown WidgetSwitcher_1; // 0x300 (8)
	int32_t MAX_ZOOM_LEVEL; // 0x308 (4)
	int32_t ZoomLevel; // 0x30C (4)
	float MAX_SCALE_FACTOR; // 0x310 (4)
	int32_t InitializeCount; // 0x314 (4)
	struct Unknown PosOnViewport; // 0x318 (8)
	float CurrentScaleFactor; // 0x320 (4)
	struct Unknown MouseButtonDownPos; // 0x324 (8)
	struct Unknown SelectPingMenuTimer; // 0x330 (8)
	struct Unknown SelectionMenu; // 0x338 (8)
	char IsRoutePing : 0; // 0x340 (1)
	int32_t MaxRoutePointCount; // 0x344 (4)
	struct TArray<Unknown> RoutePointArray; // 0x348 (16)

	void SetClassInfoBoardVisibilityByZoomLevel(int32_t LastZoomLevel, int32_t NewZoomLevel); // Function U.U.SetClassInfoBoardVisibilityByZoomLevel(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetZoomLevel(int32_t& ZoomLevel); // Function U.U.GetZoomLevel(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StopRoutePing(); // Function U.U.StopRoutePing(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateRoutePing(); // Function U.U.UpdateRoutePing(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsFullRoutePing(char& NewParam); // Function U.U.IsFullRoutePing(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckRoutePing(); // Function U.U.CheckRoutePing(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetRoutePing(); // Function U.U.ResetRoutePing(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddRoutePing(); // Function U.U.AddRoutePing(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetRoutePing(); // Function U.U.SetRoutePing(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetVisiblePingMenu(char Visible); // Function U.U.SetVisiblePingMenu(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DebugStringOnMap(struct FString DebugString, struct Unknown WorldPosition, float RemainTime, float FontSize); // Function U.U.DebugStringOnMap(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMapDragging(struct Unknown deltaOnViewport); // Function U.U.OnMapDragging(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RemoveMarker(); // Function U.U.RemoveMarker(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMapRightClick(struct Unknown PosOnViewport, char IsAgree, struct Unknown ForceLocation); // Function U.U.OnMapRightClick(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetZoom(int32_t NewZoomLevel); // Function U.U.SetZoom(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMapZoomOut(); // Function U.U.OnMapZoomOut(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMapZoomIn(); // Function U.U.OnMapZoomIn(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CalcScaleFactorByZoom(int32_t ZoomLevel, float& ScaleFactor); // Function U.U.CalcScaleFactorByZoom(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsZoomLevelInRange(int32_t ZoomLevel, char& ret); // Function U.U.IsZoomLevelInRange(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_91_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_0_K2Node_ComponentBoundEvent_91_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ShowHelBoxButton_K2Node_ComponentBoundEvent_452_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__ShowHelBoxButton_K2Node_ComponentBoundEvent_452_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddAreaWidget(enum class Unknow WorldMapAreaWidgetType, struct Unknown& AreaWidgetInfo); // Function U.U.AddAreaWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void NotifyNeedRefreshToMap(); // Function U.U.NotifyNeedRefreshToMap(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnAttackedWidget(int32_t UniquePlayerId); // Function U.U.OnAttackedWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnFireWidget(int32_t UniquePlayerId, struct Unknown Rotation, float Length); // Function U.U.OnFireWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetMapPlayers(); // Function U.U.ResetMapPlayers(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnViewportSized(); // Function U.U.OnViewportSized(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void NotifyTargetPawnPos(); // Function U.U.NotifyTargetPawnPos(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RemoveAreaWidget(enum class Unknow WorldMapAreaWidgetType, struct Unknown& AreaWidgetInfo); // Function U.U.RemoveAreaWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateWorldMapClassInfo(); // Function U.U.UpdateWorldMapClassInfo(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnInputSmartPingAgreeWorldMap(); // Function U.U.OnInputSmartPingAgreeWorldMap(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnInputStopSmartPingWorldMap(); // Function U.U.OnInputStopSmartPingWorldMap(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnInputSmartPingMenuWorldMap(); // Function U.U.OnInputSmartPingMenuWorldMap(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnInputSmartPingWorldMap(); // Function U.U.OnInputSmartPingWorldMap(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (char IsShow); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowPingMenu(); // Function U.U.ShowPingMenu(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseButtonDownOnMap(struct Unknown Button, struct Unknown PosOnViewport); // Function U.U.OnMouseButtonDownOnMap(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseButtonUpOnMap(struct Unknown Button, struct Unknown PosOnViewport); // Function U.U.OnMouseButtonUpOnMap(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDraggingOnMap(struct Unknown Delta); // Function U.U.OnDraggingOnMap(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnWheelOnMap(float Delta, struct Unknown PosOnViewport); // Function U.U.OnWheelOnMap(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnObjectClickOnMap(struct Unknown Button, char mapObjectID); // Function U.U.OnObjectClickOnMap(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown NewAnimation; // 0x248 (8)
	struct Unknown Icon; // 0x250 (8)
	struct Unknown ImageLine; // 0x258 (8)
	struct Unknown Img_Color; // 0x260 (8)

	void InitIcon(struct Unknown PlayerState); // Function U.U.InitIcon(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelInteractionWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown UpArrow; // 0x250 (8)
	struct Unknown InteractivePopup_motion; // 0x258 (8)
	struct Unknown AmmoCnt; // 0x260 (8)
	struct Unknown AmmoDown; // 0x268 (8)
	struct Unknown AmmoUp; // 0x270 (8)
	struct Unknown Attack; // 0x278 (8)
	struct Unknown AttackDown; // 0x280 (8)
	struct Unknown AttackUp; // 0x288 (8)
	struct Unknown BuffListWithText; // 0x290 (8)
	struct Unknown CanvasPanel_17; // 0x298 (8)
	struct Unknown CP_Key; // 0x2A0 (8)
	struct Unknown CustomWidgetSwitcher; // 0x2A8 (8)
	struct Unknown fill; // 0x2B0 (8)
	struct Unknown Firingrate; // 0x2B8 (8)
	struct Unknown FiringrateDown; // 0x2C0 (8)
	struct Unknown FiringrateUp; // 0x2C8 (8)
	struct Unknown HB_BuffList; // 0x2D0 (8)
	struct Unknown HorizontalBox_Rarity; // 0x2D8 (8)
	struct Unknown HorizontalBox_WeaponRarity; // 0x2E0 (8)
	struct Unknown Image; // 0x2E8 (8)
	struct Unknown Image_4; // 0x2F0 (8)
	struct Unknown Image_10; // 0x2F8 (8)
	struct Unknown Image_152; // 0x300 (8)
	struct Unknown Image_ItemIcon; // 0x308 (8)
	struct Unknown Image_WeaponLock; // 0x310 (8)
	struct Unknown Interactive; // 0x318 (8)
	struct Unknown ItemBg_01; // 0x320 (8)
	struct Unknown Key_Bomb; // 0x328 (8)
	struct Unknown KeyImageWidget_C_1; // 0x330 (8)
	struct Unknown NeedItem; // 0x338 (8)
	struct Unknown PickUpBg; // 0x340 (8)
	struct Unknown PickupItem; // 0x348 (8)
	struct Unknown Range; // 0x350 (8)
	struct Unknown RangeDown; // 0x358 (8)
	struct Unknown RangeUp; // 0x360 (8)
	struct Unknown RichT_Action; // 0x368 (8)
	struct Unknown RichT_ActionDescription; // 0x370 (8)
	struct Unknown SizeBox_WeaponOwner; // 0x378 (8)
	struct Unknown Stability; // 0x380 (8)
	struct Unknown StabilityDown; // 0x388 (8)
	struct Unknown StabilityUp; // 0x390 (8)
	struct Unknown Switcher_Item; // 0x398 (8)
	struct Unknown T_BombCancel; // 0x3A0 (8)
	struct Unknown T_ComparingWeaponName; // 0x3A8 (8)
	struct Unknown T_PickupItemName; // 0x3B0 (8)
	struct Unknown T_WeaponName; // 0x3B8 (8)
	struct Unknown Text_CombineTarget; // 0x3C0 (8)
	struct Unknown TextBlock_5; // 0x3C8 (8)
	struct Unknown U; // 0x3D0 (8)
	struct Unknown U_2; // 0x3D8 (8)
	struct Unknown U_3; // 0x3E0 (8)
	struct Unknown U; // 0x3E8 (8)
	struct Unknown U_2; // 0x3F0 (8)
	struct Unknown U_3; // 0x3F8 (8)
	struct Unknown VerticalBox_CombineTarget; // 0x400 (8)
	struct Unknown VerticalBox_StatUp; // 0x408 (8)
	struct Unknown WeaponDesc; // 0x410 (8)
	struct Unknown WeaponItemImage; // 0x418 (8)
	struct Unknown WeaponItemSlot; // 0x420 (8)
	struct Unknown WeaponItemSlot_2; // 0x428 (8)
	struct Unknown WeaponItemSlotHover; // 0x430 (8)
	struct Unknown WidgetSwitcher_123; // 0x438 (8)
	struct Unknown DisableTextColor; // 0x440 (40)
	struct Unknown EnableTextColor; // 0x468 (40)
	char IsDisable : 0; // 0x490 (1)
	struct Unknown PickupItemInfo_1; // 0x498 (152)
	struct Unknown UpLinearColor; // 0x530 (16)
	struct Unknown DownLinearColor; // 0x540 (16)
	struct Unknown NormalSlateColor; // 0x550 (40)
	struct Unknown UpSlateColor; // 0x578 (40)
	struct Unknown DownSlateColor; // 0x5A0 (40)
	char bAction : 0; // 0x5C8 (1)
	char bCompare : 0; // 0x5C9 (1)
	struct Unknown CompareWeaponInfo; // 0x5D0 (2864)
	char IsNoHide : 0; // 0x1100 (1)
	char bWeapon : 0; // 0x1101 (1)
	char bPlayAnimation_WeaponCompare : 0; // 0x1102 (1)
	struct Unknown VisibleTextColor; // 0x1108 (40)
	struct Unknown BrushActionKeyWhite; // 0x1130 (136)
	struct Unknown BrushActionKeyRed; // 0x11B8 (136)
	struct FName TempName; // 0x1240 (8)
	struct FText AvailableAmmoQuantity; // 0x1248 (24)

	void SetCompareFloatArrow(struct Unknown UpImgae, struct Unknown DownImgae, struct Unknown Text, struct Unknown CompareInfo); // Function U.U.SetCompareFloatArrow(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetWeaponBuff(struct Unknown InventoryItemInfo); // Function U.U.SetWeaponBuff(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetCustomizedWidget(); // Function U.U.SetCustomizedWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetRarityPickUp(enum class Unknow Rarity); // Function U.U.SetRarityPickUp(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetCompareArrow(struct Unknown UpImgae, struct Unknown DownImgae, struct Unknown Text, struct Unknown CompareInfo); // Function U.U.SetCompareArrow(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(enum class Unknow Rarity); // Function U.U.Set(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Reset(); // Function U.U.Reset(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Hide(); // Function U.U.Hide(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_2385A39542FE4E4DC3D8DA9A1DC61138(struct Unknown Loaded); // Function U.U.OnLoaded_2385A39542FE4E4DC3D8DA9A1DC61138(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_5F4D13BB46FAD58EF9E7D9B1EC284B61(struct Unknown Loaded); // Function U.U.OnLoaded_5F4D13BB46FAD58EF9E7D9B1EC284B61(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_AD9F8D574EE55C633D4CEBA11FC6FB36(struct Unknown Loaded); // Function U.U.OnLoaded_AD9F8D574EE55C633D4CEBA11FC6FB36(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_F76113C9404D07E2AAB61F936BF0F1DA(struct Unknown Loaded); // Function U.U.OnLoaded_F76113C9404D07E2AAB61F936BF0F1DA(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_2D7AC27D4A9340E37F63BDA517074AED(struct Unknown Loaded); // Function U.U.OnLoaded_2D7AC27D4A9340E37F63BDA517074AED(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPickItem(struct Unknown& InteractionInfo, struct Unknown& NewPickItem); // Function U.U.SetPickItem(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetWeapon(struct Unknown& InteractionInfo, struct Unknown& NewWeaponItem, struct Unknown& ItemInfo); // Function U.U.SetWeapon(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetCompareWeapon(struct Unknown& InteractionInfo, struct Unknown& NewWeaponItem, struct Unknown& ItemInfo); // Function U.U.SetCompareWeapon(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadIconTexture(struct Unknown IconTexture); // Function U.U.AsyncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PreConstruct(char IsDesignTime); // Function U.U.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetAction(struct Unknown& InteractionInfo); // Function U.U.SetAction(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(struct Unknown IconTexture, struct Unknown TargetImage); // Function U.U.Set(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetHide(); // Function U.U.SetHide(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetCustomMode(int32_t ModeNum); // Function U.U.SetCustomMode(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetNoHide(char NoHide); // Function U.U.SetNoHide(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetInteractionInfo(struct Unknown InteractionInfo); // Function U.U.SetInteractionInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown HorizontalBox_Next; // 0x250 (8)
	struct Unknown ProgressBar_Current; // 0x258 (8)
	struct Unknown ProgressBar_Down; // 0x260 (8)
	struct Unknown ProgressBar_Up; // 0x268 (8)
	struct Unknown TextBlock_Current; // 0x270 (8)
	struct Unknown TextBlock_Max; // 0x278 (8)
	struct Unknown TextBlock_Next; // 0x280 (8)
	char EnableUpdate : 0; // 0x288 (1)
	float CurTime; // 0x28C (4)
	float ShowTime; // 0x290 (4)
	float EndPoint; // 0x294 (4)
	float ChangeValue; // 0x298 (4)
	float StartPoint; // 0x29C (4)
	float Min; // 0x2A0 (4)
	float MAX; // 0x2A4 (4)
	char IsUPState : 0; // 0x2A8 (1)
	struct FMulticastInlineDelegate Dispatcher_ProgressBarDone; // 0x2B0 (16)

	void SetData(float StartPoint, float EndPoint, float Min, float MAX, float ShowTime, char Play); // Function U.U.SetData(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Dispatcher_ProgressBarDone__DelegateSignature(); // Function U.U.Dispatcher_ProgressBarDone__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Hide; // 0x250 (8)
	struct Unknown Show; // 0x258 (8)
	struct Unknown Bg; // 0x260 (8)
	struct Unknown Button_OK; // 0x268 (8)
	struct Unknown Image_168; // 0x270 (8)
	struct Unknown Image_669; // 0x278 (8)
	struct Unknown Message; // 0x280 (8)
	struct Unknown TextBlock_Title; // 0x288 (8)
	struct Unknown U; // 0x290 (8)
	struct Unknown Timer; // 0x298 (8)

	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_159_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_159_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetItemKey(struct FName ItemKey, struct FName HaveItemKey); // Function U.U.SetItemKey(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Destruct(); // Function U.U.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (struct FText Message); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown Ani_MouseRight; // 0x248 (8)
	struct Unknown Image; // 0x250 (8)
	struct Unknown Image_2; // 0x258 (8)
	struct Unknown Image_292; // 0x260 (8)
	struct Unknown Image_503; // 0x268 (8)

	void HideMouse(); // Function U.U.HideMouse(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowMouse(); // Function U.U.ShowMouse(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelGamePopupWidget {

public:

	struct Unknown UberGraphFrame; // 0x250 (8)
	struct Unknown BT; // 0x258 (8)
	struct Unknown BT; // 0x260 (8)
	struct Unknown BT; // 0x268 (8)
	struct Unknown BT; // 0x270 (8)
	struct Unknown Button_1; // 0x278 (8)
	struct Unknown Button_2; // 0x280 (8)
	struct Unknown Button_4; // 0x288 (8)
	struct Unknown Image_2; // 0x290 (8)
	struct Unknown IM; // 0x298 (8)
	struct Unknown Overlay_Exit; // 0x2A0 (8)
	struct Unknown TextBlock_2; // 0x2A8 (8)
	struct Unknown U; // 0x2B0 (8)
	struct Unknown VerticalBox_InGame; // 0x2B8 (8)
	struct Unknown VerticalBox_Lobby; // 0x2C0 (8)
	struct FName MapNameToExit; // 0x2C8 (8)
	char IsLobby : 0; // 0x2D0 (1)

	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnMouseWheel(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseWheel(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__BT(); // Function U.U.BndEvt__BT(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__BT(); // Function U.U.BndEvt__BT(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__BT(); // Function U.U.BndEvt__BT(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__BT(); // Function U.U.BndEvt__BT(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__BT(); // Function U.U.BndEvt__BT(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__BT(); // Function U.U.BndEvt__BT(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__BT(); // Function U.U.BndEvt__BT(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__BT(); // Function U.U.BndEvt__BT(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Show(); // Function U.U.Show(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Hide(); // Function U.U.Hide(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_3_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_3_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_3_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_3_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Destruct(); // Function U.U.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Fade_in_Black_Bg; // 0x250 (8)
	struct Unknown Anim_ShowPerk; // 0x258 (8)
	struct Unknown Image_319; // 0x260 (8)
	struct Unknown Img_Opened; // 0x268 (8)
	struct Unknown T_Desc; // 0x270 (8)
	struct Unknown T_Name; // 0x278 (8)
	struct Unknown U; // 0x280 (8)
	struct Unknown RarityBGMaterialInstance; // 0x288 (8)
	float CurrentAnim; // 0x290 (4)

	void SetItemOption(struct Unknown& ItemOption); // Function U.U.SetItemOption(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown T_Desc; // 0x248 (8)
	struct Unknown U; // 0x250 (8)
	struct Unknown U_2; // 0x258 (8)
	struct Unknown U_3; // 0x260 (8)
	struct Unknown U_4; // 0x268 (8)
	struct Unknown U_5; // 0x270 (8)
	struct Unknown U_6; // 0x278 (8)
	struct Unknown U_7; // 0x280 (8)
	struct Unknown U_8; // 0x288 (8)
	struct Unknown U_9; // 0x290 (8)
	struct Unknown U_10; // 0x298 (8)
	struct Unknown WrapBox_Options; // 0x2A0 (8)

	void SetRandomOptionDesc(struct FText Desc); // Function U.U.SetRandomOptionDesc(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetOptions(struct TArray<Unknown>& OptionIDList); // Function U.U.SetOptions(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown MySeatColor; // 0x248 (16)
	struct Unknown WheelGroup; // 0x258 (8)
	struct Unknown SeatGroup; // 0x260 (8)

	void Setup(struct Unknown VehicleInstance); // Function U.U.Setup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowSeatIcon(int32_t SeatIndex, char bShow, char bIsMine); // Function U.U.ShowSeatIcon(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowWreckedWheelIcon(int32_t WheelIndex, char bShow); // Function U.U.ShowWreckedWheelIcon(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Image_350; // 0x250 (8)
	struct Unknown Image_585; // 0x258 (8)
	struct Unknown Image_Grade_Color_Line; // 0x260 (8)

	void SetBuffInfo(struct FText BuffName, struct FText Desc, struct Unknown Icon, int32_t Rarity); // Function U.U.SetBuffInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_F9A8A8FB4318139B3972C6ACB5BBA1D9(struct Unknown Loaded); // Function U.U.OnLoaded_F9A8A8FB4318139B3972C6ACB5BBA1D9(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadIconTexture(struct Unknown IconTexture); // Function U.U.AsyncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelReportUserCompletedWidget {

public:

	struct Unknown UberGraphFrame; // 0x250 (8)
	struct Unknown btn_confirm; // 0x258 (8)
	struct Unknown popup; // 0x260 (8)
	struct Unknown txt_description; // 0x268 (8)
	struct Unknown uw; // 0x270 (8)
	struct FText DescriptionText; // 0x278 (24)

	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PreConstruct(char IsDesignTime); // Function U.U.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Button_ItemSlotHover_4; // 0x250 (8)
	struct Unknown U_4; // 0x258 (8)
	struct Unknown ItemWeaponInfo; // 0x260 (136)
	struct Unknown ParentWidget; // 0x2E8 (8)

	void SetButtonEnabled(char InIsEnabled); // Function U.U.SetButtonEnabled(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetWeaponInfo(struct Unknown& ItemWeaponInfo, struct Unknown ParentWidget); // Function U.U.SetWeaponInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_ItemSlotHover_3_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_ItemSlotHover_3_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetButton(); // Function U.U.ResetButton(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SelectButton(); // Function U.U.SelectButton(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelPerkDeckWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Msg_open; // 0x250 (8)
	struct Unknown POPUP_OPEN; // 0x258 (8)
	struct Unknown Idle; // 0x260 (8)
	struct Unknown btn_Choose; // 0x268 (8)
	struct Unknown btn_OK; // 0x270 (8)
	struct Unknown btn_OK_6; // 0x278 (8)
	struct Unknown btn_PerkDeck; // 0x280 (8)
	struct Unknown Button_CloseMovie; // 0x288 (8)
	struct Unknown Button_PlayMovie; // 0x290 (8)
	struct Unknown Button_Refresh; // 0x298 (8)
	struct Unknown Button_Reselect; // 0x2A0 (8)
	struct Unknown Button_SelectMode; // 0x2A8 (8)
	struct Unknown Canvas_CantSelectMessage; // 0x2B0 (8)
	struct Unknown Canvas_MovieScreen; // 0x2B8 (8)
	struct Unknown CanvasPanel_ClassList; // 0x2C0 (8)
	struct Unknown CanvasPanel_NewbieAdvantage; // 0x2C8 (8)
	struct Unknown CheckBox_PerkDeckNotReOpen; // 0x2D0 (8)
	struct Unknown GoldLack; // 0x2D8 (8)
	struct Unknown HorizontalBox_ClassList; // 0x2E0 (8)
	struct Unknown HorizontalBox_PerkDeckReOpen; // 0x2E8 (8)
	struct Unknown Image_1; // 0x2F0 (8)
	struct Unknown Image_2; // 0x2F8 (8)
	struct Unknown Image_5; // 0x300 (8)
	struct Unknown Image_10; // 0x308 (8)
	struct Unknown Image_11; // 0x310 (8)
	struct Unknown Image_13; // 0x318 (8)
	struct Unknown Image_134; // 0x320 (8)
	struct Unknown Image_213; // 0x328 (8)
	struct Unknown Image_247; // 0x330 (8)
	struct Unknown Image_271; // 0x338 (8)
	struct Unknown Image_276; // 0x340 (8)
	struct Unknown Image_335; // 0x348 (8)
	struct Unknown Image_342; // 0x350 (8)
	struct Unknown Image_484; // 0x358 (8)
	struct Unknown Image_566; // 0x360 (8)
	struct Unknown Image_1200; // 0x368 (8)
	struct Unknown Image_1511; // 0x370 (8)
	struct Unknown Image_Class; // 0x378 (8)
	struct Unknown Image_ClassIcon; // 0x380 (8)
	struct Unknown Image_Cycle; // 0x388 (8)
	struct Unknown Image_Cycle_2; // 0x390 (8)
	struct Unknown Image_Cycle_4; // 0x398 (8)
	struct Unknown Image_Weapon; // 0x3A0 (8)
	struct Unknown Img_Movie; // 0x3A8 (8)
	struct Unknown ReseletTextGroup1; // 0x3B0 (8)
	struct Unknown ReseletTextGroup1_2; // 0x3B8 (8)
	struct Unknown ReseletTextGroup2; // 0x3C0 (8)
	struct Unknown ReseletTextGroup2_2; // 0x3C8 (8)
	struct Unknown ReseletTextGroup2_4; // 0x3D0 (8)
	struct Unknown ScaleBox_ClassList; // 0x3D8 (8)
	struct Unknown ScaleBox_SelectNotifyMessage; // 0x3E0 (8)
	struct Unknown SizeBox_Choose; // 0x3E8 (8)
	struct Unknown SizeBox_Ok; // 0x3F0 (8)
	struct Unknown SizeBox_Ok2; // 0x3F8 (8)
	struct Unknown SizeBox_Random; // 0x400 (8)
	struct Unknown SizeBox_Refrest; // 0x408 (8)
	struct Unknown SizeBox_Select; // 0x410 (8)
	struct Unknown T_AmmoName; // 0x418 (8)
	struct Unknown T_ClassDeckName; // 0x420 (8)
	struct Unknown T_ClassDesc; // 0x428 (8)
	struct Unknown T_CurrentGold; // 0x430 (8)
	struct Unknown T_WeaponDesc; // 0x438 (8)
	struct Unknown T_WeaponName; // 0x440 (8)
	struct Unknown TextBlock_Close; // 0x448 (8)
	struct Unknown TextBlock_Close_2; // 0x450 (8)
	struct Unknown TextBlock_Close_7; // 0x458 (8)
	struct Unknown TextBlock_MaxReset; // 0x460 (8)
	struct Unknown TextBlock_MaxReset_2; // 0x468 (8)
	struct Unknown TextBlock_Price_ChangeDeck; // 0x470 (8)
	struct Unknown TextBlock_Price_Random; // 0x478 (8)
	struct Unknown TextBlock_Price_Select; // 0x480 (8)
	struct Unknown TextBlock_RandomRemainCount; // 0x488 (8)
	struct Unknown TextBlock_RefreshRemainCount; // 0x490 (8)
	struct Unknown TextBlock_Reselect; // 0x498 (8)
	struct Unknown TextBlock_Reselect_2; // 0x4A0 (8)
	struct Unknown TextBlock_Reselect_4; // 0x4A8 (8)
	struct Unknown U; // 0x4B0 (8)
	struct Unknown U; // 0x4B8 (8)
	struct Unknown WidgetSwitcher_ChangeDeck; // 0x4C0 (8)
	struct Unknown WidgetSwitcher_ChangeDeck_2; // 0x4C8 (8)
	struct Unknown WidgetSwitcher_Reselect; // 0x4D0 (8)
	struct Unknown WidgetSwitcher_Reselect_2; // 0x4D8 (8)
	struct Unknown WidgetSwitcher_Reselect_4; // 0x4E0 (8)
	struct Unknown InventoryWidget; // 0x4E8 (8)
	struct TArray<Unknown> Slots; // 0x4F0 (16)
	struct Unknown IconBrush; // 0x500 (136)
	struct Unknown HoverWidget; // 0x588 (8)
	struct Unknown HoverTimerHandle; // 0x590 (8)
	int64_t LocalTemp; // 0x598 (8)
	struct Unknown MediaPlayer; // 0x5A0 (8)
	struct TMap<Unknown, Unknown> ClassVideo_Map; // 0x5A8 (80)
	char bBlockButton : 0; // 0x5F8 (1)
	char bButtonEnabled : 0; // 0x5F9 (1)
	char bCanRemainCount : 0; // 0x5FA (1)
	char bCanCurrentGold : 0; // 0x5FB (1)
	char bWaitingResponse : 0; // 0x5FC (1)
	int64_t CurrentGold; // 0x600 (8)
	int32_t ChangeDeckCount; // 0x608 (4)
	int32_t ChangeDeckListCount; // 0x60C (4)
	int32_t PerkDeckID; // 0x610 (4)
	int32_t DisableTime; // 0x614 (4)
	struct TMap<Unknown, Unknown> ClassInfoWidgetMap; // 0x618 (80)
	struct Unknown CurrentPerkDeckSelectInfo; // 0x668 (24)
	int32_t LocalPerkMode; // 0x680 (4)
	float ClassListPadding; // 0x684 (4)
	struct Unknown Handle_PlayMovie; // 0x688 (8)
	struct Unknown CurrentClassVideo; // 0x690 (8)
	struct Unknown Handle_SetPerkInfoByHoverClassButton; // 0x698 (8)
	char LastClassButtonHovered : 0; // 0x6A0 (1)
	int32_t LastClassIndex; // 0x6A4 (4)

	void SequenceEvent__ENTRYPOINTU_3(); // Function U.U.SequenceEvent__ENTRYPOINTU_3(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_2(); // Function U.U.SequenceEvent__ENTRYPOINTU_2(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_1(); // Function U.U.SequenceEvent__ENTRYPOINTU_1(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPerkDeckReOpenCheck(); // Function U.U.SetPerkDeckReOpenCheck(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetComingSoonClass(); // Function U.U.SetComingSoonClass(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetComingSoonClass(struct FName& ClassRow); // Function U.U.GetComingSoonClass(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateNewbieAdvantage(struct Unknown& PerkDeckData); // Function U.U.UpdateNewbieAdvantage(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DisableClassButtonWithoutSelected(); // Function U.U.DisableClassButtonWithoutSelected(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPerkInfoByHoverClassButton(); // Function U.U.SetPerkInfoByHoverClassButton(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayChangeDeckSound(); // Function U.U.PlayChangeDeckSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayChooseSound(); // Function U.U.PlayChooseSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayClickSound(); // Function U.U.PlayClickSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayHoverSound(); // Function U.U.PlayHoverSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HasPerkDeckClassInfo(char& NewParam); // Function U.U.HasPerkDeckClassInfo(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetButtonInfo(struct Unknown Button, struct Unknown TextPrice, int32_t Price, struct Unknown TextRemainCount, int32_t RemainCount); // Function U.U.SetButtonInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateButtonInfos(); // Function U.U.UpdateButtonInfos(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CanUseButton(char& Enabled); // Function U.U.CanUseButton(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetButtonEnabled(char IsEnabled); // Function U.U.SetButtonEnabled(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPerkDeckSelectInfo(); // Function U.U.SetPerkDeckSelectInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ChooseClassButton(int32_t ClassIndex); // Function U.U.ChooseClassButton(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverClassButton(int32_t ClassIndex, char IsHoverd); // Function U.U.HoverClassButton(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetSelectedClassInfo(); // Function U.U.ResetSelectedClassInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RefreshSelectedClassInfo(); // Function U.U.RefreshSelectedClassInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetClassList(); // Function U.U.SetClassList(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPerkModeInfo(int32_t PerkMode); // Function U.U.SetPerkModeInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetClassVideoSource(int32_t PerkDeckID, struct Unknown& VideoSource); // Function U.U.GetClassVideoSource(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReadyMovie(int32_t PerkDeckID); // Function U.U.ReadyMovie(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CloseMovie(); // Function U.U.CloseMovie(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	enum class Unknow GetVisibility_RemainTime(); // Function U.U.GetVisibility_RemainTime(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetInventoryItemDetailInfo(struct FName Name, struct Unknown& Info); // Function U.U.GetInventoryItemDetailInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText Get_TextBlock_RemailTime_Text_1(); // Function U.U.Get_TextBlock_RemailTime_Text_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetServerWaiting(char bWait); // Function U.U.SetServerWaiting(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetGoldInfo(); // Function U.U.SetGoldInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPerkInfo(char UseLocalPlayerInfo, struct Unknown PerkDeckClassInfo); // Function U.U.SetPerkInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckInfos(char ForceUpdate); // Function U.U.CheckInfos(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitInfos(); // Function U.U.InitInfos(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnMouseWheel(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseWheel(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Hide(); // Function U.U.Hide(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Show(); // Function U.U.Show(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_A83B5F164320A0E753E9088699009EB0(struct Unknown Loaded); // Function U.U.OnLoaded_A83B5F164320A0E753E9088699009EB0(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Finished_68D0074544AABC70455E90A37E1ED67B(); // Function U.U.Finished_68D0074544AABC70455E90A37E1ED67B(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_C916107845AEFBC703CB8F9D00DAC0F0(struct Unknown Loaded); // Function U.U.OnLoaded_C916107845AEFBC703CB8F9D00DAC0F0(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_19FB202A430BEE3458DBA2B7F1362CC8(struct Unknown Loaded); // Function U.U.OnLoaded_19FB202A430BEE3458DBA2B7F1362CC8(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadingWeapon(struct Unknown IconTexture); // Function U.U.AsyncLoadingWeapon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadingClass(struct Unknown Texture); // Function U.U.AsyncLoadingClass(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDelegatePayGoldOnChangeDeck(char bSuccess); // Function U.U.OnDelegatePayGoldOnChangeDeck(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnAnimationFinished(struct Unknown Animation); // Function U.U.OnAnimationFinished(BlueprintCosmetic|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Movie_K2Node_Com(); // Function U.U.BndEvt__Button_Movie_K2Node_Com(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_CloseMovie_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_CloseMovie_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Destruct(); // Function U.U.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnBattleRoyalStateChanged(enum class Unknow PrevState, enum class Unknow CurrentState); // Function U.U.OnBattleRoyalStateChanged(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Reselect_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Reselect_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ClosePopup(); // Function U.U.ClosePopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Reselect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Reselect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_PerkDeck_K2Node_Com(); // Function U.U.BndEvt__btn_PerkDeck_K2Node_Com(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CustomEvent_1(); // Function U.U.CustomEvent_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ChangeClassOnScenario(int32_t DeckIndex); // Function U.U.ChangeClassOnScenario(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSign(); // Function U.U.BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSign(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadingClassIcon(struct Unknown Texture); // Function U.U.AsyncLoadingClassIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideAnim(); // Function U.U.HideAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowAnim(); // Function U.U.ShowAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangePerkModeDelegate_Event_1(int32_t PerkMode); // Function U.U.OnChangePerkModeDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OpenPopup(); // Function U.U.OpenPopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_SelectMode_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_SelectMode_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_Choose_1_K2Node_Com(); // Function U.U.BndEvt__btn_Choose_1_K2Node_Com(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_OK_5_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__btn_OK_5_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DelegatePayGoldOnSelectDeck_Event_1(char bSuccess); // Function U.U.DelegatePayGoldOnSelectDeck_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangedTeamPlayerClass(); // Function U.U.OnChangedTeamPlayerClass(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPerkInfoImpl(char bUseLocalPlayerInfo, struct Unknown& PerkDeckClassInfo); // Function U.U.SetPerkInfoImpl(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangedCurrentPerkDeckSelectInfo(); // Function U.U.OnChangedCurrentPerkDeckSelectInfo(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckSelectMode(); // Function U.U.CheckSelectMode(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DelegateChoosePerkDeck_Event_1(char bSuccess); // Function U.U.DelegateChoosePerkDeck_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayMovie(); // Function U.U.PlayMovie(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DelegatePayGoldOnChangeDeckList_Event_1(char bSuccess); // Function U.U.DelegatePayGoldOnChangeDeckList_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_SelectMode_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_SelectMode_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_OK_5_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__btn_OK_5_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void TryChangeSelectDeck(); // Function U.U.TryChangeSelectDeck(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__CheckBox_PerkDeckReOpen_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function U.U.BndEvt__CheckBox_PerkDeckReOpen_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelGameMatchEndWidget {

public:

	struct Unknown UberGraphFrame; // 0x360 (8)
	struct Unknown U; // 0x368 (8)
	struct Unknown U; // 0x370 (8)
	struct Unknown UW_SimpleResult; // 0x378 (8)
	struct Unknown MainWidgetRef; // 0x380 (8)
	struct Unknown PlayerHUDRef; // 0x388 (8)
	struct Unknown UW_FinalResult; // 0x390 (8)
	struct Unknown UW_Animation; // 0x398 (8)
	struct Unknown PlayerControllerRef; // 0x3A0 (8)
	char NewResult : 0; // 0x3A8 (1)
	struct Unknown ResultData; // 0x3A9 (4)
	char IsGiveUp : 0; // 0x3AD (1)
	float WinMatchEndResultShowTime; // 0x3B0 (4)
	struct Unknown ResultMatchEndAnimation; // 0x3B4 (2)

	char IsVisibleMatchEndWidget(); // Function U.U.IsVisibleMatchEndWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetPlayerState(struct Unknown& PlayerState); // Function U.U.GetPlayerState(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_ShowSimpleResult(struct Unknown& SimpleResult); // Function U.U.K2_ShowSimpleResult(Event|Protected|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_HideSimpleResult(); // Function U.U.K2_HideSimpleResult(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_ShowFinalResult(struct Unknown& FinalResult); // Function U.U.K2_ShowFinalResult(Event|Protected|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_HideFinalResult(); // Function U.U.K2_HideFinalResult(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_ShowMatchEndAnimation(struct Unknown& MatchEndAnimation, struct Unknown& SimpleResult); // Function U.U.K2_ShowMatchEndAnimation(Event|Protected|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_HideMatchEndAnimation(); // Function U.U.K2_HideMatchEndAnimation(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Init(); // Function U.U.Init(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Hide; // 0x250 (8)
	struct Unknown RankDown; // 0x258 (8)
	struct Unknown RankUp; // 0x260 (8)
	struct Unknown Anim_Reward; // 0x268 (8)
	struct Unknown Arrow_3; // 0x270 (8)
	struct Unknown ArrowLine_3; // 0x278 (8)
	struct Unknown BottomLine_3; // 0x280 (8)
	struct Unknown BrightSpot_01; // 0x288 (8)
	struct Unknown BrightSpot_02; // 0x290 (8)
	struct Unknown BrightSpot_03; // 0x298 (8)
	struct Unknown BrightSpot_04; // 0x2A0 (8)
	struct Unknown BrightSpot_05; // 0x2A8 (8)
	struct Unknown Button_DeathCam_2; // 0x2B0 (8)
	struct Unknown Button_Exit; // 0x2B8 (8)
	struct Unknown Button_KillCam; // 0x2C0 (8)
	struct Unknown Button_Report; // 0x2C8 (8)
	struct Unknown Button_Spectate; // 0x2D0 (8)
	struct Unknown CanvasPanel_3; // 0x2D8 (8)
	struct Unknown CanvasPanel_9; // 0x2E0 (8)
	struct Unknown CanvasPanel_1174; // 0x2E8 (8)
	struct Unknown CanvasPanel_1384; // 0x2F0 (8)
	struct Unknown Glow1; // 0x2F8 (8)
	struct Unknown Glow2; // 0x300 (8)
	struct Unknown Glow3; // 0x308 (8)
	struct Unknown Glow_01; // 0x310 (8)
	struct Unknown GlowLine; // 0x318 (8)
	struct Unknown Gold; // 0x320 (8)
	struct Unknown Image_26; // 0x328 (8)
	struct Unknown Image_27; // 0x330 (8)
	struct Unknown Image_28; // 0x338 (8)
	struct Unknown Image_29; // 0x340 (8)
	struct Unknown Image_216; // 0x348 (8)
	struct Unknown Image_223; // 0x350 (8)
	struct Unknown Image_458; // 0x358 (8)
	struct Unknown Image_559; // 0x360 (8)
	struct Unknown Image_CurrentRANK; // 0x368 (8)
	struct Unknown Image_DownRANK; // 0x370 (8)
	struct Unknown Image_UpRANK; // 0x378 (8)
	struct Unknown L_Wing01; // 0x380 (8)
	struct Unknown L_Wing01_2; // 0x388 (8)
	struct Unknown L_Wing01_5; // 0x390 (8)
	struct Unknown L_Wing02; // 0x398 (8)
	struct Unknown L_Wing02_2; // 0x3A0 (8)
	struct Unknown L_Wing02_5; // 0x3A8 (8)
	struct Unknown L_Wing03; // 0x3B0 (8)
	struct Unknown L_Wing03_2; // 0x3B8 (8)
	struct Unknown L_Wing03_5; // 0x3C0 (8)
	struct Unknown L_WingLine; // 0x3C8 (8)
	struct Unknown L_WingLine_3; // 0x3D0 (8)
	struct Unknown Light_2; // 0x3D8 (8)
	struct Unknown Light_01; // 0x3E0 (8)
	struct Unknown Light_02; // 0x3E8 (8)
	struct Unknown Light_03; // 0x3F0 (8)
	struct Unknown Light_04; // 0x3F8 (8)
	struct Unknown Light_05; // 0x400 (8)
	struct Unknown Light_06; // 0x408 (8)
	struct Unknown Overlay; // 0x410 (8)
	struct Unknown Overlay_2; // 0x418 (8)
	struct Unknown Overlay_264; // 0x420 (8)
	struct Unknown Overlay_Report; // 0x428 (8)
	struct Unknown Overlay_Spectate; // 0x430 (8)
	struct Unknown R_Wing01; // 0x438 (8)
	struct Unknown R_Wing01_2; // 0x440 (8)
	struct Unknown R_Wing01_5; // 0x448 (8)
	struct Unknown R_Wing01_6; // 0x450 (8)
	struct Unknown R_Wing02; // 0x458 (8)
	struct Unknown R_Wing02_2; // 0x460 (8)
	struct Unknown R_Wing02_5; // 0x468 (8)
	struct Unknown R_Wing02_6; // 0x470 (8)
	struct Unknown R_Wing03; // 0x478 (8)
	struct Unknown R_Wing03_2; // 0x480 (8)
	struct Unknown R_Wing03_5; // 0x488 (8)
	struct Unknown R_Wing03_6; // 0x490 (8)
	struct Unknown R_WingLine; // 0x498 (8)
	struct Unknown R_WingLine_3; // 0x4A0 (8)
	struct Unknown Ribbon; // 0x4A8 (8)
	struct Unknown Ring; // 0x4B0 (8)
	struct Unknown RIng_Glow_01; // 0x4B8 (8)
	struct Unknown ScrollBox_2; // 0x4C0 (8)
	struct Unknown ScrollBox_199; // 0x4C8 (8)
	struct Unknown SizeBox_8; // 0x4D0 (8)
	struct Unknown Spacer_6018; // 0x4D8 (8)
	struct Unknown Spacer_6217; // 0x4E0 (8)
	struct Unknown Spacer_Center; // 0x4E8 (8)
	struct Unknown Spacer_Center_2; // 0x4F0 (8)
	struct Unknown T_RemainTime_2; // 0x4F8 (8)
	struct Unknown Text_Report; // 0x500 (8)
	struct Unknown TextBlock_3; // 0x508 (8)
	struct Unknown TextBlock_12; // 0x510 (8)
	struct Unknown TextBlock_13; // 0x518 (8)
	struct Unknown TextBlock_14; // 0x520 (8)
	struct Unknown TextBlock_25; // 0x528 (8)
	struct Unknown TextBlock_27; // 0x530 (8)
	struct Unknown TextBlock_1425; // 0x538 (8)
	struct Unknown TextBlock_2242; // 0x540 (8)
	struct Unknown TextBlock_2769; // 0x548 (8)
	struct Unknown TextBlock_3056; // 0x550 (8)
	struct Unknown TextBlock_LocalMatchRP; // 0x558 (8)
	struct Unknown TextGlow01; // 0x560 (8)
	struct Unknown TextGlow02; // 0x568 (8)
	struct Unknown TextGlow03; // 0x570 (8)
	struct Unknown TopLine_3; // 0x578 (8)
	struct Unknown U; // 0x580 (8)
	struct Unknown U_2; // 0x588 (8)
	struct Unknown U_3; // 0x590 (8)
	struct Unknown U_4; // 0x598 (8)
	struct Unknown U_5; // 0x5A0 (8)
	struct Unknown U_369; // 0x5A8 (8)
	struct Unknown U; // 0x5B0 (8)
	struct Unknown U; // 0x5B8 (8)
	struct Unknown VerticalBox_191; // 0x5C0 (8)
	struct Unknown WidgetSwitcher_2; // 0x5C8 (8)
	char MatchEnd : 0; // 0x5D0 (1)
	struct Unknown AnimationData; // 0x5D1 (2)
	struct Unknown MatchEndWidgetRef; // 0x5D8 (8)
	struct Unknown SimpleResult; // 0x5E0 (168)
	struct Unknown SimpleTimer; // 0x688 (8)
	char IsWinningCam : 0; // 0x690 (1)
	struct Unknown StartSound; // 0x694 (4)
	struct Unknown GainGoldHandle; // 0x698 (8)
	struct Unknown GoldHandle; // 0x6A0 (8)
	struct Unknown FinalResultData; // 0x6A8 (4)
	int32_t RandomGold; // 0x6AC (4)
	int32_t GainGoldValue; // 0x6B0 (4)
	struct Unknown LocalWidget; // 0x6B8 (8)
	struct Unknown PlayerState; // 0x6C0 (8)
	struct Unknown Timehandle_Rank; // 0x6C8 (8)
	char Increase : 0; // 0x6D0 (1)
	char bMaxPrograssbar : 0; // 0x6D1 (1)
	int32_t CurrentRP; // 0x6D4 (4)
	int32_t PlayerOriRP; // 0x6D8 (4)
	int32_t TargetRP; // 0x6DC (4)
	int32_t NextTireRP; // 0x6E0 (4)
	int32_t CurrentTierID; // 0x6E4 (4)
	char IsGiveUp : 0; // 0x6E8 (1)
	int32_t TempRank; // 0x6EC (4)
	int32_t TempKill; // 0x6F0 (4)
	int32_t TempHit; // 0x6F4 (4)
	int32_t TempSuvival; // 0x6F8 (4)
	int32_t SeasonRP; // 0x6FC (4)
	int32_t GainedRP; // 0x700 (4)
	int32_t AminRPText; // 0x704 (4)
	int32_t StartRP; // 0x708 (4)
	int32_t EndRP; // 0x70C (4)
	float ShowTime; // 0x710 (4)
	char IsTargetCameraKiller : 0; // 0x714 (1)

	void SequenceEvent__ENTRYPOINTU_2(); // Function U.U.SequenceEvent__ENTRYPOINTU_2(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_1(); // Function U.U.SequenceEvent__ENTRYPOINTU_1(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowMAXRPText(); // Function U.U.ShowMAXRPText(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RankerDown(); // Function U.U.RankerDown(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RankPointSetData(); // Function U.U.RankPointSetData(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetupRankDown(); // Function U.U.SetupRankDown(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetupRankUp(); // Function U.U.SetupRankUp(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetTierRP(int32_t& NextRP, char& Next, int32_t& NowRP, int32_t& PreviousRP, char& Previous); // Function U.U.GetTierRP(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetItem(); // Function U.U.SetItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetRank(); // Function U.U.SetRank(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPlayInfo(); // Function U.U.SetPlayInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Init(); // Function U.U.Init(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetRankImage(int32_t IDD, struct Unknown Widgett); // Function U.U.SetRankImage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateInputMode(); // Function U.U.UpdateInputMode(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideSimpleWidget(); // Function U.U.HideSimpleWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Check(); // Function U.U.Check(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Check(); // Function U.U.Check(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReportSended(); // Function U.U.ReportSended(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetColorTextWidget(struct Unknown Widgett, int32_t Valuee, struct Unknown Colorr); // Function U.U.SetColorTextWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetGold(); // Function U.U.SetGold(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_DeathCam_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_DeathCam_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_DeathCam_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_DeathCam_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Exit_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Report_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Report_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowDeathCam(); // Function U.U.ShowDeathCam(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Close(); // Function U.U.Close(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Report_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Report_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Destruct(); // Function U.U.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowGold(); // Function U.U.ShowGold(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetInfo(struct Unknown PS, struct Unknown ResultData, struct Unknown MatchEndWidget); // Function U.U.SetInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EventRankAnimation(); // Function U.U.EventRankAnimation(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadTexture(struct Unknown Imge, struct Unknown Widget); // Function U.U.AsyncLoadTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RankUpDown(); // Function U.U.RankUpDown(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_DeathCam_1_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_DeathCam_1_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_DeathCam_1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_DeathCam_1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelAttackUserWidget {

public:

	struct Unknown Enemy_Lv_Motion_FadeOut_Inert; // 0x2A0 (8)
	struct Unknown Enemy_Lv_Motion_FadeIn_Inert; // 0x2A8 (8)
	struct Unknown FadeOut; // 0x2B0 (8)
	struct Unknown Enemy_Inert; // 0x2B8 (8)
	struct Unknown HorizontalBox_1; // 0x2C0 (8)
	struct Unknown HorizontalBox_2; // 0x2C8 (8)
	struct Unknown Image_2; // 0x2D0 (8)
	struct Unknown Image_145; // 0x2D8 (8)
	struct Unknown Overlay_2; // 0x2E0 (8)
	struct Unknown Overlay_98; // 0x2E8 (8)
	struct Unknown Pawn; // 0x2F0 (8)
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Anim_Show_classinfo; // 0x250 (8)
	struct Unknown Button_SpreadList; // 0x258 (8)
	struct Unknown Image_323; // 0x260 (8)
	struct Unknown U; // 0x268 (8)
	struct Unknown U_2; // 0x270 (8)
	struct Unknown U_3; // 0x278 (8)
	struct Unknown U_4; // 0x280 (8)
	struct Unknown U_5; // 0x288 (8)
	struct Unknown U_6; // 0x290 (8)
	struct Unknown U_7; // 0x298 (8)
	struct Unknown U_8; // 0x2A0 (8)
	struct Unknown U_9; // 0x2A8 (8)
	struct Unknown U_10; // 0x2B0 (8)
	struct Unknown U_11; // 0x2B8 (8)
	struct Unknown U_12; // 0x2C0 (8)
	struct Unknown VerticalBox_ClassBox; // 0x2C8 (8)
	struct Unknown VerticalBox_ClassList; // 0x2D0 (8)
	struct Unknown VerticalBox_Description; // 0x2D8 (8)
	struct Unknown VerticalBox_Main; // 0x2E0 (8)
	int32_t LastTableRow; // 0x2E8 (4)
	struct TMap<Unknown, Unknown> ClassInfoItemMap; // 0x2F0 (80)
	char ListVisibility : 0; // 0x340 (1)

	void UpdateClassCount(); // Function U.U.UpdateClassCount(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HiddenAllClassLists(); // Function U.U.HiddenAllClassLists(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetClassList(); // Function U.U.SetClassList(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_SpreadList_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_SpreadList_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OpenList(); // Function U.U.OpenList(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CloseList(); // Function U.U.CloseList(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateList(); // Function U.U.UpdateList(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnBattleRoyalStateChanged_Event_1(enum class Unknow PrevState, enum class Unknow CurrentState); // Function U.U.OnBattleRoyalStateChanged_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnUpdateClassCount_Event_1(); // Function U.U.OnUpdateClassCount_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown FadeIn3; // 0x250 (8)
	struct Unknown FadeIn2; // 0x258 (8)
	struct Unknown RankDown; // 0x260 (8)
	struct Unknown RankUp; // 0x268 (8)
	struct Unknown FadeOut; // 0x270 (8)
	struct Unknown FadeIn; // 0x278 (8)
	struct Unknown Button_DeathCam; // 0x280 (8)
	struct Unknown Button_Exit; // 0x288 (8)
	struct Unknown Button_Report; // 0x290 (8)
	struct Unknown Button_Spectate; // 0x298 (8)
	struct Unknown Image; // 0x2A0 (8)
	struct Unknown Image_2; // 0x2A8 (8)
	struct Unknown Image_3; // 0x2B0 (8)
	struct Unknown Image_4; // 0x2B8 (8)
	struct Unknown Image_5; // 0x2C0 (8)
	struct Unknown Image_6; // 0x2C8 (8)
	struct Unknown Image_7; // 0x2D0 (8)
	struct Unknown Image_8; // 0x2D8 (8)
	struct Unknown Image_135; // 0x2E0 (8)
	struct Unknown Image_149; // 0x2E8 (8)
	struct Unknown Image_239; // 0x2F0 (8)
	struct Unknown Image_314; // 0x2F8 (8)
	struct Unknown Image_377; // 0x300 (8)
	struct Unknown Image_444; // 0x308 (8)
	struct Unknown Image_477; // 0x310 (8)
	struct Unknown Image_518; // 0x318 (8)
	struct Unknown Image_531; // 0x320 (8)
	struct Unknown Image_745; // 0x328 (8)
	struct Unknown Image_992; // 0x330 (8)
	struct Unknown Image_1373; // 0x338 (8)
	struct Unknown Image_1459; // 0x340 (8)
	struct Unknown Image_1506; // 0x348 (8)
	struct Unknown Image_1508; // 0x350 (8)
	struct Unknown Image_1925; // 0x358 (8)
	struct Unknown Image_NextTireIcon; // 0x360 (8)
	struct Unknown Light_01; // 0x368 (8)
	struct Unknown Light_02; // 0x370 (8)
	struct Unknown Light_03; // 0x378 (8)
	struct Unknown Light_04; // 0x380 (8)
	struct Unknown Light_05; // 0x388 (8)
	struct Unknown Light_06; // 0x390 (8)
	struct Unknown Light_07; // 0x398 (8)
	struct Unknown Light_08; // 0x3A0 (8)
	struct Unknown Overlay_Rank; // 0x3A8 (8)
	struct Unknown Overlay_Report; // 0x3B0 (8)
	struct Unknown Overlay_Spectate; // 0x3B8 (8)
	struct Unknown ProgressBar_Current; // 0x3C0 (8)
	struct Unknown ProgressBar_Down; // 0x3C8 (8)
	struct Unknown ProgressBar_Up; // 0x3D0 (8)
	struct Unknown ScrollBox_GoldList; // 0x3D8 (8)
	struct Unknown ScrollBox_ItemList; // 0x3E0 (8)
	struct Unknown SizeBox_8; // 0x3E8 (8)
	struct Unknown Spacer_6018; // 0x3F0 (8)
	struct Unknown Spacer_6217; // 0x3F8 (8)
	struct Unknown Spacer_Center; // 0x400 (8)
	struct Unknown T_RemainTime; // 0x408 (8)
	struct Unknown team_kill; // 0x410 (8)
	struct Unknown Team_Revives; // 0x418 (8)
	struct Unknown Text_Report; // 0x420 (8)
	struct Unknown TextBlock_1425; // 0x428 (8)
	struct Unknown TextBlock_CurrentRP; // 0x430 (8)
	struct Unknown TextBlock_ItemCount; // 0x438 (8)
	struct Unknown TextBlock_Kill; // 0x440 (8)
	struct Unknown TextBlock_MatchRP; // 0x448 (8)
	struct Unknown TextBlock_NextRP; // 0x450 (8)
	struct Unknown TextBlock_Rank; // 0x458 (8)
	struct Unknown TextBlock_Resuscitates; // 0x460 (8)
	struct Unknown TextBlock_Title; // 0x468 (8)
	struct Unknown TextBlock_TotalGold; // 0x470 (8)
	struct Unknown TextBlock_TotalTeamCount; // 0x478 (8)
	struct Unknown U; // 0x480 (8)
	struct Unknown U; // 0x488 (8)
	struct Unknown U_1; // 0x490 (8)
	struct Unknown U_2; // 0x498 (8)
	struct Unknown U; // 0x4A0 (8)
	struct Unknown VerticalBox_188; // 0x4A8 (8)
	struct Unknown FinalResultData; // 0x4B0 (4)
	struct Unknown PlayerState; // 0x4B8 (8)
	struct Unknown Timehandle_Rank; // 0x4C0 (8)
	int32_t PlayerOriRP; // 0x4C8 (4)
	int32_t TargetRP; // 0x4CC (4)
	int32_t CurrentRP; // 0x4D0 (4)
	int32_t NextTireRP; // 0x4D4 (4)
	char Increase : 0; // 0x4D8 (1)
	int32_t CurrentTierID; // 0x4DC (4)
	char bMaxPrograssbar : 0; // 0x4E0 (1)
	struct Unknown MatchEndWidgetRef; // 0x4E8 (8)
	int32_t RandomGold; // 0x4F0 (4)
	struct Unknown GoldHandle; // 0x4F8 (8)
	char IsWinningCam : 0; // 0x500 (1)
	int32_t GainGoldValue; // 0x504 (4)
	struct Unknown GainGoldHandle; // 0x508 (8)
	struct Unknown StartSound; // 0x510 (4)

	void SequenceEvent__ENTRYPOINTU_4(); // Function U.U.SequenceEvent__ENTRYPOINTU_4(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_3(); // Function U.U.SequenceEvent__ENTRYPOINTU_3(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_2(); // Function U.U.SequenceEvent__ENTRYPOINTU_2(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_1(); // Function U.U.SequenceEvent__ENTRYPOINTU_1(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateInputMode(); // Function U.U.UpdateInputMode(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Check(); // Function U.U.Check(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Check(); // Function U.U.Check(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReportSended(); // Function U.U.ReportSended(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetAllWidgetVisiblility(char IsShow); // Function U.U.SetAllWidgetVisiblility(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideSimpleWidget(); // Function U.U.HideSimpleWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideSimpleWidgetSlowly(); // Function U.U.HideSimpleWidgetSlowly(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetRankImage(int32_t ID, struct Unknown Widget); // Function U.U.SetRankImage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetNextRank(int32_t TierID); // Function U.U.SetNextRank(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayRankDown(); // Function U.U.PlayRankDown(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayRankUp(); // Function U.U.PlayRankUp(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Init(); // Function U.U.Init(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayRankAnimation(int32_t StartRP, int32_t MatchRP, int32_t MaxRP); // Function U.U.PlayRankAnimation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateRank(); // Function U.U.UpdateRank(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetColorTextWidget(struct Unknown Widget, int32_t Value, struct Unknown Color); // Function U.U.SetColorTextWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPlayInfo(); // Function U.U.SetPlayInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetItem(); // Function U.U.SetItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetRank(); // Function U.U.SetRank(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetGold(); // Function U.U.SetGold(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_5C9A4A6341FF221002168F953DF28124(struct Unknown Loaded); // Function U.U.OnLoaded_5C9A4A6341FF221002168F953DF28124(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_161_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_161_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_DeathCam_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_DeathCam_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Exit_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EventRankAnimation(); // Function U.U.EventRankAnimation(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CustomEvent_1(); // Function U.U.CustomEvent_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadTexture(struct Unknown Imge, struct Unknown Widget); // Function U.U.AsyncLoadTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Report_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Report_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Report_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Report_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Close(); // Function U.U.Close(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowDeathCam(); // Function U.U.ShowDeathCam(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowGold(); // Function U.U.ShowGold(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Destruct(); // Function U.U.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelReplayTimelineEventMarker {

public:

	struct Unknown UberGraphFrame; // 0x290 (8)
	struct Unknown MarkerBorder; // 0x298 (8)

	void K2_SetKillEvent(char IsMyInfo); // Function U.U.K2_SetKillEvent(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown DropBoxPanel; // 0x250 (8)
	struct Unknown Image_1; // 0x258 (8)
	struct Unknown Image_2; // 0x260 (8)
	struct Unknown Image_3; // 0x268 (8)
	struct Unknown Image_4; // 0x270 (8)
	struct Unknown Image_5; // 0x278 (8)
	struct Unknown Image_9; // 0x280 (8)
	struct Unknown Image_10; // 0x288 (8)
	struct Unknown Image_11; // 0x290 (8)
	struct Unknown Image_12; // 0x298 (8)
	struct Unknown Image_13; // 0x2A0 (8)
	struct Unknown Image_14; // 0x2A8 (8)
	struct Unknown Image_15; // 0x2B0 (8)
	struct Unknown Image_16; // 0x2B8 (8)
	struct Unknown Image_17; // 0x2C0 (8)
	struct Unknown Image_18; // 0x2C8 (8)
	struct Unknown Image_19; // 0x2D0 (8)
	struct Unknown Image_20; // 0x2D8 (8)
	struct Unknown Image_21; // 0x2E0 (8)
	struct Unknown ScrollBox_2; // 0x2E8 (8)
	struct Unknown SizeBox_1; // 0x2F0 (8)
	struct Unknown W; // 0x2F8 (8)
	struct Unknown WrapBox_1; // 0x300 (8)

	char DropItem(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.DropItem(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CloseHover(); // Function U.U.CloseHover(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragLeave(struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDragLeave(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragEnter(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDragEnter(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown Image_2; // 0x248 (8)
	struct Unknown InvalidationBox_1; // 0x250 (8)
	struct Unknown Switcher; // 0x258 (8)
	float OwnDirection; // 0x260 (4)

	void Initialize(float Direction); // Function U.U.Initialize(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Anim_KillMessage; // 0x250 (8)
	struct Unknown Anim_RemoveCoreInfo; // 0x258 (8)
	struct Unknown Anim_AddCoreInfo; // 0x260 (8)
	struct Unknown HB_Smartping; // 0x268 (8)
	struct Unknown Img_Back; // 0x270 (8)
	struct Unknown Img_Back_2; // 0x278 (8)
	struct Unknown Img_MarkerIcon; // 0x280 (8)
	struct Unknown IMG_PerkDeckIcon; // 0x288 (8)
	struct Unknown NewRichText; // 0x290 (8)
	struct Unknown T_Damage; // 0x298 (8)
	struct Unknown T_DamageCauser; // 0x2A0 (8)
	struct Unknown T_DamageResult; // 0x2A8 (8)
	struct Unknown T_HeadShot; // 0x2B0 (8)
	struct Unknown T_HitCount; // 0x2B8 (8)
	struct Unknown T_HitType; // 0x2C0 (8)
	struct Unknown T_Message; // 0x2C8 (8)
	struct Unknown T_PingType; // 0x2D0 (8)
	struct Unknown T_PlayerName; // 0x2D8 (8)
	struct Unknown T_TargetClass; // 0x2E0 (8)
	struct Unknown T_TargetLevel; // 0x2E8 (8)
	struct Unknown T_TargetName; // 0x2F0 (8)
	struct Unknown T_TargetWeapon; // 0x2F8 (8)
	struct Unknown T_WeaponLevel; // 0x300 (8)
	struct Unknown WidgetSwitcher_194; // 0x308 (8)
	struct Unknown WidgetSwitcher_Main; // 0x310 (8)
	struct Unknown ParentWidgetRef; // 0x318 (8)
	struct Unknown Timer_StartRemove; // 0x320 (8)
	struct Unknown DamageLogInfo; // 0x328 (2904)
	float LogTime; // 0xE80 (4)
	float LogStackValidTime; // 0xE84 (4)

	void DamageResultText(struct FText& Result); // Function U.U.DamageResultText(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DamageText(struct FText& Result); // Function U.U.DamageText(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void WeaponText(struct FText& Result); // Function U.U.WeaponText(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void TargetText(struct FText& Result); // Function U.U.TargetText(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StackDamageLog(struct Unknown& DamageLogInfo); // Function U.U.StackDamageLog(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckCanStackDamage(struct Unknown& DamageLogInfo, char& CanStack); // Function U.U.CheckCanStackDamage(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetHitDamageLogInfo(struct Unknown& DamageLogInfo); // Function U.U.SetHitDamageLogInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetCoreInfoKillMessage(struct FText Message); // Function U.U.SetCoreInfoKillMessage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetCoreInfoMessageType(struct FString Type); // Function U.U.SetCoreInfoMessageType(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetResuscitationPingInfo(); // Function U.U.SetResuscitationPingInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetCoreInfoResuscitation(struct Unknown PlayerState); // Function U.U.SetCoreInfoResuscitation(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetRequestMessageInfo(struct Unknown PlayerState, struct FText Message); // Function U.U.SetRequestMessageInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetRequestMessage(struct Unknown Player, struct FText Message); // Function U.U.SetRequestMessage(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetRoutePingInfo(); // Function U.U.SetRoutePingInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetCoreInfoRoutePing(struct Unknown PlayerState); // Function U.U.SetCoreInfoRoutePing(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetCoreInfoMessage(struct FText Message, struct FString Type); // Function U.U.SetCoreInfoMessage(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetRemoveTimer(float RemainTime); // Function U.U.SetRemoveTimer(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPlayerInfo(struct Unknown PlayerState); // Function U.U.SetPlayerInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPingType(struct Unknown PingInfo); // Function U.U.SetPingType(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetCoreInfoSmartping(struct Unknown PlayerState); // Function U.U.SetCoreInfoSmartping(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnAnimationFinished(struct Unknown Animation); // Function U.U.OnAnimationFinished(BlueprintCosmetic|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayAddCoreInfoAnim(); // Function U.U.PlayAddCoreInfoAnim(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayKillMessageAnim(); // Function U.U.PlayKillMessageAnim(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StartRemove(); // Function U.U.StartRemove(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelRoutePingWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Canvas; // 0x250 (8)
	struct FMulticastInlineDelegate OnMarkerClicked; // 0x258 (16)
	struct Unknown PlayerState; // 0x268 (8)
	struct TArray<Unknown> PointsArray; // 0x270 (16)
	struct Unknown StartPosition; // 0x280 (8)
	struct TArray<Unknown> PointWidgets; // 0x288 (16)
	struct TArray<Unknown> LineWidgets; // 0x298 (16)
	struct Unknown U; // 0x2A8 (8)
	char IsDrawing : 0; // 0x2B0 (1)
	struct Unknown GuideLineWidgetRef; // 0x2B8 (8)
	struct Unknown GuideLinePos; // 0x2C0 (8)
	char IsUpdate : 0; // 0x2C8 (1)

	void InitGuideLine(); // Function U.U.InitGuideLine(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetGuideLine(); // Function U.U.ResetGuideLine(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateGuideLine(); // Function U.U.UpdateGuideLine(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsValidGuideLine(char& Valid); // Function U.U.IsValidGuideLine(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetLineInfo(struct Unknown LineRef, struct Unknown CurrentPos, struct Unknown NextPos); // Function U.U.SetLineInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetAngleCurrentToNext(struct Unknown CurrentPos, struct Unknown NextPos, float& Angle); // Function U.U.GetAngleCurrentToNext(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetRouteWidgets(); // Function U.U.SetRouteWidgets(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTeamColor(); // Function U.U.SetTeamColor(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void MakeWidgets(); // Function U.U.MakeWidgets(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Initialize(struct Unknown PlayerState); // Function U.U.Initialize(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateRoutePing(struct Unknown MapCompWidget, struct TArray<Unknown>& Positions, char IsUpdate); // Function U.U.UpdateRoutePing(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMarkerClicked__DelegateSignature(struct Unknown Button, char mapObjectID); // Function U.U.OnMarkerClicked__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown TextBlock; // 0x250 (8)
	struct FText SetText; // 0x258 (24)

	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelScopeWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Image_1; // 0x250 (8)

	void SetScopeImageAngle(float NewAngle); // Function U.U.SetScopeImageAngle(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelMiniMapWidget {

public:

	struct Unknown UberGraphFrame; // 0x260 (8)
	struct Unknown PlayerIconOnDamagingAnimation; // 0x268 (8)
	struct Unknown ShirinkingAnimation; // 0x270 (8)
	struct Unknown AlertIcon; // 0x278 (8)
	struct Unknown B; // 0x280 (8)
	struct Unknown B; // 0x288 (8)
	struct Unknown CircleInfoGroup; // 0x290 (8)
	struct Unknown C; // 0x298 (8)
	struct Unknown CurrentProgressBar; // 0x2A0 (8)
	struct Unknown Image_174; // 0x2A8 (8)
	struct Unknown Image_766; // 0x2B0 (8)
	struct Unknown InvalidationBox_2; // 0x2B8 (8)
	struct Unknown LulledGroup; // 0x2C0 (8)
	struct Unknown PhaseText; // 0x2C8 (8)
	struct Unknown PlayerIconGroup; // 0x2D0 (8)
	struct Unknown S; // 0x2D8 (8)
	struct Unknown SB_CircleInfo; // 0x2E0 (8)
	struct Unknown ShrinkingGroup; // 0x2E8 (8)
	struct Unknown Switcher; // 0x2F0 (8)
	struct Unknown U; // 0x2F8 (8)
	struct Unknown U; // 0x300 (8)
	int32_t State; // 0x308 (4)
	struct Unknown MapSize_Default; // 0x30C (8)
	struct Unknown MapSize_Extend; // 0x314 (8)
	int32_t InitializeCount; // 0x31C (4)
	char bExtendMode : 0; // 0x320 (1)
	int32_t RecipeCount; // 0x324 (4)
	struct Unknown TargetCharacter; // 0x328 (8)

	void SetRecipeList(); // Function U.U.SetRecipeList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	enum class Unknow Get(); // Function U.U.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnBlueZoneStateChanged(enum class Unknow Pre, enum class Unknow Cur); // Function U.U.OnBlueZoneStateChanged(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnSurvivalCirclePhaseChanged(int32_t PrevPhase, int32_t CurrentPhase); // Function U.U.OnSurvivalCirclePhaseChanged(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetWidget(); // Function U.U.ResetWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ToggleMapSize(struct Unknown WidgetSize); // Function U.U.ToggleMapSize(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown GetVectorCurrentTo(struct Unknown Position); // Function U.U.GetVectorCurrentTo(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	float CalcLengthOnWave(float Distance); // Function U.U.CalcLengthOnWave(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	float CalcDistanceRelatedToTarget(struct Unknown Vector, float Distance); // Function U.U.CalcDistanceRelatedToTarget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown GetTargetTo(struct Unknown Position); // Function U.U.GetTargetTo(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown GetTargetToPlayer(); // Function U.U.GetTargetToPlayer(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateCircleInfoGroup(float DeltaSeconds); // Function U.U.UpdateCircleInfoGroup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateOnShrinking(float DeltaSeconds); // Function U.U.UpdateOnShrinking(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateActiveIcon(); // Function U.U.UpdateActiveIcon(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateTimeToActivate(); // Function U.U.UpdateTimeToActivate(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdatePlayerIcon(float DeltaSeconds); // Function U.U.UpdatePlayerIcon(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnBattleRoyaleStateChanged(enum class Unknow Previous, enum class Unknow Current); // Function U.U.OnBattleRoyaleStateChanged(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddAreaWidget(enum class Unknow WorldMapAreaWidgetType, struct Unknown& AreaWidgetInfo); // Function U.U.AddAreaWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void NotifyNeedRefreshToMap(); // Function U.U.NotifyNeedRefreshToMap(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetToggleMinimap(char bToggle); // Function U.U.SetToggleMinimap(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnAttackedWidget(int32_t UniquePlayerId); // Function U.U.OnAttackedWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnFireWidget(int32_t UniquePlayerId, struct Unknown Rotation, float Length); // Function U.U.OnFireWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetMapPlayers(); // Function U.U.ResetMapPlayers(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ChangeRecipeList(); // Function U.U.ChangeRecipeList(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RemoveAreaWidget(enum class Unknow WorldMapAreaWidgetType, struct Unknown& AreaWidgetInfo); // Function U.U.RemoveAreaWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (char IsShow); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelTeamInfoSlotWidget {

public:

	struct Unknown UberGraphFrame; // 0x308 (8)
	struct Unknown Anim_IconBouncing; // 0x310 (8)
	struct Unknown Progress_Stroke; // 0x318 (8)
	struct Unknown Shoot_ani; // 0x320 (8)
	struct Unknown CanvasPanel_Main; // 0x328 (8)
	struct Unknown death; // 0x330 (8)
	struct Unknown Image_126; // 0x338 (8)
	struct Unknown Image_168; // 0x340 (8)
	struct Unknown Image_280; // 0x348 (8)
	struct Unknown Image_623; // 0x350 (8)
	struct Unknown Image_624; // 0x358 (8)
	struct Unknown Image_1058; // 0x360 (8)
	struct Unknown Image_Firing; // 0x368 (8)
	struct Unknown Image_Heart; // 0x370 (8)
	struct Unknown Image_Outline; // 0x378 (8)
	struct Unknown Image_TeamInfoClassIcon; // 0x380 (8)
	struct Unknown Img_LogOut; // 0x388 (8)
	struct Unknown Img_Voice; // 0x390 (8)
	struct Unknown Img_VoiceMute; // 0x398 (8)
	struct Unknown InvalidationBox_1; // 0x3A0 (8)
	struct Unknown Overlay_447; // 0x3A8 (8)
	struct Unknown Overlay_Death; // 0x3B0 (8)
	struct Unknown Overlay_RemainGoldenTimeSelf; // 0x3B8 (8)
	struct Unknown Overlay_RequestResus; // 0x3C0 (8)
	struct Unknown ProgressBar_440; // 0x3C8 (8)
	struct Unknown ProgressBar_443; // 0x3D0 (8)
	struct Unknown SizeBox_132; // 0x3D8 (8)
	struct Unknown StateGoldenTime; // 0x3E0 (8)
	struct Unknown StateKnockdown; // 0x3E8 (8)
	struct Unknown T_ClassName; // 0x3F0 (8)
	struct Unknown T_ClassWeapon; // 0x3F8 (8)
	struct Unknown T_PlayerIndex; // 0x400 (8)
	struct Unknown T_PlayerName; // 0x408 (8)
	struct Unknown TeamColor; // 0x410 (8)
	struct Unknown TextBlock_4; // 0x418 (8)
	struct Unknown TextBlock_297; // 0x420 (8)
	struct Unknown TextBlock_590; // 0x428 (8)
	struct Unknown TextBlock_591; // 0x430 (8)
	struct Unknown TextBlock_1016; // 0x438 (8)
	struct Unknown TextBlock_RemainGoldenTimeSelf; // 0x440 (8)
	struct Unknown TextBlock_RequestResus; // 0x448 (8)
	struct Unknown TextBlock_Resuscitating; // 0x450 (8)
	struct Unknown U; // 0x458 (8)
	struct Unknown WidgetSwitcher_LogOut; // 0x460 (8)
	struct Unknown WidgetSwitcher_Resuscitate; // 0x468 (8)
	int32_t Index; // 0x470 (4)
	enum class Unknow Behavior; // 0x474 (1)
	float hp; // 0x478 (4)
	struct FText Name; // 0x480 (24)
	struct TArray<Unknown> ColorList; // 0x498 (16)
	char bPin : 0; // 0x4A8 (1)
	float PrevHP; // 0x4AC (4)
	char bReduceHP : 0; // 0x4B0 (1)
	struct Unknown TimerHandleReduceHP; // 0x4B8 (8)
	char bIncreaseHP : 0; // 0x4C0 (1)
	struct Unknown HealthChangeCurve; // 0x4C8 (8)
	struct Unknown HealthDangerCurve; // 0x4D0 (8)
	struct Unknown HealTimer; // 0x4D8 (8)
	struct Unknown FaintTimer; // 0x4E0 (8)
	float BaseHealth; // 0x4E8 (4)
	float TargetHealth; // 0x4EC (4)
	float HealthWeight; // 0x4F0 (4)
	float TargetFaint; // 0x4F4 (4)
	float BaseFaint; // 0x4F8 (4)
	float FaintWeight; // 0x4FC (4)
	float CurrentHPPercent; // 0x500 (4)
	float HealHPPercent; // 0x504 (4)
	float FaintPercent; // 0x508 (4)
	float CurrentAlpha; // 0x50C (4)
	float AlphaTimer; // 0x510 (4)
	struct Unknown AlphaCurve; // 0x518 (8)
	char KnockDown : 0; // 0x520 (1)
	float HeartBeat; // 0x524 (4)
	struct Unknown DisConnectSprite; // 0x528 (8)
	struct Unknown KnockDownSprite; // 0x530 (8)
	struct Unknown DeathSprite; // 0x538 (8)
	struct Unknown VehicleSprite; // 0x540 (8)
	struct Unknown HpTimer; // 0x548 (8)
	float EndTime; // 0x550 (4)
	float StartTime; // 0x554 (4)
	float TotalTime; // 0x558 (4)
	float ResultValue; // 0x55C (4)
	float AddTme; // 0x560 (4)
	float PreStart; // 0x564 (4)

	void OnLoaded_27D2D12149E3EA31998D6D88C1D08B2F(struct Unknown Loaded); // Function U.U.OnLoaded_27D2D12149E3EA31998D6D88C1D08B2F(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetNickName(struct FString NewNickName); // Function U.U.SetNickName(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetIndex(int32_t NewIndex); // Function U.U.SetIndex(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPerkLevel(int32_t NewPerkLevel); // Function U.U.SetPerkLevel(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPerkName(struct FName& NewPerkName); // Function U.U.SetPerkName(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetKillCount(int32_t NewKillCount); // Function U.U.SetKillCount(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetHp(int32_t NewCur, int32_t NewMax); // Function U.U.SetHp(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPing(struct Unknown& NewPingInfo); // Function U.U.SetPing(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTalking(char NewTalking, char bIsMute); // Function U.U.SetTalking(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetFiring(char NewIsFiring); // Function U.U.SetFiring(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AnimationHP(float Start, float End, float Time); // Function U.U.AnimationHP(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Hp_Ani(); // Function U.U.Hp_Ani(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetGoldenTime(struct Unknown NewRemainTime, float NewPercent); // Function U.U.SetGoldenTime(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetExpertWeaponName(struct FText& NewWeaponName); // Function U.U.SetExpertWeaponName(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetCharacterState(enum class Unknow NewState, char IsDisconnect); // Function U.U.SetCharacterState(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetRequestResuscitation(char bNewFlag); // Function U.U.SetRequestResuscitation(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetResuscitating(char bNewFlag); // Function U.U.SetResuscitating(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateInvalidationbox(); // Function U.U.UpdateInvalidationbox(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Button_Request; // 0x250 (8)
	struct Unknown Image_955; // 0x258 (8)
	struct Unknown Image_1208; // 0x260 (8)
	struct Unknown SizeBox_77; // 0x268 (8)
	struct Unknown SizeBox_78; // 0x270 (8)
	struct Unknown Text_Price; // 0x278 (8)
	struct Unknown TextBlock_767; // 0x280 (8)
	struct Unknown WidgetSwitcher_Price; // 0x288 (8)
	struct Unknown PlayerControllerRef; // 0x290 (8)
	char bCanRequest : 0; // 0x298 (1)
	char bRequest : 0; // 0x299 (1)
	struct FText RequstingResuscitationText; // 0x2A0 (24)
	float RequestingSizeBoxWidth; // 0x2B8 (4)
	struct Unknown RequestTextColor; // 0x2C0 (40)
	struct Unknown RequestingTextColor; // 0x2E8 (40)
	float RequestingSizeBoxInitWidth; // 0x310 (4)
	struct FText RequstingResuscitationInitText; // 0x318 (24)
	struct Unknown InitButtonStyle; // 0x330 (632)
	struct Unknown RequestingButtonStyle; // 0x5A8 (632)
	struct Unknown CanRequestButtonStyle; // 0x820 (632)

	void Init(); // Function U.U.Init(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetRequestState(char bOnRequest); // Function U.U.SetRequestState(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetPlayerController(struct Unknown& PC); // Function U.U.GetPlayerController(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char Get_Button_Request_bIsEnabled_1(); // Function U.U.Get_Button_Request_bIsEnabled_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_307_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_307_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPrice(int32_t Price); // Function U.U.SetPrice(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelPlayerInfoWidget {

public:

	struct Unknown UberGraphFrame; // 0x2C0 (8)
	struct Unknown Lung_Red; // 0x2C8 (8)
	struct Unknown Weaving_Stand; // 0x2D0 (8)
	struct Unknown Weaving_Sit; // 0x2D8 (8)
	struct Unknown HorizontalBox_Backpack_Star; // 0x2E0 (8)
	struct Unknown HorizontalBox_Chest_Star; // 0x2E8 (8)
	struct Unknown HorizontalBox_Damage; // 0x2F0 (8)
	struct Unknown HorizontalBox_Helmet_Star; // 0x2F8 (8)
	struct Unknown HorizontalBox_Levels; // 0x300 (8)
	struct Unknown Image_BackPack_Star; // 0x308 (8)
	struct Unknown Image_C4; // 0x310 (8)
	struct Unknown Image_Chest_Star; // 0x318 (8)
	struct Unknown Image_DamageBg; // 0x320 (8)
	struct Unknown Image_FireMode; // 0x328 (8)
	struct Unknown Image_Helmet_Star; // 0x330 (8)
	struct Unknown Image_Time; // 0x338 (8)
	struct Unknown Image_Timer; // 0x340 (8)
	struct Unknown Image_Weapon; // 0x348 (8)
	struct Unknown Overlay_Tab; // 0x350 (8)
	struct Unknown ProgressBar_Backpack; // 0x358 (8)
	struct Unknown ProgressBar_Chest; // 0x360 (8)
	struct Unknown ProgressBar_Helmet; // 0x368 (8)
	struct Unknown SizeBox_Backpack; // 0x370 (8)
	struct Unknown SizeBox_Chest; // 0x378 (8)
	struct Unknown SizeBox_Helmet; // 0x380 (8)
	struct Unknown T_C4Time; // 0x388 (8)
	struct Unknown T_Damage; // 0x390 (8)
	struct Unknown T_PerkWeaponAmmo; // 0x398 (8)
	struct Unknown T_SlotIndex; // 0x3A0 (8)
	struct Unknown T_WeaponName; // 0x3A8 (8)
	struct Unknown TextBlock_bulletCount; // 0x3B0 (8)
	struct Unknown TextBlock_bulletMaxCount; // 0x3B8 (8)
	struct Unknown U; // 0x3C0 (8)
	struct Unknown U_2; // 0x3C8 (8)
	struct Unknown U_3; // 0x3D0 (8)
	struct Unknown U_4; // 0x3D8 (8)
	struct Unknown U_5; // 0x3E0 (8)
	struct Unknown U_6; // 0x3E8 (8)
	struct Unknown U; // 0x3F0 (8)
	struct Unknown U; // 0x3F8 (8)
	struct Unknown WidgetSwitcher_Bullet; // 0x400 (8)
	struct Unknown WidgetSwitcher_C4; // 0x408 (8)
	struct Unknown WidgetSwitcher_Stance; // 0x410 (8)
	struct Unknown Anim_LastHeadbanging; // 0x418 (8)
	struct Unknown Timer_UpdateInfos; // 0x420 (8)
	char bIsCoolTimeWeapon : 0; // 0x428 (1)
	struct Unknown CurrentWeapon; // 0x430 (8)
	struct Unknown TargetPawnRef; // 0x438 (8)
	struct Unknown CoolTimeMaterial; // 0x440 (8)
	struct Unknown WeaponInfo; // 0x448 (168)
	int32_t SlotIndex; // 0x4F0 (4)

	void IsNoDamageWeapon(char& Weapon); // Function U.U.IsNoDamageWeapon(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetFistMode(); // Function U.U.SetFistMode(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsMeleeWeapon(char& bTrue); // Function U.U.IsMeleeWeapon(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnAddBuffs(struct Unknown& AddBuffs); // Function U.U.OnAddBuffs(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HiddenAllBuffs(); // Function U.U.HiddenAllBuffs(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetStar(int32_t Level, struct Unknown Tint, struct Unknown Image); // Function U.U.SetStar(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetArmorInfo(char HasHelmet, float HelmetGauge, char HasChest, float ChestGauge, char HasBackpack, float BackpackGauge, int32_t HelmetLevel, int32_t ArmorLevel, int32_t BagLevel); // Function U.U.SetArmorInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsPerkWeapon(char& Weapon); // Function U.U.IsPerkWeapon(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ChangePawn(); // Function U.U.ChangePawn(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetBulletCount(struct FString BulletCount, struct FString BulletMaxCount); // Function U.U.SetBulletCount(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetWeaponFireMode(enum class Unknow FireMode); // Function U.U.SetWeaponFireMode(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateDamage(); // Function U.U.UpdateDamage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateTimer(); // Function U.U.UpdateTimer(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateInfos(); // Function U.U.UpdateInfos(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetUpdateTimer(); // Function U.U.SetUpdateTimer(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetLungRed(char Flag); // Function U.U.SetLungRed(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnSetStance(char IsFirstPerson, int32_t Stance, char IsHeadbanging); // Function U.U.OnSetStance(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetWeaponInfo(); // Function U.U.ResetWeaponInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetWeaponInfo(struct Unknown& WeaponInfo); // Function U.U.SetWeaponInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Init(); // Function U.U.Init(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_97B8B47B466730860C4DE6A59E985E90(struct Unknown Loaded); // Function U.U.OnLoaded_97B8B47B466730860C4DE6A59E985E90(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddBuff(struct Unknown AddBuffs); // Function U.U.AddBuff(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StopLastHeadbangingAnim(); // Function U.U.StopLastHeadbangingAnim(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetStance(char bIsFirstPerson, int32_t Stance, char bIsHeadbanging); // Function U.U.SetStance(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetBackpackPercent(float Percent); // Function U.U.SetBackpackPercent(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(struct Unknown IconTexture, struct Unknown TargetImage); // Function U.U.Set(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetRedLungAnim(char bIsRed); // Function U.U.SetRedLungAnim(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetCurrentWeaponInfo(int32_t SlotIndex); // Function U.U.ResetCurrentWeaponInfo(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetCurrentWeaponInfo(struct Unknown SetWeaponInfo); // Function U.U.SetCurrentWeaponInfo(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetFireMode(enum class Unknow SetFireMode); // Function U.U.SetFireMode(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetWeaponBulletCount(int32_t CurrentAmmo, int32_t TotalAmmo); // Function U.U.SetWeaponBulletCount(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelKillInfoSlotWidget {

public:

	struct Unknown UberGraphFrame; // 0x258 (8)
	struct Unknown Anim_Hide; // 0x260 (8)
	struct Unknown Anim_Down; // 0x268 (8)
	struct Unknown CanvasPanel_Main; // 0x270 (8)
	struct Unknown Img_Back; // 0x278 (8)
	struct Unknown Img_BroadType; // 0x280 (8)
	struct Unknown Img_DamegeType; // 0x288 (8)
	struct Unknown Img_Weapon; // 0x290 (8)
	struct Unknown ScaleBox_Weapon; // 0x298 (8)
	struct Unknown SizeBox_BroadType; // 0x2A0 (8)
	struct Unknown SizeBox_DamageType; // 0x2A8 (8)
	struct Unknown SizeBox_HeadShot; // 0x2B0 (8)
	struct Unknown T_Context; // 0x2B8 (8)
	struct Unknown U; // 0x2C0 (8)
	struct Unknown U; // 0x2C8 (8)
	struct FMulticastInlineDelegate OnTimeOut; // 0x2D0 (16)
	struct TMap<Unknown, Unknown> BroadcastDamageType; // 0x2E0 (80)
	struct Unknown MyTeamColor; // 0x330 (40)
	struct Unknown MyTeamKnockOutColor; // 0x358 (40)
	struct Unknown EnermyTeamColor; // 0x380 (40)
	struct Unknown EnermyTeamKnockOutColor; // 0x3A8 (40)
	struct Unknown DefaultColor; // 0x3D0 (40)
	struct Unknown DefaultKnockColor; // 0x3F8 (40)
	struct Unknown ResuscatedColor; // 0x420 (40)
	struct Unknown ParentWidgetRef; // 0x448 (8)
	struct Unknown Timer_StartHideAnim; // 0x450 (8)
	struct Unknown CurrentInfoColor; // 0x458 (40)

	void ResetInfos(); // Function U.U.ResetInfos(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetBroadcastTypeIcon(enum class Unknow MessageType); // Function U.U.SetBroadcastTypeIcon(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetTeamType(struct Unknown PlayerState, enum class Unknow& TeamType); // Function U.U.GetTeamType(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetInfoColor(struct Unknown Killer, struct Unknown Died, enum class Unknow MessageType, struct Unknown& OutTeamColor); // Function U.U.GetInfoColor(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetBGColor(enum class Unknow MessageType); // Function U.U.SetBGColor(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayDownAnim(); // Function U.U.PlayDownAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StartHideAnim(); // Function U.U.StartHideAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StartShow(); // Function U.U.StartShow(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_E905D98740C8E2F4A90B4C89D663ACAA(struct Unknown Loaded); // Function U.U.OnLoaded_E905D98740C8E2F4A90B4C89D663ACAA(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_342F68DF4CB26590AC0C9EA8C343CCF1(struct Unknown Loaded); // Function U.U.OnLoaded_342F68DF4CB26590AC0C9EA8C343CCF1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetKillMessageInfo(struct Unknown& Info); // Function U.U.SetKillMessageInfo(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnTimeOut__DelegateSignature(int32_t ArrayIndex, struct Unknown Slot); // Function U.U.OnTimeOut__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelKillInfoSlotWidget {

public:

	struct Unknown UberGraphFrame; // 0x258 (8)
	struct Unknown Anim_Hide; // 0x260 (8)
	struct Unknown Anim_Down; // 0x268 (8)
	struct Unknown HorizontalBox_Killer; // 0x270 (8)
	struct Unknown ScaleBox_KillerIcon; // 0x278 (8)
	struct Unknown T_ClassIcon; // 0x280 (8)
	struct Unknown T_Level; // 0x288 (8)
	struct Unknown T_LV; // 0x290 (8)
	struct Unknown T_Name; // 0x298 (8)
	struct FMulticastInlineDelegate OnTimeOut; // 0x2A0 (16)
	struct Unknown LocalPlayerState; // 0x2B0 (8)

	void OnLoaded_9DF86FA64782B378E42DBB813545BD34(struct Unknown Loaded); // Function U.U.OnLoaded_9DF86FA64782B378E42DBB813545BD34(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPlayerInfo(struct Unknown PlayerState, struct Unknown InfoColor); // Function U.U.SetPlayerInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnTimeOut__DelegateSignature(int32_t ArrayIndex, struct Unknown Slot); // Function U.U.OnTimeOut__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelGameBuffSlot {

public:

	struct Unknown UberGraphFrame; // 0x2F8 (8)
	struct Unknown Anim_Boost_Off; // 0x300 (8)
	struct Unknown Anim_Boost_On; // 0x308 (8)
	struct Unknown CanvasPanel_BoostInfo; // 0x310 (8)
	struct Unknown Image_Active; // 0x318 (8)
	struct Unknown IMG_CoolTime; // 0x320 (8)
	struct Unknown T_CoolTime; // 0x328 (8)
	struct Unknown MI_CoolTimeDynamicInstance; // 0x330 (8)
	struct Unknown MI_BuffActive; // 0x338 (8)
	float BoostOffAnimTime; // 0x340 (4)
	char IsActive : 0; // 0x344 (1)
	struct Unknown BoostBuffInfo; // 0x348 (392)

	void SetIsActive(char bActive); // Function U.U.SetIsActive(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitBuffInfo(); // Function U.U.InitBuffInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateCoolTime(float Timer, float MaxTime); // Function U.U.UpdateCoolTime(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_541BBAAD4C8A218716460DAC5837CB3E(struct Unknown Loaded); // Function U.U.OnLoaded_541BBAAD4C8A218716460DAC5837CB3E(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_UpdateBuff(float Timer, float MaxTime); // Function U.U.K2_UpdateBuff(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_OnNewBuff(); // Function U.U.K2_OnNewBuff(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnAnimationFinished(struct Unknown Animation); // Function U.U.OnAnimationFinished(BlueprintCosmetic|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_OnRenewBuff(); // Function U.U.K2_OnRenewBuff(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayAnimBoostOn(); // Function U.U.PlayAnimBoostOn(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncloadImage(struct Unknown Image); // Function U.U.AsyncloadImage(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelGameBuffSlot {

public:

	struct Unknown Image_1294; // 0x2F8 (8)
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelFallingWidget {

public:

	struct Unknown UberGraphFrame; // 0x270 (8)
	struct Unknown Parachute_Loop; // 0x278 (8)
	struct Unknown Parachute_Open; // 0x280 (8)
	struct Unknown Canvas; // 0x288 (8)
	struct Unknown HorizontalBox_Ground; // 0x290 (8)
	struct Unknown HorizontalBox_Parachute; // 0x298 (8)
	struct Unknown HorizontalBox_Sea; // 0x2A0 (8)
	struct Unknown Image_797; // 0x2A8 (8)
	struct Unknown Image_798; // 0x2B0 (8)
	struct Unknown Overlay_Speed; // 0x2B8 (8)
	struct Unknown Parachute; // 0x2C0 (8)
	struct Unknown Player; // 0x2C8 (8)
	struct Unknown PlayerGroup; // 0x2D0 (8)
	struct Unknown SeaHeight; // 0x2D8 (8)
	struct Unknown Speed; // 0x2E0 (8)
	struct Unknown TerrainHeight; // 0x2E8 (8)
	char IsParachute : 0; // 0x2F0 (1)

	void SetParachuteInfo(struct Unknown SetParachuteInfo); // Function U.U.SetParachuteInfo(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown Image_47; // 0x248 (8)

	void UpdateCursorVisibility(); // Function U.U.UpdateCursorVisibility(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Image_ClassIcon; // 0x250 (8)
	struct Unknown TextBlock_ClassName; // 0x258 (8)
	struct Unknown TextBlock_Count; // 0x260 (8)

	void SetClassCount(int32_t Count); // Function U.U.SetClassCount(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetClassInfo(struct Unknown& PerkDeckData); // Function U.U.SetClassInfo(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_5B4CA9324370B6EF1C483DB3B88E6511(struct Unknown Loaded); // Function U.U.OnLoaded_5B4CA9324370B6EF1C483DB3B88E6511(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadingClassIcon(struct Unknown Texture); // Function U.U.AsyncLoadingClassIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Disappear; // 0x250 (8)
	struct Unknown Finish; // 0x258 (8)
	struct Unknown Spin; // 0x260 (8)
	struct Unknown Idle; // 0x268 (8)
	struct Unknown Image_180; // 0x270 (8)
	struct Unknown ItemImage_bg; // 0x278 (8)
	struct Unknown ItemImage_Dummy1; // 0x280 (8)
	struct Unknown ItemImage_Main; // 0x288 (8)
	struct Unknown TextBlock_1; // 0x290 (8)
	struct Unknown TextBlock_3; // 0x298 (8)
	struct Unknown TextMountablewea; // 0x2A0 (8)
	struct Unknown TextMountableweaLV1; // 0x2A8 (8)
	struct Unknown PerkInfo; // 0x2B0 (40)
	struct Unknown PerkData; // 0x2D8 (224)
	char bLevelUp : 0; // 0x3B8 (1)
	char bFinishing : 0; // 0x3B9 (1)
	float FinishTime; // 0x3BC (4)
	enum class Unknow PerkSlot; // 0x3C0 (1)

	struct FText Get_TextBlock_1_Text_1(); // Function U.U.Get_TextBlock_1_Text_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown Get_ItemImage_bg_Brush_1(); // Function U.U.Get_ItemImage_bg_Brush_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown Get_ItemImage_Main_Brush_1(); // Function U.U.Get_ItemImage_Main_Brush_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText Get_TextMountablewea_Text_1(); // Function U.U.Get_TextMountablewea_Text_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	enum class Unknow Get_TextBlock_2_Visibility_1(); // Function U.U.Get_TextBlock_2_Visibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	enum class Unknow Get_TextBlock_0_Visibility_1(); // Function U.U.Get_TextBlock_0_Visibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StartFinish(); // Function U.U.StartFinish(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StartSpin(); // Function U.U.StartSpin(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EndFinish(); // Function U.U.EndFinish(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPerkInfo(struct Unknown PerkInfo); // Function U.U.SetPerkInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RemoveSelf(); // Function U.U.RemoveSelf(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Character_BG_Motion; // 0x250 (8)
	struct Unknown Image_130; // 0x258 (8)
	struct Unknown Image_308; // 0x260 (8)
	struct Unknown ScrollBox_KeepedList; // 0x268 (8)
	struct Unknown U; // 0x270 (8)
	struct Unknown U_74; // 0x278 (8)
	struct Unknown PlayerController; // 0x280 (8)

	void DisableCarriedListHover(); // Function U.U.DisableCarriedListHover(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char DropItem(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.DropItem(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetInventoryComponent(char& Result, struct Unknown& InventoryComponentRef); // Function U.U.GetInventoryComponent(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Reset(); // Function U.U.Reset(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverEquipSlotList(enum class Unknow WearableItemType); // Function U.U.HoverEquipSlotList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverResetEquipSlotList(); // Function U.U.HoverResetEquipSlotList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragLeave(struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDragLeave(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragEnter(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDragEnter(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Button_Focus; // 0x250 (8)
	struct Unknown HorizontalBox_1; // 0x258 (8)
	struct Unknown Image_223; // 0x260 (8)
	struct Unknown Img_Movie; // 0x268 (8)
	struct Unknown MediaPlayer; // 0x270 (8)
	char bPopup : 0; // 0x278 (1)
	struct Unknown Media; // 0x280 (8)
	struct Unknown MediaSoundComp; // 0x288 (8)
	struct Unknown Game; // 0x290 (8)
	float GammaIntensity; // 0x298 (4)
	struct Unknown SkipNoticeTimer; // 0x2A0 (8)
	struct Unknown MediaTexture; // 0x2A8 (8)
	struct FName OpeningFileName; // 0x2B0 (8)
	char End : 0; // 0x2B8 (1)
	char NextScene : 0; // 0x2B9 (1)

	void MoveNextScene(); // Function U.U.MoveNextScene(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnKeyDown(struct Unknown MyGeometry, struct Unknown InKeyEvent); // Function U.U.OnKeyDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CustomEvent_1(); // Function U.U.CustomEvent_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CustomEvent_2(); // Function U.U.CustomEvent_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Focus_K2Node_Com(); // Function U.U.BndEvt__Button_Focus_K2Node_Com(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelReplayPlayerListItem {

public:

	struct Unknown UberGraphFrame; // 0x270 (8)
	struct Unknown BT_PlayerName; // 0x278 (8)
	struct Unknown PB_HP; // 0x280 (8)
	struct Unknown T_PlayerName; // 0x288 (8)
	struct Unknown T_PlayerNameHighlight; // 0x290 (8)
	struct Unknown T_SortInfo; // 0x298 (8)
	char bIsTargetPawn : 0; // 0x2A0 (1)
	char bIsAlive : 0; // 0x2A1 (1)

	void UpdateHighlightNameColor(); // Function U.U.UpdateHighlightNameColor(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateSortInfo(enum class Unknow PlayerListSortType); // Function U.U.UpdateSortInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckAlive(enum class Unknow PlayerListSortType); // Function U.U.CheckAlive(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateButton(); // Function U.U.UpdateButton(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateHP(); // Function U.U.UpdateHP(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateDisable(); // Function U.U.UpdateDisable(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateInfos(); // Function U.U.UpdateInfos(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Init(struct Unknown PlayerState); // Function U.U.Init(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__BT_PlayerName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__BT_PlayerName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdatePlayerInfo(enum class Unknow PlayerListSortType); // Function U.U.UpdatePlayerInfo(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UU {

public:

	struct Unknown UberGraphFrame; // 0x1360 (8)
	struct Unknown Complete_ani; // 0x1368 (8)
	struct Unknown Serching_ani; // 0x1370 (8)
	struct Unknown Button; // 0x1378 (8)
	struct Unknown IconBox; // 0x1380 (8)
	struct Unknown Image; // 0x1388 (8)
	struct Unknown Image_2; // 0x1390 (8)
	struct Unknown Image_3; // 0x1398 (8)
	struct Unknown Image_4; // 0x13A0 (8)
	struct Unknown Image_5; // 0x13A8 (8)
	struct Unknown Image_6; // 0x13B0 (8)
	struct Unknown Image_7; // 0x13B8 (8)
	struct Unknown Image_8; // 0x13C0 (8)
	struct Unknown Image_9; // 0x13C8 (8)
	struct Unknown Image_10; // 0x13D0 (8)
	struct Unknown Image_149; // 0x13D8 (8)
	struct Unknown Image_170; // 0x13E0 (8)
	struct Unknown Image_253; // 0x13E8 (8)
	struct Unknown Image_305; // 0x13F0 (8)
	struct Unknown Image_Full; // 0x13F8 (8)
	struct Unknown IMG_ItemIcon; // 0x1400 (8)
	struct Unknown MaterialIcon; // 0x1408 (8)
	struct Unknown MouseHover_2; // 0x1410 (8)
	struct Unknown MouseHover_; // 0x1418 (8)
	struct Unknown MousePress_2; // 0x1420 (8)
	struct Unknown MousePress_; // 0x1428 (8)
	struct Unknown Searching_; // 0x1430 (8)
	struct Unknown Stroke; // 0x1438 (8)
	struct Unknown Stroke_2; // 0x1440 (8)
	struct Unknown Stroke_3; // 0x1448 (8)
	struct Unknown Stroke_4; // 0x1450 (8)
	struct Unknown PreHoveredWidget; // 0x1458 (8)
	enum class Unknow PreDragType; // 0x1460 (1)
	char Selected : 0; // 0x1461 (1)
	int32_t NeedCount; // 0x1464 (4)
	struct FName ItemKey; // 0x1468 (8)
	struct Unknown SelectItem; // 0x1470 (16)
	char BindSelectSearch : 0; // 0x1480 (1)
	char EnableSearch : 0; // 0x1481 (1)

	enum class Unknow Get_Image_Full_Visibility_1(); // Function U.U.Get_Image_Full_Visibility_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void MouseEnterImpl(); // Function U.U.MouseEnterImpl(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetMaterialInfo(struct FName ItemKey, int32_t Count, struct FName TopKey); // Function U.U.SetMaterialInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSign(); // Function U.U.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSign(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSign(); // Function U.U.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSign(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Destruct(); // Function U.U.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (struct Unknown MaterialItemKey, char IsSelect); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(char Select); // Function U.U.Set(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function U.U.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (char EnableMaterialSearch); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UU {

public:

	struct Unknown UberGraphFrame; // 0x2A0 (8)
	struct Unknown EventInform; // 0x2A8 (8)
	struct Unknown VisualBorder; // 0x2B0 (8)

	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_SetKillEvent(char IsMyInfo); // Function U.U.K2_SetKillEvent(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UU {

public:

	struct Unknown UberGraphFrame; // 0x2A0 (8)
	struct Unknown VisualBorder; // 0x2A8 (8)

	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown CurrentAccel; // 0x250 (12)
	struct Unknown TargetAccel; // 0x25C (12)
	struct Unknown CurrentCameraActor; // 0x268 (8)
	struct Unknown OldCameraLocation; // 0x270 (12)
	struct Unknown CurrentCameraLocation; // 0x27C (12)
	struct Unknown OriginCameraLocation; // 0x288 (12)
	struct Unknown TargetCameraLocation; // 0x294 (12)
	struct Unknown DataAsset; // 0x2A0 (8)
	char ResetOriginTransform : 0; // 0x2A8 (1)
	float BeginFocusDist; // 0x2AC (4)
	float EndFocusDist; // 0x2B0 (4)
	float CurrentFocusDist; // 0x2B4 (4)

	void UpdateMouseWheel(float Delta); // Function U.U.UpdateMouseWheel(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateMouseY(float Delta); // Function U.U.UpdateMouseY(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateMouseX(float Delta); // Function U.U.UpdateMouseX(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateCharacter(float DeltaTime); // Function U.U.UpdateCharacter(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateCamera(float DeltaTime); // Function U.U.UpdateCamera(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PercentDist(float CurDist, float& Percent); // Function U.U.PercentDist(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void MouseWheel(float Delta); // Function U.U.MouseWheel(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Reset(char ForceSnap); // Function U.U.Reset(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetCameraActor(struct Unknown CurrentCamera, struct Unknown TargetCamera, float BeginFocusDist, float EndFocusDist); // Function U.U.SetCameraActor(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetLobbyWidget(struct Unknown& Widget); // Function U.U.GetLobbyWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Hide(); // Function U.U.Hide(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Show(); // Function U.U.Show(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UU {

public:

	struct Unknown UberGraphFrame; // 0x2A0 (8)
	struct Unknown VisualBorder; // 0x2A8 (8)

	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelReportUserProgramWidget {

public:

	struct Unknown UberGraphFrame; // 0x278 (8)
	struct Unknown btn_Cancel; // 0x280 (8)
	struct Unknown btn_report; // 0x288 (8)
	struct Unknown Button_2; // 0x290 (8)
	struct Unknown Button_3; // 0x298 (8)
	struct Unknown Button_4; // 0x2A0 (8)
	struct Unknown Button_5; // 0x2A8 (8)
	struct Unknown CheckBox_2; // 0x2B0 (8)
	struct Unknown CheckBox_3; // 0x2B8 (8)
	struct Unknown CheckBox_4; // 0x2C0 (8)
	struct Unknown CheckBox_5; // 0x2C8 (8)
	struct Unknown combobox_button_overlay; // 0x2D0 (8)
	struct Unknown combobox_string; // 0x2D8 (8)
	struct Unknown Image; // 0x2E0 (8)
	struct Unknown Image_2; // 0x2E8 (8)
	struct Unknown Image_545; // 0x2F0 (8)
	struct Unknown NormalArrow; // 0x2F8 (8)
	struct Unknown OpeningArrow; // 0x300 (8)
	struct Unknown popup; // 0x308 (8)
	struct Unknown txt_description; // 0x310 (8)
	struct Unknown txt_nickname; // 0x318 (8)
	struct Unknown uw; // 0x320 (8)
	struct FText DescriptionText; // 0x328 (24)
	struct TArray<Unknown> ReportIndexText; // 0x340 (16)
	struct FText DefaultComboString; // 0x350 (24)
	int32_t CurrentSelectIndex; // 0x368 (4)
	char CheckCloseComboArrow : 0; // 0x36C (1)

	void CheckSelectProgramIndex(); // Function U.U.CheckSelectProgramIndex(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetOpeningArrow(char InOpening); // Function U.U.SetOpeningArrow(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetDefaultComboString(); // Function U.U.SetDefaultComboString(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(); // Function U.U.Set(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetDescriptionText(); // Function U.U.SetDescriptionText(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetNativeValues(); // Function U.U.SetNativeValues(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PreConstruct(char IsDesignTime); // Function U.U.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__combobox_string_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType); // Function U.U.BndEvt__combobox_string_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__combobox_string_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature(); // Function U.U.BndEvt__combobox_string_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_2_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_2_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_3_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_3_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_4_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_4_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnReportConfirm(); // Function U.U.OnReportConfirm(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelReportUserConfirmWidget {

public:

	struct Unknown UberGraphFrame; // 0x258 (8)
	struct Unknown btn_Cancel; // 0x260 (8)
	struct Unknown btn_confirm; // 0x268 (8)
	struct Unknown popup; // 0x270 (8)
	struct Unknown txt_description; // 0x278 (8)
	struct Unknown uw; // 0x280 (8)

	void PreConstruct(char IsDesignTime); // Function U.U.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnReportSended(enum class Unknow InWidgetType); // Function U.U.OnReportSended(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Ani_Gold; // 0x250 (8)
	struct Unknown 1; // 0x258 (8)
	struct Unknown 10; // 0x260 (8)
	struct Unknown 100; // 0x268 (8)
	struct Unknown 1000; // 0x270 (8)
	struct Unknown BonusBG; // 0x278 (8)
	struct Unknown BrightSpot_01; // 0x280 (8)
	struct Unknown BrightSpot_02; // 0x288 (8)
	struct Unknown BrightSpot_03; // 0x290 (8)
	struct Unknown BrightSpot_04; // 0x298 (8)
	struct Unknown BrightSpot_05; // 0x2A0 (8)
	struct Unknown Empty; // 0x2A8 (8)
	struct Unknown Glow_01; // 0x2B0 (8)
	struct Unknown Gold; // 0x2B8 (8)
	struct Unknown Image_7; // 0x2C0 (8)
	struct Unknown Image_11; // 0x2C8 (8)
	struct Unknown Image_14; // 0x2D0 (8)
	struct Unknown Image_15; // 0x2D8 (8)
	struct Unknown Image_16; // 0x2E0 (8)
	struct Unknown Image_17; // 0x2E8 (8)
	struct Unknown Image_18; // 0x2F0 (8)
	struct Unknown Image_20; // 0x2F8 (8)
	struct Unknown Image_21; // 0x300 (8)
	struct Unknown Image_22; // 0x308 (8)
	struct Unknown Image_23; // 0x310 (8)
	struct Unknown Image_335; // 0x318 (8)
	struct Unknown Image_1473; // 0x320 (8)
	struct Unknown Light; // 0x328 (8)
	struct Unknown Light_01; // 0x330 (8)
	struct Unknown Light_02; // 0x338 (8)
	struct Unknown Light_03; // 0x340 (8)
	struct Unknown Light_04; // 0x348 (8)
	struct Unknown Light_05; // 0x350 (8)
	struct Unknown Light_06; // 0x358 (8)
	struct Unknown PickUpGold; // 0x360 (8)
	struct Unknown RIng_Glow_01; // 0x368 (8)
	struct Unknown TextBlock_4; // 0x370 (8)
	struct Unknown TextLight_2; // 0x378 (8)
	struct Unknown TextLight_3; // 0x380 (8)
	int32_t Save; // 0x388 (4)
	char NewVar_1 : 0; // 0x38C (1)
	char IsStopSound : 0; // 0x38D (1)
	float LoopSountStartTime; // 0x390 (4)
	struct Unknown LoopSound; // 0x394 (4)
	float LoopSountEndTime; // 0x398 (4)
	float 1StartTime; // 0x39C (4)
	float 10StartTime; // 0x3A0 (4)
	float 100StartTime; // 0x3A4 (4)
	float 1000StartTime; // 0x3A8 (4)
	float FinStartTime; // 0x3AC (4)

	void Divide(int32_t Value1, int32_t& RetS1, int32_t& RetS2); // Function U.U.Divide(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StopSound(); // Function U.U.StopSound(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CustomEvent(); // Function U.U.CustomEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CustomEvent_2(); // Function U.U.CustomEvent_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CustomEvent_3(); // Function U.U.CustomEvent_3(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CustomEvent_4(); // Function U.U.CustomEvent_4(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetGold(int32_t AddGold, int32_t GetGold); // Function U.U.SetGold(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CustomEvent_5(); // Function U.U.CustomEvent_5(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelReportUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x278 (8)
	struct Unknown btn_Cancel; // 0x280 (8)
	struct Unknown btn_report; // 0x288 (8)
	struct Unknown combobox_button_overlay; // 0x290 (8)
	struct Unknown combobox_string; // 0x298 (8)
	struct Unknown Image; // 0x2A0 (8)
	struct Unknown Image_2; // 0x2A8 (8)
	struct Unknown Image_545; // 0x2B0 (8)
	struct Unknown NormalArrow; // 0x2B8 (8)
	struct Unknown OpeningArrow; // 0x2C0 (8)
	struct Unknown popup; // 0x2C8 (8)
	struct Unknown txt_description; // 0x2D0 (8)
	struct Unknown txt_nickname; // 0x2D8 (8)
	struct Unknown uw; // 0x2E0 (8)
	struct FText DescriptionText; // 0x2E8 (24)
	struct TArray<Unknown> ReportIndexText; // 0x300 (16)
	struct FText DefaultComboString; // 0x310 (24)
	int32_t CurrentSelectIndex; // 0x328 (4)
	int32_t SelectIndexFromProgram; // 0x32C (4)
	char CheckCloseComboArrow : 0; // 0x330 (1)

	void SetOpeningArrow(char InOpening); // Function U.U.SetOpeningArrow(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetReportComboStringFromProgram(int32_t InSelectIndex); // Function U.U.SetReportComboStringFromProgram(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetReportComboString(); // Function U.U.SetReportComboString(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetDefaultComboString(); // Function U.U.SetDefaultComboString(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetReportIndexText(); // Function U.U.SetReportIndexText(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetDescriptionText(); // Function U.U.SetDescriptionText(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetNativeValues(); // Function U.U.SetNativeValues(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PreConstruct(char IsDesignTime); // Function U.U.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__combobox_string_K2Node_ComponentBoundEvent_0_OnOpeningEvent__DelegateSignature(); // Function U.U.BndEvt__combobox_string_K2Node_ComponentBoundEvent_0_OnOpeningEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__combobox_string_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType); // Function U.U.BndEvt__combobox_string_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnReportConfirm(); // Function U.U.OnReportConfirm(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Anim_Bouns; // 0x250 (8)
	struct Unknown 1; // 0x258 (8)
	struct Unknown 10; // 0x260 (8)
	struct Unknown 100; // 0x268 (8)
	struct Unknown 1000; // 0x270 (8)
	struct Unknown Empty; // 0x278 (8)
	struct Unknown Image_7; // 0x280 (8)
	struct Unknown Image_11; // 0x288 (8)
	struct Unknown Image_14; // 0x290 (8)
	struct Unknown Image_15; // 0x298 (8)
	struct Unknown Image_16; // 0x2A0 (8)
	struct Unknown Image_17; // 0x2A8 (8)
	struct Unknown Image_18; // 0x2B0 (8)
	struct Unknown Image_20; // 0x2B8 (8)
	struct Unknown Image_21; // 0x2C0 (8)
	struct Unknown Image_22; // 0x2C8 (8)
	struct Unknown Image_23; // 0x2D0 (8)
	struct Unknown Image_1473; // 0x2D8 (8)
	struct Unknown TextBlock_4; // 0x2E0 (8)
	struct Unknown TextLight_3; // 0x2E8 (8)
	int32_t Save; // 0x2F0 (4)
	struct Unknown LoopSound; // 0x2F4 (4)
	char IsStopSound : 0; // 0x2F8 (1)

	void Divide(int32_t Value, int32_t& RetS1, int32_t& RetS2); // Function U.U.Divide(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetGold(int32_t RandomGold); // Function U.U.SetGold(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StopSound(); // Function U.U.StopSound(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown HorizontalBox; // 0x250 (8)
	struct Unknown HorizontalBox_2; // 0x258 (8)
	struct Unknown Image; // 0x260 (8)
	struct Unknown Image_2; // 0x268 (8)
	struct Unknown Image_3; // 0x270 (8)
	struct Unknown Image_4; // 0x278 (8)
	struct Unknown Image_5; // 0x280 (8)
	struct Unknown Image_6; // 0x288 (8)
	struct Unknown Image_7; // 0x290 (8)
	struct Unknown Image_8; // 0x298 (8)
	struct Unknown Image_9; // 0x2A0 (8)
	struct Unknown Image_10; // 0x2A8 (8)
	struct Unknown Image_11; // 0x2B0 (8)
	struct Unknown Image_12; // 0x2B8 (8)
	struct Unknown Image_13; // 0x2C0 (8)
	struct Unknown Image_14; // 0x2C8 (8)
	struct Unknown Image_15; // 0x2D0 (8)
	struct Unknown Image_72; // 0x2D8 (8)
	struct Unknown Image_164; // 0x2E0 (8)
	struct Unknown Image_352; // 0x2E8 (8)
	struct Unknown Image_659; // 0x2F0 (8)
	struct Unknown Overlay_4; // 0x2F8 (8)
	struct Unknown SizeBox; // 0x300 (8)
	struct Unknown SizeBox_54; // 0x308 (8)
	struct Unknown T_WeaponType; // 0x310 (8)
	struct Unknown TextBlock_176; // 0x318 (8)
	struct Unknown TextBlock_258; // 0x320 (8)
	struct Unknown TextBlock_331; // 0x328 (8)
	struct Unknown WidgetSwitcher_1; // 0x330 (8)
	struct Unknown ItemInfo; // 0x338 (8)
	struct Unknown ItemDetailInfo; // 0x340 (1168)
	struct FText LocalText; // 0x7D0 (24)
	char bIsSmallIcon : 0; // 0x7E8 (1)

	void IsMaterialData(struct FName ItemKey, char& bRet, int32_t& Index); // Function U.U.IsMaterialData(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetRarity(); // Function U.U.SetRarity(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Init(struct Unknown ItemInfo, char UseSmallIcon); // Function U.U.Init(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadIcon(struct Unknown Icon); // Function U.U.AsyncLoadIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Event2; // 0x250 (8)
	struct Unknown Event; // 0x258 (8)
	struct Unknown Anim_Second; // 0x260 (8)
	struct Unknown Hide; // 0x268 (8)
	struct Unknown Infos_Ani; // 0x270 (8)
	struct Unknown Anim_Defeat; // 0x278 (8)
	struct Unknown Anim_Victory; // 0x280 (8)
	struct Unknown Arrow; // 0x288 (8)
	struct Unknown Arrow_2; // 0x290 (8)
	struct Unknown ArrowLine; // 0x298 (8)
	struct Unknown ArrowLine_2; // 0x2A0 (8)
	struct Unknown BackgroundBlur; // 0x2A8 (8)
	struct Unknown BackgroundBlur_447; // 0x2B0 (8)
	struct Unknown BlackBG01; // 0x2B8 (8)
	struct Unknown BlackBG02; // 0x2C0 (8)
	struct Unknown BottomLine; // 0x2C8 (8)
	struct Unknown BottomLine_2; // 0x2D0 (8)
	struct Unknown Button; // 0x2D8 (8)
	struct Unknown Button_2; // 0x2E0 (8)
	struct Unknown Button_104; // 0x2E8 (8)
	struct Unknown CanvasPanel_7; // 0x2F0 (8)
	struct Unknown CanvasPanel_49; // 0x2F8 (8)
	struct Unknown CanvasPanel_488; // 0x300 (8)
	struct Unknown CanvasPanel_832; // 0x308 (8)
	struct Unknown Glow1; // 0x310 (8)
	struct Unknown Glow1_2; // 0x318 (8)
	struct Unknown Glow2; // 0x320 (8)
	struct Unknown Glow3; // 0x328 (8)
	struct Unknown Glow3_2; // 0x330 (8)
	struct Unknown GlowLine; // 0x338 (8)
	struct Unknown HeadShot; // 0x340 (8)
	struct Unknown HorizontalBox_KillerWeaponInfo; // 0x348 (8)
	struct Unknown HorizontalBox_Rarity; // 0x350 (8)
	struct Unknown Image_4; // 0x358 (8)
	struct Unknown Image_5; // 0x360 (8)
	struct Unknown Image_6; // 0x368 (8)
	struct Unknown Image_7; // 0x370 (8)
	struct Unknown Image_8; // 0x378 (8)
	struct Unknown Image_16; // 0x380 (8)
	struct Unknown Image_17; // 0x388 (8)
	struct Unknown Image_18; // 0x390 (8)
	struct Unknown Image_19; // 0x398 (8)
	struct Unknown Image_20; // 0x3A0 (8)
	struct Unknown Image_21; // 0x3A8 (8)
	struct Unknown Image_22; // 0x3B0 (8)
	struct Unknown Image_23; // 0x3B8 (8)
	struct Unknown Image_252; // 0x3C0 (8)
	struct Unknown Image_505; // 0x3C8 (8)
	struct Unknown Image_1091; // 0x3D0 (8)
	struct Unknown Image_1443; // 0x3D8 (8)
	struct Unknown Image_1558; // 0x3E0 (8)
	struct Unknown L_Wing01; // 0x3E8 (8)
	struct Unknown L_Wing01_2; // 0x3F0 (8)
	struct Unknown L_Wing01_3; // 0x3F8 (8)
	struct Unknown L_Wing01_4; // 0x400 (8)
	struct Unknown L_Wing02; // 0x408 (8)
	struct Unknown L_Wing02_2; // 0x410 (8)
	struct Unknown L_Wing02_3; // 0x418 (8)
	struct Unknown L_Wing02_4; // 0x420 (8)
	struct Unknown L_Wing03; // 0x428 (8)
	struct Unknown L_Wing03_2; // 0x430 (8)
	struct Unknown L_Wing03_3; // 0x438 (8)
	struct Unknown L_Wing03_4; // 0x440 (8)
	struct Unknown L_WingLine; // 0x448 (8)
	struct Unknown L_WingLine_2; // 0x450 (8)
	struct Unknown Logo; // 0x458 (8)
	struct Unknown Logo_2; // 0x460 (8)
	struct Unknown Overlay_1; // 0x468 (8)
	struct Unknown Overlay_WeaponLevel; // 0x470 (8)
	struct Unknown PosX; // 0x478 (8)
	struct Unknown PosY; // 0x480 (8)
	struct Unknown PosZ; // 0x488 (8)
	struct Unknown R_Wing01; // 0x490 (8)
	struct Unknown R_Wing01_2; // 0x498 (8)
	struct Unknown R_Wing01_3; // 0x4A0 (8)
	struct Unknown R_Wing01_4; // 0x4A8 (8)
	struct Unknown R_Wing02; // 0x4B0 (8)
	struct Unknown R_Wing02_2; // 0x4B8 (8)
	struct Unknown R_Wing02_3; // 0x4C0 (8)
	struct Unknown R_Wing02_4; // 0x4C8 (8)
	struct Unknown R_Wing03; // 0x4D0 (8)
	struct Unknown R_Wing03_2; // 0x4D8 (8)
	struct Unknown R_Wing03_3; // 0x4E0 (8)
	struct Unknown R_Wing03_4; // 0x4E8 (8)
	struct Unknown R_WingLine; // 0x4F0 (8)
	struct Unknown R_WingLine_2; // 0x4F8 (8)
	struct Unknown Ribbon; // 0x500 (8)
	struct Unknown Ribbon_2; // 0x508 (8)
	struct Unknown Ring; // 0x510 (8)
	struct Unknown ScrollBox_1; // 0x518 (8)
	struct Unknown T_DamageType; // 0x520 (8)
	struct Unknown T_WeaponLevel; // 0x528 (8)
	struct Unknown TextBlock_3; // 0x530 (8)
	struct Unknown TextBlock_4; // 0x538 (8)
	struct Unknown TextBlock_5; // 0x540 (8)
	struct Unknown TextBlock_6; // 0x548 (8)
	struct Unknown TextBlock_8; // 0x550 (8)
	struct Unknown TextBlock_9; // 0x558 (8)
	struct Unknown TextBlock_10; // 0x560 (8)
	struct Unknown TextBlock_11; // 0x568 (8)
	struct Unknown TextBlock_900; // 0x570 (8)
	struct Unknown TopLine; // 0x578 (8)
	struct Unknown TopLine_2; // 0x580 (8)
	struct Unknown U; // 0x588 (8)
	struct Unknown U; // 0x590 (8)
	struct Unknown WeaponName; // 0x598 (8)
	struct Unknown WidgetSwitcher_DamageCauser; // 0x5A0 (8)
	struct Unknown WinText1; // 0x5A8 (8)
	struct Unknown WinText1_2; // 0x5B0 (8)
	struct Unknown WinText1_3; // 0x5B8 (8)
	struct Unknown WinText1_4; // 0x5C0 (8)
	struct Unknown WinText2; // 0x5C8 (8)
	struct Unknown WinText3; // 0x5D0 (8)
	char MatchEnd : 0; // 0x5D8 (1)
	struct Unknown AnimationData; // 0x5D9 (2)
	struct Unknown MatchEndWidgetRef; // 0x5E0 (8)
	struct Unknown SimpleResult; // 0x5E8 (168)
	struct TArray<Unknown> SimpleTimer; // 0x690 (16)
	struct FMulticastInlineDelegate EventDispatcher_HideComplete; // 0x6A0 (16)
	char bSuccessWinEventCall : 0; // 0x6B0 (1)
	struct TArray<Unknown> PlayingAudio; // 0x6B8 (16)
	char bTestMode : 0; // 0x6C8 (1)
	char bTestIsWin : 0; // 0x6C9 (1)
	float MatchFinalResultShowTime; // 0x6CC (4)

	void SequenceEvent__ENTRYPOINTU_2(); // Function U.U.SequenceEvent__ENTRYPOINTU_2(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_1(); // Function U.U.SequenceEvent__ENTRYPOINTU_1(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckSkipBtn(); // Function U.U.CheckSkipBtn(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayCharacterResultAnimation(); // Function U.U.PlayCharacterResultAnimation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateInputMode(); // Function U.U.UpdateInputMode(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RemoveOverlapedWidgets(); // Function U.U.RemoveOverlapedWidgets(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetKillerInfo(struct Unknown SimpleResult); // Function U.U.SetKillerInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetDropedItem(); // Function U.U.SetDropedItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowMatchEndAnimation(struct Unknown AnimationData, struct Unknown Result, char IsTestMode); // Function U.U.ShowMatchEndAnimation(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowLoseAnimation(struct Unknown Data); // Function U.U.ShowLoseAnimation(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideAnimation(); // Function U.U.HideAnimation(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DelegateOnWhoKilledMe_Event_1(struct Unknown& SimpleResult); // Function U.U.DelegateOnWhoKilledMe_Event_1(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Init(); // Function U.U.Init(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_103_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_103_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EventDispatcher_HideComplete__DelegateSignature(); // Function U.U.EventDispatcher_HideComplete__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Infos_Ani; // 0x250 (8)
	struct Unknown SimpleResult_Events; // 0x258 (8)
	struct Unknown Lose_ani; // 0x260 (8)
	struct Unknown Win_ani; // 0x268 (8)
	struct Unknown Lose_Events; // 0x270 (8)
	struct Unknown Win_Events; // 0x278 (8)
	struct Unknown ClassName; // 0x280 (8)
	struct Unknown ClassWeaponName; // 0x288 (8)
	struct Unknown HeadShot; // 0x290 (8)
	struct Unknown HorizontalBox_KillerWeaponInfo; // 0x298 (8)
	struct Unknown HorizontalBox_Rarity; // 0x2A0 (8)
	struct Unknown Icon_KillerClass; // 0x2A8 (8)
	struct Unknown Image_894; // 0x2B0 (8)
	struct Unknown Image_2002; // 0x2B8 (8)
	struct Unknown Level; // 0x2C0 (8)
	struct Unknown LoseMessage; // 0x2C8 (8)
	struct Unknown Overlay_DropItems; // 0x2D0 (8)
	struct Unknown Overlay_KillerInfo; // 0x2D8 (8)
	struct Unknown Overlay_WeaponLevel; // 0x2E0 (8)
	struct Unknown T_DamageType; // 0x2E8 (8)
	struct Unknown T_WeaponLevel; // 0x2F0 (8)
	struct Unknown TextBlock_ItemCount; // 0x2F8 (8)
	struct Unknown Uniform_ItemList; // 0x300 (8)
	struct Unknown UserName; // 0x308 (8)
	struct Unknown U_1; // 0x310 (8)
	struct Unknown U; // 0x318 (8)
	struct Unknown WeaponName; // 0x320 (8)
	struct Unknown WidgetSwitcher_DamageCauser; // 0x328 (8)
	struct Unknown AnimationData; // 0x330 (2)
	struct Unknown MatchEndWidgetRef; // 0x338 (8)
	struct Unknown SimpleResult; // 0x340 (168)
	char MatchEnd : 0; // 0x3E8 (1)

	void SequenceEvent__ENTRYPOINTU_10(); // Function U.U.SequenceEvent__ENTRYPOINTU_10(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_9(); // Function U.U.SequenceEvent__ENTRYPOINTU_9(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_8(); // Function U.U.SequenceEvent__ENTRYPOINTU_8(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_7(); // Function U.U.SequenceEvent__ENTRYPOINTU_7(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_6(); // Function U.U.SequenceEvent__ENTRYPOINTU_6(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_5(); // Function U.U.SequenceEvent__ENTRYPOINTU_5(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_4(); // Function U.U.SequenceEvent__ENTRYPOINTU_4(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_3(); // Function U.U.SequenceEvent__ENTRYPOINTU_3(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_2(); // Function U.U.SequenceEvent__ENTRYPOINTU_2(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_1(); // Function U.U.SequenceEvent__ENTRYPOINTU_1(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetDropedItem(); // Function U.U.SetDropedItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateInputMode(); // Function U.U.UpdateInputMode(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RemoveOverlapedWidgets(); // Function U.U.RemoveOverlapedWidgets(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideHUDMessageWidget(); // Function U.U.HideHUDMessageWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideMainWidget(); // Function U.U.HideMainWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetSimpleResult(); // Function U.U.SetSimpleResult(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetMatchEnd(); // Function U.U.SetMatchEnd(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetKillerInfo(struct Unknown& Result); // Function U.U.SetKillerInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReleaseSlomo(); // Function U.U.ReleaseSlomo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ApplySlomo(); // Function U.U.ApplySlomo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayWidgetLoseAni(); // Function U.U.PlayWidgetLoseAni(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayWidgetWinAni(); // Function U.U.PlayWidgetWinAni(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SkipMatchEndAnimation(); // Function U.U.SkipMatchEndAnimation(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayCharacterWinAnimation(); // Function U.U.PlayCharacterWinAnimation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayDefeatBGM(); // Function U.U.PlayDefeatBGM(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayWinBGM(); // Function U.U.PlayWinBGM(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_75D3BA16496147EA282F81A6BD982AD6(struct Unknown Loaded); // Function U.U.OnLoaded_75D3BA16496147EA282F81A6BD982AD6(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Destruct(); // Function U.U.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncIcon(struct Unknown Image); // Function U.U.AsyncIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnClicked_SkipButton(); // Function U.U.OnClicked_SkipButton(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DelegateOnWhoKilledMe_Event_1(struct Unknown& SimpleResult); // Function U.U.DelegateOnWhoKilledMe_Event_1(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown Ani_Complete; // 0x248 (8)
	struct Unknown Ani_BG; // 0x250 (8)
	struct Unknown Bg; // 0x258 (8)
	struct Unknown Complete; // 0x260 (8)
	struct Unknown TextBlock_QuestDesc; // 0x268 (8)
	struct Unknown TextBlock_QuestTitle; // 0x270 (8)
	struct Unknown U; // 0x278 (8)
	struct Unknown U; // 0x280 (8)
	struct Unknown U_2; // 0x288 (8)
	struct Unknown U_3; // 0x290 (8)
	struct Unknown TaskInfo; // 0x298 (32)
	struct Unknown TaskData; // 0x2B8 (176)

	void SetTaskInfo(struct Unknown TaskInfo); // Function U.U.SetTaskInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Anim_OnFire; // 0x250 (8)
	struct Unknown FireLine; // 0x258 (8)

	void SetLineInfo(float Angle, float Length); // Function U.U.SetLineInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnAnimationFinished(struct Unknown Animation); // Function U.U.OnAnimationFinished(BlueprintCosmetic|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelRoutePingWidget {

public:

	struct Unknown Anim_OnShow; // 0x248 (8)
	struct Unknown Line; // 0x250 (8)
	struct FMulticastInlineDelegate OnMarkerClicked; // 0x258 (16)
	char IsLastPoint : 0; // 0x268 (1)

	void SetGuideLine(); // Function U.U.SetGuideLine(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(char IsLastPoint); // Function U.U.Set(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetLineLength(float Length); // Function U.U.SetLineLength(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTeamColor(struct Unknown LinearColor); // Function U.U.SetTeamColor(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMarkerClicked__DelegateSignature(struct Unknown Button, char mapObjectID); // Function U.U.OnMarkerClicked__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown Image_81; // 0x248 (8)
	struct Unknown Image_86; // 0x250 (8)
	struct Unknown Image_88; // 0x258 (8)
	struct Unknown Image_89; // 0x260 (8)
	struct Unknown Image_90; // 0x268 (8)
	struct Unknown Image_91; // 0x270 (8)
	struct Unknown Image_92; // 0x278 (8)
	struct Unknown Image_93; // 0x280 (8)
	struct Unknown Image_94; // 0x288 (8)
	struct Unknown Image_95; // 0x290 (8)
	struct Unknown Image_96; // 0x298 (8)
	struct Unknown Image_97; // 0x2A0 (8)
	struct Unknown Image_98; // 0x2A8 (8)
	struct Unknown Image_99; // 0x2B0 (8)
	struct Unknown Image_100; // 0x2B8 (8)
	struct Unknown Image_101; // 0x2C0 (8)
	struct Unknown Image_102; // 0x2C8 (8)
	struct Unknown Image_103; // 0x2D0 (8)
	struct Unknown Image_104; // 0x2D8 (8)
	struct Unknown Image_107; // 0x2E0 (8)
	struct Unknown Image_108; // 0x2E8 (8)
	struct Unknown Image_119; // 0x2F0 (8)
	struct Unknown Image_120; // 0x2F8 (8)
	struct Unknown Image_121; // 0x300 (8)
	struct Unknown Image_122; // 0x308 (8)
	struct Unknown Image_123; // 0x310 (8)
	struct Unknown Image_134; // 0x318 (8)
	struct Unknown Image_137; // 0x320 (8)
	struct Unknown Image_138; // 0x328 (8)
	struct Unknown Image_139; // 0x330 (8)
	struct Unknown Image_140; // 0x338 (8)
	struct Unknown Image_141; // 0x340 (8)
	struct Unknown Image_142; // 0x348 (8)
	struct Unknown Image_143; // 0x350 (8)
	struct Unknown Image_144; // 0x358 (8)
	struct Unknown Image_145; // 0x360 (8)
	struct Unknown Image_146; // 0x368 (8)
	struct Unknown Image_147; // 0x370 (8)
	struct Unknown Image_148; // 0x378 (8)
	struct Unknown Image_149; // 0x380 (8)
	struct Unknown Image_152; // 0x388 (8)
	struct Unknown Image_153; // 0x390 (8)
	struct Unknown Image_154; // 0x398 (8)
	struct Unknown Image_155; // 0x3A0 (8)
	struct Unknown Image_156; // 0x3A8 (8)
	struct Unknown Image_157; // 0x3B0 (8)
	struct Unknown Image_158; // 0x3B8 (8)
	struct Unknown Image_159; // 0x3C0 (8)
	struct Unknown Image_160; // 0x3C8 (8)
	struct Unknown Image_161; // 0x3D0 (8)
	struct Unknown Image_162; // 0x3D8 (8)
	struct Unknown Image_163; // 0x3E0 (8)
	struct Unknown Image_164; // 0x3E8 (8)
	struct Unknown WidgetSwitcher_1; // 0x3F0 (8)
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelPlayerMarkerWidget {

public:

	struct Unknown Image_SupplyBoxMarker; // 0x248 (8)
	struct Unknown PersonalSupplyBox; // 0x250 (8)
	struct Unknown WidgetSwitcher_2; // 0x258 (8)
	struct FMulticastInlineDelegate OnMarkerClicked; // 0x260 (16)
	struct Unknown CurrentMarker; // 0x270 (8)
	struct Unknown MapCompRef; // 0x278 (8)
	struct Unknown TmpPingTypeTexture; // 0x280 (8)

	void UpdatePersonalSupplyBox(); // Function U.U.UpdatePersonalSupplyBox(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPersonalSupplyBox(struct Unknown MapCompRef); // Function U.U.SetPersonalSupplyBox(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMarkerClicked__DelegateSignature(struct Unknown Button, char mapObjectID); // Function U.U.OnMarkerClicked__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelPlayerIconWidget {

public:

	struct Unknown UberGraphFrame; // 0x318 (8)
	struct Unknown Anim_OnNotifyPos; // 0x320 (8)
	struct Unknown Anim_OnAttacked; // 0x328 (8)
	struct Unknown Canvas_Attacked; // 0x330 (8)
	struct Unknown Canvas_Fire; // 0x338 (8)
	struct Unknown Canvas_NotifyPos; // 0x340 (8)
	struct Unknown Img_FreeCam; // 0x348 (8)
	struct Unknown PlayerState; // 0x350 (8)

	void OnClickPlayerNameButton(); // Function U.U.OnClickPlayerNameButton(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnAttackedWidget(); // Function U.U.OnAttackedWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnFireWidget(struct Unknown MapComp, struct Unknown Rotation, float Length); // Function U.U.OnFireWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetFreeCam(); // Function U.U.SetFreeCam(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Initialize(struct Unknown PlayerState); // Function U.U.Initialize(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnAnimationFinished(struct Unknown Animation); // Function U.U.OnAnimationFinished(BlueprintCosmetic|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Rotate(float Angle); // Function U.U.Rotate(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayTargetPosAnim(); // Function U.U.PlayTargetPosAnim(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Image; // 0x250 (8)
	struct Unknown Image_2; // 0x258 (8)
	struct Unknown Image_3; // 0x260 (8)
	struct Unknown Image_4; // 0x268 (8)
	struct Unknown Image_917; // 0x270 (8)
	struct Unknown Img_TypeIcon; // 0x278 (8)
	struct Unknown KeyImageWidget; // 0x280 (8)
	struct Unknown KeyImageWidget_2; // 0x288 (8)
	struct Unknown KeyImageWidget_3; // 0x290 (8)
	struct Unknown KeyImageWidget_4; // 0x298 (8)
	struct Unknown KeyImageWidget_5; // 0x2A0 (8)
	struct Unknown T_Context; // 0x2A8 (8)
	struct Unknown T_Context_2; // 0x2B0 (8)
	struct Unknown T_Context_3; // 0x2B8 (8)
	struct Unknown T_Context_4; // 0x2C0 (8)
	struct Unknown T_Context_5; // 0x2C8 (8)
	struct Unknown Text_SkillName; // 0x2D0 (8)
	struct Unknown VB_Nuclear; // 0x2D8 (8)
	struct Unknown VB_Retreat; // 0x2E0 (8)
	struct Unknown WidgetSwitcher_126; // 0x2E8 (8)

	void SetTutorialInfo(enum class Unknow SkillType); // Function U.U.SetTutorialInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_22BC0859447517E514C09EA47A9A913D(struct Unknown Loaded); // Function U.U.OnLoaded_22BC0859447517E514C09EA47A9A913D(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetRadarTutorial(); // Function U.U.SetRadarTutorial(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetGuideIconAsyncLoad(struct Unknown Image); // Function U.U.SetGuideIconAsyncLoad(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UU {

public:

	struct Unknown UberGraphFrame; // 0x1360 (8)
	struct Unknown Anim_Material_Get; // 0x1368 (8)
	struct Unknown Anim_Material_Hover; // 0x1370 (8)
	struct Unknown Anim_Upgrade; // 0x1378 (8)
	struct Unknown Anim_Progress; // 0x1380 (8)
	struct Unknown Abillity; // 0x1388 (8)
	struct Unknown AbillityBG; // 0x1390 (8)
	struct Unknown AbillityValue; // 0x1398 (8)
	struct Unknown Bg; // 0x13A0 (8)
	struct Unknown Bg_3; // 0x13A8 (8)
	struct Unknown BorderBG; // 0x13B0 (8)
	struct Unknown BorderBG_3; // 0x13B8 (8)
	struct Unknown btn_HelmetTree; // 0x13C0 (8)
	struct Unknown ChoiceBG; // 0x13C8 (8)
	struct Unknown ChoiceBG_3; // 0x13D0 (8)
	struct Unknown DefenseBG; // 0x13D8 (8)
	struct Unknown DefenseBG_3; // 0x13E0 (8)
	struct Unknown DurabilityBar; // 0x13E8 (8)
	struct Unknown DurabilityBar_3; // 0x13F0 (8)
	struct Unknown EmptyBG; // 0x13F8 (8)
	struct Unknown EmptyBG_3; // 0x1400 (8)
	struct Unknown Image; // 0x1408 (8)
	struct Unknown Image_197; // 0x1410 (8)
	struct Unknown Image_234; // 0x1418 (8)
	struct Unknown Image_279; // 0x1420 (8)
	struct Unknown Image_491; // 0x1428 (8)
	struct Unknown Image_682; // 0x1430 (8)
	struct Unknown ItemImage; // 0x1438 (8)
	struct Unknown ItemImage_3; // 0x1440 (8)
	struct Unknown OverBG; // 0x1448 (8)
	struct Unknown OverBG_3; // 0x1450 (8)
	struct Unknown Overlay_1; // 0x1458 (8)
	struct Unknown U; // 0x1460 (8)
	struct Unknown U; // 0x1468 (8)
	struct Unknown WidgetSwitcher_3; // 0x1470 (8)
	enum class Unknow WearableItemType; // 0x1478 (1)
	char IsDefense : 0; // 0x1479 (1)
	struct Unknown HoverWidget; // 0x1480 (8)
	struct Unknown HoverOwnerWidget; // 0x1488 (8)
	int32_t SwitcherIndex; // 0x1490 (4)

	void IsDraging(char& bResult); // Function U.U.IsDraging(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowStatupAnim(struct Unknown& StatParams); // Function U.U.ShowStatupAnim(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetMaterialIcon(); // Function U.U.SetMaterialIcon(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetHoverWidgetRef(); // Function U.U.SetHoverWidgetRef(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetBG(enum class Unknow WearableItemType); // Function U.U.SetBG(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnRButtonClick(char& bResult); // Function U.U.OnRButtonClick(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	enum class Unknow Get_Abillity_Visibility_1(); // Function U.U.Get_Abillity_Visibility_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RequestGetItem(struct Unknown Pickup, char& bResult); // Function U.U.RequestGetItem(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Reset(); // Function U.U.Reset(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitData(enum class Unknow EquipType, enum class Unknow WearableItemType); // Function U.U.InitData(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetInfo(struct Unknown InventoryWidget, struct Unknown InventoryItemInfoData); // Function U.U.SetInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Drop(); // Function U.U.Drop(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_52197A594D73AE4B77D41DAA3A988F34(struct Unknown Loaded); // Function U.U.OnLoaded_52197A594D73AE4B77D41DAA3A988F34(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function U.U.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Enable(); // Function U.U.Enable(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Disable(); // Function U.U.Disable(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AysncLoadIconTexture(struct Unknown IconTexture); // Function U.U.AysncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PreConstruct(char IsDesignTime); // Function U.U.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CompleteCombine(); // Function U.U.CompleteCombine(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_HelmetTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__btn_HelmetTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CompleteCombineOnRecipeTree(); // Function U.U.CompleteCombineOnRecipeTree(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverRecipeTree(); // Function U.U.HoverRecipeTree(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnUpdateCastingDelegateEvent(struct Unknown& CastingInfo, float CastingPercent); // Function U.U.OnUpdateCastingDelegateEvent(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelMapCompWidget {

public:

	struct Unknown UberGraphFrame; // 0x500 (8)
	struct Unknown Aircraft; // 0x508 (8)
	struct Unknown Background; // 0x510 (8)
	struct Unknown Canvas; // 0x518 (8)
	struct Unknown InvalidationBox_1; // 0x520 (8)
	struct Unknown TestDescentEndPoint_2; // 0x528 (8)
	struct Unknown TestDescentStartPoint_2; // 0x530 (8)
	struct Unknown TestLineRouteDotline_2; // 0x538 (8)
	int32_t MapDisplayInfoFlag; // 0x540 (4)
	struct FMulticastInlineDelegate OnWheelOnMap; // 0x548 (16)
	struct FMulticastInlineDelegate OnMouseButtonUpOnMap; // 0x558 (16)
	struct FMulticastInlineDelegate OnObjectClickOnMap; // 0x568 (16)
	struct FMulticastInlineDelegate OnDragginOnMap; // 0x578 (16)
	char IsDragging : 0; // 0x588 (1)
	float DeltaValue; // 0x58C (4)
	struct TArray<Unknown> GridString_XAxis; // 0x590 (16)
	struct TArray<Unknown> GridString_YAxis; // 0x5A0 (16)
	struct Unknown PersonalSupplyBoxRef; // 0x5B0 (8)
	struct Unknown ReplayFreeCamWidget; // 0x5B8 (8)
	float MapScaleInterpSpeed; // 0x5C0 (4)
	char MouseRightBtnDown : 0; // 0x5C4 (1)
	struct Unknown SelectPingMenuTimer; // 0x5C8 (8)
	struct Unknown SelectionMenu; // 0x5D0 (8)
	struct FMulticastInlineDelegate OnMouseButtonDownOnMap; // 0x5D8 (16)
	struct Unknown MouseButtonDownPos; // 0x5E8 (8)
	char IsUpdateMapScale : 0; // 0x5F0 (1)
	float MapScaleInerpSpeedRatio; // 0x5F4 (4)
	char IsDrawingRoutePing : 0; // 0x5F8 (1)
	struct TArray<Unknown> IgnoreAreaCircleLines; // 0x600 (16)

	void CheckAgreePing(char& bRet, struct Unknown& Location); // Function U.U.CheckAgreePing(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(struct Unknown& Pos); // Function U.U.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CalcMapScaleInterpSpeed(int32_t TargetZoomLevel); // Function U.U.CalcMapScaleInterpSpeed(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Remove(enum class Unknow Type, struct Unknown Info); // Function U.U.Remove(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateReplayCircleMask(); // Function U.U.UpdateReplayCircleMask(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateMapPos(); // Function U.U.UpdateMapPos(Public|BlueprintCallable|BlueprintEvent|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateCircleMask(struct Unknown centerPosOnWorld, float radiusOnWorld, struct FName CirclePosName, struct FName CircleRadiusName, float MaskAdditionalRadius, struct Unknown MaterialInstance); // Function U.U.UpdateCircleMask(Public|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Update(); // Function U.U.Update(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateCircleInfosImpl(); // Function U.U.UpdateCircleInfosImpl(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateMapScale(); // Function U.U.UpdateMapScale(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayTargetPosAnim(); // Function U.U.PlayTargetPosAnim(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CreatePersonalSupplyBox(); // Function U.U.CreatePersonalSupplyBox(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CreateFreeCamWidget(); // Function U.U.CreateFreeCamWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CreateAirCraftWidget(); // Function U.U.CreateAirCraftWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CreateMapPlayerWidget_Impl(); // Function U.U.CreateMapPlayerWidget_Impl(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnAttackedWidget(int32_t UniquePlayerId); // Function U.U.OnAttackedWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnFireWidget(int32_t UniquePlayerId, struct Unknown Rotation, float Length); // Function U.U.OnFireWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetSkillMapFactor(float Distance, float& Factor); // Function U.U.GetSkillMapFactor(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Add(enum class Unknow AreaWidgetType, struct Unknown AreaWidgetInfo); // Function U.U.Add(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void WantChangeVisibility(enum class Unknow WantVisibility, struct Unknown ChangeWidget); // Function U.U.WantChangeVisibility(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetMiniMapFactor(float& Factor); // Function U.U.GetMiniMapFactor(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ConvertSizeWorldToMap(struct Unknown Size, struct Unknown& ret); // Function U.U.ConvertSizeWorldToMap(Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMarkerClicked(struct Unknown Button, char mapObjectID); // Function U.U.OnMarkerClicked(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CalPosRelatedMapOnViewport(struct Unknown PosOnViewport, struct Unknown& ret); // Function U.U.CalPosRelatedMapOnViewport(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ConvertPosViewportToMap(struct Unknown PosOnViewport, struct Unknown& ret); // Function U.U.ConvertPosViewportToMap(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnMouseMove(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseMove(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetMarker(char isOn, struct Unknown PosOnViewport, float Heigh); // Function U.U.SetMarker(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnMouseButtonUp(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseButtonUp(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnMouseWheel(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseWheel(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnPaint(struct Unknown& Context); // Function U.U.OnPaint(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddWidgetComp(struct Unknown* WidgetClass, struct Unknown Anchor, struct Unknown Pivot, struct Unknown Size, int32_t ZOrder, struct Unknown& ret); // Function U.U.AddWidgetComp(Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ConvertForwardToDegree(struct Unknown Forward, float& Degree); // Function U.U.ConvertForwardToDegree(Private|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_C5F225F94B2C743064A54D84F3497501(struct Unknown Loaded); // Function U.U.OnLoaded_C5F225F94B2C743064A54D84F3497501(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DebugStringOnMapEvent(struct FString DebugString, struct Unknown WorldPosition, float RemainTime, float FontSize); // Function U.U.DebugStringOnMapEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CreateMapPlayerWidget(); // Function U.U.CreateMapPlayerWidget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateSupplyBoxInfo(); // Function U.U.UpdateSupplyBoxInfo(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateFreeCamPosition(); // Function U.U.UpdateFreeCamPosition(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateFreeCamAngle(); // Function U.U.UpdateFreeCamAngle(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetFreeCamEnable(char bEnable); // Function U.U.SetFreeCamEnable(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetAircraftVisibility(char bVisible); // Function U.U.SetAircraftVisibility(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PreUpdateComponents(); // Function U.U.PreUpdateComponents(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateCircleInfos(); // Function U.U.UpdateCircleInfos(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateReplayCircleInfos(); // Function U.U.UpdateReplayCircleInfos(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetVisiblePingMenu(char Visible); // Function U.U.SetVisiblePingMenu(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ChangeMap(char IsWeightMap); // Function U.U.ChangeMap(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseButtonDownOnMap__DelegateSignature(struct Unknown Button, struct Unknown PosOnViewport); // Function U.U.OnMouseButtonDownOnMap__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragginOnMap__DelegateSignature(struct Unknown Delta); // Function U.U.OnDragginOnMap__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnObjectClickOnMap__DelegateSignature(struct Unknown Button, char mapObjectID); // Function U.U.OnObjectClickOnMap__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseButtonUpOnMap__DelegateSignature(struct Unknown Button, struct Unknown PosOnViewport); // Function U.U.OnMouseButtonUpOnMap__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnWheelOnMap__DelegateSignature(float Delta, struct Unknown PosOnViewport); // Function U.U.OnWheelOnMap__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelSkillMapWidget {

public:

	struct Unknown UberGraphFrame; // 0x250 (8)
	struct Unknown Tutorial_MouseCursor; // 0x258 (8)
	struct Unknown Tutorial_Arrow_Loop2; // 0x260 (8)
	struct Unknown RadarDecoLight; // 0x268 (8)
	struct Unknown RadarCircle_M; // 0x270 (8)
	struct Unknown BackgroundBlur_154; // 0x278 (8)
	struct Unknown B; // 0x280 (8)
	struct Unknown Button_Nuclear; // 0x288 (8)
	struct Unknown CP_RealMapSize; // 0x290 (8)
	struct Unknown Image; // 0x298 (8)
	struct Unknown Image_2; // 0x2A0 (8)
	struct Unknown Image_3; // 0x2A8 (8)
	struct Unknown Image_4; // 0x2B0 (8)
	struct Unknown Image_5; // 0x2B8 (8)
	struct Unknown Image_6; // 0x2C0 (8)
	struct Unknown Image_7; // 0x2C8 (8)
	struct Unknown Image_171; // 0x2D0 (8)
	struct Unknown Image_181; // 0x2D8 (8)
	struct Unknown Image_228; // 0x2E0 (8)
	struct Unknown Image_326; // 0x2E8 (8)
	struct Unknown Image_405; // 0x2F0 (8)
	struct Unknown Image_508; // 0x2F8 (8)
	struct Unknown Img_MapBackGround; // 0x300 (8)
	struct Unknown Img_MapCenter; // 0x308 (8)
	struct Unknown Img_RadarDummy; // 0x310 (8)
	struct Unknown Tutorial; // 0x318 (8)
	struct Unknown U; // 0x320 (8)
	struct Unknown MapBackGroundPosition; // 0x328 (8)
	struct Unknown RadarDummyPosition; // 0x330 (8)

	void MapClickEvent(struct Unknown ClickLocation); // Function U.U.MapClickEvent(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CalcAllMapRatioByTargetRadius(float& Ratio); // Function U.U.CalcAllMapRatioByTargetRadius(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMapLeftClick(struct Unknown PosOnViewport); // Function U.U.OnMapLeftClick(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayRadarOpenSound(); // Function U.U.PlayRadarOpenSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckPositionChanged(); // Function U.U.CheckPositionChanged(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetSkillMapRate(); // Function U.U.SetSkillMapRate(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnSkillMapStart(); // Function U.U.OnSkillMapStart(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddAreaWidget(enum class Unknow WorldMapAreaWidgetType, struct Unknown& AreaWidgetInfo); // Function U.U.AddAreaWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Nuclear_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Nuclear_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetMapPlayers(); // Function U.U.ResetMapPlayers(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnClickOnMap(struct Unknown Button, struct Unknown PosOnViewport); // Function U.U.OnClickOnMap(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown Image_136; // 0x248 (8)
	struct Unknown Slider_Speed; // 0x250 (8)
	struct Unknown T_CamSpeed; // 0x258 (8)
	struct Unknown Handle_HideFreeCamSpeed; // 0x260 (8)

	void HideFreeCamSpeed(); // Function U.U.HideFreeCamSpeed(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowFreeCamSpeed(); // Function U.U.ShowFreeCamSpeed(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangedFreeCamSpeedLevel(float SpeedLevel); // Function U.U.OnChangedFreeCamSpeedLevel(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelItemRecipeTreeWidget {

public:

	struct Unknown UberGraphFrame; // 0x258 (8)
	struct Unknown HorizontalBox_11; // 0x260 (8)
	struct Unknown HorizontalBox_12; // 0x268 (8)
	struct Unknown HorizontalBox_13; // 0x270 (8)
	struct Unknown HorizontalBox_14; // 0x278 (8)
	struct Unknown HorizontalBox_15; // 0x280 (8)
	struct Unknown HorizontalBox_16; // 0x288 (8)
	struct Unknown HorizontalBox_00; // 0x290 (8)
	struct Unknown HorizontalBox_02; // 0x298 (8)
	struct Unknown HorizontalBox_03; // 0x2A0 (8)
	struct Unknown HorizontalBox_04; // 0x2A8 (8)
	struct Unknown HorizontalBox_05; // 0x2B0 (8)
	struct Unknown HorizontalBox_06; // 0x2B8 (8)
	struct Unknown HorizontalBox_07; // 0x2C0 (8)
	struct Unknown HorizontalBox_08; // 0x2C8 (8)
	struct Unknown HorizontalBox_09; // 0x2D0 (8)
	struct Unknown Line00; // 0x2D8 (8)
	struct Unknown Line01; // 0x2E0 (8)
	struct Unknown Line02; // 0x2E8 (8)
	struct Unknown Line03; // 0x2F0 (8)
	struct Unknown Line04; // 0x2F8 (8)
	struct Unknown Line05; // 0x300 (8)
	struct Unknown Line06; // 0x308 (8)
	struct Unknown Line07; // 0x310 (8)
	struct Unknown Line08; // 0x318 (8)
	struct Unknown Line09; // 0x320 (8)
	struct Unknown Line10; // 0x328 (8)
	struct Unknown Line11; // 0x330 (8)
	struct Unknown Line12; // 0x338 (8)
	struct Unknown Line13; // 0x340 (8)
	struct Unknown Line14; // 0x348 (8)
	struct Unknown Line15; // 0x350 (8)
	struct Unknown Overlay_Main; // 0x358 (8)
	struct Unknown Slot00; // 0x360 (8)
	struct Unknown Slot01; // 0x368 (8)
	struct Unknown Slot02; // 0x370 (8)
	struct Unknown Slot03; // 0x378 (8)
	struct Unknown Slot04; // 0x380 (8)
	struct Unknown Slot05; // 0x388 (8)
	struct Unknown Slot06; // 0x390 (8)
	struct Unknown Slot07; // 0x398 (8)
	struct Unknown Slot08; // 0x3A0 (8)
	struct Unknown Slot09; // 0x3A8 (8)
	struct Unknown Slot10; // 0x3B0 (8)
	struct Unknown Slot11; // 0x3B8 (8)
	struct Unknown Slot12; // 0x3C0 (8)
	struct Unknown Slot13; // 0x3C8 (8)
	struct Unknown Slot14; // 0x3D0 (8)
	struct Unknown Slot15; // 0x3D8 (8)
	struct Unknown Slot16; // 0x3E0 (8)
	struct Unknown Slot17; // 0x3E8 (8)
	struct Unknown Slot18; // 0x3F0 (8)
	struct Unknown Slot19; // 0x3F8 (8)
	struct Unknown Slot20; // 0x400 (8)
	struct Unknown Slot21; // 0x408 (8)
	struct Unknown Slot22; // 0x410 (8)
	struct Unknown Slot23; // 0x418 (8)
	struct Unknown Slot24; // 0x420 (8)
	struct Unknown Slot25; // 0x428 (8)
	struct Unknown Slot26; // 0x430 (8)
	struct Unknown Slot27; // 0x438 (8)
	struct Unknown Slot28; // 0x440 (8)
	struct Unknown Slot29; // 0x448 (8)
	struct Unknown Slot30; // 0x450 (8)
	struct Unknown Slot31; // 0x458 (8)
	struct Unknown VerticalBox_2438; // 0x460 (8)
	struct Unknown HoverWidget; // 0x468 (8)
	struct FName HaveItemKey; // 0x470 (8)
	struct FName TargetItemKey; // 0x478 (8)
	char IsSearchExpertWeapon : 0; // 0x480 (1)

	void ShowTreeNode(struct Unknown WidgetInfo, char bShow, char bCombinable); // Function U.U.ShowTreeNode(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTreeNodeByInfo(struct Unknown TreeData, struct Unknown WidgetInfo, char Complete); // Function U.U.SetTreeNodeByInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetItemKey(struct FName ItemKey, struct FName HaveItemKey); // Function U.U.SetItemKey(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Destruct(); // Function U.U.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Button_43; // 0x250 (8)
	struct Unknown off; // 0x258 (8)
	struct Unknown On; // 0x260 (8)
	struct Unknown TextBlock_67; // 0x268 (8)
	struct FText Text; // 0x270 (24)

	void BndEvt__Button_42_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_42_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetSelect(char IsSelect); // Function U.U.SetSelect(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown AmmoImage; // 0x250 (8)
	struct Unknown AmmoText; // 0x258 (8)
	struct Unknown Button_2; // 0x260 (8)
	struct Unknown CanvasPanel_98; // 0x268 (8)
	struct Unknown HorizontalBox_Perk; // 0x270 (8)
	struct Unknown HorizontalBox_Rarity; // 0x278 (8)
	struct Unknown Image; // 0x280 (8)
	struct Unknown Image_369; // 0x288 (8)
	struct Unknown Image_704; // 0x290 (8)
	struct Unknown Image_874; // 0x298 (8)
	struct Unknown Image_924; // 0x2A0 (8)
	struct Unknown Image_1262; // 0x2A8 (8)
	struct Unknown Image_1400; // 0x2B0 (8)
	struct Unknown Reinforce; // 0x2B8 (8)
	struct Unknown TextBlock_291; // 0x2C0 (8)
	struct Unknown U; // 0x2C8 (8)
	struct Unknown U_2; // 0x2D0 (8)
	struct Unknown U_3; // 0x2D8 (8)
	struct Unknown WeaponBg; // 0x2E0 (8)
	struct Unknown WeaponImage01; // 0x2E8 (8)
	struct Unknown WeaponName; // 0x2F0 (8)
	struct Unknown WidgetSwitcher_1; // 0x2F8 (8)
	struct Unknown DraggedWidget; // 0x300 (8)
	struct Unknown WeaponData; // 0x308 (152)
	struct FMulticastInlineDelegate OnDropEventDispatcher; // 0x3A0 (16)
	struct FName AmmorKey; // 0x3B0 (8)
	struct FMulticastInlineDelegate ShowToolTipEventDispatcher; // 0x3B8 (16)
	char IsDefaultWeapon : 0; // 0x3C8 (1)
	int32_t ClickNum; // 0x3CC (4)
	struct FMulticastInlineDelegate OnDefaultWeaponEventDispatcher; // 0x3D0 (16)
	struct Unknown SaveKey; // 0x3E0 (24)

	struct Unknown OnMouseButtonUp(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseButtonUp(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragDetected(struct Unknown MyGeometry, struct Unknown& PointerEvent, struct Unknown& Operation); // Function U.U.OnDragDetected(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_FEF6479249E52A5D25FBEFB685BA2571(struct Unknown Loaded); // Function U.U.OnLoaded_FEF6479249E52A5D25FBEFB685BA2571(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_6AFA1CC544727820BD519DB93268114A(struct Unknown Loaded); // Function U.U.OnLoaded_6AFA1CC544727820BD519DB93268114A(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetData(struct Unknown& WeaponItem, char IsDefaultWeapon); // Function U.U.SetData(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function U.U.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetDurability(int32_t Durability); // Function U.U.SetDurability(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetDefaultWeapon(char IsDefaultWeapon); // Function U.U.SetDefaultWeapon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckClick(); // Function U.U.CheckClick(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDefaultWeaponEventDispatcher__DelegateSignature(struct Unknown Weapon); // Function U.U.OnDefaultWeaponEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowToolTipEventDispatcher__DelegateSignature(char IsShow, struct Unknown Widget); // Function U.U.ShowToolTipEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDropEventDispatcher__DelegateSignature(struct Unknown WeaponData); // Function U.U.OnDropEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelPersonalSupplyBoxSlotItemWidget {

public:

	struct Unknown UberGraphFrame; // 0x3E8 (8)
	struct Unknown Over; // 0x3F0 (8)
	struct Unknown Bg; // 0x3F8 (8)
	struct Unknown CanvasPanel_2; // 0x400 (8)
	struct Unknown CanvasPanel_4; // 0x408 (8)
	struct Unknown Cont; // 0x410 (8)
	struct Unknown DropHoverImage; // 0x418 (8)
	struct Unknown Image; // 0x420 (8)
	struct Unknown Image_86; // 0x428 (8)
	struct Unknown Image_187; // 0x430 (8)
	struct Unknown Image_675; // 0x438 (8)
	struct Unknown Image_874; // 0x440 (8)
	struct Unknown ItemImage; // 0x448 (8)
	struct Unknown ItemName; // 0x450 (8)
	struct Unknown Lock; // 0x458 (8)
	struct Unknown Price_Value; // 0x460 (8)
	struct Unknown ProgressBar_65; // 0x468 (8)
	struct Unknown Repair; // 0x470 (8)
	struct Unknown WeaponName; // 0x478 (8)
	struct Unknown WeaponName_2; // 0x480 (8)
	struct Unknown WeaponName_3; // 0x488 (8)
	struct Unknown WidgetSwitcher_1; // 0x490 (8)
	struct Unknown DraggedWidget; // 0x498 (8)
	struct Unknown DragItemBrush; // 0x4A0 (136)
	char EnableDrag : 0; // 0x528 (1)
	struct Unknown ItemIconImg; // 0x530 (40)
	struct FName AmmorKey; // 0x558 (8)
	struct FMulticastInlineDelegate OnHoverStateEventDispatcher; // 0x560 (16)
	struct FMulticastInlineDelegate OnRightClickEventDispatcher; // 0x570 (16)
	struct Unknown SaveKey; // 0x580 (24)
	int32_t ClickNum; // 0x598 (4)
	char RandomPerk : 0; // 0x59C (1)

	struct Unknown OnMouseButtonUp(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseButtonUp(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragDetected(struct Unknown MyGeometry, struct Unknown& PointerEvent, struct Unknown& Operation); // Function U.U.OnDragDetected(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_2F164CF142966D9481C26D9FAFCD6B3E(struct Unknown Loaded); // Function U.U.OnLoaded_2F164CF142966D9481C26D9FAFCD6B3E(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_470CC2A647398584A781D89997DE829A(struct Unknown Loaded); // Function U.U.OnLoaded_470CC2A647398584A781D89997DE829A(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_B44424C84F36CE653BE71591D8E4AA63(struct Unknown Loaded); // Function U.U.OnLoaded_B44424C84F36CE653BE71591D8E4AA63(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetConsumableItemInfo(struct Unknown& NewConsumableItemData); // Function U.U.SetConsumableItemInfo(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AysncLoadIconTexture(struct Unknown IconTexture); // Function U.U.AysncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function U.U.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetLockState(char IsLock); // Function U.U.SetLockState(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetEquipState(char IsUnEquip); // Function U.U.SetEquipState(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetWeaponInfo(struct Unknown& NewWeaponItemData); // Function U.U.SetWeaponInfo(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckClick(); // Function U.U.CheckClick(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnRightClickEventDispatcher__DelegateSignature(struct Unknown Slot); // Function U.U.OnRightClickEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnHoverStateEventDispatcher__DelegateSignature(char IsHover); // Function U.U.OnHoverStateEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Cont; // 0x250 (8)
	struct Unknown DropHoverImage; // 0x258 (8)
	struct Unknown EmptyImage; // 0x260 (8)
	struct Unknown EquipImage; // 0x268 (8)
	struct Unknown HoverImage2; // 0x270 (8)
	struct Unknown ItemImage; // 0x278 (8)
	struct Unknown WidgetSwitcher_2; // 0x280 (8)
	int32_t Index; // 0x288 (4)
	struct FMulticastInlineDelegate OnDropEventDispatcher; // 0x290 (16)
	struct Unknown Data; // 0x2A0 (256)
	struct Unknown DraggedWidget; // 0x3A0 (8)
	char IsEmpty : 0; // 0x3A8 (1)
	struct FMulticastInlineDelegate ShowToolTipEventDispatcher; // 0x3B0 (16)
	struct FMulticastInlineDelegate OnChangeSlotEventDispatcher; // 0x3C0 (16)
	struct FMulticastInlineDelegate OnRightClickEventDispatcher; // 0x3D0 (16)
	struct Unknown SaveKey; // 0x3E0 (24)
	int32_t ClickNum; // 0x3F8 (4)

	struct Unknown OnMouseButtonUp(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseButtonUp(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragDetected(struct Unknown MyGeometry, struct Unknown& PointerEvent, struct Unknown& Operation); // Function U.U.OnDragDetected(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_42EA96274FA324743778DBBB16312B12(struct Unknown Loaded); // Function U.U.OnLoaded_42EA96274FA324743778DBBB16312B12(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetData(struct Unknown Data, char SetEmpty); // Function U.U.SetData(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetEmpty(); // Function U.U.SetEmpty(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragEnter(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDragEnter(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragLeave(struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDragLeave(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function U.U.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckClick(); // Function U.U.CheckClick(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnRightClickEventDispatcher__DelegateSignature(struct Unknown Slot); // Function U.U.OnRightClickEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangeSlotEventDispatcher__DelegateSignature(struct Unknown Source, struct Unknown Target); // Function U.U.OnChangeSlotEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowToolTipEventDispatcher__DelegateSignature(char IsShow, struct Unknown Slot); // Function U.U.ShowToolTipEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDropEventDispatcher__DelegateSignature(struct Unknown ConsumalbeItemDat, int32_t SlotIndex); // Function U.U.OnDropEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelPersonalSupplyBoxWidget {

public:

	struct Unknown UberGraphFrame; // 0x3F8 (8)
	struct Unknown Ani_PadOn; // 0x400 (8)
	struct Unknown BG_Pad; // 0x408 (8)
	struct Unknown btn_PerkDeckEnabled; // 0x410 (8)
	struct Unknown Canvas_ChangeEnable; // 0x418 (8)
	struct Unknown CanvasPanel; // 0x420 (8)
	struct Unknown CanvasPanel_3; // 0x428 (8)
	struct Unknown ComboBoxString_237; // 0x430 (8)
	struct Unknown CurHaveGoldValue; // 0x438 (8)
	struct Unknown CurPriceText; // 0x440 (8)
	struct Unknown Down; // 0x448 (8)
	struct Unknown EquipBg; // 0x450 (8)
	struct Unknown Free; // 0x458 (8)
	struct Unknown GoldImage; // 0x460 (8)
	struct Unknown GoldImage_2; // 0x468 (8)
	struct Unknown GoldLack; // 0x470 (8)
	struct Unknown HaveWeaponText; // 0x478 (8)
	struct Unknown HorizontalBox_1; // 0x480 (8)
	struct Unknown Image; // 0x488 (8)
	struct Unknown Image_2; // 0x490 (8)
	struct Unknown Image_3; // 0x498 (8)
	struct Unknown Image_4; // 0x4A0 (8)
	struct Unknown Image_5; // 0x4A8 (8)
	struct Unknown Image_91; // 0x4B0 (8)
	struct Unknown Image_119; // 0x4B8 (8)
	struct Unknown Image_172; // 0x4C0 (8)
	struct Unknown Image_192; // 0x4C8 (8)
	struct Unknown Image_251; // 0x4D0 (8)
	struct Unknown Image_362; // 0x4D8 (8)
	struct Unknown Image_400; // 0x4E0 (8)
	struct Unknown Image_545; // 0x4E8 (8)
	struct Unknown Image_552; // 0x4F0 (8)
	struct Unknown Image_614; // 0x4F8 (8)
	struct Unknown Image_722; // 0x500 (8)
	struct Unknown Image_1025; // 0x508 (8)
	struct Unknown Image_1262; // 0x510 (8)
	struct Unknown ItemIcon; // 0x518 (8)
	struct Unknown Items_1Text; // 0x520 (8)
	struct Unknown ItemScroll; // 0x528 (8)
	struct Unknown ItemsText; // 0x530 (8)
	struct Unknown OkText; // 0x538 (8)
	struct Unknown Overlay_4; // 0x540 (8)
	struct Unknown Overlay_215; // 0x548 (8)
	struct Unknown PriceBg; // 0x550 (8)
	struct Unknown PriceBg_2; // 0x558 (8)
	struct Unknown PriceText; // 0x560 (8)
	struct Unknown PriceValue; // 0x568 (8)
	struct Unknown RichTextBlock; // 0x570 (8)
	struct Unknown RichTextBlock_74; // 0x578 (8)
	struct Unknown SizeBox_4; // 0x580 (8)
	struct Unknown SlotBg; // 0x588 (8)
	struct Unknown SortText; // 0x590 (8)
	struct Unknown SpecialWeaponText; // 0x598 (8)
	struct Unknown TextBlock_3; // 0x5A0 (8)
	struct Unknown Up; // 0x5A8 (8)
	struct Unknown U_2; // 0x5B0 (8)
	struct Unknown U_3; // 0x5B8 (8)
	struct Unknown U_4; // 0x5C0 (8)
	struct Unknown U_5; // 0x5C8 (8)
	struct Unknown U_6; // 0x5D0 (8)
	struct Unknown U_186; // 0x5D8 (8)
	struct Unknown U; // 0x5E0 (8)
	struct Unknown U; // 0x5E8 (8)
	struct Unknown VerticalBox_1; // 0x5F0 (8)
	struct Unknown WeaponScroll; // 0x5F8 (8)
	struct Unknown WidgetSwitcher_1; // 0x600 (8)
	struct TArray<Unknown> SortType; // 0x608 (16)
	struct TArray<Unknown> RarityList; // 0x618 (16)
	struct TMap<Unknown, Unknown> ComboxList; // 0x628 (80)
	struct FString SelectComboBox; // 0x678 (16)
	char IsShowAni : 0; // 0x688 (1)
	char IsFree : 0; // 0x689 (1)
	struct Unknown SaveSupplyItem; // 0x690 (256)
	int32_t CurOwnGold; // 0x790 (4)
	int32_t TotalPrice; // 0x794 (4)

	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetEmptySlot(char& bRet, struct Unknown& Slot); // Function U.U.GetEmptySlot(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetConsumableItemSlot(int32_t Index, struct Unknown& Widget); // Function U.U.GetConsumableItemSlot(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnGenerateWidget_2(struct FString Item); // Function U.U.OnGenerateWidget_2(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnGenerateWidget_1(struct FString Item); // Function U.U.OnGenerateWidget_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown CraeteWeaponItemSlots(); // Function U.U.CraeteWeaponItemSlots(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown CraeteConsumableItemSlots(); // Function U.U.CraeteConsumableItemSlots(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_0_OnButtonClickedEven(); // Function U.U.BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_0_OnButtonClickedEven(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType); // Function U.U.BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature(); // Function U.U.BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (struct Unknown ConsumalbeItemDat, int32_t SlotIndex); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetConsumableItemData(int32_t SlotIndex, struct Unknown& ConsumableItem, char SetEmpty); // Function U.U.SetConsumableItemData(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetWeaponData(struct Unknown& WeaponItem, char IsDefaultWeapon); // Function U.U.SetWeaponData(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (struct Unknown WeaponData); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Destruct(); // Function U.U.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTotalPrice(int32_t Price); // Function U.U.SetTotalPrice(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetFree(char IsFree, int32_t FreeCount); // Function U.U.SetFree(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetOwnGold(int32_t OwnGold); // Function U.U.SetOwnGold(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (char IsShow, struct Unknown Slot); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (char IsShow, struct Unknown Widget); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (enum class Unknow PrevState, enum class Unknow CurrentState); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Close(); // Function U.U.Close(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowConsumableSlotHoverEffect(char IsHover); // Function U.U.ShowConsumableSlotHoverEffect(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EquipSlot(struct Unknown Slot); // Function U.U.EquipSlot(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (struct Unknown Source, struct Unknown Target); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (struct Unknown Slot); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EquipWeaponSlot(struct Unknown Slot); // Function U.U.EquipWeaponSlot(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (struct Unknown Weapon); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetEnoughtGold(char IsEnought); // Function U.U.SetEnoughtGold(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown EndQuest; // 0x250 (8)
	struct Unknown StartQuest; // 0x258 (8)
	struct Unknown Idle; // 0x260 (8)
	struct Unknown Bg; // 0x268 (8)
	struct Unknown Image_308; // 0x270 (8)
	struct Unknown Image_697; // 0x278 (8)
	struct Unknown Image_839; // 0x280 (8)
	struct Unknown TextBlock_QuestDesc; // 0x288 (8)
	struct Unknown TextBlock_QuestTitle; // 0x290 (8)
	struct Unknown U; // 0x298 (8)
	struct Unknown U_2; // 0x2A0 (8)
	struct Unknown U_94; // 0x2A8 (8)
	struct Unknown VerticalBox_Tasks; // 0x2B0 (8)
	struct Unknown QuestInfo; // 0x2B8 (48)
	struct Unknown QuestData; // 0x2E8 (88)
	char ActiveQuest : 0; // 0x340 (1)
	struct TArray<Unknown> PendingQuestInfo; // 0x348 (16)

	void ConsumeQuestInfo(); // Function U.U.ConsumeQuestInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CompleteQuest(); // Function U.U.CompleteQuest(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateQuestInfo(struct Unknown QuestInfo); // Function U.U.UpdateQuestInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetQuestInfo(struct Unknown QuestInfo); // Function U.U.SetQuestInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Finished_98C3A1304432C887E8D12CAE4AA78DFF(); // Function U.U.Finished_98C3A1304432C887E8D12CAE4AA78DFF(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CompleteQuestEvent(); // Function U.U.CompleteQuestEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Anim_ToggleItemList; // 0x250 (8)
	struct Unknown Anim_TogglePlayerList; // 0x258 (8)
	struct Unknown Anim_ToggleTimeline; // 0x260 (8)
	struct Unknown U; // 0x268 (8)
	struct Unknown U; // 0x270 (8)
	struct Unknown U; // 0x278 (8)
	struct Unknown U; // 0x280 (8)
	struct Unknown U; // 0x288 (8)
	struct Unknown U; // 0x290 (8)
	struct Unknown U; // 0x298 (8)
	struct Unknown ReplayController; // 0x2A0 (8)
	struct TArray<Unknown> UserNameTooltips; // 0x2A8 (16)
	struct Unknown MainWidget; // 0x2B8 (8)
	int32_t UserNameTooltipsNum; // 0x2C0 (4)

	void SetTargetPawnInfo(); // Function U.U.SetTargetPawnInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetEnableUserNameTooltips(enum class Unknow CameraType); // Function U.U.SetEnableUserNameTooltips(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckWorldMapOption(); // Function U.U.CheckWorldMapOption(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetMainWidget(char& IsValid, struct Unknown& MainWidget); // Function U.U.GetMainWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RemoveAllUserNameTooltips(); // Function U.U.RemoveAllUserNameTooltips(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CreateUserNameTooltip(struct Unknown PlayerState); // Function U.U.CreateUserNameTooltip(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(); // Function U.U.Set(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Init(); // Function U.U.Init(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ToggleTimeline(); // Function U.U.ToggleTimeline(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void TogglePlayerList(); // Function U.U.TogglePlayerList(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ToggleItemList(); // Function U.U.ToggleItemList(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ChangeCameraTypeDelegate_Event_1(enum class Unknow CameraType, struct FString TargetPlayerName); // Function U.U.ChangeCameraTypeDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitWorldMapOption(); // Function U.U.InitWorldMapOption(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangedFreeCamSpeedLevel(float SpeedLevel); // Function U.U.OnChangedFreeCamSpeedLevel(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangedPlayerInfosDelegate_Event_2(); // Function U.U.OnChangedPlayerInfosDelegate_Event_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown Image_91; // 0x248 (8)
	struct Unknown InventoryCharacterRef; // 0x250 (8)
	char Visible : 0; // 0x258 (1)

	enum class Unknow GetVisibility_1(); // Function U.U.GetVisibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown On_DragRect_MouseButtonDown_1(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.On_DragRect_MouseButtonDown_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsHitTest(struct Unknown Pos, char& bHit); // Function U.U.IsHitTest(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetInventoryCharacter(struct Unknown& InventoryCharacter); // Function U.U.GetInventoryCharacter(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelDebugWidget {

public:

	struct Unknown TextBlock_DebugString; // 0x258 (8)
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Button_Category; // 0x250 (8)
	struct Unknown CanvasPanel_SlotList; // 0x258 (8)
	struct Unknown Image_New; // 0x260 (8)
	struct Unknown T_CategoryName; // 0x268 (8)
	struct Unknown U_4; // 0x270 (8)
	struct Unknown U_5; // 0x278 (8)
	struct Unknown U_6; // 0x280 (8)
	struct Unknown VerticalBox_ItemList; // 0x288 (8)
	struct Unknown WidgetSwitcher_Own; // 0x290 (8)
	struct FString WeaponType; // 0x298 (16)
	char IsPressed : 0; // 0x2A8 (1)
	char IsOwn : 0; // 0x2A9 (1)
	char IsOwnAny : 0; // 0x2AA (1)
	struct Unknown ParentWidgetRef; // 0x2B0 (8)
	float SlotSize; // 0x2B8 (4)
	float CurrentListSize; // 0x2BC (4)
	struct Unknown DefaultImage; // 0x2C0 (8)
	struct Unknown HoverImage; // 0x2C8 (8)
	struct Unknown PressedDefaultImage; // 0x2D0 (8)
	struct Unknown PressedHoverImage; // 0x2D8 (8)

	void SetNew(); // Function U.U.SetNew(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetButtonImage(); // Function U.U.SetButtonImage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckSlotAnim(); // Function U.U.CheckSlotAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckOwn(char& OutIsOwn, char& IsOwnAny); // Function U.U.CheckOwn(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddCraftingWeapon(struct Unknown& CraftingID); // Function U.U.AddCraftingWeapon(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitCategoryInfo(struct Unknown& CraftingInfo, struct Unknown ParentWidgetRef); // Function U.U.InitCategoryInfo(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Category_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Category_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CloseList(); // Function U.U.CloseList(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OpenList(); // Function U.U.OpenList(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Category_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Category_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Spectator_Ani; // 0x250 (8)
	struct Unknown Button_Report; // 0x258 (8)
	struct Unknown Canvas_Finding; // 0x260 (8)
	struct Unknown Canvas_Target; // 0x268 (8)
	struct Unknown Deco; // 0x270 (8)
	struct Unknown Image_351; // 0x278 (8)
	struct Unknown IMG_ClassIcon; // 0x280 (8)
	struct Unknown NickName; // 0x288 (8)
	struct Unknown Overlay_Report; // 0x290 (8)
	struct Unknown ReportDescriptionText; // 0x298 (8)
	struct Unknown Text_Report; // 0x2A0 (8)
	struct Unknown TextBlock_3; // 0x2A8 (8)
	struct Unknown TextBlock_208; // 0x2B0 (8)
	struct Unknown VerticalBox_Report; // 0x2B8 (8)
	struct Unknown WidgetSwitcher_136; // 0x2C0 (8)
	char IsReportAbleDateTime : 0; // 0x2C8 (1)
	struct Unknown TargetPlayerState; // 0x2D0 (8)

	void ReportSended(); // Function U.U.ReportSended(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Check(); // Function U.U.Check(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTargetPlayerInfo(struct Unknown PlayerState); // Function U.U.SetTargetPlayerInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_4A4EF93A4D64362A89D43DA6D9BD2749(struct Unknown Loaded); // Function U.U.OnLoaded_4A4EF93A4D64362A89D43DA6D9BD2749(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncClassIcon(struct Unknown Image); // Function U.U.AsyncClassIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Report_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Report_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Report_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Report_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Report_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Report_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetReplayReportAbleDateTime(); // Function U.U.SetReplayReportAbleDateTime(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckTargetValid(); // Function U.U.CheckTargetValid(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown Image_273; // 0x248 (8)
	struct Unknown U; // 0x250 (8)
	struct Unknown U; // 0x258 (8)

	void SetWeaponInfo(int32_t WeaponItemID); // Function U.U.SetWeaponInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown FadeIn; // 0x250 (8)
	struct Unknown FadeOut; // 0x258 (8)
	struct Unknown Image_69; // 0x260 (8)
	char NextScene : 0; // 0x268 (1)

	void SequenceEvent__ENTRYPOINTU_2(); // Function U.U.SequenceEvent__ENTRYPOINTU_2(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_1(); // Function U.U.SequenceEvent__ENTRYPOINTU_1(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Destory(); // Function U.U.Destory(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void MoveNextScene(); // Function U.U.MoveNextScene(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CustomEvent_1(); // Function U.U.CustomEvent_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown BGImage; // 0x250 (8)
	struct Unknown BorderImage; // 0x258 (8)
	struct Unknown DisableImage; // 0x260 (8)
	struct Unknown Image_177; // 0x268 (8)
	struct Unknown ItemCount; // 0x270 (8)
	struct Unknown ItemImage; // 0x278 (8)
	struct Unknown WidgetReference; // 0x280 (8)
	char Lock : 0; // 0x288 (1)
	enum class Unknow InventoryDragType; // 0x289 (1)
	struct Unknown ChangeTarget; // 0x290 (8)
	struct Unknown PlayerHUDRef; // 0x298 (8)

	void GetBravoHotelPlayerHUD(struct Unknown& NewParam); // Function U.U.GetBravoHotelPlayerHUD(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Init(struct Unknown Image, int32_t Count, char LockSlot, enum class Unknow DragType); // Function U.U.Init(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Disable(); // Function U.U.Disable(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Enable(); // Function U.U.Enable(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_CC3EA76649966C8AA6712791A8D413B0(struct Unknown Loaded); // Function U.U.OnLoaded_CC3EA76649966C8AA6712791A8D413B0(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitFromObjectRef(struct Unknown Icon, struct Unknown Icon, int32_t Count, char LockSlot, enum class Unknow DragType); // Function U.U.InitFromObjectRef(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Destruct(); // Function U.U.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown BlockMouse; // 0x250 (8)
	struct Unknown Button_Accept; // 0x258 (8)
	struct Unknown Button_Cancel; // 0x260 (8)
	struct Unknown Button_Close; // 0x268 (8)
	struct Unknown Button_Max; // 0x270 (8)
	struct Unknown Button_Min; // 0x278 (8)
	struct Unknown Image_9; // 0x280 (8)
	struct Unknown Slider_137; // 0x288 (8)
	struct Unknown TextBlock_Accept; // 0x290 (8)
	struct Unknown TextBlock_MaxCount; // 0x298 (8)
	struct Unknown TextBlock_MinCount; // 0x2A0 (8)
	struct Unknown TextBlock_Title; // 0x2A8 (8)
	struct Unknown TextBox_DropCount; // 0x2B0 (8)
	int32_t CurrentCount; // 0x2B8 (4)
	int32_t MaxCount; // 0x2BC (4)
	struct FText LastEnteredText; // 0x2C0 (24)
	struct Unknown ItemInfo; // 0x2D8 (152)
	struct Unknown ItemDetailInfo; // 0x370 (1168)
	struct Unknown PickupRef; // 0x800 (8)
	struct Unknown DropBoxRef; // 0x808 (8)
	struct Unknown InventoryWidget; // 0x810 (8)
	char bClosing : 0; // 0x818 (1)
	struct Unknown MaterialSlot; // 0x820 (8)

	void CheckNumeric(struct FString CheckString, char& CheckResult); // Function U.U.CheckNumeric(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetButtonTextColor(char IsHover, char IsPress, struct Unknown& TextColor); // Function U.U.GetButtonTextColor(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetDefault(char InvenWeightCheck); // Function U.U.SetDefault(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTextBoxText(int32_t CurrentCount); // Function U.U.SetTextBoxText(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetSliderValue(int32_t CurrentCount); // Function U.U.SetSliderValue(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PreConstruct(char IsDesignTime); // Function U.U.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__TextBox_DropCount_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod); // Function U.U.BndEvt__TextBox_DropCount_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__TextBox_DropCount_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChan(struct FText& Text); // Function U.U.BndEvt__TextBox_DropCount_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChan(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Slider_136_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function U.U.BndEvt__Slider_136_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Close(); // Function U.U.Close(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_4_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_4_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Min_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Min_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Max_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Max_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Accept_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Accept_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Accept(); // Function U.U.Accept(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Anim_LoopHintSpecialWeapon; // 0x250 (8)
	struct Unknown Button_183; // 0x258 (8)
	struct Unknown Button_283; // 0x260 (8)
	struct Unknown CanvasPanel; // 0x268 (8)
	struct Unknown CanvasPanel_2; // 0x270 (8)
	struct Unknown Image_2; // 0x278 (8)
	struct Unknown Image_3; // 0x280 (8)
	struct Unknown Image_4; // 0x288 (8)
	struct Unknown Image_185; // 0x290 (8)
	struct Unknown Image_186; // 0x298 (8)
	struct Unknown Image_189; // 0x2A0 (8)
	struct Unknown Image_297; // 0x2A8 (8)
	struct Unknown Img_Find; // 0x2B0 (8)
	struct Unknown Overlay_2; // 0x2B8 (8)
	struct Unknown SizeBox_3; // 0x2C0 (8)
	struct Unknown T_SerchButton; // 0x2C8 (8)
	struct Unknown TextBlock_5; // 0x2D0 (8)
	struct Unknown TextBlock_495; // 0x2D8 (8)
	struct Unknown Throbber; // 0x2E0 (8)
	struct Unknown U; // 0x2E8 (8)
	struct Unknown U_2; // 0x2F0 (8)
	struct Unknown U_3; // 0x2F8 (8)
	struct Unknown U_4; // 0x300 (8)
	struct Unknown U_5; // 0x308 (8)
	struct Unknown U_6; // 0x310 (8)
	struct Unknown U_7; // 0x318 (8)
	struct Unknown U_8; // 0x320 (8)
	struct Unknown U_9; // 0x328 (8)
	struct Unknown U_10; // 0x330 (8)
	struct Unknown U_11; // 0x338 (8)
	struct Unknown U_12; // 0x340 (8)
	struct Unknown VerticalBox_2; // 0x348 (8)
	struct Unknown VerticalBox_4; // 0x350 (8)
	char ShowButton : 0; // 0x358 (1)
	int32_t Index; // 0x35C (4)
	struct TArray<Unknown> TempList; // 0x360 (16)
	int32_t MaxSlotCount; // 0x370 (4)
	char EnableShowExpertWeapon : 0; // 0x374 (1)

	void Get(int32_t Index, struct Unknown& Slot); // Function U.U.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Update(); // Function U.U.Update(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (struct Unknown MaterialItemKey, char IsSelect); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Destruct(); // Function U.U.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_282_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_282_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Enable(char EnableMaterialSearch); // Function U.U.Enable(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_282_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_282_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_282_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_282_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateUI(); // Function U.U.UpdateUI(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (char EnableMaterialSearch); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_182_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_182_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown PlayerController; // 0x250 (8)
	struct Unknown InventoryItemInfo; // 0x258 (152)
	struct Unknown InventoryItemDetailInfo; // 0x2F0 (1168)
	struct Unknown WeaponInfo; // 0x780 (2864)
	struct Unknown ItemSlotHoverWIdget; // 0x12B0 (8)
	struct Unknown InventoryWidget; // 0x12B8 (8)
	struct Unknown DraggedWidget; // 0x12C0 (8)
	enum class Unknow InventorySlotWidgetKind; // 0x12C8 (1)
	struct Unknown DragItemBrush; // 0x12D0 (136)
	char RButtonDown : 0; // 0x1358 (1)
	char bEpuipped : 0; // 0x1359 (1)

	void IsEquipped(char& Return); // Function U.U.IsEquipped(Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetInventoryWidget(); // Function U.U.SetInventoryWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetOverrideItemID(struct FName& ItemId); // Function U.U.GetOverrideItemID(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsLockSlot(char& Lock); // Function U.U.IsLockSlot(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetInventoryItemDetailInfoByItemInfo(struct Unknown InventoryItemInfo, char& bResult); // Function U.U.SetInventoryItemDetailInfoByItemInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DragEnd(); // Function U.U.DragEnd(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DragStart(char LockSlot, struct Unknown& Operation); // Function U.U.DragStart(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetInventoryComponent(char& bResult, struct Unknown& InventoryComponent); // Function U.U.GetInventoryComponent(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetInventoryItemInfo(struct Unknown InventoryItemInfo); // Function U.U.SetInventoryItemInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetWeaponInfo(struct Unknown& WeaponInfo); // Function U.U.GetWeaponInfo(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetWeaponInfo(struct Unknown WeaponInfo); // Function U.U.SetWeaponInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnMouseButtonUp(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseButtonUp(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnRButtonClick(char& bResult); // Function U.U.OnRButtonClick(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragDetected(struct Unknown MyGeometry, struct Unknown& PointerEvent, struct Unknown& Operation); // Function U.U.OnDragDetected(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetInventoryItemDetailInfo(struct Unknown& InventoryItemDeailInfo); // Function U.U.GetInventoryItemDetailInfo(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetInventoryItemInfo(struct Unknown& InventoryItemInfo); // Function U.U.GetInventoryItemInfo(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetInventoryItemDetailInfo(struct Unknown InventoryItemDetailInfo); // Function U.U.SetInventoryItemDetailInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetInventoryItemInfoByPick(struct Unknown Pickup, char& bResult); // Function U.U.SetInventoryItemInfoByPick(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPlayerController(); // Function U.U.SetPlayerController(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetItemSlotHoverWidget(struct Unknown ItemSlotHoverWIdget, struct Unknown& Out); // Function U.U.SetItemSlotHoverWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetPlayerController(char& bResult, struct Unknown& Out); // Function U.U.GetPlayerController(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetItemSlotHoverWidget(char& bResult, struct Unknown& Out); // Function U.U.GetItemSlotHoverWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_29D4AD794F40F3517E11F7A14C55D6DD(struct Unknown Loaded); // Function U.U.OnLoaded_29D4AD794F40F3517E11F7A14C55D6DD(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AysncLoadIconTexture(struct Unknown IconTexture); // Function U.U.AysncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Button_OK; // 0x250 (8)
	struct Unknown Image_337; // 0x258 (8)
	struct Unknown Image_581; // 0x260 (8)
	struct Unknown Image_583; // 0x268 (8)
	struct Unknown Image_584; // 0x270 (8)
	struct Unknown Slider_Gamma; // 0x278 (8)
	struct Unknown TextBlock_Gamma; // 0x280 (8)
	struct Unknown Game; // 0x288 (8)
	float Gamma; // 0x290 (4)
	struct FText Gamma; // 0x298 (24)
	struct FMulticastInlineDelegate ClosedWidgetDelegate; // 0x2B0 (16)

	void Refresh(); // Function U.U.Refresh(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Refresh(float Strength); // Function U.U.Refresh(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Slider_138_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function U.U.BndEvt__Slider_138_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_479_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_479_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ClosedWidgetDelegate__DelegateSignature(); // Function U.U.ClosedWidgetDelegate__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UU {

public:

	struct Unknown UberGraphFrame; // 0x1360 (8)
	struct Unknown Complete_ani; // 0x1368 (8)
	struct Unknown Searching_ani; // 0x1370 (8)
	struct Unknown Blank_SkillBG; // 0x1378 (8)
	struct Unknown Border_507; // 0x1380 (8)
	struct Unknown Button_332; // 0x1388 (8)
	struct Unknown Get_SkillBG; // 0x1390 (8)
	struct Unknown Get_SkillBG_lv5; // 0x1398 (8)
	struct Unknown Get_SkillBG_lv6; // 0x13A0 (8)
	struct Unknown Get_SkillBG_lv7; // 0x13A8 (8)
	struct Unknown HorizontalBox_Rarity; // 0x13B0 (8)
	struct Unknown Image; // 0x13B8 (8)
	struct Unknown Image_2; // 0x13C0 (8)
	struct Unknown Image_3; // 0x13C8 (8)
	struct Unknown Image_4; // 0x13D0 (8)
	struct Unknown Image_5; // 0x13D8 (8)
	struct Unknown Image_6; // 0x13E0 (8)
	struct Unknown Image_7; // 0x13E8 (8)
	struct Unknown Image_8; // 0x13F0 (8)
	struct Unknown Image_9; // 0x13F8 (8)
	struct Unknown Image_10; // 0x1400 (8)
	struct Unknown Image_12; // 0x1408 (8)
	struct Unknown Image_16; // 0x1410 (8)
	struct Unknown Image_332; // 0x1418 (8)
	struct Unknown Image_689; // 0x1420 (8)
	struct Unknown Image_690; // 0x1428 (8)
	struct Unknown Image_Full; // 0x1430 (8)
	struct Unknown Image_Have; // 0x1438 (8)
	struct Unknown Img_Active; // 0x1440 (8)
	struct Unknown IMG_Complete; // 0x1448 (8)
	struct Unknown IMG_ItemIcon; // 0x1450 (8)
	struct Unknown MouseHover_2; // 0x1458 (8)
	struct Unknown MouseHover_; // 0x1460 (8)
	struct Unknown MousePress_2; // 0x1468 (8)
	struct Unknown MousePress_; // 0x1470 (8)
	struct Unknown MyWeapon; // 0x1478 (8)
	struct Unknown Searching; // 0x1480 (8)
	struct Unknown Searching_; // 0x1488 (8)
	struct Unknown SizeBox_1; // 0x1490 (8)
	struct Unknown SizeBox_8; // 0x1498 (8)
	struct Unknown T_PerkName; // 0x14A0 (8)
	struct Unknown T_PerkName_2; // 0x14A8 (8)
	struct Unknown T_PerkName_3; // 0x14B0 (8)
	struct Unknown T_PerkName_4; // 0x14B8 (8)
	struct Unknown VerticalBox_1; // 0x14C0 (8)
	struct Unknown HoverWidget; // 0x14C8 (8)
	char Selected : 0; // 0x14D0 (1)
	struct Unknown SelectItem; // 0x14D4 (16)
	struct Unknown NewVar_1; // 0x14E8 (8)
	char EnableSearch : 0; // 0x14F0 (1)
	struct Unknown TempData; // 0x14F4 (16)
	char IsComplete : 0; // 0x1504 (1)

	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnMouseButtonUp(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseButtonUp(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetOpacity(char bActive, char bComplete); // Function U.U.SetOpacity(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void MouseEnterImpl(); // Function U.U.MouseEnterImpl(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetRarity(enum class Unknow Rarity, char bStar); // Function U.U.SetRarity(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetMaterialInfo(struct FName ItemKey, int32_t Count, char Complete, char Having, struct Unknown HoverWidget, struct FName TopItem); // Function U.U.SetMaterialInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_B0A3D28F44780582B366508928D8D420(struct Unknown Loaded); // Function U.U.OnLoaded_B0A3D28F44780582B366508928D8D420(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_331_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_331_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_331_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_331_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_331_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_331_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_331_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_331_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(char Select); // Function U.U.Set(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Destruct(); // Function U.U.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (struct Unknown MaterialItemKey, char IsSelect); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (char EnableMaterialSearch); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadIconTexture(struct Unknown IconTexture); // Function U.U.AsyncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Character_BG_Motion; // 0x250 (8)
	struct Unknown Image_308; // 0x258 (8)
	struct Unknown ScrollBox_KeepedList; // 0x260 (8)
	struct Unknown SizeBox_KeepedList; // 0x268 (8)
	struct Unknown PlayerController; // 0x270 (8)
	float SlotMaxHeight; // 0x278 (4)

	void UpdateSlotMaxSize(int32_t SlotNum); // Function U.U.UpdateSlotMaxSize(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DisableCarriedListHover(); // Function U.U.DisableCarriedListHover(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char DropItem(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.DropItem(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetInventoryComponent(char& Result, struct Unknown& InventoryComponentRef); // Function U.U.GetInventoryComponent(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Reset(); // Function U.U.Reset(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverEquipSlotList(enum class Unknow WearableItemType); // Function U.U.HoverEquipSlotList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverResetEquipSlotList(); // Function U.U.HoverResetEquipSlotList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragEnter(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDragEnter(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragLeave(struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDragLeave(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Title; // 0x250 (8)
	struct Unknown W; // 0x258 (8)
	struct FText TitleText; // 0x260 (24)
	char TitleVisible : 0; // 0x278 (1)
	struct Unknown TargetActor; // 0x280 (8)
	struct TArray<Unknown> ItemInfos; // 0x288 (16)
	struct Unknown InventoryWidget; // 0x298 (8)

	void CreateSlots(); // Function U.U.CreateSlots(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Event_TitleVisible(char Visible); // Function U.U.Event_TitleVisible(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UU {

public:

	struct Unknown UberGraphFrame; // 0x1360 (8)
	struct Unknown Anim_LoopHintMaterial; // 0x1368 (8)
	struct Unknown Anim_Upgrade; // 0x1370 (8)
	struct Unknown P_Upgrade_Arrow; // 0x1378 (8)
	struct Unknown C_SlotHover_ItemState_Hide; // 0x1380 (8)
	struct Unknown C_SlotHover_ItemState_Show; // 0x1388 (8)
	struct Unknown Hover_Gold; // 0x1390 (8)
	struct Unknown P_SlotHover; // 0x1398 (8)
	struct Unknown BGImage; // 0x13A0 (8)
	struct Unknown CanvasPanel_ITemState; // 0x13A8 (8)
	struct Unknown CanvasPanel_Unnecessary; // 0x13B0 (8)
	struct Unknown Count; // 0x13B8 (8)
	struct Unknown Count_Icon; // 0x13C0 (8)
	struct Unknown fill; // 0x13C8 (8)
	struct Unknown Hint; // 0x13D0 (8)
	struct Unknown HoverImage; // 0x13D8 (8)
	struct Unknown HoverImage_Gold; // 0x13E0 (8)
	struct Unknown Image_1; // 0x13E8 (8)
	struct Unknown Image_2; // 0x13F0 (8)
	struct Unknown Image_95; // 0x13F8 (8)
	struct Unknown ItemImage; // 0x1400 (8)
	struct Unknown ItemNameName; // 0x1408 (8)
	struct Unknown ItemState_Text; // 0x1410 (8)
	struct Unknown LvColor; // 0x1418 (8)
	struct Unknown NeedMaterial; // 0x1420 (8)
	struct Unknown OverBG_3; // 0x1428 (8)
	struct Unknown ProgressBar_136; // 0x1430 (8)
	struct Unknown SizeBox_1; // 0x1438 (8)
	struct Unknown WeaponItemImage; // 0x1440 (8)
	char bGold : 0; // 0x1448 (1)
	struct Unknown SelectedHoverImage; // 0x1450 (8)
	struct Unknown MedicalBGColor; // 0x1458 (16)
	struct FMulticastInlineDelegate SetSlotInfo; // 0x1468 (16)
	int32_t SlotIndex; // 0x1478 (4)

	void Get(char& bResult, struct Unknown& WeaponInfo); // Function U.U.Get(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CanChange(char& Result); // Function U.U.CanChange(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DropQuantity(int32_t Quantity); // Function U.U.DropQuantity(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetInfo(struct Unknown ItemInfo, int32_t SlotIndex); // Function U.U.SetInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetItemRarityColor(enum class Unknow CurrentSlot, struct Unknown ImageWidget); // Function U.U.SetItemRarityColor(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void MouseEnterImpl(); // Function U.U.MouseEnterImpl(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetWeaponImage_Internal(struct Unknown IconTexture); // Function U.U.SetWeaponImage_Internal(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown Set(struct Unknown IconTexture); // Function U.U.Set(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsDraging(char& bResult); // Function U.U.IsDraging(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragDetected(struct Unknown MyGeometry, struct Unknown& PointerEvent, struct Unknown& Operation); // Function U.U.OnDragDetected(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnRButtonClick(char& bResult); // Function U.U.OnRButtonClick(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown Set_BGImage_Brush_1(); // Function U.U.Set_BGImage_Brush_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown SetItemImage(); // Function U.U.SetItemImage(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_844D1FE84342B1FFB080F8A6CC651A2C(struct Unknown Loaded); // Function U.U.OnLoaded_844D1FE84342B1FFB080F8A6CC651A2C(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function U.U.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadIconTexture(struct Unknown IconTexture); // Function U.U.AsyncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnUpdateCastingDelegateEvent(struct Unknown& CastingInfo, float CastingPercent); // Function U.U.OnUpdateCastingDelegateEvent(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Enable(); // Function U.U.Enable(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Disable(); // Function U.U.Disable(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CompleteCombine(); // Function U.U.CompleteCombine(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverRecipeTree(); // Function U.U.HoverRecipeTree(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragEnter(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDragEnter(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragLeave(struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDragLeave(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetSlotInfo__DelegateSignature(struct Unknown TargetActor, struct Unknown ItemInfo); // Function U.U.SetSlotInfo__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UU {

public:

	struct Unknown UberGraphFrame; // 0x1360 (8)
	struct Unknown Abillity; // 0x1368 (8)
	struct Unknown AbillityBG; // 0x1370 (8)
	struct Unknown AbillityValue; // 0x1378 (8)
	struct Unknown Bg; // 0x1380 (8)
	struct Unknown BorderBG; // 0x1388 (8)
	struct Unknown ChoiceBG; // 0x1390 (8)
	struct Unknown DefenseBG; // 0x1398 (8)
	struct Unknown DurabilityBar; // 0x13A0 (8)
	struct Unknown EmptyBG; // 0x13A8 (8)
	struct Unknown ItemImage; // 0x13B0 (8)
	struct Unknown OverBG; // 0x13B8 (8)
	enum class Unknow WearableItemType; // 0x13C0 (1)
	char IsDefense : 0; // 0x13C1 (1)
	struct Unknown HoverWidget; // 0x13C8 (8)
	struct Unknown HoverOwnerWidget; // 0x13D0 (8)
	int32_t Index; // 0x13D8 (4)

	void OnDragDetected(struct Unknown MyGeometry, struct Unknown& PointerEvent, struct Unknown& Operation); // Function U.U.OnDragDetected(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetHoverWidgetRef(); // Function U.U.SetHoverWidgetRef(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetBG(enum class Unknow WearableItemType); // Function U.U.SetBG(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnRButtonClick(char& bResult); // Function U.U.OnRButtonClick(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	enum class Unknow Get_Abillity_Visibility_1(); // Function U.U.Get_Abillity_Visibility_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RequestGetItem(struct Unknown Pickup, char& bResult); // Function U.U.RequestGetItem(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Reset(); // Function U.U.Reset(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitData(enum class Unknow EquipType, enum class Unknow WearableItemType); // Function U.U.InitData(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetInfo(struct Unknown InventoryWidget, struct Unknown InventoryItemInfoData); // Function U.U.SetInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Drop(); // Function U.U.Drop(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_98E452BD4DD4A7091D0406BA03F23FD2(struct Unknown Loaded); // Function U.U.OnLoaded_98E452BD4DD4A7091D0406BA03F23FD2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function U.U.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Enable(); // Function U.U.Enable(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Disable(); // Function U.U.Disable(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AysncLoadIconTexture(struct Unknown IconTexture); // Function U.U.AysncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown Image_362; // 0x248 (8)
	struct Unknown Image_552; // 0x250 (8)
	struct Unknown RichTextBlock_74; // 0x258 (8)
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Character_BG_Motion; // 0x250 (8)
	struct Unknown ArmorSlot; // 0x258 (8)
	struct Unknown BagSlot; // 0x260 (8)
	struct Unknown BottomSlot; // 0x268 (8)
	struct Unknown Character_BG; // 0x270 (8)
	struct Unknown EyeWearSlot; // 0x278 (8)
	struct Unknown GhillieSlot; // 0x280 (8)
	struct Unknown GlovesSlot; // 0x288 (8)
	struct Unknown HatSlot; // 0x290 (8)
	struct Unknown HelmetSlot; // 0x298 (8)
	struct Unknown MaskSlot; // 0x2A0 (8)
	struct Unknown OuterSlot; // 0x2A8 (8)
	struct Unknown ShoesSlot; // 0x2B0 (8)
	struct Unknown TopSlot; // 0x2B8 (8)
	struct Unknown U; // 0x2C0 (8)
	struct Unknown PlayerController; // 0x2C8 (8)
	struct TMap<Unknown, Unknown> EquipedSlots; // 0x2D0 (80)

	void ShowStatupAnim(struct Unknown& StatParams, enum class Unknow StatType); // Function U.U.ShowStatupAnim(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverRecipeTree(struct FName ItemKey); // Function U.U.HoverRecipeTree(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CompleteItems(struct TArray<Unknown>& ItemKeys); // Function U.U.CompleteItems(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverItems(struct TArray<Unknown>& ItemKeys); // Function U.U.HoverItems(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetWearItemKey(enum class Unknow ItemSlot, struct FName& ItemKey); // Function U.U.GetWearItemKey(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	enum class Unknow Get_btn_ArmorTree_Visibility_1(); // Function U.U.Get_btn_ArmorTree_Visibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	enum class Unknow GetVisibility_1(); // Function U.U.GetVisibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DisableCarriedListHover(); // Function U.U.DisableCarriedListHover(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char DropItem(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.DropItem(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetInventoryComponent(char& Result, struct Unknown& InventoryComponentRef); // Function U.U.GetInventoryComponent(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Reset(); // Function U.U.Reset(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverEquipSlotList(enum class Unknow WearableItemType); // Function U.U.HoverEquipSlotList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverResetEquipSlotList(); // Function U.U.HoverResetEquipSlotList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetEquippedSlot(struct Unknown InventoryWidget, struct Unknown InventoryItemInfo); // Function U.U.SetEquippedSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragEnter(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDragEnter(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragLeave(struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDragLeave(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_HelmetTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__btn_HelmetTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_ArmorTree_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__btn_ArmorTree_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_BagTree_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__btn_BagTree_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown FadeIn; // 0x250 (8)
	struct Unknown CharacterPreviewImage; // 0x258 (8)
	struct Unknown Image_1; // 0x260 (8)
	struct Unknown ControllerRef; // 0x268 (8)

	enum class Unknow Get_CharacterPreviewImage_Visibility_1(); // Function U.U.Get_CharacterPreviewImage_Visibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetCharacterPreviewRef(char& Result, struct Unknown& CharacterPreviewRef); // Function U.U.GetCharacterPreviewRef(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPreviewVisible(char bVisible); // Function U.U.SetPreviewVisible(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPlayAnimation(); // Function U.U.SetPlayAnimation(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Reset(); // Function U.U.Reset(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CustomEvent_1(); // Function U.U.CustomEvent_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown HoverBG; // 0x250 (8)
	struct Unknown ScrollBox_1; // 0x258 (8)
	struct Unknown W; // 0x260 (8)

	void DragLeave(struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.DragLeave(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DragEnter(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.DragEnter(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char DropItem(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.DropItem(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Disable(); // Function U.U.Disable(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Enable(); // Function U.U.Enable(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragEnter(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDragEnter(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragLeave(struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDragLeave(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UU {

public:

	struct Unknown UberGraphFrame; // 0x1360 (8)
	struct Unknown P_Upgrade_Arrow; // 0x1368 (8)
	struct Unknown C_SlotHover_ItemState_Hide; // 0x1370 (8)
	struct Unknown C_SlotHover_ItemState_Show; // 0x1378 (8)
	struct Unknown Hover_Gold; // 0x1380 (8)
	struct Unknown P_SlotHover; // 0x1388 (8)
	struct Unknown BGImage; // 0x1390 (8)
	struct Unknown BGImage_2; // 0x1398 (8)
	struct Unknown CanvasPanel_ITemState; // 0x13A0 (8)
	struct Unknown CanvasPanel_Unnecessary; // 0x13A8 (8)
	struct Unknown Count; // 0x13B0 (8)
	struct Unknown Crate_Default; // 0x13B8 (8)
	struct Unknown Crate_Hover; // 0x13C0 (8)
	struct Unknown DurabilityBar; // 0x13C8 (8)
	struct Unknown fill; // 0x13D0 (8)
	struct Unknown HorizontalBox_Rarity; // 0x13D8 (8)
	struct Unknown HoverImage; // 0x13E0 (8)
	struct Unknown HoverImage_Gold; // 0x13E8 (8)
	struct Unknown HoverImage_Round; // 0x13F0 (8)
	struct Unknown Image_1; // 0x13F8 (8)
	struct Unknown Image_2; // 0x1400 (8)
	struct Unknown Image_531; // 0x1408 (8)
	struct Unknown Image_539; // 0x1410 (8)
	struct Unknown Image_540; // 0x1418 (8)
	struct Unknown Image_541; // 0x1420 (8)
	struct Unknown Image_542; // 0x1428 (8)
	struct Unknown Image_543; // 0x1430 (8)
	struct Unknown Image_544; // 0x1438 (8)
	struct Unknown Image_Bindable; // 0x1440 (8)
	struct Unknown Image_Supply; // 0x1448 (8)
	struct Unknown ItemImage; // 0x1450 (8)
	struct Unknown ItemNameName; // 0x1458 (8)
	struct Unknown ItemState_Text; // 0x1460 (8)
	struct Unknown KeepedItem_List; // 0x1468 (8)
	struct Unknown KeepedItem_ListHover; // 0x1470 (8)
	struct Unknown LvColor; // 0x1478 (8)
	struct Unknown NeedMaterial; // 0x1480 (8)
	struct Unknown SizeBox_1; // 0x1488 (8)
	struct Unknown TextBlock_Range; // 0x1490 (8)
	struct Unknown UpgradeItem; // 0x1498 (8)
	struct Unknown UpgradeItem_Arrow01; // 0x14A0 (8)
	struct Unknown UpgradeItem_Arrow02; // 0x14A8 (8)
	struct Unknown UpgradeItem_default; // 0x14B0 (8)
	struct Unknown UpgradeItem_Hover; // 0x14B8 (8)
	struct Unknown weapon__; // 0x14C0 (8)
	struct Unknown WeaponColorBg; // 0x14C8 (8)
	struct Unknown WeaponEquipItem_Default; // 0x14D0 (8)
	struct Unknown WeaponEquipItem_Hovre; // 0x14D8 (8)
	struct Unknown WeaponItemImage; // 0x14E0 (8)
	struct Unknown WeaponType; // 0x14E8 (8)
	struct Unknown PickupRef; // 0x14F0 (8)
	struct Unknown DroppedItemInfo; // 0x14F8 (152)
	struct Unknown DropBoxRef; // 0x1590 (8)
	char bGold : 0; // 0x1598 (1)
	struct Unknown SelectedHoverImage; // 0x15A0 (8)
	struct Unknown WeaponData; // 0x15A8 (2864)
	struct Unknown MedicalBGColor; // 0x20D8 (16)
	int32_t CurCount; // 0x20E8 (4)
	struct FMulticastInlineDelegate SetSlotInfo; // 0x20F0 (16)
	struct Unknown TargetActor; // 0x2100 (8)
	struct Unknown StealableCharacter; // 0x2108 (8)
	struct TArray<Unknown> ShowRarityStar; // 0x2110 (16)
	struct TArray<Unknown> ShowIconBG; // 0x2120 (16)

	void CheckHoverMaterial(); // Function U.U.CheckHoverMaterial(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsRoundItemType(char& bRoundItem); // Function U.U.IsRoundItemType(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetNeededInfo(); // Function U.U.SetNeededInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitTargetActor(); // Function U.U.InitTargetActor(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetItemInfoByInventoryComponent(); // Function U.U.SetItemInfoByInventoryComponent(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetBindInfo(); // Function U.U.SetBindInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetRarity(); // Function U.U.SetRarity(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetItemRarityColor(enum class Unknow CurrentSlot, struct Unknown ImageWidget); // Function U.U.SetItemRarityColor(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetRatingArrowVisibility(); // Function U.U.SetRatingArrowVisibility(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetChestItem(); // Function U.U.SetChestItem(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetEquippableAttachment(); // Function U.U.SetEquippableAttachment(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetUpgradeItem(); // Function U.U.SetUpgradeItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void MouseEnterImpl(); // Function U.U.MouseEnterImpl(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void WeaponEquipState(); // Function U.U.WeaponEquipState(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetItemName(); // Function U.U.SetItemName(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetItemCount(); // Function U.U.SetItemCount(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetWeaponImage_Internal(struct Unknown IconTexture); // Function U.U.SetWeaponImage_Internal(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown SetItemImage_Internal(struct Unknown IconTexture); // Function U.U.SetItemImage_Internal(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsDraging(char& bResult); // Function U.U.IsDraging(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragDetected(struct Unknown MyGeometry, struct Unknown& PointerEvent, struct Unknown& Operation); // Function U.U.OnDragDetected(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetWeaponInfoByInventoryItemInfo(char& bResult, struct Unknown& WeaponInfo); // Function U.U.GetWeaponInfoByInventoryItemInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnRButtonClick(char& bResult); // Function U.U.OnRButtonClick(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetCharacterRef(char& Result, struct Unknown& CharacterRef); // Function U.U.GetCharacterRef(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetWeaponItem(); // Function U.U.SetWeaponItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set_BGImage_Brush_1(); // Function U.U.Set_BGImage_Brush_1(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RequestPickupItem(char RButtonClick, char& bResult); // Function U.U.RequestPickupItem(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown SetItemImage(); // Function U.U.SetItemImage(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText GetItemName(); // Function U.U.GetItemName(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_84877B5B4C424648BFE1AEBDF8BB89BB(struct Unknown Loaded); // Function U.U.OnLoaded_84877B5B4C424648BFE1AEBDF8BB89BB(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function U.U.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadIconTexture(struct Unknown IconTexture); // Function U.U.AsyncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SlotInfo(struct Unknown TargetActor, struct Unknown ItemInfo); // Function U.U.SlotInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangeWearableItem(); // Function U.U.OnChangeWearableItem(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangeWeapons(); // Function U.U.OnChangeWeapons(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangeItemInfoDelegate_Event_1(); // Function U.U.OnChangeItemInfoDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseCaptureLost(); // Function U.U.OnMouseCaptureLost(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetSlotInfo__DelegateSignature(struct Unknown TargetActor, struct Unknown ItemInfo); // Function U.U.SetSlotInfo__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UU {

public:

	struct Unknown UberGraphFrame; // 0x1360 (8)
	struct Unknown Ani_Tutorial_Glow; // 0x1368 (8)
	struct Unknown C_Slot_Up_Arrow; // 0x1370 (8)
	struct Unknown C_SlotHover_ItemState_Hide; // 0x1378 (8)
	struct Unknown C_SlotHover_ItemState_Show; // 0x1380 (8)
	struct Unknown C_SlotHover; // 0x1388 (8)
	struct Unknown BGImage; // 0x1390 (8)
	struct Unknown BGImage_2; // 0x1398 (8)
	struct Unknown CanvasPanel_ITemState; // 0x13A0 (8)
	struct Unknown Count120; // 0x13A8 (8)
	struct Unknown Crate_Default; // 0x13B0 (8)
	struct Unknown Crate_Hover; // 0x13B8 (8)
	struct Unknown Effect_Booster; // 0x13C0 (8)
	struct Unknown Effect_Capsule; // 0x13C8 (8)
	struct Unknown HorizontalBox_Rarity; // 0x13D0 (8)
	struct Unknown HoverImage; // 0x13D8 (8)
	struct Unknown HoverImage_Round; // 0x13E0 (8)
	struct Unknown Image_531; // 0x13E8 (8)
	struct Unknown Image_539; // 0x13F0 (8)
	struct Unknown Image_540; // 0x13F8 (8)
	struct Unknown Image_541; // 0x1400 (8)
	struct Unknown Image_542; // 0x1408 (8)
	struct Unknown Image_543; // 0x1410 (8)
	struct Unknown Image_544; // 0x1418 (8)
	struct Unknown Image_Bindable; // 0x1420 (8)
	struct Unknown Image_Supply; // 0x1428 (8)
	struct Unknown ItemImage; // 0x1430 (8)
	struct Unknown ItemState_Text; // 0x1438 (8)
	struct Unknown KeepedItem_List; // 0x1440 (8)
	struct Unknown KeepedItem_ListHover; // 0x1448 (8)
	struct Unknown LvColor; // 0x1450 (8)
	struct Unknown Motion; // 0x1458 (8)
	struct Unknown ProgressBar_309; // 0x1460 (8)
	struct Unknown SizeBox_1; // 0x1468 (8)
	struct Unknown TextBlock_3; // 0x1470 (8)
	struct Unknown Tutorial_Glow; // 0x1478 (8)
	struct Unknown U; // 0x1480 (8)
	struct Unknown U; // 0x1488 (8)
	struct Unknown WeaponColorBg; // 0x1490 (8)
	struct Unknown WeaponEquipItem_Default; // 0x1498 (8)
	struct Unknown WeaponEquipItem_Hov; // 0x14A0 (8)
	struct Unknown WeaponItemImage; // 0x14A8 (8)
	int32_t InventoryItemInfoIndex; // 0x14B0 (4)
	struct Unknown MedicalBGColor; // 0x14B4 (16)
	int32_t CurCount; // 0x14C4 (4)
	struct FMulticastInlineDelegate SetSlotInfo; // 0x14C8 (16)
	char CanUseCapsule : 0; // 0x14D8 (1)
	struct Unknown SelectedHoverImage; // 0x14E0 (8)
	struct TArray<Unknown> ShowRarityStar; // 0x14E8 (16)
	struct TArray<Unknown> ShowIconBG; // 0x14F8 (16)

	void CheckBoosterItem(char& IsBoost, struct Unknown& OutColor, struct Unknown& OutTexture); // Function U.U.CheckBoosterItem(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetBoosterItem(); // Function U.U.SetBoosterItem(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsDraging(char& bResult); // Function U.U.IsDraging(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsRoundItemType(char& bRoundItem); // Function U.U.IsRoundItemType(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetRightClickSmall(char IsVisible); // Function U.U.SetRightClickSmall(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetRightClickBig(); // Function U.U.SetRightClickBig(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetCapsuleItem(); // Function U.U.SetCapsuleItem(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char CanUseCapsuleItem(); // Function U.U.CanUseCapsuleItem(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckCapsuleItem(char& IsCapsule, struct Unknown& Color); // Function U.U.CheckCapsuleItem(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetRarity(); // Function U.U.SetRarity(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetBindInfo(); // Function U.U.SetBindInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	float GetPercent_1(); // Function U.U.GetPercent_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CalTargetHealth(char Hover); // Function U.U.CalTargetHealth(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetChestItem(); // Function U.U.SetChestItem(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetEquippableAttachment(); // Function U.U.SetEquippableAttachment(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void MouseEnterImpl(); // Function U.U.MouseEnterImpl(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void WeaponEquipState(); // Function U.U.WeaponEquipState(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetItemCount(); // Function U.U.SetItemCount(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetItemName(); // Function U.U.SetItemName(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DropQuantity(int32_t Quantity); // Function U.U.DropQuantity(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown Set_WeaponItemImage_Brush_1(); // Function U.U.Set_WeaponItemImage_Brush_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetWeaponInfoByInventoryItemInfo(char& bResult, struct Unknown& WeaponInfo); // Function U.U.GetWeaponInfoByInventoryItemInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragDetected(struct Unknown MyGeometry, struct Unknown& PointerEvent, struct Unknown& Operation); // Function U.U.OnDragDetected(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnRButtonClick(char& bResult); // Function U.U.OnRButtonClick(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set_BGImage_Brush_1(); // Function U.U.Set_BGImage_Brush_1(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetCarriedList(char& bResult); // Function U.U.ResetCarriedList(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown SetItemImage(); // Function U.U.SetItemImage(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DropAll(); // Function U.U.DropAll(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText GetCount(); // Function U.U.GetCount(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText GetItemName(); // Function U.U.GetItemName(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_2B134E7141F4FDBD4FA7CCAEDA8B0F59(struct Unknown Loaded); // Function U.U.OnLoaded_2B134E7141F4FDBD4FA7CCAEDA8B0F59(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadIconTexture(struct Unknown IconTexture); // Function U.U.AsyncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SlotInfo(); // Function U.U.SlotInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangeWeapons(); // Function U.U.OnChangeWeapons(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function U.U.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetSlotInfo__DelegateSignature(); // Function U.U.SetSlotInfo__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown Image_Selected; // 0x248 (8)
	struct Unknown TextBlock_Selected; // 0x250 (8)
	int32_t PlayerIndex; // 0x258 (4)

	void SetTeamIndex(int32_t PlayerIndex); // Function U.U.SetTeamIndex(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Image_92; // 0x250 (8)
	struct Unknown Image_253; // 0x258 (8)
	struct Unknown Image_774; // 0x260 (8)
	struct Unknown PerkInfo; // 0x268 (44)
	struct Unknown PerkData; // 0x298 (224)
	struct Unknown IconBrush; // 0x378 (136)
	struct Unknown Popup; // 0x400 (8)

	struct Unknown GetColorAndOpacity_1(); // Function U.U.GetColorAndOpacity_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetBG(); // Function U.U.SetBG(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetIcon(); // Function U.U.SetIcon(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPerk(struct Unknown PerkInfo); // Function U.U.SetPerk(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_E4FEEA874F6096BAF3D0FB94F9EE8AAB(struct Unknown Loaded); // Function U.U.OnLoaded_E4FEEA874F6096BAF3D0FB94F9EE8AAB(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadIcon(struct Unknown Image); // Function U.U.AsyncLoadIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function U.U.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Destruct(); // Function U.U.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelInventoryPerkWidget {

public:

	struct Unknown UberGraphFrame; // 0x2E8 (8)
	struct Unknown Anim_Glow; // 0x2F0 (8)
	struct Unknown HideFreeSupply; // 0x2F8 (8)
	struct Unknown ShowFreeSupply; // 0x300 (8)
	struct Unknown LevelUp; // 0x308 (8)
	struct Unknown Ability_Defense; // 0x310 (8)
	struct Unknown Ability_Speed; // 0x318 (8)
	struct Unknown Ability_Power; // 0x320 (8)
	struct Unknown Survive_FadeInOut; // 0x328 (8)
	struct Unknown Anim_LevelUpDefense; // 0x330 (8)
	struct Unknown Anim_LevelUpSpeed; // 0x338 (8)
	struct Unknown Anim_LevelUpPower; // 0x340 (8)
	struct Unknown btn_ItemTree; // 0x348 (8)
	struct Unknown btn_PerkDeckDisabled; // 0x350 (8)
	struct Unknown btn_PerkDeckDisabled_2; // 0x358 (8)
	struct Unknown btn_PerkDeckEnabled; // 0x360 (8)
	struct Unknown btn_PerkDeckEnabled_2; // 0x368 (8)
	struct Unknown Canvas_BG; // 0x370 (8)
	struct Unknown Canvas_ChangeClass; // 0x378 (8)
	struct Unknown Canvas_ChangeDisable; // 0x380 (8)
	struct Unknown Canvas_ChangeDisable_2; // 0x388 (8)
	struct Unknown Canvas_ChangeEnable; // 0x390 (8)
	struct Unknown Canvas_ChangeEnable_2; // 0x398 (8)
	struct Unknown Canvas_ChangeSupply; // 0x3A0 (8)
	struct Unknown Canvas_LevelupEffect; // 0x3A8 (8)
	struct Unknown Canvas_Main; // 0x3B0 (8)
	struct Unknown Canvas_Perk; // 0x3B8 (8)
	struct Unknown Canvas_SupplyButton; // 0x3C0 (8)
	struct Unknown Canvas_UltimateEffect; // 0x3C8 (8)
	struct Unknown Canvas_UltimateLightEffect; // 0x3D0 (8)
	struct Unknown HorizontalBox_300; // 0x3D8 (8)
	struct Unknown HorizontalBox_303; // 0x3E0 (8)
	struct Unknown HorizontalBox_Stat; // 0x3E8 (8)
	struct Unknown HorizontalBox_UnlockLevel; // 0x3F0 (8)
	struct Unknown Image; // 0x3F8 (8)
	struct Unknown Image_5; // 0x400 (8)
	struct Unknown Image_86; // 0x408 (8)
	struct Unknown Image_126; // 0x410 (8)
	struct Unknown Image_163; // 0x418 (8)
	struct Unknown Image_180; // 0x420 (8)
	struct Unknown Image_200; // 0x428 (8)
	struct Unknown Image_203; // 0x430 (8)
	struct Unknown Image_222; // 0x438 (8)
	struct Unknown Image_384; // 0x440 (8)
	struct Unknown Image_387; // 0x448 (8)
	struct Unknown Image_388; // 0x450 (8)
	struct Unknown Image_389; // 0x458 (8)
	struct Unknown Image_485; // 0x460 (8)
	struct Unknown Image_571; // 0x468 (8)
	struct Unknown Image_1098; // 0x470 (8)
	struct Unknown Image_1100; // 0x478 (8)
	struct Unknown Image_1104; // 0x480 (8)
	struct Unknown Image_Cycle; // 0x488 (8)
	struct Unknown Image_Cycle_2; // 0x490 (8)
	struct Unknown IMG_ClassIcon; // 0x498 (8)
	struct Unknown IMG_PerkDeckIcon; // 0x4A0 (8)
	struct Unknown IMG_Supply; // 0x4A8 (8)
	struct Unknown IMG_UltimatedSkill; // 0x4B0 (8)
	struct Unknown InvalidationBox_1; // 0x4B8 (8)
	struct Unknown KeyImageWidget; // 0x4C0 (8)
	struct Unknown NotEnoughGold; // 0x4C8 (8)
	struct Unknown Over_Ultimate; // 0x4D0 (8)
	struct Unknown Overlay_UltimateKey; // 0x4D8 (8)
	struct Unknown Spacer_251; // 0x4E0 (8)
	struct Unknown T_ClassName; // 0x4E8 (8)
	struct Unknown T_Defense; // 0x4F0 (8)
	struct Unknown T_DefenseAnim; // 0x4F8 (8)
	struct Unknown T_Power; // 0x500 (8)
	struct Unknown T_PowerAnim; // 0x508 (8)
	struct Unknown T_Speed; // 0x510 (8)
	struct Unknown T_SpeedAnim; // 0x518 (8)
	struct Unknown T_UltimateName; // 0x520 (8)
	struct Unknown T_UnlockLevel; // 0x528 (8)
	struct Unknown T_UnlockLevel2; // 0x530 (8)
	struct Unknown T_WeaponName; // 0x538 (8)
	struct Unknown TextBlock_2; // 0x540 (8)
	struct Unknown TextBlock_3; // 0x548 (8)
	struct Unknown TextBlock_4; // 0x550 (8)
	struct Unknown TextBlock_9; // 0x558 (8)
	struct Unknown TextBlock_ClassLevel; // 0x560 (8)
	struct Unknown TextBlock_Count_Blue; // 0x568 (8)
	struct Unknown TextBlock_Count_Green; // 0x570 (8)
	struct Unknown TextBlock_Count_Red; // 0x578 (8)
	struct Unknown TextBlock_Defense; // 0x580 (8)
	struct Unknown TextBlock_Power; // 0x588 (8)
	struct Unknown TextBlock_Price; // 0x590 (8)
	struct Unknown TextBlock_Price_2; // 0x598 (8)
	struct Unknown TextBlock_Select; // 0x5A0 (8)
	struct Unknown TextBlock_Select_2; // 0x5A8 (8)
	struct Unknown TextBlock_Speed; // 0x5B0 (8)
	struct Unknown TextBlock_SurviveMessage01; // 0x5B8 (8)
	struct Unknown TextBlock_SurviveMessage02; // 0x5C0 (8)
	struct Unknown TextBlock_UltimateDesc; // 0x5C8 (8)
	struct Unknown Title; // 0x5D0 (8)
	struct Unknown UltiLight_001; // 0x5D8 (8)
	struct Unknown UltiLight_002; // 0x5E0 (8)
	struct Unknown UltiLight_003; // 0x5E8 (8)
	struct Unknown U; // 0x5F0 (8)
	struct Unknown U_2; // 0x5F8 (8)
	struct Unknown U_3; // 0x600 (8)
	struct Unknown U_4; // 0x608 (8)
	struct Unknown U_5; // 0x610 (8)
	struct Unknown U_6; // 0x618 (8)
	struct Unknown U_7; // 0x620 (8)
	struct Unknown U_8; // 0x628 (8)
	struct Unknown U_9; // 0x630 (8)
	struct Unknown VB_Health; // 0x638 (8)
	struct Unknown VB_Power; // 0x640 (8)
	struct Unknown VB_Speed; // 0x648 (8)
	struct Unknown VerticalBox_Blue; // 0x650 (8)
	struct Unknown VerticalBox_Green; // 0x658 (8)
	struct Unknown VerticalBox_Red; // 0x660 (8)
	struct Unknown WidgetSwitcher_ChangeClass; // 0x668 (8)
	struct Unknown WidgetSwitcher_ChangeSupply; // 0x670 (8)
	struct Unknown WidgetSwitcher_TreeAndClass; // 0x678 (8)
	struct Unknown WidgetSwitcher_Ultimate; // 0x680 (8)
	struct FName CurrentPerkDeckName; // 0x688 (8)
	struct TArray<Unknown> CurrentPerkInfos; // 0x690 (16)
	struct FName ExpertWeaponKey; // 0x6A0 (8)
	struct TMap<Unknown, Unknown> CurrentPerkCells; // 0x6A8 (80)
	int32_t PerkMode; // 0x6F8 (4)
	struct Unknown HoverWidget; // 0x700 (8)
	int32_t PowerValue; // 0x708 (4)
	struct Unknown TimerHandle_Power; // 0x710 (8)
	int32_t SpeedValue; // 0x718 (4)
	struct Unknown TimerHandle_Speed; // 0x720 (8)
	int32_t DefenseValue; // 0x728 (4)
	struct Unknown TimerHandle_Defense; // 0x730 (8)
	char bPlayAbilityCountSoundStart : 0; // 0x738 (1)
	char bPlayAbilityCountSoundEnd : 0; // 0x739 (1)
	struct Unknown LevelUpSound; // 0x740 (8)
	char EnableSupplyBtn : 0; // 0x748 (1)
	struct Unknown FreeSupplyTimer; // 0x750 (8)
	struct Unknown NotEnoughtGoldTimer; // 0x758 (8)
	struct TArray<Unknown> GainPerkPopups; // 0x760 (16)
	char IsPlayingUltimateSound : 0; // 0x770 (1)
	int32_t LastLevel; // 0x774 (4)
	struct Unknown PerkDeckClassInfo; // 0x778 (40)

	void SequenceEvent__ENTRYPOINTU_2(); // Function U.U.SequenceEvent__ENTRYPOINTU_2(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_1(); // Function U.U.SequenceEvent__ENTRYPOINTU_1(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetEnabledInvalidationbox(char Enabled); // Function U.U.SetEnabledInvalidationbox(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetUltimateSound(); // Function U.U.ResetUltimateSound(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddGainPerkPopup(struct Unknown PerkInfo, int32_t CurrentLevel, int32_t LastLevel); // Function U.U.AddGainPerkPopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateInvalidationbox(); // Function U.U.UpdateInvalidationbox(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangedToggleType(enum class Unknow ToggleType); // Function U.U.OnChangedToggleType(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnBattleRoyaleStateChanged(enum class Unknow PreviousState, enum class Unknow CurrentState); // Function U.U.OnBattleRoyaleStateChanged(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateStatsInfo(); // Function U.U.UpdateStatsInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetUltimateSkillKeyIcon(struct TArray<Unknown>& Type); // Function U.U.SetUltimateSkillKeyIcon(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayAbilityCountSoundEnd(); // Function U.U.PlayAbilityCountSoundEnd(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayAbilityCountSoundStart(); // Function U.U.PlayAbilityCountSoundStart(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowStatusHovered(struct Unknown InHoveredWidget); // Function U.U.ShowStatusHovered(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetAbilityAnimation(struct Unknown& Handle, int32_t Value, struct Unknown Animation, struct FString FunctionName, int32_t Index); // Function U.U.SetAbilityAnimation(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitAnimation(); // Function U.U.InitAnimation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DefenseCountAnimation(); // Function U.U.DefenseCountAnimation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SpeedCountAnimation(); // Function U.U.SpeedCountAnimation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PowerCountAnimation(); // Function U.U.PowerCountAnimation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlaySoundBonusLevelUp(); // Function U.U.PlaySoundBonusLevelUp(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlaySoundTimeBonus(); // Function U.U.PlaySoundTimeBonus(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetPositionTargetPerk(enum class Unknow PerkSlot, int32_t PerkIndex, char& Result, struct Unknown& Position); // Function U.U.GetPositionTargetPerk(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetSlotAndIndexTargetPerk(struct FName TargetPerkName, char& HasPerk, enum class Unknow& PerkSlot, int32_t& PerkIndex); // Function U.U.GetSlotAndIndexTargetPerk(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddUltimateSkillUnlockEffect(int32_t CurrentLevel); // Function U.U.AddUltimateSkillUnlockEffect(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetPerkCells(); // Function U.U.ResetPerkCells(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetClassLevelText(); // Function U.U.SetClassLevelText(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PerkLevelUpEffect(struct Unknown PerkInfo, int32_t CurrentLevel); // Function U.U.PerkLevelUpEffect(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPerkdeckWidget(char State); // Function U.U.SetPerkdeckWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowUltimatePerk(); // Function U.U.ShowUltimatePerk(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayStatsLevelUpAnim(struct Unknown IncreasedAbility); // Function U.U.PlayStatsLevelUpAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayLevelTextAnim(); // Function U.U.PlayLevelTextAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckUltimateOpen(int32_t CurrentLevel); // Function U.U.CheckUltimateOpen(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PerkLevelUp(struct Unknown PerkInfo, int32_t CurrentLevel, int32_t LastLevel); // Function U.U.PerkLevelUp(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetUltimateSkillInfo(char UseLocalPlayerInfo, char IsMaxLevel); // Function U.U.SetUltimateSkillInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPriceFontColor(); // Function U.U.SetPriceFontColor(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText Get_TextBlock_Price_Text_1(); // Function U.U.Get_TextBlock_Price_Text_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CreatePerkDeck(char UseLocalPlayerInfo, char IsMaxLevel); // Function U.U.CreatePerkDeck(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPerks(struct Unknown HoverWidget, char bUseLocalPlayerInfo, char bMaxLevel, char bPerkDeckMode, struct Unknown PerkDeckClassInfo); // Function U.U.SetPerks(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_99DDE97542548A0CC17B5FBAD209C3DD(struct Unknown Loaded); // Function U.U.OnLoaded_99DDE97542548A0CC17B5FBAD209C3DD(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_4F86CE894B71E485811BFEA8F94AD46E(struct Unknown Loaded); // Function U.U.OnLoaded_4F86CE894B71E485811BFEA8F94AD46E(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_9E0A9EF44F73119D77D7119DEA0EF67A(struct Unknown Loaded); // Function U.U.OnLoaded_9E0A9EF44F73119D77D7119DEA0EF67A(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Destruct(); // Function U.U.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadIcon(struct Unknown Image); // Function U.U.AsyncLoadIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncCohIcon(struct Unknown Image); // Function U.U.AsyncCohIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayReadyGivePerk(); // Function U.U.PlayReadyGivePerk(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StopReadyGivePerk(); // Function U.U.StopReadyGivePerk(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncClassIcon(struct Unknown Image); // Function U.U.AsyncClassIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AbilityPowerAnimationFinished(); // Function U.U.AbilityPowerAnimationFinished(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AbilitySpeedAnimationFinished(); // Function U.U.AbilitySpeedAnimationFinished(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void LevelUpAnimationFinished(); // Function U.U.LevelUpAnimationFinished(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayKillGivePerk(int32_t KillCount); // Function U.U.PlayKillGivePerk(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnHoveredWidget(struct Unknown HoveredWidget); // Function U.U.OnHoveredWidget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_PerkDeck_K2Node_Com(); // Function U.U.BndEvt__btn_PerkDeck_K2Node_Com(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AbilityDefenseAnimationFinished(); // Function U.U.AbilityDefenseAnimationFinished(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_PerkDeck_K2Node_Com(); // Function U.U.BndEvt__btn_PerkDeck_K2Node_Com(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_PerkDeck_K2Node_Com(); // Function U.U.BndEvt__btn_PerkDeck_K2Node_Com(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_PerkDeckDisabled_K2Node_Com(); // Function U.U.BndEvt__btn_PerkDeckDisabled_K2Node_Com(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_PerkDeckEnabled_1_K2(); // Function U.U.BndEvt__btn_PerkDeckEnabled_1_K2(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (enum class Unknow PrevState, enum class Unknow CurrentState); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckFreeSupply(char IsInventoryOpen); // Function U.U.CheckFreeSupply(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StartUltimateAnim(); // Function U.U.StartUltimateAnim(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateUnlockLevel(int32_t NewLevel); // Function U.U.UpdateUnlockLevel(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_RefreshPerkDeck(); // Function U.U.K2_RefreshPerkDeck(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetEnoughGold(char IsEnough); // Function U.U.SetEnoughGold(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown RichTextBlock_52; // 0x250 (8)
	struct Unknown DefaultTextStyle; // 0x258 (616)
	struct FText TextString; // 0x4C0 (24)

	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown Complete; // 0x248 (8)
	struct Unknown Image_161; // 0x250 (8)
	struct Unknown WidgetSwitcher_2; // 0x258 (8)
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown WrapBox_Main; // 0x250 (8)
	struct Unknown DefaultTextStyle; // 0x258 (616)
	struct FText TextString; // 0x4C0 (24)
	struct Unknown Game; // 0x4D8 (8)
	char HorizontalAlignment; // 0x4E0 (1)
	float KeyImageScale; // 0x4E4 (4)

	void ParseString(struct FString InputString); // Function U.U.ParseString(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ParseText(struct FString Inputtext); // Function U.U.ParseText(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ParseSpace(struct FString TargetString, struct FString PreString, struct FString PostString); // Function U.U.ParseSpace(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetText(struct FText Inputtext); // Function U.U.SetText(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetAlignment(char Alignment); // Function U.U.SetAlignment(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelScenarioWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Ani_TutorialComplete_FadeOut; // 0x250 (8)
	struct Unknown Ani_TutorialComplete; // 0x258 (8)
	struct Unknown Idle; // 0x260 (8)
	struct Unknown CanvasPanel_1; // 0x268 (8)
	struct Unknown U; // 0x270 (8)

	enum class Unknow GetVisibility_1(); // Function U.U.GetVisibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Finished_1CB7927F4A56CBA0CBA6E698E86EC64F(); // Function U.U.Finished_1CB7927F4A56CBA0CBA6E698E86EC64F(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Finished_619E7E41423DCBE2E8D2AC87D77B76F6(); // Function U.U.Finished_619E7E41423DCBE2E8D2AC87D77B76F6(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnUpdateScenarioQuest(struct Unknown& QuestInfo); // Function U.U.OnUpdateScenarioQuest(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnStartScenarioQuest(struct Unknown& QuestInfo); // Function U.U.OnStartScenarioQuest(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnStopScenarioQuest(struct Unknown& QuestInfo); // Function U.U.OnStopScenarioQuest(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnEndScenario(); // Function U.U.OnEndScenario(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelConversationWidget {

public:

	struct Unknown UberGraphFrame; // 0x258 (8)
	struct Unknown First; // 0x260 (8)
	struct Unknown Hide; // 0x268 (8)
	struct Unknown Show; // 0x270 (8)
	struct Unknown Idle; // 0x278 (8)
	struct Unknown Bg; // 0x280 (8)
	struct Unknown Bg_2; // 0x288 (8)
	struct Unknown Bg_3; // 0x290 (8)
	struct Unknown Button_407; // 0x298 (8)
	struct Unknown Image; // 0x2A0 (8)
	struct Unknown Image_2; // 0x2A8 (8)
	struct Unknown Image_55; // 0x2B0 (8)
	struct Unknown Image_340; // 0x2B8 (8)
	struct Unknown Overlay_Base; // 0x2C0 (8)
	struct Unknown TextBlock_Message; // 0x2C8 (8)
	struct Unknown TextBlock_SpeakerName; // 0x2D0 (8)
	struct Unknown U; // 0x2D8 (8)
	struct Unknown WidgetSwitcher_Face; // 0x2E0 (8)
	struct Unknown SentenceData; // 0x2E8 (176)

	void Finished_F3AEE8B3477DC5B8B5A3EA8301B8E940(); // Function U.U.Finished_F3AEE8B3477DC5B8B5A3EA8301B8E940(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowSentense(struct Unknown& SentenceData); // Function U.U.ShowSentense(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideSentense(); // Function U.U.HideSentense(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_406_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_406_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Anim_TextBg; // 0x250 (8)
	struct Unknown HorizontalBox_Damage; // 0x258 (8)
	struct Unknown Image_145; // 0x260 (8)
	struct Unknown Image_155; // 0x268 (8)
	struct Unknown T_StatName; // 0x270 (8)
	struct Unknown T_Value; // 0x278 (8)
	struct FText Text_StatName; // 0x280 (24)

	void SetStatValue(int32_t Type, float Value); // Function U.U.SetStatValue(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetStatName(struct FString NewParam); // Function U.U.SetStatName(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PreConstruct(char IsDesignTime); // Function U.U.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Canvas_Main; // 0x250 (8)
	struct Unknown CB_DrawDeathPosition; // 0x258 (8)
	struct Unknown CB_DrawFireDirection; // 0x260 (8)
	struct Unknown CB_DrawHitted; // 0x268 (8)
	struct Unknown CB_DrawPersonalSupplyBox; // 0x270 (8)
	struct Unknown CB_TransportDropBox; // 0x278 (8)
	struct Unknown ReplayController; // 0x280 (8)
	struct Unknown MainWidget; // 0x288 (8)
	struct Unknown PlayerHUD; // 0x290 (8)

	void Init(); // Function U.U.Init(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__CB_DrawFireDirection_K2Node_Comone(char bIsChecked); // Function U.U.BndEvt__CB_DrawFireDirection_K2Node_Comone(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__CB_DrawHitted_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function U.U.BndEvt__CB_DrawHitted_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__CB_DrawDeathPosition_K2Node_Comone(char bIsChecked); // Function U.U.BndEvt__CB_DrawDeathPosition_K2Node_Com(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__CB_DrawPersonalSupplyBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function U.U.BndEvt__CB_DrawPersonalSupplyBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__CB_TransportDropBox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function U.U.BndEvt__CB_TransportDropBox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelReplayTimelineWidget {

public:

	struct Unknown UberGraphFrame; // 0x360 (8)
	struct Unknown Bg; // 0x368 (8)
	struct Unknown Border_Timeline; // 0x370 (8)
	struct Unknown Border_TimeToGo; // 0x378 (8)
	struct Unknown BT_FreeCam; // 0x380 (8)
	struct Unknown BT_ReplayPause; // 0x388 (8)
	struct Unknown BT_ReplayResume; // 0x390 (8)
	struct Unknown BT_SpeedDown; // 0x398 (8)
	struct Unknown BT_SpeedUp; // 0x3A0 (8)
	struct Unknown BT_TimelineScaleDown; // 0x3A8 (8)
	struct Unknown BT_TimelineScaleUp; // 0x3B0 (8)
	struct Unknown Canvas_EventMarkers; // 0x3B8 (8)
	struct Unknown Chk_ShowKill; // 0x3C0 (8)
	struct Unknown Chk_ShowKnockout; // 0x3C8 (8)
	struct Unknown Chk_ShowMyKill; // 0x3D0 (8)
	struct Unknown Chk_ShowMyKnockout; // 0x3D8 (8)
	struct Unknown Chk_ShowMyResuscitated; // 0x3E0 (8)
	struct Unknown Chk_ShowResuscitated; // 0x3E8 (8)
	struct Unknown ReplayTimelineSlider; // 0x3F0 (8)
	struct Unknown ScrollBox_Timeline; // 0x3F8 (8)
	struct Unknown SizeBox_Timeline; // 0x400 (8)
	struct Unknown Slider_TimelineScale; // 0x408 (8)
	struct Unknown T_CameraType; // 0x410 (8)
	struct Unknown T_CurrentTime; // 0x418 (8)
	struct Unknown T_PlaySpeed; // 0x420 (8)
	struct Unknown T_TimeToGo; // 0x428 (8)
	struct Unknown T_TotalTime; // 0x430 (8)
	float TimelineSizeBoxOffset; // 0x438 (4)
	struct Unknown* Class_EventMarker_Kill; // 0x440 (8)
	struct Unknown* Class_EventMarker_Knockout; // 0x448 (8)
	float LastViewportSize; // 0x450 (4)
	char IsMouseOnBorder : 0; // 0x454 (1)
	struct Unknown* Class_EventMarker_Resuscitated; // 0x458 (8)
	struct Unknown* Class_EventMarker_WhenReported; // 0x460 (8)
	enum class Unknow CameraType; // 0x468 (1)
	char ViewMode; // 0x469 (1)

	void CheckCameraType(); // Function U.U.CheckCameraType(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown GetTimelineToolTipPositionBySlider(struct FString& ToolTipTime); // Function U.U.GetTimelineToolTipPositionBySlider(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTimeToGo(); // Function U.U.SetTimeToGo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckTimeToGo(); // Function U.U.CheckTimeToGo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CalcTimelineScale(char IsUpScale); // Function U.U.CalcTimelineScale(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTimelineToolTipText(struct FString& Text); // Function U.U.SetTimelineToolTipText(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown On_Border_Timeline_MouseLeave_1(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.On_Border_Timeline_MouseLeave_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTickTime(); // Function U.U.SetTickTime(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText Get_T_PlaySpeed_Text_1(); // Function U.U.Get_T_PlaySpeed_Text_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown On_Border_Timeline_MouseM_1(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.On_Border_Timeline_MouseMlas_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown On_Border_Timeline_MouseEnter_1(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.On_Border_Timeline_MouseEnter_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown CreateEventMarker(enum class Unknow killType); // Function U.U.CreateEventMarker(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckChangeViewportSize(); // Function U.U.CheckChangeViewportSize(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetEventMarkersPos(enum class Unknow killType, float TotalTime); // Function U.U.SetEventMarkersPos(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTimelineScaleBoxWidth(); // Function U.U.SetTimelineScaleBoxWidth(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Init(); // Function U.U.Init(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void TogglePauseResumeButton(char PauseResume); // Function U.U.TogglePauseResumeButton(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__BT_ReplayResume_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__BT_ReplayResume_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__BT_ReplayPause_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__BT_ReplayPause_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ChangeCameraTypeDelegate_Event_1(enum class Unknow CameraType, struct FString TargetPlayerName); // Function U.U.ChangeCameraTypeDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__BT_FreeCam_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__BT_FreeCam_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Slider_302_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function U.U.BndEvt__Slider_302_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnReplayJumpCompleteEvent_Event_1(char bSuccess); // Function U.U.OnReplayJumpCompleteEvent_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BPUpdateTimelineScale(); // Function U.U.BPUpdateTimelineScale(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__BT_TimelineScaleDown_K2Node_Com(); // Function U.U.BndEvt__BT_TimelineScaleDown_K2Node_Com(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__BT_TimelineScaleUp_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__BT_TimelineScaleUp_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Chk_ShowKill_K2Node_Com(char bIsChecked); // Function U.U.BndEvt__Chk_ShowKill_K2Node_Com(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Chk_ShowKnockout_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function U.U.BndEvt__Chk_ShowKnockout_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__BT_SpeedDown_K2Node_Com(); // Function U.U.BndEvt__BT_SpeedDown_K2Node_Com(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__BT_SpeedUp_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__BT_SpeedUp_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ScrollBox_Timeline_K2Node_ComponentBoundEvent_11_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Function U.U.BndEvt__ScrollBox_Timeline_K2Node_ComponentBoundEvent_11_OnUserScrolledEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BPUpdateKillEventMarkersPos(enum class Unknow killType, float TotalTime); // Function U.U.BPUpdateKillEventMarkersPos(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnReplayPauseEvent_Event_1(char bPaused); // Function U.U.OnReplayPauseEvent_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ReplayTimelineSlider_K2Node_Com(); // Function U.U.BndEvt__ReplayTimelineSlider_K2Node_Com(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Chk_ShowMyKill_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function U.U.BndEvt__Chk_ShowMyKill_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Chk_ShowMyKnockout_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function U.U.BndEvt__Chk_ShowMyKnockout_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Chk_ShowMyResuscitated_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function U.U.BndEvt__Chk_ShowMyResuscitated_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Chk_ShowResuscitated_K2Node_Com(char bIsChecked); // Function U.U.BndEvt__Chk_ShowResuscitated_K2Node_Com(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ChangeViewModeDelegate_Event_1(char ViewMode); // Function U.U.ChangeViewModeDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown FollowCamGuide; // 0x248 (8)
	struct Unknown FreeCamGuide; // 0x250 (8)
	struct Unknown KeyImageWidget_C_1; // 0x258 (8)
	struct Unknown KeyImageWidget_C_2; // 0x260 (8)
	struct Unknown KeyImageWidget_C_3; // 0x268 (8)
	struct Unknown KeyImageWidget_C_4; // 0x270 (8)
	struct Unknown KeyImageWidget_C_5; // 0x278 (8)
	struct Unknown KeyImageWidget_C_6; // 0x280 (8)
	struct Unknown KeyImageWidget_C_7; // 0x288 (8)
	struct Unknown KeyImageWidget_C_8; // 0x290 (8)
	struct Unknown KeyImageWidget_C_10; // 0x298 (8)
	struct Unknown KeyImageWidget_C_153; // 0x2A0 (8)
	struct Unknown KeyImageWidget_C_154; // 0x2A8 (8)
	struct Unknown KeyImageWidget_C_155; // 0x2B0 (8)
	struct Unknown KeyImageWidget_C_157; // 0x2B8 (8)
	struct Unknown KeyImageWidget_C_158; // 0x2C0 (8)
	struct Unknown KeyImageWidget_C_159; // 0x2C8 (8)
	struct Unknown KeyImageWidget_C_160; // 0x2D0 (8)
	struct Unknown KillCamGuide; // 0x2D8 (8)
	struct Unknown T_Guide; // 0x2E0 (8)
	struct Unknown TextBlock_1; // 0x2E8 (8)
	struct Unknown TextBlock_2; // 0x2F0 (8)
	struct Unknown TextBlock_4; // 0x2F8 (8)
	struct Unknown TextBlock_5; // 0x300 (8)
	struct Unknown TextBlock_6; // 0x308 (8)
	struct Unknown TextBlock_7; // 0x310 (8)
	struct Unknown TextBlock_8; // 0x318 (8)
	struct Unknown TextBlock_9; // 0x320 (8)
	struct Unknown TextBlock_10; // 0x328 (8)
	struct Unknown TextBlock_11; // 0x330 (8)
	struct Unknown TextBlock_13; // 0x338 (8)
	struct Unknown TextBlock_14; // 0x340 (8)
	struct Unknown TextBlock_15; // 0x348 (8)
	struct Unknown TextBlock_16; // 0x350 (8)
	struct Unknown TextBlock_17; // 0x358 (8)
	struct Unknown WidgetSwitcher_132; // 0x360 (8)

	void SetKillCamGuide(); // Function U.U.SetKillCamGuide(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ChangeGuide(enum class Unknow CameraType); // Function U.U.ChangeGuide(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UU {

public:

	struct Unknown UberGraphFrame; // 0x1360 (8)
	struct Unknown Anim_LoopHintMainWeapon; // 0x1368 (8)
	struct Unknown Anim_Material_Get; // 0x1370 (8)
	struct Unknown Anim_Material_Hover; // 0x1378 (8)
	struct Unknown Anim_Upgrade; // 0x1380 (8)
	struct Unknown Anim_Progress; // 0x1388 (8)
	struct Unknown WeaponPerk_fadeIn; // 0x1390 (8)
	struct Unknown Anim_LoopNotifySubWeapon; // 0x1398 (8)
	struct Unknown Anim_StartNotifySubWeapon; // 0x13A0 (8)
	struct Unknown Anim_LoopNotifyMainWeapon; // 0x13A8 (8)
	struct Unknown Anim_StartNotifyMainWeapon; // 0x13B0 (8)
	struct Unknown Ammo01; // 0x13B8 (8)
	struct Unknown Ammo02; // 0x13C0 (8)
	struct Unknown AmmoInfo01; // 0x13C8 (8)
	struct Unknown AmmoInfo02; // 0x13D0 (8)
	struct Unknown Barrel01; // 0x13D8 (8)
	struct Unknown BG01; // 0x13E0 (8)
	struct Unknown BG02; // 0x13E8 (8)
	struct Unknown BorderImage02; // 0x13F0 (8)
	struct Unknown btn_RecipeTree; // 0x13F8 (8)
	struct Unknown ButtStockSlot01; // 0x1400 (8)
	struct Unknown ButtStockSlot02; // 0x1408 (8)
	struct Unknown Canvas_AnimMain; // 0x1410 (8)
	struct Unknown Canvas_AnimMain_Progress; // 0x1418 (8)
	struct Unknown Canvas_AnimMain_Upgrade; // 0x1420 (8)
	struct Unknown Canvas_AnimSub; // 0x1428 (8)
	struct Unknown Choice_BG01; // 0x1430 (8)
	struct Unknown Choice_BG02; // 0x1438 (8)
	struct Unknown GripSlot01; // 0x1440 (8)
	struct Unknown HorizontalBox_Perk; // 0x1448 (8)
	struct Unknown HorizontalBox_Rarity1; // 0x1450 (8)
	struct Unknown HorizontalBox_Rarity2; // 0x1458 (8)
	struct Unknown Image_2; // 0x1460 (8)
	struct Unknown Image_3; // 0x1468 (8)
	struct Unknown Image_5; // 0x1470 (8)
	struct Unknown Image_7; // 0x1478 (8)
	struct Unknown Image_48; // 0x1480 (8)
	struct Unknown Image_85; // 0x1488 (8)
	struct Unknown Image_86; // 0x1490 (8)
	struct Unknown Image_175; // 0x1498 (8)
	struct Unknown Image_202; // 0x14A0 (8)
	struct Unknown Image_212; // 0x14A8 (8)
	struct Unknown Image_214; // 0x14B0 (8)
	struct Unknown Image_217; // 0x14B8 (8)
	struct Unknown Image_219; // 0x14C0 (8)
	struct Unknown Image_234; // 0x14C8 (8)
	struct Unknown Image_356; // 0x14D0 (8)
	struct Unknown Image_369; // 0x14D8 (8)
	struct Unknown Image_371; // 0x14E0 (8)
	struct Unknown Image_372; // 0x14E8 (8)
	struct Unknown Image_682; // 0x14F0 (8)
	struct Unknown Image_805; // 0x14F8 (8)
	struct Unknown Image_807; // 0x1500 (8)
	struct Unknown Image_808; // 0x1508 (8)
	struct Unknown Image_809; // 0x1510 (8)
	struct Unknown Image_1071; // 0x1518 (8)
	struct Unknown Image_Bindable; // 0x1520 (8)
	struct Unknown Image_Supply; // 0x1528 (8)
	struct Unknown ImageAmmo01; // 0x1530 (8)
	struct Unknown ImageAmmo02; // 0x1538 (8)
	struct Unknown Info01; // 0x1540 (8)
	struct Unknown Info02; // 0x1548 (8)
	struct Unknown Line01; // 0x1550 (8)
	struct Unknown Line02; // 0x1558 (8)
	struct Unknown MagazineSlot01; // 0x1560 (8)
	struct Unknown MagazineSlot02; // 0x1568 (8)
	struct Unknown MainWeaponSlot; // 0x1570 (8)
	struct Unknown MuzzleDeviceSlot01; // 0x1578 (8)
	struct Unknown MuzzleDeviceSlot02; // 0x1580 (8)
	struct Unknown Overlay_2; // 0x1588 (8)
	struct Unknown Perk01; // 0x1590 (8)
	struct Unknown Perk01_Sub; // 0x1598 (8)
	struct Unknown Perk02; // 0x15A0 (8)
	struct Unknown Perk02_Sub; // 0x15A8 (8)
	struct Unknown Perk03; // 0x15B0 (8)
	struct Unknown Perk03_Sub; // 0x15B8 (8)
	struct Unknown Perk04; // 0x15C0 (8)
	struct Unknown Perk04_Sub; // 0x15C8 (8)
	struct Unknown SightSlot01; // 0x15D0 (8)
	struct Unknown SightSlot02; // 0x15D8 (8)
	struct Unknown SubWeaponSlot; // 0x15E0 (8)
	struct Unknown TextBlock_1; // 0x15E8 (8)
	struct Unknown TextBlock_Range01; // 0x15F0 (8)
	struct Unknown TopNameBG01; // 0x15F8 (8)
	struct Unknown TopNameBG02; // 0x1600 (8)
	struct Unknown U; // 0x1608 (8)
	struct Unknown U; // 0x1610 (8)
	struct Unknown U_2; // 0x1618 (8)
	struct Unknown U_3; // 0x1620 (8)
	struct Unknown U; // 0x1628 (8)
	struct Unknown WeaponImage01; // 0x1630 (8)
	struct Unknown WeaponImage02; // 0x1638 (8)
	struct Unknown WeaponIndex01; // 0x1640 (8)
	struct Unknown WeaponIndex02; // 0x1648 (8)
	struct Unknown WeaponName01; // 0x1650 (8)
	struct Unknown WeaponName02; // 0x1658 (8)
	struct Unknown WeaponTitle01; // 0x1660 (8)
	struct Unknown WeaponTitle02; // 0x1668 (8)
	struct Unknown WidgetSwitcher_1; // 0x1670 (8)
	struct Unknown WidgetSwitcher_Rarity; // 0x1678 (8)
	struct Unknown WidgetSwitcher_SpecialWeapon; // 0x1680 (8)
	enum class Unknow WeaponType; // 0x1688 (1)
	int32_t SlotIndex; // 0x168C (4)
	struct Unknown WeaponBase; // 0x1690 (8)
	char bCanEquip : 0; // 0x1698 (1)
	struct TMap<Unknown, Unknown> WeaponAttachmentSlots01; // 0x16A0 (80)
	struct TMap<Unknown, Unknown> WeaponAttachmentSlots02; // 0x16F0 (80)
	float WeaponIconHeight; // 0x1740 (4)
	char bHover : 0; // 0x1744 (1)
	struct Unknown HoverWidget; // 0x1748 (8)
	int32_t NotifyAnimLoopNum; // 0x1750 (4)

	void IsEquipped(char& Return); // Function U.U.IsEquipped(Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckNeedEmptyPerkWeaponTooltip(char& NewParam); // Function U.U.CheckNeedEmptyPerkWeaponTooltip(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowStatupAnim(struct Unknown& StatParams); // Function U.U.ShowStatupAnim(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetMaterialIcon(); // Function U.U.SetMaterialIcon(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	enum class Unknow Get_btn_RecipeTree_Visibility_1(); // Function U.U.Get_btn_RecipeTree_Visibility_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckSpecialWeapon(); // Function U.U.CheckSpecialWeapon(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetRarityInfo(struct Unknown ItemInfo); // Function U.U.SetRarityInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetHoverWidgetRef(); // Function U.U.SetHoverWidgetRef(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DisibleEquiped(); // Function U.U.DisibleEquiped(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitWeaponSlot(); // Function U.U.InitWeaponSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DragStart_Imp(struct Unknown& DragDropOp); // Function U.U.DragStart_Imp(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverSelectReset(); // Function U.U.HoverSelectReset(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsDropableOnCarried(char& out_Result); // Function U.U.IsDropableOnCarried(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UnEquip(); // Function U.U.UnEquip(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverEquipAttachment(enum class Unknow WeaponAttachmentType); // Function U.U.HoverEquipAttachment(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DragSelectSlot(enum class Unknow WeaponType, char& bReault); // Function U.U.DragSelectSlot(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsDraging(char& bResult); // Function U.U.IsDraging(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetHoverAllSlot(char& bResult); // Function U.U.ResetHoverAllSlot(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetHoverWeaponSlotList(char& bResult); // Function U.U.ResetHoverWeaponSlotList(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragDetected(struct Unknown MyGeometry, struct Unknown& PointerEvent, struct Unknown& Operation); // Function U.U.OnDragDetected(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DragFindAttachItemSlot(struct Unknown InventoryItemInfo, char& bResult); // Function U.U.DragFindAttachItemSlot(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DragFindEquipAttachment(enum class Unknow WeaponAttachmentType); // Function U.U.DragFindEquipAttachment(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverResetAttachItemSlot(); // Function U.U.HoverResetAttachItemSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverSelectEquipAttachment(enum class Unknow WeaponAttachmentType); // Function U.U.HoverSelectEquipAttachment(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverSelectAttachItemSlot(struct Unknown InventoryItemInfo, char& bResult); // Function U.U.HoverSelectAttachItemSlot(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsMainWeapon(char& bResult); // Function U.U.IsMainWeapon(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnRButtonClick(char& bResult); // Function U.U.OnRButtonClick(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetHoverInfo(); // Function U.U.SetHoverInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText Get_AmmoInfo02_Text_1(); // Function U.U.Get_AmmoInfo02_Text_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText Get_AmmoInfo01_Text_1(); // Function U.U.Get_AmmoInfo01_Text_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText Get_Ammo02_Text_1(); // Function U.U.Get_Ammo02_Text_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText Get_Ammo01_Text_1(); // Function U.U.Get_Ammo01_Text_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetSubWeaponAttachment(); // Function U.U.SetSubWeaponAttachment(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitSubWeaponAttachment(); // Function U.U.InitSubWeaponAttachment(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetMainWeaponAttachment(); // Function U.U.SetMainWeaponAttachment(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitMainWeaponAttachment(); // Function U.U.InitMainWeaponAttachment(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetAvailableWeaponAttachment(enum class Unknow AttachmentType, char& bResult); // Function U.U.GetAvailableWeaponAttachment(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Reset(int32_t SlotIndex); // Function U.U.Reset(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Drop(); // Function U.U.Drop(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetInfo(struct Unknown InventoryWidget, struct Unknown WeaponBaseObject, struct Unknown InventoryItemInfo); // Function U.U.SetInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_12B755EE4F233763D6BD21B48D6176F0(struct Unknown Loaded); // Function U.U.OnLoaded_12B755EE4F233763D6BD21B48D6176F0(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_D1195FCF4E38C6E811F1FCBC38F521B6(struct Unknown Loaded); // Function U.U.OnLoaded_D1195FCF4E38C6E811F1FCBC38F521B6(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function U.U.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Init(int32_t SlotIndex); // Function U.U.Init(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CanEquip(); // Function U.U.CanEquip(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Hover(); // Function U.U.Hover(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragEnter(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDragEnter(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragLeave(struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDragLeave(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SelectEquip(); // Function U.U.SelectEquip(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetHover(); // Function U.U.ResetHover(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetCanEquip(); // Function U.U.ResetCanEquip(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetSelectEquip(); // Function U.U.ResetSelectEquip(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadWeaponIcon(struct Unknown IconTexture); // Function U.U.AsyncLoadWeaponIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadAmmoIcon(struct Unknown IconTexture); // Function U.U.AsyncLoadAmmoIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Event_WeaponInfo(int32_t Idx, int32_t Ammo, int32_t MaxAmmo); // Function U.U.Event_WeaponInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void NotifyMainWeapon(); // Function U.U.NotifyMainWeapon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void NotifySubWeapon(); // Function U.U.NotifySubWeapon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnAnimationFinished(struct Unknown Animation); // Function U.U.OnAnimationFinished(BlueprintCosmetic|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckInventoryRef(); // Function U.U.CheckInventoryRef(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StopNotify(); // Function U.U.StopNotify(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_RecipeTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__btn_RecipeTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CompleteCombine(); // Function U.U.CompleteCombine(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CompleteCombineOnRecipeTree(); // Function U.U.CompleteCombineOnRecipeTree(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverRecipeTree(); // Function U.U.HoverRecipeTree(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnUpdateCastingDelegateEvent(struct Unknown& CastingInfo, float CastingPercent); // Function U.U.OnUpdateCastingDelegateEvent(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown WeaponPerk_ani; // 0x250 (8)
	struct Unknown Image_102; // 0x258 (8)
	struct Unknown Image_254; // 0x260 (8)
	struct Unknown Image_Grade_Color_Line; // 0x268 (8)

	void SetBuffIcon(struct Unknown Icon, int32_t Rarity); // Function U.U.SetBuffIcon(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_F0D528FA4CCA8F059BD99488566476C1(struct Unknown Loaded); // Function U.U.OnLoaded_F0D528FA4CCA8F059BD99488566476C1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadIconTexture(struct Unknown IconTexture); // Function U.U.AsyncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UU {

public:

	struct Unknown UberGraphFrame; // 0x1360 (8)
	struct Unknown Bg; // 0x1368 (8)
	struct Unknown BGImage; // 0x1370 (8)
	struct Unknown BorderImage; // 0x1378 (8)
	struct Unknown EmptyImage; // 0x1380 (8)
	struct Unknown ItemImage; // 0x1388 (8)
	struct Unknown OverImage; // 0x1390 (8)
	struct Unknown SizeBox_1; // 0x1398 (8)
	enum class Unknow WeaponAttachmentType; // 0x13A0 (1)
	int32_t WeaponSlotIndex; // 0x13A4 (4)
	char IsHover : 0; // 0x13A8 (1)
	struct Unknown WeaponSlotWidget; // 0x13B0 (8)
	enum class Unknow WeaponAttachmentUseType; // 0x13B8 (1)
	int32_t SlotMode; // 0x13BC (4)
	struct Unknown HoverWidget; // 0x13C0 (8)

	void SetHoverWidgetRef(); // Function U.U.SetHoverWidgetRef(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetWeaponSlot(struct Unknown WeaponSlot); // Function U.U.SetWeaponSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragDetected(struct Unknown MyGeometry, struct Unknown& PointerEvent, struct Unknown& Operation); // Function U.U.OnDragDetected(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsDraging(char& bResult); // Function U.U.IsDraging(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnRButtonClick(char& bResult); // Function U.U.OnRButtonClick(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UnEquip(); // Function U.U.UnEquip(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Reset(); // Function U.U.Reset(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Drop(); // Function U.U.Drop(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Init(enum class Unknow AttachmentType, enum class Unknow WeaponAttachmentUseType); // Function U.U.Init(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetInfo(int32_t SlotIndex, struct Unknown InventoryWidget, struct Unknown WeaponSlotWidget, struct Unknown InventoryItemInfo); // Function U.U.SetInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_024BD4794308D2A802E72686E4471A98(struct Unknown Loaded); // Function U.U.OnLoaded_024BD4794308D2A802E72686E4471A98(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function U.U.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Hover(); // Function U.U.Hover(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetEquip(); // Function U.U.ResetEquip(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CanEquip(); // Function U.U.CanEquip(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetHover(); // Function U.U.ResetHover(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SelectEquip(); // Function U.U.SelectEquip(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadIconTexture(struct Unknown IconTexture); // Function U.U.AsyncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetSelectEquip(); // Function U.U.ResetSelectEquip(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void MouseLeave(); // Function U.U.MouseLeave(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Image; // 0x250 (8)
	struct Unknown Image_1; // 0x258 (8)
	struct Unknown Image_2; // 0x260 (8)
	struct Unknown Image_3; // 0x268 (8)
	struct Unknown Image_4; // 0x270 (8)
	struct Unknown Image_5; // 0x278 (8)
	struct Unknown Image_6; // 0x280 (8)
	struct Unknown Image_7; // 0x288 (8)
	struct Unknown Image_773; // 0x290 (8)
	struct Unknown WeaponSlot01; // 0x298 (8)
	struct Unknown WeaponSlot02; // 0x2A0 (8)
	struct Unknown WeaponSlot03; // 0x2A8 (8)
	struct Unknown WeaponSlot04; // 0x2B0 (8)
	struct Unknown WeaponSlot05; // 0x2B8 (8)
	struct TMap<Unknown, Unknown> WeaponSlots; // 0x2C0 (80)

	void ShowStatupAnim(struct Unknown& StatParams, enum class Unknow StatType); // Function U.U.ShowStatupAnim(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverRecipeTree(struct FName ItemKey); // Function U.U.HoverRecipeTree(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CompleteItems(struct TArray<Unknown>& ItemKeys); // Function U.U.CompleteItems(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverItems(struct TArray<Unknown>& ItemKeys); // Function U.U.HoverItems(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void NotifyNewWeapon(struct TArray<Unknown>& SlotArray); // Function U.U.NotifyNewWeapon(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckCanEquipRangedWeapon(enum class Unknow WeaponType); // Function U.U.CheckCanEquipRangedWeapon(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetDragFromCarriedSlot(struct Unknown InventoryItemInfo); // Function U.U.SetDragFromCarriedSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetDragFromEquippedSlot(struct Unknown InventoryItemInfo); // Function U.U.SetDragFromEquippedSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetDragFromWeaponSlot(struct Unknown WeaponInfo); // Function U.U.SetDragFromWeaponSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetDragFromProximitySlot(struct Unknown InventoryItemInfo); // Function U.U.SetDragFromProximitySlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DragFindCanEquipAttachItemSlot(struct Unknown InventoryItemInfo); // Function U.U.DragFindCanEquipAttachItemSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverResetEquipAttachItemSlot(); // Function U.U.HoverResetEquipAttachItemSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DragEquipWeaponSlot(char ItemDragSlotType, struct Unknown InventoryItemInfo, struct Unknown WeaponInfo, char& bResult); // Function U.U.DragEquipWeaponSlot(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverResetEquipWeaponSlot(); // Function U.U.HoverResetEquipWeaponSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverSelectAttachItemSlot(struct Unknown InventoryItemInfo, char& bResult); // Function U.U.HoverSelectAttachItemSlot(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverSelectEquipAttachItemSlot(struct Unknown InventoryItemInfo, char& bResult); // Function U.U.HoverSelectEquipAttachItemSlot(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverSelectEquipWeaponSlot(enum class Unknow WeaponType); // Function U.U.HoverSelectEquipWeaponSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetInventoryItemDetailInfo(struct Unknown InventoryItemInfo, char& bResult, struct Unknown& InventoryItemDetailInfo); // Function U.U.GetInventoryItemDetailInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HoverWeaponSlotList(struct Unknown InventoryItemInfo, char& bResult); // Function U.U.HoverWeaponSlotList(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetInventoryComponent(char& Result, struct Unknown& InventoryComponentRef); // Function U.U.GetInventoryComponent(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Reset(); // Function U.U.Reset(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetWeaponSlot(struct Unknown InventoryWidget, int32_t SlotIndex, struct Unknown WeaponBaseObject, struct Unknown InventoryItemInfo); // Function U.U.SetWeaponSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Event_WeaponInfo(int32_t Idx, int32_t Ammo, int32_t MaxAmmo); // Function U.U.Event_WeaponInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Level_Up_New; // 0x250 (8)
	struct Unknown VSkill_Motion; // 0x258 (8)
	struct Unknown FinalitySkill_Motion; // 0x260 (8)
	struct Unknown LEVEL_UP; // 0x268 (8)
	struct Unknown CanvasPanel_294; // 0x270 (8)
	struct Unknown FSkill_Info; // 0x278 (8)
	struct Unknown FSkill_Title; // 0x280 (8)
	struct Unknown HorizontalBox_290; // 0x288 (8)
	struct Unknown Image_1; // 0x290 (8)
	struct Unknown Image_2; // 0x298 (8)
	struct Unknown Image_4; // 0x2A0 (8)
	struct Unknown Image_5; // 0x2A8 (8)
	struct Unknown Image_6; // 0x2B0 (8)
	struct Unknown Image_9; // 0x2B8 (8)
	struct Unknown Image_10; // 0x2C0 (8)
	struct Unknown Image_245; // 0x2C8 (8)
	struct Unknown Image_247; // 0x2D0 (8)
	struct Unknown Image_413; // 0x2D8 (8)
	struct Unknown Image_458; // 0x2E0 (8)
	struct Unknown Image_602; // 0x2E8 (8)
	struct Unknown Image_UltimateGetMat; // 0x2F0 (8)
	struct Unknown IMG_FinalitySkill; // 0x2F8 (8)
	struct Unknown Img_UltimateMaterial; // 0x300 (8)
	struct Unknown Light; // 0x308 (8)
	struct Unknown T_Desc; // 0x310 (8)
	struct Unknown T_Level; // 0x318 (8)
	struct Unknown T_PerkName; // 0x320 (8)
	struct Unknown TextBlock_LevelUpNewText; // 0x328 (8)
	struct Unknown U; // 0x330 (8)
	struct Unknown U; // 0x338 (8)
	struct Unknown VSkill_Info; // 0x340 (8)
	struct Unknown VSkill_Titile; // 0x348 (8)
	struct Unknown VSkillThumbStroke_02; // 0x350 (8)
	struct Unknown WidgetSwitcher_LevelUpInfo; // 0x358 (8)
	struct Unknown Handle_LevelUpEffect; // 0x360 (8)
	float EffectDelay; // 0x368 (4)
	struct TArray<Unknown> PerkInfoQue; // 0x370 (16)
	struct Unknown CurrentPerkInfo; // 0x380 (44)
	struct TArray<Unknown> PerkLevelUpInfo; // 0x3B0 (16)
	struct Unknown PerkLevelUpData; // 0x3C0 (376)
	struct Unknown CurrentPerkData; // 0x538 (224)
	int32_t CurrentLevel; // 0x618 (4)
	char IsAlreadyUnlockedUltimate : 0; // 0x61C (1)
	char CurrentLevelUpInfo; // 0x61D (1)
	struct TArray<Unknown> CurrentLevelQue; // 0x620 (16)
	float CurrentUltimateMaterialValue; // 0x630 (4)
	char UltimateUpdate : 0; // 0x634 (1)
	struct Unknown UltimateMaterialInstance; // 0x638 (8)
	float UltimateAnimTime; // 0x640 (4)
	struct Unknown UltimateGetMaterialInstance; // 0x648 (8)

	void SequenceEvent__ENTRYPOINTU_4(struct Unknown Image_365); // Function U.U.SequenceEvent__ENTRYPOINTU_4(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_3(); // Function U.U.SequenceEvent__ENTRYPOINTU_3(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_2(); // Function U.U.SequenceEvent__ENTRYPOINTU_2(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_1(); // Function U.U.SequenceEvent__ENTRYPOINTU_1(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetInfos(); // Function U.U.ResetInfos(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayLevelAndUtimate(int32_t Level, char bUltimate); // Function U.U.PlayLevelAndUtimate(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	enum class Unknow GetVisibility_2(); // Function U.U.GetVisibility_2(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	enum class Unknow GetVisibility_1(); // Function U.U.GetVisibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RemoveAllEffects(); // Function U.U.RemoveAllEffects(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayLevelUpSound(); // Function U.U.PlayLevelUpSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayCharacterLevelUpEffect(); // Function U.U.PlayCharacterLevelUpEffect(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckUltimateSkill(); // Function U.U.CheckUltimateSkill(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown Get_FinalitySkillThumb_Brush_1(); // Function U.U.Get_FinalitySkillThumb_Brush_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText Get_FSkill_Info_Text_1(); // Function U.U.Get_FSkill_Info_Text_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText Get_FSkill_Title_Text_1(); // Function U.U.Get_FSkill_Title_Text_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText Get_T_Desc_Text_1(); // Function U.U.Get_T_Desc_Text_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText Get_T_PerkName_Text_1(); // Function U.U.Get_T_PerkName_Text_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText GetText_1(); // Function U.U.GetText_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayUltimateSkillAnimation(); // Function U.U.PlayUltimateSkillAnimation(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlaySkillUnlockAnimation(); // Function U.U.PlaySkillUnlockAnimation(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayLevelUpAnimation(); // Function U.U.PlayLevelUpAnimation(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsOverUltimateLevel(char& IsUltimate); // Function U.U.IsOverUltimateLevel(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void LevelUpEffect(); // Function U.U.LevelUpEffect(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StartLevelUpEffect(); // Function U.U.StartLevelUpEffect(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddToQue(struct Unknown PerkInfo, int32_t CurrentLevel); // Function U.U.AddToQue(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayLevelUpPopup(struct Unknown PerkInfo, int32_t CurrentLevel); // Function U.U.PlayLevelUpPopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StartUltimateUpdate(struct Unknown Image_365); // Function U.U.StartUltimateUpdate(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetUltimateUpdate(); // Function U.U.ResetUltimateUpdate(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnAnimationFinished(struct Unknown Animation); // Function U.U.OnAnimationFinished(BlueprintCosmetic|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateUltimateMaterial(); // Function U.U.UpdateUltimateMaterial(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Anim_MoveUp_HUD; // 0x250 (8)
	struct Unknown Anim_MoveRight; // 0x258 (8)
	struct Unknown Anim_MoveUp; // 0x260 (8)
	struct Unknown U; // 0x268 (8)
	struct Unknown U; // 0x270 (8)
	struct Unknown U; // 0x278 (8)
	struct Unknown U; // 0x280 (8)
	struct Unknown U; // 0x288 (8)
	struct Unknown U; // 0x290 (8)
	struct Unknown VerticalBox_Stats; // 0x298 (8)

	void SetStatInfo(struct Unknown& StatupParams, char IsUpAnim); // Function U.U.SetStatInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnAnimationFinished(struct Unknown Animation); // Function U.U.OnAnimationFinished(BlueprintCosmetic|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UU {

public:

	struct Unknown UberGraphFrame; // 0x268 (8)
	struct Unknown SeatIcons; // 0x270 (8)
	struct Unknown WheelIcons; // 0x278 (8)

	void Setup(struct Unknown VehicleInstance); // Function U.U.Setup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Button_Weapon; // 0x250 (8)
	struct Unknown HorizontalBox_Rarity; // 0x258 (8)
	struct Unknown Image_2; // 0x260 (8)
	struct Unknown Image_3; // 0x268 (8)
	struct Unknown Image_4; // 0x270 (8)
	struct Unknown Image_5; // 0x278 (8)
	struct Unknown Image_6; // 0x280 (8)
	struct Unknown Image_7; // 0x288 (8)
	struct Unknown Image_8; // 0x290 (8)
	struct Unknown Image_310; // 0x298 (8)
	struct Unknown Image_Item_Weapon; // 0x2A0 (8)
	struct Unknown Image_New; // 0x2A8 (8)
	struct Unknown T_Name; // 0x2B0 (8)
	struct Unknown WidgetSwitcher_Own; // 0x2B8 (8)
	struct Unknown ParentWidgetRef; // 0x2C0 (8)
	struct Unknown CraftingInfo; // 0x2C8 (296)
	struct TArray<Unknown> CraftMaterialItemIDList; // 0x3F0 (16)
	int32_t CraftMaterialWeaponID; // 0x400 (4)
	char IsOwn : 0; // 0x404 (1)
	char IsOwnAny : 0; // 0x405 (1)
	struct Unknown DefaultImage; // 0x408 (8)
	struct Unknown PressedDefaultImage; // 0x410 (8)
	char IsNew : 0; // 0x418 (1)

	void SetNew(char IsNew); // Function U.U.SetNew(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetButtonEnabled(char Enabled); // Function U.U.SetButtonEnabled(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void MakeCraftMaterialItemIDList(); // Function U.U.MakeCraftMaterialItemIDList(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckOwn(char& OutIsOwn, char& OutIsOwnAny); // Function U.U.CheckOwn(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetWeaponInfo(struct Unknown& CraftingInfo); // Function U.U.SetWeaponInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_01779F6241D23AEE08F8DCBEA1B49997(struct Unknown Loaded); // Function U.U.OnLoaded_01779F6241D23AEE08F8DCBEA1B49997(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadImg(struct Unknown Object); // Function U.U.AsyncLoadImg(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Weapon_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Weapon_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnClickedWeapon(); // Function U.U.OnClickedWeapon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetButtonEnabled(); // Function U.U.ResetButtonEnabled(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Weapon_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Weapon_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Button_96; // 0x250 (8)
	struct Unknown Image; // 0x258 (8)
	struct Unknown Image_193; // 0x260 (8)
	struct Unknown Image_395; // 0x268 (8)
	struct Unknown Image_Arrow_Guide; // 0x270 (8)
	struct Unknown Img_hover; // 0x278 (8)
	struct Unknown Img_Pressed; // 0x280 (8)
	struct Unknown U; // 0x288 (8)
	struct Unknown WidgetSwitcher_263; // 0x290 (8)
	struct FMulticastInlineDelegate EventDispatcher_EndOpen; // 0x298 (16)
	struct Unknown ItemOption; // 0x2A8 (184)
	char IsOpened : 0; // 0x360 (1)
	float CurrentHoverOpacity; // 0x364 (4)
	struct Unknown PressedMaterialInstance; // 0x368 (8)
	float CurrentPressedAnim; // 0x370 (4)
	struct FMulticastInlineDelegate EventDispatcher_StartOpen; // 0x378 (16)

	void SetItemOption(struct Unknown& ItemOption); // Function U.U.SetItemOption(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_95_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_95_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetIsOpened(); // Function U.U.SetIsOpened(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayPressed(); // Function U.U.PlayPressed(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StopPressed(); // Function U.U.StopPressed(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OpenPerk(); // Function U.U.OpenPerk(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_95_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_95_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReversePerk(); // Function U.U.ReversePerk(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EventDispatcher_StartOpen__DelegateSignature(); // Function U.U.EventDispatcher_StartOpen__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EventDispatcher_EndOpen__DelegateSignature(struct Unknown ItemOption); // Function U.U.EventDispatcher_EndOpen__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Canvas_Recipe1; // 0x250 (8)
	struct Unknown Canvas_Recipe2; // 0x258 (8)
	struct Unknown U; // 0x260 (8)
	struct Unknown U_2; // 0x268 (8)
	struct Unknown U_3; // 0x270 (8)
	struct Unknown U_4; // 0x278 (8)
	struct Unknown U_5; // 0x280 (8)
	struct Unknown U_6; // 0x288 (8)
	struct Unknown U_7; // 0x290 (8)
	struct Unknown U_8; // 0x298 (8)
	struct Unknown U_9; // 0x2A0 (8)
	struct Unknown U_10; // 0x2A8 (8)
	struct Unknown U_11; // 0x2B0 (8)
	struct Unknown WidgetSwitcher_68; // 0x2B8 (8)
	struct TArray<Unknown> Recipe_ItemArray; // 0x2C0 (16)
	struct TArray<Unknown> Recipe_ItemArray2; // 0x2D0 (16)
	char HasWeapon : 0; // 0x2E0 (1)
	struct Unknown ArmoryInputRef; // 0x2E8 (8)
	float CurrentOpacity; // 0x2F0 (4)

	void SetOpacity(); // Function U.U.SetOpacity(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckOwn(); // Function U.U.CheckOwn(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitRecipeItemArray(); // Function U.U.InitRecipeItemArray(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetRecipeInfo(int32_t BaseItemID, int32_t MaterialGroupItemID); // Function U.U.SetRecipeInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown U; // 0x250 (8)
	struct Unknown U_2; // 0x258 (8)
	struct Unknown U_3; // 0x260 (8)
	struct Unknown U_4; // 0x268 (8)
	struct Unknown VerticalBox_OptionList; // 0x270 (8)

	void AddOptionList(struct Unknown& ItemOption); // Function U.U.AddOptionList(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetOptionList(struct TArray<Unknown>& OptionIDList); // Function U.U.SetOptionList(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown T_Desc; // 0x248 (8)
	struct Unknown U_3; // 0x250 (8)
	struct Unknown ItemOption; // 0x258 (184)

	void SetItemOption(struct Unknown& ItemOption); // Function U.U.SetItemOption(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown perk_Icon_Scale; // 0x250 (8)
	struct Unknown HorizontalBox_Rarity; // 0x258 (8)
	struct Unknown Image; // 0x260 (8)
	struct Unknown Image_2; // 0x268 (8)
	struct Unknown Image_3; // 0x270 (8)
	struct Unknown Image_4; // 0x278 (8)
	struct Unknown Image_5; // 0x280 (8)
	struct Unknown Image_6; // 0x288 (8)
	struct Unknown Image_7; // 0x290 (8)
	struct Unknown Image_328; // 0x298 (8)
	struct Unknown Img_GradeBG; // 0x2A0 (8)
	struct Unknown Img_Icon; // 0x2A8 (8)
	struct Unknown ItemOptionInfo; // 0x2B0 (184)

	void SequenceEvent__ENTRYPOINTU_1(); // Function U.U.SequenceEvent__ENTRYPOINTU_1(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlaySoundSpread(); // Function U.U.PlaySoundSpread(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetItemOption(struct Unknown& ItemOption); // Function U.U.SetItemOption(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_6CB9F6B747A71C38876DC8AFD4771124(struct Unknown Loaded); // Function U.U.OnLoaded_6CB9F6B747A71C38876DC8AFD4771124(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadImg(struct Unknown Object); // Function U.U.AsyncLoadImg(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayOpenAnim(); // Function U.U.PlayOpenAnim(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Popup_Alpha_Bg_Black; // 0x250 (8)
	struct Unknown btn_OK; // 0x258 (8)
	struct Unknown Image_751; // 0x260 (8)
	struct Unknown Perk_List; // 0x268 (8)
	struct Unknown U; // 0x270 (8)
	struct Unknown U_2; // 0x278 (8)
	struct Unknown U_3; // 0x280 (8)
	struct FMulticastInlineDelegate EventDispatcher_OnClosePerk; // 0x288 (16)

	void SetOptionList(struct TArray<Unknown>& OptionList); // Function U.U.SetOptionList(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__btn_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnAnimationFinished(struct Unknown Animation); // Function U.U.OnAnimationFinished(BlueprintCosmetic|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EventDispatcher_OnClosePerk(); // Function U.U.EventDispatcher_OnClosePerk(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown btn_Cancel; // 0x250 (8)
	struct Unknown btn_Cancel_3; // 0x258 (8)
	struct Unknown btn_OK; // 0x260 (8)
	struct Unknown HorizontalBox_WeaponList; // 0x268 (8)
	struct Unknown Image_68; // 0x270 (8)
	struct Unknown Image_128; // 0x278 (8)
	struct Unknown U; // 0x280 (8)
	struct Unknown U_2; // 0x288 (8)
	struct Unknown U_3; // 0x290 (8)
	struct FMulticastInlineDelegate EventDispatcher_RequestItemCraft; // 0x298 (16)
	struct Unknown SelectedWidget; // 0x2A8 (8)
	struct FMulticastInlineDelegate EventDispatcher_Cancel; // 0x2B0 (16)

	void SetWeaponList(struct TArray<Unknown>& WeaponList, int32_t BaseItemID); // Function U.U.SetWeaponList(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_Reinforce_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__btn_Reinforce_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_Repair_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__btn_Repair_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ChangeSelectedButton(struct Unknown SlotWidget); // Function U.U.ChangeSelectedButton(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_Ok_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSign(); // Function U.U.BndEvt__btn_Ok_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSign(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EventDispatcher_Cancel__DelegateSignature(); // Function U.U.EventDispatcher_Cancel__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EventDispatcher_RequestItemCraft__DelegateSignature(int32_t BaseIndex, struct FString ItemId); // Function U.U.EventDispatcher_RequestItemCraft__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Anim_Show; // 0x250 (8)
	struct Unknown Border; // 0x258 (8)
	struct Unknown Border_51; // 0x260 (8)
	struct Unknown btn_All_OK; // 0x268 (8)
	struct Unknown btn_Close; // 0x270 (8)
	struct Unknown HorizontalBox_CloseButton; // 0x278 (8)
	struct Unknown Image_2; // 0x280 (8)
	struct Unknown U; // 0x288 (8)
	struct Unknown U_2; // 0x290 (8)
	struct Unknown U_3; // 0x298 (8)
	struct Unknown U; // 0x2A0 (8)
	struct Unknown U; // 0x2A8 (8)
	struct Unknown WidgetSwitcher_90; // 0x2B0 (8)
	struct TArray<Unknown> OpenedOptionList; // 0x2B8 (16)

	void OnClosePerkPopup(); // Function U.U.OnClosePerkPopup(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetBlockInput(char bBlock); // Function U.U.SetBlockInput(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StartOpen(); // Function U.U.StartOpen(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckAllOpened(char& AllOpened); // Function U.U.CheckAllOpened(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OpenAllPerk(); // Function U.U.OpenAllPerk(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CreateOpenedPerkPopup(struct TArray<Unknown>& OptionList); // Function U.U.CreateOpenedPerkPopup(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EndOpen(struct Unknown ItemOption); // Function U.U.EndOpen(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddPerkList(struct Unknown& ItemOption); // Function U.U.AddPerkList(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetButtonList(struct TArray<Unknown>& OptionIDList); // Function U.U.SetButtonList(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetWeaponInfo(struct Unknown CraftWeapon); // Function U.U.SetWeaponInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_All_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__btn_All_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetEventCreateOpenedPerkPopup(struct TArray<Unknown>& OptionList); // Function U.U.SetEventCreateOpenedPerkPopup(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_Close_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__btn_Close_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_All_OK_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__btn_All_OK_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown TX; // 0x248 (8)
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelInventoryHoverWidget {

public:

	struct Unknown UberGraphFrame; // 0x280 (8)
	struct Unknown UpArrow; // 0x288 (8)
	struct Unknown FadeIn; // 0x290 (8)
	struct Unknown Ammo_Compare; // 0x298 (8)
	struct Unknown Ammo_Value; // 0x2A0 (8)
	struct Unknown AmmoIcon; // 0x2A8 (8)
	struct Unknown AmmoInfo; // 0x2B0 (8)
	struct Unknown Arrow_01; // 0x2B8 (8)
	struct Unknown Arrow_02; // 0x2C0 (8)
	struct Unknown BuffList; // 0x2C8 (8)
	struct Unknown BuffList_2; // 0x2D0 (8)
	struct Unknown EffectiveRange_Compare; // 0x2D8 (8)
	struct Unknown EffectiveRange_Value; // 0x2E0 (8)
	struct Unknown FiringRate_Compare; // 0x2E8 (8)
	struct Unknown FiringRate_Value; // 0x2F0 (8)
	struct Unknown HorizontalBox_ItemRarity; // 0x2F8 (8)
	struct Unknown HorizontalBox_MaterialRarity; // 0x300 (8)
	struct Unknown HorizontalBox_WeaponRarity; // 0x308 (8)
	struct Unknown Image; // 0x310 (8)
	struct Unknown Image_2; // 0x318 (8)
	struct Unknown Image_3; // 0x320 (8)
	struct Unknown Image_8; // 0x328 (8)
	struct Unknown Image_9; // 0x330 (8)
	struct Unknown Image_10; // 0x338 (8)
	struct Unknown Image_11; // 0x340 (8)
	struct Unknown Image_12; // 0x348 (8)
	struct Unknown Image_13; // 0x350 (8)
	struct Unknown Image_14; // 0x358 (8)
	struct Unknown Image_15; // 0x360 (8)
	struct Unknown Image_16; // 0x368 (8)
	struct Unknown Image_20; // 0x370 (8)
	struct Unknown Image_22; // 0x378 (8)
	struct Unknown Image_23; // 0x380 (8)
	struct Unknown Image_24; // 0x388 (8)
	struct Unknown Image_25; // 0x390 (8)
	struct Unknown Image_26; // 0x398 (8)
	struct Unknown Image_27; // 0x3A0 (8)
	struct Unknown Image_28; // 0x3A8 (8)
	struct Unknown Image_29; // 0x3B0 (8)
	struct Unknown Image_30; // 0x3B8 (8)
	struct Unknown Image_31; // 0x3C0 (8)
	struct Unknown Image_32; // 0x3C8 (8)
	struct Unknown Image_310; // 0x3D0 (8)
	struct Unknown Image_557; // 0x3D8 (8)
	struct Unknown Image_WeaponLock; // 0x3E0 (8)
	struct Unknown Img_MaterialBG; // 0x3E8 (8)
	struct Unknown IMG_MaterialIcon; // 0x3F0 (8)
	struct Unknown IMG_Stat; // 0x3F8 (8)
	struct Unknown ItemBg; // 0x400 (8)
	struct Unknown ItemBg_01; // 0x408 (8)
	struct Unknown ItemBg_02; // 0x410 (8)
	struct Unknown ItemSlot; // 0x418 (8)
	struct Unknown ItemSlot; // 0x420 (8)
	struct Unknown ItemSlot_2; // 0x428 (8)
	struct Unknown ItemSlot; // 0x430 (8)
	struct Unknown ItemSlot_2; // 0x438 (8)
	struct Unknown ItemSlot; // 0x440 (8)
	struct Unknown ItemSlot; // 0x448 (8)
	struct Unknown ItemSlot; // 0x450 (8)
	struct Unknown ItemSlot; // 0x458 (8)
	struct Unknown ItemSlotHover; // 0x460 (8)
	struct Unknown PerkBG; // 0x468 (8)
	struct Unknown PerkImage; // 0x470 (8)
	struct Unknown PerkLevelText; // 0x478 (8)
	struct Unknown PerkName; // 0x480 (8)
	struct Unknown PerkSlotHover; // 0x488 (8)
	struct Unknown PopupHover_2; // 0x490 (8)
	struct Unknown Power_Compare; // 0x498 (8)
	struct Unknown Power_Value; // 0x4A0 (8)
	struct Unknown SizeBox; // 0x4A8 (8)
	struct Unknown SizeBox_7; // 0x4B0 (8)
	struct Unknown SizeBox_ComparingText; // 0x4B8 (8)
	struct Unknown SizeBox_ItemDivide; // 0x4C0 (8)
	struct Unknown Stability_Compare; // 0x4C8 (8)
	struct Unknown Stability_Value; // 0x4D0 (8)
	struct Unknown StatSlotHover; // 0x4D8 (8)
	struct Unknown T_BindPlayerName; // 0x4E0 (8)
	struct Unknown T_Material; // 0x4E8 (8)
	struct Unknown T_MaterialDesc; // 0x4F0 (8)
	struct Unknown T_PerkDescLv1; // 0x4F8 (8)
	struct Unknown T_PerkDescLv2; // 0x500 (8)
	struct Unknown T_PerkDescLv3; // 0x508 (8)
	struct Unknown T_Stat; // 0x510 (8)
	struct Unknown T_StatDesc; // 0x518 (8)
	struct Unknown T_TooltipDesc; // 0x520 (8)
	struct Unknown T_UltimateDesc; // 0x528 (8)
	struct Unknown T_UnlockUltimateLev; // 0x530 (8)
	struct Unknown Text_CombineTarget; // 0x538 (8)
	struct Unknown TextBlock_3; // 0x540 (8)
	struct Unknown TextBlock_4; // 0x548 (8)
	struct Unknown TextBlock_5; // 0x550 (8)
	struct Unknown TextBlock_6; // 0x558 (8)
	struct Unknown UpArrowAni; // 0x560 (8)
	struct Unknown U; // 0x568 (8)
	struct Unknown U_2; // 0x570 (8)
	struct Unknown U; // 0x578 (8)
	struct Unknown U_2; // 0x580 (8)
	struct Unknown U_3; // 0x588 (8)
	struct Unknown U_4; // 0x590 (8)
	struct Unknown VerticalBox_3; // 0x598 (8)
	struct Unknown VerticalBox_BuffList; // 0x5A0 (8)
	struct Unknown VerticalBox_BuffList_2; // 0x5A8 (8)
	struct Unknown VerticalBox_CombineTarget; // 0x5B0 (8)
	struct Unknown VerticalBox_Divide; // 0x5B8 (8)
	struct Unknown VerticalBox_ItemDiv; // 0x5C0 (8)
	struct Unknown VerticalBox_WeaponBindedInfo; // 0x5C8 (8)
	struct Unknown WeaponItemCapacity; // 0x5D0 (8)
	struct Unknown WeaponItemComparingName; // 0x5D8 (8)
	struct Unknown WeaponItemDescription; // 0x5E0 (8)
	struct Unknown WeaponItemImage; // 0x5E8 (8)
	struct Unknown WeaponItemSlot; // 0x5F0 (8)
	struct Unknown WeaponItemSlotHover; // 0x5F8 (8)
	struct Unknown WeaponItemType; // 0x600 (8)
	struct Unknown WeaponLockImage; // 0x608 (8)
	struct Unknown WeaponName; // 0x610 (8)
	struct Unknown WidgetSwitcher; // 0x618 (8)
	struct Unknown WidgetSwitcher_1; // 0x620 (8)
	struct Unknown WidgetSwitcher_2; // 0x628 (8)
	struct Unknown WidgetSwitcher_3; // 0x630 (8)
	struct Unknown WidgetSwitcher_4; // 0x638 (8)
	struct Unknown WidgetSwitcher_Main; // 0x640 (8)
	struct Unknown WidgetSwitcher_PerkUltimate; // 0x648 (8)
	struct Unknown ItemInfo; // 0x650 (152)
	struct Unknown WeaponInfo; // 0x6E8 (2864)
	char bCompare : 0; // 0x1218 (1)
	struct Unknown NormalSlateColor; // 0x1220 (40)
	struct Unknown UpSlateColor; // 0x1248 (40)
	struct Unknown DownSlateColor; // 0x1270 (40)
	struct Unknown UpLinearColor; // 0x1298 (16)
	struct Unknown DownLinearColor; // 0x12A8 (16)
	struct Unknown WeaponObjectRef; // 0x12B8 (8)
	struct Unknown ItemDetailInfo; // 0x12C0 (1168)
	struct Unknown PerkInfo; // 0x1750 (44)
	struct Unknown PerkData; // 0x1780 (224)
	struct FName Ammo; // 0x1860 (8)
	enum class Unknow DragType; // 0x1868 (1)
	struct Unknown HoveredWidget; // 0x1870 (8)
	struct Unknown CurrentShowingWidgetRef; // 0x1878 (8)
	char IsUltimatePerk : 0; // 0x1880 (1)
	struct FText UltimateName; // 0x1888 (24)
	struct Unknown UltimateLinearColor; // 0x18A0 (16)
	struct Unknown UltimateImage; // 0x18B0 (40)
	struct Unknown HoverTimerHandle; // 0x18D8 (8)
	char NeedCheckVisibility : 0; // 0x18E0 (1)
	char IsVisualMode : 0; // 0x18E1 (1)
	char IsRandomPerk : 0; // 0x18E2 (1)
	struct TArray<Unknown> ItemRarityImages; // 0x18E8 (16)
	struct TArray<Unknown> WeaponRarityImages; // 0x18F8 (16)

	float GetDisplayAccuracy(); // Function U.U.GetDisplayAccuracy(Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	float GetDisplayDamage(); // Function U.U.GetDisplayDamage(Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	int32_t GetDisplayEffectiveRange(); // Function U.U.GetDisplayEffectiveRange(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	int32_t GetDisplayLevel(); // Function U.U.GetDisplayLevel(Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	int32_t GetDisplayMagSize(); // Function U.U.GetDisplayMagSize(Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	int32_t GetDisplayRateofFire(); // Function U.U.GetDisplayRateofFire(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetCurrentClassSpecialWeaponPerkData(char& Find, struct Unknown& OutPerkData); // Function U.U.GetCurrentClassSpecialWeaponPerkData(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetCurrentPerkWeaponInfoSlot(); // Function U.U.SetCurrentPerkWeaponInfoSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTooltipSlot(enum class Unknow DragType, struct FText BuffInfo); // Function U.U.SetTooltipSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetVisualMode(); // Function U.U.SetVisualMode(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetBuffSlot(enum class Unknow DragType, struct Unknown BuffInfo); // Function U.U.SetBuffSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetOptionSlot(enum class Unknow DragType, struct Unknown ItemOptionInfo); // Function U.U.SetOptionSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetMaterialSlot(enum class Unknow DragType, struct Unknown MaterialInfo); // Function U.U.SetMaterialSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Hide(); // Function U.U.Hide(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Show(struct Unknown HoverWidget, char ShowItemDivideInfo, char IsRandomPerk, char& SUCCESS); // Function U.U.Show(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	enum class Unknow Get(); // Function U.U.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	enum class Unknow Get(); // Function U.U.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	enum class Unknow Get(); // Function U.U.Get(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	enum class Unknow Get(); // Function U.U.Get(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	enum class Unknow Get(); // Function U.U.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	enum class Unknow Get(); // Function U.U.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetItemWeaponData(struct Unknown& ItemWeaponData); // Function U.U.GetItemWeaponData(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetBuffList(); // Function U.U.SetBuffList(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	enum class Unknow Get(); // Function U.U.Get(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown Get(); // Function U.U.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	enum class Unknow Get(); // Function U.U.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetStatSlot(enum class Unknow StatusType, int32_t Value, enum class Unknow DragType); // Function U.U.SetStatSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown Get_ItemBg_ColorAndOpacity(); // Function U.U.Get_ItemBg_ColorAndOpacity(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown Get(); // Function U.U.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown Get_ItemBg_01_ColorAndOpacity(); // Function U.U.Get_ItemBg_01_ColorAndOpacity(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetUltimatePerkDesc(); // Function U.U.SetUltimatePerkDesc(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown GetSlotColor(); // Function U.U.GetSlotColor(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown Get(); // Function U.U.Get(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	enum class Unknow Get(); // Function U.U.Get(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPerkDesc(int32_t Level); // Function U.U.SetPerkDesc(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPerksDesc(); // Function U.U.SetPerksDesc(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideHover(enum class Unknow DragType, char Force); // Function U.U.HideHover(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown Get(); // Function U.U.Get(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText Get(); // Function U.U.Get(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPerkSlot(struct Unknown NewPerkInfo, enum class Unknow DragType, char IsUltimatePerk); // Function U.U.SetPerkSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText Get_WeaponItemCapacity_Text(); // Function U.U.Get_WeaponItemCapacity_Text(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText Get_ItemSlot(); // Function U.U.Get_ItemSlot(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetItemType(struct FText& ItemTypeText, struct Unknown& ItemTypeTexture); // Function U.U.GetItemType(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText Get(); // Function U.U.Get(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText Get(); // Function U.U.Get(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetWeaponType(enum class Unknow& WeaponType, struct FText& WeaponTypeText, struct Unknown& WeaponTypeTexture); // Function U.U.GetWeaponType(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetEquippedWeaponInfoByWeaponType(enum class Unknow WeaponType, char& bResult, struct Unknown& WeaponInfo); // Function U.U.GetEquippedWeaponInfoByWeaponType(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText Get(); // Function U.U.Get(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText Get(); // Function U.U.Get(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown Get(); // Function U.U.Get(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetCompareAmmo(struct Unknown& SlateColor, struct FText& valueText); // Function U.U.GetCompareAmmo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetCompareFiringRate(struct Unknown& SlateColor, struct FText& valueText); // Function U.U.GetCompareFiringRate(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetCompareStabillity(struct Unknown& SlateColor, struct FText& valueText); // Function U.U.GetCompareStabillity(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetCompareEffectiveRange(struct Unknown& SlateColor, struct FText& valueText); // Function U.U.GetCompareEffectiveRange(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetComparePower(struct Unknown& SlateColor, struct FText& valueText); // Function U.U.GetComparePower(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText Get(); // Function U.U.Get(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText Get(); // Function U.U.Get(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText Get(); // Function U.U.Get(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText Get(); // Function U.U.Get(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText Get(); // Function U.U.Get(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsWeaponTooltip(char& bResult); // Function U.U.IsWeaponTooltip(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsItemTooltip(char& bResult); // Function U.U.IsItemTooltip(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetHoverCanvas(struct Unknown& CanvasPanel, char& bResult); // Function U.U.GetHoverCanvas(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetWeaponItemSlot(struct Unknown WeaponItemInfo, struct Unknown InventoryItemInfo, enum class Unknow DragType, struct FName Ammo); // Function U.U.SetWeaponItemSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText Get(); // Function U.U.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown Get(); // Function U.U.Get(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText Get(); // Function U.U.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetItemSlotInfo(struct Unknown InventoryItem, enum class Unknow DragType); // Function U.U.SetItemSlotInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Show(struct Unknown HoveredWidget, struct Unknown ShowingWidgetRef, char& SUCCESS); // Function U.U.Show(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText GetWeight(); // Function U.U.GetWeight(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText GetDescription(); // Function U.U.GetDescription(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown GetItemImage(); // Function U.U.GetItemImage(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText GetName(); // Function U.U.GetName(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_5CB0A85D41BD4B88F0EAB29CA9DBDD0F(struct Unknown Loaded); // Function U.U.OnLoaded_5CB0A85D41BD4B88F0EAB29CA9DBDD0F(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_A317A42643FCC3E3348F00AF47100D7C(struct Unknown Loaded); // Function U.U.OnLoaded_A317A42643FCC3E3348F00AF47100D7C(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_BF365972409319D445BAF88D964EE916(struct Unknown Loaded); // Function U.U.OnLoaded_BF365972409319D445BAF88D964EE916(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_90972E92490A36CFBC0DC4AD6ACA1B48(struct Unknown Loaded); // Function U.U.OnLoaded_90972E92490A36CFBC0DC4AD6ACA1B48(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadIconTexture(struct Unknown IconTexture); // Function U.U.AsyncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DelayDestroy(float Delay); // Function U.U.DelayDestroy(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadIconObject(struct Unknown IconObject); // Function U.U.AsyncLoadIconObject(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadStatIcon(struct Unknown IconObject); // Function U.U.AsyncLoadStatIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideHoverBP(); // Function U.U.HideHoverBP(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckHoverVisibility(); // Function U.U.CheckHoverVisibility(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadMaterialIcon(struct Unknown IconObject); // Function U.U.AsyncLoadMaterialIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown TextBlock_62; // 0x248 (8)

	void Init(struct FString Str); // Function U.U.Init(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Img_Voice; // 0x250 (8)
	struct Unknown Img_VoiceX; // 0x258 (8)
	struct Unknown SizeBox_2; // 0x260 (8)
	struct Unknown TextBlock; // 0x268 (8)
	struct Unknown WidgetSwitcher_LogOut; // 0x270 (8)
	struct Unknown Timer; // 0x278 (8)

	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (float VolumeOnOff, float Volume); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Destruct(); // Function U.U.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelReplayListWidget {

public:

	struct Unknown UberGraphFrame; // 0x260 (8)
	struct Unknown Button_Delete; // 0x268 (8)
	struct Unknown Button_Keep; // 0x270 (8)
	struct Unknown Button_OldFileDelete; // 0x278 (8)
	struct Unknown Button_Play; // 0x280 (8)
	struct Unknown Button_Refresh; // 0x288 (8)
	struct Unknown DetailInfo; // 0x290 (8)
	struct Unknown HorizontalBox_3; // 0x298 (8)
	struct Unknown HorizontalBox_4; // 0x2A0 (8)
	struct Unknown HorizontalBox_5; // 0x2A8 (8)
	struct Unknown HorizontalBox_01; // 0x2B0 (8)
	struct Unknown HorizontalBox_Version; // 0x2B8 (8)
	struct Unknown Image_1; // 0x2C0 (8)
	struct Unknown Image_483; // 0x2C8 (8)
	struct Unknown Image_1010; // 0x2D0 (8)
	struct Unknown Image_2531; // 0x2D8 (8)
	struct Unknown Image_2533; // 0x2E0 (8)
	struct Unknown Image_2535; // 0x2E8 (8)
	struct Unknown Image_3059; // 0x2F0 (8)
	struct Unknown Image_3229; // 0x2F8 (8)
	struct Unknown Image_3231; // 0x300 (8)
	struct Unknown Image_; // 0x308 (8)
	struct Unknown Image_ClassImage; // 0x310 (8)
	struct Unknown Image_Icon1; // 0x318 (8)
	struct Unknown Image_Icon2; // 0x320 (8)
	struct Unknown Image_Icon3; // 0x328 (8)
	struct Unknown Image_Icon4; // 0x330 (8)
	struct Unknown Image_MapImage; // 0x338 (8)
	struct Unknown Overlay; // 0x340 (8)
	struct Unknown ReplayListBox; // 0x348 (8)
	struct Unknown TextBlock_2388; // 0x350 (8)
	struct Unknown TextBlock_BattleMode; // 0x358 (8)
	struct Unknown TextBlock_BlueZoneMaxPlayerCount; // 0x360 (8)
	struct Unknown TextBlock_BlueZoneTitle; // 0x368 (8)
	struct Unknown TextBlock_ClassLevel1; // 0x370 (8)
	struct Unknown TextBlock_ClassLevel2; // 0x378 (8)
	struct Unknown TextBlock_ClassLevel3; // 0x380 (8)
	struct Unknown TextBlock_ClassLevel4; // 0x388 (8)
	struct Unknown TextBlock_ClassName1; // 0x390 (8)
	struct Unknown TextBlock_ClassName2; // 0x398 (8)
	struct Unknown TextBlock_ClassName3; // 0x3A0 (8)
	struct Unknown TextBlock_ClassName4; // 0x3A8 (8)
	struct Unknown TextBlock_CurrentFileCount; // 0x3B0 (8)
	struct Unknown TextBlock_Damage; // 0x3B8 (8)
	struct Unknown TextBlock_FPP; // 0x3C0 (8)
	struct Unknown TextBlock_Keep; // 0x3C8 (8)
	struct Unknown TextBlock_Kill; // 0x3D0 (8)
	struct Unknown TextBlock_LifeTime; // 0x3D8 (8)
	struct Unknown TextBlock_MapName; // 0x3E0 (8)
	struct Unknown TextBlock_Name1; // 0x3E8 (8)
	struct Unknown TextBlock_Name2; // 0x3F0 (8)
	struct Unknown TextBlock_Name3; // 0x3F8 (8)
	struct Unknown TextBlock_Name4; // 0x400 (8)
	struct Unknown TextBlock_Rank; // 0x408 (8)
	struct Unknown TextBlock_Time; // 0x410 (8)
	struct Unknown TextBlock_TotalPlayerCount; // 0x418 (8)
	struct Unknown TextBlock_TotalSize; // 0x420 (8)
	struct Unknown TextBlock_Weapon1; // 0x428 (8)
	struct Unknown TextBlock_Weapon2; // 0x430 (8)
	struct Unknown TextBlock_Weapon3; // 0x438 (8)
	struct Unknown TextBlock_Weapon4; // 0x440 (8)
	struct Unknown U; // 0x448 (8)
	struct Unknown U_3; // 0x450 (8)
	struct Unknown U_4; // 0x458 (8)
	struct Unknown U_5; // 0x460 (8)
	struct Unknown U_6; // 0x468 (8)
	struct Unknown U_7; // 0x470 (8)
	struct Unknown U_8; // 0x478 (8)
	struct Unknown U_9; // 0x480 (8)
	struct Unknown U_10; // 0x488 (8)
	struct Unknown U_11; // 0x490 (8)
	struct Unknown U_12; // 0x498 (8)
	struct Unknown U_13; // 0x4A0 (8)
	struct Unknown SelectedItemInfo; // 0x4A8 (296)

	void GetBattleModeString(int32_t Idx, struct FText& Str); // Function U.U.GetBattleModeString(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Activate(enum class Unknow Visibility); // Function U.U.Activate(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateKeep(); // Function U.U.UpdateKeep(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateTotalSize(); // Function U.U.UpdateTotalSize(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SelectedListItem(struct Unknown ItemInfo); // Function U.U.SelectedListItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_40713CDC488A1CF8D5EDBDBAEA95837C(struct Unknown Loaded); // Function U.U.OnLoaded_40713CDC488A1CF8D5EDBDBAEA95837C(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_167167B5465D6F8A61D1C89B5E25D686(struct Unknown Loaded); // Function U.U.OnLoaded_167167B5465D6F8A61D1C89B5E25D686(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_2738E50F4D6EF574498E78A88D8D1A93(struct Unknown Loaded); // Function U.U.OnLoaded_2738E50F4D6EF574498E78A88D8D1A93(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_945B406843BC9B1A380D21ACD9EE830F(struct Unknown Loaded); // Function U.U.OnLoaded_945B406843BC9B1A380D21ACD9EE830F(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_F91776604E3BB97FDD80308C25A54425(struct Unknown Loaded); // Function U.U.OnLoaded_F91776604E3BB97FDD80308C25A54425(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_156EB2D94B8C00F9352201B8E4AAD20A(struct Unknown Loaded); // Function U.U.OnLoaded_156EB2D94B8C00F9352201B8E4AAD20A(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateReplayListItems(); // Function U.U.UpdateReplayListItems(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_OldFileDelete_K2Node_Com(); // Function U.U.BndEvt__Button_OldFileDelete_K2Node_Com(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_SizeRefresh_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_SizeRefresh_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Lock_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Lock_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Play_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Play_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Delete_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Delete_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CustomEvent_2(struct Unknown ItemInfo); // Function U.U.CustomEvent_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncIcon1(struct Unknown Image, struct Unknown Target); // Function U.U.AsyncIcon1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncClassIcon(struct Unknown Image, struct Unknown Target); // Function U.U.AsyncClassIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncMapImage(struct Unknown Image, struct Unknown Target); // Function U.U.AsyncMapImage(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncIcon2(struct Unknown Image, struct Unknown Target); // Function U.U.AsyncIcon2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncIcon3(struct Unknown Image, struct Unknown Target); // Function U.U.AsyncIcon3(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncIcon4(struct Unknown Image, struct Unknown Target); // Function U.U.AsyncIcon4(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown AdministratorPanel; // 0x250 (8)
	struct Unknown Cheat; // 0x258 (8)
	struct Unknown Image_Lock; // 0x260 (8)
	struct Unknown Image_Version; // 0x268 (8)
	struct Unknown ReplayListItemBtn_; // 0x270 (8)
	struct Unknown TextBlock_BattleMode; // 0x278 (8)
	struct Unknown TextBlock_Day; // 0x280 (8)
	struct Unknown TextBlock_FileSize; // 0x288 (8)
	struct Unknown TextBlock_FPP; // 0x290 (8)
	struct Unknown TextBlock_MapName; // 0x298 (8)
	struct Unknown TextBlock_Month; // 0x2A0 (8)
	struct Unknown TextBlock_PlayerRank; // 0x2A8 (8)
	struct Unknown TextBlock_PlayTime; // 0x2B0 (8)
	struct Unknown TextBlock_Time; // 0x2B8 (8)
	struct Unknown TextBlock_TotalCount; // 0x2C0 (8)
	struct Unknown TextBlock_TotalPlayerCount; // 0x2C8 (8)
	struct Unknown TextBlock_Year; // 0x2D0 (8)
	struct FMulticastInlineDelegate Click; // 0x2D8 (16)
	struct Unknown ReplayItemInfo; // 0x2E8 (296)
	struct Unknown Style; // 0x410 (632)
	struct Unknown ReplayListWidget; // 0x688 (8)

	void GetBattleModeString(int32_t Idx, struct FText& Str); // Function U.U.GetBattleModeString(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetReportType(struct FText& Type); // Function U.U.GetReportType(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Clicked(); // Function U.U.Clicked(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateKeep(char State); // Function U.U.UpdateKeep(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RevertButtonStyle(); // Function U.U.RevertButtonStyle(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Init(struct Unknown ItemInfo, char Supported, struct Unknown ReplayListWidget); // Function U.U.Init(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ReplayListItemBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__ReplayListItemBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Click__DelegateSignature(struct Unknown ItemInfo); // Function U.U.Click__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UU {

public:

	struct Unknown UberGraphFrame; // 0x268 (8)
	struct Unknown SeatIcons; // 0x270 (8)
	struct Unknown WheelIcons; // 0x278 (8)

	void Setup(struct Unknown VehicleInstance); // Function U.U.Setup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown NewAnimation_2; // 0x250 (8)
	struct Unknown BackgroundBlur_1; // 0x258 (8)
	struct Unknown Blur; // 0x260 (8)
	struct Unknown CanvasPanel_1; // 0x268 (8)
	struct Unknown Focus; // 0x270 (8)
	struct Unknown FocusPanel; // 0x278 (8)
	struct Unknown Lobby; // 0x280 (8)
	struct Unknown U; // 0x288 (8)
	struct Unknown U; // 0x290 (8)
	struct Unknown U; // 0x298 (8)
	struct Unknown U; // 0x2A0 (8)
	struct Unknown U; // 0x2A8 (8)
	struct Unknown U; // 0x2B0 (8)
	struct Unknown NormalTextColor; // 0x2B8 (40)
	struct Unknown HoverTextColor; // 0x2E0 (40)
	struct Unknown LobbyWidgetRef; // 0x308 (8)
	struct Unknown NormalSelectedTextColor; // 0x310 (40)
	struct Unknown HoverSelectedTextColor; // 0x338 (40)
	struct Unknown NormalOptionButtonColor; // 0x360 (16)
	struct Unknown HoverOptionButtonColor; // 0x370 (16)
	struct Unknown MatchingPopupTimerHandle; // 0x380 (8)
	struct Unknown PopupKey; // 0x388 (24)
	char bExitPopupOpen : 0; // 0x3A0 (1)
	char bOptionPopupOpen : 0; // 0x3A1 (1)
	char BattleMode; // 0x3A2 (1)
	struct Unknown LobbyCoherentSprite; // 0x3A8 (8)
	struct Unknown SettingWidget; // 0x3B0 (8)
	struct Unknown LobbySound; // 0x3B8 (8)
	struct FString CurrentTab; // 0x3C0 (16)
	struct Unknown U; // 0x3D0 (8)
	struct Unknown LobbyCoherent2DTexture; // 0x3D8 (8)

	void EndCraft(); // Function U.U.EndCraft(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StartCraft(struct Unknown& CraftWeapon); // Function U.U.StartCraft(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetHoverWidget(struct Unknown& U); // Function U.U.GetHoverWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CreateHoverWidget(); // Function U.U.CreateHoverWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangedArmoryTab(struct FString TabName); // Function U.U.OnChangedArmoryTab(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangedMainTab(struct FString TabName); // Function U.U.OnChangedMainTab(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateMouseWheel(float Delta); // Function U.U.UpdateMouseWheel(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateMouseY(float Delta); // Function U.U.UpdateMouseY(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateMouseX(float Delta); // Function U.U.UpdateMouseX(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void MatchFailedSound(); // Function U.U.MatchFailedSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void MatchStartSound(); // Function U.U.MatchStartSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowReplayList(); // Function U.U.ShowReplayList(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetArmoryInputBox(char Visible); // Function U.U.SetArmoryInputBox(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideSelectGameMode(); // Function U.U.HideSelectGameMode(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowSelectGameMode(); // Function U.U.ShowSelectGameMode(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideBlur(); // Function U.U.HideBlur(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowBlur(); // Function U.U.ShowBlur(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideUI(); // Function U.U.HideUI(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowArmoryUI(struct FString ArmoryResultName); // Function U.U.ShowArmoryUI(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckKeyUp(struct Unknown Input, char& bResult); // Function U.U.CheckKeyUp(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckKeyDown(struct Unknown Input, char& bResult); // Function U.U.CheckKeyDown(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ProcessInput(); // Function U.U.ProcessInput(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ClickExit(); // Function U.U.ClickExit(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ClickOption(); // Function U.U.ClickOption(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StartGame(); // Function U.U.StartGame(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetMatchingPopup(); // Function U.U.ResetMatchingPopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetStartButton(); // Function U.U.ResetStartButton(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowMatchingStart(); // Function U.U.ShowMatchingStart(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideMatchingResult(); // Function U.U.HideMatchingResult(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowMatchingResult(int32_t ErrorCode, struct FString ExtraDescription); // Function U.U.ShowMatchingResult(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetLobbyWidget(struct Unknown LobbyWidget); // Function U.U.SetLobbyWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UIButtonClickSound(); // Function U.U.UIButtonClickSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UIButtonHoverSound(); // Function U.U.UIButtonHoverSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnGenerateWidget_1(struct FString Item); // Function U.U.OnGenerateWidget_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__BT(); // Function U.U.BndEvt__BT(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__BT(); // Function U.U.BndEvt__BT(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__BT(); // Function U.U.BndEvt__BT(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CoherentBind(); // Function U.U.CoherentBind(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMatchingFailed(int32_t ErrorCode, struct FString ExtraDescription); // Function U.U.OnMatchingFailed(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayUIButtonClickSound(); // Function U.U.PlayUIButtonClickSound(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayUIBtuttonOverSound(); // Function U.U.PlayUIBtuttonOverSound(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Exit(); // Function U.U.Exit(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Option(); // Function U.U.Option(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void FinishLoadEvent(struct FString Path, char isMainFrame); // Function U.U.FinishLoadEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (struct FString Path, char isMainFrame); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetReceiveInput(char ReceiveInput); // Function U.U.SetReceiveInput(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Destruct(); // Function U.U.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Image_2; // 0x250 (8)
	struct Unknown Notice; // 0x258 (8)
	struct Unknown WidgetSwitcher_1; // 0x260 (8)

	void SetMessage(struct FText Str); // Function U.U.SetMessage(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown ShowAnim; // 0x248 (8)
	struct Unknown U; // 0x250 (8)
	struct Unknown WidgetSwitcher_53; // 0x258 (8)
	int32_t Gold; // 0x260 (4)
	struct TArray<Unknown> WeaponList; // 0x268 (16)
	struct TArray<Unknown> MaterialList; // 0x278 (16)
	struct TArray<Unknown> ItemWeaponIDList; // 0x288 (16)
	struct TArray<Unknown> LastItemWeaponIDList; // 0x298 (16)
	struct TArray<Unknown> NewWeaponList; // 0x2A8 (16)
	struct TArray<Unknown> MaterialIDList; // 0x2B8 (16)
	struct TArray<Unknown> LastMaterialIDList; // 0x2C8 (16)
	struct TArray<Unknown> NewMaterialList; // 0x2D8 (16)
	struct TArray<Unknown> NewCraftIDList; // 0x2E8 (16)
	struct Unknown CraftWeaponInfo; // 0x2F8 (192)
	struct FString MainTabName; // 0x3B8 (16)
	struct FString ArmoryTabName; // 0x3C8 (16)
	char bNeedCheckWeaponList : 0; // 0x3D8 (1)
	char bNeedCheckMaterialList : 0; // 0x3D9 (1)

	void NotifyNewItemToCoh(); // Function U.U.NotifyNewItemToCoh(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RemoveNewCraftingList(struct FName ID); // Function U.U.RemoveNewCraftingList(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateNewCraftingSlots(); // Function U.U.UpdateNewCraftingSlots(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateNewMaterialList(); // Function U.U.UpdateNewMaterialList(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateNewWeaponList(); // Function U.U.UpdateNewWeaponList(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CreateCraftWeaponPerkPopup(); // Function U.U.CreateCraftWeaponPerkPopup(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EndCraft(); // Function U.U.EndCraft(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StartCraft(struct Unknown& CraftWeapon); // Function U.U.StartCraft(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetOwnWeaponCount(int32_t BaseWeaponID, int32_t& Count); // Function U.U.GetOwnWeaponCount(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetOwnItemCount(int32_t ItemId, int32_t& Count); // Function U.U.GetOwnItemCount(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckOwnWeapon(int32_t BaseWeaponID, char& IsOwn); // Function U.U.CheckOwnWeapon(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckOwnItems(struct TArray<Unknown>& ItemId, char& AllOwn, int32_t& OwnCount); // Function U.U.CheckOwnItems(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangedMaterialList(struct TArray<Unknown>& MaterialList); // Function U.U.OnChangedMaterialList(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangedWeaponList(struct TArray<Unknown>& WeaponList); // Function U.U.OnChangedWeaponList(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangedGold(int32_t Gold); // Function U.U.OnChangedGold(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangedArmoryTab(struct FString TabName); // Function U.U.OnChangedArmoryTab(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangedMainTab(struct FString TabName); // Function U.U.OnChangedMainTab(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Button_Crapting_Btn; // 0x250 (8)
	struct Unknown Button_Crapting_Btn_dis; // 0x258 (8)
	struct Unknown Image_112; // 0x260 (8)
	struct Unknown Img_Gold; // 0x268 (8)
	struct Unknown Img_Gold_Inert; // 0x270 (8)
	struct Unknown Img_Gold_Inert_2; // 0x278 (8)
	struct Unknown RichTextBlock_578; // 0x280 (8)
	struct Unknown T_GoldCost; // 0x288 (8)
	struct Unknown T_GoldCost_2; // 0x290 (8)
	struct Unknown U; // 0x298 (8)
	struct Unknown U; // 0x2A0 (8)
	struct Unknown U; // 0x2A8 (8)
	struct Unknown U; // 0x2B0 (8)
	struct Unknown U; // 0x2B8 (8)
	struct Unknown WidgetSwitcher_179; // 0x2C0 (8)
	struct Unknown WidgetSwitcher_Gold; // 0x2C8 (8)
	struct Unknown CraftingInfo; // 0x2D0 (296)
	struct Unknown SelectedButton; // 0x3F8 (8)

	void GetCraftingWeaponRarity(int32_t& OutRarity); // Function U.U.GetCraftingWeaponRarity(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangedArmoryTab(); // Function U.U.OnChangedArmoryTab(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetButtonEnabled(); // Function U.U.SetButtonEnabled(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckOwn(); // Function U.U.CheckOwn(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetCraftingInfo(struct Unknown ButtonRef); // Function U.U.SetCraftingInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Crapting_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEven(); // Function U.U.BndEvt__Button_Crapting_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEven(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RequestCraftWeapon(int32_t WeaponIndex, struct FString ItemId); // Function U.U.RequestCraftWeapon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Crapting_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Crapting_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SelectCancel(); // Function U.U.SelectCancel(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

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

	void SetWeaponStat(struct Unknown& WeaponInfo); // Function U.U.SetWeaponStat(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Image_Buff; // 0x250 (8)
	struct Unknown Image_Grade_Color_Line; // 0x258 (8)
	struct Unknown ItemOption; // 0x260 (184)

	void SetItemOption(struct Unknown& ItemOption); // Function U.U.SetItemOption(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_6C8A793942B5F7D63CF7C5BA6F5F3753(struct Unknown Loaded); // Function U.U.OnLoaded_6C8A793942B5F7D63CF7C5BA6F5F3753(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadImg(struct Unknown Object); // Function U.U.AsyncLoadImg(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown HorizontalBox_Rarity; // 0x250 (8)
	struct Unknown HorizontalBox_Rarity_NotOwn; // 0x258 (8)
	struct Unknown Image_310; // 0x260 (8)
	struct Unknown Image_Weapon_6Grade_bg; // 0x268 (8)
	struct Unknown Img_Icon; // 0x270 (8)
	struct Unknown RetainerBox_2; // 0x278 (8)
	struct Unknown T_CurrentCount; // 0x280 (8)
	struct Unknown T_Level; // 0x288 (8)
	struct Unknown T_MaxCount; // 0x290 (8)
	struct Unknown WidgetSwitcher_Rarity; // 0x298 (8)
	int32_t ItemWeaponID; // 0x2A0 (4)
	struct Unknown WeaponInfo; // 0x2A8 (2864)
	struct Unknown WeaponItemInfo; // 0xDD8 (152)
	int32_t CurrentCount; // 0xE70 (4)

	void SetOwnInfo(); // Function U.U.SetOwnInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetNotOwnRarityVisibility(int32_t Rarity); // Function U.U.SetNotOwnRarityVisibility(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetOwnCount(); // Function U.U.SetOwnCount(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetWeaponInfo(struct Unknown& ItemWeaponInfo, int32_t ItemWeaponID); // Function U.U.SetWeaponInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_F85F803F469568E218532398152F6C76(struct Unknown Loaded); // Function U.U.OnLoaded_F85F803F469568E218532398152F6C76(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadImg(struct Unknown Object); // Function U.U.AsyncLoadImg(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown HorizontalBox_Rarity; // 0x250 (8)
	struct Unknown HorizontalBox_Rarity_NotOwn; // 0x258 (8)
	struct Unknown Img_BG; // 0x260 (8)
	struct Unknown Img_Icon; // 0x268 (8)
	struct Unknown RetainerBox_2; // 0x270 (8)
	struct Unknown T_CurrentCount; // 0x278 (8)
	struct Unknown T_MaxCount; // 0x280 (8)
	struct Unknown T_RecipeNum; // 0x288 (8)
	struct Unknown WidgetSwitcher_Rarity; // 0x290 (8)
	struct Unknown MaterialInfo; // 0x298 (208)
	int32_t ItemId; // 0x368 (4)
	int32_t MaxCount; // 0x36C (4)
	int32_t CurrentCount; // 0x370 (4)

	void SetNotOwnRarityVisibility(int32_t Rarity); // Function U.U.SetNotOwnRarityVisibility(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetOwnInfo(); // Function U.U.SetOwnInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetOwnCount(); // Function U.U.SetOwnCount(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetItemInfo(struct Unknown& GroupItemInfo, int32_t Index); // Function U.U.SetItemInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_2C8ACAFD450AD7D8B8267FA0203F2515(struct Unknown Loaded); // Function U.U.OnLoaded_2C8ACAFD450AD7D8B8267FA0203F2515(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadImg(struct Unknown Object); // Function U.U.AsyncLoadImg(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown ComboBoxString_Sort_2; // 0x250 (8)
	struct Unknown Down_2; // 0x258 (8)
	struct Unknown Image; // 0x260 (8)
	struct Unknown Img_BG; // 0x268 (8)
	struct Unknown Overlay_2; // 0x270 (8)
	struct Unknown SortText_2; // 0x278 (8)
	struct Unknown Up_2; // 0x280 (8)
	struct Unknown U; // 0x288 (8)
	struct Unknown U_2; // 0x290 (8)
	struct Unknown U_3; // 0x298 (8)
	struct Unknown VerticalBox_Category; // 0x2A0 (8)
	struct TMap<Unknown, Unknown> CategoryList; // 0x2A8 (80)
	struct TArray<Unknown> SortTypeList; // 0x2F8 (16)
	struct Unknown LastOpenedCategory; // 0x308 (8)
	char IsOwn : 0; // 0x310 (1)
	char IsOwnAny : 0; // 0x311 (1)
	int32_t CraftingID; // 0x314 (4)
	struct FText TextAll; // 0x318 (24)
	int32_t LanguageIndex; // 0x330 (4)

	void CheckLanguageIndex(); // Function U.U.CheckLanguageIndex(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangedArmoryTab(); // Function U.U.OnChangedArmoryTab(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnSelectedCrafting(int32_t CraftingID); // Function U.U.OnSelectedCrafting(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetOwn(char NewOwn, char NewOwnAny); // Function U.U.SetOwn(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DefaultSelectButton(); // Function U.U.DefaultSelectButton(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SelectCraftingInfo(int32_t CraftingID); // Function U.U.SelectCraftingInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckLastCategory(struct Unknown NewOpendWidget); // Function U.U.CheckLastCategory(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetLastCategory(); // Function U.U.ResetLastCategory(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckOwn(); // Function U.U.CheckOwn(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangedWeaponType(struct FString WeaponType); // Function U.U.OnChangedWeaponType(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ClearCategory(); // Function U.U.ClearCategory(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitCraftingCategory(); // Function U.U.InitCraftingCategory(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ComboBoxString_Sort_1_K2Nc(struct FString SelectedItem, char SelectionType); // Function U.U.BndEvt__ComboBoxString_Sort_1_K2(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ComboBoxString_Sort_1_K2Nu(); // Function U.U.BndEvt__ComboBoxString_Sort_1_K2N(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelSightInfoWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Canvas_Charge; // 0x250 (8)
	struct Unknown ChargeIndicator; // 0x258 (8)
	struct Unknown Image_LeanDamageBg; // 0x260 (8)
	struct Unknown IMG_Gauge1; // 0x268 (8)
	struct Unknown IMG_Gauge2; // 0x270 (8)
	struct Unknown IMG_Gauge3; // 0x278 (8)
	struct Unknown IMG_Gauge4; // 0x280 (8)
	struct Unknown IMG_Gauge5; // 0x288 (8)
	struct Unknown IMG_Gauge6; // 0x290 (8)
	struct Unknown LeftTime; // 0x298 (8)
	struct Unknown Overlay_Gauge; // 0x2A0 (8)
	struct Unknown T_BulletsPerShot; // 0x2A8 (8)
	struct Unknown T_Damage; // 0x2B0 (8)
	struct Unknown T_RPM; // 0x2B8 (8)
	struct Unknown VerticalBox_Damage; // 0x2C0 (8)
	struct Unknown BravoHotelCharacter; // 0x2C8 (8)
	struct TArray<Unknown> GaugeIMGArray; // 0x2D0 (16)
	int32_t LastGauge; // 0x2E0 (4)
	char Timer_ : 0; // 0x2E4 (1)
	struct Unknown Timer_UpdateInfos; // 0x2E8 (8)
	struct Unknown ChargeIndicatorDynamicMaterial; // 0x2F0 (8)

	void HideChargeInfo(); // Function U.U.HideChargeInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateChargeInfo(float MaxGaugeValue, float CurrentGaugeValue); // Function U.U.UpdateChargeInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateBulletsPerShot(); // Function U.U.UpdateBulletsPerShot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateSnipeGauge(); // Function U.U.UpdateSnipeGauge(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateDamage(); // Function U.U.UpdateDamage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateInfos(); // Function U.U.UpdateInfos(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideSightInfo(); // Function U.U.HideSightInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowSightInfo(); // Function U.U.ShowSightInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Init(); // Function U.U.Init(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Ellipsis_M; // 0x250 (8)
	struct Unknown CanvasPanel_123; // 0x258 (8)
	struct Unknown Enhancing; // 0x260 (8)
	struct Unknown Image_305; // 0x268 (8)
	struct Unknown Image_841; // 0x270 (8)
	struct Unknown InputEventBox; // 0x278 (8)
	struct Unknown Skip; // 0x280 (8)
	struct Unknown TextBlock_335; // 0x288 (8)
	struct Unknown TextBlock_336; // 0x290 (8)
	struct Unknown TextBlock_337; // 0x298 (8)
	struct Unknown TextBlock_362; // 0x2A0 (8)
	struct Unknown TextEnhanceing; // 0x2A8 (8)
	struct Unknown U; // 0x2B0 (8)
	struct Unknown U; // 0x2B8 (8)
	struct Unknown EnhanceResultTimerHandle; // 0x2C0 (8)

	void Craft(); // Function U.U.Craft(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Result(); // Function U.U.Result(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetInputEventBox(char Visible); // Function U.U.SetInputEventBox(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StopProceedingSound(); // Function U.U.StopProceedingSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayProceedingSound(); // Function U.U.PlayProceedingSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetLobbyWidget(struct Unknown& Widget); // Function U.U.GetLobbyWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Proceeding(); // Function U.U.Proceeding(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowArmoryUI(struct FString ArmoryResultName); // Function U.U.ShowArmoryUI(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Skip_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSign(); // Function U.U.BndEvt__Skip_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSign(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Skip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Skip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EnhanceResult(); // Function U.U.EnhanceResult(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CustomEvent_1(); // Function U.U.CustomEvent_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTimerCraftResult(); // Function U.U.SetTimerCraftResult(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnCraftResult(); // Function U.U.OnCraftResult(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Armory_Repair_M; // 0x250 (8)
	struct Unknown Armory_Strengthen_M; // 0x258 (8)
	struct Unknown Armory_Failed_M; // 0x260 (8)
	struct Unknown Armory_Break_M; // 0x268 (8)
	struct Unknown Armory_Failed_Break_M; // 0x270 (8)
	struct Unknown Armory_Failed_Down_M; // 0x278 (8)
	struct Unknown Armory_Awesome_M; // 0x280 (8)
	struct Unknown Armory_Success_M; // 0x288 (8)
	struct Unknown Armory_Awesome; // 0x290 (8)
	struct Unknown Armory_Break; // 0x298 (8)
	struct Unknown Armory_Failed; // 0x2A0 (8)
	struct Unknown Armory_Failed_Break; // 0x2A8 (8)
	struct Unknown Armory_Failed_Down; // 0x2B0 (8)
	struct Unknown Armory_Repair; // 0x2B8 (8)
	struct Unknown Armory_Strengthen; // 0x2C0 (8)
	struct Unknown Armory_Success; // 0x2C8 (8)
	struct Unknown Awesome_Damage1; // 0x2D0 (8)
	struct Unknown Awesome_Damage2; // 0x2D8 (8)
	struct Unknown Awesome_ItemName; // 0x2E0 (8)
	struct Unknown Awesome_Level1; // 0x2E8 (8)
	struct Unknown Awesome_Level2; // 0x2F0 (8)
	struct Unknown Awesome_MagSize1; // 0x2F8 (8)
	struct Unknown Awesome_MagSize2; // 0x300 (8)
	struct Unknown Awesome_Spread1; // 0x308 (8)
	struct Unknown Awesome_Spread2; // 0x310 (8)
	struct Unknown Awesome_UpLevel; // 0x318 (8)
	struct Unknown Break_Count; // 0x320 (8)
	struct Unknown Break_ItemName; // 0x328 (8)
	struct Unknown BreakTitle; // 0x330 (8)
	struct Unknown Button_1; // 0x338 (8)
	struct Unknown Button_2; // 0x340 (8)
	struct Unknown Button_228; // 0x348 (8)
	struct Unknown Button_230; // 0x350 (8)
	struct Unknown Button_232; // 0x358 (8)
	struct Unknown Button_233; // 0x360 (8)
	struct Unknown Button_EnchanceCancle; // 0x368 (8)
	struct Unknown Button_Enhance; // 0x370 (8)
	struct Unknown Button_Fatigue; // 0x378 (8)
	struct Unknown Empty; // 0x380 (8)
	struct Unknown FB_Damage1; // 0x388 (8)
	struct Unknown FB_Damage2; // 0x390 (8)
	struct Unknown FB_Level1; // 0x398 (8)
	struct Unknown FB_Level2; // 0x3A0 (8)
	struct Unknown FB_MagSize1; // 0x3A8 (8)
	struct Unknown FB_MagSize2; // 0x3B0 (8)
	struct Unknown FB_Spread1; // 0x3B8 (8)
	struct Unknown FB_Spread2; // 0x3C0 (8)
	struct Unknown FD_Damage1; // 0x3C8 (8)
	struct Unknown FD_Damage2; // 0x3D0 (8)
	struct Unknown FD_DownLevel; // 0x3D8 (8)
	struct Unknown FD_Level1; // 0x3E0 (8)
	struct Unknown FD_Level2; // 0x3E8 (8)
	struct Unknown FD_MagSize1; // 0x3F0 (8)
	struct Unknown FD_MagSize2; // 0x3F8 (8)
	struct Unknown FD_Spread1; // 0x400 (8)
	struct Unknown FD_Spread2; // 0x408 (8)
	struct Unknown HorizontalBox_Awesome_Damage; // 0x410 (8)
	struct Unknown HorizontalBox_Awesome_MagSize; // 0x418 (8)
	struct Unknown HorizontalBox_Awesome_Spread; // 0x420 (8)
	struct Unknown HorizontalBox_FB_Damage; // 0x428 (8)
	struct Unknown HorizontalBox_FB_MagSize; // 0x430 (8)
	struct Unknown HorizontalBox_FB_Spread; // 0x438 (8)
	struct Unknown HorizontalBox_FD_Damage; // 0x440 (8)
	struct Unknown HorizontalBox_FD_MasSize; // 0x448 (8)
	struct Unknown HorizontalBox_FD_Spread; // 0x450 (8)
	struct Unknown HorizontalBox_Strengthen_Damage; // 0x458 (8)
	struct Unknown HorizontalBox_Strengthen_MagSize; // 0x460 (8)
	struct Unknown HorizontalBox_Strengthen_Spread; // 0x468 (8)
	struct Unknown HorizontalBox_Success_Damage; // 0x470 (8)
	struct Unknown HorizontalBox_Success_Durable; // 0x478 (8)
	struct Unknown HorizontalBox_Success_Fatigue; // 0x480 (8)
	struct Unknown HorizontalBox_Success_MagSize; // 0x488 (8)
	struct Unknown HorizontalBox_Success_Spread; // 0x490 (8)
	struct Unknown Image; // 0x498 (8)
	struct Unknown Image_2; // 0x4A0 (8)
	struct Unknown Image_3; // 0x4A8 (8)
	struct Unknown Image_4; // 0x4B0 (8)
	struct Unknown Image_8; // 0x4B8 (8)
	struct Unknown Image_14; // 0x4C0 (8)
	struct Unknown Image_15; // 0x4C8 (8)
	struct Unknown Image_16; // 0x4D0 (8)
	struct Unknown Image_17; // 0x4D8 (8)
	struct Unknown Image_18; // 0x4E0 (8)
	struct Unknown Image_20; // 0x4E8 (8)
	struct Unknown Image_27; // 0x4F0 (8)
	struct Unknown Image_167; // 0x4F8 (8)
	struct Unknown Image_501; // 0x500 (8)
	struct Unknown Image_503; // 0x508 (8)
	struct Unknown Image_817; // 0x510 (8)
	struct Unknown Image_820; // 0x518 (8)
	struct Unknown Image_821; // 0x520 (8)
	struct Unknown Image_822; // 0x528 (8)
	struct Unknown Image_823; // 0x530 (8)
	struct Unknown Image_824; // 0x538 (8)
	struct Unknown Image_825; // 0x540 (8)
	struct Unknown Image_826; // 0x548 (8)
	struct Unknown Image_827; // 0x550 (8)
	struct Unknown Image_828; // 0x558 (8)
	struct Unknown Image_829; // 0x560 (8)
	struct Unknown Image_830; // 0x568 (8)
	struct Unknown Image_831; // 0x570 (8)
	struct Unknown Image_832; // 0x578 (8)
	struct Unknown Image_833; // 0x580 (8)
	struct Unknown Image_834; // 0x588 (8)
	struct Unknown Image_835; // 0x590 (8)
	struct Unknown Image_836; // 0x598 (8)
	struct Unknown Image_837; // 0x5A0 (8)
	struct Unknown Image_838; // 0x5A8 (8)
	struct Unknown Image_839; // 0x5B0 (8)
	struct Unknown Image_840; // 0x5B8 (8)
	struct Unknown Image_841; // 0x5C0 (8)
	struct Unknown Image_842; // 0x5C8 (8)
	struct Unknown Image_843; // 0x5D0 (8)
	struct Unknown Image_845; // 0x5D8 (8)
	struct Unknown Image_846; // 0x5E0 (8)
	struct Unknown Image_847; // 0x5E8 (8)
	struct Unknown Image_848; // 0x5F0 (8)
	struct Unknown Image_849; // 0x5F8 (8)
	struct Unknown Image_850; // 0x600 (8)
	struct Unknown Image_851; // 0x608 (8)
	struct Unknown Image_852; // 0x610 (8)
	struct Unknown Image_853; // 0x618 (8)
	struct Unknown Image_854; // 0x620 (8)
	struct Unknown Image_855; // 0x628 (8)
	struct Unknown Image_856; // 0x630 (8)
	struct Unknown Image_857; // 0x638 (8)
	struct Unknown Image_858; // 0x640 (8)
	struct Unknown Image_859; // 0x648 (8)
	struct Unknown Image_860; // 0x650 (8)
	struct Unknown Image_861; // 0x658 (8)
	struct Unknown Image_862; // 0x660 (8)
	struct Unknown Image_863; // 0x668 (8)
	struct Unknown Image_864; // 0x670 (8)
	struct Unknown Image_865; // 0x678 (8)
	struct Unknown Image_866; // 0x680 (8)
	struct Unknown Image_867; // 0x688 (8)
	struct Unknown Image_868; // 0x690 (8)
	struct Unknown Image_921; // 0x698 (8)
	struct Unknown Image_1264; // 0x6A0 (8)
	struct Unknown Image_1266; // 0x6A8 (8)
	struct Unknown Image_1269; // 0x6B0 (8)
	struct Unknown Image_1270; // 0x6B8 (8)
	struct Unknown Image_1271; // 0x6C0 (8)
	struct Unknown Image_1272; // 0x6C8 (8)
	struct Unknown Image_1273; // 0x6D0 (8)
	struct Unknown Image_1277; // 0x6D8 (8)
	struct Unknown Image_1278; // 0x6E0 (8)
	struct Unknown Image_1279; // 0x6E8 (8)
	struct Unknown Image_1280; // 0x6F0 (8)
	struct Unknown Image_1284; // 0x6F8 (8)
	struct Unknown Image_1285; // 0x700 (8)
	struct Unknown Image_1318; // 0x708 (8)
	struct Unknown Image_1319; // 0x710 (8)
	struct Unknown Image_1320; // 0x718 (8)
	struct Unknown Image_1321; // 0x720 (8)
	struct Unknown Image_1322; // 0x728 (8)
	struct Unknown Image_1323; // 0x730 (8)
	struct Unknown Image_1324; // 0x738 (8)
	struct Unknown Image_1329; // 0x740 (8)
	struct Unknown Image_1330; // 0x748 (8)
	struct Unknown Image_1335; // 0x750 (8)
	struct Unknown Image_1336; // 0x758 (8)
	struct Unknown Image_1341; // 0x760 (8)
	struct Unknown Image_1342; // 0x768 (8)
	struct Unknown Image_1343; // 0x770 (8)
	struct Unknown Image_1344; // 0x778 (8)
	struct Unknown Image_1345; // 0x780 (8)
	struct Unknown Image_1346; // 0x788 (8)
	struct Unknown Image_1347; // 0x790 (8)
	struct Unknown Image_1348; // 0x798 (8)
	struct Unknown Image_1349; // 0x7A0 (8)
	struct Unknown Image_1350; // 0x7A8 (8)
	struct Unknown Image_1351; // 0x7B0 (8)
	struct Unknown Image_1352; // 0x7B8 (8)
	struct Unknown Image_1353; // 0x7C0 (8)
	struct Unknown Image_1354; // 0x7C8 (8)
	struct Unknown Image_1355; // 0x7D0 (8)
	struct Unknown Image_1356; // 0x7D8 (8)
	struct Unknown Image_1358; // 0x7E0 (8)
	struct Unknown Image_1359; // 0x7E8 (8)
	struct Unknown Image_1361; // 0x7F0 (8)
	struct Unknown Image_1362; // 0x7F8 (8)
	struct Unknown Image_1363; // 0x800 (8)
	struct Unknown Image_1364; // 0x808 (8)
	struct Unknown Image_1366; // 0x810 (8)
	struct Unknown Image_1368; // 0x818 (8)
	struct Unknown Image_1369; // 0x820 (8)
	struct Unknown Image_1370; // 0x828 (8)
	struct Unknown Image_1372; // 0x830 (8)
	struct Unknown Image_1374; // 0x838 (8)
	struct Unknown Image_1375; // 0x840 (8)
	struct Unknown Image_1376; // 0x848 (8)
	struct Unknown Image_1378; // 0x850 (8)
	struct Unknown Image_1380; // 0x858 (8)
	struct Unknown Image_1381; // 0x860 (8)
	struct Unknown Image_1382; // 0x868 (8)
	struct Unknown Image_1384; // 0x870 (8)
	struct Unknown Image_1972; // 0x878 (8)
	struct Unknown ImageTX_Complete_Fail; // 0x880 (8)
	struct Unknown ItemList; // 0x888 (8)
	struct Unknown Overlay_FB_ItemList; // 0x890 (8)
	struct Unknown Strengthen_Cost; // 0x898 (8)
	struct Unknown Strengthen_Count; // 0x8A0 (8)
	struct Unknown Strengthen_CurrentDamageText1; // 0x8A8 (8)
	struct Unknown Strengthen_CurrentDamageText2; // 0x8B0 (8)
	struct Unknown Strengthen_CurrentMagSizeText1; // 0x8B8 (8)
	struct Unknown Strengthen_CurrentMagSizeText2; // 0x8C0 (8)
	struct Unknown Strengthen_CurrentSpreadText1; // 0x8C8 (8)
	struct Unknown Strengthen_CurrentSpreadText2; // 0x8D0 (8)
	struct Unknown Strengthen_Icon; // 0x8D8 (8)
	struct Unknown Strengthen_IconType1; // 0x8E0 (8)
	struct Unknown Strengthen_IconType2; // 0x8E8 (8)
	struct Unknown Strengthen_IconType3; // 0x8F0 (8)
	struct Unknown Strengthen_Level1; // 0x8F8 (8)
	struct Unknown Strengthen_Level2; // 0x900 (8)
	struct Unknown Strengthen_Name; // 0x908 (8)
	struct Unknown Strengthen_TextType1; // 0x910 (8)
	struct Unknown Strengthen_TextType2; // 0x918 (8)
	struct Unknown Strengthen_TextType3; // 0x920 (8)
	struct Unknown Success_Damage1; // 0x928 (8)
	struct Unknown Success_Damage2; // 0x930 (8)
	struct Unknown Success_ItemName; // 0x938 (8)
	struct Unknown Success_ItemName_2; // 0x940 (8)
	struct Unknown Success_Level1; // 0x948 (8)
	struct Unknown Success_Level2; // 0x950 (8)
	struct Unknown Success_MagSize1; // 0x958 (8)
	struct Unknown Success_MagSize2; // 0x960 (8)
	struct Unknown Success_Spread1; // 0x968 (8)
	struct Unknown Success_Spread2; // 0x970 (8)
	struct Unknown Success_UpLevel; // 0x978 (8)
	struct Unknown T_Durability; // 0x980 (8)
	struct Unknown T_Fatigue; // 0x988 (8)
	struct Unknown T_PreFatigue; // 0x990 (8)
	struct Unknown TerrainHeight; // 0x998 (8)
	struct Unknown TextBlock_2089; // 0x9A0 (8)
	struct Unknown TextBlock_FB_ItemCount; // 0x9A8 (8)
	struct Unknown TextBlock_FB_ItemName; // 0x9B0 (8)
	struct Unknown TextBlock_FB_Title; // 0x9B8 (8)
	struct Unknown WidgetSwitcher_1; // 0x9C0 (8)
	struct Unknown ResultInfo; // 0x9C8 (56)
	float CurrentDurability; // 0xA00 (4)

	void SequenceEvent__ENTRYPOINTU_16(); // Function U.U.SequenceEvent__ENTRYPOINTU_16(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_15(); // Function U.U.SequenceEvent__ENTRYPOINTU_15(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_14(); // Function U.U.SequenceEvent__ENTRYPOINTU_14(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_13(); // Function U.U.SequenceEvent__ENTRYPOINTU_13(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_12(); // Function U.U.SequenceEvent__ENTRYPOINTU_12(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_11(); // Function U.U.SequenceEvent__ENTRYPOINTU_11(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_10(); // Function U.U.SequenceEvent__ENTRYPOINTU_10(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_9(); // Function U.U.SequenceEvent__ENTRYPOINTU_9(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_8(); // Function U.U.SequenceEvent__ENTRYPOINTU_8(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_7(); // Function U.U.SequenceEvent__ENTRYPOINTU_7(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_6(); // Function U.U.SequenceEvent__ENTRYPOINTU_6(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_5(); // Function U.U.SequenceEvent__ENTRYPOINTU_5(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_4(); // Function U.U.SequenceEvent__ENTRYPOINTU_4(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_3(); // Function U.U.SequenceEvent__ENTRYPOINTU_3(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_2(); // Function U.U.SequenceEvent__ENTRYPOINTU_2(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SequenceEvent__ENTRYPOINTU_1(); // Function U.U.SequenceEvent__ENTRYPOINTU_1(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateDurability(float DeltaSecond); // Function U.U.UpdateDurability(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetDurability(float NewDurability); // Function U.U.SetDurability(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RepairSuccess(); // Function U.U.RepairSuccess(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayButtonClickSound(); // Function U.U.PlayButtonClickSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayEnhanceClickSound(); // Function U.U.PlayEnhanceClickSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlaySuccessMagSizeSound(); // Function U.U.PlaySuccessMagSizeSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlaySuccessSpreadSound(); // Function U.U.PlaySuccessSpreadSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlaySuccessDamageSound(); // Function U.U.PlaySuccessDamageSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlaySuccessSound(); // Function U.U.PlaySuccessSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayEnhanceSpreadResultSound(); // Function U.U.PlayEnhanceSpreadResultSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayEnhanceMagSizeResultSound(); // Function U.U.PlayEnhanceMagSizeResultSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayEnhanceSound(); // Function U.U.PlayEnhanceSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayEnhanceDamageResultSound(); // Function U.U.PlayEnhanceDamageResultSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayButtonHoverSound(); // Function U.U.PlayButtonHoverSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayBreakRecipeSound(); // Function U.U.PlayBreakRecipeSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayFailedSound(); // Function U.U.PlayFailedSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayAwesomeMagSizeSound(); // Function U.U.PlayAwesomeMagSizeSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayAwesomeSpreadSound(); // Function U.U.PlayAwesomeSpreadSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayAwesomeSound(); // Function U.U.PlayAwesomeSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayAwesomeDamageSound(); // Function U.U.PlayAwesomeDamageSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetGroupItem(struct FString ItemId, struct Unknown& GroupItem); // Function U.U.GetGroupItem(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowResult(); // Function U.U.ShowResult(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetLobbyWidget(struct Unknown& Widget); // Function U.U.GetLobbyWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowSuccess(); // Function U.U.ShowSuccess(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowEnhance(); // Function U.U.ShowEnhance(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowFailed_Break(); // Function U.U.ShowFailed_Break(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowFailed_Down(); // Function U.U.ShowFailed_Down(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowFailed(); // Function U.U.ShowFailed(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowBreak(); // Function U.U.ShowBreak(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowAwesome(); // Function U.U.ShowAwesome(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_6066722948EC3F93BD0CAD8D22CB4474(struct Unknown Loaded); // Function U.U.OnLoaded_6066722948EC3F93BD0CAD8D22CB4474(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Enhancement_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Enhancement_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_232_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_232_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_231_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_231_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_229_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_229_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_227_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_227_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_234_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_234_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_227_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_227_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_229_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_229_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_231_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_231_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_232_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_232_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (); // Function U.U.BndEvt__Button_EnchanceCancle_K2Nc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Enhance_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Enhance_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_0_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_1_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadTexture(struct Unknown Image); // Function U.U.AsyncLoadTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Image_20; // 0x250 (8)
	struct Unknown TargetAccel; // 0x258 (12)
	struct Unknown CurrentAccel; // 0x264 (12)
	float TargetScale; // 0x270 (4)
	struct Unknown DataAsset; // 0x278 (8)
	char ResetOriginTransform : 0; // 0x280 (1)
	char MouseInputLock : 0; // 0x281 (1)
	char IsUpdatingRotation : 0; // 0x282 (1)
	char IsValidMeshActor : 0; // 0x283 (1)
	char IsPressedLeftMouse : 0; // 0x284 (1)

	void CheckValidMeshActor(char& Return); // Function U.U.CheckValidMeshActor(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsSubTabContains(struct FString TabName, char& State); // Function U.U.IsSubTabContains(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateMouseWheel(float Delta); // Function U.U.UpdateMouseWheel(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateMouseY(float Delta); // Function U.U.UpdateMouseY(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateMouseX(float Delta); // Function U.U.UpdateMouseX(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Reset(char Snap); // Function U.U.Reset(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetLobbyWidget(struct Unknown& LobbyWidget); // Function U.U.GetLobbyWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void MouseWheel(float Delta); // Function U.U.MouseWheel(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Hide(); // Function U.U.Hide(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Show(); // Function U.U.Show(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Bg; // 0x250 (8)
	struct Unknown btn_Cancel; // 0x258 (8)
	struct Unknown btn_OK; // 0x260 (8)
	struct Unknown Button_Focus; // 0x268 (8)
	struct Unknown Button_Focus2; // 0x270 (8)
	struct Unknown CanvasPanel_Exit; // 0x278 (8)
	struct Unknown HorizontalBox_1; // 0x280 (8)
	struct Unknown Image_2; // 0x288 (8)
	struct Unknown Image_223; // 0x290 (8)
	struct Unknown Img_Movie; // 0x298 (8)
	struct Unknown RichTextBlock_244; // 0x2A0 (8)
	struct Unknown MediaPlayer; // 0x2A8 (8)
	char bPopup : 0; // 0x2B0 (1)
	struct Unknown MediaSoundComp; // 0x2B8 (8)
	float GammaIntensity; // 0x2C0 (4)
	struct Unknown Game; // 0x2C8 (8)
	struct Unknown SkipNoticeTimer; // 0x2D0 (8)
	struct Unknown MediaTexture; // 0x2D8 (8)
	struct Unknown Media; // 0x2E0 (8)
	char NextScene : 0; // 0x2E8 (1)

	void PlayMedia(); // Function U.U.PlayMedia(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ToggleExitPopup(); // Function U.U.ToggleExitPopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Move(); // Function U.U.Move(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnKeyDown(struct Unknown MyGeometry, struct Unknown InKeyEvent); // Function U.U.OnKeyDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CustomEvent_1(); // Function U.U.CustomEvent_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__btn_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CustomEvent_2(); // Function U.U.CustomEvent_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Focus_K2Node_Com(); // Function U.U.BndEvt__Button_Focus_K2Node_Com(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Focus2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Focus2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelScopeWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown CanvasPanel_1; // 0x250 (8)
	struct Unknown Image_1; // 0x258 (8)
	struct Unknown NewVar_1; // 0x260 (8)

	void SetScopeImageAngle(float NewAngle); // Function U.U.SetScopeImageAngle(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelScopeWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown CanvasPanel_1; // 0x250 (8)
	struct Unknown Image; // 0x258 (8)
	struct Unknown Image_2; // 0x260 (8)
	struct Unknown Image_3; // 0x268 (8)
	struct Unknown Image_4; // 0x270 (8)
	struct Unknown Image_5; // 0x278 (8)
	struct Unknown Image_6; // 0x280 (8)
	struct Unknown Image_7; // 0x288 (8)
	struct Unknown Image_8; // 0x290 (8)
	struct Unknown Image_9; // 0x298 (8)
	struct Unknown Image_10; // 0x2A0 (8)
	struct Unknown Image_11; // 0x2A8 (8)
	struct Unknown Image_12; // 0x2B0 (8)
	struct Unknown Image_13; // 0x2B8 (8)
	struct Unknown Image_14; // 0x2C0 (8)
	struct Unknown Image_15; // 0x2C8 (8)
	struct Unknown Image_16; // 0x2D0 (8)
	struct Unknown Image_17; // 0x2D8 (8)
	struct Unknown Image_18; // 0x2E0 (8)
	struct Unknown Image_47; // 0x2E8 (8)
	struct Unknown ScaleBox4X_5mm; // 0x2F0 (8)
	struct Unknown ScaleBox4X_7mm; // 0x2F8 (8)
	struct Unknown ScaleBox4X_SR; // 0x300 (8)
	struct Unknown WidgetSwitcher_167; // 0x308 (8)
	struct Unknown NewVar_1; // 0x310 (8)

	void SetScopeImageAngle(float NewAngle); // Function U.U.SetScopeImageAngle(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTexture5mm(); // Function U.U.SetTexture5mm(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTexture7mm(); // Function U.U.SetTexture7mm(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTextureSniper(); // Function U.U.SetTextureSniper(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_OnSetAllowdAmmo(enum class Unknow WeaponType, struct FName& AllowdAmmoName); // Function U.U.K2_OnSetAllowdAmmo(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Button_1; // 0x250 (8)
	struct Unknown death; // 0x258 (8)
	struct Unknown Image_168; // 0x260 (8)
	struct Unknown Image_216; // 0x268 (8)
	struct Unknown Image_506; // 0x270 (8)
	struct Unknown Image_623; // 0x278 (8)
	struct Unknown Img_LogOut; // 0x280 (8)
	struct Unknown Img_Voice; // 0x288 (8)
	struct Unknown Img_Voice_2; // 0x290 (8)
	struct Unknown Overlay_Death; // 0x298 (8)
	struct Unknown Slider_139; // 0x2A0 (8)
	struct Unknown T_PlayerIndex; // 0x2A8 (8)
	struct Unknown T_PlayerName; // 0x2B0 (8)
	struct Unknown TextBlock_209; // 0x2B8 (8)
	struct Unknown VerticalBox_1; // 0x2C0 (8)
	struct Unknown WidgetSwitcher; // 0x2C8 (8)
	struct FMulticastInlineDelegate EventDispatcher_ChangeVolumeState; // 0x2D0 (16)
	struct Unknown CurVoiceTalkState; // 0x2E0 (32)
	struct Unknown PingImage; // 0x300 (8)

	void SetInfo(struct Unknown VoiceTalkState); // Function U.U.SetInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Slider_138_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function U.U.BndEvt__Slider_138_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EventDispatcher_ChangeVolumeState__DelegateSignature(struct Unknown VoiceTalkState); // Function U.U.EventDispatcher_ChangeVolumeState__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Bg; // 0x250 (8)
	struct Unknown btn_Cancel; // 0x258 (8)
	struct Unknown btn_OK; // 0x260 (8)
	struct Unknown Image_2; // 0x268 (8)

	void Hide(); // Function U.U.Hide(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Show(); // Function U.U.Show(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_OK_K2Node_ComponentBoundEvent_52_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__btn_OK_K2Node_ComponentBoundEvent_52_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSign(); // Function U.U.BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSign(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature(); // Function U.U.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Escape_Cursor_Reset; // 0x250 (8)
	struct Unknown MiniNuke_Cursor_Reset; // 0x258 (8)
	struct Unknown Escape_Cursor; // 0x260 (8)
	struct Unknown MiniNuke_Cursor; // 0x268 (8)
	struct Unknown Image_390; // 0x270 (8)
	struct Unknown Image_519; // 0x278 (8)
	struct Unknown Img_CursorNuclear; // 0x280 (8)
	struct Unknown SizeBox_Nuclear; // 0x288 (8)
	struct Unknown WidgetSwitcher_1; // 0x290 (8)
	struct Unknown Anim_MouseClicked; // 0x298 (8)
	struct Unknown DummyWidgetRef; // 0x2A0 (8)

	void PlayClickSound(); // Function U.U.PlayClickSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetCursorSize(); // Function U.U.SetCursorSize(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetCursorByBuffEventType(enum class Unknow BuffEventType); // Function U.U.SetCursorByBuffEventType(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnClicked_Event_1(struct Unknown TouchedActor, struct Unknown ButtonPressed); // Function U.U.OnClicked_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayMouseCursorAnimation(); // Function U.U.PlayMouseCursorAnimation(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateCursorPosition(); // Function U.U.UpdateCursorPosition(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowCursor(); // Function U.U.ShowCursor(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideCursor(); // Function U.U.HideCursor(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelPlayerMarkerWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Anim_OnShow; // 0x250 (8)
	struct Unknown Canvas_Move; // 0x258 (8)
	struct Unknown IconImage; // 0x260 (8)
	struct Unknown Overlay_1; // 0x268 (8)
	struct Unknown PlayerMarker; // 0x270 (8)
	struct Unknown SizeBox_IconImage; // 0x278 (8)
	struct Unknown TeamIndex; // 0x280 (8)
	struct Unknown U; // 0x288 (8)
	struct Unknown WidgetSwitcher_Icon; // 0x290 (8)
	char IsShowingAnimReserv : 0; // 0x298 (1)
	struct FMulticastInlineDelegate OnMarkerClicked; // 0x2A0 (16)
	struct Unknown CurrentMarker; // 0x2B0 (8)
	struct TMap<Unknown, Unknown> Map_PingTypeTexture; // 0x2B8 (80)
	struct TMap<Unknown, Unknown> Map_PingItemTypeTexture; // 0x308 (80)
	struct Unknown SupplyBoxNotOpen; // 0x358 (8)
	struct Unknown SupplyBoxOpened; // 0x360 (8)
	struct Unknown PlayerState; // 0x368 (8)
	char IsOnMap : 0; // 0x370 (1)
	char Selected : 0; // 0x371 (1)
	char MyPing : 0; // 0x372 (1)

	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetImageFromPingType(enum class Unknow PingType, struct Unknown& Image); // Function U.U.GetImageFromPingType(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetGuidePingInfoForSmartpingMenu(enum class Unknow PingType); // Function U.U.SetGuidePingInfoForSmartpingMenu(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPingType(struct Unknown PingInfo, char IsOpend); // Function U.U.SetPingType(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnResetMarkerInfo(); // Function U.U.OnResetMarkerInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPlayerColor(struct Unknown PlayerState); // Function U.U.SetPlayerColor(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReserveShowingAnimation(); // Function U.U.ReserveShowingAnimation(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnMouseButtonUp(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseButtonUp(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Initialize(struct Unknown PlayerState); // Function U.U.Initialize(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetInfo(struct Unknown PingInfo, char UsingAnimation, char IsOpened); // Function U.U.SetInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetMarkerInfo(char IsUpdate); // Function U.U.ResetMarkerInfo(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetMaterialInfo(char UsingAnimation, struct Unknown MaterialPingInfo); // Function U.U.SetMaterialInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetResuscitationInfo(char UsingAnimation, struct Unknown PlayerState); // Function U.U.SetResuscitationInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetLocalPingInfo(char UsingAnimation, struct Unknown LocalPingInfo); // Function U.U.SetLocalPingInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetExpertWeaponInfo(char UsingAnimation, struct Unknown ExpertWeaponPingInfo); // Function U.U.SetExpertWeaponInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function U.U.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function U.U.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMarkerClicked__DelegateSignature(struct Unknown Button, char mapObjectID); // Function U.U.OnMarkerClicked__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelTopInfoWidget {

public:

	struct Unknown UberGraphFrame; // 0x278 (8)
	struct Unknown Anim_HideWidget; // 0x280 (8)
	struct Unknown Canvas; // 0x288 (8)
	struct Unknown Canvas_Minimap; // 0x290 (8)
	struct Unknown CanvasPanel_StatupFirst; // 0x298 (8)
	struct Unknown CanvasPanel_StatupThird; // 0x2A0 (8)
	struct Unknown T_GameVersion; // 0x2A8 (8)
	struct Unknown U; // 0x2B0 (8)
	struct Unknown U; // 0x2B8 (8)
	struct Unknown U; // 0x2C0 (8)
	struct Unknown U; // 0x2C8 (8)
	struct Unknown U; // 0x2D0 (8)
	struct Unknown U; // 0x2D8 (8)
	struct Unknown U; // 0x2E0 (8)
	struct Unknown U; // 0x2E8 (8)
	struct Unknown U; // 0x2F0 (8)
	struct Unknown U; // 0x2F8 (8)
	struct Unknown Vertical_MinimapAndTeamInfo; // 0x300 (8)
	struct Unknown PlayerController; // 0x308 (8)
	struct Unknown U; // 0x310 (8)
	struct Unknown MainWidget; // 0x318 (8)
	enum class Unknow CurrentState; // 0x320 (1)
	struct Unknown LastDisplayAbility; // 0x324 (12)

	void ShowStatupAnim(struct Unknown& StatupParams); // Function U.U.ShowStatupAnim(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckStatupAnim(struct Unknown& DisplayAbility); // Function U.U.CheckStatupAnim(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnShowNotRecorverHPMessage(char Type, int32_t ItemId); // Function U.U.OnShowNotRecorverHPMessage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void On(enum class Unknow PreviousState, enum class Unknow CurrentState); // Function U.U.On(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowAmmoReloadedMessage(int32_t ReloadedAmmoCount); // Function U.U.ShowAmmoReloadedMessage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowProgressMessage(int32_t Type, int32_t Time); // Function U.U.ShowProgressMessage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowKillMessage(struct FText WeaponName, struct FText Victim, char HeadShot, char TeamKill); // Function U.U.ShowKillMessage(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetGameVersion(); // Function U.U.SetGameVersion(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ChangeWidgetVisibleByToggleType(enum class Unknow CurrentType); // Function U.U.ChangeWidgetVisibleByToggleType(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown GetSlotHoverWidget(); // Function U.U.GetSlotHoverWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowFireModeLog(enum class Unknow Mode); // Function U.U.ShowFireModeLog(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetMainWidget(struct Unknown& MainWidget); // Function U.U.GetMainWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetWearableLevels(int32_t& HelmetLevel, int32_t& ArmorLevel, int32_t& BagLevel); // Function U.U.GetWearableLevels(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CreateHoverWidget(); // Function U.U.CreateHoverWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPerkInfo(); // Function U.U.SetPerkInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	int32_t GetFinalAliveCount(int32_t AliveCount); // Function U.U.GetFinalAliveCount(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Destruct(); // Function U.U.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetPerkDeck(); // Function U.U.ResetPerkDeck(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetEnergy(float energy); // Function U.U.SetEnergy(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowHealthRecovery(); // Function U.U.ShowHealthRecovery(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideHealthRecovery(); // Function U.U.HideHealthRecovery(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowEnergyRecovery(); // Function U.U.ShowEnergyRecovery(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideEnergyRecovery(); // Function U.U.HideEnergyRecovery(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetArmorInfo(char bHasHelmet, float HelmetGauge, char bHasChest, float ChestGauge, char bHasBackpack, float BackpackGauge); // Function U.U.SetArmorInfo(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetMyInfo(); // Function U.U.ResetMyInfo(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowNotRecorverHPMessage(char Type, int32_t ItemId); // Function U.U.ShowNotRecorverHPMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetCurrentWeaponFireMode(enum class Unknow FireMode); // Function U.U.SetCurrentWeaponFireMode(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowPerkDeck(); // Function U.U.ShowPerkDeck(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HidePerkDeck(); // Function U.U.HidePerkDeck(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayReadyGivePerk(); // Function U.U.PlayReadyGivePerk(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayKillGivePerk(int32_t KillCount); // Function U.U.PlayKillGivePerk(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangedToggleType(enum class Unknow PreType, enum class Unknow CurrentType); // Function U.U.OnChangedToggleType(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckVisibilityPerkDeck(); // Function U.U.CheckVisibilityPerkDeck(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideHUDMessage(enum class Unknow MessageType); // Function U.U.HideHUDMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddKillMessage(struct Unknown& Info); // Function U.U.AddKillMessage(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowCastingUI(struct Unknown& CastingInfo); // Function U.U.ShowCastingUI(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideCastingUI(); // Function U.U.HideCastingUI(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OpenInventory(); // Function U.U.OpenInventory(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CloseInventory(); // Function U.U.CloseInventory(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayShowAnim(); // Function U.U.PlayShowAnim(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayHideAnim(); // Function U.U.PlayHideAnim(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangedPlayerInfos(); // Function U.U.OnChangedPlayerInfos(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowHUDMessage(struct Unknown MessageRow); // Function U.U.ShowHUDMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_SetPerkInfo(); // Function U.U.K2_SetPerkInfo(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowMyKillCountMessage(char bIsKill, struct FText& Message); // Function U.U.ShowMyKillCountMessage(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowHitDamageLog(struct Unknown& HitDamageLogInfo); // Function U.U.ShowHitDamageLog(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void LevelUpEvent(struct Unknown PerkInfo, int32_t CurrentLevel, enum class Unknow LevelUpType, struct Unknown DisplayAbility, int32_t LastLevel); // Function U.U.LevelUpEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PreConstruct(char IsDesignTime); // Function U.U.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Anim_MS; // 0x250 (8)
	struct Unknown Image_78; // 0x258 (8)
	struct Unknown PingImage; // 0x260 (8)

	void UpdatePing(); // Function U.U.UpdatePing(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown VB_CoreList; // 0x250 (8)
	int32_t MaxWidgetCount; // 0x258 (4)
	char bStartFromTop : 0; // 0x25C (1)
	char Alignment; // 0x25D (1)
	int32_t SetWidgetSwitcherIndex; // 0x260 (4)

	void CheckCanStackDamageLog(struct Unknown& DamageLogInfo, char& CanStack); // Function U.U.CheckCanStackDamageLog(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddCoreInfoDamageLog(struct Unknown& DamageLogInfo); // Function U.U.AddCoreInfoDamageLog(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddMyKillMessage(struct FText Message); // Function U.U.AddMyKillMessage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddCoreInfoRequestResuscitation(struct Unknown PlayerState); // Function U.U.AddCoreInfoRequestResuscitation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddRequestMessage(struct FText Message, struct Unknown PlayerState); // Function U.U.AddRequestMessage(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddCoreInfoRouteping(struct Unknown PlayerState); // Function U.U.AddCoreInfoRouteping(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddCoreInfoMessage(struct FText Message, struct FString Type); // Function U.U.AddCoreInfoMessage(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddCoreInfoSmartping(struct Unknown PlayerState); // Function U.U.AddCoreInfoSmartping(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowNewWidget(float RemainTime, struct Unknown& CoreInfoItemWidget); // Function U.U.ShowNewWidget(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitChildCoreWidget(); // Function U.U.InitChildCoreWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PreConstruct(char IsDesignTime); // Function U.U.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Ani_Countdown; // 0x250 (8)
	struct Unknown TextBlock_RemailTime; // 0x258 (8)
	int32_t PreTime; // 0x260 (4)
	char ActiveTimer : 0; // 0x264 (1)
	int32_t RemainTime; // 0x268 (4)

	struct FText Get_TextBlock_RemailTime_Text_1(); // Function U.U.Get_TextBlock_RemailTime_Text_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetVisibileState(enum class Unknow CurrentState); // Function U.U.SetVisibileState(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (enum class Unknow PrevState, enum class Unknow CurrentState); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTimer(int32_t RemainTime); // Function U.U.SetTimer(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (int32_t RemainTime); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Image_73; // 0x250 (8)
	struct Unknown KeyImageWidget; // 0x258 (8)

	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Image_350; // 0x250 (8)
	struct Unknown Image_585; // 0x258 (8)
	struct Unknown Image_Grade_Color_Line; // 0x260 (8)
	struct Unknown TextBlock_445; // 0x268 (8)

	void SetBuffInfo(struct FText BuffName, struct FText Desc, struct Unknown Icon, int32_t Rarity); // Function U.U.SetBuffInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_EBF7B6BF4C04ABB8FF3715B4F6A51AD1(struct Unknown Loaded); // Function U.U.OnLoaded_EBF7B6BF4C04ABB8FF3715B4F6A51AD1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadIconTexture(struct Unknown IconTexture); // Function U.U.AsyncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown LevelUp; // 0x250 (8)
	struct Unknown FadeOut; // 0x258 (8)
	struct Unknown FadeIn; // 0x260 (8)
	struct Unknown Idle; // 0x268 (8)
	struct Unknown CanvasPanel_2; // 0x270 (8)
	struct Unknown Image_336; // 0x278 (8)
	struct Unknown Image_Back; // 0x280 (8)
	struct Unknown Overlay_186; // 0x288 (8)
	struct Unknown PerkLastLevel; // 0x290 (8)
	struct Unknown PerkLevelText; // 0x298 (8)
	struct Unknown PerkName; // 0x2A0 (8)
	struct Unknown PerkSlotHover; // 0x2A8 (8)
	struct Unknown RichTextBlock_Desc; // 0x2B0 (8)
	struct Unknown TextBlock_1; // 0x2B8 (8)
	struct Unknown TextBlock_8; // 0x2C0 (8)
	struct Unknown U; // 0x2C8 (8)
	struct Unknown PerkInfo; // 0x2D0 (44)
	struct Unknown PerkData; // 0x300 (224)
	int32_t PerkLevel; // 0x3E0 (4)
	struct Unknown PerInGameData; // 0x3E8 (456)
	int32_t Index; // 0x5B0 (4)
	struct Unknown MainWiget; // 0x5B8 (8)
	float CurrentHeight; // 0x5C0 (4)
	int32_t LastPerkLevel; // 0x5C4 (4)
	struct Unknown DefaultPosition; // 0x5C8 (8)
	int32_t CurrenteLevel; // 0x5D0 (4)
	char IsPlayingUltimateSound : 0; // 0x5D4 (1)

	char IsUltimateLevel(); // Function U.U.IsUltimateLevel(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPerkDesc(); // Function U.U.SetPerkDesc(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText Get_T_PerkDescLv1_Text_1(); // Function U.U.Get_T_PerkDescLv1_Text_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText Get_PerkName_Text_1(); // Function U.U.Get_PerkName_Text_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown Get_PerkName_ColorAndOpacity_1(); // Function U.U.Get_PerkName_ColorAndOpacity_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	enum class Unknow Get_TextBlock_7_Visibility_1(); // Function U.U.Get_TextBlock_7_Visibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown Get_PerkImage_Brush_1(); // Function U.U.Get_PerkImage_Brush_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	enum class Unknow Get_PerkImage_Visibility_1(); // Function U.U.Get_PerkImage_Visibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_A03468734B71BD17CEDAA08DD6958C1B(struct Unknown Loaded); // Function U.U.OnLoaded_A03468734B71BD17CEDAA08DD6958C1B(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadIconTexture(struct Unknown IconTexture); // Function U.U.AsyncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RemovePopup(); // Function U.U.RemovePopup(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RemoveFrom(); // Function U.U.RemoveFrom(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelVehicleWidget {

public:

	struct Unknown UberGraphFrame; // 0x2A8 (8)
	struct Unknown FuelGauge; // 0x2B0 (8)
	struct Unknown FuelIcon; // 0x2B8 (8)
	struct Unknown HPFaint; // 0x2C0 (8)
	struct Unknown HPGauge; // 0x2C8 (8)
	struct Unknown HPIcon; // 0x2D0 (8)
	struct Unknown SpeedText; // 0x2D8 (8)
	struct Unknown SubInfoParent; // 0x2E0 (8)
	struct Unknown U; // 0x2E8 (8)
	struct Unknown CachedVehicle; // 0x2F0 (8)
	struct Unknown MySeatColor; // 0x2F8 (16)
	struct Unknown EmptyFuelColor; // 0x308 (16)
	float InterpTargetHpRate; // 0x318 (4)
	float InterpCurrentHpRate; // 0x31C (4)
	float InterpSpeed; // 0x320 (4)
	struct Unknown HPFaintCurve; // 0x328 (8)
	struct Unknown HPColorCurve; // 0x330 (8)
	struct Unknown SubInfoWidget; // 0x338 (8)
	char EnableBind : 0; // 0x340 (1)
	struct Unknown NewVar_1; // 0x348 (8)

	void OnWheelWrecked(int32_t WheelIndex); // Function U.U.OnWheelWrecked(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetHPColor(float InPercent); // Function U.U.SetHPColor(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnSeatOccupantExited(struct Unknown Seat); // Function U.U.OnSeatOccupantExited(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnSeatOccupantEntered(struct Unknown Seat); // Function U.U.OnSeatOccupantEntered(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateFuelGauge(); // Function U.U.UpdateFuelGauge(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateSpeedText(); // Function U.U.UpdateSpeedText(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Hide(); // Function U.U.Hide(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Show(struct Unknown VehicleSeat); // Function U.U.Show(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetInfo(float CurFuel, float CurHp, struct FString CurSpeed); // Function U.U.SetInfo(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowVehicle(); // Function U.U.ShowVehicle(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnSeatOccupantEnter(struct Unknown SeatComponent, struct Unknown Occupant); // Function U.U.OnSeatOccupantEnter(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (struct Unknown SeatComponent, struct Unknown Occupant); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideVehicle(); // Function U.U.HideVehicle(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetInterpTarget(); // Function U.U.SetInterpTarget(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Anim_HideKillAssist; // 0x250 (8)
	struct Unknown Anim_ShowAssist; // 0x258 (8)
	struct Unknown Anim_ShowKill; // 0x260 (8)
	struct Unknown T_AssistCount; // 0x268 (8)
	struct Unknown T_KillCount; // 0x270 (8)
	int32_t DefaultFontSize; // 0x278 (4)
	int32_t MiniFontSize; // 0x27C (4)
	char IsShowingKillCount : 0; // 0x280 (1)
	struct Unknown Timer_HideKillCountText; // 0x288 (8)
	float RemainTime; // 0x290 (4)

	void SetHideTimer(); // Function U.U.SetHideTimer(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateAssistTextSize(); // Function U.U.UpdateAssistTextSize(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowKillCount(char bIsKill, struct FText Text); // Function U.U.ShowKillCount(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideKillCountText(); // Function U.U.HideKillCountText(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnAnimationFinished(struct Unknown Animation); // Function U.U.OnAnimationFinished(BlueprintCosmetic|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Anim_Hide_Ima; // 0x250 (8)
	struct Unknown Anim_Hide_text; // 0x258 (8)
	struct Unknown Anim_Show_Ima; // 0x260 (8)
	struct Unknown Anim_Show_text; // 0x268 (8)
	struct Unknown Canvas_Main; // 0x270 (8)
	struct Unknown HorizontalBox_86; // 0x278 (8)
	struct Unknown Image_130; // 0x280 (8)
	struct Unknown Image_811; // 0x288 (8)
	struct Unknown Img_MapImage; // 0x290 (8)
	struct Unknown MatchType; // 0x298 (8)
	struct Unknown MaxPlayerCount; // 0x2A0 (8)
	struct Unknown Overlay_Text; // 0x2A8 (8)
	struct Unknown PersonType; // 0x2B0 (8)
	struct Unknown T_MapImageDesc; // 0x2B8 (8)
	struct Unknown T_MapImageTitle; // 0x2C0 (8)
	struct Unknown Ultimate; // 0x2C8 (8)
	char IsShowText : 0; // 0x2D0 (1)
	struct Unknown Timer_HideMapImage; // 0x2D8 (8)
	int32_t LastZoomLevel; // 0x2E0 (4)
	float WantOpacity; // 0x2E4 (4)
	struct Unknown MainWidgetRef; // 0x2E8 (8)
	char IsShowImage : 0; // 0x2F0 (1)
	enum class Unknow LastWidgetType; // 0x2F1 (1)
	struct FText UltimateText; // 0x2F8 (24)

	void UpdateWantedOpacity(); // Function U.U.UpdateWantedOpacity(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckCanTextImage(char& CanText, char& CanImage); // Function U.U.CheckCanTextImage(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StartShowAnim(); // Function U.U.StartShowAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ChangeShowAnim(); // Function U.U.ChangeShowAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateOpacity(); // Function U.U.UpdateOpacity(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckWorldMapZoomLevel(char& Changed); // Function U.U.CheckWorldMapZoomLevel(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetWorldMapZoomLevel(int32_t& ZoomLevel); // Function U.U.GetWorldMapZoomLevel(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckToggleWidgetType(char& Changed); // Function U.U.CheckToggleWidgetType(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckCanHide(char& CanHide); // Function U.U.CheckCanHide(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetMapInfo(char& SUCCESS); // Function U.U.SetMapInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_199F0E9743CFA7E806886E89E49C9E00(struct Unknown Loaded); // Function U.U.OnLoaded_199F0E9743CFA7E806886E89E49C9E00(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowMapImage(); // Function U.U.ShowMapImage(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideMapImage(char SetTimer); // Function U.U.HideMapImage(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DoHideMapImage(); // Function U.U.DoHideMapImage(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncMapImage(struct Unknown Image); // Function U.U.AsyncMapImage(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ChangeMapImage(); // Function U.U.ChangeMapImage(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckOpacity(); // Function U.U.CheckOpacity(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelJetpackWidget {

public:

	struct Unknown UberGraphFrame; // 0x268 (8)
	struct Unknown FuelGauge; // 0x270 (8)
	struct Unknown FuelIcon; // 0x278 (8)
	struct Unknown FuelText; // 0x280 (8)

	void SetNativeValues(); // Function U.U.SetNativeValues(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelAttackDamageWidget {

public:

	struct Unknown FadeOut; // 0x3A0 (8)
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelBroadcastingWidget {

public:

	struct Unknown UberGraphFrame; // 0x258 (8)
	struct Unknown Anim_9WarningMessage; // 0x260 (8)
	struct Unknown Anim_10SupplyMessage; // 0x268 (8)
	struct Unknown Anim_8LevelUpMessage; // 0x270 (8)
	struct Unknown Anim_4GameStartMessage; // 0x278 (8)
	struct Unknown Anim_27Revival; // 0x280 (8)
	struct Unknown Anim_TeamKillWarning; // 0x288 (8)
	struct Unknown 0BlueZoneDesc; // 0x290 (8)
	struct Unknown 10SupplyMessage; // 0x298 (8)
	struct Unknown 11BroadcastMessage; // 0x2A0 (8)
	struct Unknown 12TeamKillWarning; // 0x2A8 (8)
	struct Unknown 13ActionDescription; // 0x2B0 (8)
	struct Unknown 14Action; // 0x2B8 (8)
	struct Unknown 15CastingMessage; // 0x2C0 (8)
	struct Unknown 16CastingCount; // 0x2C8 (8)
	struct Unknown 17CastingCancelInfo; // 0x2D0 (8)
	struct Unknown 18ActionMessage; // 0x2D8 (8)
	struct Unknown 19CoreInfo; // 0x2E0 (8)
	struct Unknown 1BlueZoneName; // 0x2E8 (8)
	struct Unknown 20ZeroingDistance; // 0x2F0 (8)
	struct Unknown 21PlayerReportInfo; // 0x2F8 (8)
	struct Unknown 22SpectatorCount; // 0x300 (8)
	struct Unknown 23PlayerInfo; // 0x308 (8)
	struct Unknown 24RoundOverInfo; // 0x310 (8)
	struct Unknown 25RoundOver; // 0x318 (8)
	struct Unknown 26GuideWidget; // 0x320 (8)
	struct Unknown 27Revival; // 0x328 (8)
	struct Unknown 28RequestMessageInfo_2; // 0x330 (8)
	struct Unknown 29EndResuscitated; // 0x338 (8)
	struct Unknown 2GameCountDown; // 0x340 (8)
	struct Unknown 30ItemCancelMessage; // 0x348 (8)
	struct Unknown 3GameCountDownNum; // 0x350 (8)
	struct Unknown 4GameStartMessage; // 0x358 (8)
	struct Unknown 5ChangeClassInfo; // 0x360 (8)
	struct Unknown 6KillMessage; // 0x368 (8)
	struct Unknown 7KillCount; // 0x370 (8)
	struct Unknown 8LevelUpMessage; // 0x378 (8)
	struct Unknown 9WarningMessage; // 0x380 (8)
	struct Unknown HUDList; // 0x388 (8)
	struct Unknown Image; // 0x390 (8)
	struct Unknown Image_1; // 0x398 (8)
	struct Unknown Image_2; // 0x3A0 (8)
	struct Unknown Image_4; // 0x3A8 (8)
	struct Unknown Image_5; // 0x3B0 (8)
	struct Unknown Image_8; // 0x3B8 (8)
	struct Unknown Image_248; // 0x3C0 (8)
	struct Unknown RichT_ResustingOwnerName; // 0x3C8 (8)
	struct Unknown ShowMessage; // 0x3D0 (8)
	struct Unknown U; // 0x3D8 (8)
	struct Unknown U_2; // 0x3E0 (8)
	struct Unknown U_243; // 0x3E8 (8)
	struct Unknown U; // 0x3F0 (8)
	struct Unknown U; // 0x3F8 (8)
	struct Unknown U; // 0x400 (8)
	struct TMap<Unknown, Unknown> LastPriority; // 0x408 (80)
	struct TArray<Unknown> ShowAnimList; // 0x458 (16)
	struct TArray<Unknown> HideAnimList; // 0x468 (16)
	float ShowAnimTime; // 0x478 (4)
	float HideAnimTime; // 0x47C (4)
	struct TMap<Unknown, Unknown> TimerList; // 0x480 (80)
	int32_t TeamKillWarningAnimLoopNum; // 0x4D0 (4)
	struct FText CheatMessage; // 0x4D8 (24)

	void GetMyKillCountMessageWidget(struct Unknown& KillCountWidget); // Function U.U.GetMyKillCountMessageWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowCustomAnim(struct Unknown PanelWidget, struct Unknown CustomAnim); // Function U.U.ShowCustomAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowResuscitatingWidget(); // Function U.U.ShowResuscitatingWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetRequestMessageWidget(struct Unknown& Result); // Function U.U.GetRequestMessageWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddCoreInfoWidget(struct FText Message); // Function U.U.AddCoreInfoWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetCoreInfoWidget(struct Unknown& CoreInfoWidget); // Function U.U.GetCoreInfoWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowGuideWidget(struct FText Message); // Function U.U.ShowGuideWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayTeamKillWarningAnim(); // Function U.U.PlayTeamKillWarningAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetPriority(enum class Unknow MessageType, struct Unknown PanelWidget); // Function U.U.ResetPriority(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddToTimerList(struct Unknown Panel, float Time); // Function U.U.AddToTimerList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CalcTimerCount(float DeltaTime); // Function U.U.CalcTimerCount(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayHideAnim(float DeltaTime); // Function U.U.PlayHideAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayShowAnim(float DeltaTime); // Function U.U.PlayShowAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideDefaultAnim(struct Unknown PanelWidget); // Function U.U.HideDefaultAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowDefaultAnim(struct Unknown PanelWidget); // Function U.U.ShowDefaultAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetMessageText(struct Unknown PanelWidget, struct FText Message); // Function U.U.SetMessageText(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckPriority(enum class Unknow MessageType, int32_t Priority, char& CanMessage); // Function U.U.CheckPriority(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetPanelWidget(enum class Unknow MessageType, struct Unknown& PanelWidget); // Function U.U.GetPanelWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideHUDMessage(enum class Unknow MessageType); // Function U.U.HideHUDMessage(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowHUDMessage(struct Unknown MessageRow); // Function U.U.ShowHUDMessage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnAnimationFinished(struct Unknown Animation); // Function U.U.OnAnimationFinished(BlueprintCosmetic|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowHUDMessageAtNum(enum class Unknow MessageType); // Function U.U.ShowHUDMessageAtNum(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnGameUserSettingsApply_GamePlay_Event_1(struct TArray<Unknown>& List); // Function U.U.OnGameUserSettingsApply_GamePlay_Event_1(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown Image_80; // 0x248 (8)

	void destroy(); // Function U.U.destroy(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown ADS_Pannel; // 0x250 (8)
	struct Unknown ADSZoom; // 0x258 (8)
	struct Unknown CanvasPanel_Main; // 0x260 (8)
	struct Unknown Descent; // 0x268 (8)
	struct Unknown Descent_Pannel; // 0x270 (8)
	struct Unknown Drive; // 0x278 (8)
	struct Unknown Drive_Pannel; // 0x280 (8)
	struct Unknown Key_ADSZeroingM; // 0x288 (8)
	struct Unknown Key_ADSZeroingP; // 0x290 (8)
	struct Unknown Key_ADSZoomIn; // 0x298 (8)
	struct Unknown Key_ADSZoomOut; // 0x2A0 (8)
	struct Unknown Ladder; // 0x2A8 (8)
	struct Unknown Ladder_Pannel; // 0x2B0 (8)
	struct Unknown Parachuting; // 0x2B8 (8)
	struct Unknown Parachuting_Pannel; // 0x2C0 (8)
	struct Unknown SmartPing; // 0x2C8 (8)
	struct Unknown SmartPing_Pannel; // 0x2D0 (8)
	struct Unknown Spectate; // 0x2D8 (8)
	struct Unknown Spectate_Pannel; // 0x2E0 (8)
	struct Unknown Swim; // 0x2E8 (8)
	struct Unknown Swim_Pannel; // 0x2F0 (8)
	struct Unknown T_ADSZeroingM; // 0x2F8 (8)
	struct Unknown T_ADSZeroingP; // 0x300 (8)
	struct Unknown T_ADSZoomIn; // 0x308 (8)
	struct Unknown T_ADSZoomOut; // 0x310 (8)
	struct Unknown UseItem; // 0x318 (8)
	struct Unknown UseItem_Pannel; // 0x320 (8)
	struct Unknown WidgetSwitcher_Guide; // 0x328 (8)
	struct Unknown WorldMap; // 0x330 (8)
	struct Unknown WorldMap_Always; // 0x338 (8)
	struct Unknown WorldMap_Pannel; // 0x340 (8)

	void UpdateWorldMapGuideOpacity(int32_t PreZoomLevel, int32_t NewZoomLevel); // Function U.U.UpdateWorldMapGuideOpacity(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckMainVisibility(); // Function U.U.CheckMainVisibility(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RefreshKeys(); // Function U.U.RefreshKeys(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckADSMode(); // Function U.U.CheckADSMode(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateVisibleSpectateWidget(); // Function U.U.UpdateVisibleSpectateWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetGuideMode(struct FText Message); // Function U.U.SetGuideMode(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetVisibilityByUserSettings(); // Function U.U.SetVisibilityByUserSettings(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangedPlayerInfosDelegate_Event_1(); // Function U.U.OnChangedPlayerInfosDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Destruct(); // Function U.U.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnGameUserSettingsApply_Key_Event_1(struct TArray<Unknown>& List); // Function U.U.OnGameUserSettingsApply_Key_Event_1(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangeWorldMapZoomLevelDelegate_Event_1(int32_t PreZoomLevel, int32_t NewZoomLevel); // Function U.U.OnChangeWorldMapZoomLevelDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelCompassWidget {

public:

	struct Unknown UberGraphFrame; // 0x350 (8)
	struct Unknown CanvasPanel_3; // 0x358 (8)
	struct Unknown CanvasPanel_4; // 0x360 (8)
	struct Unknown grid; // 0x368 (8)
	struct Unknown Image; // 0x370 (8)
	struct Unknown Image_1; // 0x378 (8)
	struct Unknown Image_2; // 0x380 (8)
	struct Unknown Image_234; // 0x388 (8)
	struct Unknown Image_582; // 0x390 (8)
	struct Unknown InvalidationBox_1; // 0x398 (8)
	struct Unknown RetainerBox_108; // 0x3A0 (8)
	struct Unknown SupplyBoxMarker; // 0x3A8 (8)
	struct Unknown UnitParent; // 0x3B0 (8)
	struct Unknown U; // 0x3B8 (8)
	struct Unknown U_2; // 0x3C0 (8)
	struct Unknown U_3; // 0x3C8 (8)
	struct Unknown U_4; // 0x3D0 (8)
	struct Unknown U_5; // 0x3D8 (8)
	struct Unknown U_6; // 0x3E0 (8)
	struct Unknown U_7; // 0x3E8 (8)
	struct Unknown U_8; // 0x3F0 (8)
	struct Unknown U_9; // 0x3F8 (8)
	struct Unknown U_10; // 0x400 (8)
	struct Unknown U_11; // 0x408 (8)
	struct Unknown U_12; // 0x410 (8)
	struct Unknown U_13; // 0x418 (8)
	struct Unknown U_14; // 0x420 (8)
	struct Unknown U_1; // 0x428 (8)
	struct Unknown ViewAngle; // 0x430 (8)
	float ScaleForAngleToDistance; // 0x438 (4)
	float PositionCurveOffset; // 0x43C (4)
	struct Unknown PositionCurve; // 0x440 (8)
	float PositionCurveWeight; // 0x448 (4)
	float ScaleCurveWeight; // 0x44C (4)
	float ScaleCurveOffset; // 0x450 (4)
	int32_t NormalDirectionFontSize; // 0x454 (4)
	int32_t SpecialDirectionFontSize; // 0x458 (4)
	struct TArray<Unknown> ArrayPlayerMarkerWidget; // 0x460 (16)
	struct Unknown NorthColor; // 0x470 (16)
	int32_t Angle0To360; // 0x480 (4)
	float TempMarkerPosition; // 0x484 (4)
	float ArrangedAngle; // 0x488 (4)

	struct Unknown CreateExpertWeaponItemMark(); // Function U.U.CreateExpertWeaponItemMark(Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown CreateLocalPingnMarker(); // Function U.U.CreateLocalPingnMarker(Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetWidgetPosition(struct Unknown Pos, struct Unknown Widget); // Function U.U.SetWidgetPosition(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown CreateResuscitationMarker(); // Function U.U.CreateResuscitationMarker(Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown CreateMaterialItemMarker(); // Function U.U.CreateMaterialItemMarker(Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText SetRotation(int32_t Angle); // Function U.U.SetRotation(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown CreateRuler(struct Unknown Position, float Angle); // Function U.U.CreateRuler(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CreateMarkerWidget(int32_t TeamPlayerCnt); // Function U.U.CreateMarkerWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	float GetDirectionAngle(float TargetAngle, float CurrentAngle, struct Unknown Curve); // Function U.U.GetDirectionAngle(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	float GetCurvedFactor(float TargetAngle, float CurrentAngle, float Weight, float Offeset, struct Unknown Curve); // Function U.U.GetCurvedFactor(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown CreateUnit(struct Unknown Position, float Angle); // Function U.U.CreateUnit(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	float ConvertAngleToDistance(float Angle); // Function U.U.ConvertAngleToDistance(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateMarkerRotation(); // Function U.U.UpdateMarkerRotation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateControllerRotation(float Value, int32_t RealAngle); // Function U.U.UpdateControllerRotation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnUpdateMarkerPosition(int32_t WidgetIdx); // Function U.U.OnUpdateMarkerPosition(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CreateMarker(int32_t Count); // Function U.U.CreateMarker(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnResetUnit(struct Unknown Widget, float UnitAngle); // Function U.U.OnResetUnit(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnUpdateViewAngle(float Value, int32_t RealAngle); // Function U.U.OnUpdateViewAngle(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnSetMarkerInfo(struct Unknown& MarkerPingInfo, char UsingSpawnAnimation); // Function U.U.OnSetMarkerInfo(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnUpdatePersonalSupplyBoxMarkerPosition(); // Function U.U.OnUpdatePersonalSupplyBoxMarkerPosition(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnSetPersonalSupplyBoxMark(struct Unknown& MarkerPingInfo, char Opened, char UsingSpawnAnimation); // Function U.U.OnSetPersonalSupplyBoxMark(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnUpdateMaterialItemMarkerPosition(int32_t PingIndex); // Function U.U.OnUpdateMaterialItemMarkerPosition(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnSetMaterialItemMarkerInfo(struct Unknown& MaterialMarker, char UsingSpawnAnimation); // Function U.U.OnSetMaterialItemMarkerInfo(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnUpdateResuscitationMarker(struct Unknown MarkerWidget, struct Unknown Pos); // Function U.U.OnUpdateResuscitationMarker(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnSetResuscitationMarkerInfo(struct Unknown MarkerWidget, struct Unknown PlayerState); // Function U.U.OnSetResuscitationMarkerInfo(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnSetLocalPingMarkerInfo(struct Unknown& LocalPingMarker, char UsingSpawnAnimation); // Function U.U.OnSetLocalPingMarkerInfo(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnUpdateLocalPingMarkerPosition(int32_t PingIndex); // Function U.U.OnUpdateLocalPingMarkerPosition(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnUpdateExpertWeaponItem(); // Function U.U.OnUpdateExpertWeaponItemMsition(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnSetExpertWeaponItemMarkerInfo(struct Unknown& ExpertWeaponMarker, char UsingSpawnAnimation); // Function U.U.OnSetExpertWeaponItemMarkerInfo(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelTeamPositionWidget {

public:

	struct Unknown UberGraphFrame; // 0x290 (8)
	struct Unknown Anim_Bouncing; // 0x298 (8)
	struct Unknown CanvasRequestResuscitation; // 0x2A0 (8)
	struct Unknown CriticalGuage; // 0x2A8 (8)
	struct Unknown DyingGuage; // 0x2B0 (8)
	struct Unknown Img_StateDeath; // 0x2B8 (8)
	struct Unknown Img_StateDisconnect; // 0x2C0 (8)
	struct Unknown Img_StateParachute; // 0x2C8 (8)
	struct Unknown Img_StateRevival; // 0x2D0 (8)
	struct Unknown Img_StateVehicle; // 0x2D8 (8)
	struct Unknown Img_TeamColor; // 0x2E0 (8)
	struct Unknown KnockDownBar; // 0x2E8 (8)
	struct Unknown MoveParameter; // 0x2F0 (8)
	struct Unknown RevivingGuage; // 0x2F8 (8)
	struct Unknown Switcher_Guage; // 0x300 (8)
	struct Unknown Switcher_Icon; // 0x308 (8)
	struct Unknown TextBlock_Name; // 0x310 (8)
	struct Unknown TextBlock_PlayerIndex; // 0x318 (8)
	struct Unknown RevivingTimerHandle; // 0x320 (8)
	float TotalRevivingTime; // 0x328 (4)
	float CurrentRevivingTime; // 0x32C (4)
	char IsRequestResuscitation : 0; // 0x330 (1)

	void Move(); // Function U.U.Move(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckRequestResuscitation(); // Function U.U.CheckRequestResuscitation(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetHealthPercent(float& Percent); // Function U.U.GetHealthPercent(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateKnockOutHealth(); // Function U.U.UpdateKnockOutHealth(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateCastingGauge(char& IsCasting); // Function U.U.UpdateCastingGauge(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetNameVisibility(); // Function U.U.SetNameVisibility(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTeamNumInfo(); // Function U.U.SetTeamNumInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateRevivalGauge(); // Function U.U.UpdateRevivalGauge(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateKnockOutGauge(); // Function U.U.UpdateKnockOutGauge(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateGauge(); // Function U.U.UpdateGauge(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetIconSwitcher(); // Function U.U.SetIconSwitcher(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetRotationVisibility(); // Function U.U.SetRotationVisibility(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTeamColorVisibility(); // Function U.U.SetTeamColorVisibility(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPlayerName(); // Function U.U.SetPlayerName(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_OnChangedBehavior(); // Function U.U.K2_OnChangedBehavior(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_OnChangedDisconnect(); // Function U.U.K2_OnChangedDisconnect(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_OnChangedIconIndex(); // Function U.U.K2_OnChangedIconIndex(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_OnChangedIsInViewport(); // Function U.U.K2_OnChangedIsInViewport(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_OnChangedPlayerState(); // Function U.U.K2_OnChangedPlayerState(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown FadeOut; // 0x250 (8)
	struct Unknown HitImage; // 0x258 (8)
	struct Unknown SizeBox_1; // 0x260 (8)
	struct Unknown InstigatorLocation; // 0x268 (12)
	struct Unknown InstigatorCharacter; // 0x278 (8)

	void Hide(); // Function U.U.Hide(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelCompassUnitWidget {

public:

	struct Unknown InvalidationBox_1; // 0x250 (8)
	struct Unknown InvalidationBox_2; // 0x258 (8)
	struct Unknown SpecialText; // 0x260 (8)

	struct FText GetAngleText(int32_t Angle, char& IsNormal); // Function U.U.GetAngleText(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Initialize(float Direction, int32_t NormalDirectionFontSize, int32_t SpecialDirectionFontSize); // Function U.U.Initialize(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelMainWidget {

public:

	struct Unknown UberGraphFrame; // 0x450 (8)
	struct Unknown Anim_HideWidget; // 0x458 (8)
	struct Unknown HideLaserPoint; // 0x460 (8)
	struct Unknown ShowLaserPoint; // 0x468 (8)
	struct Unknown BackgroundBlur_154; // 0x470 (8)
	struct Unknown Canvas; // 0x478 (8)
	struct Unknown HB_PerkSpin; // 0x480 (8)
	struct Unknown RedCircle; // 0x488 (8)
	struct Unknown TextBlock_Start; // 0x490 (8)
	struct Unknown U; // 0x498 (8)
	struct Unknown U; // 0x4A0 (8)
	struct Unknown U; // 0x4A8 (8)
	struct Unknown U; // 0x4B0 (8)
	struct Unknown U; // 0x4B8 (8)
	struct Unknown U; // 0x4C0 (8)
	struct Unknown U; // 0x4C8 (8)
	struct Unknown TargetPawn; // 0x4D0 (8)
	struct Unknown LastDisplayAbility; // 0x4D8 (12)
	struct TArray<Unknown> GainPerkPopups; // 0x4E8 (16)
	struct Unknown U; // 0x4F8 (8)
	struct Unknown U; // 0x500 (8)
	struct Unknown Timer_IsMouseWidgetInMap; // 0x508 (8)
	struct Unknown U; // 0x510 (8)
	char bIsShow : 0; // 0x518 (1)
	float TmpViewportUpAngle; // 0x51C (4)
	float TmpViewportSideAngle; // 0x520 (4)
	struct Unknown CenterPosition; // 0x524 (8)
	struct Unknown U; // 0x530 (8)
	struct Unknown Timer_AutoPerkDeck; // 0x538 (8)
	int32_t LastPlayZoneID; // 0x540 (4)
	char bShowLevelUp : 0; // 0x544 (1)
	char IsPlayingUltimateSound : 0; // 0x545 (1)
	char bIsUnlockUltimateSkill : 0; // 0x546 (1)

	void HideSkillMouseCursor(); // Function U.U.HideSkillMouseCursor(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowSkillMouseCursor(); // Function U.U.ShowSkillMouseCursor(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckUltimateSound(int32_t CurrentLevel); // Function U.U.CheckUltimateSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateAllInvalidationbox(); // Function U.U.UpdateAllInvalidationbox(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetSightInfoPosition(enum class Unknow FireType); // Function U.U.SetSightInfoPosition(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowProgressMessage(int32_t Type, int32_t Time); // Function U.U.ShowProgressMessage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateNitroTargetWidget(struct Unknown TargetPosition); // Function U.U.UpdateNitroTargetWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Change(); // Function U.U.Change(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetMouseWidget(); // Function U.U.ResetMouseWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown GetMiniMapWidget(); // Function U.U.GetMiniMapWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckChangedPlayZone(); // Function U.U.CheckChangedPlayZone(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideMapImageWidget(char SetTimer); // Function U.U.HideMapImageWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowMapImageWidget(); // Function U.U.ShowMapImageWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckMapImageWidget(enum class Unknow PreType, enum class Unknow CurrentType); // Function U.U.CheckMapImageWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckWorldMapGuideWidget(enum class Unknow PreType, enum class Unknow CurrentType); // Function U.U.CheckWorldMapGuideWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ADSGuideWidget(enum class Unknow PreFireType, enum class Unknow FireType); // Function U.U.ADSGuideWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideSmartpingSelectionMenu(); // Function U.U.HideSmartpingSelectionMenu(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddDeathUserWidget(struct Unknown BroadCastInfo); // Function U.U.AddDeathUserWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetVisibleWorldTeamPositionWidget(enum class Unknow ToggleType); // Function U.U.SetVisibleWorldTeamPositionWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CalcMinMaxViewportPositionForTeamPositionWidget(); // Function U.U.CalcMinMaxViewportPositionForTeamPositionWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowZeroingDistance(); // Function U.U.ShowZeroingDistance(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown GetInteractiveWidget(); // Function U.U.GetInteractiveWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void WorldMapReInit(); // Function U.U.WorldMapReInit(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ChangeWidgetVisibleByToggleType(enum class Unknow CurrentType); // Function U.U.ChangeWidgetVisibleByToggleType(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char IsOpenSystemPopup(); // Function U.U.IsOpenSystemPopup(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateLaserPoint(float DeltaTime); // Function U.U.UpdateLaserPoint(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckAutoOpenPerkDeck(); // Function U.U.CheckAutoOpenPerkDeck(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetSightViewRatio(enum class Unknow SightType, struct Unknown& Translation); // Function U.U.GetSightViewRatio(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RemovePerkPopup(struct Unknown PerkPopup); // Function U.U.RemovePerkPopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Play(enum class Unknow LevelUpType, struct Unknown DisplayAbility); // Function U.U.Play(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnReadyToSnipe(enum class Unknow FireType); // Function U.U.OnReadyToSnipe(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void On(enum class Unknow PreviousState, enum class Unknow CurrentState); // Function U.U.On(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function U.U.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ClosePopup(); // Function U.U.ClosePopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OpenPopup(); // Function U.U.OpenPopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangeFireType_Ev_1(enum class Unknow PreFireType, enum class Unknow NewFireType); // Function U.U.OnChangeFireType_Ev_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BindDelegates(); // Function U.U.BindDelegates(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UnbindDelegates(); // Function U.U.UnbindDelegates(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReadyGivePerk(); // Function U.U.ReadyGivePerk(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OpenPerkDeck(); // Function U.U.OpenPerkDeck(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateLineOfFire(struct Unknown& Pos, char LastUpdate, float delataTime); // Function U.U.UpdateLineOfFire(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowLineOfFire(struct Unknown& Pos); // Function U.U.ShowLineOfFire(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowHittedDamage(struct Unknown InstigatorCharacter); // Function U.U.ShowHittedDamage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowDeathUserWidget(struct Unknown& Info); // Function U.U.ShowDeathUserWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void LevelUpEvent(struct Unknown PerkInfo, int32_t CurrentLevel, enum class Unknow LevelUpType, struct Unknown DisplayAbility, int32_t LastLevel); // Function U.U.LevelUpEvent(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangedToggleType(enum class Unknow PreType, enum class Unknow CurrentType); // Function U.U.OnChangedToggleType(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideHUDMessage(enum class Unknow MessageType); // Function U.U.HideHUDMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddCoreInfoSmartping(struct Unknown PlayerState); // Function U.U.AddCoreInfoSmartping(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddCoreInfoRouteping(struct Unknown PlayerState); // Function U.U.AddCoreInfoRouteping(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddRequestMessage(struct Unknown PlayerState, struct FString Message); // Function U.U.AddRequestMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddCoreInfoRequestResuscitation(struct Unknown PlayerState); // Function U.U.AddCoreInfoRequestResuscitation(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowHUDMessage(struct Unknown MessageRow); // Function U.U.ShowHUDMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnAllLevelLoadedFirstTime(); // Function U.U.OnAllLevelLoadedFirstTime(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BPOnViewportSized(); // Function U.U.BPOnViewportSized(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckVisiblilityPerkDeck_BP(); // Function U.U.CheckVisiblilityPerkDeck_BP(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ChangeMouseCursorWidget(); // Function U.U.ChangeMouseCursorWidget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetMouseCursorWidget(); // Function U.U.ResetMouseCursorWidget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDoSkillBySkillMap(); // Function U.U.OnDoSkillBySkillMap(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateNitroBoomWidget(struct Unknown TargetPosition); // Function U.U.UpdateNitroBoomWidget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTeamSize(int32_t Size); // Function U.U.SetTeamSize(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideNitroBoomWidget(); // Function U.U.HideNitroBoomWidget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Timer_ShowProgressMessage(); // Function U.U.Timer_ShowProgressMessage(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnPhaseChanged1(int32_t PrevPhase, int32_t CurrentPhase); // Function U.U.OnPhaseChanged1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnBlueZoneDelegate_Event_1(); // Function U.U.OnBlueZoneDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnBlueZoneStateChanged_Event_1(enum class Unknow PrevState, enum class Unknow CurrentState); // Function U.U.OnBlueZoneStateChanged_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangedPlayerInfos(); // Function U.U.OnChangedPlayerInfos(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateChargeGauge(float MaxChargeValue, float CurrentChargeValue); // Function U.U.UpdateChargeGauge(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RemoveChargeGauge(); // Function U.U.RemoveChargeGauge(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StopChargeGauge(); // Function U.U.StopChargeGauge(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnRemoveChargeGauge(); // Function U.U.OnRemoveChargeGauge(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowAnim(); // Function U.U.ShowAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideAnim(); // Function U.U.HideAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowStatupAnim(struct Unknown& StatupParameters); // Function U.U.ShowStatupAnim(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_UpdateAllInvalidationbox(); // Function U.U.K2_UpdateAllInvalidationbox(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown RichTextBlock_52; // 0x250 (8)
	struct FText SetText; // 0x258 (24)

	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Action; // 0x250 (8)
	struct Unknown Image_14; // 0x258 (8)
	struct Unknown LeftBtn; // 0x260 (8)
	struct Unknown MidBtn; // 0x268 (8)
	struct Unknown Mouse; // 0x270 (8)
	struct Unknown RightBtn; // 0x278 (8)
	struct Unknown ScaleBox_2; // 0x280 (8)
	struct Unknown SideDown; // 0x288 (8)
	struct Unknown SideUp; // 0x290 (8)
	struct Unknown Text_Action; // 0x298 (8)
	struct Unknown Text_Action_UsingAlphaBg; // 0x2A0 (8)
	struct Unknown Turn; // 0x2A8 (8)
	struct Unknown WheelDown; // 0x2B0 (8)
	struct Unknown WheelUp; // 0x2B8 (8)
	struct Unknown WidgetSwitcher_TextStyle; // 0x2C0 (8)
	struct Unknown X; // 0x2C8 (8)
	struct Unknown Y; // 0x2D0 (8)
	struct Unknown Temp; // 0x2D8 (8)
	char NewVar_1 : 0; // 0x2E0 (1)
	float DefalutScale; // 0x2E4 (4)

	void SetFontSize(int32_t Size); // Function U.U.SetFontSize(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetKeyNameFromKey(struct Unknown Key, struct FString& Name); // Function U.U.GetKeyNameFromKey(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(struct FName KeyString, struct Unknown InputKey); // Function U.U.Set(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void MK3DSpectatorPawn_Turn(); // Function U.U.MK3DSpectatorPawn_Turn(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(char Using); // Function U.U.Set(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown C; // 0x250 (8)
	struct Unknown Blink; // 0x258 (8)
	struct Unknown Dot; // 0x260 (8)
	struct Unknown MainCanvas; // 0x268 (8)
	struct Unknown BT; // 0x270 (8)
	struct Unknown C; // 0x278 (8)
	struct Unknown C; // 0x280 (8)
	struct Unknown C; // 0x288 (8)
	struct Unknown C; // 0x290 (8)
	struct Unknown C; // 0x298 (8)
	struct Unknown ED; // 0x2A0 (8)
	struct Unknown ED; // 0x2A8 (8)
	struct Unknown Image_1; // 0x2B0 (8)
	struct Unknown Image_2; // 0x2B8 (8)
	struct Unknown Image_3; // 0x2C0 (8)
	struct Unknown Image_5; // 0x2C8 (8)
	struct Unknown Image_10; // 0x2D0 (8)
	struct Unknown Image_204; // 0x2D8 (8)
	struct Unknown IM; // 0x2E0 (8)
	struct Unknown IM; // 0x2E8 (8)
	struct Unknown TX; // 0x2F0 (8)
	struct Unknown TX; // 0x2F8 (8)
	struct Unknown TX; // 0x300 (8)
	struct Unknown TXT_Connecting_Dot; // 0x308 (8)
	struct Unknown U; // 0x310 (8)
	struct Unknown TitleWidgetRef; // 0x318 (8)
	int32_t State; // 0x320 (4)
	char bPlayOnce : 0; // 0x324 (1)
	char bPopupOpen : 0; // 0x325 (1)
	struct Unknown ExitPopupKey; // 0x328 (24)

	void SetTitleWidget(struct Unknown TitleWidget); // Function U.U.SetTitleWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ProcessExitPopup(); // Function U.U.ProcessExitPopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckKeyUp(struct Unknown InputKey, char& bResult); // Function U.U.CheckKeyUp(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckKeyDown(struct Unknown InputKey, char& bResult); // Function U.U.CheckKeyDown(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ProcessInput(); // Function U.U.ProcessInput(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ProcessLogin(); // Function U.U.ProcessLogin(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Init(); // Function U.U.Init(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowPressAnyKey(struct Unknown BPTitleWidget); // Function U.U.ShowPressAnyKey(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowLoginError(int32_t ErrorCode, struct FString ExtraDescription); // Function U.U.ShowLoginError(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HIdeLoginError(); // Function U.U.HIdeLoginError(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__C(char bIsChecked); // Function U.U.BndEvt__C(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__BT(); // Function U.U.BndEvt__BT(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PreConstruct(char IsDesignTime); // Function U.U.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowServerConnecting(); // Function U.U.ShowServerConnecting(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowLoginUI(); // Function U.U.ShowLoginUI(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__BT(); // Function U.U.BndEvt__BT(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InputOpen(); // Function U.U.InputOpen(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetLoginState(); // Function U.U.SetLoginState(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ED(struct FText& Text, char CommitMethod); // Function U.U.BndEvt__ED(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ED(struct FText& Text, char CommitMethod); // Function U.U.BndEvt__ED(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Ani_FadeOut; // 0x250 (8)
	struct Unknown Ani_FadeIn; // 0x258 (8)
	struct Unknown 1; // 0x260 (8)
	struct Unknown 10; // 0x268 (8)
	struct Unknown 2; // 0x270 (8)
	struct Unknown 3; // 0x278 (8)
	struct Unknown 4; // 0x280 (8)
	struct Unknown 5; // 0x288 (8)
	struct Unknown 6; // 0x290 (8)
	struct Unknown 7; // 0x298 (8)
	struct Unknown 8; // 0x2A0 (8)
	struct Unknown 9; // 0x2A8 (8)
	struct Unknown Button_Beteran; // 0x2B0 (8)
	struct Unknown Button_GamePlayTutorial; // 0x2B8 (8)
	struct Unknown Button_TutorialMovie; // 0x2C0 (8)
	struct Unknown Image_62; // 0x2C8 (8)
	struct Unknown Image_369; // 0x2D0 (8)
	struct Unknown Light1; // 0x2D8 (8)
	struct Unknown Light2; // 0x2E0 (8)
	struct Unknown red1; // 0x2E8 (8)
	struct Unknown red2; // 0x2F0 (8)
	struct Unknown RichTextBlock; // 0x2F8 (8)
	struct Unknown RichTextBlock_418; // 0x300 (8)
	char NextScene : 0; // 0x308 (1)

	void MoveNextScene(); // Function U.U.MoveNextScene(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_247_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_247_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CustomEvent_1(); // Function U.U.CustomEvent_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CustomEvent(); // Function U.U.CustomEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Beteran_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_Beteran_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CustomEvent_2(); // Function U.U.CustomEvent_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnTrainingModeOffDelegate_Event_1(); // Function U.U.OnTrainingModeOffDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelLoginWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Blink; // 0x250 (8)
	struct Unknown FadeIn; // 0x258 (8)
	struct Unknown Button_480; // 0x260 (8)
	struct Unknown Button_482; // 0x268 (8)
	struct Unknown Button_483; // 0x270 (8)
	struct Unknown Button_484; // 0x278 (8)
	struct Unknown Button_485; // 0x280 (8)
	struct Unknown Button_486; // 0x288 (8)
	struct Unknown Button_ExitGame; // 0x290 (8)
	struct Unknown Button_Retry; // 0x298 (8)
	struct Unknown CanvasPanel_10; // 0x2A0 (8)
	struct Unknown CanvasPanel_143; // 0x2A8 (8)
	struct Unknown CanvasPanel_Default; // 0x2B0 (8)
	struct Unknown CanvasPanel_JuvenileRestricted; // 0x2B8 (8)
	struct Unknown CanvasPanel_RestrictedUser; // 0x2C0 (8)
	struct Unknown CanvasPanel_ServerInspection; // 0x2C8 (8)
	struct Unknown CanvasPanel_UnableToConnectServer; // 0x2D0 (8)
	struct Unknown CanvasPanel_WaitingServer; // 0x2D8 (8)
	struct Unknown HorizontalBox_1; // 0x2E0 (8)
	struct Unknown HorizontalBox_2; // 0x2E8 (8)
	struct Unknown Image_122; // 0x2F0 (8)
	struct Unknown Image_123; // 0x2F8 (8)
	struct Unknown Image_309; // 0x300 (8)
	struct Unknown Image_bg; // 0x308 (8)
	struct Unknown SizeBox; // 0x310 (8)
	struct Unknown SizeBox_2; // 0x318 (8)
	struct Unknown SizeBox_85; // 0x320 (8)
	struct Unknown TextBlock; // 0x328 (8)
	struct Unknown TextBlock_2; // 0x330 (8)
	struct Unknown TextBlock_3; // 0x338 (8)
	struct Unknown TextBlock_4; // 0x340 (8)
	struct Unknown TextBlock_544; // 0x348 (8)
	struct Unknown TextBlock_546; // 0x350 (8)
	struct Unknown TextBlock_Desc; // 0x358 (8)
	struct Unknown TextBlock_EndTime; // 0x360 (8)
	struct Unknown Throbber_1; // 0x368 (8)
	struct Unknown Throbber_979; // 0x370 (8)
	struct Unknown TX; // 0x378 (8)
	struct Unknown WidgetSwitcher_1; // 0x380 (8)
	struct Unknown TitleWidgetRef; // 0x388 (8)
	struct FString ErrorID; // 0x390 (16)
	int32_t ErrorIndex; // 0x3A0 (4)
	struct FString ErrorParameters; // 0x3A8 (16)
	struct Unknown MediaPlayer; // 0x3B8 (8)
	struct Unknown Media; // 0x3C0 (8)
	struct Unknown MediaTexture; // 0x3C8 (8)
	struct Unknown MediaSoundComp; // 0x3D0 (8)
	int32_t ApplyUserInfoCount; // 0x3D8 (4)
	char bServicePlatformFlow : 0; // 0x3DC (1)

	void DefaultMessage(); // Function U.U.DefaultMessage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ServicePlatformLogin(); // Function U.U.ServicePlatformLogin(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowBlock(); // Function U.U.ShowBlock(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UodateWaitingUser(int32_t UserCount, int32_t Time); // Function U.U.UodateWaitingUser(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowNotice(int32_t Idx); // Function U.U.ShowNotice(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function U.U.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_479_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_479_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_481_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_481_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_485_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_485_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_482_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_482_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_484_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_484_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoginSucceeded(); // Function U.U.OnLoginSucceeded(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnCreateCharacter_Event_1(); // Function U.U.OnCreateCharacter_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void WaitingUserDelegate_Event_1(int32_t WaitingUserCount, int32_t WaitingTime); // Function U.U.WaitingUserDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Destruct(); // Function U.U.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CustomEvent_1(int32_t ErrorIndex, struct FString ErrorID, struct FString Parameters); // Function U.U.CustomEvent_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Login(); // Function U.U.Login(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PressAnyKeyDelayTime(); // Function U.U.PressAnyKeyDelayTime(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function U.U.BndEvt__Button_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CustomEvent_2(struct FString Parameters); // Function U.U.CustomEvent_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void QuitGame(float DelayTime); // Function U.U.QuitGame(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown FadeIn; // 0x250 (8)
	struct Unknown Image; // 0x258 (8)
	struct Unknown Image_2; // 0x260 (8)
	struct Unknown Image_69; // 0x268 (8)
	char NextScene : 0; // 0x270 (1)

	void Destory(); // Function U.U.Destory(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void MoveNextScene(); // Function U.U.MoveNextScene(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function U.U.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (); // Function U.U.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelScopeWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Idle; // 0x250 (8)
	struct Unknown Scope_In; // 0x258 (8)
	struct Unknown CanvasPanel_1; // 0x260 (8)
	struct Unknown Distance_Image; // 0x268 (8)
	struct Unknown Distance_Text; // 0x270 (8)
	struct Unknown Magnify_Image; // 0x278 (8)
	struct Unknown Magnify_Text; // 0x280 (8)
	struct Unknown Scope_BG; // 0x288 (8)
	struct Unknown Scope_Info_Line; // 0x290 (8)
	struct Unknown Scope_Wing; // 0x298 (8)

	struct Unknown Get_Distance_Text_ColorAndOpacity_1(); // Function U.U.Get_Distance_Text_ColorAndOpacity_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText Get_Magnify_Text(); // Function U.U.Get_Magnify_Text(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText Get_DistanceText(); // Function U.U.Get_DistanceText(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetScopeImageAngle(float NewAngle); // Function U.U.SetScopeImageAngle(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_OnEnterADS(); // Function U.U.K2_OnEnterADS(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_OnExitADS(); // Function U.U.K2_OnExitADS(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelScopeWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown CanvasPanel_1; // 0x250 (8)
	struct Unknown Image_25; // 0x258 (8)
	struct Unknown Image_26; // 0x260 (8)
	struct Unknown Image_27; // 0x268 (8)
	struct Unknown Image_28; // 0x270 (8)
	struct Unknown Image_29; // 0x278 (8)
	struct Unknown Image_30; // 0x280 (8)
	struct Unknown WidgetSwitcher_167; // 0x288 (8)
	struct Unknown NewVar_1; // 0x290 (8)

	void SetScopeImageAngle(float NewAngle); // Function U.U.SetScopeImageAngle(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UBravoHotelScopeWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Image_1; // 0x250 (8)

	void SetScopeImageAngle(float NewAngle); // Function U.U.SetScopeImageAngle(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UU {

public:

	struct Unknown UberGraphFrame; // 0x268 (8)
	struct Unknown SeatIcons; // 0x270 (8)
	struct Unknown WheelIcons; // 0x278 (8)

	void Setup(struct Unknown VehicleInstance); // Function U.U.Setup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UU {

public:

	struct Unknown UberGraphFrame; // 0x268 (8)
	struct Unknown SeatIcons; // 0x270 (8)
	struct Unknown WheelIcons; // 0x278 (8)

	void Setup(struct Unknown VehicleInstance); // Function U.U.Setup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UU {

public:

	struct Unknown UberGraphFrame; // 0x268 (8)
	struct Unknown SeatIcons; // 0x270 (8)
	struct Unknown WheelIcons; // 0x278 (8)

	void Setup(struct Unknown VehicleInstance); // Function U.U.Setup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UU {

public:

	struct Unknown UberGraphFrame; // 0x268 (8)
	struct Unknown SeatIcons; // 0x270 (8)
	struct Unknown WheelIcons; // 0x278 (8)

	void Setup(struct Unknown VehicleInstance); // Function U.U.Setup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UU {

public:

	struct Unknown UberGraphFrame; // 0x268 (8)
	struct Unknown SeatIcons; // 0x270 (8)
	struct Unknown WheelIcons; // 0x278 (8)

	void Setup(struct Unknown VehicleInstance); // Function U.U.Setup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UU {

public:

	struct Unknown UberGraphFrame; // 0x268 (8)
	struct Unknown SeatIcons; // 0x270 (8)
	struct Unknown WheelIcons; // 0x278 (8)

	void Setup(struct Unknown VehicleInstance); // Function U.U.Setup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass U.U
class UU : public UU {

public:

	struct Unknown UberGraphFrame; // 0x268 (8)
	struct Unknown SeatIcons; // 0x270 (8)
	struct Unknown WheelIcons; // 0x278 (8)

	void Setup(struct Unknown VehicleInstance); // Function U.U.Setup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_U(int32_t EntryPoint); // Function U.U.ExecuteUbergraph_U(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

