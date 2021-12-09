// Enum BravoHotelGame.EBuffEventType
enum class EBuffEventType : uint8 {
	None = 0,
	ActiveSkill00 = 1,
	ActiveSkill01 = 2,
	ActiveSkill02 = 3,
	ActiveSkill03 = 4,
	CancleActiveSkill00 = 5,
	CancleActiveSkill01 = 6,
	CancleActiveSkill02 = 7,
	CancleActiveSkill03 = 8,
	ReactiveSkill00 = 9,
	ReactiveSkill01 = 10,
	ReactiveSkill02 = 11,
	ReactiveSkill03 = 12,
	TT_Wood = 13,
	TT_Rock = 14,
	TT_Indoor = 15,
	TT_Fence = 16,
	TT_Grass = 17,
	TT_Cliff = 18,
	TT_Water = 19,
	TT_Air = 20,
	TT_Vehicle = 21,
	Hited = 22,
	Damaged = 23,
	ZeroHP = 24,
	Death = 25,
	ArmorBreak = 26,
	TeamKnockDown = 27,
	AfterLanding = 28,
	Prone3Second = 29,
	Health25Percent = 30,
	FillFuel = 31,
	Landed = 32,
	CarLanded = 33,
	ExitVehicle = 34,
	KickDoor = 35,
	RevivingTeam = 36,
	ResuscitatingTeam = 37,
	UsingMedicine = 38,
	UsingItem = 39,
	Jump = 40,
	Retreat = 41,
	Nuclear = 42,
	IntoSmoke = 43,
	OutofSmoke = 44,
	FireAxShot = 45,
	StartParkour = 46,
	OnTakeHeadShot = 47,
	ChangeWeapon = 48,
	Fire = 49,
	OnEnterADS = 50,
	WindowBreaching = 51,
	IntoWaterPhysicsVolume = 52,
	OutofWaterPhysicsVolume = 53,
	IntoWetFog = 54,
	OutofWetFog = 55,
	Reloading = 56,
	MAX = 57,
	NoIndex = 255
};

// Enum BravoHotelGame.EWeaponType
enum class EWeaponType : uint8 {
	WT_None = 0,
	WT_Assault = 1,
	WT_DMR = 2,
	WT_SMG = 3,
	WT_SniperRifle = 4,
	WT_Shotgun = 5,
	WT_Pistol = 6,
	WT_ThrowingWeapon = 7,
	WT_Melee = 8,
	WT_SecondaryWeapon = 9,
	WT_PerkWeapon = 10,
	WT_MainWeapon = 101,
	WT_SubWeapon = 102,
	WT_FlareGun = 103,
	WT_LMG = 104,
	WT_All = 105,
	WT_MAX = 106
};

// Enum BravoHotelGame.EWeaponBuffEventType
enum class EWeaponBuffEventType : uint8 {
	None = 0,
	HeadShotZeroHPEnemy = 1,
	LastShot = 2,
	ZeroHPEnemy = 3,
	ThrowingZeroHP = 4,
	TargetHit = 5,
	SRShot = 6,
	DMRShot = 7,
	Shot = 8,
	ActiveGrenade = 9,
	NoAmmoReload = 10,
	MAX = 11,
	NoIndex = 255
};

// Enum BravoHotelGame.EMediaPlayerState
enum class EMediaPlayerState : uint8 {
	MPS_Play = 0,
	MPS_End = 1,
	MPS_MAX = 2
};

// Enum BravoHotelGame.EAircraftFlightState
enum class EAircraftFlightState : uint8 {
	AFS_None = 0,
	AFS_Distributing = 1,
	AFS_ReadyToScramble = 2,
	AFS_Scrambling = 3,
	AFS_End = 4,
	AFS_MAX = 5
};

// Enum BravoHotelGame.EAircraftMovementMethod
enum class EAircraftMovementMethod : uint8 {
	AMT_USING_SPEED = 0,
	AMT_USING_MAX = 1
};

// Enum BravoHotelGame.EPickupRoot
enum class EPickupRoot : uint8 {
	PR_World = 0,
	PR_DeadBody = 1,
	PR_TransportSupply = 2,
	PR_PersonalSupply = 3,
	PR_Skill = 4,
	PR_None = 255,
	PR_MAX = 256
};

// Enum BravoHotelGame.EItemBindType
enum class EItemBindType : uint8 {
	None = 0,
	Supply = 1,
	Bindable = 2,
	Binded = 3,
	EItemBindType_MAX = 4
};

// Enum BravoHotelGame.EInventoryItemState
enum class EInventoryItemState : uint8 {
	IIS_None = 0,
	IIS_World = 1,
	IIS_Inventory = 2,
	IIS_Wearing = 3,
	IIS_Equipped = 4,
	IIS_AttachWeapon = 5,
	IIS_Dropped = 6,
	IIS_MaterialSlot = 7,
	IIS_MAX = 8
};

// Enum BravoHotelGame.EReplicationItemListType
enum class EReplicationItemListType : uint8 {
	None = 0,
	BackPackItem = 1,
	MaterialItem = 2,
	EReplicationItemListType_MAX = 3
};

// Enum BravoHotelGame.EAbilityCase
enum class EAbilityCase : uint8 {
	AC_None = 0,
	AC_Base = 1,
	AC_Booster = 2,
	AC_Wearable = 3,
	AC_OutOfSteady = 4,
	AC_NoDamage = 5,
	AC_KnockOut = 6,
	AC_Death = 7,
	AC_UseLadder = 8,
	AC_ClimbUp = 9,
	AC_Cheat = 10,
	AC_Damaged = 11,
	AC_UnderWater = 12,
	AC_CastingItem = 13,
	AC_IceLand = 14,
	AC_Reviving = 15,
	AC_KickDoor = 16,
	AC_Sliding = 17,
	AC_Rolling = 18,
	AC_Knockback = 19,
	AC_Ultimate = 20,
	AC_DriverBuff = 21,
	AC_Max = 22
};

// Enum BravoHotelGame.ECharacterConditionType
enum class ECharacterConditionType : uint8 {
	CCT_None = 0,
	CCT_NoDamage = 1,
	CCT_NoSprint = 2,
	CCT_NoSteadyAim = 3,
	CCT_NoOxygen = 4,
	CCT_KnockOut = 5,
	CCT_CantAttack = 6,
	CCT_CantAction = 7,
	CCT_CantMove = 8,
	CCT_CantRotation = 9,
	CCT_CantGainItem = 10,
	CCT_CantChangeGroundState = 11,
	CCT_PerfectShot = 12,
	CCT_Cold = 13,
	CCT_Heat = 14,
	CCT_Burn = 15,
	CCT_Wet = 16,
	CCT_Hurt = 17,
	CCT_Stun = 18,
	CCT_SpatialSense = 19,
	CCT_Deafen = 20,
	CCT_Teleport = 21,
	CCT_InWetFog = 22,
	CCT_BlackOut = 23,
	CCT_ForceField = 24,
	CCT_Amplifier = 25,
	CCT_HeartBeatSensor = 26,
	CCT_Resurrection = 27,
	CCT_CanSliding = 28,
	CCT_CanChangeGroundStateOnWater = 29,
	CCT_CanBreaching = 30,
	CCT_NoFallingDamage = 31,
	CCT_NoLandingAnim = 32,
	CCT_WalkSilently = 33,
	CCT_MoveSilently = 34,
	CCT_AllSilently = 35,
	CCT_WaterSilently = 36,
	CCT_UseFlashbangBoobyTrap = 37,
	CCT_RocketJump = 38,
	CCT_SuperThrowingTrail = 39,
	CCT_HelmetSound = 40,
	CCT_GoodMoveOnWater = 41,
	CCT_BreakSilentlyPakour = 42,
	CCT_AvoidHeadShot = 43,
	CCT_HeadBanging = 44,
	CCT_HandSpeed = 45,
	CCT_HandSpeedADS = 46,
	CCT_SkipBoltAction = 47,
	CCT_Stuntman = 48,
	CCT_SeeThroughSmoke = 49,
	CCT_JetpackBooster = 50,
	CCT_JetpackAimBooster = 51,
	CCT_MeteorJump = 52,
	CCT_KeepHealthOne = 53,
	CCT_CantDropItem = 54,
	CCT_LockCurrentWeapon = 55,
	CCT_NoCarLandingDamageToTeam = 56,
	CCT_Max = 57
};

// Enum BravoHotelGame.EPerkLevelUpType
enum class EPerkLevelUpType : uint8 {
	Default = 0,
	ByBuff = 1,
	ByKill = 2,
	ByPhase = 3,
	ByGameStart = 4,
	EPerkLevelUpType_MAX = 5
};

// Enum BravoHotelGame.EPerkSlotFlag
enum class EPerkSlotFlag : uint8 {
	PSF_None = 0,
	PSF_Red = 1,
	PSF_Green = 2,
	PSF_Blue = 4,
	PSF_All = 255,
	PSF_MAX = 256
};

// Enum BravoHotelGame.ECastingUIType
enum class ECastingUIType : uint8 {
	CUT_Item = 0,
	CUT_Revive = 1,
	CUT_Resuscitation = 2,
	CUT_PersonalSupplyBox = 3,
	CUT_Reload = 4,
	CUT_Combine = 5,
	CUT_Repair = 6,
	CUT_MAX = 7
};

// Enum BravoHotelGame.ESettingType
enum class ESettingType : uint8 {
	Begin = 0,
	Graphic_Begin = 1,
	Graphic_Language = 2,
	Graphic_Resolution = 3,
	Graphic_ResolutionX = 4,
	Graphic_ResolutionY = 5,
	Graphic_DisplayMod = 6,
	Graphic_Gamma = 7,
	Graphic_Sharpen = 8,
	Graphic_FieldOfView = 9,
	Graphic_ResolutionScale = 10,
	Graphic_TotalGraphic = 11,
	Graphic_FoliageDensity = 12,
	Graphic_AntiAliasing = 13,
	Graphic_PostProcessing = 14,
	Graphic_ShdowQuality = 15,
	Graphic_ShadingQuality = 16,
	Graphic_ViewDistanceQuality = 17,
	Graphic_TextureQuality = 18,
	Graphic_EffectQuality = 19,
	Graphic_VSync = 20,
	Graphic_SmoothFrameRate = 21,
	Graphic_ConfirmTime = 22,
	Graphic_Reflex = 23,
	Graphic_DLSS = 24,
	Graphic_MaxFrameRate = 25,
	Graphic_MaxLobbyFrameRate = 26,
	Graphic_DepthOfField = 27,
	Graphic_FSR = 28,
	Graphic_End = 29,
	Audio_Begin = 30,
	Audio_MasterVolumeOnOff = 31,
	Audio_Master = 32,
	Audio_Music = 33,
	Audio_Effect = 34,
	Audio_UI = 35,
	Audio_VoiceInputMode = 36,
	Audio_VoiceChanel = 37,
	Audio_VoiceInput = 38,
	Audio_VoiceOutput = 39,
	Audio_End = 40,
	Key = 41,
	Control_Begin = 42,
	Control_VerticalModifier = 43,
	Control_GeneralSensitivity = 44,
	Control_VehicleDriverSensitivity = 45,
	Control_TargetingSensitivity = 46,
	Control_TotalSensitivity = 47,
	Control_UsingDetailSensitivity = 48,
	Control_ADSSensitivity = 49,
	Control_2XSensitivity = 50,
	Control_4XSensitivity = 51,
	Control_6XSensitivity = 52,
	Control_8XSensitivity = 53,
	Control_15XSensitivity = 54,
	Control_ToggleCrouch = 55,
	Control_ToggleWalk = 56,
	Control_ToggleSprint = 57,
	Control_ToggleFreeLook = 58,
	Control_ToggleSteadyAim = 59,
	Control_ToggleExLean = 60,
	Control_ToggleAOS = 61,
	Control_ToggleADS = 62,
	Control_ReverseLeftAndRight = 63,
	Control_ReverseUpAndDown = 64,
	Control_End = 65,
	GamePlay_Begin = 66,
	GamePlay_ARFireMode = 67,
	GamePlay_SMGFireMode = 68,
	GamePlay_SRFireMode = 69,
	GamePlay_DMRFireMode = 70,
	GamePlay_PistolFireMode = 71,
	GamePlay_AutoReload = 72,
	GamePlay_ImmediateAttachment = 73,
	GamePlay_InheritAttachment = 74,
	GamePlay_ShowPerkSlot = 75,
	GamePlay_ShowSmartPing = 76,
	GamePlay_ShowSmartPingSupplyBox = 77,
	GamePlay_ShowSmartPingLightPole = 78,
	GamePlay_NetworkDebugStatistics = 79,
	GamePlay_ShowUseaableItemEffect = 80,
	GamePlay_AmmoEffect = 81,
	GamePlay_MedicalLv3Effect = 82,
	GamePlay_MedicalLv2Effect = 83,
	GamePlay_MedicalLv1Effect = 84,
	GamePlay_RedBoostEffect = 85,
	GamePlay_GreenBoostEffect = 86,
	GamePlay_BlueBoostEffect = 87,
	GamePlay_AutoUse_MedicalLv1 = 88,
	GamePlay_AutoUse_MedicalLv2 = 89,
	GamePlay_AutoUse_MedicalLv3 = 90,
	GamePlay_AutoLadder = 91,
	GamePlay_ShowGuideWidget = 92,
	GamePlay_SearchMaterialItem = 93,
	GamePlay_SearchExpertWeaponItem = 94,
	GamePlay_ShowDamageLog = 95,
	GamePlay_PlayTutorial = 96,
	GamePlay_RePlayTutorial = 97,
	GamePlay_CrossHair = 98,
	GamePlay_CustomUseItem1 = 99,
	GamePlay_CustomUseItem2 = 100,
	GamePlay_CustomUseItem3 = 101,
	GamePlay_CustomUseItem4 = 102,
	GamePlay_CustomUseItem5 = 103,
	GamePlay_CustomUseItem6 = 104,
	GamePlay_CustomUseItem7 = 105,
	GamePlay_CustomUseItem8 = 106,
	GamePlay_End = 107,
	Dev_Begin = 108,
	Dev_AAFilterSize = 109,
	Dev_AACurrentFrameWeight = 110,
	Dev_AASamples = 111,
	Dev_TonemapperSharpen = 112,
	Dev_TemporalAAcatmullRom = 113,
	Dev_TemppralAApauseCorrect = 114,
	Dev_End = 115,
	ShowInventoryCharacter = 116,
	Version = 117,
	All = 118,
	End = 119,
	ESettingType_MAX = 120
};

// Enum BravoHotelGame.EPlosiveSoundDetectionType
enum class EPlosiveSoundDetectionType : uint8 {
	EPSDT_None = 0,
	EPSDT_Craft = 1,
	EPSDT_Capsule = 2,
	EPSDT_Skill = 3,
	EPSDT_MAX = 4
};

// Enum BravoHotelGame.ELandingReason
enum class ELandingReason : uint8 {
	LR_None = 0,
	LR_Jump = 1,
	LR_Descent = 2,
	LR_VehicleEscape = 3,
	LR_VehicleExit = 4,
	LR_VehicleCrash = 5,
	LR_VehicleAutoEscape = 6,
	LR_Parkour = 7,
	LR_RocketJump = 8,
	LR_Knockback = 9,
	LR_Stuntman = 10,
	LR_QuickLanding = 11,
	LR_Jetpack = 12,
	LR_MeteorJump = 13,
	LR_MAX = 14
};

// Enum BravoHotelGame.ELeanState
enum class ELeanState : uint8 {
	LS_Left = 0,
	LS_Middle = 1,
	LS_Right = 2,
	LS_MAX = 3
};

// Enum BravoHotelGame.ItemWidgetDragType
enum class ItemWidgetDragType : uint8 {
	ProximitySlot = 0,
	TransportSlot = 1,
	EquipSlot = 2,
	WeaponSlot = 3,
	AttachmentSlot = 4,
	RecipeSlot = 5,
	MaterialSlot = 6,
	ItemWidgetDragType_MAX = 7
};

// Enum BravoHotelGame.EWearableItemType
enum class EWearableItemType : uint8 {
	WIT_Hair = 0,
	WIT_Face = 1,
	WIT_Helmet = 2,
	WIT_Bag = 3,
	WIT_Armor = 4,
	WIT_GhillieSuit = 5,
	WIT_Hat = 6,
	WIT_Eyewear = 7,
	WIT_Mask = 8,
	WIT_Top = 9,
	WIT_Outer = 10,
	WIT_Gloves = 11,
	WIT_Bottom = 12,
	WIT_Shoes = 13,
	WIT_Parachute = 14,
	WIT_ParachuteBag = 16,
	WIT_Clipping = 17,
	WIT_Body = 18,
	WIT_None = 255,
	WIT_MAX = 256
};

// Enum BravoHotelGame.ECharacterAbilityType
enum class ECharacterAbilityType : uint8 {
	CAT_None = 0,
	CAT_MaxHP = 1,
	CAT_BoostHP = 2,
	CAT_MaxOxygen = 3,
	CAT_UseBreath = 4,
	CAT_MoveSpeed = 5,
	CAT_HealOfTime = 6,
	CAT_MaxCapacity = 7,
	CAT_ReloadSpeed = 8,
	CAT_BoltActionSpeed = 9,
	CAT_BoosterTime = 10,
	CAT_ExpBoost = 11,
	CAT_MaxSteady = 12,
	CAT_KnockOutHealth = 13,
	CAT_ADSSpeed = 14,
	CAT_ChangeWeaponSpeed = 15,
	CAT_RevivedHealth = 16,
	CAT_RevivingHealth = 17,
	CAT_ReviveSpeed = 18,
	CAT_ResuscitateSpeed = 19,
	CAT_ListeningRange = 20,
	CAT_ActSilently = 21,
	CAT_MoveWhileUsing = 22,
	CAT_BoostHealAmount = 23,
	CAT_HealTeamOne = 24,
	CAT_VehicleArmor = 25,
	CAT_ParkourSpeed = 26,
	CAT_VehicleEfficiency = 27,
	CAT_DamageReduceOwnBomb = 28,
	CAT_ProtectFlashBang = 29,
	CAT_IncressStun = 30,
	CAT_IncressFlameTime = 31,
	CAT_IncressFrameDamage = 32,
	CAT_ParachuteFallingSpeed = 33,
	CAT_IncressGrenadeBurstRange = 34,
	CAT_IncressHealLimit = 35,
	CAT_IncressAmplifierRange = 36,
	CAT_IncressHeartBeatSensorRange = 37,
	CAT_RocketJumpModifier = 38,
	CAT_GravityModifier = 39,
	CAT_LeftLeanAngleModifier = 40,
	CAT_RightLeanAngleModifier = 41,
	CAT_LeftLeanSpeedModifier = 42,
	CAT_RightLeanSpeedModifier = 43,
	CAT_SuperThrowingTrailViewDistance = 44,
	CAT_ShiningThrowProjectileViewDistance = 45,
	CAT_FindParachutesDistance = 46,
	CAT_BulletproofGlass = 47,
	CAT_HeatScanRange = 48,
	CAT_ReduceBuffCooltime = 49,
	CAT_MeteorJumpModifier = 50,
	CAT_IncressAirControl = 51,
	CAT_MAX = 52
};

// Enum BravoHotelGame.EConditionType
enum class EConditionType : uint8 {
	CT_None = 0,
	CT_Switch = 1,
	CT_RTPC = 2,
	CT_State = 3,
	CT_MAX = 4
};

// Enum BravoHotelGame.EThrowingWeaponState
enum class EThrowingWeaponState : uint8 {
	ETWS_Idle = 0,
	ETWS_TakeOut = 1,
	ETWS_Ready = 2,
	ETWS_Cook = 3,
	ETWS_Throw = 4,
	ETWS_Drop = 5,
	ETWS_Fire = 6,
	ETWS_MAX = 7
};

// Enum BravoHotelGame.EFireType
enum class EFireType : uint8 {
	FT_None = 0,
	FT_HipShot = 1,
	FT_AOS = 2,
	FT_ADS = 3,
	FT_AMP = 4,
	FT_HBS = 5,
	FT_MAX = 6
};

// Enum BravoHotelGame.ECharacterState
enum class ECharacterState : uint8 {
	CS_None = 0,
	CS_Battle = 1,
	CS_InAircraft = 2,
	CS_Descent = 3,
	CS_Parachuting = 4,
	CS_Knockout = 5,
	CS_Death = 6,
	CS_Driver = 7,
	CS_DriverPossessedPawn = 8,
	CS_Passenger1 = 9,
	CS_Passenger2 = 10,
	CS_Passenger3 = 11,
	CS_Passenger4 = 12,
	CS_Passenger5 = 13,
	CS_Ladder = 14,
	CS_CriticalTime = 15,
	CS_InAircraftCinematic = 16,
	CS_StartReady = 17,
	CS_EndReady = 18,
	CS_Max = 19
};

// Enum BravoHotelGame.EGrenadeThrowingType
enum class EGrenadeThrowingType : uint8 {
	EGTT_None = 0,
	EGTT_OverThrow = 1,
	EGTT_UnderThrow = 2,
	EGTT_MAX = 3
};

// Enum BravoHotelGame.EWaterDepthType
enum class EWaterDepthType : uint8 {
	WDT_NoWater = 0,
	WDT_Shallow = 1,
	WDT_NoProne = 2,
	WDT_NoCrouch = 3,
	WDT_SurfaceWater = 4,
	WDT_UnderWater = 5,
	WDT_MAX = 6
};

// Enum BravoHotelGame.ECharacterBuffType
enum class ECharacterBuffType : uint8 {
	CBT_None = 0,
	CBT_Booster = 2,
	CBT_Bandage = 4,
	CBT_OutOfSteady = 8,
	CBT_Reviving = 16,
	CBT_NoDamage = 32,
	CBT_MAX = 33
};

// Enum BravoHotelGame.ESuperPeopleClass
enum class ESuperPeopleClass : uint8 {
	ESPC_None = 0,
	ESPC_Gatling = 1,
	ESPC_SGMaster = 2,
	ESPC_StrikingForces = 3,
	ESPC_Sniper = 4,
	ESPC_Recon = 5,
	ESPC_Gas = 6,
	ESPC_Marine = 7,
	ESPC_Teleporter = 8,
	ESPC_SWAT = 9,
	ESPC_WeaponMaster = 10,
	ESPC_Nuclear = 11,
	ESPC_Driver = 12,
	ESPC_MAX = 13
};

// Enum BravoHotelGame.ECharacterAudioEventType
enum class ECharacterAudioEventType : uint8 {
	EquipWearable = 0,
	EquipAttachment = 1,
	EquipWeapon = 2,
	PickupBackpack = 3,
	PickupStartEvent = 4,
	PickupConsumables = 5,
	ECharacterAudioEventType_MAX = 6
};

// Enum BravoHotelGame.EBattleRoyaleState
enum class EBattleRoyaleState : uint8 {
	EBRS_None = 0,
	EBRS_Waiting = 1,
	EBRS_Ready = 2,
	EBRS_CheckStartPlay = 3,
	EBRS_Play = 4,
	EBRS_MatchEnd = 5,
	EBRS_MAX = 6
};

// Enum BravoHotelGame.ECharacterGroundState
enum class ECharacterGroundState : uint8 {
	CGS_None = 0,
	CGS_Stand = 1,
	CGS_Crouch = 2,
	CGS_Prone = 3,
	CGS_MAX = 4
};

// Enum BravoHotelGame.EToggleWidgetModeType
enum class EToggleWidgetModeType : uint8 {
	TWMT_None = 0,
	TWMT_Inventory = 1,
	TWMT_WorldMap = 2,
	TWMT_BlackMarket = 3,
	TWMT_SkillMap = 4,
	TWMT_MAX = 5
};

// Enum BravoHotelGame.ETargetHealthType
enum class ETargetHealthType : uint8 {
	ETHT_Casting = 0,
	ETHT_Inventory = 1,
	ETHT_Bandage = 2,
	ETHT_MAX = 3
};

// Enum BravoHotelGame.EInteractionType
enum class EInteractionType : uint8 {
	IT_None = 0,
	IT_Item = 1,
	IT_Door = 2,
	IT_Revive = 3,
	IT_Vehicle = 4,
	IT_DropBox = 5,
	IT_PersonalSupplyBox = 6,
	IT_PersonalSupplyBoxFailed = 7,
	IT_Elevator = 8,
	IT_Ladder = 9,
	IT_OnLadder = 10,
	IT_Resuscitation = 11,
	IT_Parachute = 12,
	IT_MeteorStrike = 13,
	IT_MAX = 14
};

// Enum BravoHotelGame.EProjectileGrenadeState
enum class EProjectileGrenadeState : uint8 {
	EPGS_Idle = 0,
	EPGS_Active = 1,
	EPGS_ActiveBoobyTrap = 2,
	EPGS_DestroyWithoutActive = 3,
	EPGS_ActiveByDamage = 4,
	EPGS_Deactive = 5,
	EPGS_MAX = 6
};

// Enum BravoHotelGame.EInDoorAdjustmentTarget
enum class EInDoorAdjustmentTarget : uint8 {
	IAT_None = 0,
	IAT_ThirdPersonCamera = 1,
	IAT_Audio_DEPRECATED = 2,
	IAT_PostProcess = 4,
	IAT_MAX = 5
};

// Enum BravoHotelGame.EKeySettingType
enum class EKeySettingType : uint8 {
	Key_Begin = 0,
	Key_MoveForward = 1,
	Key_MoveBack = 2,
	Key_MoveLeft = 3,
	Key_MoveRight = 4,
	Key_Walk = 5,
	Key_Sprint = 6,
	Key_Crouch = 7,
	Key_Prone = 8,
	Key_LeanRight = 9,
	Key_LeanLeft = 10,
	Key_Interaction = 11,
	Key_FPSOnly = 12,
	Key_ToggleAutoSprint = 13,
	Key_FreeLook = 14,
	Key_JumpParkour = 15,
	Key_Jump = 16,
	Key_Parkour = 17,
	Key_MoveUp = 18,
	Key_MoveDown = 19,
	Key_Fire = 20,
	Key_AltFire = 21,
	Key_AOS = 22,
	Key_ADS = 23,
	Key_Reload = 24,
	Key_ChangeWeaponUpside = 25,
	Key_ChangeWeaponDownside = 26,
	Key_WeapSlot_01 = 27,
	Key_WeapSlot_02 = 28,
	Key_WeapSlot_03 = 29,
	Key_WeapSlot_04 = 30,
	Key_WeapSlot_05 = 31,
	Key_ThrowWeapon = 32,
	Key_Fragment = 33,
	Key_Flashbang = 34,
	Key_Smoke = 35,
	Key_Molotove = 36,
	Key_ActiveSkill00 = 37,
	Key_CancleActiveSkill00 = 38,
	Key_ActiveSkill01 = 39,
	Key_DisArm = 40,
	Key_FireMode = 41,
	Key_ChangeThrowingMotion = 42,
	Key_CookThrowingWeapon = 43,
	Key_ZoomIn = 44,
	Key_ZoomOut = 45,
	Key_ZeroingDistanceUp = 46,
	Key_ZeroingDistanceDown = 47,
	Key_SteadyAim = 48,
	Key_UseTopRecoverItem = 49,
	Key_UseMediPack_Lv3 = 50,
	Key_UseMediPack_Lv2 = 51,
	Key_UseMediPack_Lv1 = 52,
	Key_BoostItemMenu = 53,
	Key_UseBoostItem = 54,
	Key_CustomUseItem = 55,
	Key_UseStrongPainkiller = 56,
	Key_UsePowerDrink = 57,
	Key_UseEnergyBar = 58,
	Key_UseTopSkillBook = 59,
	Key_UseRedBook = 60,
	Key_UseGreenBook = 61,
	Key_UseBlueBook = 62,
	Key_UseWhiteBook = 63,
	Key_UseBalckBook = 64,
	Key_VehicleMoveForward = 65,
	Key_VehicleMoveBack = 66,
	Key_VehicleMoveLeft = 67,
	Key_VehicleMoveRight = 68,
	Key_Handbrake = 69,
	Key_Nitro = 70,
	Key_VehicleHorn = 71,
	Key_VehicleSeat0 = 72,
	Key_VehicleSeat1 = 73,
	Key_VehicleSeat2 = 74,
	Key_VehicleSeat3 = 75,
	Key_VehicleSeat4 = 76,
	Key_WorldMap = 77,
	Key_MiniMap = 78,
	Key_Inventory = 79,
	Key_OptionMenu = 80,
	Key_SmartPing = 81,
	Key_OnlySmartPing = 82,
	Key_SmartPingMenu = 83,
	Key_SmartPingAgree = 84,
	Key_InsertMarker = 85,
	Key_DeleteMarker = 86,
	Key_AddMarker = 87,
	Key_SmartPingWorldMap = 88,
	Key_SmartPingMenuWorldMap = 89,
	Key_OnlySmartPingWorldMap = 90,
	Key_SmartPingAgreeWorldMap = 91,
	Key_RoutePing = 92,
	Key_DeleteRoutePing = 93,
	Key_InsertMarkerWorldMap = 94,
	Key_DeleteMarkerWorldMap = 95,
	Key_ToggleInGameHUD = 96,
	Key_ToggleGuideWidget = 97,
	Key_WorldMapMoveToPlayer = 98,
	Key_PushToTalk = 99,
	Key_MasterVolumeToggle = 100,
	Key_MasterVolumeUp = 101,
	Key_MasterVolumeDown = 102,
	Key_ShowNextPlayer = 103,
	Key_ShowPrePlayer = 104,
	Key_Combine01 = 105,
	Key_Combine02 = 106,
	Key_Combine03 = 107,
	Key_Combine04 = 108,
	Key_Combine05 = 109,
	Key_Combine06 = 110,
	Key_Combine07 = 111,
	Key_Combine08 = 112,
	Key_Combine09 = 113,
	Key_Combine10 = 114,
	Key_MK3DSpectatorPawn_SpeedUp = 115,
	Key_MK3DSpectatorPawn_SpeedDown = 116,
	Key_MK3DSpectatorPawn_ResetSpeed = 117,
	Key_MK3DReplayController_ReplayPause = 118,
	Key_MK3DReplayController_FreeCamera = 119,
	Key_MK3DReplayController_SetPlayerCameraForTargetInRecording = 120,
	Key_MK3DReplayController_IncreaseSpeedByIndex = 121,
	Key_MK3DReplayController_DecreaseSpeedByIndex = 122,
	Key_MK3DReplayController_GoToBeginTime = 123,
	Key_MK3DReplayController_GoToEndTime = 124,
	Key_MK3DReplayController_FindActorsByCursor = 125,
	Key_PlayerCamera = 126,
	Key_FollowCamera = 127,
	Key_TimeLineWidget = 128,
	Key_PlayerListWidget = 129,
	Key_PerkDeckWidget = 130,
	Key_ItemListWidget = 131,
	Key_MK3DSpectatorPawn_MoveForward = 132,
	Key_MK3DSpectatorPawn_MoveBack = 133,
	Key_MK3DSpectatorPawn_MoveLeft = 134,
	Key_MK3DSpectatorPawn_MoveRight = 135,
	Key_MK3DSpectatorPawn_MoveUp = 136,
	Key_MK3DSpectatorPawn_MoveDown = 137,
	Key_MK3DSpectatorPawn_Turn = 138,
	Key_MK3DSpectatorPawn_LookUp = 139,
	Key_End = 140,
	Key_MAX = 141
};

// Enum BravoHotelGame.EWeaponAttachmentItem
enum class EWeaponAttachmentItem : uint8 {
	WA_None = 0,
	WA_Sight_Basic = 1,
	WA_Sight_Reddot = 2,
	WA_Sight_Holo = 3,
	WA_Sight_2X = 4,
	WA_Sight_4X = 5,
	WA_Sight_8X = 6,
	WA_Sight_15X = 7,
	WA_Sight_Digital = 8,
	WA_Muzzle_AR_Silencer = 9,
	WA_Muzzle_AR_Compensator = 10,
	WA_Muzzle_AR_Suppressor = 11,
	WA_Muzzle_SMG_Silencer = 12,
	WA_Muzzle_SMG_Compensator = 13,
	WA_Muzzle_SMG_Suppressor = 14,
	WA_Muzzle_SR_Silencer = 15,
	WA_Muzzle_SR_Compensator = 16,
	WA_Muzzle_SR_Suppressor = 17,
	WA_Muzzle_Shotgun_Choke = 18,
	WA_Muzzle_Pistol_Silencer = 19,
	WA_Barrel_Basic = 20,
	WA_Barrel_Short = 21,
	WA_Barrel_Long = 22,
	WA_Mag_Basic = 23,
	WA_Mag_AR_QuickDraw = 24,
	WA_Mag_AR_Extended = 25,
	WA_Mag_AR_ExtendedQuickDraw = 26,
	WA_Mag_SMG_QuickDraw = 27,
	WA_Mag_SMG_Extended = 28,
	WA_Mag_SMG_ExtendedQuickDraw = 29,
	WA_Mag_SR_QuickDraw = 30,
	WA_Mag_SR_Extended = 31,
	WA_Mag_SR_ExtendedQuickDraw = 32,
	WA_Mag_Pistol_QuickDraw = 33,
	WA_Mag_Pistol_Extended = 34,
	WA_Mag_Pistol_ExtendedQuickDraw = 35,
	WA_Grip_Angled = 36,
	WA_Grip_Vertical = 37,
	WA_Stock_Shotgun_BulletLoops = 38,
	WA_Stock_SR_BulletLoops = 39,
	WA_Stock_SR_CheekPad = 40,
	WA_Stock_Tactical = 41,
	WA_Stock_MP = 42,
	WA_Perk01_Basic = 43,
	WA_Perk02_Basic = 44,
	WA_Perk03_Basic = 45,
	WA_Perk04_Basic = 46,
	WA_MAX = 47
};

// Enum BravoHotelGame.ECustomMovementMode
enum class ECustomMovementMode : uint8 {
	CMOVE_None = 0,
	CMOVE_Ragdoll = 1,
	CMOVE_Descent = 2,
	CMOVE_Drive = 3,
	CMOVE_Ladder = 4,
	CMOVE_Jetpack = 5,
	CMOVE_MAX = 6
};

// Enum BravoHotelGame.EMouseSensitivityState
enum class EMouseSensitivityState : uint8 {
	EMSS_None = 0,
	EMSS_Default = 1,
	EMSS_VehicleDriver = 2,
	EMSS_Targeting = 3,
	EMSS_Total = 4,
	EMSS_UsingDetail = 5,
	EMSS_ADS = 6,
	EMSS_2X = 7,
	EMSS_4X = 8,
	EMSS_6X = 9,
	EMSS_8X = 10,
	EMSS_15X = 11,
	EMSS_Vertical = 12,
	EMSS_MAX = 13
};

// Enum BravoHotelGame.ECharacterConditionedAbilityType
enum class ECharacterConditionedAbilityType : uint8 {
	CCAT_None = 0,
	CCAT_Searchable = 1,
	CCAT_DamageReduce = 2,
	CCAT_Armor = 3,
	CCAT_Durability = 4,
	CCAT_HorizontalRecoil = 5,
	CCAT_VerticalRecoil = 6,
	CCAT_MoveSpeed = 7,
	CCAT_Sway = 8,
	CCAT_DamageIncress = 9,
	CCAT_Post_DamageIncress = 10,
	CCAT_Accuracy = 11,
	CCAT_MovePenalty = 12,
	CCAT_ArmorDamage = 13,
	CCAT_HealAmount = 14,
	CCAT_UseSpeed = 15,
	CCAT_UseSpeedOnDamage = 16,
	CCAT_AdditionalItem = 17,
	CCAT_IncressRange = 18,
	CCAT_ReloadSpeed = 19,
	CCAT_ADSSpeed = 20,
	CCAT_RateOfFire = 21,
	CCAT_JumpHeight = 22,
	CCAT_DecressRampSpeedPenalty = 23,
	CCAT_LadderSpeed = 24,
	CCAT_LandedSpeed = 25,
	CCAT_DamageReduceOnBack = 26,
	CCAT_DamageReduceOnFront = 27,
	CCAT_IncressMazineCapacity = 28,
	CCAT_IncressBullet = 29,
	CCAT_DamageReduceOver200m = 30,
	CCAT_DamageReduceIn25m = 31,
	CCAT_DamageIncressBySpeed = 32,
	CCAT_Post_DamageIncressBySpeed = 33,
	CCAT_DamageReduceBySpeed = 34,
	CCAT_DamageIncressReverseSpeed = 35,
	CCAT_DamageReduceReverseSpeed = 36,
	CCAT_AirWalkDistance = 37,
	CCAT_DamageIncressBySnipeReady = 38,
	CCAT_DamageIncressByAntiAirFire = 39,
	CCAT_AutoAimWeight = 40,
	CCAT_AutoAimRadius = 41,
	CCAT_IncressThrowingWeaponDamage = 42,
	CCAT_IncressThrowingWeaponFireCount = 43,
	CCAT_IncressMaxCountFlashbangBoobyTrap = 44,
	CCAT_IncressRangeFlashbangBoobyTrap = 45,
	CCAT_IncressBurstCount = 46,
	CCAT_DamageIncressOnBlueZoneBorder = 47,
	CCAT_DamageReduceOnBlueZoneBorder = 48,
	CCAT_AdditionalConsumeAmmo = 49,
	CCAT_BoosterItemEffective = 50,
	CCAT_IncressThrowingWeaponHitDamage = 51,
	CCAT_IncressRangeMolotovCocktailBoobyTrap = 52,
	CCAT_IncressThrownRange = 53,
	CCAT_IncressThrownAnimSpeed = 54,
	CCAT_IncressFirePropagationLevel = 55,
	CCAT_IncressDeafenRange = 56,
	CCAT_InvisibleDamageIncress = 57,
	CCAT_InvisibleDamageReduce = 58,
	CCAT_MAX = 59
};

// Enum BravoHotelGame.EPingType
enum class EPingType : uint8 {
	PT_NoneTarget = 0,
	PT_Attack = 1,
	PT_Move = 2,
	PT_Item = 3,
	PT_Location = 4,
	PT_Vehicle = 5,
	PT_Support = 6,
	PT_SupplyBoxNoti = 7,
	PT_Caution = 8,
	PT_MenuEnd = 9,
	PT_Enemy = 10,
	PT_SkillEnemy = 11,
	PT_Ok = 12,
	PT_PersonalSupplyBox = 13,
	PT_Book = 14,
	PT_RequestResurrection = 15,
	PT_Material = 16,
	PT_Custom = 17,
	PT_MAX = 18
};

// Enum BravoHotelGame.ELogTag
enum class ELogTag : uint8 {
	LT_None = 0,
	LT_SmartPing = 1,
	LT_MAX = 2
};

// Enum BravoHotelGame.ELoadingScreenType
enum class ELoadingScreenType : uint8 {
	LST_None = 0,
	LST_First = 1,
	LST_Default = 2,
	LST_World = 3,
	LST_Lobby = 4,
	LST_RePlay = 5,
	LST_Move = 6,
	LST_Tutorial = 7,
	LST_TutorialOut = 8,
	LST_MAX = 9
};

// Enum BravoHotelGame.EHUDMessageType
enum class EHUDMessageType : uint8 {
	HMT_BlueZoneDesc = 0,
	HMT_BlueZoneName = 1,
	HMT_GameCountDown = 2,
	HMT_GameCountDownNum = 3,
	HMT_GameStartMessage = 4,
	HMT_ChangeClassInfo = 5,
	HMT_KillMessage = 6,
	HMT_KillCount = 7,
	HMT_LevelUpMessage = 8,
	HMT_WarningMessage = 9,
	HMT_SupplyMessage = 10,
	HMT_BroadcastMessage = 11,
	HMT_TeamKillWarning = 12,
	HMT_ActionDescription = 13,
	HMT_Action = 14,
	HMT_CastingMessage = 15,
	HMT_CastingCount = 16,
	HMT_CastingCancelInfo = 17,
	HMT_ActionMessage = 18,
	HMT_CoreInfo = 19,
	HMT_ZeroingDistance = 20,
	HMT_PlayerReportInfo = 21,
	HMT_SpectatorCount = 22,
	HMT_PlayerInfo = 23,
	HMT_RoundOverInfo = 24,
	HMT_RoundOver = 25,
	HMT_GuideWidget = 26,
	HMT_Resuscitating = 27,
	HMT_RequestMessage = 28,
	HMT_EndResuscitated = 29,
	HMT_ItemCancelMessage = 30,
	HMT_End = 31,
	HMT_MAX = 32
};

// Enum BravoHotelGame.EHUDMessageTableType
enum class EHUDMessageTableType : uint8 {
	HMTT_Waiting = 0,
	HMTT_Playing = 1,
	HMTT_Spectating = 2,
	HMTT_MatchEnd = 3,
	HMTT_MAX = 4
};

// Enum BravoHotelGame.EPresenceState
enum class EPresenceState : uint8 {
	PS_Offline = 0,
	PS_Online = 1,
	PS_Ingame = 2,
	PS_MAX = 3
};

// Enum BravoHotelGame.ERandomType
enum class ERandomType : uint8 {
	RT_None = 0,
	RT_Package = 1,
	RT_PickOne = 2,
	RT_MAX = 3
};

// Enum BravoHotelGame.EKeySettingSubType
enum class EKeySettingSubType : uint8 {
	None = 0,
	Normal = 1,
	Battle = 2,
	ScopeMode = 3,
	Throw = 4,
	Item = 5,
	Vehicle = 6,
	VehicleSeat = 7,
	UI = 8,
	Swimming = 9,
	SmartPing = 10,
	SmartPingWorldMap = 11,
	SmartPingMenu = 12,
	Voice = 13,
	Spectate = 14,
	Replay = 15,
	EKeySettingSubType_MAX = 16
};

// Enum BravoHotelGame.ESlotType
enum class ESlotType : uint8 {
	Slider = 0,
	ComboBox = 1,
	Select = 2,
	KeyInput = 3,
	Button = 4,
	ESlotType_MAX = 5
};

// Enum BravoHotelGame.ESettingBigType
enum class ESettingBigType : uint8 {
	Graphic = 0,
	Audio = 1,
	Key = 2,
	Control = 3,
	GamePlay = 4,
	Dev = 5,
	ESettingBigType_MAX = 6
};

// Enum BravoHotelGame.EPersonalSupplyBoxPingType
enum class EPersonalSupplyBoxPingType : uint8 {
	PPT_None = 0,
	PPT_Opened = 1,
	PPT_NotOpen = 2,
	PPT_MAX = 3
};

// Enum BravoHotelGame.CheatParamType
enum class CheatParamType : uint8 {
	CPT_Intger = 0,
	CPT_Float = 1,
	CPT_String = 2,
	CPT_Bool = 3,
	CPT_MAX = 4
};

// Enum BravoHotelGame.EItemPingIconType
enum class EItemPingIconType : uint8 {
	IPIT_None = 0,
	IPIT_GUN = 1,
	IPIT_Melee = 2,
	IPIT_Grenade = 3,
	IPIT_Equipment = 4,
	IPIT_WearItem = 5,
	IPIT_Attachment = 6,
	IPIT_Recover = 7,
	IPIT_Armor = 8,
	IPIT_MAX = 9
};

// Enum BravoHotelGame.EWeaponFireMode
enum class EWeaponFireMode : uint8 {
	EFM_Single = 0,
	EFM_Burst = 1,
	EFM_Auto = 2,
	EFM_MAX = 3
};

// Enum BravoHotelGame.ELoadingType
enum class ELoadingType : uint8 {
	ELT_Magazine = 0,
	ELT_OneByOne = 1,
	ELT_OneByOne_StripperClip = 2,
	ELT_MAX = 3
};

// Enum BravoHotelGame.EWeaponAttachmentBarrel
enum class EWeaponAttachmentBarrel : uint8 {
	WA_Barrel_Basic = 0,
	WA_Barrel_Short = 1,
	WA_Barrel_Long = 2,
	WA_Barrel_MAX = 3
};

// Enum BravoHotelGame.EWeaponAttachmentMuzzleDevice
enum class EWeaponAttachmentMuzzleDevice : uint8 {
	WA_Muzzle_Basic = 0,
	WA_Muzzle_AR_Silencer = 1,
	WA_Muzzle_AR_Compensator = 2,
	WA_Muzzle_AR_Suppressor = 3,
	WA_Muzzle_SMG_Silencer = 4,
	WA_Muzzle_SMG_Compensator = 5,
	WA_Muzzle_SMG_Suppressor = 6,
	WA_Muzzle_SR_Silencer = 7,
	WA_Muzzle_SR_Compensator = 8,
	WA_Muzzle_SR_Suppressor = 9,
	WA_Muzzle_Shotgun_Choke = 10,
	WA_Muzzle_Pistol_Silencer = 11,
	WA_Muzzle_MAX = 12
};

// Enum BravoHotelGame.EWeaponAttachmentStock
enum class EWeaponAttachmentStock : uint8 {
	WA_Stock_Basic = 0,
	WA_Stock_Shotgun_BulletLoops = 1,
	WA_Stock_SR_BulletLoops = 2,
	WA_Stock_SR_CheekPad = 3,
	WA_Stock_Tactical = 4,
	WA_Stock_MP = 5,
	WA_Stock_MAX = 6
};

// Enum BravoHotelGame.EWeaponAttachmentMagazine
enum class EWeaponAttachmentMagazine : uint8 {
	WA_Mag_None = 0,
	WA_Mag_Basic = 1,
	WA_Mag_AR_QuickDraw = 2,
	WA_Mag_AR_Extended = 3,
	WA_Mag_AR_ExtendedQuickDraw = 4,
	WA_Mag_SMG_QuickDraw = 5,
	WA_Mag_SMG_Extended = 6,
	WA_Mag_SMG_ExtendedQuickDraw = 7,
	WA_Mag_SR_QuickDraw = 8,
	WA_Mag_SR_Extended = 9,
	WA_Mag_SR_ExtendedQuickDraw = 10,
	WA_Mag_Pistol_QuickDraw = 11,
	WA_Mag_Pistol_Extended = 12,
	WA_Mag_Pistol_ExtendedQuickDraw = 13,
	WA_Mag_MAX = 14
};

// Enum BravoHotelGame.EWeaponAttachmentGrip
enum class EWeaponAttachmentGrip : uint8 {
	WA_Grip_Basic = 0,
	WA_Grip_Angled = 1,
	WA_Grip_Vertical = 2,
	WA_Grip_MAX = 3
};

// Enum BravoHotelGame.EWeaponAttachmentType
enum class EWeaponAttachmentType : uint8 {
	WAT_None = 0,
	WAT_Sight = 1,
	WAT_MuzzleDevice = 2,
	WAT_Stock = 3,
	WAT_Grip = 4,
	WAT_Magazine = 5,
	WAT_Barrel = 6,
	WAT_TacticalAttachment = 7,
	WAT_Body = 8,
	WAT_Perk01 = 9,
	WAT_Perk02 = 10,
	WAT_Perk03 = 11,
	WAT_Perk04 = 12,
	WAT_Max = 13
};

// Enum BravoHotelGame.EWeaponAttachmentUseType
enum class EWeaponAttachmentUseType : uint8 {
	WAU_NotUse = 0,
	WAU_Use = 1,
	WAU_UseFixed = 2,
	WAU_MAX = 3
};

// Enum BravoHotelGame.EThrowingWeaponType
enum class EThrowingWeaponType : uint8 {
	ETWT_None = 0,
	ETWT_Grenade_Frag = 1,
	ETWT_Grenade_Smoke = 2,
	ETWT_Grenade_Flash = 3,
	ETWT_Grenade_Molotov = 4,
	ETWT_Greande_Max = 5,
	ETWT_MAX = 6
};

// Enum BravoHotelGame.EGuideWidgetType
enum class EGuideWidgetType : uint8 {
	GWT_Parachuting = 0,
	GWT_Ladder = 1,
	GWT_Descent = 2,
	GWT_Swim = 3,
	GWT_Drive = 4,
	GWT_ADS = 5,
	GWT_ADSZoom = 6,
	GWT_WorldMap = 7,
	GWT_Spectate = 8,
	GWT_SmartPing = 9,
	GWT_UseItem = 10,
	GWT_MAX = 11
};

// Enum BravoHotelGame.EBravoHotel_ZipUtilityCompressionFormat
enum class EBravoHotel_ZipUtilityCompressionFormat : uint8 {
	BP_COMPRESSION_FORMAT_UNKNOWN = 0,
	BP_COMPRESSION_FORMAT_SEVEN_ZIP = 1,
	BP_COMPRESSION_FORMAT_ZIP = 2,
	BP_COMPRESSION_FORMAT_GZIP = 3,
	BP_COMPRESSION_FORMAT_BZIP2 = 4,
	BP_COMPRESSION_FORMAT_RAR = 5,
	BP_COMPRESSION_FORMAT_TAR = 6,
	BP_COMPRESSION_FORMAT_ISO = 7,
	BP_COMPRESSION_FORMAT_CAB = 8,
	BP_COMPRESSION_FORMAT_LZMA = 9,
	BP_COMPRESSION_FORMAT_LZMA86 = 10,
	BP_COMPRESSION_FORMAT_MAX = 11
};

// Enum BravoHotelGame.EAudioSettingType
enum class EAudioSettingType : uint8 {
	Master = 0,
	Music = 1,
	VoiceInput = 2,
	VoiceOutput = 3,
	Effect = 4,
	Embient = 5,
	UI = 6,
	EAudioSettingType_MAX = 7
};

// Enum BravoHotelGame.EBeginReportWidgetType
enum class EBeginReportWidgetType : uint8 {
	BRWT_None = 0,
	BRWT_MatchEnd_Ranking = 1,
	BRWT_Spectator_Hud = 2,
	BRWT_Replay_Timeline = 3,
	BRWT_MAX = 4
};

// Enum BravoHotelGame.EGameExitType
enum class EGameExitType : uint8 {
	EGET_None = 0,
	EGET_Lobby = 1,
	EGET_Exit = 2,
	EGET_MAX = 3
};

// Enum BravoHotelGame.ELobbyExitType
enum class ELobbyExitType : uint8 {
	ELET_None = 0,
	ELET_Game = 1,
	ELET_Replay = 2,
	ELET_TutorialPlay = 3,
	ELET_Exit = 4,
	ELET_MAX = 5
};

// Enum BravoHotelGame.EReportType
enum class EReportType : uint8 {
	RT_None = 0,
	RT_Report = 1,
	RT_Replay = 2,
	RT_DeathCam = 3,
	RT_Spectator = 4,
	RT_MAX = 5
};

// Enum BravoHotelGame.ENormalType
enum class ENormalType : uint8 {
	None = 0,
	RankPoint = 1,
	KillPoint = 2,
	DMGPoint = 3,
	SurvivalPoint = 4,
	SupplyBoxOpen = 5,
	DropCoin = 6,
	AcquireCoin = 7,
	DropRecipe = 8,
	AcquireRecipe = 9,
	ChangeDeck = 10,
	Resuscitation = 11,
	RequestResuscitation = 12,
	RandomGold = 13,
	RandomRankGold = 14,
	SelectDeckMode = 15,
	ChangeDeckList = 16,
	ENormalType_MAX = 17
};

// Enum BravoHotelGame.EDevelopmentStatus
enum class EDevelopmentStatus : uint8 {
	DP_InProgress = 0,
	DP_Done = 1,
	DP_Release = 2,
	DP_MAX = 3
};

// Enum BravoHotelGame.ERewardChangeType
enum class ERewardChangeType : uint8 {
	RT_DoNotReward = 0,
	RT_Reward = 1,
	RT_MAX = 2
};

// Enum BravoHotelGame.EItemRarity
enum class EItemRarity : uint8 {
	Level_None = 0,
	Level_1 = 0,
	Level_2 = 1,
	Level_3 = 2,
	Level_4 = 3,
	Level_5 = 4,
	Level_6 = 5,
	Level_7 = 6,
	Level_8 = 7,
	Level_9 = 8,
	Level_10 = 9,
	Level_11 = 10,
	Level_MAX = 11
};

// Enum BravoHotelGame.EGenderType
enum class EGenderType : uint8 {
	GT_None = 0,
	GT_Male = 1,
	GT_Female = 2,
	GT_ALL = 3,
	GT_MAX = 4
};

// Enum BravoHotelGame.EItemLifeTimeType
enum class EItemLifeTimeType : uint8 {
	ILTT_None = 0,
	ILTT_Etheral = 1,
	ILTT_LimitTime = 2,
	ILTT_LimitCount = 3,
	ILTT_LimitTimeCount = 4,
	ILTT_MAX = 5
};

// Enum BravoHotelGame.EConsumablesItemType
enum class EConsumablesItemType : uint8 {
	CON_Kitmid = 0,
	CON_Kitbig = 1,
	CON_Energybar = 2,
	CON_Powerdrink = 3,
	CON_Painkiller = 4,
	CON_Perk = 5,
	CON_Safety = 6,
	CON_Package = 7,
	CON_Plastic = 8,
	CON_Aluminium = 9,
	CON_Wood = 10,
	CON_Bolt = 11,
	CON_Coin = 12,
	CON_None = 255,
	CON_MAX = 256
};

// Enum BravoHotelGame.EItemType
enum class EItemType : uint8 {
	IT_None = 0,
	IT_Medical = 1,
	IT_Weapon = 2,
	IT_WeaponAttachment = 3,
	IT_Wearable = 4,
	IT_Ammo = 5,
	IT_Vehicle = 6,
	IT_Chest = 7,
	IT_Usable = 8,
	IT_Material = 9,
	IT_Recipe = 10,
	IT_Skin = 11,
	IT_Unknown = 12,
	IT_MAX = 13
};

// Enum BravoHotelGame.EResultUIType
enum class EResultUIType : uint8 {
	Simple = 0,
	Team = 1,
	Match = 2,
	EResultUIType_MAX = 3
};

// Enum BravoHotelGame.EPlayerState
enum class EPlayerState : uint8 {
	PS_None = 0,
	PS_Spawn = 1,
	PS_Waiting = 2,
	PS_InAircraft_Waiting = 3,
	PS_InAircraft_Ready = 4,
	PS_Descent = 5,
	PS_Parachuting = 6,
	PS_Playing = 7,
	PS_Death = 8,
	PS_Spectating = 9,
	PS_MatchEnd = 10,
	PS_TeamEnd = 11,
	PS_Respawn = 12,
	PS_MAX = 13
};

// Enum BravoHotelGame.EItemSpawnPriorityType
enum class EItemSpawnPriorityType : uint8 {
	ISPT_Important = 0,
	ISPT_UnImportant = 1,
	ISPT_Force = 2,
	ISPT_MAX = 3
};

// Enum BravoHotelGame.ESpectatingMode
enum class ESpectatingMode : uint8 {
	SM_None = 0,
	SM_Solo = 1,
	SM_Team = 2,
	SM_OtherTeam = 3,
	SM_Free = 4,
	SM_MAX = 5
};

// Enum BravoHotelGame.EPlayerBehavior
enum class EPlayerBehavior : uint8 {
	PB_KnockDown = 0,
	PB_Alive = 1,
	PB_Death = 2,
	PB_Vehicle = 3,
	PB_AirCraft = 4,
	PB_Parachute = 5,
	PB_Disconnect = 6,
	PB_CriticalTime = 7,
	PB_MAX = 8
};

// Enum BravoHotelGame.EPromotionCondition
enum class EPromotionCondition : uint8 {
	PC_RankRate = 0,
	PC_MAX = 1
};

// Enum BravoHotelGame.EProjectileBehavior
enum class EProjectileBehavior : uint8 {
	PB_Bounce_Only = 0,
	PB_Penetrate_Only = 1,
	PB_Bounce_And_Penetrate = 2,
	PB_MAX = 3
};

// Enum BravoHotelGame.EQuestTaskType
enum class EQuestTaskType : uint8 {
	None = 0,
	Dummy = 1,
	Kill = 2,
	PickUp = 3,
	UseItem = 4,
	Combine = 5,
	ActiveSkill = 6,
	Weapon = 7,
	Map = 8,
	Inventory = 9,
	PersonalSupplyOpen = 10,
	EQuestTaskType_MAX = 11
};

// Enum BravoHotelGame.EVehicleState
enum class EVehicleState : uint8 {
	Spawned = 1,
	Standby = 2,
	Idle = 3,
	Driving = 4,
	Holding = 5,
	Flooded = 6,
	Exploded = 7,
	Disabled = 8,
	EVehicleState_MAX = 9
};

// Enum BravoHotelGame.EQuestState
enum class EQuestState : uint8 {
	QS_None = 0,
	QS_Ready = 1,
	QS_Progress = 2,
	QS_Complete = 3,
	QS_MAX = 4
};

// Enum BravoHotelGame.EDediGameCheatType
enum class EDediGameCheatType : uint8 {
	EGCT_None = 0,
	EGCT_UnlockRoomLimit = 1,
	EGCT_MAX = 2
};

// Enum BravoHotelGame.EMatchingType
enum class EMatchingType : uint8 {
	MT_Unknown = 0,
	MT_Solo = 1,
	MT_Duo = 2,
	MT_Squad = 4,
	MT_MAX = 5
};

// Enum BravoHotelGame.EGameViewType
enum class EGameViewType : uint8 {
	GVT_Unknown = 0,
	GVT_TPP = 1,
	GVT_FPP = 2,
	GVT_MAX = 3
};

// Enum BravoHotelGame.ELoginType
enum class ELoginType : uint8 {
	LT_Name = 0,
	LT_Account = 1,
	LT_Geegee = 2,
	LT_Steam = 3,
	LT_GeegeeWithSteam = 4,
	LT_MAX = 5
};

// Enum BravoHotelGame.EGameMode
enum class EGameMode : uint8 {
	GM_BattleRoyale = 0,
	GM_DeathMatch = 1,
	GM_BattleRoyale_DEV = 2,
	GM_BattleRoyale_QA = 3,
	GM_BattleRoyale_STAGING = 4,
	GM_MAX = 5
};

// Enum BravoHotelGame.EBluseZoneState
enum class EBluseZoneState : uint8 {
	EBRS_None = 0,
	EBZS_SurvivalCircleLulled = 1,
	EBRS_SurvivalCircleShrinking = 2,
	EBRS_Delay = 3,
	EBluseZoneState_MAX = 4
};

// Enum BravoHotelGame.EWorldMapAreaWidgetType
enum class EWorldMapAreaWidgetType : uint8 {
	WAWT_RedZone = 0,
	WAWT_Nuclear = 1,
	WAWT_FindLandingPosition = 2,
	WAWT_FindLandingPositionTry = 3,
	WAWT_SearchInstinct = 4,
	WAWT_VehicleSearch = 5,
	WAWT_SpatialSense = 6,
	WAWT_CarScan = 7,
	WAWT_CarScanTry = 8,
	WAWT_UltimateVehicle = 9,
	WAWT_NitroBoom = 10,
	WAWT_TransportAircraft = 11,
	WAWT_TransportDropBox = 12,
	WAWT_MaterialItem = 13,
	WAWT_LocalPing = 14,
	WAWT_ExpertWeaponItem = 15,
	WAWT_Amplifier = 16,
	WAWT_HeartBeatSensor = 17,
	WAWT_Trap = 18,
	WAWT_Craft = 19,
	WAWT_Capsule = 20,
	WAWT_Skill = 21,
	WAWT_MAX = 22
};

// Enum BravoHotelGame.EBroadCastTeamType
enum class EBroadCastTeamType : uint8 {
	None = 0,
	Enemy = 1,
	Friendly = 2,
	Me = 3,
	EBroadCastTeamType_MAX = 4
};

// Enum BravoHotelGame.EBroadCastKillMessageType
enum class EBroadCastKillMessageType : uint8 {
	None = 0,
	Kill = 1,
	Knockout = 2,
	Resuscitated = 3,
	Kicked = 4,
	EBroadCastKillMessageType_MAX = 5
};

// Enum BravoHotelGame.EStatupAnimType
enum class EStatupAnimType : uint8 {
	SAT_None = 0,
	SAT_Weapon1 = 1,
	SAT_Weapon2 = 2,
	SAT_Helmet = 3,
	SAT_Armor = 4,
	SAT_Bag = 5,
	SAT_MAX = 6
};

// Enum BravoHotelGame.ESceneType
enum class ESceneType : uint8 {
	Scene_Begin = 0,
	Scene_GammaSettings = 1,
	Scene_CompanyLogo = 2,
	Scene_SupportProgram = 3,
	Scene_OpeningMovie = 4,
	Scene_Login = 5,
	Scene_TermsConditions = 6,
	Scene_CreateCharacter = 7,
	Scene_StartScenarioMode = 8,
	Scene_TutorialMovie = 9,
	Scene_PlayTutorial = 10,
	Scene_Lobby = 11,
	Scene_End = 12,
	Scene_MAX = 13
};

// Enum BravoHotelGame.ELoginFlow
enum class ELoginFlow : uint8 {
	Flow_Begin = 0,
	Flow_WaitingTicket = 1,
	Flow_ServicePlatform = 2,
	Flow_End = 3,
	Flow_MAX = 4
};

// Enum BravoHotelGame.ESteamPresenceState
enum class ESteamPresenceState : uint8 {
	Online = 0,
	Offline = 1,
	Away = 2,
	ExtendedAway = 3,
	DoNotDisturb = 4,
	Chat = 5,
	ESteamPresenceState_MAX = 6
};

// Enum BravoHotelGame.EVehicleWheelType
enum class EVehicleWheelType : uint8 {
	VWT_Ground = 0,
	VWT_Water = 1,
	VWT_Wrecked = 2,
	_COUNT_ = 3,
	EVehicleWheelType_MAX = 4
};

// Enum BravoHotelGame.EWeaponAnimationType
enum class EWeaponAnimationType : uint8 {
	EWAT_Unarmed = 0,
	EWAT_AssaultRifle = 1,
	EWAT_SMG = 2,
	EWAT_SniperRifle = 3,
	EWAT_Shotgun = 4,
	EWAT_Pistol = 5,
	EWAT_ThrowingWeapon = 6,
	EWAT_Amplifier = 7,
	EWAT_MeleeWeapon = 8,
	EWAT_HeartBeatSensor = 9,
	EWAT_MAX = 10
};

// Enum BravoHotelGame.EWeaponState
enum class EWeaponState : uint8 {
	EWS_Idle = 0,
	EWS_Firing = 1,
	EWS_Reloading = 2,
	EWS_BoltAction = 3,
	EWS_Equipping = 4,
	EWS_MAX = 5
};

// Enum BravoHotelGame.EWeaponAttachmentMagazineType
enum class EWeaponAttachmentMagazineType : uint8 {
	WA_Mag_None = 0,
	WA_Mag_QuickDraw = 1,
	WA_Mag_Extended = 2,
	WA_Mag_ExtendedQuickDraw = 3,
	WA_Mag_MAX = 4
};

// Enum BravoHotelGame.EWeaponRecoilType
enum class EWeaponRecoilType : uint8 {
	EWRT_2 = 0,
	EWRT_3 = 1,
	EWRT_MAX = 2
};

// Enum BravoHotelGame.ETeamType
enum class ETeamType : uint8 {
	None = 0,
	UserOnly = 1,
	AIOnly = 2,
	All = 3,
	ETeamType_MAX = 4
};

// Enum BravoHotelGame.EBattleRoyalTeamState
enum class EBattleRoyalTeamState : uint8 {
	None = 0,
	Alive = 1,
	Ranked = 2,
	EBattleRoyalTeamState_MAX = 3
};

// Enum BravoHotelGame.EBoxStateType
enum class EBoxStateType : uint8 {
	None = 0,
	Show = 1,
	Opened = 2,
	Closed = 3,
	Hide = 4,
	EBoxStateType_MAX = 5
};

// Enum BravoHotelGame.EAssignReason
enum class EAssignReason : uint8 {
	None = 0,
	WithTeam = 1,
	MinMax = 2,
	InMax = 3,
	All = 4,
	EAssignReason_MAX = 5
};

// Enum BravoHotelGame.EPersonalSupplyBoxState
enum class EPersonalSupplyBoxState : uint8 {
	None = 0,
	Unassigned = 1,
	Assigned = 2,
	Opened = 3,
	TakeSome = 4,
	TakeItAll = 5,
	EPersonalSupplyBoxState_MAX = 6
};

// Enum BravoHotelGame.ECharacterClassFlag
enum class ECharacterClassFlag : uint8 {
	CCF_None = 0,
	CCF_Novice = 1,
	CCF_Shooter = 2,
	CCF_Survivor = 4,
	CCF_Assault = 8,
	CCF_Medic = 16,
	CCF_Scout = 32,
	CCF_Demolition = 64,
	CCF_SuperRookie = 128,
	CCF_All = 255,
	CCF_MAX = 256
};

// Enum BravoHotelGame.ECharacterMovmentStateType
enum class ECharacterMovmentStateType : uint8 {
	CMST_None = 0,
	CMST_ProneWalk = 1,
	CMST_ProneRun = 2,
	CMST_ProneSprint = 3,
	CMST_CrouchWalk = 4,
	CMST_CrouchRun = 5,
	CMST_CrouchSprint = 6,
	CMST_StandWalk = 7,
	CMST_StandRun = 8,
	CMST_StandSprint = 9,
	CMST_Moving = 10,
	CMST_Jump = 11,
	CMST_Swim = 12,
	CMST_Using = 13,
	CMST_Reviving = 14,
	CMST_Resuscitating = 15,
	CMST_Vehicle = 16,
	CMST_Reload = 17,
	CMST_FullAttachment = 18,
	CMST_Firing = 19,
	CMST_LeftLean = 20,
	CMST_RightLean = 21,
	CMST_KnockOut = 22,
	CMST_HeadBanging = 23,
	CMST_Burning = 24,
	CMST_MAX = 25
};

// Enum BravoHotelGame.EBuffTargetType
enum class EBuffTargetType : uint8 {
	BTT_Character = 0,
	BTT_Vehicle = 1,
	BTT_Weapon = 2,
	BTT_MAX = 3
};

// Enum BravoHotelGame.EAbilityCombineType
enum class EAbilityCombineType : uint8 {
	ACT_None = 0,
	ACT_Plus = 1,
	ACT_Multiply = 2,
	ACT_PercentPluse = 3,
	ACT_PercentMultiply = 4,
	ACT_PercentMinusMultiply = 5,
	ACT_MAX = 6
};

// Enum BravoHotelGame.ESoundCondition
enum class ESoundCondition : int32 {
	SC_Local = 1,
	SC_WeaponModel = 2,
	SC_Water = 4,
	SC_WeaponADS = 8,
	SC_FoleyType = 16,
	SC_BulletType = 32,
	SC_VehicleImpactType = 64,
	SC_VehicleImpulse = 128,
	SC_DamageType = 256,
	SC_DamageAmount = 512,
	SC_AmbienceType = 1024,
	SC_AmbienceSpace = 2048,
	SC_Surface = 4096,
	SC_WeaponSilencer = 8192,
	SC_CharacterState = 16384,
	SC_WeaponFireRate = 32768,
	SC_FootstepType = 65536,
	SC_BushLoudness = 131072,
	SC_CharacterType = 262144,
	SC_ActSilently = 524288,
	SC_MysterySlate = 1048576,
	SC_EnergyBar = 2097152,
	SC_MAX = 2097153
};

// Enum BravoHotelGame.EAppAudioState
enum class EAppAudioState : uint8 {
	Normal = 0,
	Cinematic = 1,
	Loading = 2,
	Menu = 3,
	Background = 4,
	Tutorial = 5,
	EAppAudioState_MAX = 6
};

// Enum BravoHotelGame.EIndoorConditionTargets
enum class EIndoorConditionTargets : uint8 {
	Character = 1,
	Weapon = 2,
	All = 3,
	EIndoorConditionTargets_MAX = 4
};

// Enum BravoHotelGame.EOcclusionMethod
enum class EOcclusionMethod : uint8 {
	Adaptive = 0,
	Absolute = 1,
	Legacy = 2,
	EOcclusionMethod_MAX = 3
};

// Enum BravoHotelGame.ECrosshairPosition
enum class ECrosshairPosition : uint8 {
	CP_Left = 0,
	CP_Top = 1,
	CP_Right = 2,
	CP_Bottom = 3,
	CP_Center = 4,
	__COUNT__ = 5,
	ECrosshairPosition_MAX = 6
};

// Enum BravoHotelGame.EContentsType
enum class EContentsType : uint8 {
	ECT_None = 0,
	ECT_GameInfo = 1,
	ECT_CharacterInfo = 2,
	ECT_Matching_RP_Info = 3,
	ECT_SupplyBox_Spawn = 4,
	ECT_Bulezone_Info = 5,
	ECT_Transport_Info = 6,
	ECT_Redzone_Info = 7,
	ECT_Vehicle_Spawn_Info = 8,
	ECT_Item_Spawn_Info = 9,
	ECT_LogIn = 10,
	ECT_LobbyReady = 11,
	ECT_MatchIn = 12,
	ECT_LogOut = 13,
	ECT_LogAbusing = 14,
	ECT_LogKickedUsers = 15,
	ECT_MAX = 16
};

// Enum BravoHotelGame.EReportIndex
enum class EReportIndex : uint8 {
	RI_None = 0,
	RI_ImproperName = 1,
	RI_CheatProgram = 2,
	RI_DisruptionGame = 3,
	RI_AbnormalBehavior = 4,
	RI_MAX = 5
};

// Enum BravoHotelGame.ERecipeSearchType
enum class ERecipeSearchType : uint8 {
	RST_None = 0,
	RST_Auto = 1,
	RST_Select = 2,
	RST_MAX = 3
};

// Enum BravoHotelGame.EItemLogType
enum class EItemLogType : uint8 {
	None = 0,
	Division = 1,
	TrySpawn = 2,
	Spawned = 3,
	Gain = 4,
	RateDivision = 5,
	RateDelete = 6,
	Max = 7
};

// Enum BravoHotelGame.EDataItemType
enum class EDataItemType : uint8 {
	DIT_None = 0,
	DIT_Book = 1,
	DIT_Booster = 2,
	DIT_Medical = 3,
	DIT_MAX = 4
};

// Enum BravoHotelGame.EClientGameContentsType
enum class EClientGameContentsType : uint8 {
	CGCT_None = 0,
	CGCT_Change_Class = 1,
	CGCT_Weapon_Equip = 2,
	CGCT_Item_Pickup = 3,
	CGCT_Exchange_Parts = 4,
	CGCT_Weapon_UnEquip = 5,
	CGCT_Item_Drop = 6,
	CGCT_Recovery_Item_Use = 7,
	CGCT_EnergyBar_Item_Use = 8,
	CGCT_Recipe_Item_Search = 9,
	CGCT_Recipe_Item_Combine = 10,
	CGCT_Player_LevelUp = 11,
	CGCT_SupplyBox_Open = 12,
	CGCT_SupplyBox_Change = 13,
	CGCT_Hited_Player = 14,
	CGCT_Hit_Player = 15,
	CGCT_KnockDowned_Player = 16,
	CGCT_KnockDown_Player = 17,
	CGCT_Death_Player = 18,
	CGCT_Kill_Player = 19,
	CGCT_Hit_Rate = 20,
	CGCT_Revival_Player = 21,
	CGCT_GoldenTime_Start_Player = 22,
	CGCT_GoldenTime_Revival_Player = 23,
	CGCT_CoolTime_Skill = 24,
	CGCT_Active_Skill = 25,
	CGCT_Vehicle_Board_Info = 26,
	CGCT_Vehicle_Alight_Info = 27,
	CGCT_Vehicle_ChangeSeat_Info = 28,
	CGCT_Vehicle_Hit_Player = 29,
	CGCT_Vehicle_Destroy_Player = 30,
	CGCT_CharacterControl_Info = 31,
	CGCT_Parkour_Interaction = 32,
	CGCT_Door_Interaction = 33,
	CGCT_Parachute_Interaction = 34,
	CGCT_Ladder_Interaction = 35,
	CGCT_Throwable_Use = 36,
	CGCT_Report_Illegal_Users = 37,
	CGCT_Game_Start = 38,
	CGCT_Game_Exit = 39,
	CGCT_Game_Escape = 40,
	CGCT_Game_Network = 41,
	CGCT_Game_EarlyTechReport = 42,
	CGCT_Game_TechReport = 43,
	CGCT_MAX = 44
};

// Enum BravoHotelGame.EEventTypeClientGameStateData
enum class EEventTypeClientGameStateData : uint8 {
	None = 0,
	Game_Start = 1,
	Game_Exit = 2,
	Game_Escape = 3,
	Max = 4
};

// Enum BravoHotelGame.EEventTypeClientGameWeaponData
enum class EEventTypeClientGameWeaponData : uint8 {
	None = 0,
	Armed = 1,
	Unarmed = 2,
	Reload = 3,
	Max = 4
};

// Enum BravoHotelGame.EEventTypeClientGameInventoryData
enum class EEventTypeClientGameInventoryData : uint8 {
	None = 0,
	Open = 1,
	Close = 2,
	Max = 3
};

// Enum BravoHotelGame.EEventTypeClientGameVehicleData
enum class EEventTypeClientGameVehicleData : uint8 {
	None = 0,
	Vehicle_Board_Info = 1,
	Vehicle_Alight_Info = 2,
	Vehicle_ChangeSeat_Info = 3,
	Max = 4
};

// Enum BravoHotelGame.EEventTypeClientGameRevivalData
enum class EEventTypeClientGameRevivalData : uint8 {
	None = 0,
	Revival_Player = 1,
	GoldenTime_Revival_Player = 2,
	Max = 3
};

// Enum BravoHotelGame.EEventTypeClientGameDiedData
enum class EEventTypeClientGameDiedData : uint8 {
	None = 0,
	Death_Player = 1,
	Kill_Player = 2,
	Max = 3
};

// Enum BravoHotelGame.EEventTypeClientGameKnockDownedData
enum class EEventTypeClientGameKnockDownedData : uint8 {
	None = 0,
	KnockDowned_Player = 1,
	KnockDown_Player = 2,
	Max = 3
};

// Enum BravoHotelGame.EEventTypeClientGameBattleData
enum class EEventTypeClientGameBattleData : uint8 {
	None = 0,
	Hited_Player = 1,
	Hit_Player = 2,
	Vehicle_Hit_Player = 3,
	Vehicle_Destroy_Player = 4,
	GoldenTime_Start_Player = 5,
	Max = 6
};

// Enum BravoHotelGame.EEventTypeClientGameThrowableData
enum class EEventTypeClientGameThrowableData : uint8 {
	None = 0,
	Throwable_Use = 1,
	Max = 2
};

// Enum BravoHotelGame.EEventTypeClientGameInteractionData
enum class EEventTypeClientGameInteractionData : uint8 {
	None = 0,
	Parkour = 1,
	Door = 2,
	Parachute = 3,
	Ladder = 4,
	Max = 5
};

// Enum BravoHotelGame.EEventTypeClientGameItemSearchData
enum class EEventTypeClientGameItemSearchData : uint8 {
	None = 0,
	Recipe_Item_Search = 1,
	Max = 2
};

// Enum BravoHotelGame.EEventTypeClientGameItemData
enum class EEventTypeClientGameItemData : uint8 {
	None = 0,
	Weapon_Equip = 1,
	Item_Pickup = 2,
	Exchange_Parts = 3,
	Weapon_UnEquip = 4,
	Item_Drop = 5,
	Recovery_Item_Use = 6,
	EnergyBar_Item_Use = 7,
	Recipe_Item_Combine = 8,
	Item_Use = 9,
	Max = 10
};

// Enum BravoHotelGame.EEventTypeClientGameSkillData
enum class EEventTypeClientGameSkillData : uint8 {
	None = 0,
	CoolTime_Skill = 1,
	Active_Skill = 2,
	Max = 3
};

// Enum BravoHotelGame.EEventTypeClientGameSupplyBoxData
enum class EEventTypeClientGameSupplyBoxData : uint8 {
	None = 0,
	SupplyBox_Open = 1,
	SupplyBox_Change = 2,
	Max = 3
};

// Enum BravoHotelGame.EEventTypeClientData
enum class EEventTypeClientData : int32 {
	None = 0,
	LogIn = 10101,
	LobbyReady = 10102,
	MatchIn = 10103,
	LogOut = 10104,
	Max = 10105
};

// Enum BravoHotelGame.EEventTypeWorldItemData
enum class EEventTypeWorldItemData : int32 {
	None = 0,
	Spawned = 50101,
	Picked = 50102,
	VehicleSpawned = 50103,
	Max = 50104
};

// Enum BravoHotelGame.EEventTypeUseItemData
enum class EEventTypeUseItemData : int32 {
	None = 0,
	Heal = 40301,
	Boost = 40302,
	SkillBook = 40303,
	Max = 40304
};

// Enum BravoHotelGame.EEventTypeSupplyData
enum class EEventTypeSupplyData : uint8 {
	None = 0,
	Created = 1,
	Opend = 2,
	Max = 3
};

// Enum BravoHotelGame.EEventTypeTransportData
enum class EEventTypeTransportData : uint8 {
	None = 0,
	Created = 1,
	SpawnFirst = 2,
	SpawnSecond = 3,
	Destroyed = 4,
	Max = 5
};

// Enum BravoHotelGame.EEventTypeRedZoneData
enum class EEventTypeRedZoneData : uint8 {
	None = 0,
	Created = 1,
	Destroyed = 2,
	Max = 3
};

// Enum BravoHotelGame.EEventTypeBlueZoneData
enum class EEventTypeBlueZoneData : uint8 {
	None = 0,
	Created = 1,
	SurvivalCircleLulled = 2,
	SurvivalCircleShrinking = 3,
	Delay = 4,
	Max = 5
};

// Enum BravoHotelGame.EEventTypeBattleRoyalData
enum class EEventTypeBattleRoyalData : uint8 {
	None = 0,
	Ready = 1,
	GameStart = 2,
	AircraftStart = 3,
	AircraftEnableDescent = 4,
	AircraftEnd = 5,
	MatchEnd = 6,
	Max = 7
};

// Enum BravoHotelGame.EEventTypeWeaponData
enum class EEventTypeWeaponData : int32 {
	None = 0,
	Fire = 40201,
	Reload = 40202,
	HitShotCount = 40203,
	Kill = 40204,
	TeamKill = 40205,
	SelfKill = 40206,
	KnockOut = 40207,
	Max = 40208
};

// Enum BravoHotelGame.EEventTypeCharacterFlyingData
enum class EEventTypeCharacterFlyingData : uint8 {
	None = 0,
	Diving = 1,
	Parachute = 2,
	Landing = 3,
	Max = 4
};

// Enum BravoHotelGame.EEventTypeCharacterData
enum class EEventTypeCharacterData : int32 {
	None = 0,
	Created = 40101,
	Death = 40102,
	BeKnockedOuted = 40103,
	BeKnockOutedHeadShot = 40104,
	HeadShotCount = 40105,
	BeHeadShoted = 40106,
	BeRecoveryed = 40107,
	Recovery = 40108,
	Damaged = 40109,
	HitShotCount = 40110,
	UsingBook = 40111,
	UsingBooster = 40112,
	UsingMedical = 40113,
	HealAmount = 40114,
	GainRP = 40115,
	FinalRank = 40116,
	LoserScore = 40117,
	AssistCount = 40118,
	LevelUp = 40119,
	ClassChanged = 40120,
	GetUltimate = 40121,
	ShotCount = 40122,
	LastState = 40123,
	VehicleIExplosion = 40124,
	DestroyTire = 40125,
	VehicleDamage = 40126,
	LoadKill = 40127,
	OpenPersonalSupplyBox = 40128,
	WeaponDurability = 40129,
	OpenAirDropBox = 40130,
	DestroyHelicopter = 40131,
	TotalAirWalkDistance = 40132,
	MaxAirWalkDistance = 40133,
	Reconnected = 40134,
	AccountGoldGameStart = 40135,
	AccountGoldGameEnd = 40136,
	FarmingGold = 40137,
	RandomBonusGold = 40138,
	RemainCoinGold = 40139,
	PaidCoinGold = 40140,
	PaidAccountGold = 40141,
	ClassChangedGold = 40142,
	SupplyboxOpenedGold = 40143,
	RequestResuscitatedGold = 40144,
	ResuscitatedGold = 40145,
	Max = 40146
};

// Enum BravoHotelGame.EEventTypePlayerData
enum class EEventTypePlayerData : int32 {
	None = 0,
	LogIn = 30101,
	LogOut = 30102,
	Disconnected = 30103,
	Max = 30104
};

// Enum BravoHotelGame.EEventTypeGameData
enum class EEventTypeGameData : int32 {
	None = 0,
	GameStart = 20101,
	Ready = 20102,
	MatchEnd = 20103,
	Max = 20104
};

// Enum BravoHotelGame.EBlackmarketGearSortType
enum class EBlackmarketGearSortType : uint8 {
	EGEARSORT_ITEM_NAME = 0,
	EGEARSORT_TYPE = 1,
	EGEARSORT_ARMOR = 2,
	EGEARSORT_CAPACITY = 3,
	EGEARSORT_DECREASE_RELOAD_TIME = 4,
	EGEARSORT_MAX = 5
};

// Enum BravoHotelGame.EBlackmarketCustomSortType
enum class EBlackmarketCustomSortType : uint8 {
	ECUSTOMSORT_ITEM_NAME = 0,
	ECUSTOMSORT_ITEM_MAX = 1
};

// Enum BravoHotelGame.EBlackmarketConsumableSortType
enum class EBlackmarketConsumableSortType : uint8 {
	ECONSUMABLESORT_ITEM_NAME = 0,
	ECONSUMABLESORT_WEIGHT = 1,
	ECONSUMABLESORT_HEALTH = 2,
	ECONSUMABLESORT_ADRENALINE = 3,
	ECONSUMABLESORT_FUEL = 4,
	ECONSUMABLESORT_MAX = 5
};

// Enum BravoHotelGame.EBlackmarketWearableSortType
enum class EBlackmarketWearableSortType : uint8 {
	EWEARABLESORT_ITEM_NAME = 0,
	EWEARABLESORT_TYPE = 1,
	EWEARABLESORT_ARMOR = 2,
	EWEARABLESORT_CAPACITY = 3,
	EWEARABLESORT_DECREASE_RELOAD_TIME = 4,
	EWEARABLESORT_MAX = 5
};

// Enum BravoHotelGame.EBlackmarketAttachmentSortType
enum class EBlackmarketAttachmentSortType : uint8 {
	EATTACHMENTSORT_ITEM_NAME = 0,
	EATTACHMENTSORT_TYPE = 1,
	EATTACHMENTSORT_WEIGHT = 2,
	EATTACHMENTSORT_DECREASE_RELOAD_TIME = 3,
	EATTACHMENTSORT_VERTICAL_REDUCE = 4,
	EATTACHMENTSORT_HORIZENTAL_REDUCE = 5,
	EATTACHMENTSORT_INCREASE_RATE_OF_FIRE = 6,
	EATTACHMENTSORT_BURST_SPEED = 7,
	EATTACHMENTSORT_MAX = 8
};

// Enum BravoHotelGame.EBlackmarketAmmoSortType
enum class EBlackmarketAmmoSortType : uint8 {
	EAMMOSORT_ITEM_NAME = 0,
	EAMMOSORT_WEIGHT = 1,
	EAMMOSORT_COUNT = 2,
	EAMMOSORT_TOTALWEIGHT = 3,
	EAMMOSORT_MAX = 4
};

// Enum BravoHotelGame.EBlackmarketWeaponSortType
enum class EBlackmarketWeaponSortType : uint8 {
	EWEAPONSORT_ITEM_NAME = 0,
	EWEAPONSORT_AMMO = 1,
	EWEAPONSORT_DAMAGE = 2,
	EWEAPONSORT_FIRERATE = 3,
	EWEAPONSORT_MAGSIZE = 4,
	EWEAPONSORT_FIREMODE = 5,
	EWEAPONSORT_RELOADTIME = 6,
	EWEAPONSORT_PROJECTILEVELOCITY = 7,
	EWEAPONSORT_MOVESPEED = 8,
	EWEAPONSORT_WEIGHT = 9,
	EWEAPONSORT_MAX = 10
};

// Enum BravoHotelGame.EBlackmarketTabType
enum class EBlackmarketTabType : uint8 {
	ETAB_WEAPON = 0,
	ETAB_AMMO = 1,
	ETAB_ATTACHMENT = 2,
	ETAB_WEARABLE = 3,
	ETAB_CONSUMABLE = 4,
	ETAB_CUSTOM = 5,
	ETAB_VEHICLE = 6,
	ETAB_GEAR = 7,
	ETAB_PERK = 8,
	ETAB_PRESET = 9,
	ETAB_MAX = 10
};

// Enum BravoHotelGame.EDoorSoundType
enum class EDoorSoundType : uint8 {
	DST_HingedWood = 0,
	DST_HingedWoodBig = 1,
	DST_HingedGlass = 2,
	DST_HingedMetal = 3,
	DST_SlideWood = 4,
	DST_SlideGlass = 5,
	DST_SlideMetal = 6,
	DST_MAX = 7
};

// Enum BravoHotelGame.EElevatorStateType
enum class EElevatorStateType : uint8 {
	Moved = 0,
	Moving = 1,
	EElevatorStateType_MAX = 2
};

// Enum BravoHotelGame.EElevatorDoorStateType
enum class EElevatorDoorStateType : uint8 {
	None = 0,
	OpeningDoor = 1,
	OpenDoorCompleted = 2,
	ClosingDoor = 3,
	CloseDoorCompleted = 4,
	EElevatorDoorStateType_MAX = 5
};

// Enum BravoHotelGame.ENetworkLoginFlowFlags
enum class ENetworkLoginFlowFlags : uint8 {
	NLFF_None = 0,
	NLFF_HttpLogin = 1,
	NLFF_UserInfo = 2,
	NLFF_WebSocketLogin = 4,
	NLFF_Completed_PIE = 5,
	NLFF_Completed = 7,
	NLFF_MAX = 8
};

// Enum BravoHotelGame.EGameResultWidgetMode
enum class EGameResultWidgetMode : uint8 {
	GRWM_None = 0,
	GRWM_Died = 1,
	GRWM_TeamEnd = 2,
	GRWM_WinStart = 3,
	GRWM_LooseResult = 4,
	GRWM_MatchEnd = 5,
	GRWM_MAX = 6
};

// Enum BravoHotelGame.EGoogleCloudType
enum class EGoogleCloudType : uint8 {
	None = 0,
	PubSub = 1,
	FileUpload = 2,
	Max = 3
};

// Enum BravoHotelGame.EItemEquipType
enum class EItemEquipType : uint8 {
	ITEM_Equip = 0,
	ITEM_UnEquip = 1,
	ITEM_MAX = 2
};

// Enum BravoHotelGame.EItemLocation
enum class EItemLocation : uint8 {
	LOC_Inven = 0,
	LOC_Equip = 1,
	LOC_Weapon = 2,
	LOC_MAX = 3
};

// Enum BravoHotelGame.EBattleMode
enum class EBattleMode : uint8 {
	BATTLE_MODE_solo = 1,
	BATTLE_MODE_duo = 2,
	BATTLE_MODE_squad = 4,
	BATTLE_MODE_MAX = 5
};

// Enum BravoHotelGame.EWebGameServerMode
enum class EWebGameServerMode : uint8 {
	WEB_Login = 0,
	WEB_Game = 1,
	WEB_Game_For_DS = 2,
	WEB_Wait = 3,
	WEB_MAX = 4
};

// Enum BravoHotelGame.ECompareItemType
enum class ECompareItemType : uint8 {
	CIT_SAME = 0,
	CIT_UP = 1,
	CIT_DOWN = 2,
	CIT_MAX = 3
};

// Enum BravoHotelGame.EItemEffectSubParticleSpawnState
enum class EItemEffectSubParticleSpawnState : uint8 {
	IESP_SpawnPassive = 0,
	IESP_SpawnActive = 1,
	IESP_MAX = 2
};

// Enum BravoHotelGame.EPatrolDirection
enum class EPatrolDirection : uint8 {
	Forward = 0,
	Reverse = 1,
	EPatrolDirection_MAX = 2
};

// Enum BravoHotelGame.EEventLogType
enum class EEventLogType : uint8 {
	None = 0,
	PcInfo = 1,
	GameOption = 2,
	Fps = 3,
	Exit = 4,
	AccountCreate = 5,
	AccountLogIn = 6,
	AccountLogOut = 7,
	CreateCharacter = 8,
	PartyInfo = 9,
	MatchJoin = 10,
	MatchJoinFail = 11,
	JoinGame = 12,
	JoinGameFail = 13,
	SkyDive = 14,
	GainItem = 15,
	UsingItem = 16,
	EquipItemState = 17,
	AttachItemState = 18,
	CharacterMove = 19,
	CharacterBehavior = 20,
	CharacterAttack = 21,
	CharacterHit = 22,
	CharacterKnockDown = 23,
	CharacterRecorver = 24,
	CharacterDeath = 25,
	CharacterCycleInfo = 26,
	VechicleInfo = 27,
	DestructObject = 28,
	GameEnd = 29,
	GameCycleInfo = 30,
	BlueZoneInfo = 31,
	RedZoneInfo = 32,
	SupplyInfo = 33,
	Max = 34
};

// Enum BravoHotelGame.EMoveElevatorStateType
enum class EMoveElevatorStateType : uint8 {
	LowerMoving = 0,
	UpperMoving = 1,
	LowerMoved = 2,
	UpperMoved = 3,
	EMoveElevatorStateType_MAX = 4
};

// Enum BravoHotelGame.ECloudPlatformType
enum class ECloudPlatformType : uint8 {
	CloudPlatform_Google = 0,
	CloudPlatform_Aws = 1,
	CloudPlatform_MAX = 2
};

// Enum BravoHotelGame.EClientOutGameContentsType
enum class EClientOutGameContentsType : uint8 {
	COGCT_None = 0,
	COGCT_First_Client_Run = 1,
	COGCT_Tutorial_Play_Exit = 2,
	COGCT_Tutorial_Play_Complete = 3,
	COGCT_Tutorial_Movie_Skip = 4,
	COGCT_Tutorial_Movie_Watch = 5,
	COGCT_Enter_Lobby = 6,
	COGCT_Clean_Campaign = 7,
	COGCT_Matching_Success = 8,
	COGCT_Matching_Cancel = 9,
	COGCT_Login_Forbid = 10,
	COGCT_Login_Success = 11,
	COGCT_Lobby_UI_Action = 12,
	COGCT_Lobby_Game_Exit = 13,
	COGCT_Connecting_Success = 14,
	COGCT_Connecting_Fail = 15,
	COGCT_Disconnected_FromDS = 16,
	COGCT_Common_Error = 17,
	COGCT_MAX = 18
};

// Enum BravoHotelGame.EEventTypeClientOutGameFirstClientRunData
enum class EEventTypeClientOutGameFirstClientRunData : uint8 {
	None = 0,
	FirstClient_Start = 1,
	FirstClient_Character_Look = 2,
	FirstClient_Character_Clothes = 3,
	FirstClient_Character_NickName = 4,
	FirstClient_Character_NickNameCheck = 5,
	FirstClient_Character_NickNameConfirm = 6,
	FirstClient_Character_Created = 7,
	FirstClient_Tutorial_Movie_Start = 8,
	FirstClient_Tutorial_Movie_Skip = 9,
	FirstClient_Tutorial_Movie_Watch = 10,
	FirstClient_Tutorial_Play_Start = 11,
	FirstClient_Tutorial_Play_Exit = 12,
	FirstClient_Tutorial_Play_Complete = 13,
	FirstClient_Lobby_Enter = 14,
	FirstClient_Clean_Campaign_Complete = 15,
	FirstClient_Matching_Start = 16,
	FirstClient_Matching_Success = 17,
	Max = 18
};

// Enum BravoHotelGame.EEventTypeClientOutGameTutorialData
enum class EEventTypeClientOutGameTutorialData : uint8 {
	None = 0,
	Tutorial_Play_Exit = 1,
	Tutorial_Play_Complete = 2,
	Tutorial_Movie_Skip = 3,
	Tutorial_Movie_Watch = 4,
	Max = 5
};

// Enum BravoHotelGame.EEventTypeClientOutGameExitData
enum class EEventTypeClientOutGameExitData : uint8 {
	None = 0,
	Game_Exit = 1,
	Max = 2
};

// Enum BravoHotelGame.EEventTypeClientOutGameActionData
enum class EEventTypeClientOutGameActionData : uint8 {
	None = 0,
	UI_Action = 1,
	Max = 2
};

// Enum BravoHotelGame.EEventTypeClientOutGameLoginData
enum class EEventTypeClientOutGameLoginData : uint8 {
	None = 0,
	Login_Forbid = 1,
	Login_Success = 2,
	Max = 3
};

// Enum BravoHotelGame.EEventTypeClientOutGameMatchingData
enum class EEventTypeClientOutGameMatchingData : uint8 {
	None = 0,
	Matching_Success = 1,
	Matching_Cancel = 2,
	Max = 3
};

// Enum BravoHotelGame.EItemSortType
enum class EItemSortType : uint8 {
	IST_All = 0,
	IST_Attachment = 1,
	IST_Booster = 2,
	IST_Capsule = 3,
	IST_Equipment = 4,
	IST_Remedy = 5,
	IST_MAX = 6
};

// Enum BravoHotelGame.EPickUpItemEffectType
enum class EPickUpItemEffectType : uint8 {
	IE_None = 0,
	IE_Origin = 1,
	IE_Weak = 2,
	IE_MAX = 3
};

// Enum BravoHotelGame.EPopupWidgetButtonFlags
enum class EPopupWidgetButtonFlags : uint8 {
	BT_None = 0,
	BT_Ok = 1,
	BT_Cancel = 2,
	BT_Waiting = 4,
	BT_MAX = 5
};

// Enum BravoHotelGame.EAchievementState
enum class EAchievementState : uint8 {
	AS_None = 0,
	AS_Progress = 1,
	AS_Complete = 2,
	AS_MAX = 3
};

// Enum BravoHotelGame.EAchievementType
enum class EAchievementType : uint8 {
	AT_None = 0,
	AT_GamePlay = 1,
	AT_Social = 2,
	AT_Event = 3,
	AT_MAX = 4
};

// Enum BravoHotelGame.ERemoteControlState
enum class ERemoteControlState : uint8 {
	ERCS_None = 0,
	ERCS_SwitchON = 1,
	ERCS_Deactive = 2,
	ERCS_MAX = 3
};

// Enum BravoHotelGame.EDropBoxState
enum class EDropBoxState : uint8 {
	None = 0,
	CutoffParachute = 1,
	Landing = 2,
	OldBox = 3,
	Open = 4,
	EDropBoxState_MAX = 5
};

// Enum BravoHotelGame.EGameLoadingStep
enum class EGameLoadingStep : uint8 {
	EGLS_None = 0,
	EGLS_LoadingStart = 1,
	EGLS_LoadingEnd = 2,
	EGLS_MAX = 3
};

// Enum BravoHotelGame.ELanguageType
enum class ELanguageType : uint8 {
	LT_Korean = 0,
	LT_English = 1,
	LT_Chinese = 2,
	LT_French = 3,
	LT_Deutsch = 4,
	LT_Espanol = 5,
	LT_Portugues = 6,
	LT_Russian = 7,
	LT_Japanese = 8,
	LT_MAX = 9
};

// Enum BravoHotelGame.EMailMsgTag
enum class EMailMsgTag : uint8 {
	MMT_Payment = 0,
	MMT_Report = 1,
	MMT_System = 2,
	MMT_MAX = 3
};

// Enum BravoHotelGame.EMailMsgSaveOption
enum class EMailMsgSaveOption : uint8 {
	MMSO_Received = 0,
	MMSO_Sent = 1,
	MMSO_All = 2,
	MMSO_MAX = 3
};

// Enum BravoHotelGame.EMailMsgType
enum class EMailMsgType : uint8 {
	MMT_Receive = 0,
	MMT_Send = 1,
	MMT_MAX = 2
};

// Enum BravoHotelGame.ECommunicatorType
enum class ECommunicatorType : uint8 {
	C_Player = 0,
	C_Custom = 1,
	C_GM_QnA = 2,
	C_Master_Shop = 3,
	C_MAX = 4
};

// Enum BravoHotelGame.EBlockType
enum class EBlockType : uint8 {
	BT_Account = 0,
	BT_IP = 1,
	BT_Hardware = 2,
	BT_MAX = 3
};

// Enum BravoHotelGame.EBroadCastKillerType
enum class EBroadCastKillerType : uint8 {
	None = 0,
	Killer = 1,
	SubKiller = 2,
	Assist = 3,
	EBroadCastKillerType_MAX = 4
};

// Enum BravoHotelGame.EAutoMoveSnapshotActionType
enum class EAutoMoveSnapshotActionType : uint8 {
	None = 0,
	StartRun = 1,
	StopRun = 2,
	StartParkour = 3,
	StartJump = 4,
	StopJump = 5,
	StartInteraction = 6,
	StopInteraction = 7,
	EAutoMoveSnapshotActionType_MAX = 8
};

// Enum BravoHotelGame.EMatchRateCaseType
enum class EMatchRateCaseType : uint8 {
	None = 0,
	Rank = 1,
	LifeTime = 2,
	Damage = 3,
	Assist = 4,
	Kill = 5,
	HeadKill = 6,
	Max = 7
};

// Enum BravoHotelGame.EDeafenDistanceLevel
enum class EDeafenDistanceLevel : uint8 {
	EDDL_Close = 0,
	EDDL_Mid = 1,
	EDDL_Far = 2,
	EDDL_MAX = 3
};

// Enum BravoHotelGame.EMouseCursorType
enum class EMouseCursorType : uint8 {
	EMCT_Default = 0,
	EMCT_Nuclear = 1,
	EMCT_MAX = 2
};

// Enum BravoHotelGame.EStatusType
enum class EStatusType : uint8 {
	ST_Power = 0,
	ST_Speed = 1,
	ST_Health = 2,
	ST_MAX = 3
};

// Enum BravoHotelGame.EPlayerListSortType
enum class EPlayerListSortType : uint8 {
	ByAlive = 0,
	ByDistance = 1,
	ByKillCount = 2,
	E_Last = 3,
	EPlayerListSortType_MAX = 4
};

// Enum BravoHotelGame.CheatSubType
enum class CheatSubType : uint8 {
	CST_None = 0,
	CST_Replay = 1,
	CST_Coherent = 2,
	CST_RedZone = 3,
	CST_BlueZone = 4,
	CST_Character = 5,
	CST_Inventory = 6,
	CST_Weapon = 7,
	CST_Vehicle = 8,
	CST_PersonalSupply = 9,
	CST_MAX = 10
};

// Enum BravoHotelGame.CheatMainType
enum class CheatMainType : uint8 {
	CMT_GamePlay = 0,
	CMT_Contents = 1,
	CMT_Optimization = 2,
	CMT_Etc = 3,
	CMT_MAX = 4
};

// Enum BravoHotelGame.EVehicleTransmissionType
enum class EVehicleTransmissionType : uint8 {
	Auto_PhysX = 0,
	Auto_Movement = 1,
	Manual = 2,
	EVehicleTransmissionType_MAX = 3
};

// Enum BravoHotelGame.EDoorState
enum class EDoorState : uint8 {
	DS_Destructed = 0,
	DS_Closed = 1,
	DS_Opened = 2,
	DS_Closing = 3,
	DS_Opening = 4,
	DS_Kicking = 5,
	DS_MAX = 6
};

// Enum BravoHotelGame.EPingActorType
enum class EPingActorType : uint8 {
	PAT_None = 0,
	PAT_Pawn = 1,
	PAT_Item = 2,
	PAT_Vehicle = 3,
	PAT_MAX = 4
};

// Enum BravoHotelGame.EPingIconAnimationStateType
enum class EPingIconAnimationStateType : uint8 {
	Enter = 0,
	Hold = 1,
	Exit = 2,
	EPingIconAnimationStateType_MAX = 3
};

// Enum BravoHotelGame.EPingIconLoopAnimationType
enum class EPingIconLoopAnimationType : uint8 {
	None = 0,
	PulseSlow = 1,
	PulseFast = 2,
	Spin = 3,
	Bounce = 4,
	EPingIconLoopAnimationType_MAX = 5
};

// Enum BravoHotelGame.EPingIconTransitionAnimationType
enum class EPingIconTransitionAnimationType : uint8 {
	None = 0,
	Slide = 1,
	Bounce = 2,
	Scale = 3,
	EPingIconTransitionAnimationType_MAX = 4
};

// Enum BravoHotelGame.ETimeOfDayType
enum class ETimeOfDayType : uint8 {
	ETOD_MidDay = 0,
	ETOD_Dusk = 1,
	ETOD_Dawn = 2,
	ETOD_MAX = 3
};

// Enum BravoHotelGame.EWaterViewCameraType
enum class EWaterViewCameraType : uint8 {
	WVCT_None = 0,
	WVCT_InWater = 1,
	WVCT_OutWater = 2,
	WVCT_MAX = 3
};

// Enum BravoHotelGame.ECharacterVoicePriorityType
enum class ECharacterVoicePriorityType : uint8 {
	CVoice_DoNotRun = 0,
	CVoice_PreStop_DoRun = 1,
	CVoice_MAX = 2
};

// Enum BravoHotelGame.ECharacterVoiceRPCType
enum class ECharacterVoiceRPCType : uint8 {
	CVoice_RPC_Local = 0,
	CVoice_RPC_Team = 1,
	CVoice_RPC_All = 2,
	CVoice_RPC_MAX = 3
};

// Enum BravoHotelGame.ESteamAvatarSize
enum class ESteamAvatarSize : uint8 {
	None = 0,
	AvatarSmall = 1,
	AvatarMedium = 2,
	AvatarLarge = 3,
	ESteamAvatarSize_MAX = 4
};

// Enum BravoHotelGame.EUpLoadDataType
enum class EUpLoadDataType : uint8 {
	None = 0,
	Normal = 1,
	ItemSpawn = 2,
	Max = 3
};

// Enum BravoHotelGame.EMovementDirection
enum class EMovementDirection : uint8 {
	MD_Forwards = 0,
	MD_Backwards = 1,
	MD_MAX = 2
};

// Enum BravoHotelGame.ECardinalDirection
enum class ECardinalDirection : uint8 {
	CD_North = 0,
	CD_East = 1,
	CD_West = 2,
	CD_South = 3,
	CD_MAX = 4
};

// Enum BravoHotelGame.EVehicleExitSide
enum class EVehicleExitSide : uint8 {
	VDS_Left = 0,
	VDS_Right = 1,
	VDS_Virtual = 2,
	VDS_MAX = 3
};

// Enum BravoHotelGame.EVehicleEffect
enum class EVehicleEffect : uint8 {
	EVE_None = 0,
	EVE_GunShot = 1,
	EVE_Explosion = 2,
	EVE_Drive_Concrete = 3,
	EVE_MAX = 4
};

// Enum BravoHotelGame.ERedZoneSelectType
enum class ERedZoneSelectType : uint8 {
	All = 0,
	WithinBlueZone = 1,
	WithinWhiteZone = 2,
	BetweenBlueZoneAndWhiteZone = 3,
	ERedZoneSelectType_MAX = 4
};

// Enum BravoHotelGame.EPerkSpawnType
enum class EPerkSpawnType : uint8 {
	PST_Near = 0,
	PST_Random = 1,
	PST_MAX = 2
};

// Enum BravoHotelGame.ESurviveType
enum class ESurviveType : uint8 {
	EST_None = 0,
	EST_Survive = 1,
	EST_Knockout = 2,
	EST_CriticalTime = 3,
	EST_Death = 4,
	EST_MAX = 5
};

// Enum BravoHotelGame.ESimpleWeaponAnimationType
enum class ESimpleWeaponAnimationType : uint8 {
	EWAT_Default = 0,
	EWAT_Rifle = 1,
	EWAT_MAX = 2
};

// Enum BravoHotelGame.ELadderState
enum class ELadderState : uint8 {
	LS_NotLadder = 0,
	LS_UseLadder = 1,
	LS_SnapToLadder = 2,
	LS_ClimbLadder = 3,
	LS_OnLadder = 4,
	LS_Sliding = 5,
	LS_DownLadder = 6,
	LS_MAX = 7
};

// Enum BravoHotelGame.ELadderInteractionType
enum class ELadderInteractionType : uint8 {
	LIT_DirectSnap = 0,
	LIT_DownIn = 1,
	LIT_UpIn = 2,
	LIT_DownOut = 3,
	LIT_UpOut = 4,
	LIT_MAX = 5
};

// Enum BravoHotelGame.EWeaponAttachmentSight
enum class EWeaponAttachmentSight : uint8 {
	WA_Sight_Basic = 0,
	WA_Sight_Reddot = 1,
	WA_Sight_Holo = 2,
	WA_Sight_2X = 3,
	WA_Sight_4X = 4,
	WA_Sight_8X = 5,
	WA_Sight_15X = 6,
	WA_Sight_Digital = 7,
	WA_Sight_MAX = 8
};

// Enum BravoHotelGame.EProjectileType
enum class EProjectileType : uint8 {
	PT_5_56mm = 0,
	PT_7_62mm = 1,
	PT_9mm = 2,
	PT_45ACP = 3,
	PT_12Gauge = 4,
	PT_300Magnum = 5,
	PT_44Magnum = 6,
	PT_MAX = 7
};

// Enum BravoHotelGame.ETerrainType
enum class ETerrainType : int32 {
	TT_None = 0,
	TT_Wood = 2,
	TT_Rock = 4,
	TT_Indoor = 8,
	TT_Fence = 16,
	TT_Grass = 32,
	TT_Cliff = 64,
	TT_Water = 128,
	TT_Air = 256,
	TT_Vehicle = 512,
	TT_MAX = 513
};

// Enum BravoHotelGame.EHumanWeaponHitArea
enum class EHumanWeaponHitArea : uint8 {
	HWHA_None = 0,
	HWHA_Head = 1,
	HWHA_Neck = 2,
	HWHA_Shoudler = 3,
	HWHA_Chest = 4,
	HWHA_Stomach = 5,
	HWHA_UpperWaist = 6,
	HWHA_LowerWaist = 7,
	HWHA_Thigh = 8,
	HWHA_Shank = 9,
	HWHA_Foot = 10,
	HWHA_UpperArm = 11,
	HWHA_LowerArm = 12,
	HWHA_Hand = 13,
	HWHA_MAX = 14
};

// Enum BravoHotelGame.EWeaponHitArea
enum class EWeaponHitArea : uint8 {
	HHA_None = 0,
	HHA_Head = 1,
	HHA_UpperBody = 2,
	HHA_LowerBody = 3,
	HHA_MAX = 4
};

// Enum BravoHotelGame.EVehicleSoundFlag
enum class EVehicleSoundFlag : uint8 {
	None = 0,
	Engine = 1,
	Horn = 2,
	Handbrake = 4,
	EVehicleSoundFlag_MAX = 5
};

// Enum BravoHotelGame.EVehicleNetProperty
enum class EVehicleNetProperty : uint8 {
	VNP_None = 0,
	VNP_HealthPoint = 1,
	VNP_TireHealthPoint = 2,
	VNP_IsBoosting = 4,
	VNP_FuelAmount = 8,
	VNP_ReplicatedMovement = 16,
	VNP_MAX = 17
};

// Enum BravoHotelGame.VoiceChannelType
enum class VoiceChannelType : uint8 {
	NonPositional = 0,
	Positional = 1,
	Echo = 2,
	VoiceChannelType_MAX = 3
};

// Enum BravoHotelGame.PTTKey
enum class PTTKey : uint8 {
	PTTNoChannel = 0,
	PTTAreaChannel = 1,
	PTTTeamChannel = 2,
	PTTLobbyTeamChannel = 3,
	PTTKey_MAX = 4
};

// Enum BravoHotelGame.EWeightMapBitCheck
enum class EWeightMapBitCheck : uint8 {
	None = 0,
	CheckLand = 1,
	CheckDescent = 2,
	CheckPersonalSupplyBox = 4,
	EWeightMapBitCheck_MAX = 5
};

// Enum BravoHotelGame.EWeightMapLandType
enum class EWeightMapLandType : uint8 {
	WLT_Error = 0,
	WLT_Land = 1,
	WLT_Water = 2,
	WLT_MAX = 3
};

// Enum BravoHotelGame.EWeightMapDescentType
enum class EWeightMapDescentType : uint8 {
	WDT_Error = 0,
	WDT_Enable = 1,
	WDT_Disable = 2,
	WDT_MAX = 3
};

// Enum BravoHotelGame.EParkourDebugType
enum class EParkourDebugType : uint8 {
	PDT_None = 0,
	PDT_First = 1,
	PDT_Hole = 2,
	PDT_Position = 4,
	PDT_Hand = 8,
	PDT_Tickness = 16,
	PDT_Falling = 32,
	PDT_Hit = 64,
	PDT_LedgeGrab = 128,
	PDT_All = 255,
	PDT_MAX = 256
};

// ScriptStruct BravoHotelGame.ConditionedWeaponInfo
// Size: 0x20 (Inherited: 0x00)
struct FConditionedWeaponInfo {
	struct TArray<struct FName> TargetItemIDs; // 0x00(0x10)
	struct TArray<enum class EWeaponType> WeaponTypes; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.AircraftCinematic
// Size: 0x10 (Inherited: 0x00)
struct FAircraftCinematic {
	struct ULevelSequence* LevelSequence; // 0x00(0x08)
	struct UAkAudioEvent* LevelSequenceBGM; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.AudioPlayingHandle
// Size: 0x04 (Inherited: 0x00)
struct FAudioPlayingHandle {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct BravoHotelGame.InventoryItemInfo
// Size: 0x98 (Inherited: 0x00)
struct FInventoryItemInfo {
	struct FDataTableRowHandle Item; // 0x00(0x10)
	int32_t Quantity; // 0x10(0x04)
	int32_t Index; // 0x14(0x04)
	struct UInventoryComponent* ContainedInventory; // 0x18(0x08)
	struct AActor* Owner; // 0x20(0x08)
	enum class EInventoryItemState State; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float PickedTimeSeconds; // 0x2c(0x04)
	float Durability; // 0x30(0x04)
	float MaxDurability; // 0x34(0x04)
	struct TArray<struct FName> AdditionalBuffs; // 0x38(0x10)
	struct TArray<struct FName> ItemOptions; // 0x48(0x10)
	enum class EItemBindType ItemBindType; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	int32_t BindedPlayerUniqueID; // 0x5c(0x04)
	struct FName ItemWeaponID; // 0x60(0x08)
	struct FString DivisionParent; // 0x68(0x10)
	enum class EPickupRoot PickupRoot; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FString ItemUID; // 0x80(0x10)
	float ServerWorldTime; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct BravoHotelGame.DisplayAbility
// Size: 0x0c (Inherited: 0x00)
struct FDisplayAbility {
	int32_t DisplayPower; // 0x00(0x04)
	int32_t DisplaySpeed; // 0x04(0x04)
	int32_t DisplayDefense; // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.PerkInfo
// Size: 0x28 (Inherited: 0x00)
struct FPerkInfo {
	enum class EPerkSlotFlag Slot; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName PerkName; // 0x04(0x08)
	int32_t PerkID; // 0x0c(0x04)
	int32_t InGamelevel; // 0x10(0x04)
	int32_t CurrentExp; // 0x14(0x04)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.CastingInfo
// Size: 0x18 (Inherited: 0x00)
struct FCastingInfo {
	bool IsActive; // 0x00(0x01)
	enum class ECastingUIType CastingUIType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FName SourceName; // 0x04(0x08)
	float MaxTime; // 0x0c(0x04)
	struct ABravoHotelCharacter* Target; // 0x10(0x08)
};

// ScriptStruct BravoHotelGame.GoldenTimeLogData
// Size: 0x18 (Inherited: 0x00)
struct FGoldenTimeLogData {
	int32_t RevivedTime; // 0x00(0x04)
	int32_t GoldRequest; // 0x04(0x04)
	int32_t RevivedUseGold; // 0x08(0x04)
	int32_t RevivedRemainGold; // 0x0c(0x04)
	int32_t SaviorUseGold; // 0x10(0x04)
	int32_t SaviorRemainGold; // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.SpawnBaseInfo
// Size: 0x24 (Inherited: 0x00)
struct FSpawnBaseInfo {
	int32_t MinDistance; // 0x00(0x04)
	int32_t MaxDistance; // 0x04(0x04)
	bool UsingRate; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float MinDistanceRate; // 0x0c(0x04)
	float MaxDistanceRate; // 0x10(0x04)
	float Degree; // 0x14(0x04)
	float BuildingSpawnRate; // 0x18(0x04)
	float LocalDeviation; // 0x1c(0x04)
	int32_t DistanceCheckCount; // 0x20(0x04)
};

// ScriptStruct BravoHotelGame.HitRateWeaponLogData
// Size: 0x14 (Inherited: 0x00)
struct FHitRateWeaponLogData {
	int32_t ShotCount; // 0x00(0x04)
	int32_t HitShotCount; // 0x04(0x04)
	int32_t HeadShotCount; // 0x08(0x04)
	int32_t KillCount; // 0x0c(0x04)
	int32_t HeadShotKillCount; // 0x10(0x04)
};

// ScriptStruct BravoHotelGame.RepClientCharacterReconnectInfo
// Size: 0x01 (Inherited: 0x00)
struct FRepClientCharacterReconnectInfo {
	char bRepIsCrouched : 1; // 0x00(0x01)
	char bRepIsProned : 1; // 0x00(0x01)
	char bRepNeedOwnerStopLadder : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.LogBuildCountData
// Size: 0x10 (Inherited: 0x00)
struct FLogBuildCountData {
	int32_t BuildingCount; // 0x00(0x04)
	int32_t DetectiongBoxCount; // 0x04(0x04)
	int32_t StandardBoxCount; // 0x08(0x04)
	int32_t ItemBoxCount; // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.RepSimulatedHittedDamage
// Size: 0x10 (Inherited: 0x00)
struct FRepSimulatedHittedDamage {
	struct TArray<struct FRepHitDamageInfo> DamageInfoList; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.RepHitDamageInfo
// Size: 0x20 (Inherited: 0x00)
struct FRepHitDamageInfo {
	int16_t Damage; // 0x00(0x02)
	char pad_2[0x6]; // 0x02(0x06)
	struct UBravoHotelDamageType* DamageTypeClass; // 0x08(0x08)
	struct TWeakObjectPtr<struct APawn> Instigator; // 0x10(0x08)
	char bTaskScheduler : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x1]; // 0x19(0x01)
	int16_t HitPointIdx; // 0x1a(0x02)
	uint16_t WeaponId; // 0x1c(0x02)
	uint16_t ProjectileId; // 0x1e(0x02)
};

// ScriptStruct BravoHotelGame.CommonMessageInfo
// Size: 0x18 (Inherited: 0x00)
struct FCommonMessageInfo {
	struct FString Message; // 0x00(0x10)
	float HideTime; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.AnimSlot
// Size: 0x10 (Inherited: 0x00)
struct FAnimSlot {
	struct UAnimMontage* Anim1P; // 0x00(0x08)
	struct UAnimMontage* Anim3P; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.SpawnPerkData
// Size: 0x60 (Inherited: 0x00)
struct FSpawnPerkData {
	struct ABravoHotelBuilding* Building; // 0x00(0x08)
	int32_t Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FTransform Transform; // 0x10(0x30)
	float SpawnDelay; // 0x40(0x04)
	struct FSpawnPerkColorRate BookColorRate; // 0x44(0x14)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct BravoHotelGame.SpawnPerkColorRate
// Size: 0x14 (Inherited: 0x00)
struct FSpawnPerkColorRate {
	float RedBookRate; // 0x00(0x04)
	float GreenBookRate; // 0x04(0x04)
	float BlueBookRate; // 0x08(0x04)
	float WhiteBookRate; // 0x0c(0x04)
	float BlackBookRate; // 0x10(0x04)
};

// ScriptStruct BravoHotelGame.ConditionGroup
// Size: 0x18 (Inherited: 0x00)
struct FConditionGroup {
	enum class EConditionType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Name; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.PerkDeckSelectInfo
// Size: 0x18 (Inherited: 0x00)
struct FPerkDeckSelectInfo {
	bool bSelectOpen; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t SelectChangeCount; // 0x04(0x04)
	struct TArray<struct FPerkDeckClassInfo> PerkDeckClassInfos; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.PerkDeckClassInfo
// Size: 0x28 (Inherited: 0x00)
struct FPerkDeckClassInfo {
	struct FName DeckName; // 0x00(0x08)
	struct TArray<struct FName> PerkCards; // 0x08(0x10)
	struct TArray<struct FName> ExpertWeapons; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelDefaultBalanceData
// Size: 0x78 (Inherited: 0x08)
struct FBravoHotelDefaultBalanceData : FTableRowBase {
	float BaseHealth; // 0x08(0x04)
	float BaseBreath; // 0x0c(0x04)
	float UseBreath; // 0x10(0x04)
	float RegainBreath; // 0x14(0x04)
	float NoBreathDamage; // 0x18(0x04)
	float BaseCarryWeight; // 0x1c(0x04)
	float SteadySecond; // 0x20(0x04)
	float NoSteadySecond; // 0x24(0x04)
	float KnockDamage; // 0x28(0x04)
	float ReviveTime; // 0x2c(0x04)
	float RevivedHealth; // 0x30(0x04)
	float ResuscitationTime; // 0x34(0x04)
	float ResuscitatedHealthModify; // 0x38(0x04)
	float CoinDropMin; // 0x3c(0x04)
	float CoinDropMax; // 0x40(0x04)
	float CoinDropHeadShotMin; // 0x44(0x04)
	float CoinDropHeadShotMax; // 0x48(0x04)
	float FrontAngle; // 0x4c(0x04)
	float BackAngle; // 0x50(0x04)
	float FarDitanceOfDamageReduce; // 0x54(0x04)
	float CloseDitanceOfDamageReduce; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct UCurveFloat* BlueZoneBorderCurve; // 0x60(0x08)
	float OverHealLimitValue; // 0x68(0x04)
	float OverHealTime; // 0x6c(0x04)
	float UpperOverHealRate; // 0x70(0x04)
	float LowerOverHealRate; // 0x74(0x04)
};

// ScriptStruct BravoHotelGame.DamageInstigatorInfo
// Size: 0x40 (Inherited: 0x00)
struct FDamageInstigatorInfo {
	struct ABravoHotelPlayerState* PlayerState; // 0x00(0x08)
	struct FDamageEvent DamageEvent; // 0x08(0x10)
	struct AActor* DamageCauser; // 0x18(0x08)
	int32_t HitPointIdx; // 0x20(0x04)
	float DamageAmount; // 0x24(0x04)
	float Distance; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct ABravoHotelPlayerState*> AssistPSArray; // 0x30(0x10)
};

// ScriptStruct BravoHotelGame.RepSimulatedTakeDamageInfo
// Size: 0x38 (Inherited: 0x00)
struct FRepSimulatedTakeDamageInfo {
	char bHeadShot : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Damage; // 0x04(0x04)
	struct UBravoHotelDamageType* DamageTypeClass; // 0x08(0x08)
	struct FVector_NetQuantize ImpactPoint; // 0x10(0x0c)
	struct FVector_NetQuantizeNormal ShotDirection; // 0x1c(0x0c)
	struct TWeakObjectPtr<struct APawn> Instigator; // 0x28(0x08)
	int16_t HitPointIdx; // 0x30(0x02)
	uint16_t WeaponId; // 0x32(0x02)
	uint16_t ProjectileId; // 0x34(0x02)
	char pad_36[0x2]; // 0x36(0x02)
};

// ScriptStruct BravoHotelGame.PerkLevelUpElement
// Size: 0x58 (Inherited: 0x00)
struct FPerkLevelUpElement {
	int32_t Level; // 0x00(0x04)
	int32_t MaxLevel; // 0x04(0x04)
	struct FText DisplayName; // 0x08(0x18)
	struct FText DisplayDesc; // 0x20(0x18)
	int32_t DisplayPower; // 0x38(0x04)
	int32_t DisplaySpeed; // 0x3c(0x04)
	int32_t DisplayDefense; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FName> BuffNames; // 0x48(0x10)
};

// ScriptStruct BravoHotelGame.PerkDeckData
// Size: 0x4b0 (Inherited: 0x08)
struct FPerkDeckData : FTableRowBase {
	char pad_8[0x298]; // 0x08(0x298)
	int32_t ID; // 0x2a0(0x04)
	struct FText DisplayName; // 0x288(0x18)
	struct FText DisplayClassName; // 0x180(0x18)
	struct FText DisplayWeaponName; // 0x238(0x18)
	char pad_2EC[0xc4]; // 0x2ec(0xc4)
	struct FText Description; // 0x3b0(0x18)
	int32_t ClassType; // 0x3c8(0x04)
	enum class ESuperPeopleClass ClassEnum; // 0x368(0x01)
	struct FName BoostTypeKey; // 0x36c(0x08)
	struct FName WeaponKey; // 0x378(0x08)
	char pad_3DD[0xab]; // 0x3dd(0xab)
	struct FText WeaponDescription; // 0x488(0x18)
	struct TSoftObjectPtr<UObject> CohIcon; // 0x320(0x28)
	struct TSoftObjectPtr<UObject> TitleImage; // 0x210(0x28)
	struct TSoftObjectPtr<UObject> ClassIcon; // 0x450(0x28)
	struct TSoftObjectPtr<UObject> ClassIcon_Widget; // 0x2f8(0x28)
	struct TSoftObjectPtr<UObject> TeamInfoClassIcon; // 0x388(0x28)
	struct TSoftObjectPtr<UObject> ClassSelectIcon; // 0x1e8(0x28)
	struct TSoftObjectPtr<UObject> NoClassWeaponImage; // 0x260(0x28)
	int32_t PerkDeckWeight; // 0x374(0x04)
	struct FPerkDeckNewbieAdvantage Beginner_Advantage; // 0x3d0(0x20)
	struct TArray<struct FPerkDeckNewbieAdvantage> Defeat_Advantage; // 0x478(0x10)
	struct TArray<struct FName> ClassBuffNames; // 0x348(0x10)
	struct TArray<int32_t> CraftedWeaponIDs; // 0x3f0(0x10)
	struct TArray<struct FName> WeaponItems; // 0x4a0(0x10)
	struct TArray<struct FName> SupplyItems; // 0x358(0x10)
	struct TMap<enum class EWeaponType, float> FirstExpertWeapon; // 0x400(0x50)
	struct TMap<enum class EWeaponType, float> SecondExpertWeapon; // 0x198(0x50)
	struct TMap<struct FName, float> ExpertWeaponModifier; // 0x2a8(0x50)
	bool bNotKeepClass; // 0x380(0x01)
	struct TArray<struct FPerkDeckElement> PerkCards; // 0x250(0x10)
	struct FPerkLevelUpData PerkLevelUpData; // 0x08(0x178)
};

// ScriptStruct BravoHotelGame.PerkLevelUpData
// Size: 0x178 (Inherited: 0x08)
struct FPerkLevelUpData : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText UltimateName; // 0x10(0x18)
	struct FText UltimateDesc; // 0x28(0x18)
	struct FText DisplayUltimateName; // 0x40(0x18)
	struct FText DisplayUltimateDesc; // 0x58(0x18)
	struct TSoftObjectPtr<UObject> UltimateImage; // 0x70(0x28)
	struct TSoftObjectPtr<UObject> UltimateIcon; // 0x98(0x28)
	struct TSoftObjectPtr<UAkAudioEvent> UltimateGainSound; // 0xc0(0x28)
	struct FName UlimatePerkName; // 0xe8(0x08)
	struct TArray<int32_t> UlimateLevels; // 0xf0(0x10)
	struct FName UlimateNecessaryPerk; // 0x100(0x08)
	struct TArray<struct FName> GetUltimateEffects; // 0x108(0x10)
	struct TMap<int32_t, int32_t> AddLevelByKill; // 0x118(0x50)
	struct TArray<struct FPerkLevelUpElement> PerkLevels; // 0x168(0x10)
};

// ScriptStruct BravoHotelGame.PerkDeckElement
// Size: 0x70 (Inherited: 0x00)
struct FPerkDeckElement {
	int32_t Weight; // 0x00(0x04)
	int32_t LevelUpWeight; // 0x04(0x04)
	struct FName PerkID; // 0x08(0x08)
	struct TMap<struct FName, float> RandomList; // 0x10(0x50)
	int32_t PerkPhase; // 0x60(0x04)
	int32_t PerkPhaseMaxCount; // 0x64(0x04)
	int32_t PerkGroup; // 0x68(0x04)
	int32_t MinLevel; // 0x6c(0x04)
};

// ScriptStruct BravoHotelGame.PerkDeckNewbieAdvantage
// Size: 0x20 (Inherited: 0x00)
struct FPerkDeckNewbieAdvantage {
	char pad_0[0x18]; // 0x00(0x18)
	float PerkDeckWeightModifier; // 0x18(0x04)
	bool bRecommend; // 0x00(0x01)
	struct TArray<struct FExpertWeaponSimpleElement> ExpertWeaponOverride; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.ExpertWeaponSimpleElement
// Size: 0x0c (Inherited: 0x00)
struct FExpertWeaponSimpleElement {
	struct FName WeaponDataID; // 0x00(0x08)
	float Weight; // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.RepPointDamageInfo
// Size: 0x60 (Inherited: 0x00)
struct FRepPointDamageInfo {
	struct AActor* DamageTarget; // 0x00(0x08)
	struct AActor* DamageCauser; // 0x08(0x08)
	struct AController* Instigator; // 0x10(0x08)
	struct UDamageType* DamageTypeClass; // 0x18(0x08)
	struct UPrimitiveComponent* HitComponent; // 0x20(0x08)
	struct FVector_NetQuantizeNormal ShotDirection; // 0x28(0x0c)
	struct FVector_NetQuantize ImpactPoint; // 0x34(0x0c)
	int16_t BoneIndex; // 0x40(0x02)
	int16_t ExtraIndex; // 0x42(0x02)
	float ImpulsePower; // 0x44(0x04)
	float Damage; // 0x48(0x04)
	float ProjectileGravity; // 0x4c(0x04)
	uint16_t ProjectileId; // 0x50(0x02)
	char pad_52[0x2]; // 0x52(0x02)
	struct FVector_NetQuantize FireLocation; // 0x54(0x0c)
};

// ScriptStruct BravoHotelGame.AudioCondition
// Size: 0x38 (Inherited: 0x00)
struct FAudioCondition {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct BravoHotelGame.BravoHotelDamageEvent_Point
// Size: 0xe0 (Inherited: 0xa8)
struct FBravoHotelDamageEvent_Point : FPointDamageEvent {
	struct AController* AttackerPC; // 0xa8(0x08)
	struct AActor* AttackerActor; // 0xb0(0x08)
	struct TArray<uint16_t> AdditionalBuffIndexes; // 0xb8(0x10)
	struct FVector FireLocation; // 0xc8(0x0c)
	float ProjectileGravity; // 0xd4(0x04)
	uint16_t ProjectileId; // 0xd8(0x02)
	char pad_DA[0x6]; // 0xda(0x06)
};

// ScriptStruct BravoHotelGame.MolotovFlameDotDamageInfo
// Size: 0x30 (Inherited: 0x00)
struct FMolotovFlameDotDamageInfo {
	int32_t DamageTime; // 0x00(0x04)
	float DamageAmount; // 0x04(0x04)
	struct FDamageEvent DamageEvent; // 0x08(0x10)
	struct AController* EventInstigator; // 0x18(0x08)
	struct AActor* DamageCauser; // 0x20(0x08)
	int32_t InFlameCount; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct BravoHotelGame.NuclearInfo
// Size: 0x0c (Inherited: 0x00)
struct FNuclearInfo {
	float TargetingRadius; // 0x00(0x04)
	float AreaRadius; // 0x04(0x04)
	float AnnounceRadius; // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.RepInvalidHitInfo
// Size: 0x18 (Inherited: 0x00)
struct FRepInvalidHitInfo {
	float Distance; // 0x00(0x04)
	float Dot; // 0x04(0x04)
	int32_t PlayerId; // 0x08(0x04)
	uint16_t ProjectileId; // 0x0c(0x02)
	char pad_E[0x2]; // 0x0e(0x02)
	float DoubtScore; // 0x10(0x04)
	float LevelLoadingProgress; // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.DebugSupplyBoxInfo
// Size: 0x108 (Inherited: 0x00)
struct FDebugSupplyBoxInfo {
	int32_t UserID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString UserName; // 0x08(0x10)
	struct FString OverlapUserName; // 0x18(0x10)
	struct FString OverlapHitActorName; // 0x28(0x10)
	int32_t SpawnMode; // 0x38(0x04)
	int32_t Phase; // 0x3c(0x04)
	struct FVector CharacterPos; // 0x40(0x0c)
	struct FSpawnBaseInfo Rule; // 0x4c(0x24)
	bool IsBuildingSpawn; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FString BuildigName; // 0x78(0x10)
	struct FVector BuidingBoxPos; // 0x88(0x0c)
	struct FVector AfterBuidingBoxPos; // 0x94(0x0c)
	struct FVector SpawnedPos; // 0xa0(0x0c)
	struct FVector FindWeightMapPos; // 0xac(0x0c)
	bool UsingSimulationBox; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	struct FVector StartSimulationPos; // 0xbc(0x0c)
	struct FVector EndSimulationPos; // 0xc8(0x0c)
	bool RePosition; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	struct FVector RePositionSpawnedPos; // 0xd8(0x0c)
	int32_t ReFindCount; // 0xe4(0x04)
	struct TArray<struct FString> ReFindReason; // 0xe8(0x10)
	struct FString Msg; // 0xf8(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelDamageEvent_Radial
// Size: 0xb8 (Inherited: 0x48)
struct FBravoHotelDamageEvent_Radial : FRadialDamageEvent {
	struct AController* AttackerPC; // 0x48(0x08)
	struct AActor* AttackerActor; // 0x50(0x08)
	struct TMap<uint16_t, float> AdditionalBuffIndexes; // 0x58(0x50)
	struct FVector FireLocation; // 0xa8(0x0c)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct BravoHotelGame.RepCameraInfo
// Size: 0x28 (Inherited: 0x00)
struct FRepCameraInfo {
	float CameraDistanceDelta; // 0x00(0x04)
	struct FVector_NetQuantize CameraLocation_Idle; // 0x04(0x0c)
	struct FVector_NetQuantize CameraLocation_ADS; // 0x10(0x0c)
	float CameraHeight_Stand; // 0x1c(0x04)
	float CameraHeight_Crouch; // 0x20(0x04)
	float CameraHeight_Prone; // 0x24(0x04)
};

// ScriptStruct BravoHotelGame.CarScanUIInfo
// Size: 0x20 (Inherited: 0x00)
struct FCarScanUIInfo {
	struct TArray<struct FVector> VehicleLocations; // 0x00(0x10)
	struct FVector TryLocation; // 0x10(0x0c)
	float ScanTime; // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.Interaction
// Size: 0x38 (Inherited: 0x00)
struct FInteraction {
	enum class EInteractionType InteractionType; // 0x00(0x01)
	enum class EKeySettingType KeyType; // 0x01(0x01)
	bool Visibility; // 0x02(0x01)
	bool bIsAble; // 0x03(0x01)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText Message; // 0x08(0x18)
	struct FText MessageDesc; // 0x20(0x18)
};

// ScriptStruct BravoHotelGame.StatupAnimParameters
// Size: 0x1c (Inherited: 0x00)
struct FStatupAnimParameters {
	float Damage; // 0x00(0x04)
	float Decrement; // 0x04(0x04)
	float Capacity; // 0x08(0x04)
	float Attack; // 0x0c(0x04)
	float Speed; // 0x10(0x04)
	float Health; // 0x14(0x04)
	float Rarity; // 0x18(0x04)
};

// ScriptStruct BravoHotelGame.AreaSkillZoneInfo
// Size: 0x20 (Inherited: 0x00)
struct FAreaSkillZoneInfo {
	float StartValue; // 0x00(0x04)
	float TargetValue; // 0x04(0x04)
	float OwnerTargetRatio; // 0x08(0x04)
	float InTime; // 0x0c(0x04)
	float OutTime; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct AActor* OwnerPawn; // 0x18(0x08)
};

// ScriptStruct BravoHotelGame.SecuredVariablesCache
// Size: 0x04 (Inherited: 0x00)
struct FSecuredVariablesCache {
	float LeanDegreeMax; // 0x00(0x04)
};

// ScriptStruct BravoHotelGame.BombingInfo
// Size: 0x24 (Inherited: 0x00)
struct FBombingInfo {
	float BombDamage; // 0x00(0x04)
	float BombDistance; // 0x04(0x04)
	float BombRange; // 0x08(0x04)
	float BombHeight; // 0x0c(0x04)
	float BombDelayTime; // 0x10(0x04)
	float BombTargetDelayTime; // 0x14(0x04)
	struct FVector Location; // 0x18(0x0c)
};

// ScriptStruct BravoHotelGame.WetFogZoneInfo
// Size: 0x0c (Inherited: 0x00)
struct FWetFogZoneInfo {
	float VisibleDistance; // 0x00(0x04)
	float VisibleDistanceOwner; // 0x04(0x04)
	float AdditionalSeeThroughSmokeRatio; // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelPostProcessSettings
// Size: 0x6a0 (Inherited: 0x08)
struct FBravoHotelPostProcessSettings : FTableRowBase {
	bool bEnable; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FPostProcessSettings PostProcessSettings; // 0x10(0x5c0)
	float Priority; // 0x5d0(0x04)
	char pad_5D4[0x4]; // 0x5d4(0x04)
	struct UCurveFloat* BlendCurve; // 0x5d8(0x08)
	bool bUseSkyLightSettings; // 0x5e0(0x01)
	char pad_5E1[0x3]; // 0x5e1(0x03)
	float SkyLightIntensity; // 0x5e4(0x04)
	struct FColor SkyLightOcclusionTint; // 0x5e8(0x04)
	char pad_5EC[0x4]; // 0x5ec(0x04)
	struct UPostProcessComponent* PostProcess; // 0x5f0(0x08)
	struct FTimeline BlendTimeline; // 0x5f8(0x98)
	bool bIsReversing; // 0x690(0x01)
	char pad_691[0xf]; // 0x691(0x0f)
};

// ScriptStruct BravoHotelGame.BravoHotelItemPresetForBlackMarket
// Size: 0x18 (Inherited: 0x00)
struct FBravoHotelItemPresetForBlackMarket {
	struct FName PresetName; // 0x00(0x08)
	struct TArray<struct FString> ItemList; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelDefaultWearableSetting
// Size: 0x18 (Inherited: 0x00)
struct FBravoHotelDefaultWearableSetting {
	bool bUse; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FString> WearableTableRowList; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelDefaultItemSetting
// Size: 0x38 (Inherited: 0x00)
struct FBravoHotelDefaultItemSetting {
	bool bIsUsingIncludeMapList; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FString> IncludeMapList; // 0x08(0x10)
	struct TArray<struct FString> ExcludeMapList; // 0x18(0x10)
	struct TArray<struct FString> DefaultItemList; // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelTakeDamageInfo
// Size: 0x48 (Inherited: 0x00)
struct FBravoHotelTakeDamageInfo {
	char bHeadShot : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Damage; // 0x04(0x04)
	struct UBravoHotelDamageType* DamageTypeClass; // 0x08(0x08)
	struct FVector ImpactPoint; // 0x10(0x0c)
	struct FVector ImpactNormal; // 0x1c(0x0c)
	struct FVector ShotDirection; // 0x28(0x0c)
	struct TWeakObjectPtr<struct APawn> Instigator; // 0x34(0x08)
	int16_t HitPointIdx; // 0x3c(0x02)
	uint16_t WeaponId; // 0x3e(0x02)
	uint16_t ProjectileId; // 0x40(0x02)
	char pad_42[0x6]; // 0x42(0x06)
};

// ScriptStruct BravoHotelGame.MutableData
// Size: 0x18 (Inherited: 0x00)
struct FMutableData {
	enum class EWearableItemType MutableSlot; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString MutableKey; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.PerkUIInfo
// Size: 0x2c (Inherited: 0x00)
struct FPerkUIInfo {
	enum class EPerkSlotFlag Slot; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName PerkName; // 0x04(0x08)
	int32_t PerkID; // 0x0c(0x04)
	int32_t InGamelevel; // 0x10(0x04)
	int32_t CurrentExp; // 0x14(0x04)
	int32_t ActiveSkillIndex; // 0x18(0x04)
	bool bActive; // 0x1c(0x01)
	bool bCanActive; // 0x1d(0x01)
	bool bCoolTime; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
	float Timer; // 0x20(0x04)
	float MaxTime; // 0x24(0x04)
	enum class EKeySettingType KeySettingType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
};

// ScriptStruct BravoHotelGame.CompletedCasting
// Size: 0x08 (Inherited: 0x00)
struct FCompletedCasting {
	int32_t BackpackSlotIndex; // 0x00(0x04)
	int32_t ID; // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.AssistInfo
// Size: 0x10 (Inherited: 0x00)
struct FAssistInfo {
	struct ABravoHotelPlayerState* TargetPS; // 0x00(0x08)
	float HitTime; // 0x08(0x04)
	float DamageAmount; // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelArmsLag
// Size: 0x08 (Inherited: 0x00)
struct FBravoHotelArmsLag {
	float ArmsLagRotationMax; // 0x00(0x04)
	float ArmsLagRotationSpeed; // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.ResuscitationAnimSet
// Size: 0x28 (Inherited: 0x00)
struct FResuscitationAnimSet {
	struct UAnimSequence* ToCriticalTime; // 0x00(0x08)
	struct UAnimSequence* CriticalTimeIdle; // 0x08(0x08)
	struct UAnimSequence* Resuscitated; // 0x10(0x08)
	struct FAnimSlot Resuscitation; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.TargetHealthInfo
// Size: 0x08 (Inherited: 0x00)
struct FTargetHealthInfo {
	float TargetHealth; // 0x00(0x04)
	float Usablehealth; // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelConditionState
// Size: 0x20 (Inherited: 0x00)
struct FBravoHotelConditionState {
	enum class ECharacterConditionType ConditionType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float CheckTimer; // 0x04(0x04)
	float CheckDepth; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<int32_t> Keys; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.MaterialEffectInfo
// Size: 0x18 (Inherited: 0x00)
struct FMaterialEffectInfo {
	float EffectTimer; // 0x00(0x04)
	char EffectIndex; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct TArray<struct UBHBMaterialEffectBase*> MaterialEffectBuffs; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.BuffHandleArray
// Size: 0x118 (Inherited: 0x108)
struct FBuffHandleArray : FFastArraySerializer {
	struct TArray<struct FBuffHandle> Items; // 0x108(0x10)
};

// ScriptStruct BravoHotelGame.BuffHandle
// Size: 0x10 (Inherited: 0x0c)
struct FBuffHandle : FFastArraySerializerItem {
	uint16_t Key; // 0x0c(0x02)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct BravoHotelGame.BravoHotelBuffUIInfo
// Size: 0x98 (Inherited: 0x00)
struct FBravoHotelBuffUIInfo {
	int32_t Key; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TSoftObjectPtr<UObject> CohIcon; // 0x08(0x28)
	bool bCoolTime; // 0x30(0x01)
	bool bActive; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	float Timer; // 0x34(0x04)
	float MaxTime; // 0x38(0x04)
	struct FColor BorderColor; // 0x3c(0x04)
	struct FColor BGColor; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FText DisplayName; // 0x48(0x18)
	struct FText Description; // 0x60(0x18)
	int32_t DisplayLevel; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FString Param; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)
};

// ScriptStruct BravoHotelGame.BravoHotelConditionedAbilityState
// Size: 0x60 (Inherited: 0x00)
struct FBravoHotelConditionedAbilityState {
	char pad_0[0x58]; // 0x00(0x58)
	struct UObject* OwnerObject; // 0x58(0x08)
};

// ScriptStruct BravoHotelGame.BravoHotelAbilityState
// Size: 0x60 (Inherited: 0x00)
struct FBravoHotelAbilityState {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct BravoHotelGame.BravoHotelPartyInvitation
// Size: 0x30 (Inherited: 0x00)
struct FBravoHotelPartyInvitation {
	struct FString FromUID; // 0x00(0x10)
	struct FString FromName; // 0x10(0x10)
	struct FString Ticket; // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelLocalPingInfo
// Size: 0x30 (Inherited: 0x00)
struct FBravoHotelLocalPingInfo {
	int32_t PingIndex; // 0x00(0x04)
	struct FVector WorldLocation; // 0x04(0x0c)
	struct FLinearColor PingColor; // 0x10(0x10)
	enum class EPingType PingType; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct UPaperSprite* IconImage; // 0x28(0x08)
};

// ScriptStruct BravoHotelGame.BravoHotelMapTableRow
// Size: 0x180 (Inherited: 0x08)
struct FBravoHotelMapTableRow : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString DisplayName; // 0x10(0x10)
	struct FString Mode; // 0x20(0x10)
	int32_t BattleRoyaleWaitingTime; // 0x30(0x04)
	int32_t BattleRoyaleReadyTime; // 0x34(0x04)
	float ParachuteAvailableDistance; // 0x38(0x04)
	float ForcingParachuteDistance; // 0x3c(0x04)
	struct TSoftObjectPtr<UDataTable> PlayZoneDataTable; // 0x40(0x28)
	struct TArray<struct TSoftObjectPtr<UObject>> DefaultPlayZoneImageList; // 0x68(0x10)
	struct TSoftObjectPtr<UTexture2D> UIResource; // 0x78(0x28)
	struct TSoftObjectPtr<UTexture2D> WeightMapResource; // 0xa0(0x28)
	struct TSoftObjectPtr<UBravoHotelWeightMapData> WeightmapData; // 0xc8(0x28)
	struct TSoftObjectPtr<UBravoHotelAudioAmbientMapData> AudioAmbientMap; // 0xf0(0x28)
	int32_t WeightMapRadiusCheckCount; // 0x118(0x04)
	struct FVector2D CenterPosOfWorld; // 0x11c(0x08)
	struct FVector2D SizeOfWorld; // 0x124(0x08)
	float DisableDescentDistance; // 0x12c(0x04)
	struct FVector2D WorldCenterForAircraft; // 0x130(0x08)
	struct FVector2D WorldSizeForAircraft; // 0x138(0x08)
	int32_t MiniMapZoomLevel; // 0x140(0x04)
	float TimeBeforeLoading; // 0x144(0x04)
	int32_t Map_Mode_Reward_Solo; // 0x148(0x04)
	int32_t Map_Mode_Reward_Duo; // 0x14c(0x04)
	int32_t Map_Mode_Reward_Squad; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FString PackageName; // 0x158(0x10)
	bool IgnoreArea_MakeAirCraftLine; // 0x168(0x01)
	char pad_169[0x3]; // 0x169(0x03)
	struct FVector AreaLocation; // 0x16c(0x0c)
	float AreaRadius; // 0x178(0x04)
	enum class ELoadingScreenType LoadingScreenType; // 0x17c(0x01)
	char pad_17D[0x3]; // 0x17d(0x03)
};

// ScriptStruct BravoHotelGame.BravoHotelHUDMessageRow
// Size: 0x68 (Inherited: 0x08)
struct FBravoHotelHUDMessageRow : FTableRowBase {
	enum class EHUDMessageType MessageType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Description; // 0x10(0x10)
	struct FText Message; // 0x20(0x18)
	int32_t Priority; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TSoftObjectPtr<UAkAudioEvent> Sound; // 0x40(0x28)
};

// ScriptStruct BravoHotelGame.SpawnItems_DEBUG
// Size: 0x38 (Inherited: 0x00)
struct FSpawnItems_DEBUG {
	struct FString ActorName; // 0x00(0x10)
	struct FString BPName; // 0x10(0x10)
	int32_t GroupID; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FWorldSpawnItemStatisticInfo> ItemList; // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.WorldSpawnItemStatisticInfo
// Size: 0x20 (Inherited: 0x00)
struct FWorldSpawnItemStatisticInfo {
	int32_t SpawnBoxID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString SpawnItemName; // 0x08(0x10)
	int32_t SpawnItemCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelUserInfo
// Size: 0x90 (Inherited: 0x00)
struct FBravoHotelUserInfo {
	struct FString UID; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FDateTime LoggedInTime; // 0x20(0x08)
	struct FBravoHotelPartyPCInfo PCInfo; // 0x28(0x68)
};

// ScriptStruct BravoHotelGame.BravoHotelPartyPCInfo
// Size: 0x68 (Inherited: 0x00)
struct FBravoHotelPartyPCInfo {
	struct FString pc_id; // 0x00(0x10)
	int32_t class_type_index; // 0x10(0x04)
	int32_t class_data_index; // 0x14(0x04)
	struct FBravoHotelPCLooks looks; // 0x18(0x18)
	struct TArray<struct FBravoHotelEquippedSlotInfo> wear_item; // 0x30(0x10)
	struct TArray<struct FBravoHotelEquippedSlotInfo> Weapon; // 0x40(0x10)
	struct TArray<struct FBravoHotelEquippedSlotInfo> perk; // 0x50(0x10)
	int32_t exp; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelEquippedSlotInfo
// Size: 0x08 (Inherited: 0x00)
struct FBravoHotelEquippedSlotInfo {
	int32_t Key; // 0x00(0x04)
	int32_t table_index; // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelPCLooks
// Size: 0x18 (Inherited: 0x00)
struct FBravoHotelPCLooks {
	int32_t gender; // 0x00(0x04)
	int32_t face; // 0x04(0x04)
	int32_t face_color; // 0x08(0x04)
	int32_t hair; // 0x0c(0x04)
	int32_t hair_color; // 0x10(0x04)
	int32_t makeup; // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelFriendInfo
// Size: 0x98 (Inherited: 0x90)
struct FBravoHotelFriendInfo : FBravoHotelUserInfo {
	enum class EPresenceState State; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// ScriptStruct BravoHotelGame.SpawnItemResult
// Size: 0x48 (Inherited: 0x00)
struct FSpawnItemResult {
	struct FDataTableRowHandle Item; // 0x00(0x10)
	struct TArray<struct FName> BuffNames; // 0x10(0x10)
	int32_t Count; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString DivisionParent; // 0x28(0x10)
	bool bAmmoItemFromWeapon; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FName TargetWeaponItemKey; // 0x3c(0x08)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct BravoHotelGame.RandomSpawn
// Size: 0x20 (Inherited: 0x08)
struct FRandomSpawn : FTableRowBase {
	enum class ERandomType RandomType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FRandomProbability> Items; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.RandomProbability
// Size: 0x78 (Inherited: 0x00)
struct FRandomProbability {
	float Weight; // 0x00(0x04)
	int32_t BundleItemAmount; // 0x04(0x04)
	struct FDataTableRowHandle ItemRowHandle; // 0x08(0x10)
	struct TArray<struct FName> BuffNames; // 0x18(0x10)
	struct TSet<struct FString> Types; // 0x28(0x50)
};

// ScriptStruct BravoHotelGame.DamageTypeTable
// Size: 0x68 (Inherited: 0x08)
struct FDamageTypeTable : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UDamageType* StaticClass; // 0x10(0x08)
	struct TSoftObjectPtr<UPaperSprite> IconTexture_PaperSprite; // 0x18(0x28)
	struct FText CauserText; // 0x40(0x18)
	struct UAnimMontage* HitedMontage; // 0x58(0x08)
	bool IsClassSkill; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct BravoHotelGame.SettingInfo
// Size: 0x88 (Inherited: 0x08)
struct FSettingInfo : FTableRowBase {
	bool bIsDevelopmentData; // 0x08(0x01)
	enum class ESettingBigType ParentType; // 0x09(0x01)
	enum class ESettingType Type; // 0x0a(0x01)
	enum class EKeySettingType KeyType; // 0x0b(0x01)
	enum class ESlotType SlotType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FText Title; // 0x10(0x18)
	struct FText Desc; // 0x28(0x18)
	struct TArray<struct TSoftObjectPtr<UTexture2D>> DescImageList; // 0x40(0x10)
	bool ImmediatelyApply; // 0x50(0x01)
	enum class EKeySettingSubType KeySettingSubType; // 0x51(0x01)
	bool EnableChangeKey; // 0x52(0x01)
	bool EnableDuplicatekeys; // 0x53(0x01)
	bool IsAxisKey; // 0x54(0x01)
	bool UseKeyMapping; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
	float Min; // 0x58(0x04)
	float MAX; // 0x5c(0x04)
	bool bIsSubType; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float Unit; // 0x64(0x04)
	bool bIsFloatValue; // 0x68(0x01)
	bool bEditableText; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
	struct TArray<struct FSettingSlotListInfo> ValueList; // 0x70(0x10)
	float Default; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct BravoHotelGame.SettingSlotListInfo
// Size: 0x20 (Inherited: 0x00)
struct FSettingSlotListInfo {
	struct FText Title; // 0x00(0x18)
	float SettingValue; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelPartyInfo
// Size: 0x28 (Inherited: 0x00)
struct FBravoHotelPartyInfo {
	struct FString PartyID; // 0x00(0x10)
	int32_t LeaderIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FBravoHotelPartyMemberInfo> Members; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelPartyMemberInfo
// Size: 0xe0 (Inherited: 0x98)
struct FBravoHotelPartyMemberInfo : FBravoHotelFriendInfo {
	bool bIsReady; // 0x98(0x01)
	bool bIsVoiceChat; // 0x99(0x01)
	bool bIsLeader; // 0x9a(0x01)
	char pad_9B[0x5]; // 0x9b(0x05)
	struct FString clientStatus; // 0xa0(0x10)
	int32_t SeasonTierID; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FString AccessRegion; // 0xb8(0x10)
	int32_t Ping; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FString steamID; // 0xd0(0x10)
};

// ScriptStruct BravoHotelGame.PersonalSupplyBoxPingInfo
// Size: 0x14 (Inherited: 0x00)
struct FPersonalSupplyBoxPingInfo {
	bool IsSpawned; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Location; // 0x04(0x0c)
	enum class EPersonalSupplyBoxPingType PingType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct BravoHotelGame.SettingData
// Size: 0x05 (Inherited: 0x00)
struct FSettingData {
	bool ImmediateAttachment; // 0x00(0x01)
	bool InheritAttachment; // 0x01(0x01)
	bool ShowPerkSlot; // 0x02(0x01)
	bool SupplyBox; // 0x03(0x01)
	bool SmartPing; // 0x04(0x01)
};

// ScriptStruct BravoHotelGame.SettingValue
// Size: 0x18 (Inherited: 0x00)
struct FSettingValue {
	enum class ESettingType SettingType; // 0x00(0x01)
	enum class CheatParamType Type; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct FString> ValueList; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelPingInfo
// Size: 0x38 (Inherited: 0x00)
struct FBravoHotelPingInfo {
	bool HasMarker; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct AActor* TargetActor; // 0x08(0x08)
	struct AActor* OwnerActor; // 0x10(0x08)
	struct FVector WorldLocation; // 0x18(0x0c)
	int32_t IconTableID; // 0x24(0x04)
	bool IsDirectPing; // 0x28(0x01)
	enum class EPingType PingType; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	int32_t TargetTableIndex; // 0x2c(0x04)
	enum class EItemPingIconType ItemPingType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct BravoHotelGame.BravoHotelWeaponInfo
// Size: 0xb20 (Inherited: 0x08)
struct FBravoHotelWeaponInfo : FTableRowBase {
	char pad_8[0x8b8]; // 0x08(0x8b8)
	struct FName WeaponKey; // 0x8c0(0x08)
	struct FText DisplayName; // 0x4a8(0x18)
	struct FText DisplayDesc; // 0x4f8(0x18)
	struct FString AK_EventKey; // 0x868(0x10)
	struct FName CrosshairRowName; // 0x3ac(0x08)
	float CrosshairIncrease; // 0x8bc(0x04)
	char pad_914[0x1a8]; // 0x914(0x1a8)
	float CrosshairDecreaseSpeed; // 0xabc(0x04)
	float CrosshairInterpSpeed; // 0x4d0(0x04)
	struct TSoftObjectPtr<UPaperSprite> SilhouetteIconTexture_PaperSprite; // 0x890(0x28)
	enum class EWeaponType WeaponType; // 0x888(0x01)
	enum class EThrowingWeaponType ThrowingWeaponType; // 0x4a4(0x01)
	struct FText DisplayWeaponType; // 0x528(0x18)
	struct FText DisplayRangeType; // 0x510(0x18)
	float Display_Damage; // 0x4cc(0x04)
	int32_t Display_EffectiveRange; // 0xac4(0x04)
	float Display_Accuracy; // 0x350(0x04)
	int32_t Display_RateofFire; // 0x4e8(0x04)
	struct FName Display_AmmoInfo; // 0x4c4(0x08)
	struct FBravoHotelWeaponInfoADS ADS_Info; // 0x8c8(0x1f0)
	struct FBravoHotelWeaponInfoFPSK FPSK_Info; // 0x130(0x220)
	struct FWeaponAttachmentInfo Attachment_Info; // 0x548(0x318)
	struct UCurveVector* Curve_Sway_Idle; // 0x4e0(0x08)
	struct UCurveVector* Curve_Sway_Move; // 0x4d8(0x08)
	struct FName AllowedAmmoName; // 0x540(0x08)
	float MinDamage; // 0x860(0x04)
	float MaxDamage; // 0x4f0(0x04)
	float Accuracy; // 0xad8(0x04)
	float FireRateSingle; // 0x3b8(0x04)
	float FireRateBurst; // 0xac0(0x04)
	float FireRateAuto; // 0x3bc(0x04)
	float FireIntervalBurst; // 0x354(0x04)
	float Weight; // 0x4ec(0x04)
	int32_t NormalMagSize; // 0x3b4(0x04)
	int32_t LargeMagSize; // 0x8b8(0x04)
	struct FBravoHotelReloadInfo ReloadInfo; // 0x3c0(0xb8)
	struct TArray<enum class EWeaponFireMode> AllowedFireModes; // 0xac8(0x10)
	float ProjectileVelocity; // 0x128(0x04)
	float TerminalVelocity; // 0xadc(0x04)
	int32_t BurstCount; // 0x4f4(0x04)
	int32_t BulletsPerShot; // 0x4c0(0x04)
	bool bIsBoltAction; // 0x878(0x01)
	float BoltActionTime; // 0x87c(0x04)
	float ADSToReloadDelayTime; // 0x3a8(0x04)
	float MoveSpeedModifier; // 0xab8(0x04)
	struct FBravoHotelSpreadInfo Spread; // 0xae0(0x40)
	struct FBravoHotelDeviation Deviation; // 0x478(0x2c)
	struct FBravoHotelRecoilInfo Recoil; // 0x08(0x120)
	struct FBravoHotelDepthOfFieldBaseInfo DepthOfField; // 0x358(0x50)
	struct FBravoHotelArmsLag ArmsLag; // 0x880(0x08)
};

// ScriptStruct BravoHotelGame.BravoHotelDepthOfFieldBaseInfo
// Size: 0x50 (Inherited: 0x00)
struct FBravoHotelDepthOfFieldBaseInfo {
	struct TMap<enum class EWeaponAttachmentItem, struct FBravoHotelDepthOfFieldDetailInfo> DetailInfo; // 0x00(0x50)
};

// ScriptStruct BravoHotelGame.BravoHotelDepthOfFieldDetailInfo
// Size: 0x0c (Inherited: 0x00)
struct FBravoHotelDepthOfFieldDetailInfo {
	bool bUseDepthOfField; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FocalDistance; // 0x04(0x04)
	float CircleDOF_Fstop; // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelRecoilInfo
// Size: 0x120 (Inherited: 0x00)
struct FBravoHotelRecoilInfo {
	float VertClampMin; // 0x00(0x04)
	float VertClampMax; // 0x04(0x04)
	float VertSpeed; // 0x08(0x04)
	float VertRecoveryClamp; // 0x0c(0x04)
	float VertRecoveryModifier; // 0x10(0x04)
	float HorSpeed; // 0x14(0x04)
	float HorTendency; // 0x18(0x04)
	float HorLeftMax; // 0x1c(0x04)
	float HorRightMax; // 0x20(0x04)
	float Speed; // 0x24(0x04)
	float RecoverySpeed; // 0x28(0x04)
	float PatternScale; // 0x2c(0x04)
	struct UCurveFloat* BulletCountFallingCurve; // 0x30(0x08)
	float CrouchModifier; // 0x38(0x04)
	float ProneModifier; // 0x3c(0x04)
	struct UCurveVector* HorizonControlRecoilCurve; // 0x40(0x08)
	struct TMap<enum class EWeaponAttachmentItem, struct FBravoHotelVisualRecoilInfo> OverrideVisualRecoil; // 0x48(0x50)
	struct FBravoHotelVisualRecoilInfo VisualRecoil; // 0x98(0x68)
	struct FBravoHotelFireCameraShakeInfo FireCameraShakeInfo; // 0x100(0x20)
};

// ScriptStruct BravoHotelGame.BravoHotelFireCameraShakeInfo
// Size: 0x20 (Inherited: 0x00)
struct FBravoHotelFireCameraShakeInfo {
	int32_t BulletCountForMultiFire; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UCameraShake* FireCameraShake; // 0x08(0x08)
	struct UCameraShake* FireCameraShake_ADS_SingleFire; // 0x10(0x08)
	struct UCameraShake* FireCameraShake_ADS_MultiFire; // 0x18(0x08)
};

// ScriptStruct BravoHotelGame.BravoHotelVisualRecoilInfo
// Size: 0x68 (Inherited: 0x00)
struct FBravoHotelVisualRecoilInfo {
	struct FVector VisualShake; // 0x00(0x0c)
	float VisualShakeSpeed; // 0x0c(0x04)
	struct FRotator VisualRecoilAngle; // 0x10(0x0c)
	struct FVector VisualRecoil; // 0x1c(0x0c)
	float VisualRecoilSpeed; // 0x28(0x04)
	float VisualRecoilRecoverySpeed; // 0x2c(0x04)
	float BackAnimation; // 0x30(0x04)
	float BackAnimationSpeed; // 0x34(0x04)
	float BackAnimationRecoverySpeed; // 0x38(0x04)
	float HorizonWeight; // 0x3c(0x04)
	struct UCurveFloat* BackRecoilPositionCurve; // 0x40(0x08)
	struct UCurveFloat* VerticalRecoilPositionCurve; // 0x48(0x08)
	struct UCurveFloat* VerticalRecoilRotationCurve; // 0x50(0x08)
	struct UCurveFloat* HorizonRecoilPositionCurve; // 0x58(0x08)
	struct UCurveFloat* HorizonRecoilRotationCurve; // 0x60(0x08)
};

// ScriptStruct BravoHotelGame.BravoHotelDeviation
// Size: 0x2c (Inherited: 0x00)
struct FBravoHotelDeviation {
	float Base; // 0x00(0x04)
	float BaseAOS; // 0x04(0x04)
	float BaseADS; // 0x08(0x04)
	float RecoilGain; // 0x0c(0x04)
	float RecoilGainAOS; // 0x10(0x04)
	float RecoilGainADS; // 0x14(0x04)
	float MaxLimit; // 0x18(0x04)
	float MoveModifierLimit; // 0x1c(0x04)
	float MoveVelocityClamp; // 0x20(0x04)
	float CrouchModifier; // 0x24(0x04)
	float ProneModifier; // 0x28(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelSpreadInfo
// Size: 0x40 (Inherited: 0x00)
struct FBravoHotelSpreadInfo {
	float ShotSpread; // 0x00(0x04)
	float Base; // 0x04(0x04)
	float AOSModifier; // 0x08(0x04)
	float ADSModifier; // 0x0c(0x04)
	float FiringBase; // 0x10(0x04)
	float CrouchModifier; // 0x14(0x04)
	float ProneModifier; // 0x18(0x04)
	float WalkModifier; // 0x1c(0x04)
	float RunModifier; // 0x20(0x04)
	float JumpModifier; // 0x24(0x04)
	float MaxLimit; // 0x28(0x04)
	char bUseShotPattern : 1; // 0x2c(0x01)
	char pad_2C_1 : 7; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct TArray<struct FVector> PatternDivideList; // 0x30(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelReloadInfo
// Size: 0xb8 (Inherited: 0x00)
struct FBravoHotelReloadInfo {
	enum class ELoadingType LoadingType; // 0x00(0x01)
	bool bNeedBoltActionAfterReload; // 0x01(0x01)
	bool bUseTacticalReload; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float ReloadTime; // 0x04(0x04)
	float TacticalReloadTime; // 0x08(0x04)
	float StripperClipReloadTime; // 0x0c(0x04)
	float SingleBulletInitialTime; // 0x10(0x04)
	float SingleBulletRepeatTime; // 0x14(0x04)
	struct FAnimSlot ReloadPlayerAnim; // 0x18(0x10)
	struct FAnimSlot ReloadWeaponAnim; // 0x28(0x10)
	struct FAnimSlot ReloadPronePlayerAnim; // 0x38(0x10)
	struct FAnimSlot ReloadProneWeaponAnim; // 0x48(0x10)
	struct FAnimSlot ReloadVehiclePlayerAnim; // 0x58(0x10)
	struct FAnimSlot TacticalReloadPlayerAnim; // 0x68(0x10)
	struct FAnimSlot TacticalReloadWeaponAnim; // 0x78(0x10)
	struct FAnimSlot TacticalReloadPronePlayerAnim; // 0x88(0x10)
	struct FAnimSlot TacticalReloadProneWeaponAnim; // 0x98(0x10)
	struct FAnimSlot TacticalReloadVehiclePlayerAnim; // 0xa8(0x10)
};

// ScriptStruct BravoHotelGame.WeaponAttachmentInfo
// Size: 0x318 (Inherited: 0x00)
struct FWeaponAttachmentInfo {
	struct TMap<enum class EWeaponAttachmentType, enum class EWeaponAttachmentUseType> AttachmentSlotUseInfo; // 0x00(0x50)
	struct TMap<enum class EWeaponAttachmentType, struct FWeaponAttachmentUseInfoMap> AllowedAttachmentList; // 0x50(0x50)
	struct FName Socket_WeaponSight; // 0xa0(0x08)
	struct FName Socket_FrontSightWithScope; // 0xa8(0x08)
	struct FName Socket_Rail; // 0xb0(0x08)
	struct FName Socket_Grip; // 0xb8(0x08)
	struct FName Socket_Magazine; // 0xc0(0x08)
	struct FName Socket_ButtStock; // 0xc8(0x08)
	struct FName Socket_MuzzleDevice; // 0xd0(0x08)
	struct FName Socket_Barrel; // 0xd8(0x08)
	struct FName Socket_TacticalAttachment; // 0xe0(0x08)
	struct TSoftObjectPtr<UStaticMesh> Sight_FrontSightWithScope; // 0xe8(0x28)
	struct TSoftObjectPtr<UStaticMesh> Sight_Rail; // 0x110(0x28)
	struct TMap<enum class EWeaponAttachmentGrip, struct TSoftObjectPtr<UStaticMesh>> Meshes_Grip; // 0x138(0x50)
	struct TMap<enum class EWeaponAttachmentMagazine, struct TSoftObjectPtr<UStaticMesh>> Meshes_Magazine; // 0x188(0x50)
	struct TMap<enum class EWeaponAttachmentStock, struct TSoftObjectPtr<UStaticMesh>> Meshes_Stock; // 0x1d8(0x50)
	struct TMap<enum class EWeaponAttachmentMuzzleDevice, struct TSoftObjectPtr<USkeletalMesh>> Meshes_MuzzleDevice; // 0x228(0x50)
	struct TMap<enum class EWeaponAttachmentBarrel, struct TSoftObjectPtr<USkeletalMesh>> Meshes_Barrel; // 0x278(0x50)
	struct TMap<enum class EWeaponAttachmentItem, struct FBravoHotelReloadInfo> OverrideReloadInfos; // 0x2c8(0x50)
};

// ScriptStruct BravoHotelGame.WeaponAttachmentUseInfoMap
// Size: 0x50 (Inherited: 0x00)
struct FWeaponAttachmentUseInfoMap {
	struct TMap<enum class EWeaponAttachmentItem, enum class EWeaponAttachmentUseType> AttachmentUseInfo; // 0x00(0x50)
};

// ScriptStruct BravoHotelGame.BravoHotelWeaponInfoFPSK
// Size: 0x220 (Inherited: 0x08)
struct FBravoHotelWeaponInfoFPSK : FTableRowBase {
	struct TSoftObjectPtr<USkeletalMesh> FPSK_SkelMesh_FPP; // 0x08(0x28)
	struct TArray<struct TSoftObjectPtr<UMaterialInterface>> FPSK_Materials_FPP; // 0x30(0x10)
	struct UAnimInstance* FPSK_AnimInstance_FPP; // 0x40(0x08)
	struct TSoftObjectPtr<USkeletalMesh> FPSK_SkelMesh_TPP; // 0x48(0x28)
	struct TArray<struct TSoftObjectPtr<UMaterialInterface>> FPSK_Materials_TPP; // 0x70(0x10)
	struct UAnimInstance* FPSK_AnimInstance_TPP; // 0x80(0x08)
	struct TMap<enum class EWeaponAttachmentGrip, struct UAnimSequence*> FPSK_GripAnims; // 0x88(0x50)
	float FPSK_ADSSpeed; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct TMap<enum class EWeaponAttachmentItem, float> FPSK_CameraDistance; // 0xe0(0x50)
	struct TMap<enum class EWeaponAttachmentItem, float> FPSK_ScopeAngleOnMove; // 0x130(0x50)
	struct TMap<enum class EWeaponAttachmentItem, float> FPSK_ClippingDistance; // 0x180(0x50)
	struct TMap<enum class EWeaponAttachmentItem, struct ABravoHotelSightAttachment*> FPSK_SightClasses; // 0x1d0(0x50)
};

// ScriptStruct BravoHotelGame.BravoHotelWeaponInfoADS
// Size: 0x1f0 (Inherited: 0x08)
struct FBravoHotelWeaponInfoADS : FTableRowBase {
	bool bEnableADS; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TMap<enum class EWeaponAttachmentItem, struct FVector> WeaponLocationList; // 0x10(0x50)
	struct TMap<enum class EWeaponAttachmentItem, struct FRotator> WeaponRotationList; // 0x60(0x50)
	struct TMap<enum class EWeaponAttachmentItem, struct FVector> WeaponScaleList; // 0xb0(0x50)
	struct TMap<enum class EWeaponAttachmentItem, float> FieldOfViewList; // 0x100(0x50)
	struct TMap<enum class EWeaponAttachmentItem, struct FRotator> SightRotationList; // 0x150(0x50)
	struct TMap<enum class EWeaponAttachmentItem, struct FVector> SightScaleList; // 0x1a0(0x50)
};

// ScriptStruct BravoHotelGame.S_ReplayInfo
// Size: 0x30 (Inherited: 0x00)
struct FS_ReplayInfo {
	struct FString ReplayName; // 0x00(0x10)
	struct FString FriendlyName; // 0x10(0x10)
	struct FDateTime Timestamp; // 0x20(0x08)
	int32_t LengthInMS; // 0x28(0x04)
	bool bIsValid; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct BravoHotelGame.RewardItemInfo
// Size: 0x08 (Inherited: 0x00)
struct FRewardItemInfo {
	int32_t table_index; // 0x00(0x04)
	int32_t Count; // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.MatchResultUIInfo
// Size: 0x50 (Inherited: 0x00)
struct FMatchResultUIInfo {
	int32_t FinalRank; // 0x00(0x04)
	int32_t GainedRP; // 0x04(0x04)
	struct FRewardPoint GoldPoint; // 0x08(0x10)
	struct TArray<struct FRewardItemInfo> RewardItemList; // 0x18(0x10)
	struct TArray<struct FRewardItemInfo> DropedItemList; // 0x28(0x10)
	struct TArray<struct FResultMessageInfo> Message; // 0x38(0x10)
	float TotalDamage; // 0x48(0x04)
	float LifeTime; // 0x4c(0x04)
};

// ScriptStruct BravoHotelGame.ResultMessageInfo
// Size: 0x08 (Inherited: 0x00)
struct FResultMessageInfo {
	int32_t Amount; // 0x00(0x04)
	enum class ENormalType Type; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct BravoHotelGame.RewardPoint
// Size: 0x10 (Inherited: 0x00)
struct FRewardPoint {
	int32_t RankPoint; // 0x00(0x04)
	int32_t KillPoint; // 0x04(0x04)
	int32_t HitPoint; // 0x08(0x04)
	int32_t SurvivalPoint; // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.InventoryItemDetailInfo
// Size: 0x490 (Inherited: 0x08)
struct FInventoryItemDetailInfo : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	enum class EItemType ItemType; // 0x0c(0x01)
	char bIsEquippable : 1; // 0x0d(0x01)
	char bIsMultiSlotWearable : 1; // 0x0d(0x01)
	char pad_D_2 : 6; // 0x0d(0x01)
	enum class EWearableItemType WearableItemType; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	struct TArray<enum class EWearableItemType> AdditionalWearableSlot; // 0x10(0x10)
	enum class EConsumablesItemType ConsumablesItemType; // 0x20(0x01)
	enum class ESuperPeopleClass SuperPeopleClassType; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	int32_t ParentItemID; // 0x24(0x04)
	enum class EItemLifeTimeType LifeTimeType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t LimitOfTime; // 0x2c(0x04)
	int32_t LimitOfCount; // 0x30(0x04)
	enum class EGenderType GenderType; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float Weight; // 0x38(0x04)
	enum class EItemRarity Rarity; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	int32_t CompareRating; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString ItemSubType; // 0x48(0x10)
	enum class EItemPingIconType ItemPingType; // 0x58(0x01)
	char bIsBackpackPuttable : 1; // 0x59(0x01)
	char bIsDroppable : 1; // 0x59(0x01)
	char bIsDropToFloor : 1; // 0x59(0x01)
	char bIsBindable : 1; // 0x59(0x01)
	char pad_59_4 : 4; // 0x59(0x01)
	char pad_5A[0x2]; // 0x5a(0x02)
	int32_t MaxStack; // 0x5c(0x04)
	float PickupIntervalTime; // 0x60(0x04)
	char CorpseDrop : 1; // 0x64(0x01)
	char pad_64_1 : 7; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct FName LimitedCollectionType; // 0x68(0x08)
	enum class ERewardChangeType RewardType; // 0x70(0x01)
	char bInStrongbox : 1; // 0x71(0x01)
	char pad_71_1 : 7; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	int32_t RandomPackageID; // 0x74(0x04)
	int32_t PickupOutlineStencilValue; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TArray<struct FName> TypeTags; // 0x80(0x10)
	enum class EDevelopmentStatus DevelopmentStatus; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct FText DisplayName; // 0x98(0x18)
	struct FText DisplayShortName; // 0xb0(0x18)
	struct FText Description; // 0xc8(0x18)
	struct TMap<struct FString, struct FText> DescriptionValues; // 0xe0(0x50)
	struct FName ItemSortType; // 0x130(0x08)
	int32_t SortOrder; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct FText DisplayItemType; // 0x140(0x18)
	struct FName TopRecipe; // 0x158(0x08)
	struct TSoftObjectPtr<UPaperSprite> SlotIconTexture_PaperSprite; // 0x160(0x28)
	struct TSoftObjectPtr<UPaperSprite> DragIconTexture_PaperSprite; // 0x188(0x28)
	struct TSoftObjectPtr<UPaperSprite> EnableItemTexture_PaperSprite; // 0x1b0(0x28)
	struct UPaperSprite* MaterialPingIcon; // 0x1d8(0x08)
	bool IsBundleItem; // 0x1e0(0x01)
	char pad_1E1[0x3]; // 0x1e1(0x03)
	struct FName ItemEffectID; // 0x1e4(0x08)
	bool bOverridePickupScale; // 0x1ec(0x01)
	char pad_1ED[0x3]; // 0x1ed(0x03)
	struct FVector OverlapBoxExtent; // 0x1f0(0x0c)
	float TraceSphereRadius; // 0x1fc(0x04)
	struct FVector WorldStaticMeshLoc; // 0x200(0x0c)
	struct FRotator WorldStaticMeshRot; // 0x20c(0x0c)
	struct FVector WorldStaticMeshScale; // 0x218(0x0c)
	struct FVector WorldSkelMeshLoc; // 0x224(0x0c)
	struct FRotator WorldSkelMeshRot; // 0x230(0x0c)
	struct FVector WorldSkelMeshScale; // 0x23c(0x0c)
	char bUseStaticMesh : 1; // 0x248(0x01)
	char pad_248_1 : 7; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	struct TSoftObjectPtr<UStaticMesh> WorldStaticMesh; // 0x250(0x28)
	struct TSoftObjectPtr<USkeletalMesh> WorldSkeletalMesh; // 0x278(0x28)
	float NetCullDistanceSquared; // 0x2a0(0x04)
	float DrawDistance; // 0x2a4(0x04)
	struct TSoftObjectPtr<UAkAudioEvent> AudioEvent; // 0x2a8(0x28)
	struct TSoftClassPtr<UObject> EquippableItemClass; // 0x2d0(0x28)
	struct FName MutableUniqueKey; // 0x2f8(0x08)
	char bUseEquippedStaticMesh : 1; // 0x300(0x01)
	char pad_300_1 : 7; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	struct TSoftObjectPtr<UStaticMesh> EquippedStaticMesh; // 0x308(0x28)
	struct TSoftObjectPtr<USkeletalMesh> EquippedSkeletalMesh; // 0x330(0x28)
	struct TArray<struct TSoftObjectPtr<UMaterialInterface>> OverrideMeshMaterials; // 0x358(0x10)
	struct FName WeaponId; // 0x368(0x08)
	enum class EWeaponType WeaponType; // 0x370(0x01)
	enum class EThrowingWeaponType ThrowingWeaponType; // 0x371(0x01)
	enum class EWeaponAttachmentType WeaponAttachmentType; // 0x372(0x01)
	enum class EWeaponAttachmentItem WeaponAttachmentItem; // 0x373(0x01)
	char pad_374[0x4]; // 0x374(0x04)
	struct FBravoHotelAbilityModifier Ability; // 0x378(0xa8)
	struct FBravoHotelAttachmentInfo AttachmentInfo; // 0x420(0x48)
	struct TArray<struct FName> EquipedBuffName; // 0x468(0x10)
	struct TArray<struct FName> UsingBuffName; // 0x478(0x10)
	bool bMovableDuringUse; // 0x488(0x01)
	bool bIsImportant; // 0x489(0x01)
	char pad_48A[0x6]; // 0x48a(0x06)
};

// ScriptStruct BravoHotelGame.BravoHotelAttachmentInfo
// Size: 0x48 (Inherited: 0x00)
struct FBravoHotelAttachmentInfo {
	float ReloadDurationMultiplier; // 0x00(0x04)
	float ADSSpeedMultiplier; // 0x04(0x04)
	float AmmoSpeedMultiplier; // 0x08(0x04)
	float AutoFireRateMultiplier; // 0x0c(0x04)
	float BaseSpreadMultiplier; // 0x10(0x04)
	float FiringBaseSpreadMultiplier; // 0x14(0x04)
	float DeviationMultiplier; // 0x18(0x04)
	float RecoilHorizontalMultiplier; // 0x1c(0x04)
	float RecoilVerticalMultiplier; // 0x20(0x04)
	float RecoilRecoveryMultiplier; // 0x24(0x04)
	float DecreaseRecoilPatternScale; // 0x28(0x04)
	float AnimationKickMultiplier; // 0x2c(0x04)
	float SwayMultiplier; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<int32_t> ZeroingDistance; // 0x38(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelAbilityModifier
// Size: 0xa8 (Inherited: 0x00)
struct FBravoHotelAbilityModifier {
	float Health; // 0x00(0x04)
	float Usablehealth; // 0x04(0x04)
	float Bandage; // 0x08(0x04)
	float Adrenaline; // 0x0c(0x04)
	int32_t Capacity; // 0x10(0x04)
	float Fuel; // 0x14(0x04)
	float DereaseReloadTimePercent; // 0x18(0x04)
	float MoveSpeedPercent; // 0x1c(0x04)
	struct FBravoHotelAbilityModifierArmor ArmorInfo; // 0x20(0x58)
	struct FBravoHotelAbilityModifierDetail Detail; // 0x78(0x30)
};

// ScriptStruct BravoHotelGame.BravoHotelAbilityModifierDetail
// Size: 0x30 (Inherited: 0x00)
struct FBravoHotelAbilityModifierDetail {
	float CastingSeconds; // 0x00(0x04)
	struct FName UseableMeshAttachSlotName; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FAnimSlot AnimSlot_Stand; // 0x10(0x10)
	struct FAnimSlot AnimSlot_Prone; // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelAbilityModifierArmor
// Size: 0x58 (Inherited: 0x00)
struct FBravoHotelAbilityModifierArmor {
	float Durability; // 0x00(0x04)
	float Armor; // 0x04(0x04)
	struct TSet<struct FName> CoverBones; // 0x08(0x50)
};

// ScriptStruct BravoHotelGame.SelecteSearchMaterialItemInfo
// Size: 0x10 (Inherited: 0x00)
struct FSelecteSearchMaterialItemInfo {
	struct FName TopRecipeItem; // 0x00(0x08)
	struct FName SelectRecipeItem; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.TestPoint
// Size: 0x58 (Inherited: 0x00)
struct FTestPoint {
	struct FVector2D StartPoint; // 0x00(0x08)
	struct FVector2D EndPoint; // 0x08(0x08)
	struct FVector2D CenterPos; // 0x10(0x08)
	struct FVector2D StartStartPos; // 0x18(0x08)
	struct FVector2D StartEndPos; // 0x20(0x08)
	struct FVector2D EndStartPos; // 0x28(0x08)
	struct FVector2D EndEndPos; // 0x30(0x08)
	struct FVector2D WorldStartPoint; // 0x38(0x08)
	struct FVector2D WorldEndPoint; // 0x40(0x08)
	struct FVector2D WorldSize; // 0x48(0x08)
	struct FVector2D WorldCenter; // 0x50(0x08)
};

// ScriptStruct BravoHotelGame.DediDataInfoBase
// Size: 0x01 (Inherited: 0x00)
struct FDediDataInfoBase {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.DediDataCharacterInfo
// Size: 0x188 (Inherited: 0x01)
struct FDediDataCharacterInfo : FDediDataInfoBase {
	struct FDataKeyInfo KeyInfo; // 0x00(0x28)
	int32_t ClassIndex; // 0x28(0x04)
	int32_t CurrentWeaponID; // 0x2c(0x04)
	int32_t FinalRank; // 0x30(0x04)
	int32_t GainRP; // 0x34(0x04)
	struct FCharacterBaseInfo TotalData; // 0x38(0x70)
	char pad_A9[0xdf]; // 0xa9(0xdf)
};

// ScriptStruct BravoHotelGame.CharacterBaseInfo
// Size: 0x70 (Inherited: 0x00)
struct FCharacterBaseInfo {
	int32_t KillCount; // 0x00(0x04)
	int32_t AIKillCount; // 0x04(0x04)
	int32_t SequenceKillCount; // 0x08(0x04)
	int32_t TempSequenceKillCount; // 0x0c(0x04)
	int32_t DeathCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FDateTime DeathTime; // 0x18(0x08)
	struct FDateTime LastKillTime; // 0x20(0x08)
	float LifeTime; // 0x28(0x04)
	float MoveDistance; // 0x2c(0x04)
	int32_t HeadShotKillCount; // 0x30(0x04)
	int32_t BeHeadShotedCount; // 0x34(0x04)
	int32_t BeKnockOutedCount; // 0x38(0x04)
	int32_t KnockOutCount; // 0x3c(0x04)
	int32_t KnockOutHeadShotCount; // 0x40(0x04)
	int32_t BeKnockOutedHeadShotCount; // 0x44(0x04)
	int32_t RecoveryCount; // 0x48(0x04)
	int32_t BeRecoveryedCount; // 0x4c(0x04)
	int32_t TeamKillCount; // 0x50(0x04)
	int32_t SelfKillCount; // 0x54(0x04)
	float Damage; // 0x58(0x04)
	float BeDamaged; // 0x5c(0x04)
	int32_t UseSkillBookItemCount; // 0x60(0x04)
	int32_t UseHealItemCount; // 0x64(0x04)
	int32_t UseBoostItemCount; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct BravoHotelGame.DataKeyInfo
// Size: 0x28 (Inherited: 0x00)
struct FDataKeyInfo {
	struct FString CharacterIndex; // 0x00(0x10)
	struct FString NickName; // 0x10(0x10)
	bool bIsAI; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct BravoHotelGame.ReplayReportVictimAndSuspectLogData
// Size: 0x48 (Inherited: 0x00)
struct FReplayReportVictimAndSuspectLogData {
	struct UBravoHotelDamageType* VictimDamageTypeClass; // 0x00(0x08)
	struct FString VictimHitBone; // 0x08(0x10)
	struct FString SuspectIpAddress; // 0x18(0x10)
	struct FString SuspectMaxItemID; // 0x28(0x10)
	int32_t SuspectDistance; // 0x38(0x04)
	int32_t SuspectMaxDistance; // 0x3c(0x04)
	int32_t SuspectDamageCount; // 0x40(0x04)
	int32_t SuspectHeadShotDamageCount; // 0x44(0x04)
};

// ScriptStruct BravoHotelGame.RepDiedInfo
// Size: 0x60 (Inherited: 0x00)
struct FRepDiedInfo {
	struct FRepCharacterInfo Attacker; // 0x00(0x18)
	struct FRepCharacterInfo KnockOut; // 0x18(0x18)
	struct APlayerState* Killer; // 0x30(0x08)
	struct APlayerState* SubKiller; // 0x38(0x08)
	struct APlayerState* Died; // 0x40(0x08)
	struct TArray<struct APlayerState*> Assist; // 0x48(0x10)
	char IsFinallyKill : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x1]; // 0x59(0x01)
	uint16_t KillCount; // 0x5a(0x02)
	uint16_t AliveCount; // 0x5c(0x02)
	uint16_t KillDistance; // 0x5e(0x02)
};

// ScriptStruct BravoHotelGame.RepCharacterInfo
// Size: 0x18 (Inherited: 0x00)
struct FRepCharacterInfo {
	struct APlayerState* PlayerState; // 0x00(0x08)
	int32_t DamageTypeID; // 0x08(0x04)
	uint16_t WeaponIndex; // 0x0c(0x02)
	uint16_t HitPointIdx; // 0x0e(0x02)
	float DamageAmount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.DataEventBase
// Size: 0x58 (Inherited: 0x00)
struct FDataEventBase {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct BravoHotelGame.DataEventClientGameIllegalUsers
// Size: 0x2d8 (Inherited: 0x58)
struct FDataEventClientGameIllegalUsers : FDataEventBase {
	struct FAnalysisClientGameIllegalReportUserData ReportUserData; // 0x58(0x280)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameIllegalReportUserData
// Size: 0x280 (Inherited: 0x00)
struct FAnalysisClientGameIllegalReportUserData {
	struct FAnalysisClientGameIllegalReportData report_info; // 0x00(0x38)
	struct FAnalysisClientGameIllegalVictimCharacterData victim_info; // 0x38(0x128)
	struct FAnalysisClientGameIllegalSuspectCharacterData suspect_info; // 0x160(0x120)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameIllegalSuspectCharacterData
// Size: 0x120 (Inherited: 0x00)
struct FAnalysisClientGameIllegalSuspectCharacterData {
	int32_t loc_x; // 0x00(0x04)
	int32_t loc_y; // 0x04(0x04)
	int32_t loc_z; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString UserID; // 0x10(0x10)
	struct FString NickName; // 0x20(0x10)
	int32_t ClassIndex; // 0x30(0x04)
	int32_t Level; // 0x34(0x04)
	int32_t max_hp; // 0x38(0x04)
	int32_t current_hp; // 0x3c(0x04)
	int32_t current_max_hp; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<int32_t> skill_perk_id; // 0x48(0x10)
	struct TArray<int32_t> skill_perk_cooltime_id; // 0x58(0x10)
	struct FAnalysisClientGameIllegalSuspectWeaponData Weapon; // 0x68(0x60)
	struct FString equip_helmet; // 0xc8(0x10)
	int32_t helmet_durability; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FString equip_armour; // 0xe0(0x10)
	int32_t armour_durability; // 0xf0(0x04)
	int32_t fire_type; // 0xf4(0x04)
	int32_t zoom_type; // 0xf8(0x04)
	int32_t Distance; // 0xfc(0x04)
	int32_t max_distance; // 0x100(0x04)
	int32_t damage_count; // 0x104(0x04)
	int32_t headshot_damage_count; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct FString ip; // 0x110(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameIllegalSuspectWeaponData
// Size: 0x60 (Inherited: 0x00)
struct FAnalysisClientGameIllegalSuspectWeaponData {
	int32_t item_id; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString item_name; // 0x08(0x10)
	bool is_expert_weapon; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString max_item_id; // 0x20(0x10)
	int32_t grade; // 0x30(0x04)
	int32_t enchant; // 0x34(0x04)
	int32_t perk_id_2; // 0x38(0x04)
	int32_t perk_id_3; // 0x3c(0x04)
	int32_t perk_id_4; // 0x40(0x04)
	int32_t perk_id_5; // 0x44(0x04)
	struct FAnalysisPartsData parts_id; // 0x48(0x14)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisPartsData
// Size: 0x14 (Inherited: 0x00)
struct FAnalysisPartsData {
	int32_t grip; // 0x00(0x04)
	int32_t magazine; // 0x04(0x04)
	int32_t muzzledevice; // 0x08(0x04)
	int32_t sight; // 0x0c(0x04)
	int32_t stock; // 0x10(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameIllegalVictimCharacterData
// Size: 0x128 (Inherited: 0x00)
struct FAnalysisClientGameIllegalVictimCharacterData {
	int32_t team_id; // 0x00(0x04)
	int32_t team_cnt; // 0x04(0x04)
	int32_t current_rank; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString UserID; // 0x10(0x10)
	struct FString NickName; // 0x20(0x10)
	int32_t ClassIndex; // 0x30(0x04)
	int32_t Level; // 0x34(0x04)
	int32_t current_hp; // 0x38(0x04)
	int32_t max_hp; // 0x3c(0x04)
	int32_t loc_x; // 0x40(0x04)
	int32_t loc_y; // 0x44(0x04)
	int32_t loc_z; // 0x48(0x04)
	int32_t isinbluezone; // 0x4c(0x04)
	int32_t isinredzone; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString damage_type; // 0x58(0x10)
	int32_t current_max_hp; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FString hit_bone; // 0x70(0x10)
	int32_t Damage; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct TArray<int32_t> skill_perk_id; // 0x88(0x10)
	struct TArray<int32_t> skill_perk_cooltime_id; // 0x98(0x10)
	struct FAnalysisClientGameIllegalVictimWeaponData Weapon; // 0xa8(0x48)
	struct FString equip_helmet; // 0xf0(0x10)
	int32_t helmet_durability; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct FString equip_armour; // 0x108(0x10)
	int32_t armour_durability; // 0x118(0x04)
	int32_t fire_type; // 0x11c(0x04)
	int32_t zoom_type; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameIllegalVictimWeaponData
// Size: 0x48 (Inherited: 0x00)
struct FAnalysisClientGameIllegalVictimWeaponData {
	int32_t item_id; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString item_name; // 0x08(0x10)
	bool is_expert_weapon; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t grade; // 0x1c(0x04)
	int32_t enchant; // 0x20(0x04)
	int32_t perk_id_2; // 0x24(0x04)
	int32_t perk_id_3; // 0x28(0x04)
	int32_t perk_id_4; // 0x2c(0x04)
	int32_t perk_id_5; // 0x30(0x04)
	struct FAnalysisPartsData parts_id; // 0x34(0x14)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameIllegalReportData
// Size: 0x38 (Inherited: 0x00)
struct FAnalysisClientGameIllegalReportData {
	int32_t report_type; // 0x00(0x04)
	int32_t report_index; // 0x04(0x04)
	struct TArray<int32_t> illegal_program_index; // 0x08(0x10)
	struct FString replay_version; // 0x18(0x10)
	struct FString replay_filename; // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelMovePoint
// Size: 0x20 (Inherited: 0x00)
struct FBravoHotelMovePoint {
	struct FName AreaName; // 0x00(0x08)
	struct FVector TargetPoint; // 0x08(0x0c)
	struct FRotator TargetRotate; // 0x14(0x0c)
};

// ScriptStruct BravoHotelGame.MatchEndSimpleResult
// Size: 0xa8 (Inherited: 0x00)
struct FMatchEndSimpleResult {
	bool bAllDead; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct ABravoHotelPlayerState* Killer; // 0x08(0x08)
	bool IsWeaponKill; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FText WeaponName; // 0x18(0x18)
	int32_t WeaponLevel; // 0x30(0x04)
	int32_t WeaponRarity; // 0x34(0x04)
	struct FDamageTypeTable DamageTypeRow; // 0x38(0x68)
	bool bDeathByHeadshot; // 0xa0(0x01)
	bool Replicate; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
};

// ScriptStruct BravoHotelGame.EquipmentInfo
// Size: 0x0c (Inherited: 0x00)
struct FEquipmentInfo {
	char slot_num; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t table_index; // 0x04(0x04)
	uint32_t Count; // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.RepRadialDamageInfo
// Size: 0x58 (Inherited: 0x00)
struct FRepRadialDamageInfo {
	float BaseDamage; // 0x00(0x04)
	float MinDamage; // 0x04(0x04)
	float DamageInnerRadius; // 0x08(0x04)
	float DamageOuterRadius; // 0x0c(0x04)
	float DamageFalloff; // 0x10(0x04)
	float ImpulsePower; // 0x14(0x04)
	enum class ERadialImpulseFalloff ImpulseFalloff; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UDamageType* DamageTypeClass; // 0x20(0x08)
	struct FVector_NetQuantize Origin; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
	struct AActor* DamageCauser; // 0x38(0x08)
	struct AController* Instigator; // 0x40(0x08)
	struct TArray<struct FRepHitResultInfo> RepHitResults; // 0x48(0x10)
};

// ScriptStruct BravoHotelGame.RepHitResultInfo
// Size: 0x28 (Inherited: 0x00)
struct FRepHitResultInfo {
	struct AActor* DamageTarget; // 0x00(0x08)
	struct UPrimitiveComponent* HitComponent; // 0x08(0x08)
	int16_t BoneIndex; // 0x10(0x02)
	int16_t ExtraIndex; // 0x12(0x02)
	struct FVector_NetQuantize ImpactPoint; // 0x14(0x0c)
	float PenetrationDepth; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelBlueZoneInfo
// Size: 0x1a8 (Inherited: 0x08)
struct FBravoHotelBlueZoneInfo : FTableRowBase {
	struct FBravoHotelPlayZoneData PlayZoneData; // 0x08(0x188)
	struct TArray<struct FBattleRoyalPhaseInfo> BattleRoyalePhaseInfo; // 0x190(0x10)
	struct FName RowName_AddPerkInfos; // 0x1a0(0x08)
};

// ScriptStruct BravoHotelGame.BattleRoyalPhaseInfo
// Size: 0xb8 (Inherited: 0x00)
struct FBattleRoyalPhaseInfo {
	float DelayTime; // 0x00(0x04)
	float WaitingTime; // 0x04(0x04)
	float ShrinkTime; // 0x08(0x04)
	float TargetCircleRate; // 0x0c(0x04)
	float DamagePerSecondOutOfCircle; // 0x10(0x04)
	float CriticalTimeLimitTime; // 0x14(0x04)
	struct TArray<float> TransportProbabilities; // 0x18(0x10)
	float TransportStartingAddValue; // 0x28(0x04)
	bool UsingFixTransportAltitude; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float FixTransportAltitude; // 0x30(0x04)
	float TransportAltitude; // 0x34(0x04)
	int32_t TransportMinCount; // 0x38(0x04)
	int32_t TransportMaxCount; // 0x3c(0x04)
	struct FName TransportRandomItemKey; // 0x40(0x08)
	bool bUsingWeightMap; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float LocalDeviation; // 0x4c(0x04)
	struct FPersonalSupplyPhaseInfo PersonalSupplyPhaseInfo; // 0x50(0x30)
	bool EnableUsingDelayAddPerk; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct TArray<struct FAddPerkInfo> AddPerkInfos; // 0x88(0x10)
	char pad_98[0x20]; // 0x98(0x20)
};

// ScriptStruct BravoHotelGame.AddPerkInfo
// Size: 0x18 (Inherited: 0x00)
struct FAddPerkInfo {
	float MinTime; // 0x00(0x04)
	float MaxTime; // 0x04(0x04)
	struct TArray<struct FPerkLevelUpWeight> LevelUpWeights; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.PerkLevelUpWeight
// Size: 0x20 (Inherited: 0x00)
struct FPerkLevelUpWeight {
	int32_t LevelCount; // 0x00(0x04)
	float Weight; // 0x04(0x04)
	float Beginner_Weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<float> Defeat_Weight; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.PersonalSupplyPhaseInfo
// Size: 0x30 (Inherited: 0x00)
struct FPersonalSupplyPhaseInfo {
	float Probability; // 0x00(0x04)
	float ProbabilityWithTeam; // 0x04(0x04)
	float MinAssignmentDelayTime; // 0x08(0x04)
	float AddAssignmentDelayTime; // 0x0c(0x04)
	float AssignmentRange; // 0x10(0x04)
	float MaxAssignmentRange; // 0x14(0x04)
	float Degree; // 0x18(0x04)
	bool UsingDistanceRate; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float MinAssignmentRangeRate; // 0x20(0x04)
	float MaxAssignmentRangeRate; // 0x24(0x04)
	bool IndividualAssignmentDelayTime; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float ItemSpawnVolume; // 0x2c(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelPlayZoneData
// Size: 0x188 (Inherited: 0x00)
struct FBravoHotelPlayZoneData {
	int32_t ID; // 0x00(0x04)
	struct FName MapKey; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString DisplayName; // 0x10(0x10)
	struct FString AdditionalOption; // 0x20(0x10)
	bool bCustomSetting; // 0x30(0x01)
	bool bDev; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct FString CQRKey; // 0x38(0x10)
	int32_t MaxPlayerCount; // 0x48(0x04)
	int32_t AutoStartPlayerCount; // 0x4c(0x04)
	struct FVector2D CircleCenterPos; // 0x50(0x08)
	float CircleRadius; // 0x58(0x04)
	float DamagePerSecondOutOfCircle; // 0x5c(0x04)
	bool UsingInitialRandomCircle; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float InitialRandomCircleRadius; // 0x64(0x04)
	float InitialRandomCircleDeviation; // 0x68(0x04)
	float InitialRandomCircleMinAngle; // 0x6c(0x04)
	float InitialRandomCircleMaxAngle; // 0x70(0x04)
	bool bShowFirstTarget; // 0x74(0x01)
	bool UsingWidgetMapDataForAircraft; // 0x75(0x01)
	bool ShowMessage; // 0x76(0x01)
	char pad_77[0x1]; // 0x77(0x01)
	struct TArray<struct TSoftObjectPtr<UObject>> PlayZoneImageList; // 0x78(0x10)
	struct FText BlueZoneTitle; // 0x88(0x18)
	struct FText BlueZoneDesc; // 0xa0(0x18)
	struct TArray<struct FPlayZoneInfo> PlayZoneInfos; // 0xb8(0x10)
	int32_t SelectedPlayZoneInfoIndex; // 0xc8(0x04)
	struct FName RedZoneTableID; // 0xcc(0x08)
	struct FName ExpertWeaponTableID; // 0xd4(0x08)
	float AircraftAltitude; // 0xdc(0x04)
	float AircrafSpeed; // 0xe0(0x04)
	int32_t OverrideUltimateLevel; // 0xe4(0x04)
	struct FName PerkClassRuleKey; // 0xe8(0x08)
	struct FName ResuscitationTypeKey; // 0xf0(0x08)
	struct FName AIItemSettingType; // 0xf8(0x08)
	bool LastPhaseBlueZonePositionIsCenter; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct TArray<struct FName> ItemWorldSpawnDataTableList; // 0x108(0x10)
	bool UsingOuterCircle; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	struct FVector2D OuterCircleCenterPos; // 0x11c(0x08)
	float OuterCircleRadius; // 0x124(0x04)
	float OuterCircleDamageDelay; // 0x128(0x04)
	float OuterCircleDamagePerSecond; // 0x12c(0x04)
	struct FAreaItemSpawnDataList AreaItemSpawnList; // 0x130(0x10)
	struct FAreaOverrideStandardGroupDataList AreaOverrideStandardGroupDataList; // 0x140(0x10)
	struct TArray<struct FName> AreaSpawnRateKeyList; // 0x150(0x10)
	struct FName BlueZoneSpawnRateKey; // 0x160(0x08)
	struct TArray<struct FName> VehicleAreaSpawnRateKeyList; // 0x168(0x10)
	struct FName VehicleBlueZoneSpawnRateKey; // 0x178(0x08)
	bool bNotUseForceParachuteSeaLevelZ; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
};

// ScriptStruct BravoHotelGame.AreaOverrideStandardGroupDataList
// Size: 0x10 (Inherited: 0x00)
struct FAreaOverrideStandardGroupDataList {
	struct TArray<struct FAreaOverrideStandardGroupData> List; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.AreaOverrideStandardGroupData
// Size: 0xb0 (Inherited: 0x00)
struct FAreaOverrideStandardGroupData {
	struct FVector2D CenterLocation; // 0x00(0x08)
	float Radius; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<struct FName, struct FName> ExchangeInfos; // 0x10(0x50)
	struct TMap<struct FName, struct FRandomSpawn> Items; // 0x60(0x50)
};

// ScriptStruct BravoHotelGame.AreaItemSpawnDataList
// Size: 0x10 (Inherited: 0x00)
struct FAreaItemSpawnDataList {
	struct TArray<struct FAreaItemSpawnData> List; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.AreaItemSpawnData
// Size: 0x20 (Inherited: 0x00)
struct FAreaItemSpawnData {
	struct FVector2D CenterLocation; // 0x00(0x08)
	float Radius; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FItemStandardGroupInfo> List; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.ItemStandardGroupInfo
// Size: 0x10 (Inherited: 0x00)
struct FItemStandardGroupInfo {
	struct FName RandomSpawnItemID; // 0x00(0x08)
	int32_t MinCnt; // 0x08(0x04)
	int32_t MaxCnt; // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.PlayZoneInfo
// Size: 0x58 (Inherited: 0x00)
struct FPlayZoneInfo {
	struct TSoftObjectPtr<UObject> PlayZoneImage; // 0x00(0x28)
	struct FText PlayZoneTitle; // 0x28(0x18)
	struct FText PlayZoneDesc; // 0x40(0x18)
};

// ScriptStruct BravoHotelGame.RepVehicleMovement
// Size: 0x38 (Inherited: 0x34)
struct FRepVehicleMovement : FRepMovement {
	char bHasLinearVelocity : 1; // 0x34(0x01)
	char bHasAngularVelocity : 1; // 0x34(0x01)
	char pad_34_2 : 6; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct BravoHotelGame.RepWCLevelVisibilityInfo
// Size: 0x08 (Inherited: 0x00)
struct FRepWCLevelVisibilityInfo {
	int32_t TileIndex; // 0x00(0x04)
	char bIsVisible : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct BravoHotelGame.MaterialItemList
// Size: 0x10 (Inherited: 0x00)
struct FMaterialItemList {
	struct TArray<struct ABravoHotelPickup*> MaterialItemList; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.HideObjectInfo
// Size: 0x20 (Inherited: 0x00)
struct FHideObjectInfo {
	struct TArray<struct FHideObjectSingleInfo> Objects; // 0x00(0x10)
	struct FString TagName; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.HideObjectSingleInfo
// Size: 0x10 (Inherited: 0x00)
struct FHideObjectSingleInfo {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.LevelStreamimgPriorityByZ
// Size: 0x08 (Inherited: 0x00)
struct FLevelStreamimgPriorityByZ {
	float DistanceZ; // 0x00(0x04)
	int32_t MinPriority; // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.DummyInfo
// Size: 0x60 (Inherited: 0x00)
struct FDummyInfo {
	struct FBravoHotelPingInfo PingInfo; // 0x00(0x38)
	struct FVector PingLocalLocation; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FVector> RouteInfo; // 0x48(0x10)
	int32_t RegionPing; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct BravoHotelGame.SeasonTierUpElement
// Size: 0xd0 (Inherited: 0x00)
struct FSeasonTierUpElement {
	int32_t TierID; // 0x00(0x04)
	int32_t NextTierID; // 0x04(0x04)
	struct FText DisplayName; // 0x08(0x18)
	struct TSoftObjectPtr<UObject> UMGIcon; // 0x20(0x28)
	struct TSoftObjectPtr<UObject> CohIcon; // 0x48(0x28)
	int32_t Point; // 0x70(0x04)
	int32_t Rank; // 0x74(0x04)
	int32_t PromotePoint; // 0x78(0x04)
	enum class EPromotionCondition PromoteCondition; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	float TargetValueToPromote; // 0x80(0x04)
	int32_t PromoteRewardRP; // 0x84(0x04)
	int32_t PromotePenaltyRP; // 0x88(0x04)
	int32_t DemotePoint; // 0x8c(0x04)
	enum class EPromotionCondition DemoteCondition; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	float TargetValueToDemote; // 0x94(0x04)
	int32_t DemoteRewardRP; // 0x98(0x04)
	int32_t DemotePenaltyRP; // 0x9c(0x04)
	int32_t NextSeasonStartPoint; // 0xa0(0x04)
	float FirstKillRP; // 0xa4(0x04)
	float KillRP; // 0xa8(0x04)
	float AIKillRP; // 0xac(0x04)
	float FirstResurrectionRP; // 0xb0(0x04)
	float ResurrectionRP; // 0xb4(0x04)
	float AssistRP; // 0xb8(0x04)
	float SaveRP; // 0xbc(0x04)
	float MatchRankMinRP; // 0xc0(0x04)
	float MatchRankMaxRP; // 0xc4(0x04)
	float MatchRankRPZeroRate; // 0xc8(0x04)
	float TotalMaxRP; // 0xcc(0x04)
};

// ScriptStruct BravoHotelGame.ExpertWeaponPingInfo
// Size: 0x28 (Inherited: 0x00)
struct FExpertWeaponPingInfo {
	int32_t PingIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct ABravoHotelPickup* ExpertWeaponItem; // 0x08(0x08)
	struct AActor* LocationActor; // 0x10(0x08)
	struct UPaperSprite* Image; // 0x18(0x08)
	char Rarity; // 0x20(0x01)
	bool EffectReinforce; // 0x21(0x01)
	bool bSetData; // 0x22(0x01)
	char pad_23[0x5]; // 0x23(0x05)
};

// ScriptStruct BravoHotelGame.MaterialItemPingInfo
// Size: 0x30 (Inherited: 0x00)
struct FMaterialItemPingInfo {
	int32_t PingIndex; // 0x00(0x04)
	struct FName MaterialKey; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct ABravoHotelPickup* MaterialItem; // 0x10(0x08)
	struct AActor* LocationActor; // 0x18(0x08)
	struct UPaperSprite* Image; // 0x20(0x08)
	char Rarity; // 0x28(0x01)
	bool EffectReinforce; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct BravoHotelGame.PerkVechicleInfo
// Size: 0x28 (Inherited: 0x00)
struct FPerkVechicleInfo {
	bool NeedUpdate; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct APawn*> VehicleList; // 0x08(0x10)
	struct TArray<struct FVector> VehicleLocationList; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.TrajectoryInitialConditions
// Size: 0x4c (Inherited: 0x00)
struct FTrajectoryInitialConditions {
	struct FVector InitialVelocity; // 0x00(0x0c)
	struct FVector InitialWorldLocation; // 0x0c(0x0c)
	struct FRotator InitialRotation; // 0x18(0x0c)
	float t0; // 0x24(0x04)
	struct FVector v0direction; // 0x28(0x0c)
	float v0length; // 0x34(0x04)
	float PenRestDeltaTime; // 0x38(0x04)
	struct FVector PenRestLocation; // 0x3c(0x0c)
	float PenDeceleration; // 0x48(0x04)
};

// ScriptStruct BravoHotelGame.QuestEventInfo
// Size: 0x90 (Inherited: 0x00)
struct FQuestEventInfo {
	struct FString PlayerUID; // 0x00(0x10)
	enum class EQuestTaskType QuestTaskType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FQuestTaskCondition Condition; // 0x18(0x70)
	int32_t AddValue; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct BravoHotelGame.QuestTaskCondition
// Size: 0x70 (Inherited: 0x00)
struct FQuestTaskCondition {
	struct TArray<struct FName> TargetItemIndex; // 0x00(0x10)
	struct TArray<struct FName> EquipedItemIndex; // 0x10(0x10)
	struct TArray<enum class EWeaponType> WeaponType; // 0x20(0x10)
	struct TArray<struct FName> BoneName; // 0x30(0x10)
	struct TArray<struct FString> State; // 0x40(0x10)
	struct TArray<struct FString> Action; // 0x50(0x10)
	struct TArray<struct FString> ETC; // 0x60(0x10)
};

// ScriptStruct BravoHotelGame.RepVehicleCollisionEvent
// Size: 0x28 (Inherited: 0x00)
struct FRepVehicleCollisionEvent {
	struct UPrimitiveComponent* HitComponent; // 0x00(0x08)
	int16_t InstanceIndex; // 0x08(0x02)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FVector_NetQuantize ImpactPoint; // 0x0c(0x0c)
	struct FVector_NetQuantizeNormal ImpactNormal; // 0x18(0x0c)
	float ForwardSpeedKmH; // 0x24(0x04)
};

// ScriptStruct BravoHotelGame.VehiclePostPhysicsTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FVehiclePostPhysicsTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct BravoHotelGame.RepVehicleSeatInfo
// Size: 0x10 (Inherited: 0x00)
struct FRepVehicleSeatInfo {
	char bIsOccupied : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct AActor* Occupant; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.QuestData
// Size: 0x58 (Inherited: 0x08)
struct FQuestData : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	struct FName NextQuestKey; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText QuestTitle; // 0x18(0x18)
	struct FText QuestDesc; // 0x30(0x18)
	struct TArray<struct FQuestTaskElement> Tasks; // 0x48(0x10)
};

// ScriptStruct BravoHotelGame.QuestTaskElement
// Size: 0xb0 (Inherited: 0x00)
struct FQuestTaskElement {
	enum class EQuestTaskType QuestTaskType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t GoalValue; // 0x04(0x04)
	int32_t ProgressRate; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText TaskTitle; // 0x10(0x18)
	struct FText TaskDesc; // 0x28(0x18)
	struct FQuestTaskCondition Condition; // 0x40(0x70)
};

// ScriptStruct BravoHotelGame.QuestInfo
// Size: 0x30 (Inherited: 0x00)
struct FQuestInfo {
	struct FName QuestKey; // 0x00(0x08)
	int32_t ID; // 0x08(0x04)
	enum class EQuestState State; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t CurrentProgress; // 0x10(0x04)
	int32_t GoalProgress; // 0x14(0x04)
	struct TArray<struct FQuestTaskInfo> Tasks; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct BravoHotelGame.QuestTaskInfo
// Size: 0x20 (Inherited: 0x00)
struct FQuestTaskInfo {
	struct FName QuestKey; // 0x00(0x08)
	int32_t Index; // 0x08(0x04)
	enum class EQuestState State; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t CurrentValue; // 0x10(0x04)
	char pad_14[0xc]; // 0x14(0x0c)
};

// ScriptStruct BravoHotelGame.SeasonQuestInfo
// Size: 0x18 (Inherited: 0x00)
struct FSeasonQuestInfo {
	int32_t QuestIndex; // 0x00(0x04)
	int32_t CurrentScore; // 0x04(0x04)
	int32_t MaxScore; // 0x08(0x04)
	char pad_C[0xc]; // 0x0c(0x0c)
};

// ScriptStruct BravoHotelGame.LoadBuildingInfo
// Size: 0x20 (Inherited: 0x00)
struct FLoadBuildingInfo {
	struct FString BuildingName; // 0x00(0x10)
	struct FVector Location; // 0x10(0x0c)
	bool isinbluezone; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct BravoHotelGame.ItemSpawnLimitInfo
// Size: 0x14 (Inherited: 0x00)
struct FItemSpawnLimitInfo {
	int32_t MaxLimitCnt; // 0x00(0x04)
	int32_t UserCnt1; // 0x04(0x04)
	int32_t LimitCnt1; // 0x08(0x04)
	int32_t UserCnt2; // 0x0c(0x04)
	int32_t LimitCnt2; // 0x10(0x04)
};

// ScriptStruct BravoHotelGame.LocalSpawnRate
// Size: 0x28 (Inherited: 0x08)
struct FLocalSpawnRate : FTableRowBase {
	struct FVector CenterLocation; // 0x08(0x0c)
	float Radius; // 0x14(0x04)
	struct TArray<struct FHighTypeSpawnRate> highTypeList; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.HighTypeSpawnRate
// Size: 0x20 (Inherited: 0x00)
struct FHighTypeSpawnRate {
	struct FString highTypeName; // 0x00(0x10)
	struct TArray<struct FMidTypeSpawnRate> midTypeList; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.MidTypeSpawnRate
// Size: 0x28 (Inherited: 0x00)
struct FMidTypeSpawnRate {
	struct FString midTypeName; // 0x00(0x10)
	float SpawnRate; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FItemSpawnRate> ItemList; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.ItemSpawnRate
// Size: 0x18 (Inherited: 0x00)
struct FItemSpawnRate {
	struct FString ItemName; // 0x00(0x10)
	float SpawnRate; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.VehicleAreaSpawnRateInfo
// Size: 0x78 (Inherited: 0x00)
struct FVehicleAreaSpawnRateInfo {
	struct FLocalSpawnRate Data; // 0x00(0x28)
	struct TMap<struct FName, struct FVehicleAreaSpawnDetailInfo> AreaList; // 0x28(0x50)
};

// ScriptStruct BravoHotelGame.VehicleAreaSpawnDetailInfo
// Size: 0x20 (Inherited: 0x00)
struct FVehicleAreaSpawnDetailInfo {
	struct TArray<struct UBravoHotelVehicleStandardGroupBoxComponent*> StandardGroupList; // 0x00(0x10)
	struct TArray<struct FVehicleBoxDetailInfo> VehicleBoxList; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.VehicleBoxDetailInfo
// Size: 0x10 (Inherited: 0x00)
struct FVehicleBoxDetailInfo {
	struct UBravoHotelVehicleSpawnBoxComponent* Box; // 0x00(0x08)
	int32_t Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.AreaSpawnRateInfo
// Size: 0x88 (Inherited: 0x00)
struct FAreaSpawnRateInfo {
	struct FLocalSpawnRate Data; // 0x00(0x28)
	struct TArray<struct UBravoHotelItemStandardGroupBoxComponent*> StandardGroupList; // 0x28(0x10)
	struct TMap<struct FName, struct FAreaSpawnDetailInfo> AreaList; // 0x38(0x50)
};

// ScriptStruct BravoHotelGame.AreaSpawnDetailInfo
// Size: 0x10 (Inherited: 0x00)
struct FAreaSpawnDetailInfo {
	struct TArray<struct UBravoHotelItemSpawnBoxComponent*> ItemBoxList; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.StandardGroupKeyCountInfo
// Size: 0x58 (Inherited: 0x00)
struct FStandardGroupKeyCountInfo {
	struct TMap<struct FName, int32_t> StandardGroupKeyCountList; // 0x00(0x50)
	int32_t TotalBoxCount; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct BravoHotelGame.DamageInfo
// Size: 0x10 (Inherited: 0x00)
struct FDamageInfo {
	struct ABravoHotelPlayerController* Instigator; // 0x00(0x08)
	float DamageAmount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.TeamInfo
// Size: 0x30 (Inherited: 0x00)
struct FTeamInfo {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct TWeakObjectPtr<struct ABravoHotelPlayerState>> MemberStates; // 0x08(0x10)
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct BravoHotelGame.BravoHotelMatchingSettings
// Size: 0x20 (Inherited: 0x00)
struct FBravoHotelMatchingSettings {
	bool bPerson; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Map; // 0x08(0x10)
	enum class EMatchingType Type; // 0x18(0x01)
	bool bNeedMoreMember; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct BravoHotelGame.PlayerPawnList
// Size: 0xe8 (Inherited: 0x00)
struct FPlayerPawnList {
	struct ACharacter* Pawn; // 0x00(0x08)
	struct FBravoHotelPartyMemberInfo PartyInfo; // 0x08(0xe0)
};

// ScriptStruct BravoHotelGame.GameSettingInfo
// Size: 0x88 (Inherited: 0x00)
struct FGameSettingInfo {
	struct TArray<struct FDeckBlockElement> classindex_activeinfos; // 0x00(0x10)
	bool redzone_active; // 0x10(0x01)
	bool vehicle_active; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	int32_t ultimate_unlocklevel; // 0x14(0x04)
	int32_t standby_timer; // 0x18(0x04)
	int32_t ready_timer; // 0x1c(0x04)
	struct TArray<struct FGameSettingCQRElement> cqr_quickstartinfos; // 0x20(0x10)
	struct TArray<struct FGameSettingClassSelectInfoElement> class_select_info; // 0x30(0x10)
	struct TArray<struct FGameSettingClassChangeInfoElement> class_change_info; // 0x40(0x10)
	int32_t newbie_play_count; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<int32_t> loser_level_score; // 0x58(0x10)
	struct TArray<struct FLoserScoreElement> loser_scores; // 0x68(0x10)
	struct TArray<struct FString> user_score_test_uid; // 0x78(0x10)
};

// ScriptStruct BravoHotelGame.LoserScoreElement
// Size: 0x28 (Inherited: 0x00)
struct FLoserScoreElement {
	int32_t match_rating; // 0x00(0x04)
	int32_t loser_level; // 0x04(0x04)
	float max_score; // 0x08(0x04)
	float score_by_rank; // 0x0c(0x04)
	float score_on_defeat; // 0x10(0x04)
	float score_on_zero_kill; // 0x14(0x04)
	float score_on_zero_assist; // 0x18(0x04)
	float score_on_win; // 0x1c(0x04)
	float score_per_kill; // 0x20(0x04)
	float score_per_assist; // 0x24(0x04)
};

// ScriptStruct BravoHotelGame.GameSettingClassChangeInfoElement
// Size: 0x48 (Inherited: 0x00)
struct FGameSettingClassChangeInfoElement {
	struct FString battle_mode; // 0x00(0x10)
	int32_t class_select_mode_price; // 0x10(0x04)
	int32_t random_change_refresh_max_count; // 0x14(0x04)
	struct TArray<int32_t> random_change_price; // 0x18(0x10)
	int32_t scope_select_refresh_max_count; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<int32_t> scope_select_price; // 0x30(0x10)
	int32_t scope_select_count; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct BravoHotelGame.GameSettingClassSelectInfoElement
// Size: 0x28 (Inherited: 0x00)
struct FGameSettingClassSelectInfoElement {
	struct FString battle_mode; // 0x00(0x10)
	int32_t class_select_mode; // 0x10(0x04)
	int32_t current_status; // 0x14(0x04)
	int32_t current_status_view; // 0x18(0x04)
	int32_t current_status_party; // 0x1c(0x04)
	int32_t duplicate_select_possible; // 0x20(0x04)
	int32_t random_possible; // 0x24(0x04)
};

// ScriptStruct BravoHotelGame.GameSettingCQRElement
// Size: 0x18 (Inherited: 0x00)
struct FGameSettingCQRElement {
	struct FString cqr; // 0x00(0x10)
	int32_t Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.DeckBlockElement
// Size: 0x08 (Inherited: 0x00)
struct FDeckBlockElement {
	int32_t Index; // 0x00(0x04)
	bool Value; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct BravoHotelGame.AirCraftBoardingPlayerList
// Size: 0x10 (Inherited: 0x00)
struct FAirCraftBoardingPlayerList {
	struct TArray<struct FAirCraftBoardingPlayerInfo> AirCraftBoardingPlayerList; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.AirCraftBoardingPlayerInfo
// Size: 0x08 (Inherited: 0x00)
struct FAirCraftBoardingPlayerInfo {
	int32_t PlayerUniqueID; // 0x00(0x04)
	bool IsDescent; // 0x04(0x01)
	char AirCraftID; // 0x05(0x01)
	char SeatID; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
};

// ScriptStruct BravoHotelGame.TeamEndInfo
// Size: 0x20 (Inherited: 0x00)
struct FTeamEndInfo {
	int32_t TeamUID; // 0x00(0x04)
	int32_t LastKillerTeamUID; // 0x04(0x04)
	int32_t Rank; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FCharacterDiedInfo> DiedInfos; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.CharacterDiedInfo
// Size: 0x28 (Inherited: 0x00)
struct FCharacterDiedInfo {
	int32_t DiedUID; // 0x00(0x04)
	int32_t KillerUID; // 0x04(0x04)
	int32_t KnockUID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FDamageEvent DiedDamageEvent; // 0x10(0x10)
	float EventTime; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelGameData
// Size: 0x320 (Inherited: 0x00)
struct FBravoHotelGameData {
	struct FBravoHotelMapTableRow MapData; // 0x00(0x180)
	struct FBravoHotelPlayZoneData PlayZoneBaseData; // 0x180(0x188)
	struct TArray<struct FBattleRoyalPhaseInfo> PlayZonePhaseList; // 0x308(0x10)
	struct UBravoHotelWeightMapData* WeightMapInfo; // 0x318(0x08)
};

// ScriptStruct BravoHotelGame.SentenceData
// Size: 0xb0 (Inherited: 0x08)
struct FSentenceData : FTableRowBase {
	struct FText SpeakerName; // 0x08(0x18)
	struct FText SentenceText; // 0x20(0x18)
	int32_t FaceIndex; // 0x38(0x04)
	bool bNeedInput; // 0x3c(0x01)
	bool bHoldOnVoicePlay; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	float NextTime; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct UAkAudioEvent* VoiceEvent; // 0x48(0x08)
	struct TMap<struct FName, struct UAkAudioEvent*> ChannelVoiceEvent; // 0x50(0x50)
	struct TArray<struct FName> AdditionalEvents; // 0xa0(0x10)
};

// ScriptStruct BravoHotelGame.AreaWidgetInfo
// Size: 0x88 (Inherited: 0x00)
struct FAreaWidgetInfo {
	struct FVector ServerLocation; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	struct AActor* TargetActor; // 0x10(0x08)
	bool bIsAutoRemove; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float AutoRemoveTime; // 0x1c(0x04)
	struct FMaterialItemPingInfo PingInfo; // 0x20(0x30)
	struct FExpertWeaponPingInfo ExpertWeaponPingInfo; // 0x50(0x28)
	struct UPaperSprite* Image; // 0x78(0x08)
	int32_t LocalPingIndex; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct BravoHotelGame.KillBroadcastKillerInfo
// Size: 0xb98 (Inherited: 0x00)
struct FKillBroadcastKillerInfo {
	struct ABravoHotelPlayerState* PlayerState; // 0x00(0x08)
	bool IsHeadShot; // 0x08(0x01)
	bool IsSelfKill; // 0x09(0x01)
	bool IsTeamKill; // 0x0a(0x01)
	bool IsWeaponKill; // 0x0b(0x01)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FBravoHotelWeaponInfo WeaponInfo; // 0x10(0xb20)
	struct FDamageTypeTable DamageTypeRow; // 0xb30(0x68)
};

// ScriptStruct BravoHotelGame.KillBroadcastUIInfo
// Size: 0x1768 (Inherited: 0x00)
struct FKillBroadcastUIInfo {
	struct FKillBroadcastKillerInfo Attacker; // 0x00(0xb98)
	struct FKillBroadcastKillerInfo KnockOut; // 0xb98(0xb98)
	struct ABravoHotelPlayerState* Killer; // 0x1730(0x08)
	struct ABravoHotelPlayerState* SubKiller; // 0x1738(0x08)
	struct ABravoHotelPlayerState* Died; // 0x1740(0x08)
	struct TArray<struct ABravoHotelPlayerState*> Assist; // 0x1748(0x10)
	bool IsFinallyKill; // 0x1758(0x01)
	char pad_1759[0x3]; // 0x1759(0x03)
	int32_t KillCount; // 0x175c(0x04)
	enum class EBroadCastKillMessageType BroadCastKillMessageType; // 0x1760(0x01)
	char pad_1761[0x7]; // 0x1761(0x07)
};

// ScriptStruct BravoHotelGame.StatupAnimData
// Size: 0x14 (Inherited: 0x00)
struct FStatupAnimData {
	struct FName PreItemKey; // 0x00(0x08)
	struct FName NewItemKey; // 0x08(0x08)
	int32_t SlotIndex; // 0x10(0x04)
};

// ScriptStruct BravoHotelGame.Coh_ResultInfo
// Size: 0x38 (Inherited: 0x00)
struct FCoh_ResultInfo {
	int32_t TableIndex; // 0x00(0x04)
	int32_t NewTableIndex; // 0x04(0x04)
	struct FString Identified; // 0x08(0x10)
	float fatigue; // 0x18(0x04)
	int32_t beforeDurability; // 0x1c(0x04)
	float beforeFatigue; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FCoh_Reward> Rewards; // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.Coh_Reward
// Size: 0x08 (Inherited: 0x00)
struct FCoh_Reward {
	int32_t TableIndex; // 0x00(0x04)
	int32_t Count; // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.Coh_Query
// Size: 0x20 (Inherited: 0x00)
struct FCoh_Query {
	struct FName TableName; // 0x00(0x08)
	bool AllRows; // 0x08(0x01)
	bool ArrayType; // 0x09(0x01)
	bool LocalizationKey; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
	struct TArray<struct FName> RowNames; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.Coh_ForceMatching
// Size: 0x68 (Inherited: 0x00)
struct FCoh_ForceMatching {
	struct FString HostIP; // 0x00(0x10)
	int32_t Port; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Token; // 0x18(0x10)
	struct FString Key; // 0x28(0x10)
	int32_t MatchNum; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString Map; // 0x40(0x10)
	bool SpectatorOnly; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FString AddOptions; // 0x58(0x10)
};

// ScriptStruct BravoHotelGame.Response_MaterialList_Data
// Size: 0x30 (Inherited: 0x00)
struct FResponse_MaterialList_Data {
	int32_t table_index; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString item_id; // 0x08(0x10)
	int32_t stack_count; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString created; // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.Response_Weapon_List_Data
// Size: 0x88 (Inherited: 0x00)
struct FResponse_Weapon_List_Data {
	int32_t base_index; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString item_id; // 0x08(0x10)
	int32_t table_index; // 0x18(0x04)
	int32_t Durability; // 0x1c(0x04)
	bool Identified; // 0x20(0x01)
	bool supplied; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
	struct TMap<struct FString, int32_t> options; // 0x28(0x50)
	struct FString created; // 0x78(0x10)
};

// ScriptStruct BravoHotelGame.Response_CraftWeapon_Data
// Size: 0xc0 (Inherited: 0x00)
struct FResponse_CraftWeapon_Data {
	int32_t table_index; // 0x00(0x04)
	int32_t before_gold; // 0x04(0x04)
	int32_t after_gold; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FResponse_CraftWeapon_Material> removed_materials; // 0x10(0x10)
	struct TArray<struct FResponse_CraftWeapon_Material> updated_materials; // 0x20(0x10)
	struct FString removed_weapon_item_id; // 0x30(0x10)
	struct FResponse_CraftWeapon_Weapon crafted_weapon; // 0x40(0x80)
};

// ScriptStruct BravoHotelGame.Response_CraftWeapon_Weapon
// Size: 0x80 (Inherited: 0x00)
struct FResponse_CraftWeapon_Weapon {
	int32_t table_index; // 0x00(0x04)
	int32_t table_base_index; // 0x04(0x04)
	int32_t Durability; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<struct FString, int32_t> options; // 0x10(0x50)
	struct FString item_id; // 0x60(0x10)
	struct FString created; // 0x70(0x10)
};

// ScriptStruct BravoHotelGame.Response_CraftWeapon_Material
// Size: 0x20 (Inherited: 0x00)
struct FResponse_CraftWeapon_Material {
	int32_t table_index; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString item_id; // 0x08(0x10)
	int32_t stack_count; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.Coh_MatchingSettings
// Size: 0x20 (Inherited: 0x00)
struct FCoh_MatchingSettings {
	bool bPerson; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Map; // 0x08(0x10)
	int32_t TypeNum; // 0x18(0x04)
	bool NeedMoreMember; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct BravoHotelGame.BravoHotelLobbyMapSetting
// Size: 0x10 (Inherited: 0x00)
struct FBravoHotelLobbyMapSetting {
	struct TArray<struct FString> IncludeMapList; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.EffectTransitionInfo
// Size: 0x18 (Inherited: 0x00)
struct FEffectTransitionInfo {
	struct AStaticMeshActor* Actor; // 0x00(0x08)
	struct AStaticMeshActor* SupplyActorRef; // 0x08(0x08)
	float ScalarParameterValue; // 0x10(0x04)
	bool Visible; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct BravoHotelGame.SupplySlotInfo
// Size: 0x10 (Inherited: 0x00)
struct FSupplySlotInfo {
	int32_t Idx; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct AActor* Slot; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.SupplyBoxItemInfo
// Size: 0x30 (Inherited: 0x00)
struct FSupplyBoxItemInfo {
	struct FName Name; // 0x00(0x08)
	struct AStaticMeshActor* Actor; // 0x08(0x08)
	struct UParticleSystemComponent* SupplyMeshParticle; // 0x10(0x08)
	int32_t Idx; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FVector2D> ToolTipOffset; // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.PerkInfoArray
// Size: 0x118 (Inherited: 0x108)
struct FPerkInfoArray : FFastArraySerializer {
	struct TArray<struct FRepPerkInfo> Items; // 0x108(0x10)
};

// ScriptStruct BravoHotelGame.RepPerkInfo
// Size: 0x10 (Inherited: 0x0c)
struct FRepPerkInfo : FFastArraySerializerItem {
	uint16_t PerkIndex; // 0x0c(0x02)
	char InGamelevel; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
};

// ScriptStruct BravoHotelGame.SteamFriendInfo
// Size: 0x50 (Inherited: 0x00)
struct FSteamFriendInfo {
	struct FUniqueNetIdRepl UniqueNetId; // 0x00(0x28)
	struct FString DisplayName; // 0x28(0x10)
	struct FString RealName; // 0x38(0x10)
	enum class ESteamPresenceState OnlineState; // 0x48(0x01)
	bool bIsOnline; // 0x49(0x01)
	bool bIsPlaying; // 0x4a(0x01)
	bool bIsPlayingThisGame; // 0x4b(0x01)
	bool bIsJoinable; // 0x4c(0x01)
	bool bHasVoiceSupport; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
};

// ScriptStruct BravoHotelGame.RepVehicleControlStates
// Size: 0x07 (Inherited: 0x00)
struct FRepVehicleControlStates {
	bool bHasLeftSteeringInput; // 0x00(0x01)
	bool bHasRightSteeringInput; // 0x01(0x01)
	bool bHasThrottleInput; // 0x02(0x01)
	bool bHasBrakeInput; // 0x03(0x01)
	bool bIsIdleBraking; // 0x04(0x01)
	bool bHasHandbrakeInput; // 0x05(0x01)
	int8_t CurrentGear; // 0x06(0x01)
};

// ScriptStruct BravoHotelGame.WeaponBaseData
// Size: 0x110 (Inherited: 0x08)
struct FWeaponBaseData : FTableRowBase {
	struct FName WeaponKey; // 0x08(0x08)
	int32_t ID; // 0x10(0x04)
	enum class EWeaponType WeaponType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FText DisplayName; // 0x18(0x18)
	struct FText DisplayDesc; // 0x30(0x18)
	struct FText DisplayWeaponType; // 0x48(0x18)
	struct FText DisplayRangeType; // 0x60(0x18)
	int32_t Display_Damage; // 0x78(0x04)
	int32_t Display_EffectiveRange; // 0x7c(0x04)
	int32_t Display_Accuracy; // 0x80(0x04)
	int32_t Display_RateofFire; // 0x84(0x04)
	struct FName Display_AmmoInfo; // 0x88(0x08)
	struct TSoftObjectPtr<UPaperSprite> SlotIconTexture_PaperSprite; // 0x90(0x28)
	struct TSoftObjectPtr<UPaperSprite> DragIconTexture_PaperSprite; // 0xb8(0x28)
	bool IsArmoryWeapon; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	struct FName ItemKey; // 0xe4(0x08)
	struct FName TopRecipe; // 0xec(0x08)
	int32_t Display_MagSize; // 0xf4(0x04)
	struct UArmoryDataAsset* DataAsset; // 0xf8(0x08)
	struct FName AmmoTableKey; // 0x100(0x08)
	struct UDataTable* PerBoneDamageTable; // 0x108(0x08)
};

// ScriptStruct BravoHotelGame.ZeroPoint
// Size: 0x08 (Inherited: 0x00)
struct FZeroPoint {
	int32_t Distance; // 0x00(0x04)
	float Angle; // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.RepProjectileInfo
// Size: 0xa8 (Inherited: 0x00)
struct FRepProjectileInfo {
	struct FVector_NetQuantize Location; // 0x00(0x0c)
	struct FRotator OriginRotation; // 0x0c(0x0c)
	struct TArray<struct FRotator> SpreadRotations; // 0x18(0x10)
	char NumBulletsAndSpreadBit; // 0x28(0x01)
	char bIsCharacterInfoData : 1; // 0x29(0x01)
	char pad_29_1 : 7; // 0x29(0x01)
	char CharacterInfoBit; // 0x2a(0x01)
	char Index; // 0x2b(0x01)
	float ShotFoV; // 0x2c(0x04)
	enum class EWeaponFireMode FireMode; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float ProjectileVelocity; // 0x34(0x04)
	float TerminalVelocity; // 0x38(0x04)
	bool bIsBoltAction; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FRepRecoilInfo RecoilInfo; // 0x40(0x3c)
	float LeanDegreeMax; // 0x7c(0x04)
	float ADSSpeed; // 0x80(0x04)
	float Deviation; // 0x84(0x04)
	uint16_t UniqueID; // 0x88(0x02)
	char bHasAuthority : 1; // 0x8a(0x01)
	char pad_8A_1 : 7; // 0x8a(0x01)
	char pad_8B[0x5]; // 0x8b(0x05)
	struct AActor* AuthorityController; // 0x90(0x08)
	float Time; // 0x98(0x04)
	float DamageRate; // 0x9c(0x04)
	char LevelVisibleRate; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// ScriptStruct BravoHotelGame.RepRecoilInfo
// Size: 0x3c (Inherited: 0x00)
struct FRepRecoilInfo {
	float VertClampMin; // 0x00(0x04)
	float VertClampMax; // 0x04(0x04)
	float VertSpeed; // 0x08(0x04)
	float VertRecoveryClamp; // 0x0c(0x04)
	float VertRecoveryModifier; // 0x10(0x04)
	float HorSpeed; // 0x14(0x04)
	float HorTendency; // 0x18(0x04)
	float HorLeftMax; // 0x1c(0x04)
	float HorRightMax; // 0x20(0x04)
	float Speed; // 0x24(0x04)
	float RecoverySpeed; // 0x28(0x04)
	float PatternScale; // 0x2c(0x04)
	float CrouchModifier; // 0x30(0x04)
	float ProneModifier; // 0x34(0x04)
	float DecreaseRecoilPatternScale; // 0x38(0x04)
};

// ScriptStruct BravoHotelGame.ExplosionInfo
// Size: 0x10 (Inherited: 0x00)
struct FExplosionInfo {
	bool bActive; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Damage; // 0x04(0x04)
	float EffectRange; // 0x08(0x04)
	float DamageFalloff; // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.IncendiaryInfo
// Size: 0x14 (Inherited: 0x00)
struct FIncendiaryInfo {
	bool bActive; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float DamageTime; // 0x04(0x04)
	float FireDamage; // 0x08(0x04)
	float ActiveRange; // 0x0c(0x04)
	float FireShrinkTime; // 0x10(0x04)
};

// ScriptStruct BravoHotelGame.RangedWeaponFireSound
// Size: 0x20 (Inherited: 0x00)
struct FRangedWeaponFireSound {
	struct UAkAudioEvent* SingleFireEvent; // 0x00(0x08)
	struct UAkAudioEvent* LoopStartEvent; // 0x08(0x08)
	struct UAkAudioEvent* LoopStopEvent; // 0x10(0x08)
	struct UAkAudioEvent* WarmupStartEvent; // 0x18(0x08)
};

// ScriptStruct BravoHotelGame.LoginInfo
// Size: 0xa8 (Inherited: 0x00)
struct FLoginInfo {
	struct TMap<struct FString, struct FString> AppIDs; // 0x00(0x50)
	struct TMap<struct FString, struct FString> Keys; // 0x50(0x50)
	enum class ELoginType Type; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// ScriptStruct BravoHotelGame.BoostTypeData
// Size: 0x20 (Inherited: 0x08)
struct FBoostTypeData : FTableRowBase {
	float BoostMax; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FBoostTypeElement> BoostDefine; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.BoostTypeElement
// Size: 0x20 (Inherited: 0x00)
struct FBoostTypeElement {
	float StepStart; // 0x00(0x04)
	float BoostDecreasePerSec; // 0x04(0x04)
	bool bShowHealUI; // 0x08(0x01)
	bool bShowSpeedUI; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TArray<struct FName> BuffKeys; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.PerkDeckInfo
// Size: 0x70 (Inherited: 0x00)
struct FPerkDeckInfo {
	struct FPerkDeckClassInfo ClassInfo; // 0x00(0x28)
	int32_t ChangeDeckCount; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FName> ExpertSupplyItems; // 0x30(0x10)
	struct TArray<struct FName> ExpertSupplyWeaponItems; // 0x40(0x10)
	struct TArray<struct FName> ExpertFreeSupplyItems; // 0x50(0x10)
	struct TArray<struct FName> ExpertFreeSupplyWeaponItems; // 0x60(0x10)
};

// ScriptStruct BravoHotelGame.CharacterAbilityData
// Size: 0x10 (Inherited: 0x08)
struct FCharacterAbilityData : FTableRowBase {
	enum class ECharacterAbilityType AbilityType; // 0x08(0x01)
	enum class EAbilityCase AbilityCase; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float AbilityValue; // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.ExpertWeaponListData
// Size: 0x58 (Inherited: 0x08)
struct FExpertWeaponListData : FTableRowBase {
	struct TMap<enum class EWeaponType, struct FExpertWeaponType> ExpertWeaponType; // 0x08(0x50)
};

// ScriptStruct BravoHotelGame.ExpertWeaponType
// Size: 0x10 (Inherited: 0x00)
struct FExpertWeaponType {
	struct TArray<struct FExpertWeaponElement> WeaponList; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.ExpertWeaponElement
// Size: 0xa0 (Inherited: 0x00)
struct FExpertWeaponElement {
	struct FName WeaponDataID; // 0x00(0x08)
	float Weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FName> SupplyWeaponItems; // 0x10(0x10)
	struct TArray<struct FName> SupplyItems; // 0x20(0x10)
	struct TMap<struct FString, struct FName> PerkNames; // 0x30(0x50)
	struct TArray<struct FName> FreeSupplyWeaponItems; // 0x80(0x10)
	struct TArray<struct FName> FreeSupplyItems; // 0x90(0x10)
};

// ScriptStruct BravoHotelGame.CameraEffectData
// Size: 0x80 (Inherited: 0x08)
struct FCameraEffectData : FTableRowBase {
	float Duration; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UParticleSystem* Particle_TPP; // 0x10(0x08)
	struct UParticleSystem* Particle_FPP; // 0x18(0x08)
	struct FVector ParticlePivot; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TMap<struct FName, struct FLinearColor> EffectColor; // 0x30(0x50)
};

// ScriptStruct BravoHotelGame.MaterialEffectData
// Size: 0x210 (Inherited: 0x08)
struct FMaterialEffectData : FTableRowBase {
	float ActiveTime; // 0x08(0x04)
	float SleepTime; // 0x0c(0x04)
	struct TMap<enum class EWearableItemType, struct FString> StartMutableDatas; // 0x10(0x50)
	struct TMap<enum class EWearableItemType, struct FString> ChangeMutableDatas; // 0x60(0x50)
	float TargetChangeRate; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct UCameraPostProcessPreset* CameraPostProcessClase; // 0xb8(0x08)
	struct TMap<struct FName, struct FLinearColor> ColorValues; // 0xc0(0x50)
	struct TMap<struct FName, float> FloatValues; // 0x110(0x50)
	struct TMap<struct FName, struct UCurveLinearColor*> ColorCurves; // 0x160(0x50)
	struct TMap<struct FName, struct UCurveFloat*> FloatCurves; // 0x1b0(0x50)
	struct FName BlendOutParameterName; // 0x200(0x08)
	float BlendOutSpeed; // 0x208(0x04)
	char pad_20C[0x4]; // 0x20c(0x04)
};

// ScriptStruct BravoHotelGame.ConditionedAbilityInfo
// Size: 0xa8 (Inherited: 0x00)
struct FConditionedAbilityInfo {
	char pad_0[0xa8]; // 0x00(0xa8)
};

// ScriptStruct BravoHotelGame.PerkData
// Size: 0xe0 (Inherited: 0x08)
struct FPerkData : FTableRowBase {
	struct FPerkBaseData BaseData; // 0x08(0xc8)
	struct TArray<struct FPerkInGameData> InGameDatas; // 0xd0(0x10)
};

// ScriptStruct BravoHotelGame.PerkInGameData
// Size: 0x1c8 (Inherited: 0x08)
struct FPerkInGameData : FTableRowBase {
	struct FText DisplayName; // 0x08(0x18)
	struct TMap<struct FString, struct FText> DisplayNameValues; // 0x20(0x50)
	struct FText Description; // 0x70(0x18)
	struct TMap<struct FString, struct FText> DescriptionValues; // 0x88(0x50)
	struct FText PopupName; // 0xd8(0x18)
	struct FText PopupNewDesc; // 0xf0(0x18)
	struct FText PopupLevelUpDesc; // 0x108(0x18)
	struct TMap<struct FString, struct FText> PopupLevelUpDescValues; // 0x120(0x50)
	struct TSoftObjectPtr<UAkAudioEvent> PopupNewSound; // 0x170(0x28)
	struct FName DisplayKey; // 0x198(0x08)
	int32_t DisplayPower; // 0x1a0(0x04)
	int32_t DisplaySpeed; // 0x1a4(0x04)
	int32_t DisplayDefense; // 0x1a8(0x04)
	int32_t Level; // 0x1ac(0x04)
	int32_t MaxLevel; // 0x1b0(0x04)
	int32_t NextLevelExp; // 0x1b4(0x04)
	struct TArray<struct FName> BuffNames; // 0x1b8(0x10)
};

// ScriptStruct BravoHotelGame.PerkBaseData
// Size: 0xc8 (Inherited: 0x08)
struct FPerkBaseData : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DisplayName; // 0x10(0x18)
	struct FText DisplayShortName; // 0x28(0x18)
	struct FText Description; // 0x40(0x18)
	struct FText Tooltip; // 0x58(0x18)
	struct TSoftObjectPtr<UObject> SlotIconTexture; // 0x70(0x28)
	int32_t MaxGrade; // 0x98(0x04)
	int32_t grade; // 0x9c(0x04)
	struct FName TextTableIndex; // 0xa0(0x08)
	struct TArray<struct FName> EquipableClass; // 0xa8(0x10)
	char EquipableSlot; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	struct FName SpecialWeaponName; // 0xbc(0x08)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// ScriptStruct BravoHotelGame.NewbieBuff
// Size: 0x38 (Inherited: 0x08)
struct FNewbieBuff : FTableRowBase {
	struct TArray<int32_t> CommonBuffNames; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)
	float SupplyProbabilityModifyer; // 0x20(0x04)
	struct FName ExpertWeaponTableID; // 0x18(0x08)
	struct TArray<struct FSpecificClassBuff> SuperPeopleClassBuffNames; // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.SpecificClassBuff
// Size: 0x18 (Inherited: 0x00)
struct FSpecificClassBuff {
	enum class ESuperPeopleClass SpecificClass; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<int32_t> BuffNames; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.BuffData
// Size: 0x188 (Inherited: 0x08)
struct FBuffData : FTableRowBase {
	struct UBravoHotelBuffBase* BuffClass; // 0x08(0x08)
	enum class EBuffTargetType BuffTarget; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TSoftObjectPtr<UObject> CohIcon; // 0x18(0x28)
	struct FText DisplayName; // 0x40(0x18)
	struct FText Description; // 0x58(0x18)
	struct FColor BorderColor; // 0x70(0x04)
	struct FColor BGColor; // 0x74(0x04)
	int32_t DisplayLevel; // 0x78(0x04)
	struct FName EffectSet; // 0x7c(0x08)
	float ReadyTime; // 0x84(0x04)
	float BuffTime; // 0x88(0x04)
	float CoolTime; // 0x8c(0x04)
	float Chance; // 0x90(0x04)
	int32_t LimitCount; // 0x94(0x04)
	struct TArray<struct FString> SubBuffIndex; // 0x98(0x10)
	struct TArray<struct FString> StartBuffIndex; // 0xa8(0x10)
	struct TArray<struct FString> EndBuffIndex; // 0xb8(0x10)
	struct FString SpecialCondition; // 0xc8(0x10)
	float PlusValue; // 0xd8(0x04)
	float PercentValue; // 0xdc(0x04)
	bool bReverseCondition; // 0xe0(0x01)
	bool bUseableInVehicle; // 0xe1(0x01)
	char pad_E2[0x6]; // 0xe2(0x06)
	struct TArray<struct FName> TargetItemIndex; // 0xe8(0x10)
	struct TArray<struct FName> EquipedItemIndex; // 0xf8(0x10)
	struct TArray<enum class EWeaponType> WeaponType; // 0x108(0x10)
	struct TArray<struct FName> BoneName; // 0x118(0x10)
	struct TArray<struct FString> State; // 0x128(0x10)
	struct TArray<struct FString> ETC; // 0x138(0x10)
	struct FString Param01; // 0x148(0x10)
	struct FString Param02; // 0x158(0x10)
	struct FString Param03; // 0x168(0x10)
	struct FString Param04; // 0x178(0x10)
};

// ScriptStruct BravoHotelGame.BuffEffectSetData
// Size: 0x158 (Inherited: 0x08)
struct FBuffEffectSetData : FTableRowBase {
	struct TMap<struct FName, struct UParticleSystem*> CharacterParticleStart; // 0x08(0x50)
	struct TMap<struct FName, struct UParticleSystem*> CharacterParticleIng; // 0x58(0x50)
	struct TMap<struct FName, struct UParticleSystem*> CharacterParticleEnd; // 0xa8(0x50)
	struct TArray<struct TSoftObjectPtr<UAkAudioEvent>> Sound2DStart; // 0xf8(0x10)
	struct TArray<struct TSoftObjectPtr<UAkAudioEvent>> Sound2DEnd; // 0x108(0x10)
	struct TArray<struct TSoftObjectPtr<UAkAudioEvent>> Sound3DStart; // 0x118(0x10)
	struct TArray<struct TSoftObjectPtr<UAkAudioEvent>> Sound3DEnd; // 0x128(0x10)
	struct TArray<struct TSoftObjectPtr<UAkAudioEvent>> SoundFollowStart; // 0x138(0x10)
	struct TArray<struct TSoftObjectPtr<UAkAudioEvent>> SoundFollowEnd; // 0x148(0x10)
};

// ScriptStruct BravoHotelGame.AICharacterSettingData
// Size: 0x58 (Inherited: 0x08)
struct FAICharacterSettingData : FTableRowBase {
	struct FString NickName; // 0x08(0x10)
	struct FAICharacterAppearanceInfo AppearanceInfo; // 0x18(0x14)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FName> AddItems; // 0x30(0x10)
	struct TArray<struct FName> Buffs; // 0x40(0x10)
	struct FName ItemSettingType; // 0x50(0x08)
};

// ScriptStruct BravoHotelGame.AICharacterAppearanceInfo
// Size: 0x14 (Inherited: 0x00)
struct FAICharacterAppearanceInfo {
	int32_t FaceID; // 0x00(0x04)
	int32_t FaceColorID; // 0x04(0x04)
	int32_t HairID; // 0x08(0x04)
	int32_t HairColorID; // 0x0c(0x04)
	int32_t gender; // 0x10(0x04)
};

// ScriptStruct BravoHotelGame.AIItemSettingData
// Size: 0x18 (Inherited: 0x08)
struct FAIItemSettingData : FTableRowBase {
	struct TArray<struct FAIPhaseItemSettingInfo> PhaseItemSettingInfo; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.AIPhaseItemSettingInfo
// Size: 0x28 (Inherited: 0x00)
struct FAIPhaseItemSettingInfo {
	int32_t Phase; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FName> EquipItems; // 0x08(0x10)
	struct TArray<struct FName> DropItems; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.DebugAircraftWorldInfo
// Size: 0x40 (Inherited: 0x00)
struct FDebugAircraftWorldInfo {
	struct FVector RightVectorStartWorldPos; // 0x00(0x0c)
	struct FVector RightVectorEndWorldPos; // 0x0c(0x0c)
	struct FVector ChangedStartWorldPos; // 0x18(0x0c)
	struct FVector ChangedEndWorldPos; // 0x24(0x0c)
	struct FVector IgnoreAreaWorldPos; // 0x30(0x0c)
	float IgnoreAreaRadius; // 0x3c(0x04)
};

// ScriptStruct BravoHotelGame.AirCraftInfo
// Size: 0x5c (Inherited: 0x00)
struct FAirCraftInfo {
	struct FVector2D CurrentPos; // 0x00(0x08)
	struct FVector2D StartPos; // 0x08(0x08)
	struct FVector2D EndPos; // 0x10(0x08)
	struct FVector2D DescentStartPos; // 0x18(0x08)
	struct FVector2D DescentEndPos; // 0x20(0x08)
	struct FDebugAirCraftInfo DebugData; // 0x28(0x2c)
	float Angle; // 0x54(0x04)
	int32_t FindDescentPointCnt; // 0x58(0x04)
};

// ScriptStruct BravoHotelGame.DebugAirCraftInfo
// Size: 0x2c (Inherited: 0x00)
struct FDebugAirCraftInfo {
	struct FVector2D RightVectorStart; // 0x00(0x08)
	struct FVector2D RightVectorEnd; // 0x08(0x08)
	struct FVector2D ChangedStartPos; // 0x10(0x08)
	struct FVector2D ChangedEndPos; // 0x18(0x08)
	struct FVector2D IgnoreAreaPos; // 0x20(0x08)
	float IgnoreAreaRadius; // 0x28(0x04)
};

// ScriptStruct BravoHotelGame.AirCraftBoardingInfo
// Size: 0x0c (Inherited: 0x00)
struct FAirCraftBoardingInfo {
	bool IsDescent; // 0x00(0x01)
	bool IsMyTeam; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t PlayerUniqueID; // 0x04(0x04)
	char AirCraftID; // 0x08(0x01)
	char SeatID; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct BravoHotelGame.KillAliveInfo
// Size: 0x14 (Inherited: 0x00)
struct FKillAliveInfo {
	bool Visibility; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t KillCount; // 0x04(0x04)
	int32_t AssistCount; // 0x08(0x04)
	int32_t AliveCount; // 0x0c(0x04)
	int32_t AliveTeamCount; // 0x10(0x04)
};

// ScriptStruct BravoHotelGame.ConditionedSound
// Size: 0x10 (Inherited: 0x00)
struct FConditionedSound {
	int32_t ConditionMask; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAkAudioEvent* Event; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.AttachedUsableItem_ScalarParamData
// Size: 0x10 (Inherited: 0x00)
struct FAttachedUsableItem_ScalarParamData {
	struct FName Key; // 0x00(0x08)
	float BeginValue; // 0x08(0x04)
	float EndValue; // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.AudioEventAssetData
// Size: 0x18 (Inherited: 0x00)
struct FAudioEventAssetData {
	char bLoadAsync : 1; // 0x00(0x01)
	char bPrepareAsset : 1; // 0x00(0x01)
	char bCleanUpPreparedAsset : 1; // 0x00(0x01)
	char bUnloadFromWwise : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x17]; // 0x01(0x17)
};

// ScriptStruct BravoHotelGame.AudioGeometryData
// Size: 0x60 (Inherited: 0x50)
struct FAudioGeometryData : FAkGeometryData {
	struct TArray<struct FVector> WorldVertices; // 0x50(0x10)
};

// ScriptStruct BravoHotelGame.CameraMoveData
// Size: 0x78 (Inherited: 0x00)
struct FCameraMoveData {
	char pad_0[0x18]; // 0x00(0x18)
	struct UCurveFloat* InCurve; // 0x18(0x08)
	struct UCurveFloat* InHeightCurve; // 0x20(0x08)
	char pad_28[0x10]; // 0x28(0x10)
	struct UCurveFloat* SecondCurve; // 0x38(0x08)
	struct UCurveFloat* SecondHeightCurve; // 0x40(0x08)
	char pad_48[0x10]; // 0x48(0x10)
	struct UCurveFloat* OutCurve; // 0x58(0x08)
	struct UCurveVector* CurveFPP; // 0x60(0x08)
	char pad_68[0x10]; // 0x68(0x10)
};

// ScriptStruct BravoHotelGame.ReplicationMoveParameter
// Size: 0x08 (Inherited: 0x00)
struct FReplicationMoveParameter {
	float SignificanceTickInterval; // 0x00(0x04)
	int32_t DynamicFrequency; // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.Coh_LocalizationTable
// Size: 0x10 (Inherited: 0x00)
struct FCoh_LocalizationTable {
	struct TArray<struct FCoh_LocalizationString> Tbl; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Coh_LocalizationString
// Size: 0x28 (Inherited: 0x00)
struct FCoh_LocalizationString {
	struct FString Key; // 0x00(0x10)
	struct FText SourceString; // 0x10(0x18)
};

// ScriptStruct BravoHotelGame.ResuscitationMarkerInfo
// Size: 0x20 (Inherited: 0x00)
struct FResuscitationMarkerInfo {
	struct FVector2D Pos; // 0x00(0x08)
	struct FVector2D PrePos; // 0x08(0x08)
	struct UWidget* Widget; // 0x10(0x08)
	struct ABravoHotelPlayerState* PlayerState; // 0x18(0x08)
};

// ScriptStruct BravoHotelGame.LocalPingMarkerInfo
// Size: 0x48 (Inherited: 0x00)
struct FLocalPingMarkerInfo {
	struct FVector2D Pos; // 0x00(0x08)
	struct FVector2D PrePos; // 0x08(0x08)
	struct UWidget* Widget; // 0x10(0x08)
	struct FBravoHotelLocalPingInfo PingInfo; // 0x18(0x30)
};

// ScriptStruct BravoHotelGame.ExpertWeaponItemMarkerInfo
// Size: 0x40 (Inherited: 0x00)
struct FExpertWeaponItemMarkerInfo {
	struct FVector2D Pos; // 0x00(0x08)
	struct FVector2D PrePos; // 0x08(0x08)
	struct UWidget* Widget; // 0x10(0x08)
	struct FExpertWeaponPingInfo PingInfo; // 0x18(0x28)
};

// ScriptStruct BravoHotelGame.MaterialItemMarkerInfo
// Size: 0x48 (Inherited: 0x00)
struct FMaterialItemMarkerInfo {
	struct FVector2D Pos; // 0x00(0x08)
	struct FVector2D PrePos; // 0x08(0x08)
	struct UWidget* Widget; // 0x10(0x08)
	struct FMaterialItemPingInfo PingInfo; // 0x18(0x30)
};

// ScriptStruct BravoHotelGame.MarkerInfo
// Size: 0x28 (Inherited: 0x00)
struct FMarkerInfo {
	bool PreVisibility; // 0x00(0x01)
	bool Visibility; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector2D Pos; // 0x04(0x08)
	struct FVector2D PrePos; // 0x0c(0x08)
	int32_t IconIdx; // 0x14(0x04)
	struct UWidget* Widget; // 0x18(0x08)
	struct ABravoHotelPlayerState* PlayerState; // 0x20(0x08)
};

// ScriptStruct BravoHotelGame.CompassUnit
// Size: 0x10 (Inherited: 0x00)
struct FCompassUnit {
	struct UWidget* Widget; // 0x00(0x08)
	float Angle; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.CrosshairDataMap
// Size: 0x50 (Inherited: 0x00)
struct FCrosshairDataMap {
	struct TMap<enum class ECrosshairPosition, struct FCrosshairData> Map; // 0x00(0x50)
};

// ScriptStruct BravoHotelGame.CrosshairData
// Size: 0x40 (Inherited: 0x00)
struct FCrosshairData {
	struct UTexture2D* Texture; // 0x00(0x08)
	struct FVector2D BasePosition; // 0x08(0x08)
	struct FVector2D BaseSize; // 0x10(0x08)
	struct FVector2D BeginUV; // 0x18(0x08)
	struct FVector2D EndUV; // 0x20(0x08)
	struct FLinearColor TintColor; // 0x28(0x10)
	float SpreadScaleFactor; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelWardrobeDataType
// Size: 0x50 (Inherited: 0x00)
struct FBravoHotelWardrobeDataType {
	struct FName ItemRowName; // 0x00(0x08)
	struct TSoftObjectPtr<UTexture2D> ItemIconTexture; // 0x08(0x28)
	struct FText ItemName; // 0x30(0x18)
	enum class EWearableItemType WearableType; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct BravoHotelGame.DataInfo
// Size: 0x218 (Inherited: 0x00)
struct FDataInfo {
	struct FDediDataGameInfo CurrentGameInfo; // 0x00(0x88)
	struct TMap<struct FString, struct FDediDataCharacterInfo> CurrentCharacterInfos; // 0x88(0x50)
	struct TMap<struct FString, struct FDediDataPlayerInfo> CurrentPlayerInfos; // 0xd8(0x50)
	struct TMap<int32_t, struct FDediDataItemSpawnInfo> ItemSpawnInfos; // 0x128(0x50)
	struct TMap<struct FString, struct FGamePlayerInfo> GamePlayerInfo; // 0x178(0x50)
	struct TArray<struct FGamePlayerMatchingRPInfo> GamePlayerMatchingRPInfos; // 0x1c8(0x10)
	struct TArray<struct FDataEventBlueZone> BlueZoneEvents; // 0x1d8(0x10)
	struct TArray<struct FDataEventRedZone> RedZoneEvents; // 0x1e8(0x10)
	struct TArray<struct FDataEventTransport> TransportEvents; // 0x1f8(0x10)
	struct TArray<struct FDataEventSupply> SupplyEvents; // 0x208(0x10)
};

// ScriptStruct BravoHotelGame.DataEventSupply
// Size: 0xc0 (Inherited: 0x58)
struct FDataEventSupply : FDataEventBase {
	char pad_58[0x68]; // 0x58(0x68)
};

// ScriptStruct BravoHotelGame.DataEventTransport
// Size: 0x80 (Inherited: 0x58)
struct FDataEventTransport : FDataEventBase {
	char pad_58[0x28]; // 0x58(0x28)
};

// ScriptStruct BravoHotelGame.DataEventRedZone
// Size: 0x88 (Inherited: 0x58)
struct FDataEventRedZone : FDataEventBase {
	char pad_58[0x30]; // 0x58(0x30)
};

// ScriptStruct BravoHotelGame.DataEventBlueZone
// Size: 0x80 (Inherited: 0x58)
struct FDataEventBlueZone : FDataEventBase {
	char pad_58[0x28]; // 0x58(0x28)
};

// ScriptStruct BravoHotelGame.GamePlayerMatchingRPInfo
// Size: 0x68 (Inherited: 0x00)
struct FGamePlayerMatchingRPInfo {
	struct FString UserID; // 0x00(0x10)
	struct FString NickName; // 0x10(0x10)
	int32_t Rating; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString Training; // 0x28(0x10)
	struct FString TeamID; // 0x38(0x10)
	int32_t TeamRating; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString PartyID; // 0x50(0x10)
	int32_t PartyRating; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct BravoHotelGame.GamePlayerInfo
// Size: 0x320 (Inherited: 0x00)
struct FGamePlayerInfo {
	struct FGamePlayRecord GamePlayerInfo; // 0x00(0x280)
	struct TMap<int32_t, struct FDamageInfoByWeaponInfo> TempWeapon; // 0x280(0x50)
	struct TMap<int32_t, struct FDamageInfoByDamageTypeInfo> TempDamageType; // 0x2d0(0x50)
};

// ScriptStruct BravoHotelGame.DamageInfoByDamageTypeInfo
// Size: 0x10 (Inherited: 0x00)
struct FDamageInfoByDamageTypeInfo {
	int32_t damage_type_index; // 0x00(0x04)
	bool is_class_skill; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32_t kill_count; // 0x08(0x04)
	int32_t Damage; // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.DamageInfoByWeaponInfo
// Size: 0x1c (Inherited: 0x00)
struct FDamageInfoByWeaponInfo {
	int32_t base_weapon_index; // 0x00(0x04)
	int32_t shot_count; // 0x04(0x04)
	int32_t hitshot_count; // 0x08(0x04)
	int32_t headshot_count; // 0x0c(0x04)
	int32_t kill_count; // 0x10(0x04)
	int32_t Damage; // 0x14(0x04)
	int32_t far_distance; // 0x18(0x04)
};

// ScriptStruct BravoHotelGame.GamePlayRecord
// Size: 0x280 (Inherited: 0x00)
struct FGamePlayRecord {
	struct FString UserID; // 0x00(0x10)
	struct FString NickName; // 0x10(0x10)
	bool bIsAI; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FPlayRecordInfo play_record_info; // 0x28(0x258)
};

// ScriptStruct BravoHotelGame.PlayRecordInfo
// Size: 0x258 (Inherited: 0x00)
struct FPlayRecordInfo {
	int32_t game_view_type; // 0x00(0x04)
	int32_t battle_mode; // 0x04(0x04)
	int32_t game_mode; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString map_info; // 0x10(0x10)
	int64_t start_time; // 0x20(0x08)
	int32_t reconnected_count; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FClassInfo class_info; // 0x30(0x28)
	struct FGoldInfo gold_info; // 0x58(0x2c)
	struct FMatchResultInfo match_result_info; // 0x84(0x34)
	struct FBattelRoyalInfo battle_royal_info; // 0xb8(0x24)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FDamageInfos damage_info; // 0xe0(0x20)
	struct FShotInfo shot_info; // 0x100(0x10)
	struct FWeaponDurabilityInfo weapon_durability_info; // 0x110(0x30)
	struct FVehicleInfo vehicle_info; // 0x140(0x10)
	struct FFlyingInfo flying_info; // 0x150(0x34)
	char pad_184[0x4]; // 0x184(0x04)
	struct FEquipment_info Equipment_info; // 0x188(0xc0)
	struct FString extra_data; // 0x248(0x10)
};

// ScriptStruct BravoHotelGame.Equipment_info
// Size: 0xc0 (Inherited: 0x00)
struct FEquipment_info {
	int32_t weapon_slot1_id; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString weapon_slot1_name; // 0x08(0x10)
	int32_t weapon_slot2_id; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString weapon_slot2_name; // 0x20(0x10)
	int32_t weapon_slot3_id; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString weapon_slot3_name; // 0x38(0x10)
	int32_t weapon_slot4_id; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString weapon_slot4_name; // 0x50(0x10)
	int32_t weapon_slot5_id; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString weapon_slot5_name; // 0x68(0x10)
	int32_t helmet_id; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FString helmet_name; // 0x80(0x10)
	int32_t armor_id; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct FString armor_name; // 0x98(0x10)
	int32_t bag_id; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FString bag_name; // 0xb0(0x10)
};

// ScriptStruct BravoHotelGame.FlyingInfo
// Size: 0x34 (Inherited: 0x00)
struct FFlyingInfo {
	int32_t diving_time; // 0x00(0x04)
	int32_t diving_location_loc_x; // 0x04(0x04)
	int32_t diving_location_loc_y; // 0x08(0x04)
	int32_t diving_location_loc_z; // 0x0c(0x04)
	int32_t parachute_time; // 0x10(0x04)
	int32_t parachute_loc_x; // 0x14(0x04)
	int32_t parachute_loc_y; // 0x18(0x04)
	int32_t parachute_loc_z; // 0x1c(0x04)
	int32_t landing_time; // 0x20(0x04)
	int32_t landing_loc_x; // 0x24(0x04)
	int32_t landing_loc_y; // 0x28(0x04)
	int32_t landing_loc_z; // 0x2c(0x04)
	int32_t flying_distance; // 0x30(0x04)
};

// ScriptStruct BravoHotelGame.VehicleInfo
// Size: 0x10 (Inherited: 0x00)
struct FVehicleInfo {
	int32_t explosion_count; // 0x00(0x04)
	int32_t destroy_tire_count; // 0x04(0x04)
	int32_t total_damage; // 0x08(0x04)
	int32_t road_kill_count; // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.WeaponDurabilityInfo
// Size: 0x30 (Inherited: 0x00)
struct FWeaponDurabilityInfo {
	struct FString item_uid; // 0x00(0x10)
	int32_t item_id; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString item_name; // 0x18(0x10)
	int32_t before_durability; // 0x28(0x04)
	int32_t after_durability; // 0x2c(0x04)
};

// ScriptStruct BravoHotelGame.ShotInfo
// Size: 0x10 (Inherited: 0x00)
struct FShotInfo {
	int32_t headshot_count; // 0x00(0x04)
	int32_t headshot_kill_count; // 0x04(0x04)
	int32_t hitshot_count; // 0x08(0x04)
	int32_t all_shot_count; // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.DamageInfos
// Size: 0x20 (Inherited: 0x00)
struct FDamageInfos {
	struct TArray<struct FDamageInfoByWeaponInfo> by_weapon; // 0x00(0x10)
	struct TArray<struct FDamageInfoByDamageTypeInfo> by_damage_type; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.BattelRoyalInfo
// Size: 0x24 (Inherited: 0x00)
struct FBattelRoyalInfo {
	int32_t live_time; // 0x00(0x04)
	int32_t total_move_distance; // 0x04(0x04)
	int32_t open_invisible_drop_box_count; // 0x08(0x04)
	int32_t open_air_drop_box_count; // 0x0c(0x04)
	int32_t destory_supply_helicopter_count; // 0x10(0x04)
	float heal_amount; // 0x14(0x04)
	int32_t boost_amount; // 0x18(0x04)
	int32_t air_walk_distance; // 0x1c(0x04)
	int32_t max_air_walk_distance; // 0x20(0x04)
};

// ScriptStruct BravoHotelGame.MatchResultInfo
// Size: 0x34 (Inherited: 0x00)
struct FMatchResultInfo {
	int32_t rp; // 0x00(0x04)
	int32_t Rank; // 0x04(0x04)
	int32_t team_count; // 0x08(0x04)
	bool is_top_rank; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t kill_count; // 0x10(0x04)
	int32_t ai_kill_count; // 0x14(0x04)
	int32_t death; // 0x18(0x04)
	int32_t sequence_kill; // 0x1c(0x04)
	int32_t team_alive_count; // 0x20(0x04)
	int32_t team_kill_count; // 0x24(0x04)
	int32_t assist_count; // 0x28(0x04)
	int32_t total_damage; // 0x2c(0x04)
	int32_t loser_score; // 0x30(0x04)
};

// ScriptStruct BravoHotelGame.GoldInfo
// Size: 0x2c (Inherited: 0x00)
struct FGoldInfo {
	int32_t account_gold_game_start; // 0x00(0x04)
	int32_t account_gold_game_end; // 0x04(0x04)
	struct FGainGold gain_gold_info; // 0x08(0x0c)
	struct FUseGold use_gold_info; // 0x14(0x18)
};

// ScriptStruct BravoHotelGame.UseGold
// Size: 0x18 (Inherited: 0x00)
struct FUseGold {
	int32_t paid_coin_gold; // 0x00(0x04)
	int32_t paid_account_gold; // 0x04(0x04)
	int32_t class_changed_gold; // 0x08(0x04)
	int32_t supplybox_opened_gold; // 0x0c(0x04)
	int32_t request_resuscitated_gold; // 0x10(0x04)
	int32_t resuscitated_gold; // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.GainGold
// Size: 0x0c (Inherited: 0x00)
struct FGainGold {
	int32_t farming_gold; // 0x00(0x04)
	int32_t random_bonus_gold; // 0x04(0x04)
	int32_t remain_coin_gold; // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.ClassInfo
// Size: 0x28 (Inherited: 0x00)
struct FClassInfo {
	uint32_t pc_class_type_index; // 0x00(0x04)
	uint32_t base_weapon_index; // 0x04(0x04)
	struct TArray<uint32_t> ignore_pc_class_type_indexs; // 0x08(0x10)
	bool is_get_ultimate_skill; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t Level; // 0x1c(0x04)
	int32_t level_up_by_book; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct BravoHotelGame.DediDataItemSpawnInfo
// Size: 0x20 (Inherited: 0x01)
struct FDediDataItemSpawnInfo : FDediDataInfoBase {
	char pad_1[0x1f]; // 0x01(0x1f)
};

// ScriptStruct BravoHotelGame.DediDataPlayerInfo
// Size: 0x28 (Inherited: 0x01)
struct FDediDataPlayerInfo : FDediDataInfoBase {
	char pad_1[0x27]; // 0x01(0x27)
};

// ScriptStruct BravoHotelGame.DediDataGameInfo
// Size: 0x88 (Inherited: 0x01)
struct FDediDataGameInfo : FDediDataInfoBase {
	char pad_1[0x87]; // 0x01(0x87)
};

// ScriptStruct BravoHotelGame.KickedUserInfoMap
// Size: 0x50 (Inherited: 0x00)
struct FKickedUserInfoMap {
	struct TMap<struct FString, struct FString> UserAndReason; // 0x00(0x50)
};

// ScriptStruct BravoHotelGame.DebugRecordInfo
// Size: 0x188 (Inherited: 0x00)
struct FDebugRecordInfo {
	struct FItemDataInfo ItemData; // 0x00(0xe8)
	struct TMap<int32_t, struct FDebugSupplyBoxInfo> PersonalSupplyBoxDebugList; // 0xe8(0x50)
	struct TMap<struct FName, struct FVehicleSpawnDebugDataList> VehicleDebugList; // 0x138(0x50)
};

// ScriptStruct BravoHotelGame.VehicleSpawnDebugDataList
// Size: 0x10 (Inherited: 0x00)
struct FVehicleSpawnDebugDataList {
	struct TArray<struct FVehicleSpawnDebugData> List; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.VehicleSpawnDebugData
// Size: 0x20 (Inherited: 0x00)
struct FVehicleSpawnDebugData {
	struct FVector SpawnedLoaction; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString ParentVehicleActorName; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.ItemDataInfo
// Size: 0xe8 (Inherited: 0x00)
struct FItemDataInfo {
	int32_t LastTotalSpawnedPickUpItemCount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FItemSpawnState> ItemSpawnStateList; // 0x08(0x10)
	struct TMap<struct FString, struct FItemCountInfo> ItemLogList; // 0x18(0x50)
	int32_t PickUpItemSpawnCount; // 0x68(0x04)
	int32_t TotalItemSpawnCount; // 0x6c(0x04)
	int32_t MaxPickUpItemSpawnCount; // 0x70(0x04)
	bool UnlimitItemSpawnCnt; // 0x74(0x01)
	bool ItemSpawnInBlueZone; // 0x75(0x01)
	bool UsingWorldItemSpawnTalbeInBlueZone; // 0x76(0x01)
	bool UsingMaxPickUpItemSpawnCount; // 0x77(0x01)
	bool UsingOuterBlueZone; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FItemSpawnDebug ItemSpawnDebugList; // 0x80(0x68)
};

// ScriptStruct BravoHotelGame.ItemSpawnDebug
// Size: 0x68 (Inherited: 0x00)
struct FItemSpawnDebug {
	struct FName WorldItemSpawnTableKey; // 0x00(0x08)
	struct FVector2D OuterCenter; // 0x08(0x08)
	float OuterRadius; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<struct FString, struct FItemDebugInfo> BuildingItemList; // 0x18(0x50)
};

// ScriptStruct BravoHotelGame.ItemDebugInfo
// Size: 0x60 (Inherited: 0x00)
struct FItemDebugInfo {
	struct FVector BuuildingLocation; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<struct FString, struct FBuildingDebug> StandardGroupData; // 0x10(0x50)
};

// ScriptStruct BravoHotelGame.BuildingDebug
// Size: 0x58 (Inherited: 0x00)
struct FBuildingDebug {
	struct FName StandardGroupKey; // 0x00(0x08)
	struct TMap<struct FName, struct FItemDivisionDebugList> ItemDivisionDebugList; // 0x08(0x50)
};

// ScriptStruct BravoHotelGame.ItemDivisionDebugList
// Size: 0x30 (Inherited: 0x00)
struct FItemDivisionDebugList {
	struct TArray<struct FItemDivisionDebug> List; // 0x00(0x10)
	struct TArray<struct FItemDivisionDebug> RateAddList; // 0x10(0x10)
	struct TArray<struct FItemDivisionDebug> RateRemoveList; // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.ItemDivisionDebug
// Size: 0x14 (Inherited: 0x00)
struct FItemDivisionDebug {
	struct FName ItemName; // 0x00(0x08)
	int32_t DivisionCnt; // 0x08(0x04)
	int32_t SpawnCnt; // 0x0c(0x04)
	bool CompleteDivision; // 0x10(0x01)
	bool CompleteSpawed; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
};

// ScriptStruct BravoHotelGame.ItemCountInfo
// Size: 0x1c (Inherited: 0x00)
struct FItemCountInfo {
	int32_t Division; // 0x00(0x04)
	int32_t RateDivision; // 0x04(0x04)
	int32_t RateDelete; // 0x08(0x04)
	int32_t Spawned; // 0x0c(0x04)
	int32_t Gained; // 0x10(0x04)
	int32_t TrySpawnPickUpCount; // 0x14(0x04)
	int32_t PickUpCount; // 0x18(0x04)
};

// ScriptStruct BravoHotelGame.ItemSpawnState
// Size: 0x14 (Inherited: 0x00)
struct FItemSpawnState {
	int32_t CurAliveUserCnt; // 0x00(0x04)
	int32_t MaxLimitSpawnCnt; // 0x04(0x04)
	int32_t EnableCurMaxSpawnCnt; // 0x08(0x04)
	int32_t CurSpawnedCnt; // 0x0c(0x04)
	int32_t TotalSpawnedCntFromBox; // 0x10(0x04)
};

// ScriptStruct BravoHotelGame.ExtraDebugInfo
// Size: 0x10 (Inherited: 0x00)
struct FExtraDebugInfo {
	struct UBravoHotelItemSpawnBoxComponent* ItemBox; // 0x00(0x08)
	struct FName RandomSpawnKey; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.ItemDebugDetailInfo
// Size: 0x18 (Inherited: 0x00)
struct FItemDebugDetailInfo {
	struct FString ItemName; // 0x00(0x10)
	int32_t Count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameTechReportData
// Size: 0xe8 (Inherited: 0x00)
struct FAnalysisClientGameTechReportData {
	struct FAnalysisClientGamePCData pc_data; // 0x00(0x88)
	struct FAnalysisClientGameTrackFPSData fps_data; // 0x88(0x50)
	struct FAnalysisClientGameLoadingData loading_data; // 0xd8(0x0c)
	char pad_E4[0x4]; // 0xe4(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameLoadingData
// Size: 0x0c (Inherited: 0x00)
struct FAnalysisClientGameLoadingData {
	bool game_start; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t loading_seconds; // 0x04(0x04)
	int32_t relative_loading_seconds; // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameTrackFPSData
// Size: 0x50 (Inherited: 0x00)
struct FAnalysisClientGameTrackFPSData {
	struct FString start_record_time; // 0x00(0x10)
	struct FString stop_record_time; // 0x10(0x10)
	float avg_fps; // 0x20(0x04)
	float min_fps; // 0x24(0x04)
	float max_fps; // 0x28(0x04)
	float standard_deviation_fps; // 0x2c(0x04)
	int32_t hitch_count; // 0x30(0x04)
	float under50_fps_percent; // 0x34(0x04)
	float inter50_60_fps_percent; // 0x38(0x04)
	float inter60_70_fps_percent; // 0x3c(0x04)
	float inter70_80_fps_percent; // 0x40(0x04)
	float inter80_90_fps_percent; // 0x44(0x04)
	float over90_fps_percent; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGamePCData
// Size: 0x88 (Inherited: 0x00)
struct FAnalysisClientGamePCData {
	struct FString os_name; // 0x00(0x10)
	struct FString cpu_name; // 0x10(0x10)
	struct FString gpu_name; // 0x20(0x10)
	struct FString mac_address; // 0x30(0x10)
	struct FString install_storage_type; // 0x40(0x10)
	float game_view_width; // 0x50(0x04)
	float game_view_height; // 0x54(0x04)
	uint64_t total_physical_memory; // 0x58(0x08)
	uint64_t used_physical_memory; // 0x60(0x08)
	uint64_t total_virtual_memory; // 0x68(0x08)
	uint64_t used_virtual_memory; // 0x70(0x08)
	int32_t texture_quality; // 0x78(0x04)
	int32_t view_distance_quality; // 0x7c(0x04)
	float avg_graphics_quality; // 0x80(0x04)
	bool is_blacklisted_graphics_driver; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameEarlyTechReportData
// Size: 0xe8 (Inherited: 0x00)
struct FAnalysisClientGameEarlyTechReportData {
	struct FAnalysisClientGamePCData pc_data; // 0x00(0x88)
	struct FAnalysisClientGameTrackFPSData fps_data; // 0x88(0x50)
	struct FAnalysisClientGameLoadingData loading_data; // 0xd8(0x0c)
	char pad_E4[0x4]; // 0xe4(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameNetwork
// Size: 0x28 (Inherited: 0x00)
struct FAnalysisClientGameNetwork {
	int32_t spectated; // 0x00(0x04)
	int32_t avg_ping; // 0x04(0x04)
	int32_t max_ping; // 0x08(0x04)
	int32_t min_ping; // 0x0c(0x04)
	int32_t received_pkt_bytesec; // 0x10(0x04)
	int32_t received_num_pkt; // 0x14(0x04)
	int32_t received_loss_ratio; // 0x18(0x04)
	int32_t sended_pkt_bytesec; // 0x1c(0x04)
	int32_t sended_num_pkt; // 0x20(0x04)
	int32_t sended_loss_ratio; // 0x24(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameEscapeData
// Size: 0x38 (Inherited: 0x00)
struct FAnalysisClientGameEscapeData {
	struct FString matching_success_time; // 0x00(0x10)
	struct FString escape_time; // 0x10(0x10)
	int32_t escape_state; // 0x20(0x04)
	int32_t survive_state; // 0x24(0x04)
	int32_t spectated; // 0x28(0x04)
	int32_t spectator_time; // 0x2c(0x04)
	int32_t reported; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameExitData
// Size: 0x04 (Inherited: 0x00)
struct FAnalysisClientGameExitData {
	int32_t exit_type; // 0x00(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameStartData
// Size: 0x20 (Inherited: 0x00)
struct FAnalysisClientGameStartData {
	struct FString matching_start_time; // 0x00(0x10)
	struct FString game_start_time; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.ReplayReportInfo
// Size: 0x38 (Inherited: 0x00)
struct FReplayReportInfo {
	struct FString reporter_nickname; // 0x00(0x10)
	struct FString victim_nickname; // 0x10(0x10)
	struct FString suspect_nickname; // 0x20(0x10)
	int32_t report_type; // 0x30(0x04)
	int32_t replay_time; // 0x34(0x04)
};

// ScriptStruct BravoHotelGame.WeaponItemLogData
// Size: 0x20 (Inherited: 0x00)
struct FWeaponItemLogData {
	struct FString MaxItemID; // 0x00(0x10)
	int32_t MaxItemDamageValue; // 0x10(0x04)
	int32_t MaxItemDamageCount; // 0x14(0x04)
	int32_t MaxItemHeadShotCount; // 0x18(0x04)
	float MaxItemDistance; // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.ReportVictimLogData
// Size: 0x18 (Inherited: 0x00)
struct FReportVictimLogData {
	struct UBravoHotelDamageType* DamageTypeClass; // 0x00(0x08)
	struct FString HitBone; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameReporterDataHead
// Size: 0x98 (Inherited: 0x00)
struct FAnalysisClientGameReporterDataHead {
	int32_t DateTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString match_id; // 0x08(0x10)
	struct FString game_server_id; // 0x18(0x10)
	struct FString MapName; // 0x28(0x10)
	int32_t GameViewType; // 0x38(0x04)
	int32_t GameMode; // 0x3c(0x04)
	int32_t BattleMode; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString cqr_type; // 0x48(0x10)
	int32_t bluezone_id; // 0x58(0x04)
	int32_t phase_info; // 0x5c(0x04)
	int32_t current_survival_player; // 0x60(0x04)
	int32_t current_survival_team; // 0x64(0x04)
	int32_t team_id; // 0x68(0x04)
	int32_t team_cnt; // 0x6c(0x04)
	int32_t current_rank; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FString UserID; // 0x78(0x10)
	struct FString NickName; // 0x88(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisClientHeartBeatData
// Size: 0xe8 (Inherited: 0x00)
struct FAnalysisClientHeartBeatData {
	struct TArray<int32_t> skill_perk_id; // 0x00(0x10)
	struct FAnalysisClientGameWeaponData primary_weapon_info; // 0x10(0x48)
	struct FAnalysisClientGameWeaponData secondary_weapon_info; // 0x58(0x48)
	int32_t pistol_id; // 0xa0(0x04)
	int32_t helmet_id; // 0xa4(0x04)
	int32_t armor_id; // 0xa8(0x04)
	int32_t bag_id; // 0xac(0x04)
	struct FString State; // 0xb0(0x10)
	struct FString pose; // 0xc0(0x10)
	struct FString Direction; // 0xd0(0x10)
	int32_t Speed; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameWeaponData
// Size: 0x48 (Inherited: 0x00)
struct FAnalysisClientGameWeaponData {
	int32_t item_id; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString item_name; // 0x08(0x10)
	bool is_expert_weapon; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t grade; // 0x1c(0x04)
	int32_t enchant; // 0x20(0x04)
	int32_t perk_id_2; // 0x24(0x04)
	int32_t perk_id_3; // 0x28(0x04)
	int32_t perk_id_4; // 0x2c(0x04)
	int32_t perk_id_5; // 0x30(0x04)
	struct FAnalysisPartsData parts_id; // 0x34(0x14)
};

// ScriptStruct BravoHotelGame.AnalysisClientActiveSkillData
// Size: 0x48 (Inherited: 0x00)
struct FAnalysisClientActiveSkillData {
	struct TArray<int32_t> skill_perk_id; // 0x00(0x10)
	int32_t perk_id; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString perk_name; // 0x18(0x10)
	int32_t start_loc_x; // 0x28(0x04)
	int32_t start_loc_y; // 0x2c(0x04)
	int32_t start_loc_z; // 0x30(0x04)
	int32_t end_loc_x; // 0x34(0x04)
	int32_t end_loc_y; // 0x38(0x04)
	int32_t end_loc_z; // 0x3c(0x04)
	int32_t apply_user_cnt; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientReactSkillData
// Size: 0x28 (Inherited: 0x00)
struct FAnalysisClientReactSkillData {
	struct TArray<int32_t> skill_perk_id; // 0x00(0x10)
	int32_t perk_id; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString perk_name; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisClientSupplyBoxChangeData
// Size: 0x58 (Inherited: 0x00)
struct FAnalysisClientSupplyBoxChangeData {
	int32_t current_gold; // 0x00(0x04)
	int32_t setting_gold; // 0x04(0x04)
	struct FAnalysisClientSupplyItemInfoData supply_item_info; // 0x08(0x50)
};

// ScriptStruct BravoHotelGame.AnalysisClientSupplyItemInfoData
// Size: 0x50 (Inherited: 0x00)
struct FAnalysisClientSupplyItemInfoData {
	struct FString slot1_item_id; // 0x00(0x10)
	struct FString slot2_item_id; // 0x10(0x10)
	struct FString slot3_item_id; // 0x20(0x10)
	struct FString slot4_item_id; // 0x30(0x10)
	struct FString slot5_item_id; // 0x40(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisClientSupplyBoxOpenData
// Size: 0x0c (Inherited: 0x00)
struct FAnalysisClientSupplyBoxOpenData {
	int32_t open_time; // 0x00(0x04)
	int32_t used_gold; // 0x04(0x04)
	int32_t remain_gold; // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientClassChangeData
// Size: 0x1c (Inherited: 0x00)
struct FAnalysisClientClassChangeData {
	int32_t use_gold; // 0x00(0x04)
	int32_t after_gold; // 0x04(0x04)
	int32_t before_class; // 0x08(0x04)
	int32_t change_class; // 0x0c(0x04)
	int32_t class_select_mode; // 0x10(0x04)
	int32_t class_select_type; // 0x14(0x04)
	bool is_recommended_select; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameVehicleSeatData
// Size: 0xc0 (Inherited: 0x00)
struct FAnalysisClientGameVehicleSeatData {
	int32_t targetseat_index; // 0x00(0x04)
	int32_t preseat_index; // 0x04(0x04)
	int32_t driving_time; // 0x08(0x04)
	int32_t driving_distance; // 0x0c(0x04)
	struct FAnalysisClientGameVehicleData vehicle_info; // 0x10(0xb0)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameVehicleData
// Size: 0xb0 (Inherited: 0x00)
struct FAnalysisClientGameVehicleData {
	int32_t loc_x; // 0x00(0x04)
	int32_t loc_y; // 0x04(0x04)
	int32_t loc_z; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString vehicle_name; // 0x10(0x10)
	struct FString vehicle_uid; // 0x20(0x10)
	int32_t hp; // 0x30(0x04)
	int32_t Fuel; // 0x34(0x04)
	int32_t tire1_hp; // 0x38(0x04)
	int32_t tire2_hp; // 0x3c(0x04)
	int32_t tire3_hp; // 0x40(0x04)
	int32_t tire4_hp; // 0x44(0x04)
	int32_t Speed; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString seat1_uid; // 0x50(0x10)
	struct FString seat2_uid; // 0x60(0x10)
	struct FString seat3_uid; // 0x70(0x10)
	struct FString seat4_uid; // 0x80(0x10)
	struct FString seat5_uid; // 0x90(0x10)
	struct FString seat6_uid; // 0xa0(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameVehicleBattleData
// Size: 0x1c0 (Inherited: 0x00)
struct FAnalysisClientGameVehicleBattleData {
	struct FString damage_type; // 0x00(0x10)
	int32_t damage_type_index; // 0x10(0x04)
	int32_t damage_weapon_id; // 0x14(0x04)
	struct FString damage_weapon_name; // 0x18(0x10)
	struct FString hit_bone; // 0x28(0x10)
	int32_t Damage; // 0x38(0x04)
	int32_t Distance; // 0x3c(0x04)
	struct FAnalysisClientGameCharacterData attacker_info; // 0x40(0xd0)
	struct FAnalysisClientGameVehicleData vehicle_info; // 0x110(0xb0)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameCharacterData
// Size: 0xd0 (Inherited: 0x00)
struct FAnalysisClientGameCharacterData {
	bool bIsAI; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t loc_x; // 0x04(0x04)
	int32_t loc_y; // 0x08(0x04)
	int32_t loc_z; // 0x0c(0x04)
	struct FString UserID; // 0x10(0x10)
	struct FString NickName; // 0x20(0x10)
	int32_t ClassIndex; // 0x30(0x04)
	int32_t Level; // 0x34(0x04)
	int32_t max_hp; // 0x38(0x04)
	int32_t current_hp; // 0x3c(0x04)
	struct TArray<int32_t> skill_perk_id; // 0x40(0x10)
	struct FAnalysisClientGameWeaponData current_weapon; // 0x50(0x48)
	struct FString equip_helmet; // 0x98(0x10)
	int32_t helmet_durability; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FString equip_armour; // 0xb0(0x10)
	int32_t armour_durability; // 0xc0(0x04)
	int32_t fire_type; // 0xc4(0x04)
	int32_t zoom_type; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameGoldenTimeRevivalData
// Size: 0x88 (Inherited: 0x00)
struct FAnalysisClientGameGoldenTimeRevivalData {
	int32_t revived_time; // 0x00(0x04)
	int32_t gold_request; // 0x04(0x04)
	struct FAnalysisClientGameGoldenTimeRevivalCharacterData savior_info; // 0x08(0x40)
	struct FAnalysisClientGameGoldenTimeRevivalCharacterData revived_info; // 0x48(0x40)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameGoldenTimeRevivalCharacterData
// Size: 0x40 (Inherited: 0x00)
struct FAnalysisClientGameGoldenTimeRevivalCharacterData {
	int32_t loc_x; // 0x00(0x04)
	int32_t loc_y; // 0x04(0x04)
	int32_t loc_z; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString UserID; // 0x10(0x10)
	struct FString NickName; // 0x20(0x10)
	int32_t ClassIndex; // 0x30(0x04)
	int32_t Level; // 0x34(0x04)
	int32_t use_gold; // 0x38(0x04)
	int32_t remain_gold; // 0x3c(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameRevivalData
// Size: 0x78 (Inherited: 0x00)
struct FAnalysisClientGameRevivalData {
	int32_t revived_time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FAnalysisClientGameRevivalCharacterData savior_info; // 0x08(0x38)
	struct FAnalysisClientGameRevivalCharacterData revived_info; // 0x40(0x38)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameRevivalCharacterData
// Size: 0x38 (Inherited: 0x00)
struct FAnalysisClientGameRevivalCharacterData {
	int32_t loc_x; // 0x00(0x04)
	int32_t loc_y; // 0x04(0x04)
	int32_t loc_z; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString UserID; // 0x10(0x10)
	struct FString NickName; // 0x20(0x10)
	int32_t ClassIndex; // 0x30(0x04)
	int32_t Level; // 0x34(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameDiedDeathData
// Size: 0x350 (Inherited: 0x00)
struct FAnalysisClientGameDiedDeathData {
	struct FString damage_type; // 0x00(0x10)
	int32_t damage_type_index; // 0x10(0x04)
	int32_t damage_weapon_id; // 0x14(0x04)
	struct FString damage_weapon_name; // 0x18(0x10)
	struct FString hit_bone; // 0x28(0x10)
	int32_t Damage; // 0x38(0x04)
	int32_t Distance; // 0x3c(0x04)
	int32_t team_kill; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FAnalysisClientGameCharacterData knockdown_attacker_info; // 0x48(0xd0)
	struct FAnalysisClientGameCharacterData killer_info; // 0x118(0xd0)
	struct FAnalysisClientGameCharacterData attacker_info; // 0x1e8(0xd0)
	struct FAnalysisClientGameDiedVictimCharacterMiniData victim_info; // 0x2b8(0x98)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameDiedVictimCharacterMiniData
// Size: 0x98 (Inherited: 0x00)
struct FAnalysisClientGameDiedVictimCharacterMiniData {
	bool bIsAI; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t knockdowned; // 0x04(0x04)
	struct TArray<int32_t> skill_perk_id; // 0x08(0x10)
	struct FAnalysisClientGameWeaponData current_weapon; // 0x18(0x48)
	struct FString equip_helmet; // 0x60(0x10)
	int32_t helmet_durability; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FString equip_armour; // 0x78(0x10)
	int32_t armour_durability; // 0x88(0x04)
	int32_t fire_type; // 0x8c(0x04)
	int32_t zoom_type; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameDiedKillData
// Size: 0x358 (Inherited: 0x00)
struct FAnalysisClientGameDiedKillData {
	struct FString damage_type; // 0x00(0x10)
	int32_t damage_type_index; // 0x10(0x04)
	int32_t damage_weapon_id; // 0x14(0x04)
	struct FString damage_weapon_name; // 0x18(0x10)
	struct FString hit_bone; // 0x28(0x10)
	int32_t Damage; // 0x38(0x04)
	int32_t Distance; // 0x3c(0x04)
	int32_t team_kill; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FAnalysisClientGameCharacterData knockdown_attacker_info; // 0x48(0xd0)
	struct FAnalysisClientGameCharacterData killer_info; // 0x118(0xd0)
	struct FAnalysisClientGameCharacterMiniData attacker_info; // 0x1e8(0x98)
	struct FAnalysisClientGameDiedVictimCharacterData victim_info; // 0x280(0xd8)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameDiedVictimCharacterData
// Size: 0xd8 (Inherited: 0x00)
struct FAnalysisClientGameDiedVictimCharacterData {
	bool bIsAI; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t loc_x; // 0x04(0x04)
	int32_t loc_y; // 0x08(0x04)
	int32_t loc_z; // 0x0c(0x04)
	struct FString UserID; // 0x10(0x10)
	struct FString NickName; // 0x20(0x10)
	int32_t ClassIndex; // 0x30(0x04)
	int32_t Level; // 0x34(0x04)
	int32_t max_hp; // 0x38(0x04)
	int32_t knockdowned; // 0x3c(0x04)
	int32_t current_hp; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<int32_t> skill_perk_id; // 0x48(0x10)
	struct FAnalysisClientGameWeaponData current_weapon; // 0x58(0x48)
	struct FString equip_helmet; // 0xa0(0x10)
	int32_t helmet_durability; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FString equip_armour; // 0xb8(0x10)
	int32_t armour_durability; // 0xc8(0x04)
	int32_t fire_type; // 0xcc(0x04)
	int32_t zoom_type; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameCharacterMiniData
// Size: 0x98 (Inherited: 0x00)
struct FAnalysisClientGameCharacterMiniData {
	bool bIsAI; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<int32_t> skill_perk_id; // 0x08(0x10)
	struct FAnalysisClientGameWeaponData current_weapon; // 0x18(0x48)
	struct FString equip_helmet; // 0x60(0x10)
	int32_t helmet_durability; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FString equip_armour; // 0x78(0x10)
	int32_t armour_durability; // 0x88(0x04)
	int32_t fire_type; // 0x8c(0x04)
	int32_t zoom_type; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameKnockDownedVictimData
// Size: 0x1b0 (Inherited: 0x00)
struct FAnalysisClientGameKnockDownedVictimData {
	struct FString damage_type; // 0x00(0x10)
	int32_t damage_type_index; // 0x10(0x04)
	int32_t damage_weapon_id; // 0x14(0x04)
	struct FString damage_weapon_name; // 0x18(0x10)
	struct FString hit_bone; // 0x28(0x10)
	int32_t Damage; // 0x38(0x04)
	int32_t Distance; // 0x3c(0x04)
	int32_t team_kill; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FAnalysisClientGameCharacterData attacker_info; // 0x48(0xd0)
	struct FAnalysisClientGameCharacterMiniData victim_info; // 0x118(0x98)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameKnockDownedAttackData
// Size: 0x1b0 (Inherited: 0x00)
struct FAnalysisClientGameKnockDownedAttackData {
	struct FString damage_type; // 0x00(0x10)
	int32_t damage_type_index; // 0x10(0x04)
	int32_t damage_weapon_id; // 0x14(0x04)
	struct FString damage_weapon_name; // 0x18(0x10)
	struct FString hit_bone; // 0x28(0x10)
	int32_t Damage; // 0x38(0x04)
	int32_t Distance; // 0x3c(0x04)
	int32_t team_kill; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FAnalysisClientGameCharacterMiniData attacker_info; // 0x48(0x98)
	struct FAnalysisClientGameCharacterData victim_info; // 0xe0(0xd0)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameBattleHitRateData
// Size: 0x10 (Inherited: 0x00)
struct FAnalysisClientGameBattleHitRateData {
	struct TArray<struct FAnalysisClientGameHitRateWeaponInfo> weapon_info; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameHitRateWeaponInfo
// Size: 0x30 (Inherited: 0x00)
struct FAnalysisClientGameHitRateWeaponInfo {
	int32_t last_saved_time; // 0x00(0x04)
	int32_t item_id; // 0x04(0x04)
	struct FString item_name; // 0x08(0x10)
	int32_t shot_count; // 0x18(0x04)
	int32_t hitshot_count; // 0x1c(0x04)
	int32_t headshot_count; // 0x20(0x04)
	int32_t kill_count; // 0x24(0x04)
	int32_t headshot_kill_count; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameBattleVictimData
// Size: 0x1a8 (Inherited: 0x00)
struct FAnalysisClientGameBattleVictimData {
	struct FString damage_type; // 0x00(0x10)
	int32_t damage_type_index; // 0x10(0x04)
	int32_t damage_weapon_id; // 0x14(0x04)
	struct FString damage_weapon_name; // 0x18(0x10)
	struct FString hit_bone; // 0x28(0x10)
	int32_t Damage; // 0x38(0x04)
	int32_t Distance; // 0x3c(0x04)
	struct FAnalysisClientGameCharacterData attacker_info; // 0x40(0xd0)
	struct FAnalysisClientGameCharacterMiniData victim_info; // 0x110(0x98)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameBattleAttackerData
// Size: 0x1a8 (Inherited: 0x00)
struct FAnalysisClientGameBattleAttackerData {
	struct FString damage_type; // 0x00(0x10)
	int32_t damage_type_index; // 0x10(0x04)
	int32_t damage_weapon_id; // 0x14(0x04)
	struct FString damage_weapon_name; // 0x18(0x10)
	struct FString hit_bone; // 0x28(0x10)
	int32_t Damage; // 0x38(0x04)
	int32_t Distance; // 0x3c(0x04)
	struct FAnalysisClientGameCharacterMiniData attacker_info; // 0x40(0x98)
	struct FAnalysisClientGameCharacterData victim_info; // 0xd8(0xd0)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameThrowableUseData
// Size: 0x40 (Inherited: 0x00)
struct FAnalysisClientGameThrowableUseData {
	int32_t item_id; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString item_name; // 0x08(0x10)
	int32_t item_count; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<int32_t> skill_perk_id; // 0x20(0x10)
	int32_t landing_distance; // 0x30(0x04)
	int32_t landing_loc_x; // 0x34(0x04)
	int32_t landing_loc_y; // 0x38(0x04)
	int32_t landing_loc_z; // 0x3c(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameIteractionData
// Size: 0x30 (Inherited: 0x00)
struct FAnalysisClientGameIteractionData {
	struct FString Action; // 0x00(0x10)
	struct FString Target; // 0x10(0x10)
	int32_t loc_x; // 0x20(0x04)
	int32_t loc_y; // 0x24(0x04)
	int32_t loc_z; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameItemWeaponData
// Size: 0x78 (Inherited: 0x00)
struct FAnalysisClientGameItemWeaponData {
	int32_t loc_x; // 0x00(0x04)
	int32_t loc_y; // 0x04(0x04)
	int32_t loc_z; // 0x08(0x04)
	int32_t pickup_root; // 0x0c(0x04)
	int32_t slot_index; // 0x10(0x04)
	int32_t item_id; // 0x14(0x04)
	struct FString item_name; // 0x18(0x10)
	int32_t stack; // 0x28(0x04)
	int32_t Durability; // 0x2c(0x04)
	struct FAnalysisClientGameWeaponData Weapon; // 0x30(0x48)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameItemData
// Size: 0x40 (Inherited: 0x00)
struct FAnalysisClientGameItemData {
	int32_t loc_x; // 0x00(0x04)
	int32_t loc_y; // 0x04(0x04)
	int32_t loc_z; // 0x08(0x04)
	int32_t pickup_root; // 0x0c(0x04)
	int32_t slot_index; // 0x10(0x04)
	int32_t item_id; // 0x14(0x04)
	struct FString item_name; // 0x18(0x10)
	int32_t stack; // 0x28(0x04)
	int32_t Durability; // 0x2c(0x04)
	int32_t item_type; // 0x30(0x04)
	int32_t WearableItemType; // 0x34(0x04)
	int32_t WeaponAttachmentType; // 0x38(0x04)
	int32_t current_weight; // 0x3c(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameItemCombineData
// Size: 0x28 (Inherited: 0x00)
struct FAnalysisClientGameItemCombineData {
	struct TArray<struct FCombineSourceItem> source_item_list; // 0x00(0x10)
	int32_t result_item_id; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString result_item_name; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.CombineSourceItem
// Size: 0x18 (Inherited: 0x00)
struct FCombineSourceItem {
	int32_t source_item_id; // 0x00(0x04)
	int32_t source_item_count; // 0x04(0x04)
	struct FString source_item_name; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameItemSearchData
// Size: 0x18 (Inherited: 0x00)
struct FAnalysisClientGameItemSearchData {
	int32_t search_type; // 0x00(0x04)
	int32_t select_item_id; // 0x04(0x04)
	struct TArray<struct FItemSearchLog> find_recipe_list; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.ItemSearchLog
// Size: 0x10 (Inherited: 0x00)
struct FItemSearchLog {
	int32_t item_id; // 0x00(0x04)
	struct FIntLocation Location; // 0x04(0x0c)
};

// ScriptStruct BravoHotelGame.IntLocation
// Size: 0x0c (Inherited: 0x00)
struct FIntLocation {
	int32_t loc_x; // 0x00(0x04)
	int32_t loc_y; // 0x04(0x04)
	int32_t loc_z; // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameEnegyBarItemUseData
// Size: 0x30 (Inherited: 0x00)
struct FAnalysisClientGameEnegyBarItemUseData {
	int32_t item_id; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString item_name; // 0x08(0x10)
	int32_t current_buff_id; // 0x18(0x04)
	int32_t current_buff_time; // 0x1c(0x04)
	int32_t to_be_buff_id; // 0x20(0x04)
	int32_t to_be_buff_time; // 0x24(0x04)
	int32_t stack_cnt; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameRecoveryItemUseData
// Size: 0x20 (Inherited: 0x00)
struct FAnalysisClientGameRecoveryItemUseData {
	int32_t item_id; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString item_name; // 0x08(0x10)
	int32_t item_recovery_hp; // 0x18(0x04)
	int32_t stack_cnt; // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameExchangePartsData
// Size: 0x48 (Inherited: 0x00)
struct FAnalysisClientGameExchangePartsData {
	int32_t weapon_slot_index; // 0x00(0x04)
	int32_t weapon_id; // 0x04(0x04)
	struct FString weapon_name; // 0x08(0x10)
	struct FAnalysisClientGameItemPartsData equip_parts_info; // 0x18(0x18)
	struct FAnalysisClientGameItemPartsData unequip_parts_info; // 0x30(0x18)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameItemPartsData
// Size: 0x18 (Inherited: 0x00)
struct FAnalysisClientGameItemPartsData {
	int32_t parts_slot_index; // 0x00(0x04)
	int32_t parts_id; // 0x04(0x04)
	struct FString parts_name; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameData
// Size: 0x48 (Inherited: 0x00)
struct FAnalysisClientGameData {
	enum class EClientGameContentsType contentType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Base; // 0x08(0x10)
	struct FString Msg; // 0x18(0x10)
	struct FString nowDate; // 0x28(0x10)
	struct FString ApiPhase; // 0x38(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameDataHead
// Size: 0xf0 (Inherited: 0x00)
struct FAnalysisClientGameDataHead {
	int32_t DateTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString match_id; // 0x08(0x10)
	struct FString game_server_id; // 0x18(0x10)
	struct FString MapName; // 0x28(0x10)
	int32_t GameViewType; // 0x38(0x04)
	int32_t GameMode; // 0x3c(0x04)
	int32_t BattleMode; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString cqr_type; // 0x48(0x10)
	int32_t bluezone_id; // 0x58(0x04)
	int32_t phase_info; // 0x5c(0x04)
	int32_t current_survival_player; // 0x60(0x04)
	int32_t current_survival_team; // 0x64(0x04)
	int32_t team_id; // 0x68(0x04)
	int32_t team_cnt; // 0x6c(0x04)
	int32_t current_rank; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FString UserID; // 0x78(0x10)
	struct FString NickName; // 0x88(0x10)
	int32_t ClassIndex; // 0x98(0x04)
	int32_t expert_weapon_id; // 0x9c(0x04)
	struct FString expert_weapon_name; // 0xa0(0x10)
	int32_t Level; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FString Training; // 0xb8(0x10)
	int32_t loser_score; // 0xc8(0x04)
	int32_t current_hp; // 0xcc(0x04)
	int32_t max_hp; // 0xd0(0x04)
	int32_t overheal; // 0xd4(0x04)
	int32_t loc_x; // 0xd8(0x04)
	int32_t loc_y; // 0xdc(0x04)
	int32_t loc_z; // 0xe0(0x04)
	int32_t isinbluezone; // 0xe4(0x04)
	int32_t isinredzone; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisDediItemSpawnData
// Size: 0x18 (Inherited: 0x00)
struct FAnalysisDediItemSpawnData {
	int32_t total_box_count; // 0x00(0x04)
	int32_t spawn_box_count; // 0x04(0x04)
	struct TArray<struct FAnalysisDediItemData> item_spawn_info; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisDediItemData
// Size: 0x20 (Inherited: 0x00)
struct FAnalysisDediItemData {
	int32_t item_id; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString item_name; // 0x08(0x10)
	int32_t item_count; // 0x18(0x04)
	int32_t item_stack_count; // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisDediVehicleSpawnData
// Size: 0x18 (Inherited: 0x00)
struct FAnalysisDediVehicleSpawnData {
	int32_t spawner_cnt; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FAnalysisDediVehicleData> vehicle_spawn_info; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisDediVehicleData
// Size: 0x38 (Inherited: 0x00)
struct FAnalysisDediVehicleData {
	struct FString spawner_name; // 0x00(0x10)
	int32_t spawner_pos_x; // 0x10(0x04)
	int32_t spawner_pos_y; // 0x14(0x04)
	int32_t spawner_pos_z; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString vehicle_name; // 0x20(0x10)
	int32_t board; // 0x30(0x04)
	int32_t destroy; // 0x34(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisDediRedZoneData
// Size: 0x30 (Inherited: 0x00)
struct FAnalysisDediRedZoneData {
	int32_t event_time; // 0x00(0x04)
	int32_t phase_index; // 0x04(0x04)
	int32_t redzone_time; // 0x08(0x04)
	int32_t center_loc_x; // 0x0c(0x04)
	int32_t center_loc_y; // 0x10(0x04)
	int32_t center_loc_z; // 0x14(0x04)
	int32_t circle_radius; // 0x18(0x04)
	int32_t boom_count; // 0x1c(0x04)
	int32_t boom_per_interval; // 0x20(0x04)
	int32_t indoor_cnt; // 0x24(0x04)
	int32_t outdoor_cnt; // 0x28(0x04)
	int32_t boom_damage; // 0x2c(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisDediTransportData
// Size: 0x28 (Inherited: 0x00)
struct FAnalysisDediTransportData {
	int32_t event_time; // 0x00(0x04)
	int32_t phase_index; // 0x04(0x04)
	int32_t Turn; // 0x08(0x04)
	int32_t loc_x; // 0x0c(0x04)
	int32_t loc_y; // 0x10(0x04)
	int32_t loc_z; // 0x14(0x04)
	struct TArray<int32_t> transportitem; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisDediBlueZoneData
// Size: 0x24 (Inherited: 0x00)
struct FAnalysisDediBlueZoneData {
	int32_t event_time; // 0x00(0x04)
	int32_t phase_index; // 0x04(0x04)
	int32_t center_loc_x; // 0x08(0x04)
	int32_t center_loc_y; // 0x0c(0x04)
	int32_t center_loc_z; // 0x10(0x04)
	int32_t circle_radius; // 0x14(0x04)
	int32_t incircle_player; // 0x18(0x04)
	int32_t outcircle_player; // 0x1c(0x04)
	int32_t death_player_cnt; // 0x20(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisDediSupplyBoxData
// Size: 0x50 (Inherited: 0x00)
struct FAnalysisDediSupplyBoxData {
	int32_t event_time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString UserID; // 0x08(0x10)
	struct FString NickName; // 0x18(0x10)
	int32_t loc_x; // 0x28(0x04)
	int32_t loc_y; // 0x2c(0x04)
	int32_t loc_z; // 0x30(0x04)
	int32_t box_loc_x; // 0x34(0x04)
	int32_t box_loc_y; // 0x38(0x04)
	int32_t box_loc_z; // 0x3c(0x04)
	struct FString spawner_name; // 0x40(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisDediMatchingRPInfoData
// Size: 0x10 (Inherited: 0x00)
struct FAnalysisDediMatchingRPInfoData {
	struct TArray<struct FAnalysisDediPlayerRPInfoData> player_rp_info; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisDediPlayerRPInfoData
// Size: 0x68 (Inherited: 0x00)
struct FAnalysisDediPlayerRPInfoData {
	struct FString UserID; // 0x00(0x10)
	struct FString NickName; // 0x10(0x10)
	int32_t Rating; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString Training; // 0x28(0x10)
	struct FString TeamID; // 0x38(0x10)
	int32_t team_rating; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString PartyID; // 0x50(0x10)
	int32_t party_rating; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisDataGameInfo
// Size: 0x50 (Inherited: 0x00)
struct FAnalysisDataGameInfo {
	int32_t flight_start_loc_x; // 0x00(0x04)
	int32_t flight_start_loc_y; // 0x04(0x04)
	int32_t flight_start_loc_z; // 0x08(0x04)
	int32_t flight_end_loc_x; // 0x0c(0x04)
	int32_t flight_end_loc_y; // 0x10(0x04)
	int32_t flight_end_loc_z; // 0x14(0x04)
	int32_t bluezone_circle_x; // 0x18(0x04)
	int32_t bluezone_circle_y; // 0x1c(0x04)
	int32_t bluezone_radius; // 0x20(0x04)
	int32_t matching_player; // 0x24(0x04)
	int32_t matching_ai_player; // 0x28(0x04)
	int32_t escape_player; // 0x2c(0x04)
	struct FString start_game_time; // 0x30(0x10)
	struct FString end_game_time; // 0x40(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisDataBase
// Size: 0xc0 (Inherited: 0x00)
struct FAnalysisDataBase {
	enum class EContentsType contentType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FAnalysisDataBaseHead Base; // 0x08(0x88)
	struct FString Msg; // 0x90(0x10)
	struct FString nowDate; // 0xa0(0x10)
	struct FString ApiPhase; // 0xb0(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisDataBaseHead
// Size: 0x88 (Inherited: 0x00)
struct FAnalysisDataBaseHead {
	int32_t DateTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString match_id; // 0x08(0x10)
	struct FString game_server_id; // 0x18(0x10)
	struct FString MapName; // 0x28(0x10)
	int32_t GameViewType; // 0x38(0x04)
	int32_t GameMode; // 0x3c(0x04)
	int32_t BattleMode; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString cqr_type; // 0x48(0x10)
	int32_t bluezone_id; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString ip; // 0x60(0x10)
	struct FString Training; // 0x70(0x10)
	int32_t ai_grade; // 0x80(0x04)
	int32_t class_select_mode; // 0x84(0x04)
};

// ScriptStruct BravoHotelGame.LogWeaponSlots
// Size: 0x10 (Inherited: 0x00)
struct FLogWeaponSlots {
	struct TArray<struct FLogEquippedWeaponInfo> weapon_slots; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.LogEquippedWeaponInfo
// Size: 0x08 (Inherited: 0x00)
struct FLogEquippedWeaponInfo {
	int32_t weapon_index; // 0x00(0x04)
	int32_t Level; // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.LogMapInfo
// Size: 0x08 (Inherited: 0x00)
struct FLogMapInfo {
	int32_t map_index; // 0x00(0x04)
	int32_t magnetic_index; // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.ItemLocationLog
// Size: 0x10 (Inherited: 0x00)
struct FItemLocationLog {
	struct TArray<struct FVector> Locations; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.DediDataEquipmentInfo
// Size: 0x0c (Inherited: 0x01)
struct FDediDataEquipmentInfo : FDediDataInfoBase {
	char pad_1[0xb]; // 0x01(0x0b)
};

// ScriptStruct BravoHotelGame.DediDataArmorInfo
// Size: 0x18 (Inherited: 0x0c)
struct FDediDataArmorInfo : FDediDataEquipmentInfo {
	char pad_C[0xc]; // 0x0c(0x0c)
};

// ScriptStruct BravoHotelGame.DediDataWeaponInfo
// Size: 0x48 (Inherited: 0x0c)
struct FDediDataWeaponInfo : FDediDataEquipmentInfo {
	char pad_C[0x3c]; // 0x0c(0x3c)
};

// ScriptStruct BravoHotelGame.ClientDataInfoBase
// Size: 0x01 (Inherited: 0x00)
struct FClientDataInfoBase {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.DataEventClientGameState
// Size: 0x78 (Inherited: 0x58)
struct FDataEventClientGameState : FDataEventBase {
	char pad_58[0x20]; // 0x58(0x20)
};

// ScriptStruct BravoHotelGame.DataEventClientGameWeapon
// Size: 0x68 (Inherited: 0x58)
struct FDataEventClientGameWeapon : FDataEventBase {
	char pad_58[0x8]; // 0x58(0x08)
	struct AActor* WeaponActor; // 0x60(0x08)
};

// ScriptStruct BravoHotelGame.DataEventClientGameInventory
// Size: 0x68 (Inherited: 0x58)
struct FDataEventClientGameInventory : FDataEventBase {
	char pad_58[0x10]; // 0x58(0x10)
};

// ScriptStruct BravoHotelGame.DataEventClientGameVehicle
// Size: 0x78 (Inherited: 0x58)
struct FDataEventClientGameVehicle : FDataEventBase {
	char pad_58[0x18]; // 0x58(0x18)
	struct AActor* VehicleActor; // 0x70(0x08)
};

// ScriptStruct BravoHotelGame.DataEventClientGameRevival
// Size: 0x88 (Inherited: 0x58)
struct FDataEventClientGameRevival : FDataEventBase {
	char pad_58[0x8]; // 0x58(0x08)
	struct APlayerState* RevivedPlayerState; // 0x60(0x08)
	struct APlayerState* SaviorPlayerState; // 0x68(0x08)
	char pad_70[0x18]; // 0x70(0x18)
};

// ScriptStruct BravoHotelGame.DataEventClientGameDied
// Size: 0xa8 (Inherited: 0x58)
struct FDataEventClientGameDied : FDataEventBase {
	char pad_58[0x8]; // 0x58(0x08)
	struct UBravoHotelDamageType* DamageTypeClass; // 0x60(0x08)
	struct APlayerState* KnockDownAttackerPlayerState; // 0x68(0x08)
	struct APlayerState* KillerPlayerState; // 0x70(0x08)
	struct APlayerState* AttackerPlayerState; // 0x78(0x08)
	struct APlayerState* VictimPlayerState; // 0x80(0x08)
	char pad_88[0x20]; // 0x88(0x20)
};

// ScriptStruct BravoHotelGame.DataEventClientGameKnockDowned
// Size: 0xa8 (Inherited: 0x58)
struct FDataEventClientGameKnockDowned : FDataEventBase {
	char pad_58[0x8]; // 0x58(0x08)
	struct UBravoHotelDamageType* DamageTypeClass; // 0x60(0x08)
	struct AActor* AttackerActor; // 0x68(0x08)
	struct APlayerState* AttackerPlayerState; // 0x70(0x08)
	struct AActor* VictimActor; // 0x78(0x08)
	struct APlayerState* VictimPlayerState; // 0x80(0x08)
	char pad_88[0x20]; // 0x88(0x20)
};

// ScriptStruct BravoHotelGame.DataEventClientGameBattle
// Size: 0xa8 (Inherited: 0x58)
struct FDataEventClientGameBattle : FDataEventBase {
	char pad_58[0x8]; // 0x58(0x08)
	struct UBravoHotelDamageType* DamageTypeClass; // 0x60(0x08)
	struct AActor* AttackerActor; // 0x68(0x08)
	struct APlayerState* AttackerPlayerState; // 0x70(0x08)
	struct AActor* VictimActor; // 0x78(0x08)
	struct APlayerState* VictimPlayerState; // 0x80(0x08)
	char pad_88[0x20]; // 0x88(0x20)
};

// ScriptStruct BravoHotelGame.DataEventClientGameThrowable
// Size: 0x88 (Inherited: 0x58)
struct FDataEventClientGameThrowable : FDataEventBase {
	char pad_58[0x30]; // 0x58(0x30)
};

// ScriptStruct BravoHotelGame.DataEventClientGameInteraction
// Size: 0x80 (Inherited: 0x58)
struct FDataEventClientGameInteraction : FDataEventBase {
	char pad_58[0x28]; // 0x58(0x28)
};

// ScriptStruct BravoHotelGame.DataEventClientGameItemSearch
// Size: 0x78 (Inherited: 0x58)
struct FDataEventClientGameItemSearch : FDataEventBase {
	char pad_58[0x20]; // 0x58(0x20)
};

// ScriptStruct BravoHotelGame.DataEventClientGameItem
// Size: 0x1e0 (Inherited: 0x58)
struct FDataEventClientGameItem : FDataEventBase {
	char pad_58[0x188]; // 0x58(0x188)
};

// ScriptStruct BravoHotelGame.DataEventClientGameSkill
// Size: 0x80 (Inherited: 0x58)
struct FDataEventClientGameSkill : FDataEventBase {
	char pad_58[0x28]; // 0x58(0x28)
};

// ScriptStruct BravoHotelGame.DataEventClientGameSupplyBox
// Size: 0xc0 (Inherited: 0x58)
struct FDataEventClientGameSupplyBox : FDataEventBase {
	char pad_58[0x68]; // 0x58(0x68)
};

// ScriptStruct BravoHotelGame.DataEventClientGame
// Size: 0x70 (Inherited: 0x58)
struct FDataEventClientGame : FDataEventBase {
	char pad_58[0x18]; // 0x58(0x18)
};

// ScriptStruct BravoHotelGame.DataEventClient
// Size: 0x60 (Inherited: 0x58)
struct FDataEventClient : FDataEventBase {
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct BravoHotelGame.DataEventWorldItem
// Size: 0x68 (Inherited: 0x58)
struct FDataEventWorldItem : FDataEventBase {
	char pad_58[0x10]; // 0x58(0x10)
};

// ScriptStruct BravoHotelGame.DataEventBattleRoyal
// Size: 0x78 (Inherited: 0x58)
struct FDataEventBattleRoyal : FDataEventBase {
	char pad_58[0x20]; // 0x58(0x20)
};

// ScriptStruct BravoHotelGame.DataEventDamageType
// Size: 0x90 (Inherited: 0x58)
struct FDataEventDamageType : FDataEventBase {
	char pad_58[0x38]; // 0x58(0x38)
};

// ScriptStruct BravoHotelGame.DataEventLastEquip
// Size: 0x140 (Inherited: 0x58)
struct FDataEventLastEquip : FDataEventBase {
	char pad_58[0xe8]; // 0x58(0xe8)
};

// ScriptStruct BravoHotelGame.DataEventWeapon
// Size: 0xb0 (Inherited: 0x58)
struct FDataEventWeapon : FDataEventBase {
	char pad_58[0x58]; // 0x58(0x58)
};

// ScriptStruct BravoHotelGame.DataEventCharacterFlying
// Size: 0x98 (Inherited: 0x58)
struct FDataEventCharacterFlying : FDataEventBase {
	char pad_58[0x40]; // 0x58(0x40)
};

// ScriptStruct BravoHotelGame.DataEventCharacter
// Size: 0x90 (Inherited: 0x58)
struct FDataEventCharacter : FDataEventBase {
	char pad_58[0x38]; // 0x58(0x38)
};

// ScriptStruct BravoHotelGame.DataEventPlayer
// Size: 0x70 (Inherited: 0x58)
struct FDataEventPlayer : FDataEventBase {
	char pad_58[0x18]; // 0x58(0x18)
};

// ScriptStruct BravoHotelGame.EmptyData
// Size: 0x01 (Inherited: 0x00)
struct FEmptyData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.ItemRarityInfo
// Size: 0x0c (Inherited: 0x00)
struct FItemRarityInfo {
	enum class EItemRarity Rarity; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName ItemName; // 0x04(0x08)
};

// ScriptStruct BravoHotelGame.ItemTypeProb
// Size: 0x08 (Inherited: 0x00)
struct FItemTypeProb {
	enum class EItemType ItemType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ProbSum; // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.DetectBoxSpawnItemsInfo
// Size: 0x08 (Inherited: 0x00)
struct FDetectBoxSpawnItemsInfo {
	enum class EItemType ItemType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float SpawnProbability; // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelBlackMarketDataType
// Size: 0x118 (Inherited: 0x00)
struct FBravoHotelBlackMarketDataType {
	struct FName ItemRowName; // 0x00(0x08)
	struct TSoftObjectPtr<UPaperSprite> ItemIconTextureEx; // 0x08(0x28)
	struct TSoftObjectPtr<UObject> ItemIconImage; // 0x30(0x28)
	struct FText ItemName; // 0x58(0x18)
	float Weight; // 0x70(0x04)
	enum class EBlackmarketTabType TabType; // 0x74(0x01)
	enum class EItemType ItemType; // 0x75(0x01)
	enum class EWeaponType WeaponType; // 0x76(0x01)
	enum class EWeaponAttachmentType AttachmentType; // 0x77(0x01)
	enum class EWearableItemType WearableType; // 0x78(0x01)
	enum class EDevelopmentStatus DevelopmentStatus; // 0x79(0x01)
	char pad_7A[0x2]; // 0x7a(0x02)
	struct FName CompatibleAmmoName; // 0x7c(0x08)
	float Damage; // 0x84(0x04)
	float FireRate; // 0x88(0x04)
	int32_t NormalMagSize; // 0x8c(0x04)
	struct TArray<enum class EWeaponFireMode> AllowedFireModes; // 0x90(0x10)
	float ReloadTime; // 0xa0(0x04)
	float ProjectileVelocity; // 0xa4(0x04)
	float MoveSpeedModifier; // 0xa8(0x04)
	int32_t AmmoCount; // 0xac(0x04)
	float TotalWeight; // 0xb0(0x04)
	float DecreaseReloadTime; // 0xb4(0x04)
	float VerticalReduce; // 0xb8(0x04)
	float HorizentalReduce; // 0xbc(0x04)
	float IncreaseRateoffire; // 0xc0(0x04)
	float BurstSpeed; // 0xc4(0x04)
	float Armor; // 0xc8(0x04)
	int32_t Capacity; // 0xcc(0x04)
	float Health; // 0xd0(0x04)
	float Adrenaline; // 0xd4(0x04)
	float Fuel; // 0xd8(0x04)
	enum class EPerkSlotFlag EquipableSlot; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	struct TArray<struct FName> EquipableClass; // 0xe0(0x10)
	struct FText Description; // 0xf0(0x18)
	struct TArray<struct FString> ItemList; // 0x108(0x10)
};

// ScriptStruct BravoHotelGame.ProjectDirectoriesPath
// Size: 0x10 (Inherited: 0x00)
struct FProjectDirectoriesPath {
	struct TArray<struct FDirectoryPath> DirectoriesPath; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.ProjectDirectoryPath
// Size: 0x10 (Inherited: 0x00)
struct FProjectDirectoryPath {
	struct FDirectoryPath DirectoryPath; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.ParachuteInfo
// Size: 0x1c (Inherited: 0x00)
struct FParachuteInfo {
	bool Visibility; // 0x00(0x01)
	bool ParachuteImage; // 0x01(0x01)
	bool PlayerImage; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float ParachutePoint; // 0x04(0x04)
	float TerrainHeight; // 0x08(0x04)
	float Speed; // 0x0c(0x04)
	float Angle; // 0x10(0x04)
	struct FVector2D ParachutePos; // 0x14(0x08)
};

// ScriptStruct BravoHotelGame.HitInfoNeedToCheck
// Size: 0x18 (Inherited: 0x00)
struct FHitInfoNeedToCheck {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct BravoHotelGame.ProjectileHitInfo
// Size: 0x58 (Inherited: 0x00)
struct FProjectileHitInfo {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct BravoHotelGame.HitInfo
// Size: 0x20 (Inherited: 0x00)
struct FHitInfo {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct BravoHotelGame.ClientInfo
// Size: 0x01 (Inherited: 0x00)
struct FClientInfo {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.CoherentWidgetInfo
// Size: 0x10 (Inherited: 0x00)
struct FCoherentWidgetInfo {
	struct UWidget* Widget; // 0x00(0x08)
	bool FinishLoad; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct BravoHotelGame.VivoxChanelInfo
// Size: 0x20 (Inherited: 0x00)
struct FVivoxChanelInfo {
	enum class VoiceChannelType Type; // 0x00(0x01)
	bool ShouldTransmitOnJoin; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString ChannelName; // 0x08(0x10)
	enum class PTTKey AssignChanneltoPTTKey; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct BravoHotelGame.GoogleCloudRequestInfo
// Size: 0x01 (Inherited: 0x00)
struct FGoogleCloudRequestInfo {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.GoogleCloudRequestControl
// Size: 0x30 (Inherited: 0x00)
struct FGoogleCloudRequestControl {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct BravoHotelGame.GoogleCloud_PubSub
// Size: 0x10 (Inherited: 0x00)
struct FGoogleCloud_PubSub {
	struct TArray<struct FPubSub_Message> messages; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.PubSub_Message
// Size: 0x30 (Inherited: 0x00)
struct FPubSub_Message {
	struct FPubSub_Attribute Attributes; // 0x00(0x20)
	struct FString Data; // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.PubSub_Attribute
// Size: 0x20 (Inherited: 0x00)
struct FPubSub_Attribute {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.Request_WaitingTicket
// Size: 0x20 (Inherited: 0x00)
struct FRequest_WaitingTicket {
	struct FString geegee_id; // 0x00(0x10)
	struct FString steam_id; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.Response_CraftWeapon
// Size: 0xd8 (Inherited: 0x00)
struct FResponse_CraftWeapon {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FResponse_CraftWeapon_Data D; // 0x18(0xc0)
};

// ScriptStruct BravoHotelGame.Request_CraftWeapon
// Size: 0x20 (Inherited: 0x00)
struct FRequest_CraftWeapon {
	int32_t crafting_id; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FRequest_CraftWeapon_BaseWeapon base_weapon; // 0x08(0x18)
};

// ScriptStruct BravoHotelGame.Request_CraftWeapon_BaseWeapon
// Size: 0x18 (Inherited: 0x00)
struct FRequest_CraftWeapon_BaseWeapon {
	int32_t table_base_index; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString item_id; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.Response_MaterialList
// Size: 0x28 (Inherited: 0x00)
struct FResponse_MaterialList {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FResponse_MaterialList_Array D; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.Response_MaterialList_Array
// Size: 0x10 (Inherited: 0x00)
struct FResponse_MaterialList_Array {
	struct TArray<struct FResponse_MaterialList_Data> material_list; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Response_Weapon_List
// Size: 0x28 (Inherited: 0x00)
struct FResponse_Weapon_List {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FResponse_Weapon_List_Array D; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.Response_Weapon_List_Array
// Size: 0x10 (Inherited: 0x00)
struct FResponse_Weapon_List_Array {
	struct TArray<struct FResponse_Weapon_List_Data> weapon_list; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Response_Google_JWT
// Size: 0x28 (Inherited: 0x00)
struct FResponse_Google_JWT {
	struct FString access_token; // 0x00(0x10)
	int32_t expires_in; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString token_type; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.RedisPubSub_Header
// Size: 0x10 (Inherited: 0x00)
struct FRedisPubSub_Header {
	struct FString Cmd; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.RedisPubSub_LeaveGame
// Size: 0x20 (Inherited: 0x10)
struct FRedisPubSub_LeaveGame : FRedisPubSub_Header {
	struct FString UID; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.RedisPubSub_StartPlay
// Size: 0x20 (Inherited: 0x10)
struct FRedisPubSub_StartPlay : FRedisPubSub_Header {
	struct FString Mode; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.RedisPubSub_LoadMap
// Size: 0x20 (Inherited: 0x10)
struct FRedisPubSub_LoadMap : FRedisPubSub_Header {
	struct FString map_name; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.Response_FriendPendingList
// Size: 0x28 (Inherited: 0x00)
struct FResponse_FriendPendingList {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FResponse_FriendPendingListArray D; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.Response_FriendPendingListArray
// Size: 0x10 (Inherited: 0x00)
struct FResponse_FriendPendingListArray {
	struct TArray<struct FResponse_FriendInfo_Rec> pendingInviteInfoList; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Response_FriendInfo_Rec
// Size: 0x30 (Inherited: 0x00)
struct FResponse_FriendInfo_Rec {
	struct FString UID; // 0x00(0x10)
	struct FString player_name; // 0x10(0x10)
	struct FString status; // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.Request_FriendPendingList
// Size: 0x01 (Inherited: 0x00)
struct FRequest_FriendPendingList {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.Response_FriendList
// Size: 0x28 (Inherited: 0x00)
struct FResponse_FriendList {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FResponse_FriendListArray D; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.Response_FriendListArray
// Size: 0x10 (Inherited: 0x00)
struct FResponse_FriendListArray {
	struct TArray<struct FResponse_FriendInfo_Rec> friendInfoList; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Request_FriendList
// Size: 0x01 (Inherited: 0x00)
struct FRequest_FriendList {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.Response_AcceptFriend
// Size: 0x20 (Inherited: 0x00)
struct FResponse_AcceptFriend {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FResponse_AcceptFriend_Rec D; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct BravoHotelGame.Response_AcceptFriend_Rec
// Size: 0x01 (Inherited: 0x00)
struct FResponse_AcceptFriend_Rec {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.Request_AcceptFriend
// Size: 0x10 (Inherited: 0x00)
struct FRequest_AcceptFriend {
	struct FString user_id; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Response_InviteFriend
// Size: 0x28 (Inherited: 0x00)
struct FResponse_InviteFriend {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FResponse_InviteFriend_Rec D; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.Response_InviteFriend_Rec
// Size: 0x10 (Inherited: 0x00)
struct FResponse_InviteFriend_Rec {
	struct FString invite_user_id; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Request_InviteFriend
// Size: 0x10 (Inherited: 0x00)
struct FRequest_InviteFriend {
	struct FString user_id; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Response_SearchPlayer
// Size: 0x38 (Inherited: 0x00)
struct FResponse_SearchPlayer {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FResponse_SearchPlayer_Rec D; // 0x18(0x20)
};

// ScriptStruct BravoHotelGame.Response_SearchPlayer_Rec
// Size: 0x20 (Inherited: 0x00)
struct FResponse_SearchPlayer_Rec {
	struct FString user_id; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.Request_SearchPlayer
// Size: 0x10 (Inherited: 0x00)
struct FRequest_SearchPlayer {
	struct FString player_name; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Response_Equipitem
// Size: 0x38 (Inherited: 0x00)
struct FResponse_Equipitem {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FResponse_Equipitem_Rec D; // 0x18(0x20)
};

// ScriptStruct BravoHotelGame.Response_Equipitem_Rec
// Size: 0x20 (Inherited: 0x00)
struct FResponse_Equipitem_Rec {
	uint32_t item_mid; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString item_name; // 0x08(0x10)
	int32_t inven_item_slot; // 0x18(0x04)
	int32_t equip_item_slot; // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.Request_EquipItem
// Size: 0x20 (Inherited: 0x00)
struct FRequest_EquipItem {
	uint32_t item_mid; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString item_name; // 0x08(0x10)
	int32_t inven_item_slot; // 0x18(0x04)
	int32_t equip_item_slot; // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.Response_MoveItem
// Size: 0x38 (Inherited: 0x00)
struct FResponse_MoveItem {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FResponse_MoveItem_Rec D; // 0x18(0x20)
};

// ScriptStruct BravoHotelGame.Response_MoveItem_Rec
// Size: 0x20 (Inherited: 0x00)
struct FResponse_MoveItem_Rec {
	uint32_t item_mid; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString item_name; // 0x08(0x10)
	int32_t inven_old_item_slot; // 0x18(0x04)
	int32_t inven_new_item_slot; // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.Request_MoveItem
// Size: 0x20 (Inherited: 0x00)
struct FRequest_MoveItem {
	uint32_t item_mid; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString item_name; // 0x08(0x10)
	int32_t inven_old_item_slot; // 0x18(0x04)
	int32_t inven_new_item_slot; // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.Response_DelItem
// Size: 0x38 (Inherited: 0x00)
struct FResponse_DelItem {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FResponse_DelItem_Rec D; // 0x18(0x20)
};

// ScriptStruct BravoHotelGame.Response_DelItem_Rec
// Size: 0x20 (Inherited: 0x00)
struct FResponse_DelItem_Rec {
	uint32_t item_mid; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString item_name; // 0x08(0x10)
	uint32_t item_slot; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.Request_DelItem
// Size: 0x20 (Inherited: 0x00)
struct FRequest_DelItem {
	uint32_t item_mid; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString item_name; // 0x08(0x10)
	int32_t item_slot; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.Response_AddItem
// Size: 0x38 (Inherited: 0x00)
struct FResponse_AddItem {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FResponse_AddItem_Rec D; // 0x18(0x20)
};

// ScriptStruct BravoHotelGame.Response_AddItem_Rec
// Size: 0x20 (Inherited: 0x00)
struct FResponse_AddItem_Rec {
	uint32_t item_mid; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString item_name; // 0x08(0x10)
	uint32_t item_slot; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.Request_AddItem
// Size: 0x20 (Inherited: 0x00)
struct FRequest_AddItem {
	uint32_t item_mid; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString item_name; // 0x08(0x10)
	int32_t item_slot; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.Response_WeaponList
// Size: 0x28 (Inherited: 0x00)
struct FResponse_WeaponList {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FResponse_WeaponListArray D; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.Response_WeaponListArray
// Size: 0x10 (Inherited: 0x00)
struct FResponse_WeaponListArray {
	struct TArray<struct FResponse_ItemList_Rec> Weapon; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Response_ItemList_Rec
// Size: 0x28 (Inherited: 0x00)
struct FResponse_ItemList_Rec {
	uint32_t item_id; // 0x00(0x04)
	uint32_t item_slot; // 0x04(0x04)
	uint32_t item_mid; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString item_name; // 0x10(0x10)
	uint32_t item_count; // 0x20(0x04)
	uint32_t item_level; // 0x24(0x04)
};

// ScriptStruct BravoHotelGame.Response_EquipList
// Size: 0x28 (Inherited: 0x00)
struct FResponse_EquipList {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FResponse_EquipListArray D; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.Response_EquipListArray
// Size: 0x10 (Inherited: 0x00)
struct FResponse_EquipListArray {
	struct TArray<struct FResponse_ItemList_Rec> equipment; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Response_invenList
// Size: 0x28 (Inherited: 0x00)
struct FResponse_invenList {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FResponse_InvenListArray D; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.Response_InvenListArray
// Size: 0x10 (Inherited: 0x00)
struct FResponse_InvenListArray {
	struct TArray<struct FResponse_ItemList_Rec> inventory; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Response_SeasonInfo
// Size: 0x40 (Inherited: 0x00)
struct FResponse_SeasonInfo {
	uint32_t season_id; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString begin_time; // 0x08(0x10)
	struct FString play_end_time; // 0x18(0x10)
	struct FString end_time; // 0x28(0x10)
	uint32_t exp_table_index; // 0x38(0x04)
	uint32_t quest_table_index; // 0x3c(0x04)
};

// ScriptStruct BravoHotelGame.Response_GamePlayerInfo
// Size: 0xf8 (Inherited: 0x00)
struct FResponse_GamePlayerInfo {
	uint32_t selected_pc_class_type_index; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FResponse_PCInfo> pc_list; // 0x08(0x10)
	struct TArray<struct FBasePerkInfo> all_perk_list; // 0x18(0x10)
	struct FSupplyBoxInfo supply_box; // 0x28(0x48)
	uint32_t Gold; // 0x70(0x04)
	struct FPlayerSeasonInfo player_season_info; // 0x74(0x18)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct TArray<struct FSeasonQuestBaseInfo> season_quest_list; // 0x90(0x10)
	double rating_point; // 0xa0(0x08)
	struct FMatchClassInfo match_class; // 0xa8(0x28)
	struct FResponse_PlayInfo play_info; // 0xd0(0x20)
	bool is_suspicious_user; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
};

// ScriptStruct BravoHotelGame.Response_PlayInfo
// Size: 0x20 (Inherited: 0x00)
struct FResponse_PlayInfo {
	uint32_t kill_count; // 0x00(0x04)
	uint32_t play_count; // 0x04(0x04)
	struct FString Training; // 0x08(0x10)
	uint32_t loser_score; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.MatchClassInfo
// Size: 0x28 (Inherited: 0x00)
struct FMatchClassInfo {
	uint32_t change_count; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Info; // 0x08(0x10)
	struct FString selection_info; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.SeasonQuestBaseInfo
// Size: 0x08 (Inherited: 0x00)
struct FSeasonQuestBaseInfo {
	uint32_t quest_index; // 0x00(0x04)
	uint32_t Count; // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.PlayerSeasonInfo
// Size: 0x18 (Inherited: 0x00)
struct FPlayerSeasonInfo {
	bool is_bought_season_ticket; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t season_level; // 0x04(0x04)
	uint32_t season_exp; // 0x08(0x04)
	uint32_t season_rp; // 0x0c(0x04)
	char tier_game_mode; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	uint32_t tier_id; // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.SupplyBoxInfo
// Size: 0x48 (Inherited: 0x00)
struct FSupplyBoxInfo {
	uint32_t table_index; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString item_id; // 0x08(0x10)
	struct TArray<struct FWeaponInfo> weapons; // 0x18(0x10)
	struct TArray<struct FEquipmentInfo> equipments; // 0x28(0x10)
	bool expanded; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	uint32_t count_of_supply; // 0x3c(0x04)
	uint32_t free_supply_ticket; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct BravoHotelGame.WeaponInfo
// Size: 0x30 (Inherited: 0x00)
struct FWeaponInfo {
	char slot_num; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t table_index; // 0x04(0x04)
	struct FString item_id; // 0x08(0x10)
	struct TArray<struct FOptionInfo> options; // 0x18(0x10)
	uint32_t Durability; // 0x28(0x04)
	bool supplied; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct BravoHotelGame.OptionInfo
// Size: 0x18 (Inherited: 0x00)
struct FOptionInfo {
	struct FString Type; // 0x00(0x10)
	uint32_t table_index; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.BasePerkInfo
// Size: 0x08 (Inherited: 0x00)
struct FBasePerkInfo {
	uint32_t Type; // 0x00(0x04)
	uint32_t table_index; // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.Response_PCInfo
// Size: 0x68 (Inherited: 0x00)
struct FResponse_PCInfo {
	struct FString pc_id; // 0x00(0x10)
	uint32_t class_type_index; // 0x10(0x04)
	uint32_t class_data_index; // 0x14(0x04)
	struct FPCLooks looks; // 0x18(0x18)
	struct TArray<struct FEquippedSlotInfo> wear_item; // 0x30(0x10)
	struct TArray<struct FEquippedSlotInfo> Weapon; // 0x40(0x10)
	struct TArray<struct FEquippedSlotInfo> perk; // 0x50(0x10)
	uint32_t exp; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct BravoHotelGame.EquippedSlotInfo
// Size: 0x08 (Inherited: 0x00)
struct FEquippedSlotInfo {
	uint32_t Key; // 0x00(0x04)
	uint32_t table_index; // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.PCLooks
// Size: 0x18 (Inherited: 0x00)
struct FPCLooks {
	uint32_t gender; // 0x00(0x04)
	uint32_t face; // 0x04(0x04)
	uint32_t face_color; // 0x08(0x04)
	uint32_t hair; // 0x0c(0x04)
	uint32_t hair_color; // 0x10(0x04)
	uint32_t makeup; // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.Response_Matching
// Size: 0x28 (Inherited: 0x00)
struct FResponse_Matching {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FResponse_Matching_Rec D; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.Response_Matching_Rec
// Size: 0x10 (Inherited: 0x00)
struct FResponse_Matching_Rec {
	struct FString ipaddr; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Request_Matching
// Size: 0x18 (Inherited: 0x00)
struct FRequest_Matching {
	char battle_mode; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString map_name; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.Request_DS_MatchRewardList
// Size: 0x28 (Inherited: 0x00)
struct FRequest_DS_MatchRewardList {
	struct FString map_name; // 0x00(0x10)
	char game_mode; // 0x10(0x01)
	char battle_mode; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct TArray<struct FPlayerMatchReward> match_reward_list; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.PlayerMatchReward
// Size: 0x58 (Inherited: 0x00)
struct FPlayerMatchReward {
	struct FString user_id; // 0x00(0x10)
	uint32_t pc_class_type_index; // 0x10(0x04)
	char reward_type; // 0x14(0x01)
	char Rank; // 0x15(0x01)
	char participants; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	uint32_t earned_gold; // 0x18(0x04)
	uint32_t earned_exp; // 0x1c(0x04)
	struct TArray<struct FRewardItem> earned_items; // 0x20(0x10)
	struct FSuppliedWeapon supplied_weapon; // 0x30(0x20)
	bool save_summary; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct BravoHotelGame.SuppliedWeapon
// Size: 0x20 (Inherited: 0x00)
struct FSuppliedWeapon {
	uint32_t table_index; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString item_id; // 0x08(0x10)
	uint32_t Durability; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.RewardItem
// Size: 0x58 (Inherited: 0x00)
struct FRewardItem {
	uint32_t table_index; // 0x00(0x04)
	uint32_t Count; // 0x04(0x04)
	struct TMap<struct FString, uint32_t> options; // 0x08(0x50)
};

// ScriptStruct BravoHotelGame.Request_DS_MatchReward
// Size: 0x70 (Inherited: 0x00)
struct FRequest_DS_MatchReward {
	struct FString map_name; // 0x00(0x10)
	char game_mode; // 0x10(0x01)
	char battle_mode; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct FPlayerMatchReward match_reward; // 0x18(0x58)
};

// ScriptStruct BravoHotelGame.Request_DS_CurrencyGain
// Size: 0x20 (Inherited: 0x00)
struct FRequest_DS_CurrencyGain {
	struct FString user_id; // 0x00(0x10)
	uint32_t currency_index; // 0x10(0x04)
	uint32_t Amount; // 0x14(0x04)
	uint32_t action_code; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.Request_DS_CurrencyPay
// Size: 0x20 (Inherited: 0x00)
struct FRequest_DS_CurrencyPay {
	struct FString user_id; // 0x00(0x10)
	uint32_t currency_index; // 0x10(0x04)
	uint32_t Amount; // 0x14(0x04)
	uint32_t action_code; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.Request_DS_MakeSupplyBoxUsed
// Size: 0x28 (Inherited: 0x00)
struct FRequest_DS_MakeSupplyBoxUsed {
	struct FString user_id; // 0x00(0x10)
	uint32_t table_index; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString item_id; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.Response_MatchResultDataListArray
// Size: 0x18 (Inherited: 0x00)
struct FResponse_MatchResultDataListArray {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.Request_MatchResultDataListArray
// Size: 0x70 (Inherited: 0x00)
struct FRequest_MatchResultDataListArray {
	char battle_mode; // 0x00(0x01)
	char game_mode; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString match_id; // 0x08(0x10)
	struct FString map_name; // 0x18(0x10)
	struct FString start_time; // 0x28(0x10)
	struct FString end_time; // 0x38(0x10)
	struct FString dedi_ip; // 0x48(0x10)
	uint32_t dedi_port; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct FRequest_UserResultDataList_Rec> user_result; // 0x60(0x10)
};

// ScriptStruct BravoHotelGame.Request_UserResultDataList_Rec
// Size: 0x30 (Inherited: 0x00)
struct FRequest_UserResultDataList_Rec {
	struct FString user_id; // 0x00(0x10)
	struct FString player_name; // 0x10(0x10)
	uint16_t Rank; // 0x20(0x02)
	char team_id; // 0x22(0x01)
	char pad_23[0x5]; // 0x23(0x05)
	double Weight; // 0x28(0x08)
};

// ScriptStruct BravoHotelGame.Response_PlayerSaveScore
// Size: 0x28 (Inherited: 0x00)
struct FResponse_PlayerSaveScore {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FResponse_PlayerName_Rec D; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.Response_PlayerName_Rec
// Size: 0x10 (Inherited: 0x00)
struct FResponse_PlayerName_Rec {
	struct FString player_name; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Response_PlayerScoreList
// Size: 0x28 (Inherited: 0x00)
struct FResponse_PlayerScoreList {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FResponse_ScoreListArray D; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.Response_ScoreListArray
// Size: 0x10 (Inherited: 0x00)
struct FResponse_ScoreListArray {
	struct TArray<struct FResponse_PlayerScore_Rec> score_list; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Response_PlayerScore_Rec
// Size: 0xc8 (Inherited: 0x00)
struct FResponse_PlayerScore_Rec {
	char battle_mode; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	double mu; // 0x08(0x08)
	double sigma; // 0x10(0x08)
	double Rating; // 0x18(0x08)
	double win_rating; // 0x20(0x08)
	double kill_rating; // 0x28(0x08)
	uint32_t matches_played; // 0x30(0x04)
	uint32_t top_10s; // 0x34(0x04)
	uint32_t wins; // 0x38(0x04)
	uint32_t tot_playtime; // 0x3c(0x04)
	uint32_t survival_time; // 0x40(0x04)
	uint32_t kill_oneself; // 0x44(0x04)
	double tot_distance_travelled; // 0x48(0x08)
	double distance_foot; // 0x50(0x08)
	double distance_swimming; // 0x58(0x08)
	double distance_vehicle; // 0x60(0x08)
	double acquire_weapon; // 0x68(0x08)
	double recover; // 0x70(0x08)
	double boost; // 0x78(0x08)
	uint32_t kills; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	double kill_rate; // 0x88(0x08)
	double damage_add; // 0x90(0x08)
	uint32_t assists; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	double longest_kill; // 0xa0(0x08)
	uint32_t headshots; // 0xa8(0x04)
	uint32_t game_max_kills; // 0xac(0x04)
	uint32_t max_continuously_kills; // 0xb0(0x04)
	uint32_t road_kills; // 0xb4(0x04)
	uint32_t distory_vehicles; // 0xb8(0x04)
	uint32_t faint; // 0xbc(0x04)
	uint32_t team_kills; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// ScriptStruct BravoHotelGame.Request_PlayerScore
// Size: 0xd8 (Inherited: 0x00)
struct FRequest_PlayerScore {
	struct FString player_name; // 0x00(0x10)
	struct FResponse_PlayerScore_Rec D; // 0x10(0xc8)
};

// ScriptStruct BravoHotelGame.Request_CheatCash
// Size: 0x18 (Inherited: 0x00)
struct FRequest_CheatCash {
	struct FString Command; // 0x00(0x10)
	struct FCheatParamCurrency Parameter; // 0x10(0x08)
};

// ScriptStruct BravoHotelGame.CheatParamCurrency
// Size: 0x08 (Inherited: 0x00)
struct FCheatParamCurrency {
	bool is_plus; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t Amount; // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.Request_CheatGold
// Size: 0x18 (Inherited: 0x00)
struct FRequest_CheatGold {
	struct FString Command; // 0x00(0x10)
	struct FCheatParamCurrency Parameter; // 0x10(0x08)
};

// ScriptStruct BravoHotelGame.Request_CheatCommand
// Size: 0x20 (Inherited: 0x00)
struct FRequest_CheatCommand {
	struct FString Command; // 0x00(0x10)
	struct FString Parameter; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.Response_Language
// Size: 0x18 (Inherited: 0x00)
struct FResponse_Language {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.Request_Language
// Size: 0x10 (Inherited: 0x00)
struct FRequest_Language {
	struct FString Language; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Response_PlayerInfo
// Size: 0xa0 (Inherited: 0x00)
struct FResponse_PlayerInfo {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FResponse_PlayerInfo_Rec D; // 0x18(0x88)
};

// ScriptStruct BravoHotelGame.Response_PlayerInfo_Rec
// Size: 0x88 (Inherited: 0x00)
struct FResponse_PlayerInfo_Rec {
	struct FString server_name; // 0x00(0x10)
	struct FString now; // 0x10(0x10)
	struct FString db; // 0x20(0x10)
	uint32_t uid_local; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	uint64_t uid_global; // 0x38(0x08)
	struct FString Name; // 0x40(0x10)
	uint32_t Level; // 0x50(0x04)
	uint32_t xp; // 0x54(0x04)
	uint32_t Gold; // 0x58(0x04)
	uint32_t energy; // 0x5c(0x04)
	struct FString energy_updated_at; // 0x60(0x10)
	uint32_t buy_coin; // 0x70(0x04)
	uint32_t free_coin; // 0x74(0x04)
	uint32_t sex; // 0x78(0x04)
	uint32_t face; // 0x7c(0x04)
	uint32_t hairstyle; // 0x80(0x04)
	uint32_t intro; // 0x84(0x04)
};

// ScriptStruct BravoHotelGame.Response_ChangePName
// Size: 0x28 (Inherited: 0x00)
struct FResponse_ChangePName {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FResponse_PlayerName_Rec D; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.Request_PlayerName
// Size: 0x10 (Inherited: 0x00)
struct FRequest_PlayerName {
	struct FString player_name; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Response_CreateDefaultPC
// Size: 0x28 (Inherited: 0x00)
struct FResponse_CreateDefaultPC {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FResponse_CreateDefaultPC_Rec D; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.Response_CreateDefaultPC_Rec
// Size: 0x10 (Inherited: 0x00)
struct FResponse_CreateDefaultPC_Rec {
	struct FString user_id; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Request_CreateDefaultPC
// Size: 0x18 (Inherited: 0x00)
struct FRequest_CreateDefaultPC {
	struct FPCLooks pc_looks; // 0x00(0x18)
};

// ScriptStruct BravoHotelGame.Response_CreatePlayer
// Size: 0x38 (Inherited: 0x00)
struct FResponse_CreatePlayer {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FResponse_CreatePlayer_Rec D; // 0x18(0x20)
};

// ScriptStruct BravoHotelGame.Response_CreatePlayer_Rec
// Size: 0x20 (Inherited: 0x00)
struct FResponse_CreatePlayer_Rec {
	struct FString user_id; // 0x00(0x10)
	struct FString auth_token; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.Request_CreatePlayer
// Size: 0x38 (Inherited: 0x00)
struct FRequest_CreatePlayer {
	struct FString player_name; // 0x00(0x10)
	struct FPCLooks pc_looks; // 0x10(0x18)
	struct TArray<uint32_t> equip_clothes; // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.Response_CheckPlayerName
// Size: 0x20 (Inherited: 0x00)
struct FResponse_CheckPlayerName {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FResponse_CheckPlayerName_Rec D; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct BravoHotelGame.Response_CheckPlayerName_Rec
// Size: 0x01 (Inherited: 0x00)
struct FResponse_CheckPlayerName_Rec {
	bool is_available; // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.Request_CheckPlayerName
// Size: 0x10 (Inherited: 0x00)
struct FRequest_CheckPlayerName {
	struct FString player_name; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Response_DSList
// Size: 0x28 (Inherited: 0x00)
struct FResponse_DSList {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FCustomMatchDSList D; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.CustomMatchDSList
// Size: 0x10 (Inherited: 0x00)
struct FCustomMatchDSList {
	struct TArray<struct FCustomMatchDS> waiting_ds_info_list; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.CustomMatchDS
// Size: 0x30 (Inherited: 0x00)
struct FCustomMatchDS {
	struct FString address; // 0x00(0x10)
	struct FString Token; // 0x10(0x10)
	struct FString encryption_key; // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.Request_LoginGeegeeWithSteam
// Size: 0x68 (Inherited: 0x00)
struct FRequest_LoginGeegeeWithSteam {
	struct FString Client_version; // 0x00(0x10)
	int32_t os; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ott; // 0x18(0x10)
	struct FString session_ticket; // 0x28(0x10)
	struct FString entry_code; // 0x38(0x10)
	struct FString hardware_info; // 0x48(0x10)
	struct FString geegee_project_id; // 0x58(0x10)
};

// ScriptStruct BravoHotelGame.Request_LoginSteam
// Size: 0x48 (Inherited: 0x00)
struct FRequest_LoginSteam {
	struct FString Client_version; // 0x00(0x10)
	int32_t os; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString session_ticket; // 0x18(0x10)
	struct FString entry_code; // 0x28(0x10)
	struct FString hardware_info; // 0x38(0x10)
};

// ScriptStruct BravoHotelGame.Request_LoginGeegee
// Size: 0x58 (Inherited: 0x00)
struct FRequest_LoginGeegee {
	struct FString Client_version; // 0x00(0x10)
	int32_t os; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ott; // 0x18(0x10)
	struct FString entry_code; // 0x28(0x10)
	struct FString hardware_info; // 0x38(0x10)
	struct FString geegee_project_id; // 0x48(0x10)
};

// ScriptStruct BravoHotelGame.Request_LoginAccount
// Size: 0x50 (Inherited: 0x00)
struct FRequest_LoginAccount {
	struct FString Client_version; // 0x00(0x10)
	int32_t os; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString account; // 0x18(0x10)
	bool allowed_only_if_exists; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString entry_code; // 0x30(0x10)
	struct FString hardware_info; // 0x40(0x10)
};

// ScriptStruct BravoHotelGame.Response_LoginName
// Size: 0x78 (Inherited: 0x00)
struct FResponse_LoginName {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FResponse_LoginName_Rec D; // 0x18(0x60)
};

// ScriptStruct BravoHotelGame.Response_LoginName_Rec
// Size: 0x60 (Inherited: 0x00)
struct FResponse_LoginName_Rec {
	bool created; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString SessionID; // 0x08(0x10)
	struct FString session_id; // 0x18(0x10)
	struct FString UID; // 0x28(0x10)
	bool is_go_create_pc; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString auth_token; // 0x40(0x10)
	struct FString match_making_tag; // 0x50(0x10)
};

// ScriptStruct BravoHotelGame.Request_LoginName
// Size: 0x80 (Inherited: 0x00)
struct FRequest_LoginName {
	struct FString Client_version; // 0x00(0x10)
	int32_t os; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString player_name; // 0x18(0x10)
	bool allowed_only_if_exists; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FHardWareInfo hardware_info; // 0x30(0x50)
};

// ScriptStruct BravoHotelGame.HardWareInfo
// Size: 0x50 (Inherited: 0x00)
struct FHardWareInfo {
	struct FString full_guid; // 0x00(0x10)
	struct FString grid; // 0x10(0x10)
	struct FString hardware_id; // 0x20(0x10)
	struct FString software_id; // 0x30(0x10)
	struct FString network_id; // 0x40(0x10)
};

// ScriptStruct BravoHotelGame.Response_Login
// Size: 0x80 (Inherited: 0x00)
struct FResponse_Login {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FResponse_Login_Rec D; // 0x18(0x68)
};

// ScriptStruct BravoHotelGame.Response_Login_Rec
// Size: 0x68 (Inherited: 0x00)
struct FResponse_Login_Rec {
	bool created; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString UID; // 0x08(0x10)
	bool go_to_create_pc; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString auth_token; // 0x20(0x10)
	struct FString Language; // 0x30(0x10)
	bool clean_campaign_joined; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FString Msg; // 0x48(0x10)
	struct FString match_making_tag; // 0x58(0x10)
};

// ScriptStruct BravoHotelGame.Request_Login
// Size: 0x28 (Inherited: 0x00)
struct FRequest_Login {
	struct FString Client_version; // 0x00(0x10)
	int32_t os; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString guest_id; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.Response_AskLoginAvailable
// Size: 0x38 (Inherited: 0x00)
struct FResponse_AskLoginAvailable {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FResponse_AskLoginAvailable_Rec D; // 0x18(0x20)
};

// ScriptStruct BravoHotelGame.Response_AskLoginAvailable_Rec
// Size: 0x20 (Inherited: 0x00)
struct FResponse_AskLoginAvailable_Rec {
	bool approved; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString entry_code; // 0x08(0x10)
	uint32_t waiting_user; // 0x18(0x04)
	bool not_available; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct BravoHotelGame.Request_AskLoginAvailable
// Size: 0x10 (Inherited: 0x00)
struct FRequest_AskLoginAvailable {
	struct FString waiting_ticket; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Response_GetWaitingTicket
// Size: 0x40 (Inherited: 0x00)
struct FResponse_GetWaitingTicket {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FResponse_GetWaitingTicket_Rec D; // 0x18(0x28)
};

// ScriptStruct BravoHotelGame.Response_GetWaitingTicket_Rec
// Size: 0x28 (Inherited: 0x00)
struct FResponse_GetWaitingTicket_Rec {
	struct FString waiting_ticket; // 0x00(0x10)
	struct FString entry_code; // 0x10(0x10)
	bool not_available; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct BravoHotelGame.Response_Header
// Size: 0x18 (Inherited: 0x00)
struct FResponse_Header {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.ConfigData
// Size: 0x188 (Inherited: 0x00)
struct FConfigData {
	struct FString service_status; // 0x00(0x10)
	uint32_t client_version_least; // 0x10(0x04)
	uint32_t client_version_latest; // 0x14(0x04)
	struct FString ui_lobby; // 0x18(0x10)
	struct FString api_wait; // 0x28(0x10)
	struct FString api_auth; // 0x38(0x10)
	struct FString api_game; // 0x48(0x10)
	struct FString api_websocket; // 0x58(0x10)
	struct FString wait_status; // 0x68(0x10)
	struct TArray<struct FRegionConfigData> ping_display_by_region; // 0x78(0x10)
	struct FString log_target_for_client; // 0x88(0x10)
	struct FKinesisConfigData log_target_for_client_to_kinesis; // 0x98(0x80)
	struct FString log_target_for_dedi; // 0x118(0x10)
	struct FString replay_min_supported_version; // 0x128(0x10)
	struct FString replay_transfer_bucket; // 0x138(0x10)
	struct FString evidential_data_bucket; // 0x148(0x10)
	struct FGoogleClientConfigData log_target_for_client_to_google; // 0x158(0x30)
};

// ScriptStruct BravoHotelGame.GoogleClientConfigData
// Size: 0x30 (Inherited: 0x00)
struct FGoogleClientConfigData {
	struct FString privatekey; // 0x00(0x10)
	struct FString privateid; // 0x10(0x10)
	struct FString iss; // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.KinesisConfigData
// Size: 0x80 (Inherited: 0x00)
struct FKinesisConfigData {
	struct FString cognito_kinesis_region; // 0x00(0x10)
	struct FString cognito_user_pool_id; // 0x10(0x10)
	struct FString cognito_user_pool_client_id; // 0x20(0x10)
	struct FString cognito_user_name; // 0x30(0x10)
	struct FString cognito_user_password; // 0x40(0x10)
	struct FString cognito_identity_pool_id; // 0x50(0x10)
	struct FString kinesis_data_stream_name; // 0x60(0x10)
	struct FString evidential_data_bucket; // 0x70(0x10)
};

// ScriptStruct BravoHotelGame.RegionConfigData
// Size: 0x30 (Inherited: 0x00)
struct FRegionConfigData {
	struct FString region; // 0x00(0x10)
	struct FString ec2_endpoint_url; // 0x10(0x10)
	struct TArray<struct FString> match_making_tag_list; // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.WeaponCompare
// Size: 0x170 (Inherited: 0x00)
struct FWeaponCompare {
	bool CompareRating; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FItemComparefloatInfo Power; // 0x08(0x20)
	struct FItemCompareInfo EffectiveRange; // 0x28(0x20)
	struct FItemComparefloatInfo Stability; // 0x48(0x20)
	struct FItemCompareInfo Firingrate; // 0x68(0x20)
	struct FItemCompareInfo Ammo; // 0x88(0x20)
	struct FText PickupWeaponText; // 0xa8(0x18)
	struct FText WeaponItemComparingName; // 0xc0(0x18)
	struct FString AmmoInfo; // 0xd8(0x10)
	struct TSoftObjectPtr<UPaperSprite> TexturePtr; // 0xe8(0x28)
	enum class EItemRarity PickupRarity; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FText Desc; // 0x118(0x18)
	bool WeaponLockVisibility; // 0x130(0x01)
	bool IsMyWeapon; // 0x131(0x01)
	bool BindInfoVisibility; // 0x132(0x01)
	char pad_133[0x5]; // 0x133(0x05)
	struct FString BindInfoNickName; // 0x138(0x10)
	struct FString BindInfoDesc; // 0x148(0x10)
	int32_t BindLevel; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct TArray<struct FAbilitySlot> AbilitySlot; // 0x160(0x10)
};

// ScriptStruct BravoHotelGame.AbilitySlot
// Size: 0x20 (Inherited: 0x00)
struct FAbilitySlot {
	struct FString Icon; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.ItemCompareInfo
// Size: 0x20 (Inherited: 0x00)
struct FItemCompareInfo {
	int32_t Value; // 0x00(0x04)
	int32_t CompareValue; // 0x04(0x04)
	enum class ECompareItemType CompareType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString CompareString; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.ItemComparefloatInfo
// Size: 0x20 (Inherited: 0x00)
struct FItemComparefloatInfo {
	float Value; // 0x00(0x04)
	float CompareValue; // 0x04(0x04)
	enum class ECompareItemType CompareType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString CompareString; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.WeaponItem
// Size: 0xc0 (Inherited: 0x00)
struct FWeaponItem {
	float Power; // 0x00(0x04)
	int32_t EffectiveRange; // 0x04(0x04)
	float Stability; // 0x08(0x04)
	int32_t Firingrate; // 0x0c(0x04)
	int32_t Ammo; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString PickupWeaponText; // 0x18(0x10)
	struct FString AmmoInfo; // 0x28(0x10)
	struct TSoftObjectPtr<UPaperSprite> TexturePtr; // 0x38(0x28)
	enum class EItemRarity Rarity; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FText Desc; // 0x68(0x18)
	bool WeaponLockVisibility; // 0x80(0x01)
	bool IsMyWeapon; // 0x81(0x01)
	bool BindInfoVisibility; // 0x82(0x01)
	char pad_83[0x5]; // 0x83(0x05)
	struct FString BindInfoNickName; // 0x88(0x10)
	struct FString BindInfoDesc; // 0x98(0x10)
	int32_t BindLevel; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<struct FAbilitySlot> AbilitySlot; // 0xb0(0x10)
};

// ScriptStruct BravoHotelGame.PickupItem
// Size: 0x98 (Inherited: 0x00)
struct FPickupItem {
	bool Visibility; // 0x00(0x01)
	bool NotEnoughSpace; // 0x01(0x01)
	bool SeperateAmmo; // 0x02(0x01)
	bool bNeedItem; // 0x03(0x01)
	bool bFullNeedItem; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FText DisplayName; // 0x08(0x18)
	int32_t Quantity; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString ItemMessage; // 0x28(0x10)
	struct TSoftObjectPtr<UPaperSprite> TexturePtr; // 0x38(0x28)
	enum class EItemType ItemType; // 0x60(0x01)
	enum class EItemRarity Rarity; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
	struct FText Desc; // 0x68(0x18)
	struct FText CombineTargetText; // 0x80(0x18)
};

// ScriptStruct BravoHotelGame.Action
// Size: 0x38 (Inherited: 0x00)
struct FAction {
	bool Visibility; // 0x00(0x01)
	bool State; // 0x01(0x01)
	bool Ladder; // 0x02(0x01)
	bool SpaceBar; // 0x03(0x01)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Message; // 0x08(0x10)
	struct FString SubMessage; // 0x18(0x10)
	struct FString BombingMessage; // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.RecipeTreeWidgetInfo
// Size: 0x30 (Inherited: 0x00)
struct FRecipeTreeWidgetInfo {
	struct UWidget* CurrentWidget; // 0x00(0x08)
	int32_t RepairWidgetInfoIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<int32_t> MaterialWidgetInfoIndex; // 0x10(0x10)
	struct TArray<struct UWidget*> TreeDecoWidgets; // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.SpawnedItemInfo
// Size: 0x24 (Inherited: 0x00)
struct FSpawnedItemInfo {
	struct FVector Loc; // 0x00(0x0c)
	struct FRotator Rot; // 0x0c(0x0c)
	struct FVector ForwardVector; // 0x18(0x0c)
};

// ScriptStruct BravoHotelGame.ResultSpawnItemInfo
// Size: 0x20 (Inherited: 0x00)
struct FResultSpawnItemInfo {
	int32_t SpawnBoxID; // 0x00(0x04)
	struct FName ItemId; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct ABravoHotelPickup* SpawnItem; // 0x10(0x08)
	int32_t ItemCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.SpawnItemsInBox
// Size: 0x18 (Inherited: 0x00)
struct FSpawnItemsInBox {
	struct FDataTableRowHandle Item; // 0x00(0x10)
	enum class EItemRarity Rarity; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BravoHotelGame.MustSpawnItemInfo
// Size: 0x08 (Inherited: 0x00)
struct FMustSpawnItemInfo {
	int32_t ItemId; // 0x00(0x04)
	int32_t ItemCount; // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.SpawnItemInfo
// Size: 0x08 (Inherited: 0x00)
struct FSpawnItemInfo {
	enum class EItemType ItemType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ItemProbability; // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.SpawnBoxList
// Size: 0x10 (Inherited: 0x00)
struct FSpawnBoxList {
	struct TArray<struct UBravoHotelItemSpawnBoxComponent*> List; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.StandardGroupInfo_UI
// Size: 0x20 (Inherited: 0x00)
struct FStandardGroupInfo_UI {
	struct FString StandardGroupName; // 0x00(0x10)
	struct FString StandardGroupKey; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.BuildingInfo_UI
// Size: 0x18 (Inherited: 0x00)
struct FBuildingInfo_UI {
	struct FVector2D BuildingPosition; // 0x00(0x08)
	struct FString BuildingName; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.BuildingData
// Size: 0xa8 (Inherited: 0x00)
struct FBuildingData {
	struct FVector BuildingPosition; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UUserWidget* SlotWidget; // 0x10(0x08)
	struct TArray<struct FItemDebugDetailInfo> SpawnInfos; // 0x18(0x10)
	struct TArray<struct FItemDebugDetailInfo> DivisionInfos; // 0x28(0x10)
	struct TArray<struct FItemDebugDetailInfo> RateAddInfos; // 0x38(0x10)
	struct TArray<struct FItemDebugDetailInfo> RateRemoveInfos; // 0x48(0x10)
	struct TMap<struct FString, struct FBuildingDebug> StandardGroupData; // 0x58(0x50)
};

// ScriptStruct BravoHotelGame.ItemRecipeTreeData
// Size: 0x38 (Inherited: 0x08)
struct FItemRecipeTreeData : FTableRowBase {
	struct FName CurrentRecipe; // 0x08(0x08)
	struct FName CurrentItem; // 0x10(0x08)
	int32_t Count; // 0x18(0x04)
	struct FName RepairRecipe; // 0x1c(0x08)
	char pad_24[0x14]; // 0x24(0x14)
};

// ScriptStruct BravoHotelGame.ItemRecipeData
// Size: 0x38 (Inherited: 0x08)
struct FItemRecipeData : FTableRowBase {
	struct FName ResultItem; // 0x08(0x08)
	bool RepairRecipe; // 0x10(0x01)
	bool TopRecipe; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	float CombineTime; // 0x14(0x04)
	struct TArray<struct FName> GroupRewardIDs; // 0x18(0x10)
	struct TArray<struct FItemRecipeMaterialElement> MaterialItems; // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.ItemRecipeMaterialElement
// Size: 0x18 (Inherited: 0x08)
struct FItemRecipeMaterialElement : FTableRowBase {
	struct FName MaterialItem; // 0x08(0x08)
	int32_t Count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelThrowingWeaponItemInfo
// Size: 0x530 (Inherited: 0x00)
struct FBravoHotelThrowingWeaponItemInfo {
	struct FInventoryItemInfo ItemInfo; // 0x00(0x98)
	struct FInventoryItemDetailInfo ItemDetailInfo; // 0x98(0x490)
	bool PrevItem; // 0x528(0x01)
	char pad_529[0x7]; // 0x529(0x07)
};

// ScriptStruct BravoHotelGame.ItemEffectData
// Size: 0x200 (Inherited: 0x08)
struct FItemEffectData : FTableRowBase {
	struct UParticleSystem* RootParticle; // 0x08(0x08)
	struct FVector RootParticleScale; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FItemEffectInfo OriginEffectInfo; // 0x20(0xa0)
	struct FItemEffectInfo WeakEffectInfo; // 0xc0(0xa0)
	struct UParticleSystem* ActivateParticle; // 0x160(0x08)
	struct UParticleSystem* DeactivateParticle; // 0x168(0x08)
	struct TSoftObjectPtr<UParticleSystem> MeshParticle; // 0x170(0x28)
	struct FVector MeshParticleScale; // 0x198(0x0c)
	char pad_1A4[0xc]; // 0x1a4(0x0c)
	struct FTransform MeshParticleTransform; // 0x1b0(0x30)
	struct FName MeshParticleAttachSocketName; // 0x1e0(0x08)
	struct TArray<struct FItemEffectSubParticleInfo> SubParticles; // 0x1e8(0x10)
	char pad_1F8[0x8]; // 0x1f8(0x08)
};

// ScriptStruct BravoHotelGame.ItemEffectSubParticleInfo
// Size: 0x70 (Inherited: 0x00)
struct FItemEffectSubParticleInfo {
	struct UParticleSystem* Particle; // 0x00(0x08)
	enum class EItemEffectSubParticleSpawnState SpawnType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TMap<struct FName, struct FLinearColor> ParticleColor; // 0x10(0x50)
	struct FVector Scale; // 0x60(0x0c)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct BravoHotelGame.ItemEffectInfo
// Size: 0xa0 (Inherited: 0x00)
struct FItemEffectInfo {
	struct TMap<struct FName, struct FLinearColor> RootParticleColor; // 0x00(0x50)
	struct TMap<struct FName, struct FLinearColor> StaticMeshColor; // 0x50(0x50)
};

// ScriptStruct BravoHotelGame.ItemAbilityData
// Size: 0x130 (Inherited: 0x08)
struct FItemAbilityData : FTableRowBase {
	struct FName WeaponId; // 0x08(0x08)
	enum class EWeaponType WeaponType; // 0x10(0x01)
	enum class EThrowingWeaponType ThrowingWeaponType; // 0x11(0x01)
	enum class EWeaponAttachmentType WeaponAttachmentType; // 0x12(0x01)
	enum class EWeaponAttachmentItem WeaponAttachmentItem; // 0x13(0x01)
	char pad_14[0x4]; // 0x14(0x04)
	struct FBravoHotelAbilityModifier Ability; // 0x18(0xa8)
	struct FBravoHotelAttachmentInfo AttachmentInfo; // 0xc0(0x48)
	struct TArray<struct FName> EquipedBuffName; // 0x108(0x10)
	struct TArray<struct FName> UsingBuffName; // 0x118(0x10)
	bool bMovableDuringUse; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
};

// ScriptStruct BravoHotelGame.ItemEquipData
// Size: 0x90 (Inherited: 0x08)
struct FItemEquipData : FTableRowBase {
	struct TSoftClassPtr<UObject> EquippableItemClass; // 0x08(0x28)
	struct FName MutableUniqueKey; // 0x30(0x08)
	char bUseEquippedStaticMesh : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TSoftObjectPtr<UStaticMesh> EquippedStaticMesh; // 0x40(0x28)
	struct TSoftObjectPtr<USkeletalMesh> EquippedSkeletalMesh; // 0x68(0x28)
};

// ScriptStruct BravoHotelGame.ItemPickUpData
// Size: 0xf0 (Inherited: 0x08)
struct FItemPickUpData : FTableRowBase {
	struct FName ItemEffectID; // 0x08(0x08)
	bool bOverridePickupScale; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FVector OverlapBoxExtent; // 0x14(0x0c)
	float TraceSphereRadius; // 0x20(0x04)
	struct FVector WorldStaticMeshLoc; // 0x24(0x0c)
	struct FRotator WorldStaticMeshRot; // 0x30(0x0c)
	struct FVector WorldStaticMeshScale; // 0x3c(0x0c)
	struct FVector WorldSkelMeshLoc; // 0x48(0x0c)
	struct FRotator WorldSkelMeshRot; // 0x54(0x0c)
	struct FVector WorldSkelMeshScale; // 0x60(0x0c)
	char bUseStaticMesh : 1; // 0x6c(0x01)
	char pad_6C_1 : 7; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	struct TSoftObjectPtr<UStaticMesh> WorldStaticMesh; // 0x70(0x28)
	struct TSoftObjectPtr<USkeletalMesh> WorldSkeletalMesh; // 0x98(0x28)
	float NetCullDistanceSquared; // 0xc0(0x04)
	float DrawDistance; // 0xc4(0x04)
	struct TSoftObjectPtr<UAkAudioEvent> AudioEvent; // 0xc8(0x28)
};

// ScriptStruct BravoHotelGame.InventoryItemInfoArray
// Size: 0x10 (Inherited: 0x00)
struct FInventoryItemInfoArray {
	struct TArray<struct FInventoryItemInfo> ItemInfos; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.DivisionItem
// Size: 0x18 (Inherited: 0x00)
struct FDivisionItem {
	bool DivisionComplete; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FSpawnItemResult> Items; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.KeepedItemInfo
// Size: 0xa8 (Inherited: 0x00)
struct FKeepedItemInfo {
	struct FInventoryItemInfo MainItemInfo; // 0x00(0x98)
	struct TArray<struct FInventoryItemInfo> AdditionalItemInfos; // 0x98(0x10)
};

// ScriptStruct BravoHotelGame.ItemUse
// Size: 0x20 (Inherited: 0x00)
struct FItemUse {
	bool Visibility; // 0x00(0x01)
	bool SubInfo; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float Percent; // 0x04(0x04)
	float RemainTime; // 0x08(0x04)
	struct FColor Color; // 0x0c(0x04)
	struct FString Message; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.PopupWidgetInfo
// Size: 0x10 (Inherited: 0x00)
struct FPopupWidgetInfo {
	struct UUserWidget* Widget; // 0x00(0x08)
	bool IsGmaeAndUIMode; // 0x08(0x01)
	bool ShowMouseCursorCapture; // 0x09(0x01)
	bool bOnlyRemoveByObject; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
};

// ScriptStruct BravoHotelGame.Coh_Response_MaterialList
// Size: 0x10 (Inherited: 0x00)
struct FCoh_Response_MaterialList {
	struct TArray<struct FResponse_MaterialList_Data> material_list; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Coh_Response_Weapon_List
// Size: 0x10 (Inherited: 0x00)
struct FCoh_Response_Weapon_List {
	struct TArray<struct FResponse_Weapon_List_Data> weapon_list; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Coh_InviteUser
// Size: 0x20 (Inherited: 0x00)
struct FCoh_InviteUser {
	struct FString Name; // 0x00(0x10)
	struct FString UID; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.Coh_Error
// Size: 0x18 (Inherited: 0x00)
struct FCoh_Error {
	int32_t Code; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Desc; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.Coh_PartyInfo
// Size: 0x38 (Inherited: 0x00)
struct FCoh_PartyInfo {
	struct FString PartyID; // 0x00(0x10)
	struct FString LeaderUID; // 0x10(0x10)
	bool IsInvite; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FCoh_PartyMemberInfo> Members; // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.Coh_PartyMemberInfo
// Size: 0x90 (Inherited: 0x00)
struct FCoh_PartyMemberInfo {
	struct FString UID; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	bool IsReady; // 0x20(0x01)
	bool IsVoiceChat; // 0x21(0x01)
	bool IsLeader; // 0x22(0x01)
	bool IsOnline; // 0x23(0x01)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString clientStatus; // 0x28(0x10)
	int32_t SeasonTierID; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString AccessRegion; // 0x40(0x10)
	int32_t Ping; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString steamID; // 0x58(0x10)
	struct FVector2D Pos; // 0x68(0x08)
	int32_t ClassDataIndex; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FString ClassName; // 0x78(0x10)
	int32_t ClassLevel; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct BravoHotelGame.Coh_LocalPlayerInfo
// Size: 0x20 (Inherited: 0x00)
struct FCoh_LocalPlayerInfo {
	struct FString UID; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.CoherentSavedSettings
// Size: 0x18 (Inherited: 0x00)
struct FCoherentSavedSettings {
	struct FString UserID; // 0x00(0x10)
	bool bArmory; // 0x10(0x01)
	bool bInventory; // 0x11(0x01)
	bool bSupplybox; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
};

// ScriptStruct BravoHotelGame.LogInfo
// Size: 0x210 (Inherited: 0x00)
struct FLogInfo {
	char pad_0[0x210]; // 0x00(0x210)
};

// ScriptStruct BravoHotelGame.EventLogBase
// Size: 0x08 (Inherited: 0x00)
struct FEventLogBase {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct BravoHotelGame.SupplyInfoEvent
// Size: 0x10 (Inherited: 0x08)
struct FSupplyInfoEvent : FEventLogBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.RedZoneInfoEvent
// Size: 0x10 (Inherited: 0x08)
struct FRedZoneInfoEvent : FEventLogBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.BlueZoneInfoEvent
// Size: 0x10 (Inherited: 0x08)
struct FBlueZoneInfoEvent : FEventLogBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.GameCycleInfoEvent
// Size: 0x10 (Inherited: 0x08)
struct FGameCycleInfoEvent : FEventLogBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.GameEndEvent
// Size: 0x10 (Inherited: 0x08)
struct FGameEndEvent : FEventLogBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.DestructObjectEvent
// Size: 0x10 (Inherited: 0x08)
struct FDestructObjectEvent : FEventLogBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.VechicleInfoEvent
// Size: 0x10 (Inherited: 0x08)
struct FVechicleInfoEvent : FEventLogBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.CharacterCycleInfoEvent
// Size: 0x10 (Inherited: 0x08)
struct FCharacterCycleInfoEvent : FEventLogBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.CharacterDeathEvent
// Size: 0x10 (Inherited: 0x08)
struct FCharacterDeathEvent : FEventLogBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.CharacterRecorverEvent
// Size: 0x10 (Inherited: 0x08)
struct FCharacterRecorverEvent : FEventLogBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.CharacterKnockDownEvent
// Size: 0x10 (Inherited: 0x08)
struct FCharacterKnockDownEvent : FEventLogBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.CharacterHitEvent
// Size: 0x10 (Inherited: 0x08)
struct FCharacterHitEvent : FEventLogBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.CharacterAttackEvent
// Size: 0x10 (Inherited: 0x08)
struct FCharacterAttackEvent : FEventLogBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.CharacterBehaviorEvent
// Size: 0x10 (Inherited: 0x08)
struct FCharacterBehaviorEvent : FEventLogBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.CharacterMoveEvent
// Size: 0x10 (Inherited: 0x08)
struct FCharacterMoveEvent : FEventLogBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.AttachItemStateEvent
// Size: 0x10 (Inherited: 0x08)
struct FAttachItemStateEvent : FEventLogBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.EquipItemStateEvent
// Size: 0x10 (Inherited: 0x08)
struct FEquipItemStateEvent : FEventLogBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.UsingItemEvent
// Size: 0x20 (Inherited: 0x08)
struct FUsingItemEvent : FEventLogBase {
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct BravoHotelGame.GainItemEvent
// Size: 0x20 (Inherited: 0x08)
struct FGainItemEvent : FEventLogBase {
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct BravoHotelGame.SkyDiveEvent
// Size: 0x10 (Inherited: 0x08)
struct FSkyDiveEvent : FEventLogBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.JoinGameFailEvent
// Size: 0x10 (Inherited: 0x08)
struct FJoinGameFailEvent : FEventLogBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.JoinGameEvent
// Size: 0x10 (Inherited: 0x08)
struct FJoinGameEvent : FEventLogBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.MatchJoinFailEvent
// Size: 0x10 (Inherited: 0x08)
struct FMatchJoinFailEvent : FEventLogBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.MatchJoinEvent
// Size: 0x10 (Inherited: 0x08)
struct FMatchJoinEvent : FEventLogBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.PartyInfoEvent
// Size: 0x10 (Inherited: 0x08)
struct FPartyInfoEvent : FEventLogBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.CreateCharacterEvent
// Size: 0x10 (Inherited: 0x08)
struct FCreateCharacterEvent : FEventLogBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.AccountLogOutEvent
// Size: 0x10 (Inherited: 0x08)
struct FAccountLogOutEvent : FEventLogBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.AccountLogInEvent
// Size: 0x10 (Inherited: 0x08)
struct FAccountLogInEvent : FEventLogBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.AccountCreateEvent
// Size: 0x10 (Inherited: 0x08)
struct FAccountCreateEvent : FEventLogBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.ExitEvent
// Size: 0x10 (Inherited: 0x08)
struct FExitEvent : FEventLogBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.FpsEvent
// Size: 0x10 (Inherited: 0x08)
struct FFpsEvent : FEventLogBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.GameOptionEvent
// Size: 0x10 (Inherited: 0x08)
struct FGameOptionEvent : FEventLogBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.PcInfoEvent
// Size: 0x10 (Inherited: 0x08)
struct FPcInfoEvent : FEventLogBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.TempEvent
// Size: 0x10 (Inherited: 0x08)
struct FTempEvent : FEventLogBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.ReplayCircleInfo
// Size: 0x10 (Inherited: 0x00)
struct FReplayCircleInfo {
	bool IsReplayCircle; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D ReplayCirclePos; // 0x04(0x08)
	float ReplayCircleRadius; // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.MapCompBlueZoneInfo
// Size: 0x2c (Inherited: 0x00)
struct FMapCompBlueZoneInfo {
	bool IsBlueZone; // 0x00(0x01)
	bool IsVisibleBlueZone; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector2D CurrentSurvivalCirclePos; // 0x04(0x08)
	float CurrentSurvivalCircleRadius; // 0x0c(0x04)
	bool IsVisibleTargetCircle; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FVector2D TargetSurvivalCirclePos; // 0x14(0x08)
	float TargetSurvivalCircleRadius; // 0x1c(0x04)
	struct FVector2D OuterCirclePos; // 0x20(0x08)
	float OuterCircleRadius; // 0x28(0x04)
};

// ScriptStruct BravoHotelGame.PersonalSupplyBoxInfo
// Size: 0x10 (Inherited: 0x00)
struct FPersonalSupplyBoxInfo {
	bool IsSpawned; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D Position; // 0x04(0x08)
	enum class EPersonalSupplyBoxPingType PingType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct BravoHotelGame.MapPlayerInfo
// Size: 0x58 (Inherited: 0x00)
struct FMapPlayerInfo {
	struct ABravoHotelPlayerState* PlayerState; // 0x00(0x08)
	struct FVector2D Position; // 0x08(0x08)
	float Angle; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UBravoHotelPlayerIconWidget* PlayerIconWidget; // 0x18(0x08)
	bool HasMarker; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FVector2D MarkerPosition; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UBravoHotelPlayerMarkerWidget* PlayerMarkerWidget; // 0x30(0x08)
	bool HasRoutePing; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct FVector2D> RoutePositions; // 0x40(0x10)
	struct UBravoHotelRoutePingWidget* RoutePingWidget; // 0x50(0x08)
};

// ScriptStruct BravoHotelGame.MuzzleEffect
// Size: 0x50 (Inherited: 0x00)
struct FMuzzleEffect {
	struct UParticleSystem* MuzzleFlash_3P_SingleFire; // 0x00(0x08)
	struct UParticleSystem* MuzzleSmoke_3P_SingleFire; // 0x08(0x08)
	struct UParticleSystem* MuzzleFlash_3P_MultiFire; // 0x10(0x08)
	struct UParticleSystem* MuzzleSmoke_3P_MultiFire; // 0x18(0x08)
	struct UParticleSystem* MuzzleFlash_1P_SingleFire; // 0x20(0x08)
	struct UParticleSystem* MuzzleSmoke_1P_SingleFire; // 0x28(0x08)
	struct UParticleSystem* MuzzleFlash_1P_MultiFire; // 0x30(0x08)
	struct UParticleSystem* MuzzleSmoke_1P_MultiFire; // 0x38(0x08)
	struct UParticleSystem* MuzzleFlash_1P_HighMagnificationSight; // 0x40(0x08)
	struct UParticleSystem* MuzzleSmoke_1P_HighMagnificationSight; // 0x48(0x08)
};

// ScriptStruct BravoHotelGame.RepNewbieData
// Size: 0x20 (Inherited: 0x00)
struct FRepNewbieData {
	bool bIsBeginner; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t DefeatLevel; // 0x04(0x04)
	struct FString Training; // 0x08(0x10)
	int32_t LoserScore; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.ReplayFireEvent
// Size: 0xb8 (Inherited: 0x00)
struct FReplayFireEvent {
	struct FString NetGUID; // 0x00(0x10)
	struct FRepProjectileInfo ProjectileInfo; // 0x10(0xa8)
};

// ScriptStruct BravoHotelGame.RepCharacterAppearanceInfo
// Size: 0x14 (Inherited: 0x00)
struct FRepCharacterAppearanceInfo {
	int32_t FaceID; // 0x00(0x04)
	int32_t FaceColorID; // 0x04(0x04)
	int32_t HairID; // 0x08(0x04)
	int32_t HairColorID; // 0x0c(0x04)
	int8_t gender; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct BravoHotelGame.RepSimulatedDeathInfo
// Size: 0x30 (Inherited: 0x00)
struct FRepSimulatedDeathInfo {
	char bRagdollStartForce : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector_NetQuantize RagdollStartForce; // 0x04(0x0c)
	struct FVector_NetQuantizeNormal DeathRotation; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UAnimMontage* Anim1P; // 0x20(0x08)
	struct UAnimMontage* Anim3P; // 0x28(0x08)
};

// ScriptStruct BravoHotelGame.RepDestructComponentInfo
// Size: 0x30 (Inherited: 0x00)
struct FRepDestructComponentInfo {
	float Damage; // 0x00(0x04)
	struct FVector_NetQuantizeNormal Direction; // 0x04(0x0c)
	struct FVector_NetQuantize Location; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct AController* Instigator; // 0x20(0x08)
	int16_t InstanceIndex; // 0x28(0x02)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct BravoHotelGame.PingInfo
// Size: 0x18 (Inherited: 0x00)
struct FPingInfo {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct BravoHotelGame.BaseProtocolLog
// Size: 0x30 (Inherited: 0x00)
struct FBaseProtocolLog {
	struct FString UserID; // 0x00(0x10)
	struct FString NickName; // 0x10(0x10)
	char pad_20[0x10]; // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.ReceiveCoherentLog
// Size: 0x30 (Inherited: 0x30)
struct FReceiveCoherentLog : FBaseProtocolLog {
};

// ScriptStruct BravoHotelGame.ReceiveDediLog
// Size: 0x30 (Inherited: 0x30)
struct FReceiveDediLog : FBaseProtocolLog {
};

// ScriptStruct BravoHotelGame.ReceiveHttpLog
// Size: 0x48 (Inherited: 0x30)
struct FReceiveHttpLog : FBaseProtocolLog {
	struct FString URL; // 0x30(0x10)
	int32_t responsecode; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct BravoHotelGame.SendHttpLog
// Size: 0x40 (Inherited: 0x30)
struct FSendHttpLog : FBaseProtocolLog {
	struct FString route; // 0x30(0x10)
};

// ScriptStruct BravoHotelGame.ReceiveWebSocketLog
// Size: 0x30 (Inherited: 0x30)
struct FReceiveWebSocketLog : FBaseProtocolLog {
};

// ScriptStruct BravoHotelGame.SendWebSocketLog
// Size: 0x30 (Inherited: 0x30)
struct FSendWebSocketLog : FBaseProtocolLog {
};

// ScriptStruct BravoHotelGame.NetworkWebSocket
// Size: 0x20 (Inherited: 0x00)
struct FNetworkWebSocket {
	struct UBravoHotelWebSocket* WebSocket; // 0x00(0x08)
	struct FString ip; // 0x08(0x10)
	int32_t Port; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.NetworkSocket
// Size: 0x10 (Inherited: 0x00)
struct FNetworkSocket {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.SyncInfo
// Size: 0x04 (Inherited: 0x00)
struct FSyncInfo {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientOutGameCommonErrorData
// Size: 0x28 (Inherited: 0x00)
struct FAnalysisClientOutGameCommonErrorData {
	struct FString module_name; // 0x00(0x10)
	int32_t error_code; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString error_message; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisClientOutGameFirstClientRunData
// Size: 0x90 (Inherited: 0x00)
struct FAnalysisClientOutGameFirstClientRunData {
	struct FString progress_name; // 0x00(0x10)
	int32_t tutorial_progress; // 0x10(0x04)
	int32_t tutorial_movie_skiptime; // 0x14(0x04)
	struct FOutGamePCData pc_data; // 0x18(0x78)
};

// ScriptStruct BravoHotelGame.OutGamePCData
// Size: 0x78 (Inherited: 0x00)
struct FOutGamePCData {
	struct FString os_name; // 0x00(0x10)
	struct FString cpu_name; // 0x10(0x10)
	struct FString gpu_name; // 0x20(0x10)
	struct FString mac_address; // 0x30(0x10)
	struct FString ip_address; // 0x40(0x10)
	struct FString install_storage_type; // 0x50(0x10)
	float game_view_width; // 0x60(0x04)
	float game_view_height; // 0x64(0x04)
	struct FString Client_version; // 0x68(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisClientOutGameTutorialMovieSkipData
// Size: 0x04 (Inherited: 0x00)
struct FAnalysisClientOutGameTutorialMovieSkipData {
	int32_t skip_time; // 0x00(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientOutGameTutorialPlayCompleteData
// Size: 0x04 (Inherited: 0x00)
struct FAnalysisClientOutGameTutorialPlayCompleteData {
	int32_t play_time; // 0x00(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientOutGameTutorialPlayExitData
// Size: 0x08 (Inherited: 0x00)
struct FAnalysisClientOutGameTutorialPlayExitData {
	int32_t play_time; // 0x00(0x04)
	int32_t progress; // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientOutGameExitData
// Size: 0x04 (Inherited: 0x00)
struct FAnalysisClientOutGameExitData {
	int32_t scene_type; // 0x00(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientOutGameLobbyUIActionData
// Size: 0x08 (Inherited: 0x00)
struct FAnalysisClientOutGameLobbyUIActionData {
	int32_t before_scene_type; // 0x00(0x04)
	int32_t after_scene_type; // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientOutGameLoginSucessData
// Size: 0x78 (Inherited: 0x00)
struct FAnalysisClientOutGameLoginSucessData {
	struct FOutGamePCData pc_data; // 0x00(0x78)
};

// ScriptStruct BravoHotelGame.AnalysisClientOutGameLoginForbidData
// Size: 0x88 (Inherited: 0x00)
struct FAnalysisClientOutGameLoginForbidData {
	struct FString forbid_reason; // 0x00(0x10)
	struct FOutGamePCData pc_data; // 0x10(0x78)
};

// ScriptStruct BravoHotelGame.AnalysisClientOutGameMatchingCancelData
// Size: 0x28 (Inherited: 0x00)
struct FAnalysisClientOutGameMatchingCancelData {
	int32_t GameViewType; // 0x00(0x04)
	int32_t BattleMode; // 0x04(0x04)
	struct FString matching_start_time; // 0x08(0x10)
	struct FString matching_cancel_time; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisClientOutGameMatchingSuccessData
// Size: 0x48 (Inherited: 0x00)
struct FAnalysisClientOutGameMatchingSuccessData {
	struct FString game_server_id; // 0x00(0x10)
	struct FString match_making_tag; // 0x10(0x10)
	int32_t GameViewType; // 0x20(0x04)
	int32_t BattleMode; // 0x24(0x04)
	struct FString matching_start_time; // 0x28(0x10)
	struct FString matching_success_time; // 0x38(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisDSDisconnectData
// Size: 0x38 (Inherited: 0x00)
struct FAnalysisDSDisconnectData {
	struct FString Error; // 0x00(0x10)
	struct FString reason; // 0x10(0x10)
	int32_t connected_duration; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString Version; // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisDSConnectFailData
// Size: 0x50 (Inherited: 0x00)
struct FAnalysisDSConnectFailData {
	struct FString URL; // 0x00(0x10)
	enum class EDSConnectionType Type; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString Error; // 0x18(0x10)
	struct FString reason; // 0x28(0x10)
	int32_t retry; // 0x38(0x04)
	int32_t connecting_fail_time; // 0x3c(0x04)
	struct FString Version; // 0x40(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisDSConnectSuccessData
// Size: 0x30 (Inherited: 0x00)
struct FAnalysisDSConnectSuccessData {
	struct FString URL; // 0x00(0x10)
	enum class EDSConnectionType Type; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t retry; // 0x14(0x04)
	int32_t connecting_success_time; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString Version; // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisClientOutGameData
// Size: 0x48 (Inherited: 0x00)
struct FAnalysisClientOutGameData {
	enum class EClientOutGameContentsType contentType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Base; // 0x08(0x10)
	struct FString Msg; // 0x18(0x10)
	struct FString nowDate; // 0x28(0x10)
	struct FString ApiPhase; // 0x38(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisClientOutGameDataHead
// Size: 0x30 (Inherited: 0x00)
struct FAnalysisClientOutGameDataHead {
	int32_t DateTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString UserID; // 0x08(0x10)
	struct FString NickName; // 0x18(0x10)
	int32_t Level; // 0x28(0x04)
	int32_t exp; // 0x2c(0x04)
};

// ScriptStruct BravoHotelGame.DataOutGameEventBase
// Size: 0x58 (Inherited: 0x00)
struct FDataOutGameEventBase {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct BravoHotelGame.DataEventClientOutGameFirstClientRun
// Size: 0x68 (Inherited: 0x58)
struct FDataEventClientOutGameFirstClientRun : FDataOutGameEventBase {
	char pad_58[0x10]; // 0x58(0x10)
};

// ScriptStruct BravoHotelGame.DataEventClientOutGameTutorial
// Size: 0x68 (Inherited: 0x58)
struct FDataEventClientOutGameTutorial : FDataOutGameEventBase {
	char pad_58[0x10]; // 0x58(0x10)
};

// ScriptStruct BravoHotelGame.DataEventClientOutGameCommonError
// Size: 0x80 (Inherited: 0x58)
struct FDataEventClientOutGameCommonError : FDataOutGameEventBase {
	char pad_58[0x28]; // 0x58(0x28)
};

// ScriptStruct BravoHotelGame.DataEventClientOutGameExit
// Size: 0x60 (Inherited: 0x58)
struct FDataEventClientOutGameExit : FDataOutGameEventBase {
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct BravoHotelGame.DataEventClientOutGameAction
// Size: 0x68 (Inherited: 0x58)
struct FDataEventClientOutGameAction : FDataOutGameEventBase {
	char pad_58[0x10]; // 0x58(0x10)
};

// ScriptStruct BravoHotelGame.DataEventClientOutGameLogin
// Size: 0x70 (Inherited: 0x58)
struct FDataEventClientOutGameLogin : FDataOutGameEventBase {
	char pad_58[0x18]; // 0x58(0x18)
};

// ScriptStruct BravoHotelGame.DataEventClientOutGameMatching
// Size: 0x90 (Inherited: 0x58)
struct FDataEventClientOutGameMatching : FDataOutGameEventBase {
	char pad_58[0x38]; // 0x58(0x38)
};

// ScriptStruct BravoHotelGame.OutGameEmptyData
// Size: 0x01 (Inherited: 0x00)
struct FOutGameEmptyData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.OutGameAccountData
// Size: 0x08 (Inherited: 0x00)
struct FOutGameAccountData {
	int32_t Level; // 0x00(0x04)
	int32_t exp; // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.TimedCameraEffectData
// Size: 0x40 (Inherited: 0x00)
struct FTimedCameraEffectData {
	char pad_0[0x8]; // 0x00(0x08)
	struct UCameraComponent* TargetCamera_TPP; // 0x08(0x08)
	struct UCameraComponent* TargetCamera_FPP; // 0x10(0x08)
	struct UParticleSystemComponent* SpawnedParticle_TPP; // 0x18(0x08)
	struct UParticleSystemComponent* SpawnedParticle_FPP; // 0x20(0x08)
	char pad_28[0x18]; // 0x28(0x18)
};

// ScriptStruct BravoHotelGame.TimedCameraPostProcessData
// Size: 0x28 (Inherited: 0x00)
struct FTimedCameraPostProcessData {
	char pad_0[0x18]; // 0x00(0x18)
	struct UCameraPostProcessPreset* CameraPostProcess; // 0x18(0x08)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct BravoHotelGame.BuffSlot
// Size: 0x10 (Inherited: 0x00)
struct FBuffSlot {
	struct TArray<struct FBravoHotelBuffUIInfo> UIBuff; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.MyInfo
// Size: 0x38 (Inherited: 0x00)
struct FMyInfo {
	int32_t CurrentAmmo; // 0x00(0x04)
	int32_t CapacityAmmo; // 0x04(0x04)
	int32_t TotalAmmo; // 0x08(0x04)
	enum class EWeaponFireMode Mode; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t CurrentEnergy; // 0x10(0x04)
	int32_t MaxEnergy; // 0x14(0x04)
	int32_t CurrentHealth; // 0x18(0x04)
	int32_t MaxHealth; // 0x1c(0x04)
	int32_t ShortTimeHealth; // 0x20(0x04)
	int32_t TargetHealth; // 0x24(0x04)
	float BackpackPercent; // 0x28(0x04)
	bool bIsFirstPerson; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	int32_t Stance; // 0x30(0x04)
	bool bIsHeadbanging; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct BravoHotelGame.WeaponWidgetInfo
// Size: 0xa8 (Inherited: 0x00)
struct FWeaponWidgetInfo {
	bool IsEquipped; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t SlotIndex; // 0x04(0x04)
	struct FText Name; // 0x08(0x18)
	enum class EItemRarity WeaponLevel; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TSoftObjectPtr<UPaperSprite> Texture; // 0x28(0x28)
	struct FString AmmoName; // 0x50(0x10)
	int32_t Damage; // 0x60(0x04)
	int32_t AdditionalDamage; // 0x64(0x04)
	int32_t BulletsPerShot; // 0x68(0x04)
	enum class EWeaponFireMode Mode; // 0x6c(0x01)
	bool IsFireMode; // 0x6d(0x01)
	char pad_6E[0x2]; // 0x6e(0x02)
	struct FString CurrentAmmo; // 0x70(0x10)
	struct FString CapacityAmmo; // 0x80(0x10)
	struct FString TotalAmmo; // 0x90(0x10)
	enum class ELoadingType LoadingType; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// ScriptStruct BravoHotelGame.ActorPoolInfo
// Size: 0x30 (Inherited: 0x00)
struct FActorPoolInfo {
	struct UObject* ActorClass; // 0x00(0x08)
	struct TArray<struct AActor*> PoolingActors; // 0x08(0x10)
	struct TArray<struct AActor*> ActiveActors; // 0x18(0x10)
	struct UWorld* CurrentWorld; // 0x28(0x08)
};

// ScriptStruct BravoHotelGame.WaitingEvent
// Size: 0x08 (Inherited: 0x00)
struct FWaitingEvent {
	float DelayTime; // 0x00(0x04)
	int32_t TrialCount; // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.BlindCharacter
// Size: 0x18 (Inherited: 0x00)
struct FBlindCharacter {
	struct ABravoHotelCharacter* Character; // 0x00(0x08)
	struct FVector ImpactNormal; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.UpdateAchievementData
// Size: 0x18 (Inherited: 0x00)
struct FUpdateAchievementData {
	struct FString PlayerUID; // 0x00(0x10)
	int32_t AchievementID; // 0x10(0x04)
	int32_t AddValue; // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.AchievementInfo
// Size: 0x10 (Inherited: 0x00)
struct FAchievementInfo {
	int32_t ID; // 0x00(0x04)
	enum class EAchievementState State; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32_t CurrentValue; // 0x08(0x04)
	int32_t GoalValue; // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.UpdateQuestData
// Size: 0x18 (Inherited: 0x00)
struct FUpdateQuestData {
	struct FString PlayerUID; // 0x00(0x10)
	int32_t QuestID; // 0x10(0x04)
	int32_t AddValue; // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.AchievementData
// Size: 0x50 (Inherited: 0x08)
struct FAchievementData : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	enum class EAchievementType Type; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TArray<int32_t> GoalValues; // 0x10(0x10)
	struct TArray<int32_t> Steps; // 0x20(0x10)
	int32_t Point; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FText Description; // 0x38(0x18)
};

// ScriptStruct BravoHotelGame.ConversationData
// Size: 0x18 (Inherited: 0x08)
struct FConversationData : FTableRowBase {
	struct TArray<struct FSentenceData> SentenceData; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.BackupSlotData
// Size: 0x10 (Inherited: 0x00)
struct FBackupSlotData {
	struct UBravoHotelSettingSlotWidget* Slot; // 0x00(0x08)
	float OldValue; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.SettingInfoList
// Size: 0x10 (Inherited: 0x00)
struct FSettingInfoList {
	struct TArray<struct FSettingInfoData> List; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.SettingInfoData
// Size: 0x90 (Inherited: 0x00)
struct FSettingInfoData {
	struct FName TableKey; // 0x00(0x08)
	struct FSettingInfo Data; // 0x08(0x88)
};

// ScriptStruct BravoHotelGame.ChangeKeySlotInfo
// Size: 0x10 (Inherited: 0x00)
struct FChangeKeySlotInfo {
	bool IsChangedMainKey; // 0x00(0x01)
	bool IsChangedSubKey; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct UBravoHotelSettingSlotWidget* Slot; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.SignificanceCriteriaSetup
// Size: 0x28 (Inherited: 0x00)
struct FSignificanceCriteriaSetup {
	bool bCheckVisibility; // 0x00(0x01)
	bool bUseAsScreenSize; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<float> Criterias; // 0x08(0x10)
	struct TArray<float> CriteriaWhenVisible; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelLoserScore
// Size: 0x30 (Inherited: 0x08)
struct FBravoHotelLoserScore : FTableRowBase {
	int32_t Level; // 0x08(0x04)
	float RankPoint; // 0x0c(0x04)
	float DefeatMaxPoint; // 0x10(0x04)
	float ScoreOnDefeat; // 0x14(0x04)
	float ScoreOnZeroKill; // 0x18(0x04)
	float ScoreOnZeroAssist; // 0x1c(0x04)
	float ScoreOnWin; // 0x20(0x04)
	float ScorePerKill; // 0x24(0x04)
	float ScorePerAssist; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct BravoHotelGame.PlayMovieInfo
// Size: 0x10 (Inherited: 0x00)
struct FPlayMovieInfo {
	struct TArray<struct UAkAudioEvent*> SoundList; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.VoiceTalkState
// Size: 0x20 (Inherited: 0x00)
struct FVoiceTalkState {
	struct FString UserName; // 0x00(0x10)
	int32_t Volume; // 0x10(0x04)
	bool bIsMute; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32_t TeamPlayerIndex; // 0x18(0x04)
	int32_t Ping; // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.OnlineSubsystemFriends
// Size: 0x30 (Inherited: 0x00)
struct FOnlineSubsystemFriends {
	struct FString NickName; // 0x00(0x10)
	struct FString PlayerAvatarIcon; // 0x10(0x10)
	struct TArray<struct FOnlineSubsystemFriendInfo> Friends; // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.OnlineSubsystemFriendInfo
// Size: 0x48 (Inherited: 0x00)
struct FOnlineSubsystemFriendInfo {
	struct FString PlayerId; // 0x00(0x10)
	struct FString NickName; // 0x10(0x10)
	struct FString AvatarIcon; // 0x20(0x10)
	bool IsOnline; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString ServicePlatform; // 0x38(0x10)
};

// ScriptStruct BravoHotelGame.ColorInfo
// Size: 0x28 (Inherited: 0x08)
struct FColorInfo : FTableRowBase {
	struct FLinearColor ColorInfo; // 0x08(0x10)
	struct FString Desc; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.ReplayCastingEvent
// Size: 0x18 (Inherited: 0x00)
struct FReplayCastingEvent {
	struct FString NetGUID; // 0x00(0x10)
	float Time; // 0x10(0x04)
	int32_t ReplicateIndex; // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.CQRInfo
// Size: 0x20 (Inherited: 0x08)
struct FCQRInfo : FTableRowBase {
	struct FText PlayerCountText; // 0x08(0x18)
};

// ScriptStruct BravoHotelGame.AccountExpData
// Size: 0x58 (Inherited: 0x08)
struct FAccountExpData : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DisplayName; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	int32_t Level; // 0x40(0x04)
	int32_t MaxLevel; // 0x44(0x04)
	int32_t LevelUPExp; // 0x48(0x04)
	int32_t NextLevelExp; // 0x4c(0x04)
	int32_t NextLevel; // 0x50(0x04)
	int32_t GroupRewardID; // 0x54(0x04)
};

// ScriptStruct BravoHotelGame.SelectLoadingScreenData
// Size: 0x40 (Inherited: 0x00)
struct FSelectLoadingScreenData {
	enum class ELoadingScreenType LoadingType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UTexture2D* Image; // 0x08(0x08)
	struct FText Title; // 0x10(0x18)
	struct FText Desc; // 0x28(0x18)
};

// ScriptStruct BravoHotelGame.LoadingScreenData
// Size: 0x40 (Inherited: 0x08)
struct FLoadingScreenData : FTableRowBase {
	enum class ELoadingScreenType LoadingType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct TSoftObjectPtr<UTexture2D>> ImageList; // 0x10(0x10)
	struct TArray<struct FText> TitleList; // 0x20(0x10)
	struct TArray<struct FText> DescList; // 0x30(0x10)
};

// ScriptStruct BravoHotelGame.KickData
// Size: 0x50 (Inherited: 0x08)
struct FKickData : FTableRowBase {
	struct FText Title; // 0x08(0x18)
	struct FText Desc; // 0x20(0x18)
	struct FText AdminDesc; // 0x38(0x18)
};

// ScriptStruct BravoHotelGame.NoticeData
// Size: 0x30 (Inherited: 0x08)
struct FNoticeData : FTableRowBase {
	struct FText Notice_String; // 0x08(0x18)
	struct FString AdminDesc; // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.MailMessage
// Size: 0x130 (Inherited: 0x08)
struct FMailMessage : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	int32_t Name; // 0x0c(0x04)
	struct FText DisplayName; // 0x10(0x18)
	struct FText DisplayDesc; // 0x28(0x18)
	enum class ECommunicatorType DefaultSender; // 0x40(0x01)
	enum class ECommunicatorType DefaultReceiver; // 0x41(0x01)
	enum class EMailMsgType Type; // 0x42(0x01)
	enum class EMailMsgSaveOption SaveOption; // 0x43(0x01)
	enum class EMailMsgTag Tag; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FText TagString; // 0x48(0x18)
	enum class EMailMsgTag Tag_Additional; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FText Tag_AdditionalString; // 0x68(0x18)
	bool CustomMessage; // 0x80(0x01)
	bool Attached_Items; // 0x81(0x01)
	char pad_82[0x2]; // 0x82(0x02)
	int32_t LifeTime; // 0x84(0x04)
	int32_t LifeTime_AfterRead; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FText TitleTemplate; // 0x90(0x18)
	struct FText TitleTemplate_Desc; // 0xa8(0x18)
	struct FString TitleTemplate_DataName; // 0xc0(0x10)
	struct FString TitleTemplate_DataField; // 0xd0(0x10)
	struct FText MessageTemplate; // 0xe0(0x18)
	struct FText MessageTemplate_Desc; // 0xf8(0x18)
	struct FString MessageTemplate_DataName; // 0x110(0x10)
	struct FString MessageTemplate_DataField; // 0x120(0x10)
};

// ScriptStruct BravoHotelGame.RequestMessage
// Size: 0x28 (Inherited: 0x08)
struct FRequestMessage : FTableRowBase {
	struct FText RequestMessage; // 0x08(0x18)
	bool IsAmmoRequest; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct BravoHotelGame.CustomMatchInfo
// Size: 0x188 (Inherited: 0x00)
struct FCustomMatchInfo {
	struct FBravoHotelPlayZoneData PlayZoneBaseData; // 0x00(0x188)
};

// ScriptStruct BravoHotelGame.MaterialItemDistanceInfo
// Size: 0x10 (Inherited: 0x00)
struct FMaterialItemDistanceInfo {
	float Distance; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct ABravoHotelPickup* MaterialItem; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.ItemAmountInfo
// Size: 0x10 (Inherited: 0x08)
struct FItemAmountInfo : FTableRowBase {
	int32_t Amount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.AmmoSpawnAmountInfo
// Size: 0x10 (Inherited: 0x08)
struct FAmmoSpawnAmountInfo : FTableRowBase {
	int32_t Amount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.SimpleStringData
// Size: 0x18 (Inherited: 0x08)
struct FSimpleStringData : FTableRowBase {
	struct FString MainString; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.BlockData
// Size: 0x38 (Inherited: 0x08)
struct FBlockData : FTableRowBase {
	int32_t Index; // 0x08(0x04)
	enum class EBlockType Type; // 0x0c(0x01)
	bool Period; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct FText Desc; // 0x10(0x18)
	struct FString Adm_Desc; // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.NoticeTextData
// Size: 0x28 (Inherited: 0x08)
struct FNoticeTextData : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText MainText; // 0x10(0x18)
};

// ScriptStruct BravoHotelGame.ReplayReportUserDataInfo
// Size: 0x70 (Inherited: 0x00)
struct FReplayReportUserDataInfo {
	struct FReplayReportVictimInfo VictimInfo; // 0x00(0x30)
	struct FReplayReportSuspectInfo SuspectInfo; // 0x30(0x40)
};

// ScriptStruct BravoHotelGame.ReplayReportSuspectInfo
// Size: 0x40 (Inherited: 0x00)
struct FReplayReportSuspectInfo {
	struct FString SuspectNickName; // 0x00(0x10)
	struct FString SuspectIpAddress; // 0x10(0x10)
	struct FString MaxItemID; // 0x20(0x10)
	int32_t Distance; // 0x30(0x04)
	int32_t MaxDistance; // 0x34(0x04)
	int32_t DamageCount; // 0x38(0x04)
	int32_t HeadShotDamageCount; // 0x3c(0x04)
};

// ScriptStruct BravoHotelGame.ReplayReportVictimInfo
// Size: 0x30 (Inherited: 0x00)
struct FReplayReportVictimInfo {
	struct FString VictimNickName; // 0x00(0x10)
	struct FString DamageType; // 0x10(0x10)
	struct FString HitBone; // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.ReplayDiedInfo
// Size: 0xb8 (Inherited: 0x00)
struct FReplayDiedInfo {
	struct FReplayDiedSaveInfo Info; // 0x00(0xb0)
	float Time; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct BravoHotelGame.ReplayDiedSaveInfo
// Size: 0xb0 (Inherited: 0x00)
struct FReplayDiedSaveInfo {
	struct FReplayDiedKillerInfo Attacker; // 0x00(0x20)
	struct FReplayDiedKillerInfo KnockOut; // 0x20(0x20)
	struct FReplayDiedKillerInfo Killer; // 0x40(0x20)
	struct FReplayDiedPlayerInfo SubKiller; // 0x60(0x18)
	struct FReplayDiedPlayerInfo Died; // 0x78(0x18)
	struct TArray<struct FReplayDiedPlayerInfo> Assist; // 0x90(0x10)
	bool IsFinallyKill; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32_t KillCount; // 0xa4(0x04)
	enum class EBroadCastKillMessageType BroadCastKillMessageType; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// ScriptStruct BravoHotelGame.ReplayDiedPlayerInfo
// Size: 0x18 (Inherited: 0x00)
struct FReplayDiedPlayerInfo {
	struct FString UserName; // 0x00(0x10)
	int32_t UniquePlayerId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.ReplayDiedKillerInfo
// Size: 0x20 (Inherited: 0x00)
struct FReplayDiedKillerInfo {
	struct FString UserName; // 0x00(0x10)
	int32_t UniquePlayerId; // 0x10(0x04)
	bool IsHeadShot; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32_t WeaponIndex; // 0x18(0x04)
	int32_t DamageTypeID; // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.HitDamageLogInfo
// Size: 0xb50 (Inherited: 0x00)
struct FHitDamageLogInfo {
	char pad_0[0xb38]; // 0x00(0xb38)
	struct ABravoHotelPlayerState* TargetPlayerState; // 0xb38(0x08)
	char pad_B40[0x4]; // 0xb40(0x04)
	bool bIsWeaponKill; // 0xb44(0x01)
	struct FBravoHotelWeaponInfo WeaponInfo; // 0x10(0xb20)
	int32_t DamageTypeRowID; // 0x04(0x04)
	int32_t WeaponLevel; // 0x08(0x04)
	int32_t HitCount; // 0x00(0x04)
	float Damage; // 0xb40(0x04)
	float OriginDamage; // 0xb48(0x04)
	bool bIsHeadShot; // 0x0c(0x01)
	enum class EBroadCastKillMessageType DamageResult; // 0xb30(0x01)
};

// ScriptStruct BravoHotelGame.KillMessageInfo
// Size: 0x88 (Inherited: 0x00)
struct FKillMessageInfo {
	int32_t Type; // 0x00(0x04)
	int32_t KillerTierID; // 0x04(0x04)
	struct FString Killer; // 0x08(0x10)
	int32_t VictimTierID; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString Victim; // 0x20(0x10)
	struct FString Block1; // 0x30(0x10)
	struct FString Block2; // 0x40(0x10)
	struct FString Weapon; // 0x50(0x10)
	struct FString AliveCount1; // 0x60(0x10)
	struct FString AliveCount2; // 0x70(0x10)
	int32_t FontColorIndex; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct BravoHotelGame.Coh_KillMessageInfo
// Size: 0xc0 (Inherited: 0x00)
struct FCoh_KillMessageInfo {
	int32_t Type; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString TYPE1_Killer; // 0x08(0x10)
	struct FString TYPE1_Block_01; // 0x18(0x10)
	struct FString TYPE1_Victim; // 0x28(0x10)
	struct FString TYPE1_Block_02; // 0x38(0x10)
	struct FString TYPE1_Weapon; // 0x48(0x10)
	struct FString TYPE1_AliverCount; // 0x58(0x10)
	struct FString TYPE2_Victim; // 0x68(0x10)
	struct FString TYPE2_Block_01; // 0x78(0x10)
	struct FString TYPE2_Block_02; // 0x88(0x10)
	struct FString TYPE2_AliveCount01; // 0x98(0x10)
	struct FString TYPE2_AliveCount02; // 0xa8(0x10)
	int32_t FontColorIndex; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// ScriptStruct BravoHotelGame.ItemSlotInfo
// Size: 0x68 (Inherited: 0x00)
struct FItemSlotInfo {
	struct TArray<struct FStandardGroupItemInfo> StandardGroupItemInfos; // 0x00(0x10)
	struct TMap<struct FString, struct FBoxItemInfo> BoxList; // 0x10(0x50)
	int32_t TotalDivisionCount; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct BravoHotelGame.BoxItemInfo
// Size: 0x0c (Inherited: 0x00)
struct FBoxItemInfo {
	bool IsDivision; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t DivisionCount; // 0x04(0x04)
	int32_t SelectCount; // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.StandardGroupItemInfo
// Size: 0x0c (Inherited: 0x00)
struct FStandardGroupItemInfo {
	struct FName StandardGroupItemKey; // 0x00(0x08)
	int32_t Count; // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.PoisitionInfo
// Size: 0x18 (Inherited: 0x00)
struct FPoisitionInfo {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct BravoHotelGame.LengthInfo
// Size: 0x18 (Inherited: 0x00)
struct FLengthInfo {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct BravoHotelGame.MatchRateData
// Size: 0x20 (Inherited: 0x08)
struct FMatchRateData : FTableRowBase {
	enum class EMatchRateCaseType MatchRateCaseType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Min; // 0x0c(0x04)
	float MAX; // 0x10(0x04)
	float PlusPoint; // 0x14(0x04)
	float MultiplyPoint; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.ItemWeapon
// Size: 0x130 (Inherited: 0x08)
struct FItemWeapon : FTableRowBase {
	struct FName WeaponName; // 0x08(0x08)
	int32_t Rarity; // 0x10(0x04)
	int32_t Level; // 0x14(0x04)
	int32_t MaxLevel; // 0x18(0x04)
	int32_t SupplyCost; // 0x1c(0x04)
	int32_t LevelUpgradeCost; // 0x20(0x04)
	int32_t LevelUpgradeGroupItemID; // 0x24(0x04)
	int32_t RepairGroupItemID; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FName> RepairFactor; // 0x30(0x10)
	struct FName WeaponFatigueKey; // 0x40(0x08)
	int32_t FatigueTableID; // 0x48(0x04)
	int32_t DurabilityMax; // 0x4c(0x04)
	int32_t DurabilityRate; // 0x50(0x04)
	float Damage; // 0x54(0x04)
	float VertRecoil; // 0x58(0x04)
	float HorRecoil; // 0x5c(0x04)
	float Spread; // 0x60(0x04)
	int32_t MagSize; // 0x64(0x04)
	int32_t ItemId; // 0x68(0x04)
	struct FName ItemName; // 0x6c(0x08)
	char pad_74[0x4]; // 0x74(0x04)
	struct FText DisplayName; // 0x78(0x18)
	struct FText Description; // 0x90(0x18)
	struct TSoftObjectPtr<UPaperSprite> SlotIconTexture_PaperSprite; // 0xa8(0x28)
	struct TSoftObjectPtr<UPaperSprite> DragIconTexture_PaperSprite; // 0xd0(0x28)
	struct UArmoryDataAsset* DataAsset; // 0xf8(0x08)
	struct FText DisplayWeaponType; // 0x100(0x18)
	float DamageMod; // 0x118(0x04)
	float VertRecoilMod; // 0x11c(0x04)
	float HorRecoilMod; // 0x120(0x04)
	float SpreadMod; // 0x124(0x04)
	float MagSizeMod; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
};

// ScriptStruct BravoHotelGame.WeaponFatigueData
// Size: 0x60 (Inherited: 0x08)
struct FWeaponFatigueData : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<int32_t, float> FatigueMap; // 0x10(0x50)
};

// ScriptStruct BravoHotelGame.ItemCrafting
// Size: 0x128 (Inherited: 0x08)
struct FItemCrafting : FTableRowBase {
	struct FName ID; // 0x08(0x08)
	struct FText CategoryName; // 0x10(0x18)
	struct FText DisplayName; // 0x28(0x18)
	struct FText Description; // 0x40(0x18)
	int32_t BaseItemID; // 0x58(0x04)
	int32_t MaterialGroupItemID; // 0x5c(0x04)
	int32_t GoldCost; // 0x60(0x04)
	int32_t ResultItemID; // 0x64(0x04)
	int32_t ItemId; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FText RandomOptionDesc; // 0x70(0x18)
	struct TArray<int32_t> ResultOptionIDList; // 0x88(0x10)
	struct TSoftObjectPtr<UPaperSprite> SlotIconTexture_PaperSprite; // 0x98(0x28)
	struct TSoftObjectPtr<UPaperSprite> DragIconTexture_PaperSprite; // 0xc0(0x28)
	struct TSoftObjectPtr<UPaperSprite> CategoryIconTexture_PaperSprite; // 0xe8(0x28)
	struct FText DisplayWeaponType; // 0x110(0x18)
};

// ScriptStruct BravoHotelGame.PreLoadObjectsTable
// Size: 0x40 (Inherited: 0x08)
struct FPreLoadObjectsTable : FTableRowBase {
	struct FString Desc; // 0x08(0x10)
	struct TSoftClassPtr<UObject> ClassPtr; // 0x18(0x28)
};

// ScriptStruct BravoHotelGame.KeyImageTable
// Size: 0x28 (Inherited: 0x08)
struct FKeyImageTable : FTableRowBase {
	struct FKey Key; // 0x08(0x18)
	struct FName DisplayName; // 0x20(0x08)
};

// ScriptStruct BravoHotelGame.CheckTimeInfo
// Size: 0x18 (Inherited: 0x00)
struct FCheckTimeInfo {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct BravoHotelGame.BuildingItemSpawnLog
// Size: 0xa0 (Inherited: 0x00)
struct FBuildingItemSpawnLog {
	struct FString LevelName; // 0x00(0x10)
	struct FString ParentName; // 0x10(0x10)
	struct FString BuildingName; // 0x20(0x10)
	struct FString DetectingUserName; // 0x30(0x10)
	bool DetectingBoxResult; // 0x40(0x01)
	bool StandardBoxTableComplete; // 0x41(0x01)
	bool IsValid; // 0x42(0x01)
	char pad_43[0x1]; // 0x43(0x01)
	struct FVector Location; // 0x44(0x0c)
	struct TMap<int32_t, struct FLogItemInfoData> Items; // 0x50(0x50)
};

// ScriptStruct BravoHotelGame.LogItemInfoData
// Size: 0x50 (Inherited: 0x00)
struct FLogItemInfoData {
	struct TMap<int32_t, struct FLogItemInfo> Items; // 0x00(0x50)
};

// ScriptStruct BravoHotelGame.LogItemInfo
// Size: 0x18 (Inherited: 0x00)
struct FLogItemInfo {
	int32_t Index; // 0x00(0x04)
	bool DataSet; // 0x04(0x01)
	bool RunAsyncLoad; // 0x05(0x01)
	bool CompleteAsyncLoad; // 0x06(0x01)
	bool RunTask; // 0x07(0x01)
	bool CompleteTask; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FName ItemName; // 0x0c(0x08)
	float Distance; // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.LevelUpInfo
// Size: 0x08 (Inherited: 0x00)
struct FLevelUpInfo {
	int32_t UpCount; // 0x00(0x04)
	float SpawnDelay; // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.BookSpawnInfo
// Size: 0x58 (Inherited: 0x00)
struct FBookSpawnInfo {
	struct FSpawnPerkInfo SpawnPerkInfo; // 0x00(0x4c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FTimerHandle SpawnBookTimerHandle; // 0x50(0x08)
};

// ScriptStruct BravoHotelGame.SpawnPerkInfo
// Size: 0x4c (Inherited: 0x24)
struct FSpawnPerkInfo : FSpawnBaseInfo {
	struct FSpawnPerkColorRate BookColorRate; // 0x24(0x14)
	float MinTime; // 0x38(0x04)
	float MaxTime; // 0x3c(0x04)
	int32_t MinCount; // 0x40(0x04)
	int32_t MaxCount; // 0x44(0x04)
	enum class EPerkSpawnType SpawnType; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
};

// ScriptStruct BravoHotelGame.AttackDamageWidgetInfo
// Size: 0x50 (Inherited: 0x00)
struct FAttackDamageWidgetInfo {
	struct AActor* DamageCauser; // 0x00(0x08)
	struct AActor* TargetPawn; // 0x08(0x08)
	float CurrentHitTimeSecond; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UUserWidget* Widget; // 0x18(0x08)
	float Damage; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString HitType; // 0x28(0x10)
	float LifeTime; // 0x38(0x04)
	bool bRand; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FVector ImpactPoint; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct BravoHotelGame.CarScanInfo
// Size: 0x0c (Inherited: 0x00)
struct FCarScanInfo {
	float CarScanRange; // 0x00(0x04)
	float CarScanDuration; // 0x04(0x04)
	bool bCarScanOutOfRange; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct BravoHotelGame.SpatialSenseInfo
// Size: 0x10 (Inherited: 0x00)
struct FSpatialSenseInfo {
	float SearchRadius; // 0x00(0x04)
	float ErrorDistRange; // 0x04(0x04)
	float FoundRadius; // 0x08(0x04)
	float Duration; // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.SearchInstinctInfo
// Size: 0x14 (Inherited: 0x00)
struct FSearchInstinctInfo {
	float CycleTime; // 0x00(0x04)
	float Radius; // 0x04(0x04)
	float ErrorDistRange; // 0x08(0x04)
	float FoundRadius; // 0x0c(0x04)
	float Duration; // 0x10(0x04)
};

// ScriptStruct BravoHotelGame.AreaSkillInfo
// Size: 0x08 (Inherited: 0x00)
struct FAreaSkillInfo {
	float Radius; // 0x00(0x04)
	float RemainTime; // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.ShootingInfo
// Size: 0x20 (Inherited: 0x00)
struct FShootingInfo {
	struct FVector StartPos; // 0x00(0x0c)
	struct FVector EndPos; // 0x0c(0x0c)
	float ShootingLength; // 0x18(0x04)
	float HitTime; // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelTeamColorRow
// Size: 0x18 (Inherited: 0x08)
struct FBravoHotelTeamColorRow : FTableRowBase {
	struct FLinearColor Color; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.TeamColorRow
// Size: 0x30 (Inherited: 0x08)
struct FTeamColorRow : FTableRowBase {
	struct FText Code; // 0x08(0x18)
	int32_t R; // 0x20(0x04)
	int32_t G; // 0x24(0x04)
	int32_t B; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct BravoHotelGame.LanguageInfo
// Size: 0x50 (Inherited: 0x08)
struct FLanguageInfo : FTableRowBase {
	struct FString CultureCode; // 0x08(0x10)
	struct UFontFace* NativeB; // 0x18(0x08)
	struct UFontFace* NativeR; // 0x20(0x08)
	struct UFontFace* NativeEB; // 0x28(0x08)
	struct FString OpeningMediaPath; // 0x30(0x10)
	struct FString TutorialMediaPath; // 0x40(0x10)
};

// ScriptStruct BravoHotelGame.SettingInputActionKeyMapping
// Size: 0x28 (Inherited: 0x00)
struct FSettingInputActionKeyMapping {
	struct FName ActionName; // 0x00(0x08)
	bool bShift; // 0x08(0x01)
	bool bCtrl; // 0x09(0x01)
	bool bAlt; // 0x0a(0x01)
	bool bCmd; // 0x0b(0x01)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FKey Key; // 0x10(0x18)
};

// ScriptStruct BravoHotelGame.SettingValueData
// Size: 0x18 (Inherited: 0x00)
struct FSettingValueData {
	enum class CheatParamType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FString> ValueList; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.JoinGameUserData
// Size: 0x0c (Inherited: 0x00)
struct FJoinGameUserData {
	struct FName Name; // 0x00(0x08)
	int32_t UniqueID; // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelCheatTable
// Size: 0x20 (Inherited: 0x08)
struct FBravoHotelCheatTable : FTableRowBase {
	enum class CheatMainType MainType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FCheaCommandSubInfo> SubCommandList; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.CheaCommandSubInfo
// Size: 0x18 (Inherited: 0x00)
struct FCheaCommandSubInfo {
	enum class CheatSubType SubType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FCheaCommandInfo> CommandList; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.CheaCommandInfo
// Size: 0x38 (Inherited: 0x00)
struct FCheaCommandInfo {
	bool IsHotKey; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Command; // 0x08(0x10)
	struct FString Desc; // 0x18(0x10)
	struct TArray<struct FString> ParamHintList; // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.CheatParamInfo
// Size: 0x18 (Inherited: 0x00)
struct FCheatParamInfo {
	struct FString Hint; // 0x00(0x10)
	enum class CheatParamType ParamType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BravoHotelGame.MatchEndAnimation
// Size: 0x02 (Inherited: 0x00)
struct FMatchEndAnimation {
	bool bWin; // 0x00(0x01)
	bool bSecondPlace; // 0x01(0x01)
};

// ScriptStruct BravoHotelGame.MatchEndFinalResult
// Size: 0x04 (Inherited: 0x00)
struct FMatchEndFinalResult {
	bool bIsShowingSimpleResult; // 0x00(0x01)
	bool bIsMatchEnd; // 0x01(0x01)
	bool bGiveUp; // 0x02(0x01)
	bool bExitGame; // 0x03(0x01)
};

// ScriptStruct BravoHotelGame.PersonalSupplyBoxTransform
// Size: 0x40 (Inherited: 0x00)
struct FPersonalSupplyBoxTransform {
	bool TraceLand; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Index; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
};

// ScriptStruct BravoHotelGame.BuildMatchEnd
// Size: 0x04 (Inherited: 0x00)
struct FBuildMatchEnd {
	bool WinMessage; // 0x00(0x01)
	bool LooseMessage; // 0x01(0x01)
	bool bIsSpectated; // 0x02(0x01)
	bool WinningCam; // 0x03(0x01)
};

// ScriptStruct BravoHotelGame.PingNeedAnimationInfo
// Size: 0x04 (Inherited: 0x00)
struct FPingNeedAnimationInfo {
	bool WorldMap; // 0x00(0x01)
	bool MiniMap; // 0x01(0x01)
	bool PlayerInfo; // 0x02(0x01)
	bool Compass; // 0x03(0x01)
};

// ScriptStruct BravoHotelGame.ItemPingIcon
// Size: 0x18 (Inherited: 0x08)
struct FItemPingIcon : FTableRowBase {
	enum class EItemPingIconType ItemPingType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UPaperSprite* Icon; // 0x10(0x08)
};

// ScriptStruct BravoHotelGame.SeasonQuest
// Size: 0x20 (Inherited: 0x08)
struct FSeasonQuest : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FSeasonQuestElement> Quests; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.SeasonQuestElement
// Size: 0xa8 (Inherited: 0x00)
struct FSeasonQuestElement {
	int32_t ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText DisplayName; // 0x08(0x18)
	struct FString QuestType; // 0x20(0x10)
	int32_t TargetCount; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString Value01; // 0x38(0x10)
	struct FString Value02; // 0x48(0x10)
	struct FString Value03; // 0x58(0x10)
	struct FString Value04; // 0x68(0x10)
	int32_t LevelUpRewardIndex; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FString ClearType; // 0x80(0x10)
	struct FString RewardType; // 0x90(0x10)
	int32_t RewardAmount; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// ScriptStruct BravoHotelGame.SeasonEXP
// Size: 0x38 (Inherited: 0x08)
struct FSeasonEXP : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DisplayName; // 0x10(0x18)
	struct TArray<struct FSeasonEXPElement> Levels; // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.SeasonEXPElement
// Size: 0x58 (Inherited: 0x00)
struct FSeasonEXPElement {
	int32_t Level; // 0x00(0x04)
	int32_t LevelUPExp; // 0x04(0x04)
	int32_t LevelUpRewardIndex; // 0x08(0x04)
	int32_t LevelUpRewardCount; // 0x0c(0x04)
	bool ShowInTitle; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FText DisplayName; // 0x18(0x18)
	struct TSoftObjectPtr<UObject> CohIcon; // 0x30(0x28)
};

// ScriptStruct BravoHotelGame.SeasonEndReward
// Size: 0x20 (Inherited: 0x08)
struct FSeasonEndReward : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FSeasonEndRewardElement> Tiers; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.SeasonEndRewardElement
// Size: 0x68 (Inherited: 0x00)
struct FSeasonEndRewardElement {
	int32_t Point; // 0x00(0x04)
	int32_t Rank; // 0x04(0x04)
	struct TArray<struct FItemCountData> SeasonEndRewards; // 0x08(0x10)
	int32_t index_01; // 0x18(0x04)
	int32_t count_01; // 0x1c(0x04)
	int32_t index_02; // 0x20(0x04)
	int32_t count_02; // 0x24(0x04)
	int32_t index_03; // 0x28(0x04)
	int32_t count_03; // 0x2c(0x04)
	int32_t index_04; // 0x30(0x04)
	int32_t count_04; // 0x34(0x04)
	int32_t index_05; // 0x38(0x04)
	int32_t count_05; // 0x3c(0x04)
	int32_t index_06; // 0x40(0x04)
	int32_t count_06; // 0x44(0x04)
	int32_t index_07; // 0x48(0x04)
	int32_t count_07; // 0x4c(0x04)
	int32_t index_08; // 0x50(0x04)
	int32_t count_08; // 0x54(0x04)
	int32_t index_09; // 0x58(0x04)
	int32_t count_09; // 0x5c(0x04)
	int32_t Index_11; // 0x60(0x04)
	int32_t Count_11; // 0x64(0x04)
};

// ScriptStruct BravoHotelGame.ItemCountData
// Size: 0x08 (Inherited: 0x00)
struct FItemCountData {
	int32_t Index; // 0x00(0x04)
	int32_t Count; // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.SeasonTierUp
// Size: 0x20 (Inherited: 0x08)
struct FSeasonTierUp : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FSeasonTierUpElement> Tiers; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.SeasonTier
// Size: 0x28 (Inherited: 0x08)
struct FSeasonTier : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	int64_t StartTime; // 0x10(0x08)
	struct TArray<struct FSeasonTierElement> Tiers; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.SeasonTierElement
// Size: 0x98 (Inherited: 0x00)
struct FSeasonTierElement {
	int32_t TierID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText DisplayName; // 0x08(0x18)
	struct TSoftObjectPtr<UObject> UMGIcon; // 0x20(0x28)
	struct TSoftObjectPtr<UObject> CohIcon; // 0x48(0x28)
	struct TSoftObjectPtr<UObject> SmallIcon; // 0x70(0x28)
};

// ScriptStruct BravoHotelGame.SeasonPlan
// Size: 0x68 (Inherited: 0x08)
struct FSeasonPlan : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DisplayName; // 0x10(0x18)
	int64_t StartTime; // 0x28(0x08)
	int64_t EndTime; // 0x30(0x08)
	int64_t GoldPrice; // 0x38(0x08)
	int64_t CashPrice; // 0x40(0x08)
	int32_t LastSeasonID; // 0x48(0x04)
	int32_t TierTableID; // 0x4c(0x04)
	int32_t TierUpTableID; // 0x50(0x04)
	int32_t SeasonEndRewardTableID; // 0x54(0x04)
	int32_t MaxLevel; // 0x58(0x04)
	int32_t ExpTableID; // 0x5c(0x04)
	int32_t QuestTableID; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct BravoHotelGame.GroupItem
// Size: 0x38 (Inherited: 0x08)
struct FGroupItem : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DisplayName; // 0x10(0x18)
	struct TArray<struct FGroupItemElement> Items; // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.GroupItemElement
// Size: 0x0c (Inherited: 0x00)
struct FGroupItemElement {
	int32_t ID; // 0x00(0x04)
	int32_t MinCount; // 0x04(0x04)
	int32_t MaxCount; // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.GroupReward
// Size: 0x40 (Inherited: 0x08)
struct FGroupReward : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DisplayName; // 0x10(0x18)
	int32_t DrawCount; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FGroupRewardElement> Rewards; // 0x30(0x10)
};

// ScriptStruct BravoHotelGame.GroupRewardElement
// Size: 0x14 (Inherited: 0x00)
struct FGroupRewardElement {
	int32_t ID; // 0x00(0x04)
	int32_t MinCount; // 0x04(0x04)
	int32_t MaxCount; // 0x08(0x04)
	int32_t Rate; // 0x0c(0x04)
	int32_t DuplicateCount; // 0x10(0x04)
};

// ScriptStruct BravoHotelGame.SupplyItem
// Size: 0x100 (Inherited: 0x08)
struct FSupplyItem : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DisplayName; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	struct TSoftObjectPtr<UObject> SlotIconTexture_PaperSprite; // 0x40(0x28)
	struct FText ItemSortType; // 0x68(0x18)
	int32_t SupplyGoldCost; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct TArray<struct FItemCountData> Items; // 0x88(0x10)
	struct TSoftObjectPtr<UStaticMesh> StaticMesh; // 0x98(0x28)
	struct TSoftObjectPtr<UParticleSystem> SupplyMeshParticle; // 0xc0(0x28)
	struct FName SupplyMeshParticleSocketName; // 0xe8(0x08)
	struct TArray<struct FVector2D> ToolTipLocationOffset; // 0xf0(0x10)
};

// ScriptStruct BravoHotelGame.SupplyBox
// Size: 0x90 (Inherited: 0x08)
struct FSupplyBox : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DisplayName; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	struct TSoftObjectPtr<UObject> CohIcon; // 0x40(0x28)
	int32_t CoolTime; // 0x68(0x04)
	int32_t CoolTimeResetGoldCost; // 0x6c(0x04)
	int32_t CastingTime; // 0x70(0x04)
	int32_t DefaultWeaponSlotCount; // 0x74(0x04)
	int32_t MaxWeaponSlotCount; // 0x78(0x04)
	int32_t DefaultEquipSlotCount; // 0x7c(0x04)
	int32_t MaxEquipSlotCount; // 0x80(0x04)
	int32_t SlotExpansionPrice; // 0x84(0x04)
	int32_t Price; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct BravoHotelGame.GenerateOption
// Size: 0x20 (Inherited: 0x08)
struct FGenerateOption : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FName> GroupRewardIDs; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.ItemOption
// Size: 0xb8 (Inherited: 0x08)
struct FItemOption : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DisplayName; // 0x10(0x18)
	struct TArray<struct FName> BuffIDs; // 0x28(0x10)
	struct FText Description; // 0x38(0x18)
	struct TSoftObjectPtr<UObject> SlotIconTexture_PaperSprite; // 0x50(0x28)
	struct TSoftObjectPtr<UObject> DragIconTexture_PaperSprite; // 0x78(0x28)
	int32_t Rarity; // 0xa0(0x04)
	int32_t Display_Damage; // 0xa4(0x04)
	int32_t Display_EffectiveRange; // 0xa8(0x04)
	int32_t Display_Accuracy; // 0xac(0x04)
	int32_t Display_RateofFire; // 0xb0(0x04)
	int32_t NormalMagSize; // 0xb4(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelSmartPingIconSettings
// Size: 0xb8 (Inherited: 0x08)
struct FBravoHotelSmartPingIconSettings : FTableRowBase {
	struct UPaperSprite* Icon; // 0x08(0x08)
	struct UPaperSprite* MenuIcon; // 0x10(0x08)
	struct FText DisplayName; // 0x18(0x18)
	struct FBravoHotelSmartPingIconAppearanceSettings Appearance; // 0x30(0x1c)
	struct FBravoHotelSmartPingIconAnimationSettings Animation; // 0x4c(0x18)
	char pad_64[0x4]; // 0x64(0x04)
	struct FBravoHotelSmartPingIconSoundSettings Sound; // 0x68(0x18)
	struct FBravoHotelSmartPingIconAdvancedSettings Advanced; // 0x80(0x0c)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FText Msg; // 0x90(0x18)
	enum class EPingType PingType; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	float IconSize; // 0xac(0x04)
	char Rarity; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// ScriptStruct BravoHotelGame.BravoHotelSmartPingIconAdvancedSettings
// Size: 0x0c (Inherited: 0x00)
struct FBravoHotelSmartPingIconAdvancedSettings {
	bool ShowInSelectionMenu; // 0x00(0x01)
	bool ShowDistance; // 0x01(0x01)
	bool ShowPeripheral; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float PeripheralEdgePercent; // 0x04(0x04)
	bool AllowLocalTintOverride; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct BravoHotelGame.BravoHotelSmartPingIconSoundSettings
// Size: 0x18 (Inherited: 0x00)
struct FBravoHotelSmartPingIconSoundSettings {
	struct USoundBase* Enter; // 0x00(0x08)
	struct USoundBase* Hold; // 0x08(0x08)
	struct USoundBase* Exit; // 0x10(0x08)
};

// ScriptStruct BravoHotelGame.BravoHotelSmartPingIconAnimationSettings
// Size: 0x18 (Inherited: 0x00)
struct FBravoHotelSmartPingIconAnimationSettings {
	enum class EPingIconTransitionAnimationType Enter; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float EnterDuration; // 0x04(0x04)
	enum class EPingIconLoopAnimationType Loop; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float LoopDuration; // 0x0c(0x04)
	enum class EPingIconTransitionAnimationType Exit; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float ExitDuration; // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelSmartPingIconAppearanceSettings
// Size: 0x1c (Inherited: 0x00)
struct FBravoHotelSmartPingIconAppearanceSettings {
	float Scale; // 0x00(0x04)
	struct FVector2D Anchor; // 0x04(0x08)
	struct FLinearColor Tint; // 0x0c(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelFallingAnimParameters
// Size: 0x0c (Inherited: 0x00)
struct FBravoHotelFallingAnimParameters {
	float StartTime; // 0x00(0x04)
	float ApexTime; // 0x04(0x04)
	float EndTime; // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelTimeOfDaySimulateInformation
// Size: 0x10 (Inherited: 0x00)
struct FBravoHotelTimeOfDaySimulateInformation {
	enum class ETimeOfDayType TOD_Begin; // 0x00(0x01)
	enum class ETimeOfDayType TOD_End; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float DL_Rotation_TransitionTime; // 0x04(0x04)
	float PostTransitionDelayTime; // 0x08(0x04)
	float PostTransitionTime; // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelTimeOfDaySettings
// Size: 0x98 (Inherited: 0x00)
struct FBravoHotelTimeOfDaySettings {
	char bOverride_DL_Rotation : 1; // 0x00(0x01)
	char bOverride_DL_Temperature : 1; // 0x00(0x01)
	char bOverride_DL_Intensity : 1; // 0x00(0x01)
	char bOverride_DL_DistanceFieldTrace : 1; // 0x00(0x01)
	char bOverride_DL_RayStartOffsetDepthScale : 1; // 0x00(0x01)
	char bOverride_DL_DistanceFieldShadowDistance : 1; // 0x00(0x01)
	char bOverride_DL_DynamicShadowDistance : 1; // 0x00(0x01)
	char bOverride_DL_VolumetricScatteringIntensity : 1; // 0x00(0x01)
	char bOverride_DL_IndirectLightIntensity : 1; // 0x01(0x01)
	char bOverride_SkyLight_Intensity : 1; // 0x01(0x01)
	char bOverride_SkyLight_Color : 1; // 0x01(0x01)
	char bOverride_SkyLight_OcclusionTint : 1; // 0x01(0x01)
	char bOverride_SkyLight_OcclusionFoliageTint : 1; // 0x01(0x01)
	char bOverride_SkyLight_OcclusionBarkTint : 1; // 0x01(0x01)
	char bOverride_ExFog_Density : 1; // 0x01(0x01)
	char bOverride_ExFog_Density_Clear : 1; // 0x01(0x01)
	char bOverride_ExFog_Color : 1; // 0x02(0x01)
	char bOverride_ExFog_HeightFalloff : 1; // 0x02(0x01)
	char bOverride_ExFog_VolumetricFogScatteringDistribution : 1; // 0x02(0x01)
	char bOverride_AF_SunMultiplier : 1; // 0x02(0x01)
	char bOverride_PP_ExposureMin : 1; // 0x02(0x01)
	char bOverride_PP_ExposureMax : 1; // 0x02(0x01)
	char bOverride_PP_ExposureLowPercent : 1; // 0x02(0x01)
	char bOverride_PP_ExposureCompensation : 1; // 0x02(0x01)
	char bOverride_PP_BloomIntensity : 1; // 0x03(0x01)
	char bOverride_PP_BloomThreshold : 1; // 0x03(0x01)
	char bOverride_PP_LPVSize : 1; // 0x03(0x01)
	char bOverride_PP_LPVIntensity : 1; // 0x03(0x01)
	char bOverride_PP_LPVLightInjectionBias : 1; // 0x03(0x01)
	char pad_3_5 : 3; // 0x03(0x01)
	struct FRotator DL_Rotation; // 0x04(0x0c)
	float DL_Temperature; // 0x10(0x04)
	float DL_Intensity; // 0x14(0x04)
	float DL_DistanceFieldTrace; // 0x18(0x04)
	float DL_RayStartOffsetDepthScale; // 0x1c(0x04)
	float DL_DistanceFieldShadowDistance; // 0x20(0x04)
	float DL_DynamicShadowDistance; // 0x24(0x04)
	float DL_VolumetricScatteringIntensity; // 0x28(0x04)
	float DL_IndirectLightIntensity; // 0x2c(0x04)
	float SkyLight_Intensity; // 0x30(0x04)
	struct FLinearColor SkyLight_Color; // 0x34(0x10)
	struct FColor SkyLight_OcclusionTint; // 0x44(0x04)
	struct FColor SkyLight_OcclusionFoliageTint; // 0x48(0x04)
	struct FColor SkyLight_OcclusionBarkTint; // 0x4c(0x04)
	float ExFog_Density; // 0x50(0x04)
	float ExFog_Density_Clear; // 0x54(0x04)
	struct FLinearColor ExFog_Color; // 0x58(0x10)
	float ExFog_HeightFalloff; // 0x68(0x04)
	float ExFog_VolumetricFogScatteringDistribution; // 0x6c(0x04)
	float AF_SunMultiplier; // 0x70(0x04)
	float PP_ExposureMin; // 0x74(0x04)
	float PP_ExposureMax; // 0x78(0x04)
	float PP_ExposureLowPercent; // 0x7c(0x04)
	float PP_ExposureCompensation; // 0x80(0x04)
	float PP_BloomIntensity; // 0x84(0x04)
	float PP_BloomThreshold; // 0x88(0x04)
	float PP_LPVSize; // 0x8c(0x04)
	float PP_LPVIntensity; // 0x90(0x04)
	float PP_LPVLightInjectionBias; // 0x94(0x04)
};

// ScriptStruct BravoHotelGame.SpawnActors_DEBUG
// Size: 0x20 (Inherited: 0x00)
struct FSpawnActors_DEBUG {
	struct FString ActorName; // 0x00(0x10)
	struct TArray<struct AActor*> ActorList; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelRewardItem
// Size: 0x20 (Inherited: 0x00)
struct FBravoHotelRewardItem {
	int32_t table_index; // 0x00(0x04)
	int32_t RandomPackageID; // 0x04(0x04)
	int32_t Count; // 0x08(0x04)
	int32_t SortType; // 0x0c(0x04)
	struct TArray<int32_t> ItemOptions; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelLevelStreamSettings
// Size: 0x40 (Inherited: 0x08)
struct FBravoHotelLevelStreamSettings : FTableRowBase {
	bool bEnable; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString WorldDefault_LightLevelString; // 0x10(0x10)
	struct FString CustomDefault_LightLevelString; // 0x20(0x10)
	struct TArray<struct FString> AfterGameStart_LightLevelString; // 0x30(0x10)
};

// ScriptStruct BravoHotelGame.ItemColorData
// Size: 0x70 (Inherited: 0x08)
struct FItemColorData : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DisplayName; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	enum class EWearableItemType Slot; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x48(0x28)
};

// ScriptStruct BravoHotelGame.ItemAppearanceData
// Size: 0x58 (Inherited: 0x08)
struct FItemAppearanceData : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DisplayName; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	enum class EWearableItemType Slot; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct FItemAppearanceColorData> Color; // 0x48(0x10)
};

// ScriptStruct BravoHotelGame.ItemAppearanceColorData
// Size: 0x38 (Inherited: 0x00)
struct FItemAppearanceColorData {
	struct FName ColorID; // 0x00(0x08)
	struct TSoftObjectPtr<UPaperSprite> IconEx; // 0x08(0x28)
	struct FName MutableUniqueKey; // 0x30(0x08)
};

// ScriptStruct BravoHotelGame.ClimbData
// Size: 0x98 (Inherited: 0x00)
struct FClimbData {
	float TargetHeight; // 0x00(0x04)
	float MaxDistance; // 0x04(0x04)
	struct UAnimMontage* Montage; // 0x08(0x08)
	struct UAnimMontage* OneHandMontage; // 0x10(0x08)
	struct UAnimMontage* TwoHandMontage; // 0x18(0x08)
	float FallingRate; // 0x20(0x04)
	struct FVector DettachLaunch; // 0x24(0x0c)
	struct FVector CameraPosition; // 0x30(0x0c)
	struct FVector CameraSecondPosition; // 0x3c(0x0c)
	float CameraTime; // 0x48(0x04)
	float CameraSecondTime; // 0x4c(0x04)
	float CameraOutTime; // 0x50(0x04)
	struct FVector StartPosition; // 0x54(0x0c)
	bool bWalkToStartPosition; // 0x60(0x01)
	bool bSlide; // 0x61(0x01)
	bool bUseHeightCurve; // 0x62(0x01)
	char pad_63[0x1]; // 0x63(0x01)
	struct FName CameraBone; // 0x64(0x08)
	bool bHandToWeaponIK; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	float PlaySpeed; // 0x70(0x04)
	struct FName OverrideKey; // 0x74(0x08)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct UCurveVector* CurveFPP; // 0x80(0x08)
	float CameraYawLimit_FPP; // 0x88(0x04)
	float CameraPitchMax_FPP; // 0x8c(0x04)
	float CameraPitchMin_FPP; // 0x90(0x04)
	bool bFixCameraBaseLocation_FPP; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
};

// ScriptStruct BravoHotelGame.UsableItemText
// Size: 0x18 (Inherited: 0x08)
struct FUsableItemText : FTableRowBase {
	int32_t Using; // 0x08(0x04)
	int32_t Full; // 0x0c(0x04)
	int32_t NoTarget; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelHitResults
// Size: 0x10 (Inherited: 0x00)
struct FBravoHotelHitResults {
	struct TArray<struct FHitResult> HitResults; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelMatchRewardTableRow
// Size: 0x128 (Inherited: 0x08)
struct FBravoHotelMatchRewardTableRow : FTableRowBase {
	int32_t Reward_ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText map_name; // 0x10(0x18)
	struct FText Mode_Name; // 0x28(0x18)
	struct FBravoHotelPersonalReward PersonalReward; // 0x40(0x24)
	struct FBravoHotelRankReward RankReward; // 0x64(0x1c)
	struct FBravoHotelRandomReward RandomReward; // 0x80(0xa8)
};

// ScriptStruct BravoHotelGame.BravoHotelRandomReward
// Size: 0xa8 (Inherited: 0x00)
struct FBravoHotelRandomReward {
	float RandomGoldMinRate; // 0x00(0x04)
	float RandomGoldMaxRate; // 0x04(0x04)
	struct TMap<struct FString, int32_t> BaseRandomGold; // 0x08(0x50)
	struct TMap<struct FString, int32_t> MaxRandomGold; // 0x58(0x50)
};

// ScriptStruct BravoHotelGame.BravoHotelRankReward
// Size: 0x1c (Inherited: 0x00)
struct FBravoHotelRankReward {
	int32_t TimeBase; // 0x00(0x04)
	float GoldPerTime; // 0x04(0x04)
	float ExpPerTime; // 0x08(0x04)
	float Ratio; // 0x0c(0x04)
	float Percentage; // 0x10(0x04)
	float ReduceCycle; // 0x14(0x04)
	float ReducePercentage; // 0x18(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelPersonalReward
// Size: 0x24 (Inherited: 0x00)
struct FBravoHotelPersonalReward {
	int32_t GoldPerkill; // 0x00(0x04)
	int32_t ExpPerKill; // 0x04(0x04)
	int32_t PerDMG_BaseDMG; // 0x08(0x04)
	int32_t GoldPerDMG; // 0x0c(0x04)
	int32_t ExpPerDMG; // 0x10(0x04)
	int32_t PerTime_BaseTime; // 0x14(0x04)
	int32_t PerTime_TimeLimit; // 0x18(0x04)
	int32_t GoldPerTime; // 0x1c(0x04)
	int32_t ExpPerTime; // 0x20(0x04)
};

// ScriptStruct BravoHotelGame.LimitedCollection
// Size: 0x28 (Inherited: 0x08)
struct FLimitedCollection : FTableRowBase {
	int32_t StackableMaxCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText Notice; // 0x10(0x18)
};

// ScriptStruct BravoHotelGame.CurrencyData
// Size: 0x70 (Inherited: 0x08)
struct FCurrencyData : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DisplayName; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	struct TSoftObjectPtr<UTexture2D> SlotIconTexture; // 0x40(0x28)
	int32_t Limit; // 0x68(0x04)
	int32_t Price; // 0x6c(0x04)
};

// ScriptStruct BravoHotelGame.ItemMaterialData
// Size: 0xd0 (Inherited: 0x08)
struct FItemMaterialData : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DisplayName; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	int32_t Rarity; // 0x40(0x04)
	int32_t Slot; // 0x44(0x04)
	struct FName TargetIngameItem; // 0x48(0x08)
	int32_t CraftingID; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TSoftObjectPtr<UObject> SlotIconTexture; // 0x58(0x28)
	struct TSoftObjectPtr<UObject> SlotIconTexture1024; // 0x80(0x28)
	struct UArmoryDataAsset* DataAsset; // 0xa8(0x08)
	int32_t Limit; // 0xb0(0x04)
	int32_t Price; // 0xb4(0x04)
	struct FText Filter; // 0xb8(0x18)
};

// ScriptStruct BravoHotelGame.CharacterClassData
// Size: 0x90 (Inherited: 0x08)
struct FCharacterClassData : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DisplayName; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	int32_t TypeID; // 0x40(0x04)
	int32_t Level; // 0x44(0x04)
	int32_t MaxLevel; // 0x48(0x04)
	int32_t NextLevelExp; // 0x4c(0x04)
	struct FName Reward_01; // 0x50(0x08)
	int32_t Reward_Value_01; // 0x58(0x04)
	struct FName Reward_02; // 0x5c(0x08)
	int32_t Reward_Value_02; // 0x64(0x04)
	struct FName Reward_03; // 0x68(0x08)
	int32_t Reward_Value_03; // 0x70(0x04)
	struct FName Reward_04; // 0x74(0x08)
	int32_t Reward_Value_04; // 0x7c(0x04)
	struct TArray<struct FMaterialUnit> Reward; // 0x80(0x10)
};

// ScriptStruct BravoHotelGame.MaterialUnit
// Size: 0x08 (Inherited: 0x00)
struct FMaterialUnit {
	int32_t ID; // 0x00(0x04)
	int32_t Count; // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.CharacterClassTypeData
// Size: 0xe8 (Inherited: 0x08)
struct FCharacterClassTypeData : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DisplayName; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	struct FName MaterialID; // 0x40(0x08)
	int32_t MaterialCount; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct FName> DefaultClothes; // 0x50(0x10)
	struct TArray<struct FName> EquipClothes; // 0x60(0x10)
	struct TArray<struct FRandomEquipClothesData> RandomEquipClothes; // 0x70(0x10)
	struct FLookInfo LookInfo; // 0x80(0x14)
	char pad_94[0x4]; // 0x94(0x04)
	struct TArray<struct FName> DefaultPerk; // 0x98(0x10)
	struct TArray<struct FName> MaleFace; // 0xa8(0x10)
	struct TArray<struct FName> MaleHair; // 0xb8(0x10)
	struct TArray<struct FName> FemaleFace; // 0xc8(0x10)
	struct TArray<struct FName> FemaleHair; // 0xd8(0x10)
};

// ScriptStruct BravoHotelGame.LookInfo
// Size: 0x14 (Inherited: 0x00)
struct FLookInfo {
	int32_t hair; // 0x00(0x04)
	int32_t hair_color; // 0x04(0x04)
	int32_t face; // 0x08(0x04)
	int32_t face_color; // 0x0c(0x04)
	int32_t gender; // 0x10(0x04)
};

// ScriptStruct BravoHotelGame.RandomEquipClothesData
// Size: 0x18 (Inherited: 0x08)
struct FRandomEquipClothesData : FTableRowBase {
	struct TArray<struct FName> EquipClothes; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.CrosshairTableRow
// Size: 0x2a8 (Inherited: 0x08)
struct FCrosshairTableRow : FTableRowBase {
	float SpreadDistance; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FCrosshairTextureInfo TextureInfo; // 0x10(0x148)
	bool bUseCrosshairOnADS; // 0x158(0x01)
	char pad_159[0x3]; // 0x159(0x03)
	float SpreadDistance_ADS; // 0x15c(0x04)
	struct FCrosshairTextureInfo TextureInfo_ADS; // 0x160(0x148)
};

// ScriptStruct BravoHotelGame.CrosshairTextureInfo
// Size: 0x148 (Inherited: 0x00)
struct FCrosshairTextureInfo {
	struct TSoftObjectPtr<UPaperSprite> CenterTexture; // 0x00(0x28)
	struct TSoftObjectPtr<UPaperSprite> LeftTexture; // 0x28(0x28)
	struct TSoftObjectPtr<UPaperSprite> TopTexture; // 0x50(0x28)
	struct TSoftObjectPtr<UPaperSprite> RightTexture; // 0x78(0x28)
	struct TSoftObjectPtr<UPaperSprite> BottomTexture; // 0xa0(0x28)
	struct FLinearColor CenterColor; // 0xc8(0x10)
	struct FLinearColor LeftColor; // 0xd8(0x10)
	struct FLinearColor TopColor; // 0xe8(0x10)
	struct FLinearColor RightColor; // 0xf8(0x10)
	struct FLinearColor BottomColor; // 0x108(0x10)
	struct FVector2D CenterDeltaPosition; // 0x118(0x08)
	struct FVector2D LeftDeltaPosition; // 0x120(0x08)
	struct FVector2D TopDeltaPosition; // 0x128(0x08)
	struct FVector2D RightDeltaPosition; // 0x130(0x08)
	struct FVector2D BottomDeltaPosition; // 0x138(0x08)
	float TextureScale; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
};

// ScriptStruct BravoHotelGame.CharacterVoiceTableRow
// Size: 0x70 (Inherited: 0x08)
struct FCharacterVoiceTableRow : FTableRowBase {
	int32_t PriorityOrder; // 0x08(0x04)
	enum class ECharacterVoicePriorityType PriorityType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TSoftObjectPtr<UAkAudioEvent> AudioEvent; // 0x10(0x28)
	struct TSoftObjectPtr<UAkAudioEvent> TeamAudioEvent; // 0x38(0x28)
	enum class ECharacterVoiceRPCType RPCType; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float IntervalTime; // 0x64(0x04)
	int32_t Repeat; // 0x68(0x04)
	float CoolTime; // 0x6c(0x04)
};

// ScriptStruct BravoHotelGame.TurnAnims
// Size: 0x400 (Inherited: 0x00)
struct FTurnAnims {
	struct FTurnInPlaceAnimInfo Unarmed_Stand_Turn_L_91; // 0x00(0x20)
	struct FTurnInPlaceAnimInfo Unarmed_Stand_Turn_L_181; // 0x20(0x20)
	struct FTurnInPlaceAnimInfo Unarmed_Stand_Turn_R_91; // 0x40(0x20)
	struct FTurnInPlaceAnimInfo Unarmed_Stand_Turn_R_181; // 0x60(0x20)
	struct FTurnInPlaceAnimInfo Unarmed_Crouch_Turn_L_91; // 0x80(0x20)
	struct FTurnInPlaceAnimInfo Unarmed_Crouch_Turn_L_181; // 0xa0(0x20)
	struct FTurnInPlaceAnimInfo Unarmed_Crouch_Turn_R_91; // 0xc0(0x20)
	struct FTurnInPlaceAnimInfo Unarmed_Crouch_Turn_R_181; // 0xe0(0x20)
	struct FTurnInPlaceAnimInfo Unarmed_Prone_Turn_L_46; // 0x100(0x20)
	struct FTurnInPlaceAnimInfo Unarmed_Prone_Turn_R_46; // 0x120(0x20)
	struct FTurnInPlaceAnimInfo Rifle_Stand_Turn_L_91; // 0x140(0x20)
	struct FTurnInPlaceAnimInfo Rifle_Stand_Turn_L_181; // 0x160(0x20)
	struct FTurnInPlaceAnimInfo Rifle_Stand_Turn_R_91; // 0x180(0x20)
	struct FTurnInPlaceAnimInfo Rifle_Stand_Turn_R_181; // 0x1a0(0x20)
	struct FTurnInPlaceAnimInfo Rifle_Crouch_Turn_L_91; // 0x1c0(0x20)
	struct FTurnInPlaceAnimInfo Rifle_Crouch_Turn_L_181; // 0x1e0(0x20)
	struct FTurnInPlaceAnimInfo Rifle_Crouch_Turn_R_91; // 0x200(0x20)
	struct FTurnInPlaceAnimInfo Rifle_Crouch_Turn_R_181; // 0x220(0x20)
	struct FTurnInPlaceAnimInfo Rifle_Prone_Turn_L_46; // 0x240(0x20)
	struct FTurnInPlaceAnimInfo Rifle_Prone_Turn_R_46; // 0x260(0x20)
	struct FTurnInPlaceAnimInfo Pistol_Stand_Turn_L_91; // 0x280(0x20)
	struct FTurnInPlaceAnimInfo Pistol_Stand_Turn_L_181; // 0x2a0(0x20)
	struct FTurnInPlaceAnimInfo Pistol_Stand_Turn_R_91; // 0x2c0(0x20)
	struct FTurnInPlaceAnimInfo Pistol_Stand_Turn_R_181; // 0x2e0(0x20)
	struct FTurnInPlaceAnimInfo Pistol_Crouch_Turn_L_91; // 0x300(0x20)
	struct FTurnInPlaceAnimInfo Pistol_Crouch_Turn_L_181; // 0x320(0x20)
	struct FTurnInPlaceAnimInfo Pistol_Crouch_Turn_R_91; // 0x340(0x20)
	struct FTurnInPlaceAnimInfo Pistol_Crouch_Turn_R_181; // 0x360(0x20)
	struct FTurnInPlaceAnimInfo Pistol_Prone_Turn_L_46; // 0x380(0x20)
	struct FTurnInPlaceAnimInfo Pistol_Prone_Turn_R_46; // 0x3a0(0x20)
	struct FTurnInPlaceAnimInfo Descent_Turn_L; // 0x3c0(0x20)
	struct FTurnInPlaceAnimInfo Descent_Turn_R; // 0x3e0(0x20)
};

// ScriptStruct BravoHotelGame.TurnInPlaceAnimInfo
// Size: 0x20 (Inherited: 0x00)
struct FTurnInPlaceAnimInfo {
	struct UAnimSequence* DynamicMontageAnim; // 0x00(0x08)
	struct UAnimSequence* RepeatMontageAnim; // 0x08(0x08)
	float TurnTime; // 0x10(0x04)
	float TurnAngle; // 0x14(0x04)
	float TurnTriggerAngle; // 0x18(0x04)
	float PlayRate; // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelRenderSettings
// Size: 0x30 (Inherited: 0x08)
struct FBravoHotelRenderSettings : FTableRowBase {
	struct FBravoHotelTemporalAASettings TAA; // 0x08(0x10)
	struct FBravoHotelExposureSettings Exposure; // 0x18(0x18)
};

// ScriptStruct BravoHotelGame.BravoHotelExposureSettings
// Size: 0x18 (Inherited: 0x00)
struct FBravoHotelExposureSettings {
	bool bEnable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float CustomDeltaHeight; // 0x04(0x04)
	float MinHeight; // 0x08(0x04)
	float MaxHeight; // 0x0c(0x04)
	float MinExposureCompensation; // 0x10(0x04)
	float MaxExposureCompensation; // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelTemporalAASettings
// Size: 0x10 (Inherited: 0x00)
struct FBravoHotelTemporalAASettings {
	float IdleTemporalAA_Weight; // 0x00(0x04)
	float MovingTemporalAA_Weight; // 0x04(0x04)
	float ADSTemporalAA_Weight; // 0x08(0x04)
	float BlendSpeed; // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.ItemWorldSpawn
// Size: 0x38 (Inherited: 0x08)
struct FItemWorldSpawn : FTableRowBase {
	struct FText Desc; // 0x08(0x18)
	int32_t MaxItemSpawnCnt; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FItemWorldSpawnInfo> ItemWorldSpawnInfos; // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.ItemWorldSpawnInfo
// Size: 0x0c (Inherited: 0x00)
struct FItemWorldSpawnInfo {
	struct FName ItemId; // 0x00(0x08)
	int32_t Cnt; // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.VehicleRandomSpawn
// Size: 0x18 (Inherited: 0x08)
struct FVehicleRandomSpawn : FTableRowBase {
	struct TArray<struct FVehicleSpawnRate> List; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.VehicleSpawnRate
// Size: 0x0c (Inherited: 0x00)
struct FVehicleSpawnRate {
	struct FName VehicleKey; // 0x00(0x08)
	float SpawnWeight; // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.VehicleStandardGroup
// Size: 0x18 (Inherited: 0x08)
struct FVehicleStandardGroup : FTableRowBase {
	struct TArray<struct FVehicleSpawnInfo> VehicleStandardGroupInfos; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.VehicleSpawnInfo
// Size: 0x0c (Inherited: 0x00)
struct FVehicleSpawnInfo {
	struct FName RandomVehicleKey; // 0x00(0x08)
	int32_t SpawnCount; // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.ItemGroup
// Size: 0x18 (Inherited: 0x08)
struct FItemGroup : FTableRowBase {
	struct TArray<struct FItemGroupInfo> Items; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.ItemGroupInfo
// Size: 0x20 (Inherited: 0x00)
struct FItemGroupInfo {
	struct FDataTableRowHandle ItemRowHandle; // 0x00(0x10)
	struct FName SkinID; // 0x10(0x08)
	int32_t Count; // 0x18(0x04)
	float Probability; // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.RandomPackage
// Size: 0x90 (Inherited: 0x08)
struct FRandomPackage : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DisplayName; // 0x10(0x18)
	int32_t No; // 0x28(0x04)
	int32_t TicketCount; // 0x2c(0x04)
	struct TSoftObjectPtr<UObject> UMGIcon; // 0x30(0x28)
	struct TSoftObjectPtr<UObject> CohIcon; // 0x58(0x28)
	struct TArray<struct FRandomPackageProbability> Rewards; // 0x80(0x10)
};

// ScriptStruct BravoHotelGame.RandomPackageProbability
// Size: 0x30 (Inherited: 0x00)
struct FRandomPackageProbability {
	int32_t ID; // 0x00(0x04)
	int32_t Min; // 0x04(0x04)
	int32_t MAX; // 0x08(0x04)
	int32_t Rate; // 0x0c(0x04)
	int32_t DuplicateCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText DisplayName; // 0x18(0x18)
};

// ScriptStruct BravoHotelGame.TeamMemberInfo
// Size: 0x24 (Inherited: 0x00)
struct FTeamMemberInfo {
	int32_t TeamIndex; // 0x00(0x04)
	int32_t MemberIndex; // 0x04(0x04)
	struct FVector Location; // 0x08(0x0c)
	char pad_14[0x10]; // 0x14(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelErrorStringData
// Size: 0x40 (Inherited: 0x08)
struct FBravoHotelErrorStringData : FTableRowBase {
	struct FText DisplayString; // 0x08(0x18)
	bool bShowCode; // 0x20(0x01)
	bool bShowExtraDescription; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
	struct FText Desc; // 0x28(0x18)
};

// ScriptStruct BravoHotelGame.ItemSpawingInfoTableRow
// Size: 0x48 (Inherited: 0x08)
struct FItemSpawingInfoTableRow : FTableRowBase {
	struct FDataTableRowHandle Item; // 0x08(0x10)
	int32_t DefaultSpawnItemQuantiy; // 0x18(0x04)
	int32_t NumSpawnsMin; // 0x1c(0x04)
	int32_t NumSpawnsMax; // 0x20(0x04)
	bool bHasFollwingItem; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FDataTableRowHandle FollowingItem; // 0x28(0x10)
	int32_t DefaultFollowingItemSpawnQuantiy; // 0x38(0x04)
	int32_t NumFollowingSpawnsMin; // 0x3c(0x04)
	int32_t NumFollowingSpawnsMax; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct BravoHotelGame.WorldSpawnItemInfo
// Size: 0x10 (Inherited: 0x00)
struct FWorldSpawnItemInfo {
	int32_t SpawnBoxID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct ABravoHotelPickup* SpawnItem; // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.TableRedZoneData
// Size: 0x78 (Inherited: 0x08)
struct FTableRedZoneData : FTableRowBase {
	int32_t BeginPhase; // 0x08(0x04)
	int32_t EndPhase; // 0x0c(0x04)
	struct FRedZoneData DefaultRedZoneData; // 0x10(0x58)
	struct TArray<struct FRedZoneData> ArrayRedZoneData; // 0x68(0x10)
};

// ScriptStruct BravoHotelGame.RedZoneData
// Size: 0x58 (Inherited: 0x00)
struct FRedZoneData {
	enum class ERedZoneSelectType RedZoneSelectType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MinSpawnDelay; // 0x04(0x04)
	float MaxSpawnDelay; // 0x08(0x04)
	float SpawnRate; // 0x0c(0x04)
	int32_t AppearPhase; // 0x10(0x04)
	bool isOverwriteBombData; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FRedZoneBombData RedZoneBombData; // 0x18(0x40)
};

// ScriptStruct BravoHotelGame.RedZoneBombData
// Size: 0x40 (Inherited: 0x00)
struct FRedZoneBombData {
	float WarningTime; // 0x00(0x04)
	float MinRange; // 0x04(0x04)
	float MaxRange; // 0x08(0x04)
	float BombHeight; // 0x0c(0x04)
	float BombInterval; // 0x10(0x04)
	int32_t BombCount; // 0x14(0x04)
	float AircraftRandAngle; // 0x18(0x04)
	float AircraftRandWide; // 0x1c(0x04)
	int32_t AircraftLoopCount; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<float> AircraftSpawnPlan; // 0x28(0x10)
	int32_t MinBombPerInterval; // 0x38(0x04)
	int32_t MaxBombPerInterval; // 0x3c(0x04)
};

// ScriptStruct BravoHotelGame.ItemStandardGroup
// Size: 0x18 (Inherited: 0x08)
struct FItemStandardGroup : FTableRowBase {
	struct TArray<struct FItemStandardGroupInfo> ItemStandardGroupInfos; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.ResuscitationTypeData
// Size: 0xb0 (Inherited: 0x08)
struct FResuscitationTypeData : FTableRowBase {
	float ModifyPerCountSelf; // 0x08(0x04)
	float ModifyPerCountOther; // 0x0c(0x04)
	struct TMap<int32_t, float> CostPerCountSelf; // 0x10(0x50)
	struct TMap<int32_t, float> CostPerCountOther; // 0x60(0x50)
};

// ScriptStruct BravoHotelGame.PerkClassRuleData
// Size: 0xa8 (Inherited: 0x08)
struct FPerkClassRuleData : FTableRowBase {
	struct TMap<struct FName, int32_t> PerkClassNumCap; // 0x08(0x50)
	struct TMap<struct FName, float> PerkClassWeightModifier; // 0x58(0x50)
};

// ScriptStruct BravoHotelGame.TransportAircraftInfo
// Size: 0x80 (Inherited: 0x00)
struct FTransportAircraftInfo {
	struct FVector Start; // 0x00(0x0c)
	struct FVector End; // 0x0c(0x0c)
	struct FVector StartBlueZone; // 0x18(0x0c)
	struct FVector EndBlueZone; // 0x24(0x0c)
	struct FVector Target; // 0x30(0x0c)
	struct FVector SecondTarget; // 0x3c(0x0c)
	struct FName RandomItemKey; // 0x48(0x08)
	struct FVector DropBoxCurrentPos; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<float> DropDistances; // 0x60(0x10)
	struct TArray<struct ABravoHotelDropBoxActor*> DropBoxes; // 0x70(0x10)
};

// ScriptStruct BravoHotelGame.AddPerkInfos
// Size: 0x18 (Inherited: 0x08)
struct FAddPerkInfos : FTableRowBase {
	struct TArray<struct FAddPerkInfoArray> AddPerkInfos; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.AddPerkInfoArray
// Size: 0x10 (Inherited: 0x00)
struct FAddPerkInfoArray {
	struct TArray<struct FAddPerkInfo> AddPerkInfoArray; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.SupplyBoxAssignmentInfo
// Size: 0x30 (Inherited: 0x00)
struct FSupplyBoxAssignmentInfo {
	uint32_t Guid; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	float AssignmentTime; // 0x10(0x04)
	float AssignmentDelayTime; // 0x14(0x04)
	struct ABHPersonalSupplyBox* AssignSupplyBox; // 0x18(0x08)
	struct AActor* Spawner; // 0x20(0x08)
	bool IsTest; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct BravoHotelGame.VehicleTableRow
// Size: 0x40 (Inherited: 0x08)
struct FVehicleTableRow : FTableRowBase {
	struct TSoftClassPtr<UObject> VehicleClass; // 0x08(0x28)
	struct FVector SpawnLocationOffset; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct BravoHotelGame.DamageModifierByWeapon
// Size: 0x08 (Inherited: 0x00)
struct FDamageModifierByWeapon {
	enum class EWeaponType WeaponType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Value; // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.BoneDamageStruct
// Size: 0x18 (Inherited: 0x08)
struct FBoneDamageStruct : FTableRowBase {
	struct FName BoneName; // 0x08(0x08)
	float DamageFactor; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.WeaponAssetData
// Size: 0x740 (Inherited: 0x08)
struct FWeaponAssetData : FTableRowBase {
	struct FBravoHotelWeaponInfoADS ADS_Info; // 0x08(0x1f0)
	struct FBravoHotelWeaponInfoFPSK FPSK_Info; // 0x1f8(0x220)
	struct FWeaponAttachmentInfo Attachment_Info; // 0x418(0x318)
	struct UCurveVector* Curve_Sway_Idle; // 0x730(0x08)
	struct UCurveVector* Curve_Sway_Move; // 0x738(0x08)
};

// ScriptStruct BravoHotelGame.WeaponAbilityData
// Size: 0x3a8 (Inherited: 0x08)
struct FWeaponAbilityData : FTableRowBase {
	struct FName WeaponKey; // 0x08(0x08)
	struct FText DisplayName; // 0x10(0x18)
	struct FText DisplayDesc; // 0x28(0x18)
	struct FName AK_EventKey; // 0x40(0x08)
	float CrosshairIncrease; // 0x48(0x04)
	float CrosshairDecreaseSpeed; // 0x4c(0x04)
	float CrosshairInterpSpeed; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct UPaperSprite* SilhouetteIconTexture_PaperSprite; // 0x58(0x08)
	enum class EWeaponType WeaponType; // 0x60(0x01)
	enum class EThrowingWeaponType ThrowingWeaponType; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
	struct FText DisplayWeaponType; // 0x68(0x18)
	struct FText DisplayRangeType; // 0x80(0x18)
	int32_t Display_Damage; // 0x98(0x04)
	int32_t Display_EffectiveRange; // 0x9c(0x04)
	int32_t Display_Accuracy; // 0xa0(0x04)
	int32_t Display_RateofFire; // 0xa4(0x04)
	struct FName Display_AmmoInfo; // 0xa8(0x08)
	struct FName AllowedAmmoName; // 0xb0(0x08)
	float MinDamage; // 0xb8(0x04)
	float MaxDamage; // 0xbc(0x04)
	float Accuracy; // 0xc0(0x04)
	float FireRate; // 0xc4(0x04)
	float FireRateBurst; // 0xc8(0x04)
	float Weight; // 0xcc(0x04)
	int32_t NormalMagSize; // 0xd0(0x04)
	int32_t LargeMagSize; // 0xd4(0x04)
	struct FBravoHotelReloadInfo ReloadInfo; // 0xd8(0xb8)
	struct TArray<enum class EWeaponFireMode> AllowedFireModes; // 0x190(0x10)
	float ProjectileVelocity; // 0x1a0(0x04)
	float TerminalVelocity; // 0x1a4(0x04)
	int32_t BurstCount; // 0x1a8(0x04)
	int32_t BulletsPerShot; // 0x1ac(0x04)
	bool bIsBoltAction; // 0x1b0(0x01)
	char pad_1B1[0x3]; // 0x1b1(0x03)
	float BoltActionTime; // 0x1b4(0x04)
	float ADSToReloadDelayTime; // 0x1b8(0x04)
	float MoveSpeedModifier; // 0x1bc(0x04)
	struct FBravoHotelSpreadInfo Spread; // 0x1c0(0x40)
	struct FBravoHotelDeviation Deviation; // 0x200(0x2c)
	char pad_22C[0x4]; // 0x22c(0x04)
	struct FBravoHotelRecoilInfo Recoil; // 0x230(0x120)
	struct FBravoHotelDepthOfFieldBaseInfo DepthOfField; // 0x350(0x50)
	struct FBravoHotelArmsLag ArmsLag; // 0x3a0(0x08)
};

// ScriptStruct BravoHotelGame.WeaponSlot
// Size: 0x10 (Inherited: 0x00)
struct FWeaponSlot {
	struct TArray<enum class EWeaponType> AllowedWeaponTypes; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.CharacterMutableTagData
// Size: 0x28 (Inherited: 0x00)
struct FCharacterMutableTagData {
	int16_t HelmetLevel; // 0x00(0x02)
	int16_t ArmorLevel; // 0x02(0x02)
	int16_t BackpackLevel; // 0x04(0x02)
	bool bHoodOn; // 0x06(0x01)
	bool bPonyDynamicOn; // 0x07(0x01)
	bool bCoatDynamicOn; // 0x08(0x01)
	bool bSkirtDynamicOn; // 0x09(0x01)
	bool bSkirtDynamicOff; // 0x0a(0x01)
	bool bBackpackDynamicOff; // 0x0b(0x01)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString TargetBackpackPhysicsBone; // 0x10(0x10)
	bool bUseBack03_Slot; // 0x20(0x01)
	bool bUseRPG_Slot; // 0x21(0x01)
	bool bOuter; // 0x22(0x01)
	bool bGhillie; // 0x23(0x01)
	bool bHalfGhillie; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct BravoHotelGame.VehicleCrashDamage
// Size: 0x20 (Inherited: 0x00)
struct FVehicleCrashDamage {
	struct FFloatRange VelocityRange; // 0x00(0x10)
	float DamageToCharacter; // 0x10(0x04)
	float DamageToRigidBody; // 0x14(0x04)
	float DamageReductionToCharacter; // 0x18(0x04)
	float DamageReductionToRigidBody; // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.SpawnVehicleInfo
// Size: 0x10 (Inherited: 0x00)
struct FSpawnVehicleInfo {
	struct ABravoHotelVehicle* SpawnVehicleClass; // 0x00(0x08)
	float VehicleProbability; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.VehicleSpawnBoxList
// Size: 0x10 (Inherited: 0x00)
struct FVehicleSpawnBoxList {
	struct TArray<struct UBravoHotelVehicleSpawnBoxComponent*> List; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.WheelInfo
// Size: 0x08 (Inherited: 0x00)
struct FWheelInfo {
	int32_t Index; // 0x00(0x04)
	bool Show; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct BravoHotelGame.SeatInfo
// Size: 0x08 (Inherited: 0x00)
struct FSeatInfo {
	int32_t Index; // 0x00(0x04)
	bool Show; // 0x04(0x01)
	bool Mine; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct BravoHotelGame.G2C_Update_AuthToken
// Size: 0x20 (Inherited: 0x00)
struct FG2C_Update_AuthToken {
	struct FString Type; // 0x00(0x10)
	struct FG2C_Update_AuthToken_Data Data; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.G2C_Update_AuthToken_Data
// Size: 0x10 (Inherited: 0x00)
struct FG2C_Update_AuthToken_Data {
	struct FString auth_token; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.G2C_Game_View_Type
// Size: 0x18 (Inherited: 0x00)
struct FG2C_Game_View_Type {
	struct FString Type; // 0x00(0x10)
	struct FG2C_Game_View_Type_Data Data; // 0x10(0x02)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct BravoHotelGame.G2C_Game_View_Type_Data
// Size: 0x02 (Inherited: 0x00)
struct FG2C_Game_View_Type_Data {
	bool isGameViewTypeFPP; // 0x00(0x01)
	bool isGameViewTypeTPP; // 0x01(0x01)
};

// ScriptStruct BravoHotelGame.G2C_Matching_On_Off
// Size: 0x20 (Inherited: 0x00)
struct FG2C_Matching_On_Off {
	struct FString Type; // 0x00(0x10)
	struct FG2C_Matching_On_Off_Data Data; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.G2C_Matching_On_Off_Data
// Size: 0x10 (Inherited: 0x00)
struct FG2C_Matching_On_Off_Data {
	struct FString matchingOnOff; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.G2C_Battle_Mode_Possible
// Size: 0x18 (Inherited: 0x00)
struct FG2C_Battle_Mode_Possible {
	struct FString Type; // 0x00(0x10)
	struct FG2C_Battle_Mode_Possible_Data Data; // 0x10(0x03)
	char pad_13[0x5]; // 0x13(0x05)
};

// ScriptStruct BravoHotelGame.G2C_Battle_Mode_Possible_Data
// Size: 0x03 (Inherited: 0x00)
struct FG2C_Battle_Mode_Possible_Data {
	bool isBattleModeSoloPossible; // 0x00(0x01)
	bool isBattleModeDuoPossible; // 0x01(0x01)
	bool isBattleModeSquadPossible; // 0x02(0x01)
};

// ScriptStruct BravoHotelGame.G2C_Notify_Alarm
// Size: 0x18 (Inherited: 0x00)
struct FG2C_Notify_Alarm {
	struct FString Type; // 0x00(0x10)
	struct FG2C_Notify_Alarm_Data Data; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.G2C_Notify_Alarm_Data
// Size: 0x04 (Inherited: 0x00)
struct FG2C_Notify_Alarm_Data {
	int32_t notify_alarm; // 0x00(0x04)
};

// ScriptStruct BravoHotelGame.G2C_Notify_Emergency
// Size: 0x20 (Inherited: 0x00)
struct FG2C_Notify_Emergency {
	struct FString Type; // 0x00(0x10)
	struct FG2C_Notify_Emergency_Data Data; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.G2C_Notify_Emergency_Data
// Size: 0x10 (Inherited: 0x00)
struct FG2C_Notify_Emergency_Data {
	struct TArray<struct FG2C_Notify_Emergency_Array> notify_emergency; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.G2C_Notify_Emergency_Array
// Size: 0x20 (Inherited: 0x00)
struct FG2C_Notify_Emergency_Array {
	struct FString Language; // 0x00(0x10)
	struct FString notify; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.G2C_AllUserKick
// Size: 0x18 (Inherited: 0x00)
struct FG2C_AllUserKick {
	struct FString Type; // 0x00(0x10)
	struct FG2C_AllUserKick_Data Data; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BravoHotelGame.G2C_AllUserKick_Data
// Size: 0x01 (Inherited: 0x00)
struct FG2C_AllUserKick_Data {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.G2C_GoToDediWhenYouWerePlaying
// Size: 0xb0 (Inherited: 0x00)
struct FG2C_GoToDediWhenYouWerePlaying {
	struct FString Type; // 0x00(0x10)
	struct FG2C_GoToDediWhenYouWerePlaying_Data Data; // 0x10(0xa0)
};

// ScriptStruct BravoHotelGame.G2C_GoToDediWhenYouWerePlaying_Data
// Size: 0xa0 (Inherited: 0x00)
struct FG2C_GoToDediWhenYouWerePlaying_Data {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FString D; // 0x18(0x10)
	bool is_go; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString ds; // 0x30(0x10)
	struct FString Token; // 0x40(0x10)
	struct FString team_id; // 0x50(0x10)
	struct FString Key; // 0x60(0x10)
	int32_t how; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FString player_session_id; // 0x78(0x10)
	bool SpectatorOnly; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct FString AddOptions; // 0x90(0x10)
};

// ScriptStruct BravoHotelGame.C2G_GoToDediWhenYouWerePlaying
// Size: 0x18 (Inherited: 0x00)
struct FC2G_GoToDediWhenYouWerePlaying {
	struct FString Type; // 0x00(0x10)
	struct FC2G_GoToDediWhenYouWerePlaying_Data Data; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BravoHotelGame.C2G_GoToDediWhenYouWerePlaying_Data
// Size: 0x01 (Inherited: 0x00)
struct FC2G_GoToDediWhenYouWerePlaying_Data {
	bool is_go; // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoUpdatedPCInfo
// Size: 0x88 (Inherited: 0x00)
struct FG2C_PartyWhoUpdatedPCInfo {
	struct FString Type; // 0x00(0x10)
	struct FG2C_PartyWhoUpdatedPCInfo_Data Data; // 0x10(0x78)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoUpdatedPCInfo_Data
// Size: 0x78 (Inherited: 0x00)
struct FG2C_PartyWhoUpdatedPCInfo_Data {
	struct FString UID; // 0x00(0x10)
	struct FPartyPCInfo pc_info; // 0x10(0x68)
};

// ScriptStruct BravoHotelGame.PartyPCInfo
// Size: 0x68 (Inherited: 0x00)
struct FPartyPCInfo {
	struct FString pc_id; // 0x00(0x10)
	uint32_t class_type_index; // 0x10(0x04)
	uint32_t class_data_index; // 0x14(0x04)
	struct FPCLooks looks; // 0x18(0x18)
	struct TArray<struct FEquippedSlotInfo> wear_item; // 0x30(0x10)
	struct TArray<struct FEquippedSlotInfo> Weapon; // 0x40(0x10)
	struct TArray<struct FEquippedSlotInfo> perk; // 0x50(0x10)
	uint32_t exp; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct BravoHotelGame.G2C_FriendWhoAccept
// Size: 0x30 (Inherited: 0x00)
struct FG2C_FriendWhoAccept {
	struct FString Type; // 0x00(0x10)
	struct FG2C_FriendWhoAccept_Data Data; // 0x10(0x20)
};

// ScriptStruct BravoHotelGame.G2C_FriendWhoAccept_Data
// Size: 0x20 (Inherited: 0x00)
struct FG2C_FriendWhoAccept_Data {
	struct FString inviteUid; // 0x00(0x10)
	struct FString invitePlayerName; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.G2C_FriendWhoInvite
// Size: 0x30 (Inherited: 0x00)
struct FG2C_FriendWhoInvite {
	struct FString Type; // 0x00(0x10)
	struct FG2C_FriendWhoInvite_Data Data; // 0x10(0x20)
};

// ScriptStruct BravoHotelGame.G2C_FriendWhoInvite_Data
// Size: 0x20 (Inherited: 0x00)
struct FG2C_FriendWhoInvite_Data {
	struct FString FromUID; // 0x00(0x10)
	struct FString fromPlayerName; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoEnterLobby
// Size: 0x20 (Inherited: 0x00)
struct FG2C_PartyWhoEnterLobby {
	struct FString Type; // 0x00(0x10)
	struct FG2C_PartyWhoEnterLobby_Data Data; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoEnterLobby_Data
// Size: 0x10 (Inherited: 0x00)
struct FG2C_PartyWhoEnterLobby_Data {
	struct FString UID; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.C2G_EnterLobby
// Size: 0x18 (Inherited: 0x00)
struct FC2G_EnterLobby {
	struct FString Type; // 0x00(0x10)
	struct FC2G_EnterLobby_Data Data; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BravoHotelGame.C2G_EnterLobby_Data
// Size: 0x01 (Inherited: 0x00)
struct FC2G_EnterLobby_Data {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.G2C_FriendList
// Size: 0x20 (Inherited: 0x00)
struct FG2C_FriendList {
	struct FString Type; // 0x00(0x10)
	struct FG2C_FriendList_Data Data; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.G2C_FriendList_Data
// Size: 0x10 (Inherited: 0x00)
struct FG2C_FriendList_Data {
	struct TArray<struct FFriendInfo> friendInfoList; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.FriendInfo
// Size: 0x30 (Inherited: 0x00)
struct FFriendInfo {
	struct FString UID; // 0x00(0x10)
	struct FString player_name; // 0x10(0x10)
	struct FString status; // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.C2G_FriendList
// Size: 0x18 (Inherited: 0x00)
struct FC2G_FriendList {
	struct FString Type; // 0x00(0x10)
	struct FC2G_FriendList_Data Data; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BravoHotelGame.C2G_FriendList_Data
// Size: 0x01 (Inherited: 0x00)
struct FC2G_FriendList_Data {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoUpdateTierID
// Size: 0x20 (Inherited: 0x00)
struct FG2C_PartyWhoUpdateTierID {
	struct FString Type; // 0x00(0x10)
	struct FG2C_PartyWhoUpdateTierID_Data Data; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoUpdateTierID_Data
// Size: 0x10 (Inherited: 0x00)
struct FG2C_PartyWhoUpdateTierID_Data {
	struct TArray<struct FG2C_PartyWhoUpdateTierID_Array> party_who_update_tier_id; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoUpdateTierID_Array
// Size: 0x18 (Inherited: 0x00)
struct FG2C_PartyWhoUpdateTierID_Array {
	struct FString UID; // 0x00(0x10)
	uint32_t tier_id; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoPing
// Size: 0x28 (Inherited: 0x00)
struct FG2C_PartyWhoPing {
	struct FString Type; // 0x00(0x10)
	struct FG2C_PartyWhoPing_Data Data; // 0x10(0x18)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoPing_Data
// Size: 0x18 (Inherited: 0x00)
struct FG2C_PartyWhoPing_Data {
	struct FString UID; // 0x00(0x10)
	uint32_t Ping; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.C2G_PartyWhoPing
// Size: 0x18 (Inherited: 0x00)
struct FC2G_PartyWhoPing {
	struct FString Type; // 0x00(0x10)
	struct FC2G_PartyWhoPing_Data Data; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.C2G_PartyWhoPing_Data
// Size: 0x04 (Inherited: 0x00)
struct FC2G_PartyWhoPing_Data {
	uint32_t Ping; // 0x00(0x04)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoVoiceChat
// Size: 0x28 (Inherited: 0x00)
struct FG2C_PartyWhoVoiceChat {
	struct FString Type; // 0x00(0x10)
	struct FG2C_PartyWhoVoiceChat_Data Data; // 0x10(0x18)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoVoiceChat_Data
// Size: 0x18 (Inherited: 0x00)
struct FG2C_PartyWhoVoiceChat_Data {
	struct FString UID; // 0x00(0x10)
	bool is_voice_chat; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BravoHotelGame.C2G_PartyWhoVoiceChat
// Size: 0x18 (Inherited: 0x00)
struct FC2G_PartyWhoVoiceChat {
	struct FString Type; // 0x00(0x10)
	struct FC2G_PartyWhoVoiceChat_Data Data; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BravoHotelGame.C2G_PartyWhoVoiceChat_Data
// Size: 0x01 (Inherited: 0x00)
struct FC2G_PartyWhoVoiceChat_Data {
	bool is_voice_chat; // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoReady
// Size: 0x28 (Inherited: 0x00)
struct FG2C_PartyWhoReady {
	struct FString Type; // 0x00(0x10)
	struct FG2C_PartyWhoReady_Data Data; // 0x10(0x18)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoReady_Data
// Size: 0x18 (Inherited: 0x00)
struct FG2C_PartyWhoReady_Data {
	struct FString UID; // 0x00(0x10)
	bool is_ready; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BravoHotelGame.C2G_PartyWhoReady
// Size: 0x18 (Inherited: 0x00)
struct FC2G_PartyWhoReady {
	struct FString Type; // 0x00(0x10)
	struct FC2G_PartyWhoReady_Data Data; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BravoHotelGame.C2G_PartyWhoReady_Data
// Size: 0x01 (Inherited: 0x00)
struct FC2G_PartyWhoReady_Data {
	bool is_ready; // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.G2C_PartySelectMap
// Size: 0x48 (Inherited: 0x00)
struct FG2C_PartySelectMap {
	struct FString Type; // 0x00(0x10)
	struct FG2C_PartySelectMap_Data Data; // 0x10(0x38)
};

// ScriptStruct BravoHotelGame.G2C_PartySelectMap_Data
// Size: 0x38 (Inherited: 0x00)
struct FG2C_PartySelectMap_Data {
	struct FString Mode; // 0x00(0x10)
	struct FString Map; // 0x10(0x10)
	bool itself; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FString person; // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.C2G_PartySelectMap
// Size: 0x48 (Inherited: 0x00)
struct FC2G_PartySelectMap {
	struct FString Type; // 0x00(0x10)
	struct FC2G_PartySelectMap_Data Data; // 0x10(0x38)
};

// ScriptStruct BravoHotelGame.C2G_PartySelectMap_Data
// Size: 0x38 (Inherited: 0x00)
struct FC2G_PartySelectMap_Data {
	struct FString Mode; // 0x00(0x10)
	struct FString Map; // 0x10(0x10)
	bool itself; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FString person; // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.G2C_MatchCancel
// Size: 0x28 (Inherited: 0x00)
struct FG2C_MatchCancel {
	struct FString Type; // 0x00(0x10)
	struct FG2C_MatchCancel_Data Data; // 0x10(0x18)
};

// ScriptStruct BravoHotelGame.G2C_MatchCancel_Data
// Size: 0x18 (Inherited: 0x00)
struct FG2C_MatchCancel_Data {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.C2G_MatchCancel
// Size: 0x18 (Inherited: 0x00)
struct FC2G_MatchCancel {
	struct FString Type; // 0x00(0x10)
	struct FC2G_MatchCancel_Data Data; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BravoHotelGame.C2G_MatchCancel_Data
// Size: 0x01 (Inherited: 0x00)
struct FC2G_MatchCancel_Data {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.G2C_MatchSuccess
// Size: 0x88 (Inherited: 0x00)
struct FG2C_MatchSuccess {
	struct FString Type; // 0x00(0x10)
	struct FG2C_MatchSuccess_Data Data; // 0x10(0x78)
};

// ScriptStruct BravoHotelGame.G2C_MatchSuccess_Data
// Size: 0x78 (Inherited: 0x00)
struct FG2C_MatchSuccess_Data {
	struct FString ds; // 0x00(0x10)
	struct FString Token; // 0x10(0x10)
	struct FString team_id; // 0x20(0x10)
	struct FString Key; // 0x30(0x10)
	int32_t how; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString player_session_id; // 0x48(0x10)
	struct FString game_server_id; // 0x58(0x10)
	struct FString match_making_tag; // 0x68(0x10)
};

// ScriptStruct BravoHotelGame.G2C_MatchFail
// Size: 0x28 (Inherited: 0x00)
struct FG2C_MatchFail {
	struct FString Type; // 0x00(0x10)
	struct FG2C_MatchFail_Data Data; // 0x10(0x18)
};

// ScriptStruct BravoHotelGame.G2C_MatchFail_Data
// Size: 0x18 (Inherited: 0x00)
struct FG2C_MatchFail_Data {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.G2C_MatchRequest
// Size: 0x48 (Inherited: 0x00)
struct FG2C_MatchRequest {
	struct FString Type; // 0x00(0x10)
	struct FG2C_MatchRequest_Data Data; // 0x10(0x38)
};

// ScriptStruct BravoHotelGame.G2C_MatchRequest_Data
// Size: 0x38 (Inherited: 0x00)
struct FG2C_MatchRequest_Data {
	struct FString person; // 0x00(0x10)
	struct FString Mode; // 0x10(0x10)
	struct FString Map; // 0x20(0x10)
	int32_t how; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct BravoHotelGame.C2G_MatchRequest
// Size: 0x48 (Inherited: 0x00)
struct FC2G_MatchRequest {
	struct FString Type; // 0x00(0x10)
	struct FC2G_MatchRequest_Data Data; // 0x10(0x38)
};

// ScriptStruct BravoHotelGame.C2G_MatchRequest_Data
// Size: 0x38 (Inherited: 0x00)
struct FC2G_MatchRequest_Data {
	struct FString person; // 0x00(0x10)
	struct FString Mode; // 0x10(0x10)
	struct FString Map; // 0x20(0x10)
	int32_t how; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoMatchMakingTag
// Size: 0x30 (Inherited: 0x00)
struct FG2C_PartyWhoMatchMakingTag {
	struct FString Type; // 0x00(0x10)
	struct FG2C_PartyWhoMatchMakingTag_Data Data; // 0x10(0x20)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoMatchMakingTag_Data
// Size: 0x20 (Inherited: 0x00)
struct FG2C_PartyWhoMatchMakingTag_Data {
	struct FString UID; // 0x00(0x10)
	struct FString match_making_tag; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoOnline
// Size: 0x28 (Inherited: 0x00)
struct FG2C_PartyWhoOnline {
	struct FString Type; // 0x00(0x10)
	struct FG2C_PartyWhoOnline_Data Data; // 0x10(0x18)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoOnline_Data
// Size: 0x18 (Inherited: 0x00)
struct FG2C_PartyWhoOnline_Data {
	struct FString UID; // 0x00(0x10)
	bool is_online; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BravoHotelGame.G2C_PartyClientStatus
// Size: 0x48 (Inherited: 0x00)
struct FG2C_PartyClientStatus {
	struct FString Type; // 0x00(0x10)
	struct FG2C_PartyClientStatus_Data Data; // 0x10(0x38)
};

// ScriptStruct BravoHotelGame.G2C_PartyClientStatus_Data
// Size: 0x38 (Inherited: 0x00)
struct FG2C_PartyClientStatus_Data {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FString uidStatus; // 0x18(0x10)
	struct FString clientStatus; // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.C2G_PartyClientStatus
// Size: 0x20 (Inherited: 0x00)
struct FC2G_PartyClientStatus {
	struct FString Type; // 0x00(0x10)
	struct FC2G_PartyClientStatus_Data Data; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.C2G_PartyClientStatus_Data
// Size: 0x10 (Inherited: 0x00)
struct FC2G_PartyClientStatus_Data {
	struct FString clientStatus; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.G2C_PartyEntrustSomeone
// Size: 0x38 (Inherited: 0x00)
struct FG2C_PartyEntrustSomeone {
	struct FString Type; // 0x00(0x10)
	struct FG2C_PartyEntrustSomeone_Data Data; // 0x10(0x28)
};

// ScriptStruct BravoHotelGame.G2C_PartyEntrustSomeone_Data
// Size: 0x28 (Inherited: 0x00)
struct FG2C_PartyEntrustSomeone_Data {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FString uidEntrusted; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.C2G_PartyEntrustSomeone
// Size: 0x20 (Inherited: 0x00)
struct FC2G_PartyEntrustSomeone {
	struct FString Type; // 0x00(0x10)
	struct FC2G_PartyEntrustSomeone_Data Data; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.C2G_PartyEntrustSomeone_Data
// Size: 0x10 (Inherited: 0x00)
struct FC2G_PartyEntrustSomeone_Data {
	struct FString uidEntrusted; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.G2C_PartyKickSomeone
// Size: 0x38 (Inherited: 0x00)
struct FG2C_PartyKickSomeone {
	struct FString Type; // 0x00(0x10)
	struct FG2C_PartyKickSomeone_Data Data; // 0x10(0x28)
};

// ScriptStruct BravoHotelGame.G2C_PartyKickSomeone_Data
// Size: 0x28 (Inherited: 0x00)
struct FG2C_PartyKickSomeone_Data {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FString D; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.C2G_PartyKickSomeone
// Size: 0x20 (Inherited: 0x00)
struct FC2G_PartyKickSomeone {
	struct FString Type; // 0x00(0x10)
	struct FC2G_PartyKickSomeone_Data Data; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.C2G_PartyKickSomeone_Data
// Size: 0x10 (Inherited: 0x00)
struct FC2G_PartyKickSomeone_Data {
	struct FString uidKicked; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoLeaved
// Size: 0x30 (Inherited: 0x00)
struct FG2C_PartyWhoLeaved {
	struct FString Type; // 0x00(0x10)
	struct FG2C_PartyWhoLeaved_Data Data; // 0x10(0x20)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoLeaved_Data
// Size: 0x20 (Inherited: 0x00)
struct FG2C_PartyWhoLeaved_Data {
	struct FString uidLeaved; // 0x00(0x10)
	struct FString uidBoss; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.G2C_PartyLeave
// Size: 0x28 (Inherited: 0x00)
struct FG2C_PartyLeave {
	struct FString Type; // 0x00(0x10)
	struct FG2C_PartyLeave_Data Data; // 0x10(0x18)
};

// ScriptStruct BravoHotelGame.G2C_PartyLeave_Data
// Size: 0x18 (Inherited: 0x00)
struct FG2C_PartyLeave_Data {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.C2G_PartyLeave
// Size: 0x18 (Inherited: 0x00)
struct FC2G_PartyLeave {
	struct FString Type; // 0x00(0x10)
	struct FC2G_PartyLeave_Data Data; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BravoHotelGame.C2G_PartyLeave_Data
// Size: 0x01 (Inherited: 0x00)
struct FC2G_PartyLeave_Data {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoJoined
// Size: 0x70 (Inherited: 0x00)
struct FG2C_PartyWhoJoined {
	struct FString Type; // 0x00(0x10)
	struct FPartyUser Data; // 0x10(0x60)
};

// ScriptStruct BravoHotelGame.PartyUser
// Size: 0x60 (Inherited: 0x00)
struct FPartyUser {
	struct FString UID; // 0x00(0x10)
	struct FString playerName; // 0x10(0x10)
	bool IsReady; // 0x20(0x01)
	bool IsOnline; // 0x21(0x01)
	bool IsVoiceChat; // 0x22(0x01)
	char pad_23[0x5]; // 0x23(0x05)
	struct FString clientStatus; // 0x28(0x10)
	uint32_t SeasonTierID; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString matchMakingTag; // 0x40(0x10)
	struct FString steamID; // 0x50(0x10)
};

// ScriptStruct BravoHotelGame.G2C_PartyYouJoined
// Size: 0x80 (Inherited: 0x00)
struct FG2C_PartyYouJoined {
	struct FString Type; // 0x00(0x10)
	struct FG2C_PartyYouJoined_Data Data; // 0x10(0x70)
};

// ScriptStruct BravoHotelGame.G2C_PartyYouJoined_Data
// Size: 0x70 (Inherited: 0x00)
struct FG2C_PartyYouJoined_Data {
	struct FPartyInfo PartyInfo; // 0x00(0x68)
	bool is_invite; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// ScriptStruct BravoHotelGame.PartyInfo
// Size: 0x68 (Inherited: 0x00)
struct FPartyInfo {
	struct FString PartyID; // 0x00(0x10)
	struct FString uidBoss; // 0x10(0x10)
	struct TArray<struct FPartyUser> partyUserList; // 0x20(0x10)
	struct FSelectedMapInfo SelectedMapInfo; // 0x30(0x38)
};

// ScriptStruct BravoHotelGame.SelectedMapInfo
// Size: 0x38 (Inherited: 0x00)
struct FSelectedMapInfo {
	struct FString Mode; // 0x00(0x10)
	struct FString Map; // 0x10(0x10)
	bool itself; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FString person; // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.G2C_PartyAcceptFailed
// Size: 0x28 (Inherited: 0x00)
struct FG2C_PartyAcceptFailed {
	struct FString Type; // 0x00(0x10)
	struct FG2C_PartyAcceptFailed_Data Data; // 0x10(0x18)
};

// ScriptStruct BravoHotelGame.G2C_PartyAcceptFailed_Data
// Size: 0x18 (Inherited: 0x00)
struct FG2C_PartyAcceptFailed_Data {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.C2G_PartyAccept
// Size: 0x20 (Inherited: 0x00)
struct FC2G_PartyAccept {
	struct FString Type; // 0x00(0x10)
	struct FC2G_PartyAccept_Data Data; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.C2G_PartyAccept_Data
// Size: 0x10 (Inherited: 0x00)
struct FC2G_PartyAccept_Data {
	struct FString partyTicket; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.G2C_PartyInvited_From
// Size: 0x40 (Inherited: 0x00)
struct FG2C_PartyInvited_From {
	struct FString Type; // 0x00(0x10)
	struct FG2C_PartyInvited_From_Data Data; // 0x10(0x30)
};

// ScriptStruct BravoHotelGame.G2C_PartyInvited_From_Data
// Size: 0x30 (Inherited: 0x00)
struct FG2C_PartyInvited_From_Data {
	struct FString partyTicket; // 0x00(0x10)
	struct FString FromUID; // 0x10(0x10)
	struct FString fromPlayerName; // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.G2C_PartyInvite
// Size: 0x38 (Inherited: 0x00)
struct FG2C_PartyInvite {
	struct FString Type; // 0x00(0x10)
	struct FG2C_PartyInvite_Data Data; // 0x10(0x28)
};

// ScriptStruct BravoHotelGame.G2C_PartyInvite_Data
// Size: 0x28 (Inherited: 0x00)
struct FG2C_PartyInvite_Data {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FString toUid; // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.C2G_PartyInvite
// Size: 0x20 (Inherited: 0x00)
struct FC2G_PartyInvite {
	struct FString Type; // 0x00(0x10)
	struct FC2G_PartyInvite_Data Data; // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.C2G_PartyInvite_Data
// Size: 0x10 (Inherited: 0x00)
struct FC2G_PartyInvite_Data {
	struct FString toUid; // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.G2C_Login
// Size: 0x88 (Inherited: 0x00)
struct FG2C_Login {
	struct FString Type; // 0x00(0x10)
	struct FG2C_Login_Data Data; // 0x10(0x78)
};

// ScriptStruct BravoHotelGame.G2C_Login_Data
// Size: 0x78 (Inherited: 0x00)
struct FG2C_Login_Data {
	uint32_t C; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString E; // 0x08(0x10)
	struct FString D; // 0x18(0x10)
	struct FString UID; // 0x28(0x10)
	struct FString playerName; // 0x38(0x10)
	struct FString URL; // 0x48(0x10)
	bool isCanGoDedi; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FString matchingOnOff; // 0x60(0x10)
	bool isBattleModeSoloPossible; // 0x70(0x01)
	bool isBattleModeDuoPossible; // 0x71(0x01)
	bool isBattleModeSquadPossible; // 0x72(0x01)
	bool isWhiteIP; // 0x73(0x01)
	bool isGameViewTypeFPP; // 0x74(0x01)
	bool isGameViewTypeTPP; // 0x75(0x01)
	char pad_76[0x2]; // 0x76(0x02)
};

// ScriptStruct BravoHotelGame.C2G_Login
// Size: 0x40 (Inherited: 0x00)
struct FC2G_Login {
	struct FString Type; // 0x00(0x10)
	struct FC2G_Login_Data Data; // 0x10(0x30)
};

// ScriptStruct BravoHotelGame.C2G_Login_Data
// Size: 0x30 (Inherited: 0x00)
struct FC2G_Login_Data {
	struct FString SessionID; // 0x00(0x10)
	struct FString AuthToken; // 0x10(0x10)
	struct FString match_making_tag; // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.DistributionRuleParams
// Size: 0x01 (Inherited: 0x00)
struct FDistributionRuleParams {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.PrefabRuleParams
// Size: 0x01 (Inherited: 0x00)
struct FPrefabRuleParams {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.ActorTagRuleParams
// Size: 0x01 (Inherited: 0x00)
struct FActorTagRuleParams {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.QuadRuleParams
// Size: 0x01 (Inherited: 0x00)
struct FQuadRuleParams {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.GridRuleParams
// Size: 0x01 (Inherited: 0x00)
struct FGridRuleParams {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.ReplicationItemInfo
// Size: 0x18 (Inherited: 0x00)
struct FReplicationItemInfo {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct BravoHotelGame.RepClimbInfo
// Size: 0xd8 (Inherited: 0x00)
struct FRepClimbInfo {
	struct FVector_NetQuantize TargetPosition; // 0x00(0x0c)
	struct FVector_NetQuantizeNormal WallNormal; // 0x0c(0x0c)
	float HitHeight; // 0x18(0x04)
	float WallThickness; // 0x1c(0x04)
	struct UAnimMontage* PlayMontage; // 0x20(0x08)
	bool bBreakWindow; // 0x28(0x01)
	bool bClimbOver; // 0x29(0x01)
	bool bSprint; // 0x2a(0x01)
	bool bLedgeGrab; // 0x2b(0x01)
	bool bLedgeGrabBlocked; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct UParkourWindowComponent* TargetComponent; // 0x30(0x08)
	int8_t ClimbDataIndex; // 0x38(0x01)
	char pad_39[0x9f]; // 0x39(0x9f)
};

// ScriptStruct BravoHotelGame.ParkourEvent
// Size: 0x18 (Inherited: 0x00)
struct FParkourEvent {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct BravoHotelGame.ChangeEquipResult
// Size: 0x0c (Inherited: 0x00)
struct FChangeEquipResult {
	bool Equip; // 0x00(0x01)
	bool UnEquip; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FName ItemKey; // 0x04(0x08)
};

// ScriptStruct BravoHotelGame.MaterialProperties
// Size: 0x10 (Inherited: 0x08)
struct FMaterialProperties : FTableRowBase {
	float Toughness; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.STFloat
// Size: 0x40 (Inherited: 0x00)
struct FSTFloat {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct BravoHotelGame.STInt
// Size: 0x40 (Inherited: 0x00)
struct FSTInt {
	char pad_0[0x40]; // 0x00(0x40)
};

