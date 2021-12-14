// Enum BravoHotelGame.EBuffEventType
enum class EBuffEventType : uint8 
{
	EBuffEventType::None                     = 0,
	EBuffEventType::ActiveSkill00            = 1,
	EBuffEventType::ActiveSkill01            = 2,
	EBuffEventType::ActiveSkill02            = 3,
	EBuffEventType::ActiveSkill03            = 4,
	EBuffEventType::CancleActiveSkill00      = 5,
	EBuffEventType::CancleActiveSkill01      = 6,
	EBuffEventType::CancleActiveSkill02      = 7,
	EBuffEventType::CancleActiveSkill03      = 8,
	EBuffEventType::ReactiveSkill00          = 9,
	EBuffEventType::ReactiveSkill01          = 10,
	EBuffEventType::ReactiveSkill02          = 11,
	EBuffEventType::ReactiveSkill03          = 12,
	EBuffEventType::TT_Wood                  = 13,
	EBuffEventType::TT_Rock                  = 14,
	EBuffEventType::TT_Indoor                = 15,
	EBuffEventType::TT_Fence                 = 16,
	EBuffEventType::TT_Grass                 = 17,
	EBuffEventType::TT_Cliff                 = 18,
	EBuffEventType::TT_Water                 = 19,
	EBuffEventType::TT_Air                   = 20,
	EBuffEventType::TT_Vehicle               = 21,
	EBuffEventType::Hited                    = 22,
	EBuffEventType::Damaged                  = 23,
	EBuffEventType::ZeroHP                   = 24,
	EBuffEventType::Death                    = 25,
	EBuffEventType::ArmorBreak               = 26,
	EBuffEventType::TeamKnockDown            = 27,
	EBuffEventType::AfterLanding             = 28,
	EBuffEventType::Prone3Second             = 29,
	EBuffEventType::Health25Percent          = 30,
	EBuffEventType::FillFuel                 = 31,
	EBuffEventType::Landed                   = 32,
	EBuffEventType::CarLanded                = 33,
	EBuffEventType::ExitVehicle              = 34,
	EBuffEventType::KickDoor                 = 35,
	EBuffEventType::RevivingTeam             = 36,
	EBuffEventType::ResuscitatingTeam        = 37,
	EBuffEventType::UsingMedicine            = 38,
	EBuffEventType::UsingItem                = 39,
	EBuffEventType::Jump                     = 40,
	EBuffEventType::Retreat                  = 41,
	EBuffEventType::Nuclear                  = 42,
	EBuffEventType::IntoSmoke                = 43,
	EBuffEventType::OutofSmoke               = 44,
	EBuffEventType::FireAxShot               = 45,
	EBuffEventType::StartParkour             = 46,
	EBuffEventType::OnTakeHeadShot           = 47,
	EBuffEventType::ChangeWeapon             = 48,
	EBuffEventType::Fire                     = 49,
	EBuffEventType::OnEnterADS               = 50,
	EBuffEventType::WindowBreaching          = 51,
	EBuffEventType::IntoWaterPhysicsVolume   = 52,
	EBuffEventType::OutofWaterPhysicsVolume  = 53,
	EBuffEventType::IntoWetFog               = 54,
	EBuffEventType::OutofWetFog              = 55,
	EBuffEventType::Reloading                = 56,
	EBuffEventType::MAX                      = 57,
	EBuffEventType::NoIndex                  = 255
};

// Enum BravoHotelGame.EWeaponType
enum class EWeaponType : uint8 
{
	EWeaponType::WT_None                     = 0,
	EWeaponType::WT_Assault                  = 1,
	EWeaponType::WT_DMR                      = 2,
	EWeaponType::WT_SMG                      = 3,
	EWeaponType::WT_SniperRifle              = 4,
	EWeaponType::WT_Shotgun                  = 5,
	EWeaponType::WT_Pistol                   = 6,
	EWeaponType::WT_ThrowingWeapon           = 7,
	EWeaponType::WT_Melee                    = 8,
	EWeaponType::WT_SecondaryWeapon          = 9,
	EWeaponType::WT_PerkWeapon               = 10,
	EWeaponType::WT_MainWeapon               = 101,
	EWeaponType::WT_SubWeapon                = 102,
	EWeaponType::WT_FlareGun                 = 103,
	EWeaponType::WT_LMG                      = 104,
	EWeaponType::WT_All                      = 105,
	EWeaponType::WT_MAX                      = 106
};

// Enum BravoHotelGame.EWeaponBuffEventType
enum class EWeaponBuffEventType : uint8 
{
	EWeaponBuffEventType::None               = 0,
	EWeaponBuffEventType::HeadShotZeroHPEnemy = 1,
	EWeaponBuffEventType::LastShot           = 2,
	EWeaponBuffEventType::ZeroHPEnemy        = 3,
	EWeaponBuffEventType::ThrowingZeroHP     = 4,
	EWeaponBuffEventType::TargetHit          = 5,
	EWeaponBuffEventType::SRShot             = 6,
	EWeaponBuffEventType::DMRShot            = 7,
	EWeaponBuffEventType::Shot               = 8,
	EWeaponBuffEventType::ActiveGrenade      = 9,
	EWeaponBuffEventType::NoAmmoReload       = 10,
	EWeaponBuffEventType::MAX                = 11,
	EWeaponBuffEventType::NoIndex            = 255
};

// Enum BravoHotelGame.EMediaPlayerState
enum class EMediaPlayerState : uint8 
{
	EMediaPlayerState::MPS_Play              = 0,
	EMediaPlayerState::MPS_End               = 1,
	EMediaPlayerState::MPS_MAX               = 2
};

// Enum BravoHotelGame.EAircraftFlightState
enum class EAircraftFlightState : uint8 
{
	EAircraftFlightState::AFS_None           = 0,
	EAircraftFlightState::AFS_Distributing   = 1,
	EAircraftFlightState::AFS_ReadyToScramble = 2,
	EAircraftFlightState::AFS_Scrambling     = 3,
	EAircraftFlightState::AFS_End            = 4,
	EAircraftFlightState::AFS_MAX            = 5
};

// Enum BravoHotelGame.EAircraftMovementMethod
enum class EAircraftMovementMethod : uint8 
{
	EAircraftMovementMethod::AMT_USING_SPEED = 0,
	EAircraftMovementMethod::AMT_USING_MAX   = 1
};

// Enum BravoHotelGame.EPickupRoot
enum class EPickupRoot : uint8 
{
	EPickupRoot::PR_World                    = 0,
	EPickupRoot::PR_DeadBody                 = 1,
	EPickupRoot::PR_TransportSupply          = 2,
	EPickupRoot::PR_PersonalSupply           = 3,
	EPickupRoot::PR_Skill                    = 4,
	EPickupRoot::PR_None                     = 255,
	EPickupRoot::PR_MAX                      = 256
};

// Enum BravoHotelGame.EItemBindType
enum class EItemBindType : uint8 
{
	EItemBindType::None                      = 0,
	EItemBindType::Supply                    = 1,
	EItemBindType::Bindable                  = 2,
	EItemBindType::Binded                    = 3,
	EItemBindType::EItemBindType_MAX         = 4
};

// Enum BravoHotelGame.EInventoryItemState
enum class EInventoryItemState : uint8 
{
	EInventoryItemState::IIS_None            = 0,
	EInventoryItemState::IIS_World           = 1,
	EInventoryItemState::IIS_Inventory       = 2,
	EInventoryItemState::IIS_Wearing         = 3,
	EInventoryItemState::IIS_Equipped        = 4,
	EInventoryItemState::IIS_AttachWeapon    = 5,
	EInventoryItemState::IIS_Dropped         = 6,
	EInventoryItemState::IIS_MaterialSlot    = 7,
	EInventoryItemState::IIS_MAX             = 8
};

// Enum BravoHotelGame.EReplicationItemListType
enum class EReplicationItemListType : uint8 
{
	EReplicationItemListType::None           = 0,
	EReplicationItemListType::BackPackItem   = 1,
	EReplicationItemListType::MaterialItem   = 2,
	EReplicationItemListType::EReplicationItemListType_MAX = 3
};

// Enum BravoHotelGame.EAbilityCase
enum class EAbilityCase : uint8 
{
	EAbilityCase::AC_None                    = 0,
	EAbilityCase::AC_Base                    = 1,
	EAbilityCase::AC_Booster                 = 2,
	EAbilityCase::AC_Wearable                = 3,
	EAbilityCase::AC_OutOfSteady             = 4,
	EAbilityCase::AC_NoDamage                = 5,
	EAbilityCase::AC_KnockOut                = 6,
	EAbilityCase::AC_Death                   = 7,
	EAbilityCase::AC_UseLadder               = 8,
	EAbilityCase::AC_ClimbUp                 = 9,
	EAbilityCase::AC_Cheat                   = 10,
	EAbilityCase::AC_Damaged                 = 11,
	EAbilityCase::AC_UnderWater              = 12,
	EAbilityCase::AC_CastingItem             = 13,
	EAbilityCase::AC_IceLand                 = 14,
	EAbilityCase::AC_Reviving                = 15,
	EAbilityCase::AC_KickDoor                = 16,
	EAbilityCase::AC_Sliding                 = 17,
	EAbilityCase::AC_Rolling                 = 18,
	EAbilityCase::AC_Knockback               = 19,
	EAbilityCase::AC_Ultimate                = 20,
	EAbilityCase::AC_DriverBuff              = 21,
	EAbilityCase::AC_Max                     = 22
};

// Enum BravoHotelGame.ECharacterConditionType
enum class ECharacterConditionType : uint8 
{
	ECharacterConditionType::CCT_None        = 0,
	ECharacterConditionType::CCT_NoDamage    = 1,
	ECharacterConditionType::CCT_NoSprint    = 2,
	ECharacterConditionType::CCT_NoSteadyAim = 3,
	ECharacterConditionType::CCT_NoOxygen    = 4,
	ECharacterConditionType::CCT_KnockOut    = 5,
	ECharacterConditionType::CCT_CantAttack  = 6,
	ECharacterConditionType::CCT_CantAction  = 7,
	ECharacterConditionType::CCT_CantMove    = 8,
	ECharacterConditionType::CCT_CantRotation = 9,
	ECharacterConditionType::CCT_CantGainItem = 10,
	ECharacterConditionType::CCT_CantChangeGroundState = 11,
	ECharacterConditionType::CCT_PerfectShot = 12,
	ECharacterConditionType::CCT_Cold        = 13,
	ECharacterConditionType::CCT_Heat        = 14,
	ECharacterConditionType::CCT_Burn        = 15,
	ECharacterConditionType::CCT_Wet         = 16,
	ECharacterConditionType::CCT_Hurt        = 17,
	ECharacterConditionType::CCT_Stun        = 18,
	ECharacterConditionType::CCT_SpatialSense = 19,
	ECharacterConditionType::CCT_Deafen      = 20,
	ECharacterConditionType::CCT_Teleport    = 21,
	ECharacterConditionType::CCT_InWetFog    = 22,
	ECharacterConditionType::CCT_BlackOut    = 23,
	ECharacterConditionType::CCT_ForceField  = 24,
	ECharacterConditionType::CCT_Amplifier   = 25,
	ECharacterConditionType::CCT_HeartBeatSensor = 26,
	ECharacterConditionType::CCT_Resurrection = 27,
	ECharacterConditionType::CCT_CanSliding  = 28,
	ECharacterConditionType::CCT_CanChangeGroundStateOnWater = 29,
	ECharacterConditionType::CCT_CanBreaching = 30,
	ECharacterConditionType::CCT_NoFallingDamage = 31,
	ECharacterConditionType::CCT_NoLandingAnim = 32,
	ECharacterConditionType::CCT_WalkSilently = 33,
	ECharacterConditionType::CCT_MoveSilently = 34,
	ECharacterConditionType::CCT_AllSilently = 35,
	ECharacterConditionType::CCT_WaterSilently = 36,
	ECharacterConditionType::CCT_UseFlashbangBoobyTrap = 37,
	ECharacterConditionType::CCT_RocketJump  = 38,
	ECharacterConditionType::CCT_SuperThrowingTrail = 39,
	ECharacterConditionType::CCT_HelmetSound = 40,
	ECharacterConditionType::CCT_GoodMoveOnWater = 41,
	ECharacterConditionType::CCT_BreakSilentlyPakour = 42,
	ECharacterConditionType::CCT_AvoidHeadShot = 43,
	ECharacterConditionType::CCT_HeadBanging = 44,
	ECharacterConditionType::CCT_HandSpeed   = 45,
	ECharacterConditionType::CCT_HandSpeedADS = 46,
	ECharacterConditionType::CCT_SkipBoltAction = 47,
	ECharacterConditionType::CCT_Stuntman    = 48,
	ECharacterConditionType::CCT_SeeThroughSmoke = 49,
	ECharacterConditionType::CCT_JetpackBooster = 50,
	ECharacterConditionType::CCT_JetpackAimBooster = 51,
	ECharacterConditionType::CCT_MeteorJump  = 52,
	ECharacterConditionType::CCT_KeepHealthOne = 53,
	ECharacterConditionType::CCT_CantDropItem = 54,
	ECharacterConditionType::CCT_LockCurrentWeapon = 55,
	ECharacterConditionType::CCT_NoCarLandingDamageToTeam = 56,
	ECharacterConditionType::CCT_Max         = 57
};

// Enum BravoHotelGame.EPerkLevelUpType
enum class EPerkLevelUpType : uint8 
{
	EPerkLevelUpType::Default                = 0,
	EPerkLevelUpType::ByBuff                 = 1,
	EPerkLevelUpType::ByKill                 = 2,
	EPerkLevelUpType::ByPhase                = 3,
	EPerkLevelUpType::ByGameStart            = 4,
	EPerkLevelUpType::EPerkLevelUpType_MAX   = 5
};

// Enum BravoHotelGame.EPerkSlotFlag
enum class EPerkSlotFlag : uint8 
{
	EPerkSlotFlag::PSF_None                  = 0,
	EPerkSlotFlag::PSF_Red                   = 1,
	EPerkSlotFlag::PSF_Green                 = 2,
	EPerkSlotFlag::PSF_Blue                  = 4,
	EPerkSlotFlag::PSF_All                   = 255,
	EPerkSlotFlag::PSF_MAX                   = 256
};

// Enum BravoHotelGame.ECastingUIType
enum class ECastingUIType : uint8 
{
	ECastingUIType::CUT_Item                 = 0,
	ECastingUIType::CUT_Revive               = 1,
	ECastingUIType::CUT_Resuscitation        = 2,
	ECastingUIType::CUT_PersonalSupplyBox    = 3,
	ECastingUIType::CUT_Reload               = 4,
	ECastingUIType::CUT_Combine              = 5,
	ECastingUIType::CUT_Repair               = 6,
	ECastingUIType::CUT_MAX                  = 7
};

// Enum BravoHotelGame.ESettingType
enum class ESettingType : uint8 
{
	ESettingType::Begin                      = 0,
	ESettingType::Graphic_Begin              = 1,
	ESettingType::Graphic_Language           = 2,
	ESettingType::Graphic_Resolution         = 3,
	ESettingType::Graphic_ResolutionX        = 4,
	ESettingType::Graphic_ResolutionY        = 5,
	ESettingType::Graphic_DisplayMod         = 6,
	ESettingType::Graphic_Gamma              = 7,
	ESettingType::Graphic_Sharpen            = 8,
	ESettingType::Graphic_FieldOfView        = 9,
	ESettingType::Graphic_ResolutionScale    = 10,
	ESettingType::Graphic_TotalGraphic       = 11,
	ESettingType::Graphic_FoliageDensity     = 12,
	ESettingType::Graphic_AntiAliasing       = 13,
	ESettingType::Graphic_PostProcessing     = 14,
	ESettingType::Graphic_ShdowQuality       = 15,
	ESettingType::Graphic_ShadingQuality     = 16,
	ESettingType::Graphic_ViewDistanceQuality = 17,
	ESettingType::Graphic_TextureQuality     = 18,
	ESettingType::Graphic_EffectQuality      = 19,
	ESettingType::Graphic_VSync              = 20,
	ESettingType::Graphic_SmoothFrameRate    = 21,
	ESettingType::Graphic_ConfirmTime        = 22,
	ESettingType::Graphic_Reflex             = 23,
	ESettingType::Graphic_DLSS               = 24,
	ESettingType::Graphic_MaxFrameRate       = 25,
	ESettingType::Graphic_MaxLobbyFrameRate  = 26,
	ESettingType::Graphic_DepthOfField       = 27,
	ESettingType::Graphic_FSR                = 28,
	ESettingType::Graphic_End                = 29,
	ESettingType::Audio_Begin                = 30,
	ESettingType::Audio_MasterVolumeOnOff    = 31,
	ESettingType::Audio_Master               = 32,
	ESettingType::Audio_Music                = 33,
	ESettingType::Audio_Effect               = 34,
	ESettingType::Audio_UI                   = 35,
	ESettingType::Audio_VoiceInputMode       = 36,
	ESettingType::Audio_VoiceChanel          = 37,
	ESettingType::Audio_VoiceInput           = 38,
	ESettingType::Audio_VoiceOutput          = 39,
	ESettingType::Audio_End                  = 40,
	ESettingType::Key                        = 41,
	ESettingType::Control_Begin              = 42,
	ESettingType::Control_VerticalModifier   = 43,
	ESettingType::Control_GeneralSensitivity = 44,
	ESettingType::Control_VehicleDriverSensitivity = 45,
	ESettingType::Control_TargetingSensitivity = 46,
	ESettingType::Control_TotalSensitivity   = 47,
	ESettingType::Control_UsingDetailSensitivity = 48,
	ESettingType::Control_ADSSensitivity     = 49,
	ESettingType::Control_2XSensitivity      = 50,
	ESettingType::Control_4XSensitivity      = 51,
	ESettingType::Control_6XSensitivity      = 52,
	ESettingType::Control_8XSensitivity      = 53,
	ESettingType::Control_15XSensitivity     = 54,
	ESettingType::Control_ToggleCrouch       = 55,
	ESettingType::Control_ToggleWalk         = 56,
	ESettingType::Control_ToggleSprint       = 57,
	ESettingType::Control_ToggleFreeLook     = 58,
	ESettingType::Control_ToggleSteadyAim    = 59,
	ESettingType::Control_ToggleExLean       = 60,
	ESettingType::Control_ToggleAOS          = 61,
	ESettingType::Control_ToggleADS          = 62,
	ESettingType::Control_ReverseLeftAndRight = 63,
	ESettingType::Control_ReverseUpAndDown   = 64,
	ESettingType::Control_End                = 65,
	ESettingType::GamePlay_Begin             = 66,
	ESettingType::GamePlay_ARFireMode        = 67,
	ESettingType::GamePlay_SMGFireMode       = 68,
	ESettingType::GamePlay_SRFireMode        = 69,
	ESettingType::GamePlay_DMRFireMode       = 70,
	ESettingType::GamePlay_PistolFireMode    = 71,
	ESettingType::GamePlay_AutoReload        = 72,
	ESettingType::GamePlay_ImmediateAttachment = 73,
	ESettingType::GamePlay_InheritAttachment = 74,
	ESettingType::GamePlay_ShowPerkSlot      = 75,
	ESettingType::GamePlay_ShowSmartPing     = 76,
	ESettingType::GamePlay_ShowSmartPingSupplyBox = 77,
	ESettingType::GamePlay_ShowSmartPingLightPole = 78,
	ESettingType::GamePlay_NetworkDebugStatistics = 79,
	ESettingType::GamePlay_ShowUseaableItemEffect = 80,
	ESettingType::GamePlay_AmmoEffect        = 81,
	ESettingType::GamePlay_MedicalLv3Effect  = 82,
	ESettingType::GamePlay_MedicalLv2Effect  = 83,
	ESettingType::GamePlay_MedicalLv1Effect  = 84,
	ESettingType::GamePlay_RedBoostEffect    = 85,
	ESettingType::GamePlay_GreenBoostEffect  = 86,
	ESettingType::GamePlay_BlueBoostEffect   = 87,
	ESettingType::GamePlay_AutoUse_MedicalLv1 = 88,
	ESettingType::GamePlay_AutoUse_MedicalLv2 = 89,
	ESettingType::GamePlay_AutoUse_MedicalLv3 = 90,
	ESettingType::GamePlay_AutoLadder        = 91,
	ESettingType::GamePlay_ShowGuideWidget   = 92,
	ESettingType::GamePlay_SearchMaterialItem = 93,
	ESettingType::GamePlay_SearchExpertWeaponItem = 94,
	ESettingType::GamePlay_ShowDamageLog     = 95,
	ESettingType::GamePlay_PlayTutorial      = 96,
	ESettingType::GamePlay_RePlayTutorial    = 97,
	ESettingType::GamePlay_CrossHair         = 98,
	ESettingType::GamePlay_CustomUseItem1    = 99,
	ESettingType::GamePlay_CustomUseItem2    = 100,
	ESettingType::GamePlay_CustomUseItem3    = 101,
	ESettingType::GamePlay_CustomUseItem4    = 102,
	ESettingType::GamePlay_CustomUseItem5    = 103,
	ESettingType::GamePlay_CustomUseItem6    = 104,
	ESettingType::GamePlay_CustomUseItem7    = 105,
	ESettingType::GamePlay_CustomUseItem8    = 106,
	ESettingType::GamePlay_End               = 107,
	ESettingType::Dev_Begin                  = 108,
	ESettingType::Dev_AAFilterSize           = 109,
	ESettingType::Dev_AACurrentFrameWeight   = 110,
	ESettingType::Dev_AASamples              = 111,
	ESettingType::Dev_TonemapperSharpen      = 112,
	ESettingType::Dev_TemporalAAcatmullRom   = 113,
	ESettingType::Dev_TemppralAApauseCorrect = 114,
	ESettingType::Dev_End                    = 115,
	ESettingType::ShowInventoryCharacter     = 116,
	ESettingType::Version                    = 117,
	ESettingType::All                        = 118,
	ESettingType::End                        = 119,
	ESettingType::ESettingType_MAX           = 120
};

// Enum BravoHotelGame.EPlosiveSoundDetectionType
enum class EPlosiveSoundDetectionType : uint8 
{
	EPlosiveSoundDetectionType::EPSDT_None   = 0,
	EPlosiveSoundDetectionType::EPSDT_Craft  = 1,
	EPlosiveSoundDetectionType::EPSDT_Capsule = 2,
	EPlosiveSoundDetectionType::EPSDT_Skill  = 3,
	EPlosiveSoundDetectionType::EPSDT_MAX    = 4
};

// Enum BravoHotelGame.ELandingReason
enum class ELandingReason : uint8 
{
	ELandingReason::LR_None                  = 0,
	ELandingReason::LR_Jump                  = 1,
	ELandingReason::LR_Descent               = 2,
	ELandingReason::LR_VehicleEscape         = 3,
	ELandingReason::LR_VehicleExit           = 4,
	ELandingReason::LR_VehicleCrash          = 5,
	ELandingReason::LR_VehicleAutoEscape     = 6,
	ELandingReason::LR_Parkour               = 7,
	ELandingReason::LR_RocketJump            = 8,
	ELandingReason::LR_Knockback             = 9,
	ELandingReason::LR_Stuntman              = 10,
	ELandingReason::LR_QuickLanding          = 11,
	ELandingReason::LR_Jetpack               = 12,
	ELandingReason::LR_MeteorJump            = 13,
	ELandingReason::LR_MAX                   = 14
};

// Enum BravoHotelGame.ELeanState
enum class ELeanState : uint8 
{
	ELeanState::LS_Left                      = 0,
	ELeanState::LS_Middle                    = 1,
	ELeanState::LS_Right                     = 2,
	ELeanState::LS_MAX                       = 3
};

// Enum BravoHotelGame.ItemWidgetDragType
enum class ItemWidgetDragType : uint8 
{
	ItemWidgetDragType::ProximitySlot        = 0,
	ItemWidgetDragType::TransportSlot        = 1,
	ItemWidgetDragType::EquipSlot            = 2,
	ItemWidgetDragType::WeaponSlot           = 3,
	ItemWidgetDragType::AttachmentSlot       = 4,
	ItemWidgetDragType::RecipeSlot           = 5,
	ItemWidgetDragType::MaterialSlot         = 6,
	ItemWidgetDragType::ItemWidgetDragType_MAX = 7
};

// Enum BravoHotelGame.EWearableItemType
enum class EWearableItemType : uint8 
{
	EWearableItemType::WIT_Hair              = 0,
	EWearableItemType::WIT_Face              = 1,
	EWearableItemType::WIT_Helmet            = 2,
	EWearableItemType::WIT_Bag               = 3,
	EWearableItemType::WIT_Armor             = 4,
	EWearableItemType::WIT_GhillieSuit       = 5,
	EWearableItemType::WIT_Hat               = 6,
	EWearableItemType::WIT_Eyewear           = 7,
	EWearableItemType::WIT_Mask              = 8,
	EWearableItemType::WIT_Top               = 9,
	EWearableItemType::WIT_Outer             = 10,
	EWearableItemType::WIT_Gloves            = 11,
	EWearableItemType::WIT_Bottom            = 12,
	EWearableItemType::WIT_Shoes             = 13,
	EWearableItemType::WIT_Parachute         = 14,
	EWearableItemType::WIT_ParachuteBag      = 16,
	EWearableItemType::WIT_Clipping          = 17,
	EWearableItemType::WIT_Body              = 18,
	EWearableItemType::WIT_None              = 255,
	EWearableItemType::WIT_MAX               = 256
};

// Enum BravoHotelGame.ECharacterAbilityType
enum class ECharacterAbilityType : uint8 
{
	ECharacterAbilityType::CAT_None          = 0,
	ECharacterAbilityType::CAT_MaxHP         = 1,
	ECharacterAbilityType::CAT_BoostHP       = 2,
	ECharacterAbilityType::CAT_MaxOxygen     = 3,
	ECharacterAbilityType::CAT_UseBreath     = 4,
	ECharacterAbilityType::CAT_MoveSpeed     = 5,
	ECharacterAbilityType::CAT_HealOfTime    = 6,
	ECharacterAbilityType::CAT_MaxCapacity   = 7,
	ECharacterAbilityType::CAT_ReloadSpeed   = 8,
	ECharacterAbilityType::CAT_BoltActionSpeed = 9,
	ECharacterAbilityType::CAT_BoosterTime   = 10,
	ECharacterAbilityType::CAT_ExpBoost      = 11,
	ECharacterAbilityType::CAT_MaxSteady     = 12,
	ECharacterAbilityType::CAT_KnockOutHealth = 13,
	ECharacterAbilityType::CAT_ADSSpeed      = 14,
	ECharacterAbilityType::CAT_ChangeWeaponSpeed = 15,
	ECharacterAbilityType::CAT_RevivedHealth = 16,
	ECharacterAbilityType::CAT_RevivingHealth = 17,
	ECharacterAbilityType::CAT_ReviveSpeed   = 18,
	ECharacterAbilityType::CAT_ResuscitateSpeed = 19,
	ECharacterAbilityType::CAT_ListeningRange = 20,
	ECharacterAbilityType::CAT_ActSilently   = 21,
	ECharacterAbilityType::CAT_MoveWhileUsing = 22,
	ECharacterAbilityType::CAT_BoostHealAmount = 23,
	ECharacterAbilityType::CAT_HealTeamOne   = 24,
	ECharacterAbilityType::CAT_VehicleArmor  = 25,
	ECharacterAbilityType::CAT_ParkourSpeed  = 26,
	ECharacterAbilityType::CAT_VehicleEfficiency = 27,
	ECharacterAbilityType::CAT_DamageReduceOwnBomb = 28,
	ECharacterAbilityType::CAT_ProtectFlashBang = 29,
	ECharacterAbilityType::CAT_IncressStun   = 30,
	ECharacterAbilityType::CAT_IncressFlameTime = 31,
	ECharacterAbilityType::CAT_IncressFrameDamage = 32,
	ECharacterAbilityType::CAT_ParachuteFallingSpeed = 33,
	ECharacterAbilityType::CAT_IncressGrenadeBurstRange = 34,
	ECharacterAbilityType::CAT_IncressHealLimit = 35,
	ECharacterAbilityType::CAT_IncressAmplifierRange = 36,
	ECharacterAbilityType::CAT_IncressHeartBeatSensorRange = 37,
	ECharacterAbilityType::CAT_RocketJumpModifier = 38,
	ECharacterAbilityType::CAT_GravityModifier = 39,
	ECharacterAbilityType::CAT_LeftLeanAngleModifier = 40,
	ECharacterAbilityType::CAT_RightLeanAngleModifier = 41,
	ECharacterAbilityType::CAT_LeftLeanSpeedModifier = 42,
	ECharacterAbilityType::CAT_RightLeanSpeedModifier = 43,
	ECharacterAbilityType::CAT_SuperThrowingTrailViewDistance = 44,
	ECharacterAbilityType::CAT_ShiningThrowProjectileViewDistance = 45,
	ECharacterAbilityType::CAT_FindParachutesDistance = 46,
	ECharacterAbilityType::CAT_BulletproofGlass = 47,
	ECharacterAbilityType::CAT_HeatScanRange = 48,
	ECharacterAbilityType::CAT_ReduceBuffCooltime = 49,
	ECharacterAbilityType::CAT_MeteorJumpModifier = 50,
	ECharacterAbilityType::CAT_IncressAirControl = 51,
	ECharacterAbilityType::CAT_MAX           = 52
};

// Enum BravoHotelGame.EConditionType
enum class EConditionType : uint8 
{
	EConditionType::CT_None                  = 0,
	EConditionType::CT_Switch                = 1,
	EConditionType::CT_RTPC                  = 2,
	EConditionType::CT_State                 = 3,
	EConditionType::CT_MAX                   = 4
};

// Enum BravoHotelGame.EThrowingWeaponState
enum class EThrowingWeaponState : uint8 
{
	EThrowingWeaponState::ETWS_Idle          = 0,
	EThrowingWeaponState::ETWS_TakeOut       = 1,
	EThrowingWeaponState::ETWS_Ready         = 2,
	EThrowingWeaponState::ETWS_Cook          = 3,
	EThrowingWeaponState::ETWS_Throw         = 4,
	EThrowingWeaponState::ETWS_Drop          = 5,
	EThrowingWeaponState::ETWS_Fire          = 6,
	EThrowingWeaponState::ETWS_MAX           = 7
};

// Enum BravoHotelGame.EFireType
enum class EFireType : uint8 
{
	EFireType::FT_None                       = 0,
	EFireType::FT_HipShot                    = 1,
	EFireType::FT_AOS                        = 2,
	EFireType::FT_ADS                        = 3,
	EFireType::FT_AMP                        = 4,
	EFireType::FT_HBS                        = 5,
	EFireType::FT_MAX                        = 6
};

// Enum BravoHotelGame.ECharacterState
enum class ECharacterState : uint8 
{
	ECharacterState::CS_None                 = 0,
	ECharacterState::CS_Battle               = 1,
	ECharacterState::CS_InAircraft           = 2,
	ECharacterState::CS_Descent              = 3,
	ECharacterState::CS_Parachuting          = 4,
	ECharacterState::CS_Knockout             = 5,
	ECharacterState::CS_Death                = 6,
	ECharacterState::CS_Driver               = 7,
	ECharacterState::CS_DriverPossessedPawn  = 8,
	ECharacterState::CS_Passenger1           = 9,
	ECharacterState::CS_Passenger2           = 10,
	ECharacterState::CS_Passenger3           = 11,
	ECharacterState::CS_Passenger4           = 12,
	ECharacterState::CS_Passenger5           = 13,
	ECharacterState::CS_Ladder               = 14,
	ECharacterState::CS_CriticalTime         = 15,
	ECharacterState::CS_InAircraftCinematic  = 16,
	ECharacterState::CS_StartReady           = 17,
	ECharacterState::CS_EndReady             = 18,
	ECharacterState::CS_Max                  = 19
};

// Enum BravoHotelGame.EGrenadeThrowingType
enum class EGrenadeThrowingType : uint8 
{
	EGrenadeThrowingType::EGTT_None          = 0,
	EGrenadeThrowingType::EGTT_OverThrow     = 1,
	EGrenadeThrowingType::EGTT_UnderThrow    = 2,
	EGrenadeThrowingType::EGTT_MAX           = 3
};

// Enum BravoHotelGame.EWaterDepthType
enum class EWaterDepthType : uint8 
{
	EWaterDepthType::WDT_NoWater             = 0,
	EWaterDepthType::WDT_Shallow             = 1,
	EWaterDepthType::WDT_NoProne             = 2,
	EWaterDepthType::WDT_NoCrouch            = 3,
	EWaterDepthType::WDT_SurfaceWater        = 4,
	EWaterDepthType::WDT_UnderWater          = 5,
	EWaterDepthType::WDT_MAX                 = 6
};

// Enum BravoHotelGame.ECharacterBuffType
enum class ECharacterBuffType : uint8 
{
	ECharacterBuffType::CBT_None             = 0,
	ECharacterBuffType::CBT_Booster          = 2,
	ECharacterBuffType::CBT_Bandage          = 4,
	ECharacterBuffType::CBT_OutOfSteady      = 8,
	ECharacterBuffType::CBT_Reviving         = 16,
	ECharacterBuffType::CBT_NoDamage         = 32,
	ECharacterBuffType::CBT_MAX              = 33
};

// Enum BravoHotelGame.ESuperPeopleClass
enum class ESuperPeopleClass : uint8 
{
	ESuperPeopleClass::ESPC_None             = 0,
	ESuperPeopleClass::ESPC_Gatling          = 1,
	ESuperPeopleClass::ESPC_SGMaster         = 2,
	ESuperPeopleClass::ESPC_StrikingForces   = 3,
	ESuperPeopleClass::ESPC_Sniper           = 4,
	ESuperPeopleClass::ESPC_Recon            = 5,
	ESuperPeopleClass::ESPC_Gas              = 6,
	ESuperPeopleClass::ESPC_Marine           = 7,
	ESuperPeopleClass::ESPC_Teleporter       = 8,
	ESuperPeopleClass::ESPC_SWAT             = 9,
	ESuperPeopleClass::ESPC_WeaponMaster     = 10,
	ESuperPeopleClass::ESPC_Nuclear          = 11,
	ESuperPeopleClass::ESPC_Driver           = 12,
	ESuperPeopleClass::ESPC_MAX              = 13
};

// Enum BravoHotelGame.ECharacterAudioEventType
enum class ECharacterAudioEventType : uint8 
{
	ECharacterAudioEventType::EquipWearable  = 0,
	ECharacterAudioEventType::EquipAttachment = 1,
	ECharacterAudioEventType::EquipWeapon    = 2,
	ECharacterAudioEventType::PickupBackpack = 3,
	ECharacterAudioEventType::PickupStartEvent = 4,
	ECharacterAudioEventType::PickupConsumables = 5,
	ECharacterAudioEventType::ECharacterAudioEventType_MAX = 6
};

// Enum BravoHotelGame.EBattleRoyaleState
enum class EBattleRoyaleState : uint8 
{
	EBattleRoyaleState::EBRS_None            = 0,
	EBattleRoyaleState::EBRS_Waiting         = 1,
	EBattleRoyaleState::EBRS_Ready           = 2,
	EBattleRoyaleState::EBRS_CheckStartPlay  = 3,
	EBattleRoyaleState::EBRS_Play            = 4,
	EBattleRoyaleState::EBRS_MatchEnd        = 5,
	EBattleRoyaleState::EBRS_MAX             = 6
};

// Enum BravoHotelGame.ECharacterGroundState
enum class ECharacterGroundState : uint8 
{
	ECharacterGroundState::CGS_None          = 0,
	ECharacterGroundState::CGS_Stand         = 1,
	ECharacterGroundState::CGS_Crouch        = 2,
	ECharacterGroundState::CGS_Prone         = 3,
	ECharacterGroundState::CGS_MAX           = 4
};

// Enum BravoHotelGame.EToggleWidgetModeType
enum class EToggleWidgetModeType : uint8 
{
	EToggleWidgetModeType::TWMT_None         = 0,
	EToggleWidgetModeType::TWMT_Inventory    = 1,
	EToggleWidgetModeType::TWMT_WorldMap     = 2,
	EToggleWidgetModeType::TWMT_BlackMarket  = 3,
	EToggleWidgetModeType::TWMT_SkillMap     = 4,
	EToggleWidgetModeType::TWMT_MAX          = 5
};

// Enum BravoHotelGame.ETargetHealthType
enum class ETargetHealthType : uint8 
{
	ETargetHealthType::ETHT_Casting          = 0,
	ETargetHealthType::ETHT_Inventory        = 1,
	ETargetHealthType::ETHT_Bandage          = 2,
	ETargetHealthType::ETHT_MAX              = 3
};

// Enum BravoHotelGame.EInteractionType
enum class EInteractionType : uint8 
{
	EInteractionType::IT_None                = 0,
	EInteractionType::IT_Item                = 1,
	EInteractionType::IT_Door                = 2,
	EInteractionType::IT_Revive              = 3,
	EInteractionType::IT_Vehicle             = 4,
	EInteractionType::IT_DropBox             = 5,
	EInteractionType::IT_PersonalSupplyBox   = 6,
	EInteractionType::IT_PersonalSupplyBoxFailed = 7,
	EInteractionType::IT_Elevator            = 8,
	EInteractionType::IT_Ladder              = 9,
	EInteractionType::IT_OnLadder            = 10,
	EInteractionType::IT_Resuscitation       = 11,
	EInteractionType::IT_Parachute           = 12,
	EInteractionType::IT_MeteorStrike        = 13,
	EInteractionType::IT_MAX                 = 14
};

// Enum BravoHotelGame.EProjectileGrenadeState
enum class EProjectileGrenadeState : uint8 
{
	EProjectileGrenadeState::EPGS_Idle       = 0,
	EProjectileGrenadeState::EPGS_Active     = 1,
	EProjectileGrenadeState::EPGS_ActiveBoobyTrap = 2,
	EProjectileGrenadeState::EPGS_DestroyWithoutActive = 3,
	EProjectileGrenadeState::EPGS_ActiveByDamage = 4,
	EProjectileGrenadeState::EPGS_Deactive   = 5,
	EProjectileGrenadeState::EPGS_MAX        = 6
};

// Enum BravoHotelGame.EInDoorAdjustmentTarget
enum class EInDoorAdjustmentTarget : uint8 
{
	EInDoorAdjustmentTarget::IAT_None        = 0,
	EInDoorAdjustmentTarget::IAT_ThirdPersonCamera = 1,
	EInDoorAdjustmentTarget::IAT_Audio_DEPRECATED = 2,
	EInDoorAdjustmentTarget::IAT_PostProcess = 4,
	EInDoorAdjustmentTarget::IAT_MAX         = 5
};

// Enum BravoHotelGame.EKeySettingType
enum class EKeySettingType : uint8 
{
	EKeySettingType::Key_Begin               = 0,
	EKeySettingType::Key_MoveForward         = 1,
	EKeySettingType::Key_MoveBack            = 2,
	EKeySettingType::Key_MoveLeft            = 3,
	EKeySettingType::Key_MoveRight           = 4,
	EKeySettingType::Key_Walk                = 5,
	EKeySettingType::Key_Sprint              = 6,
	EKeySettingType::Key_Crouch              = 7,
	EKeySettingType::Key_Prone               = 8,
	EKeySettingType::Key_LeanRight           = 9,
	EKeySettingType::Key_LeanLeft            = 10,
	EKeySettingType::Key_Interaction         = 11,
	EKeySettingType::Key_FPSOnly             = 12,
	EKeySettingType::Key_ToggleAutoSprint    = 13,
	EKeySettingType::Key_FreeLook            = 14,
	EKeySettingType::Key_JumpParkour         = 15,
	EKeySettingType::Key_Jump                = 16,
	EKeySettingType::Key_Parkour             = 17,
	EKeySettingType::Key_MoveUp              = 18,
	EKeySettingType::Key_MoveDown            = 19,
	EKeySettingType::Key_Fire                = 20,
	EKeySettingType::Key_AltFire             = 21,
	EKeySettingType::Key_AOS                 = 22,
	EKeySettingType::Key_ADS                 = 23,
	EKeySettingType::Key_Reload              = 24,
	EKeySettingType::Key_ChangeWeaponUpside  = 25,
	EKeySettingType::Key_ChangeWeaponDownside = 26,
	EKeySettingType::Key_WeapSlot_01         = 27,
	EKeySettingType::Key_WeapSlot_02         = 28,
	EKeySettingType::Key_WeapSlot_03         = 29,
	EKeySettingType::Key_WeapSlot_04         = 30,
	EKeySettingType::Key_WeapSlot_05         = 31,
	EKeySettingType::Key_ThrowWeapon         = 32,
	EKeySettingType::Key_Fragment            = 33,
	EKeySettingType::Key_Flashbang           = 34,
	EKeySettingType::Key_Smoke               = 35,
	EKeySettingType::Key_Molotove            = 36,
	EKeySettingType::Key_ActiveSkill00       = 37,
	EKeySettingType::Key_CancleActiveSkill00 = 38,
	EKeySettingType::Key_ActiveSkill01       = 39,
	EKeySettingType::Key_DisArm              = 40,
	EKeySettingType::Key_FireMode            = 41,
	EKeySettingType::Key_ChangeThrowingMotion = 42,
	EKeySettingType::Key_CookThrowingWeapon  = 43,
	EKeySettingType::Key_ZoomIn              = 44,
	EKeySettingType::Key_ZoomOut             = 45,
	EKeySettingType::Key_ZeroingDistanceUp   = 46,
	EKeySettingType::Key_ZeroingDistanceDown = 47,
	EKeySettingType::Key_SteadyAim           = 48,
	EKeySettingType::Key_UseTopRecoverItem   = 49,
	EKeySettingType::Key_UseMediPack_Lv3     = 50,
	EKeySettingType::Key_UseMediPack_Lv2     = 51,
	EKeySettingType::Key_UseMediPack_Lv1     = 52,
	EKeySettingType::Key_BoostItemMenu       = 53,
	EKeySettingType::Key_UseBoostItem        = 54,
	EKeySettingType::Key_CustomUseItem       = 55,
	EKeySettingType::Key_UseStrongPainkiller = 56,
	EKeySettingType::Key_UsePowerDrink       = 57,
	EKeySettingType::Key_UseEnergyBar        = 58,
	EKeySettingType::Key_UseTopSkillBook     = 59,
	EKeySettingType::Key_UseRedBook          = 60,
	EKeySettingType::Key_UseGreenBook        = 61,
	EKeySettingType::Key_UseBlueBook         = 62,
	EKeySettingType::Key_UseWhiteBook        = 63,
	EKeySettingType::Key_UseBalckBook        = 64,
	EKeySettingType::Key_VehicleMoveForward  = 65,
	EKeySettingType::Key_VehicleMoveBack     = 66,
	EKeySettingType::Key_VehicleMoveLeft     = 67,
	EKeySettingType::Key_VehicleMoveRight    = 68,
	EKeySettingType::Key_Handbrake           = 69,
	EKeySettingType::Key_Nitro               = 70,
	EKeySettingType::Key_VehicleHorn         = 71,
	EKeySettingType::Key_VehicleSeat0        = 72,
	EKeySettingType::Key_VehicleSeat1        = 73,
	EKeySettingType::Key_VehicleSeat2        = 74,
	EKeySettingType::Key_VehicleSeat3        = 75,
	EKeySettingType::Key_VehicleSeat4        = 76,
	EKeySettingType::Key_WorldMap            = 77,
	EKeySettingType::Key_MiniMap             = 78,
	EKeySettingType::Key_Inventory           = 79,
	EKeySettingType::Key_OptionMenu          = 80,
	EKeySettingType::Key_SmartPing           = 81,
	EKeySettingType::Key_OnlySmartPing       = 82,
	EKeySettingType::Key_SmartPingMenu       = 83,
	EKeySettingType::Key_SmartPingAgree      = 84,
	EKeySettingType::Key_InsertMarker        = 85,
	EKeySettingType::Key_DeleteMarker        = 86,
	EKeySettingType::Key_AddMarker           = 87,
	EKeySettingType::Key_SmartPingWorldMap   = 88,
	EKeySettingType::Key_SmartPingMenuWorldMap = 89,
	EKeySettingType::Key_OnlySmartPingWorldMap = 90,
	EKeySettingType::Key_SmartPingAgreeWorldMap = 91,
	EKeySettingType::Key_RoutePing           = 92,
	EKeySettingType::Key_DeleteRoutePing     = 93,
	EKeySettingType::Key_InsertMarkerWorldMap = 94,
	EKeySettingType::Key_DeleteMarkerWorldMap = 95,
	EKeySettingType::Key_ToggleInGameHUD     = 96,
	EKeySettingType::Key_ToggleGuideWidget   = 97,
	EKeySettingType::Key_WorldMapMoveToPlayer = 98,
	EKeySettingType::Key_PushToTalk          = 99,
	EKeySettingType::Key_MasterVolumeToggle  = 100,
	EKeySettingType::Key_MasterVolumeUp      = 101,
	EKeySettingType::Key_MasterVolumeDown    = 102,
	EKeySettingType::Key_ShowNextPlayer      = 103,
	EKeySettingType::Key_ShowPrePlayer       = 104,
	EKeySettingType::Key_Combine01           = 105,
	EKeySettingType::Key_Combine02           = 106,
	EKeySettingType::Key_Combine03           = 107,
	EKeySettingType::Key_Combine04           = 108,
	EKeySettingType::Key_Combine05           = 109,
	EKeySettingType::Key_Combine06           = 110,
	EKeySettingType::Key_Combine07           = 111,
	EKeySettingType::Key_Combine08           = 112,
	EKeySettingType::Key_Combine09           = 113,
	EKeySettingType::Key_Combine10           = 114,
	EKeySettingType::Key_MK3DSpectatorPawn_SpeedUp = 115,
	EKeySettingType::Key_MK3DSpectatorPawn_SpeedDown = 116,
	EKeySettingType::Key_MK3DSpectatorPawn_ResetSpeed = 117,
	EKeySettingType::Key_MK3DReplayController_ReplayPause = 118,
	EKeySettingType::Key_MK3DReplayController_FreeCamera = 119,
	EKeySettingType::Key_MK3DReplayController_SetPlayerCameraForTargetInRecording = 120,
	EKeySettingType::Key_MK3DReplayController_IncreaseSpeedByIndex = 121,
	EKeySettingType::Key_MK3DReplayController_DecreaseSpeedByIndex = 122,
	EKeySettingType::Key_MK3DReplayController_GoToBeginTime = 123,
	EKeySettingType::Key_MK3DReplayController_GoToEndTime = 124,
	EKeySettingType::Key_MK3DReplayController_FindActorsByCursor = 125,
	EKeySettingType::Key_PlayerCamera        = 126,
	EKeySettingType::Key_FollowCamera        = 127,
	EKeySettingType::Key_TimeLineWidget      = 128,
	EKeySettingType::Key_PlayerListWidget    = 129,
	EKeySettingType::Key_PerkDeckWidget      = 130,
	EKeySettingType::Key_ItemListWidget      = 131,
	EKeySettingType::Key_MK3DSpectatorPawn_MoveForward = 132,
	EKeySettingType::Key_MK3DSpectatorPawn_MoveBack = 133,
	EKeySettingType::Key_MK3DSpectatorPawn_MoveLeft = 134,
	EKeySettingType::Key_MK3DSpectatorPawn_MoveRight = 135,
	EKeySettingType::Key_MK3DSpectatorPawn_MoveUp = 136,
	EKeySettingType::Key_MK3DSpectatorPawn_MoveDown = 137,
	EKeySettingType::Key_MK3DSpectatorPawn_Turn = 138,
	EKeySettingType::Key_MK3DSpectatorPawn_LookUp = 139,
	EKeySettingType::Key_End                 = 140,
	EKeySettingType::Key_MAX                 = 141
};

// Enum BravoHotelGame.EWeaponAttachmentItem
enum class EWeaponAttachmentItem : uint8 
{
	EWeaponAttachmentItem::WA_None           = 0,
	EWeaponAttachmentItem::WA_Sight_Basic    = 1,
	EWeaponAttachmentItem::WA_Sight_Reddot   = 2,
	EWeaponAttachmentItem::WA_Sight_Holo     = 3,
	EWeaponAttachmentItem::WA_Sight_2X       = 4,
	EWeaponAttachmentItem::WA_Sight_4X       = 5,
	EWeaponAttachmentItem::WA_Sight_8X       = 6,
	EWeaponAttachmentItem::WA_Sight_15X      = 7,
	EWeaponAttachmentItem::WA_Sight_Digital  = 8,
	EWeaponAttachmentItem::WA_Muzzle_AR_Silencer = 9,
	EWeaponAttachmentItem::WA_Muzzle_AR_Compensator = 10,
	EWeaponAttachmentItem::WA_Muzzle_AR_Suppressor = 11,
	EWeaponAttachmentItem::WA_Muzzle_SMG_Silencer = 12,
	EWeaponAttachmentItem::WA_Muzzle_SMG_Compensator = 13,
	EWeaponAttachmentItem::WA_Muzzle_SMG_Suppressor = 14,
	EWeaponAttachmentItem::WA_Muzzle_SR_Silencer = 15,
	EWeaponAttachmentItem::WA_Muzzle_SR_Compensator = 16,
	EWeaponAttachmentItem::WA_Muzzle_SR_Suppressor = 17,
	EWeaponAttachmentItem::WA_Muzzle_Shotgun_Choke = 18,
	EWeaponAttachmentItem::WA_Muzzle_Pistol_Silencer = 19,
	EWeaponAttachmentItem::WA_Barrel_Basic   = 20,
	EWeaponAttachmentItem::WA_Barrel_Short   = 21,
	EWeaponAttachmentItem::WA_Barrel_Long    = 22,
	EWeaponAttachmentItem::WA_Mag_Basic      = 23,
	EWeaponAttachmentItem::WA_Mag_AR_QuickDraw = 24,
	EWeaponAttachmentItem::WA_Mag_AR_Extended = 25,
	EWeaponAttachmentItem::WA_Mag_AR_ExtendedQuickDraw = 26,
	EWeaponAttachmentItem::WA_Mag_SMG_QuickDraw = 27,
	EWeaponAttachmentItem::WA_Mag_SMG_Extended = 28,
	EWeaponAttachmentItem::WA_Mag_SMG_ExtendedQuickDraw = 29,
	EWeaponAttachmentItem::WA_Mag_SR_QuickDraw = 30,
	EWeaponAttachmentItem::WA_Mag_SR_Extended = 31,
	EWeaponAttachmentItem::WA_Mag_SR_ExtendedQuickDraw = 32,
	EWeaponAttachmentItem::WA_Mag_Pistol_QuickDraw = 33,
	EWeaponAttachmentItem::WA_Mag_Pistol_Extended = 34,
	EWeaponAttachmentItem::WA_Mag_Pistol_ExtendedQuickDraw = 35,
	EWeaponAttachmentItem::WA_Grip_Angled    = 36,
	EWeaponAttachmentItem::WA_Grip_Vertical  = 37,
	EWeaponAttachmentItem::WA_Stock_Shotgun_BulletLoops = 38,
	EWeaponAttachmentItem::WA_Stock_SR_BulletLoops = 39,
	EWeaponAttachmentItem::WA_Stock_SR_CheekPad = 40,
	EWeaponAttachmentItem::WA_Stock_Tactical = 41,
	EWeaponAttachmentItem::WA_Stock_MP       = 42,
	EWeaponAttachmentItem::WA_Perk01_Basic   = 43,
	EWeaponAttachmentItem::WA_Perk02_Basic   = 44,
	EWeaponAttachmentItem::WA_Perk03_Basic   = 45,
	EWeaponAttachmentItem::WA_Perk04_Basic   = 46,
	EWeaponAttachmentItem::WA_MAX            = 47
};

// Enum BravoHotelGame.ECustomMovementMode
enum class ECustomMovementMode : uint8 
{
	ECustomMovementMode::CMOVE_None          = 0,
	ECustomMovementMode::CMOVE_Ragdoll       = 1,
	ECustomMovementMode::CMOVE_Descent       = 2,
	ECustomMovementMode::CMOVE_Drive         = 3,
	ECustomMovementMode::CMOVE_Ladder        = 4,
	ECustomMovementMode::CMOVE_Jetpack       = 5,
	ECustomMovementMode::CMOVE_MAX           = 6
};

// Enum BravoHotelGame.EMouseSensitivityState
enum class EMouseSensitivityState : uint8 
{
	EMouseSensitivityState::EMSS_None        = 0,
	EMouseSensitivityState::EMSS_Default     = 1,
	EMouseSensitivityState::EMSS_VehicleDriver = 2,
	EMouseSensitivityState::EMSS_Targeting   = 3,
	EMouseSensitivityState::EMSS_Total       = 4,
	EMouseSensitivityState::EMSS_UsingDetail = 5,
	EMouseSensitivityState::EMSS_ADS         = 6,
	EMouseSensitivityState::EMSS_2X          = 7,
	EMouseSensitivityState::EMSS_4X          = 8,
	EMouseSensitivityState::EMSS_6X          = 9,
	EMouseSensitivityState::EMSS_8X          = 10,
	EMouseSensitivityState::EMSS_15X         = 11,
	EMouseSensitivityState::EMSS_Vertical    = 12,
	EMouseSensitivityState::EMSS_MAX         = 13
};

// Enum BravoHotelGame.ECharacterConditionedAbilityType
enum class ECharacterConditionedAbilityType : uint8 
{
	ECharacterConditionedAbilityType::CCAT_None = 0,
	ECharacterConditionedAbilityType::CCAT_Searchable = 1,
	ECharacterConditionedAbilityType::CCAT_DamageReduce = 2,
	ECharacterConditionedAbilityType::CCAT_Armor = 3,
	ECharacterConditionedAbilityType::CCAT_Durability = 4,
	ECharacterConditionedAbilityType::CCAT_HorizontalRecoil = 5,
	ECharacterConditionedAbilityType::CCAT_VerticalRecoil = 6,
	ECharacterConditionedAbilityType::CCAT_MoveSpeed = 7,
	ECharacterConditionedAbilityType::CCAT_Sway = 8,
	ECharacterConditionedAbilityType::CCAT_DamageIncress = 9,
	ECharacterConditionedAbilityType::CCAT_Post_DamageIncress = 10,
	ECharacterConditionedAbilityType::CCAT_Accuracy = 11,
	ECharacterConditionedAbilityType::CCAT_MovePenalty = 12,
	ECharacterConditionedAbilityType::CCAT_ArmorDamage = 13,
	ECharacterConditionedAbilityType::CCAT_HealAmount = 14,
	ECharacterConditionedAbilityType::CCAT_UseSpeed = 15,
	ECharacterConditionedAbilityType::CCAT_UseSpeedOnDamage = 16,
	ECharacterConditionedAbilityType::CCAT_AdditionalItem = 17,
	ECharacterConditionedAbilityType::CCAT_IncressRange = 18,
	ECharacterConditionedAbilityType::CCAT_ReloadSpeed = 19,
	ECharacterConditionedAbilityType::CCAT_ADSSpeed = 20,
	ECharacterConditionedAbilityType::CCAT_RateOfFire = 21,
	ECharacterConditionedAbilityType::CCAT_JumpHeight = 22,
	ECharacterConditionedAbilityType::CCAT_DecressRampSpeedPenalty = 23,
	ECharacterConditionedAbilityType::CCAT_LadderSpeed = 24,
	ECharacterConditionedAbilityType::CCAT_LandedSpeed = 25,
	ECharacterConditionedAbilityType::CCAT_DamageReduceOnBack = 26,
	ECharacterConditionedAbilityType::CCAT_DamageReduceOnFront = 27,
	ECharacterConditionedAbilityType::CCAT_IncressMazineCapacity = 28,
	ECharacterConditionedAbilityType::CCAT_IncressBullet = 29,
	ECharacterConditionedAbilityType::CCAT_DamageReduceOver200m = 30,
	ECharacterConditionedAbilityType::CCAT_DamageReduceIn25m = 31,
	ECharacterConditionedAbilityType::CCAT_DamageIncressBySpeed = 32,
	ECharacterConditionedAbilityType::CCAT_Post_DamageIncressBySpeed = 33,
	ECharacterConditionedAbilityType::CCAT_DamageReduceBySpeed = 34,
	ECharacterConditionedAbilityType::CCAT_DamageIncressReverseSpeed = 35,
	ECharacterConditionedAbilityType::CCAT_DamageReduceReverseSpeed = 36,
	ECharacterConditionedAbilityType::CCAT_AirWalkDistance = 37,
	ECharacterConditionedAbilityType::CCAT_DamageIncressBySnipeReady = 38,
	ECharacterConditionedAbilityType::CCAT_DamageIncressByAntiAirFire = 39,
	ECharacterConditionedAbilityType::CCAT_AutoAimWeight = 40,
	ECharacterConditionedAbilityType::CCAT_AutoAimRadius = 41,
	ECharacterConditionedAbilityType::CCAT_IncressThrowingWeaponDamage = 42,
	ECharacterConditionedAbilityType::CCAT_IncressThrowingWeaponFireCount = 43,
	ECharacterConditionedAbilityType::CCAT_IncressMaxCountFlashbangBoobyTrap = 44,
	ECharacterConditionedAbilityType::CCAT_IncressRangeFlashbangBoobyTrap = 45,
	ECharacterConditionedAbilityType::CCAT_IncressBurstCount = 46,
	ECharacterConditionedAbilityType::CCAT_DamageIncressOnBlueZoneBorder = 47,
	ECharacterConditionedAbilityType::CCAT_DamageReduceOnBlueZoneBorder = 48,
	ECharacterConditionedAbilityType::CCAT_AdditionalConsumeAmmo = 49,
	ECharacterConditionedAbilityType::CCAT_BoosterItemEffective = 50,
	ECharacterConditionedAbilityType::CCAT_IncressThrowingWeaponHitDamage = 51,
	ECharacterConditionedAbilityType::CCAT_IncressRangeMolotovCocktailBoobyTrap = 52,
	ECharacterConditionedAbilityType::CCAT_IncressThrownRange = 53,
	ECharacterConditionedAbilityType::CCAT_IncressThrownAnimSpeed = 54,
	ECharacterConditionedAbilityType::CCAT_IncressFirePropagationLevel = 55,
	ECharacterConditionedAbilityType::CCAT_IncressDeafenRange = 56,
	ECharacterConditionedAbilityType::CCAT_InvisibleDamageIncress = 57,
	ECharacterConditionedAbilityType::CCAT_InvisibleDamageReduce = 58,
	ECharacterConditionedAbilityType::CCAT_MAX = 59
};

// Enum BravoHotelGame.EPingType
enum class EPingType : uint8 
{
	EPingType::PT_NoneTarget                 = 0,
	EPingType::PT_Attack                     = 1,
	EPingType::PT_Move                       = 2,
	EPingType::PT_Item                       = 3,
	EPingType::PT_Location                   = 4,
	EPingType::PT_Vehicle                    = 5,
	EPingType::PT_Support                    = 6,
	EPingType::PT_SupplyBoxNoti              = 7,
	EPingType::PT_Caution                    = 8,
	EPingType::PT_MenuEnd                    = 9,
	EPingType::PT_Enemy                      = 10,
	EPingType::PT_SkillEnemy                 = 11,
	EPingType::PT_Ok                         = 12,
	EPingType::PT_PersonalSupplyBox          = 13,
	EPingType::PT_Book                       = 14,
	EPingType::PT_RequestResurrection        = 15,
	EPingType::PT_Material                   = 16,
	EPingType::PT_Custom                     = 17,
	EPingType::PT_MAX                        = 18
};

// Enum BravoHotelGame.ELogTag
enum class ELogTag : uint8 
{
	ELogTag::LT_None                         = 0,
	ELogTag::LT_SmartPing                    = 1,
	ELogTag::LT_MAX                          = 2
};

// Enum BravoHotelGame.ELoadingScreenType
enum class ELoadingScreenType : uint8 
{
	ELoadingScreenType::LST_None             = 0,
	ELoadingScreenType::LST_First            = 1,
	ELoadingScreenType::LST_Default          = 2,
	ELoadingScreenType::LST_World            = 3,
	ELoadingScreenType::LST_Lobby            = 4,
	ELoadingScreenType::LST_RePlay           = 5,
	ELoadingScreenType::LST_Move             = 6,
	ELoadingScreenType::LST_Tutorial         = 7,
	ELoadingScreenType::LST_TutorialOut      = 8,
	ELoadingScreenType::LST_MAX              = 9
};

// Enum BravoHotelGame.EHUDMessageType
enum class EHUDMessageType : uint8 
{
	EHUDMessageType::HMT_BlueZoneDesc        = 0,
	EHUDMessageType::HMT_BlueZoneName        = 1,
	EHUDMessageType::HMT_GameCountDown       = 2,
	EHUDMessageType::HMT_GameCountDownNum    = 3,
	EHUDMessageType::HMT_GameStartMessage    = 4,
	EHUDMessageType::HMT_ChangeClassInfo     = 5,
	EHUDMessageType::HMT_KillMessage         = 6,
	EHUDMessageType::HMT_KillCount           = 7,
	EHUDMessageType::HMT_LevelUpMessage      = 8,
	EHUDMessageType::HMT_WarningMessage      = 9,
	EHUDMessageType::HMT_SupplyMessage       = 10,
	EHUDMessageType::HMT_BroadcastMessage    = 11,
	EHUDMessageType::HMT_TeamKillWarning     = 12,
	EHUDMessageType::HMT_ActionDescription   = 13,
	EHUDMessageType::HMT_Action              = 14,
	EHUDMessageType::HMT_CastingMessage      = 15,
	EHUDMessageType::HMT_CastingCount        = 16,
	EHUDMessageType::HMT_CastingCancelInfo   = 17,
	EHUDMessageType::HMT_ActionMessage       = 18,
	EHUDMessageType::HMT_CoreInfo            = 19,
	EHUDMessageType::HMT_ZeroingDistance     = 20,
	EHUDMessageType::HMT_PlayerReportInfo    = 21,
	EHUDMessageType::HMT_SpectatorCount      = 22,
	EHUDMessageType::HMT_PlayerInfo          = 23,
	EHUDMessageType::HMT_RoundOverInfo       = 24,
	EHUDMessageType::HMT_RoundOver           = 25,
	EHUDMessageType::HMT_GuideWidget         = 26,
	EHUDMessageType::HMT_Resuscitating       = 27,
	EHUDMessageType::HMT_RequestMessage      = 28,
	EHUDMessageType::HMT_EndResuscitated     = 29,
	EHUDMessageType::HMT_ItemCancelMessage   = 30,
	EHUDMessageType::HMT_End                 = 31,
	EHUDMessageType::HMT_MAX                 = 32
};

// Enum BravoHotelGame.EHUDMessageTableType
enum class EHUDMessageTableType : uint8 
{
	EHUDMessageTableType::HMTT_Waiting       = 0,
	EHUDMessageTableType::HMTT_Playing       = 1,
	EHUDMessageTableType::HMTT_Spectating    = 2,
	EHUDMessageTableType::HMTT_MatchEnd      = 3,
	EHUDMessageTableType::HMTT_MAX           = 4
};

// Enum BravoHotelGame.EPresenceState
enum class EPresenceState : uint8 
{
	EPresenceState::PS_Offline               = 0,
	EPresenceState::PS_Online                = 1,
	EPresenceState::PS_Ingame                = 2,
	EPresenceState::PS_MAX                   = 3
};

// Enum BravoHotelGame.ERandomType
enum class ERandomType : uint8 
{
	ERandomType::RT_None                     = 0,
	ERandomType::RT_Package                  = 1,
	ERandomType::RT_PickOne                  = 2,
	ERandomType::RT_MAX                      = 3
};

// Enum BravoHotelGame.EKeySettingSubType
enum class EKeySettingSubType : uint8 
{
	EKeySettingSubType::None                 = 0,
	EKeySettingSubType::Normal               = 1,
	EKeySettingSubType::Battle               = 2,
	EKeySettingSubType::ScopeMode            = 3,
	EKeySettingSubType::Throw                = 4,
	EKeySettingSubType::Item                 = 5,
	EKeySettingSubType::Vehicle              = 6,
	EKeySettingSubType::VehicleSeat          = 7,
	EKeySettingSubType::UI                   = 8,
	EKeySettingSubType::Swimming             = 9,
	EKeySettingSubType::SmartPing            = 10,
	EKeySettingSubType::SmartPingWorldMap    = 11,
	EKeySettingSubType::SmartPingMenu        = 12,
	EKeySettingSubType::Voice                = 13,
	EKeySettingSubType::Spectate             = 14,
	EKeySettingSubType::Replay               = 15,
	EKeySettingSubType::EKeySettingSubType_MAX = 16
};

// Enum BravoHotelGame.ESlotType
enum class ESlotType : uint8 
{
	ESlotType::Slider                        = 0,
	ESlotType::ComboBox                      = 1,
	ESlotType::Select                        = 2,
	ESlotType::KeyInput                      = 3,
	ESlotType::Button                        = 4,
	ESlotType::ESlotType_MAX                 = 5
};

// Enum BravoHotelGame.ESettingBigType
enum class ESettingBigType : uint8 
{
	ESettingBigType::Graphic                 = 0,
	ESettingBigType::Audio                   = 1,
	ESettingBigType::Key                     = 2,
	ESettingBigType::Control                 = 3,
	ESettingBigType::GamePlay                = 4,
	ESettingBigType::Dev                     = 5,
	ESettingBigType::ESettingBigType_MAX     = 6
};

// Enum BravoHotelGame.EPersonalSupplyBoxPingType
enum class EPersonalSupplyBoxPingType : uint8 
{
	EPersonalSupplyBoxPingType::PPT_None     = 0,
	EPersonalSupplyBoxPingType::PPT_Opened   = 1,
	EPersonalSupplyBoxPingType::PPT_NotOpen  = 2,
	EPersonalSupplyBoxPingType::PPT_MAX      = 3
};

// Enum BravoHotelGame.CheatParamType
enum class CheatParamType : uint8 
{
	CheatParamType::CPT_Intger               = 0,
	CheatParamType::CPT_Float                = 1,
	CheatParamType::CPT_String               = 2,
	CheatParamType::CPT_Bool                 = 3,
	CheatParamType::CPT_MAX                  = 4
};

// Enum BravoHotelGame.EItemPingIconType
enum class EItemPingIconType : uint8 
{
	EItemPingIconType::IPIT_None             = 0,
	EItemPingIconType::IPIT_GUN              = 1,
	EItemPingIconType::IPIT_Melee            = 2,
	EItemPingIconType::IPIT_Grenade          = 3,
	EItemPingIconType::IPIT_Equipment        = 4,
	EItemPingIconType::IPIT_WearItem         = 5,
	EItemPingIconType::IPIT_Attachment       = 6,
	EItemPingIconType::IPIT_Recover          = 7,
	EItemPingIconType::IPIT_Armor            = 8,
	EItemPingIconType::IPIT_MAX              = 9
};

// Enum BravoHotelGame.EWeaponFireMode
enum class EWeaponFireMode : uint8 
{
	EWeaponFireMode::EFM_Single              = 0,
	EWeaponFireMode::EFM_Burst               = 1,
	EWeaponFireMode::EFM_Auto                = 2,
	EWeaponFireMode::EFM_MAX                 = 3
};

// Enum BravoHotelGame.ELoadingType
enum class ELoadingType : uint8 
{
	ELoadingType::ELT_Magazine               = 0,
	ELoadingType::ELT_OneByOne               = 1,
	ELoadingType::ELT_OneByOne_StripperClip  = 2,
	ELoadingType::ELT_MAX                    = 3
};

// Enum BravoHotelGame.EWeaponAttachmentBarrel
enum class EWeaponAttachmentBarrel : uint8 
{
	EWeaponAttachmentBarrel::WA_Barrel_Basic = 0,
	EWeaponAttachmentBarrel::WA_Barrel_Short = 1,
	EWeaponAttachmentBarrel::WA_Barrel_Long  = 2,
	EWeaponAttachmentBarrel::WA_Barrel_MAX   = 3
};

// Enum BravoHotelGame.EWeaponAttachmentMuzzleDevice
enum class EWeaponAttachmentMuzzleDevice : uint8 
{
	EWeaponAttachmentMuzzleDevice::WA_Muzzle_Basic = 0,
	EWeaponAttachmentMuzzleDevice::WA_Muzzle_AR_Silencer = 1,
	EWeaponAttachmentMuzzleDevice::WA_Muzzle_AR_Compensator = 2,
	EWeaponAttachmentMuzzleDevice::WA_Muzzle_AR_Suppressor = 3,
	EWeaponAttachmentMuzzleDevice::WA_Muzzle_SMG_Silencer = 4,
	EWeaponAttachmentMuzzleDevice::WA_Muzzle_SMG_Compensator = 5,
	EWeaponAttachmentMuzzleDevice::WA_Muzzle_SMG_Suppressor = 6,
	EWeaponAttachmentMuzzleDevice::WA_Muzzle_SR_Silencer = 7,
	EWeaponAttachmentMuzzleDevice::WA_Muzzle_SR_Compensator = 8,
	EWeaponAttachmentMuzzleDevice::WA_Muzzle_SR_Suppressor = 9,
	EWeaponAttachmentMuzzleDevice::WA_Muzzle_Shotgun_Choke = 10,
	EWeaponAttachmentMuzzleDevice::WA_Muzzle_Pistol_Silencer = 11,
	EWeaponAttachmentMuzzleDevice::WA_Muzzle_MAX = 12
};

// Enum BravoHotelGame.EWeaponAttachmentStock
enum class EWeaponAttachmentStock : uint8 
{
	EWeaponAttachmentStock::WA_Stock_Basic   = 0,
	EWeaponAttachmentStock::WA_Stock_Shotgun_BulletLoops = 1,
	EWeaponAttachmentStock::WA_Stock_SR_BulletLoops = 2,
	EWeaponAttachmentStock::WA_Stock_SR_CheekPad = 3,
	EWeaponAttachmentStock::WA_Stock_Tactical = 4,
	EWeaponAttachmentStock::WA_Stock_MP      = 5,
	EWeaponAttachmentStock::WA_Stock_MAX     = 6
};

// Enum BravoHotelGame.EWeaponAttachmentMagazine
enum class EWeaponAttachmentMagazine : uint8 
{
	EWeaponAttachmentMagazine::WA_Mag_None   = 0,
	EWeaponAttachmentMagazine::WA_Mag_Basic  = 1,
	EWeaponAttachmentMagazine::WA_Mag_AR_QuickDraw = 2,
	EWeaponAttachmentMagazine::WA_Mag_AR_Extended = 3,
	EWeaponAttachmentMagazine::WA_Mag_AR_ExtendedQuickDraw = 4,
	EWeaponAttachmentMagazine::WA_Mag_SMG_QuickDraw = 5,
	EWeaponAttachmentMagazine::WA_Mag_SMG_Extended = 6,
	EWeaponAttachmentMagazine::WA_Mag_SMG_ExtendedQuickDraw = 7,
	EWeaponAttachmentMagazine::WA_Mag_SR_QuickDraw = 8,
	EWeaponAttachmentMagazine::WA_Mag_SR_Extended = 9,
	EWeaponAttachmentMagazine::WA_Mag_SR_ExtendedQuickDraw = 10,
	EWeaponAttachmentMagazine::WA_Mag_Pistol_QuickDraw = 11,
	EWeaponAttachmentMagazine::WA_Mag_Pistol_Extended = 12,
	EWeaponAttachmentMagazine::WA_Mag_Pistol_ExtendedQuickDraw = 13,
	EWeaponAttachmentMagazine::WA_Mag_MAX    = 14
};

// Enum BravoHotelGame.EWeaponAttachmentGrip
enum class EWeaponAttachmentGrip : uint8 
{
	EWeaponAttachmentGrip::WA_Grip_Basic     = 0,
	EWeaponAttachmentGrip::WA_Grip_Angled    = 1,
	EWeaponAttachmentGrip::WA_Grip_Vertical  = 2,
	EWeaponAttachmentGrip::WA_Grip_MAX       = 3
};

// Enum BravoHotelGame.EWeaponAttachmentType
enum class EWeaponAttachmentType : uint8 
{
	EWeaponAttachmentType::WAT_None          = 0,
	EWeaponAttachmentType::WAT_Sight         = 1,
	EWeaponAttachmentType::WAT_MuzzleDevice  = 2,
	EWeaponAttachmentType::WAT_Stock         = 3,
	EWeaponAttachmentType::WAT_Grip          = 4,
	EWeaponAttachmentType::WAT_Magazine      = 5,
	EWeaponAttachmentType::WAT_Barrel        = 6,
	EWeaponAttachmentType::WAT_TacticalAttachment = 7,
	EWeaponAttachmentType::WAT_Body          = 8,
	EWeaponAttachmentType::WAT_Perk01        = 9,
	EWeaponAttachmentType::WAT_Perk02        = 10,
	EWeaponAttachmentType::WAT_Perk03        = 11,
	EWeaponAttachmentType::WAT_Perk04        = 12,
	EWeaponAttachmentType::WAT_Max           = 13
};

// Enum BravoHotelGame.EWeaponAttachmentUseType
enum class EWeaponAttachmentUseType : uint8 
{
	EWeaponAttachmentUseType::WAU_NotUse     = 0,
	EWeaponAttachmentUseType::WAU_Use        = 1,
	EWeaponAttachmentUseType::WAU_UseFixed   = 2,
	EWeaponAttachmentUseType::WAU_MAX        = 3
};

// Enum BravoHotelGame.EThrowingWeaponType
enum class EThrowingWeaponType : uint8 
{
	EThrowingWeaponType::ETWT_None           = 0,
	EThrowingWeaponType::ETWT_Grenade_Frag   = 1,
	EThrowingWeaponType::ETWT_Grenade_Smoke  = 2,
	EThrowingWeaponType::ETWT_Grenade_Flash  = 3,
	EThrowingWeaponType::ETWT_Grenade_Molotov = 4,
	EThrowingWeaponType::ETWT_Greande_Max    = 5,
	EThrowingWeaponType::ETWT_MAX            = 6
};

// Enum BravoHotelGame.EGuideWidgetType
enum class EGuideWidgetType : uint8 
{
	EGuideWidgetType::GWT_Parachuting        = 0,
	EGuideWidgetType::GWT_Ladder             = 1,
	EGuideWidgetType::GWT_Descent            = 2,
	EGuideWidgetType::GWT_Swim               = 3,
	EGuideWidgetType::GWT_Drive              = 4,
	EGuideWidgetType::GWT_ADS                = 5,
	EGuideWidgetType::GWT_ADSZoom            = 6,
	EGuideWidgetType::GWT_WorldMap           = 7,
	EGuideWidgetType::GWT_Spectate           = 8,
	EGuideWidgetType::GWT_SmartPing          = 9,
	EGuideWidgetType::GWT_UseItem            = 10,
	EGuideWidgetType::GWT_MAX                = 11
};

// Enum BravoHotelGame.EBravoHotel_ZipUtilityCompressionFormat
enum class EBravoHotel_ZipUtilityCompressionFormat : uint8 
{
	EBravoHotel_ZipUtilityCompressionFormat::BP_COMPRESSION_FORMAT_UNKNOWN = 0,
	EBravoHotel_ZipUtilityCompressionFormat::BP_COMPRESSION_FORMAT_SEVEN_ZIP = 1,
	EBravoHotel_ZipUtilityCompressionFormat::BP_COMPRESSION_FORMAT_ZIP = 2,
	EBravoHotel_ZipUtilityCompressionFormat::BP_COMPRESSION_FORMAT_GZIP = 3,
	EBravoHotel_ZipUtilityCompressionFormat::BP_COMPRESSION_FORMAT_BZIP2 = 4,
	EBravoHotel_ZipUtilityCompressionFormat::BP_COMPRESSION_FORMAT_RAR = 5,
	EBravoHotel_ZipUtilityCompressionFormat::BP_COMPRESSION_FORMAT_TAR = 6,
	EBravoHotel_ZipUtilityCompressionFormat::BP_COMPRESSION_FORMAT_ISO = 7,
	EBravoHotel_ZipUtilityCompressionFormat::BP_COMPRESSION_FORMAT_CAB = 8,
	EBravoHotel_ZipUtilityCompressionFormat::BP_COMPRESSION_FORMAT_LZMA = 9,
	EBravoHotel_ZipUtilityCompressionFormat::BP_COMPRESSION_FORMAT_LZMA86 = 10,
	EBravoHotel_ZipUtilityCompressionFormat::BP_COMPRESSION_FORMAT_MAX = 11
};

// Enum BravoHotelGame.EAudioSettingType
enum class EAudioSettingType : uint8 
{
	EAudioSettingType::Master                = 0,
	EAudioSettingType::Music                 = 1,
	EAudioSettingType::VoiceInput            = 2,
	EAudioSettingType::VoiceOutput           = 3,
	EAudioSettingType::Effect                = 4,
	EAudioSettingType::Embient               = 5,
	EAudioSettingType::UI                    = 6,
	EAudioSettingType::EAudioSettingType_MAX = 7
};

// Enum BravoHotelGame.EBeginReportWidgetType
enum class EBeginReportWidgetType : uint8 
{
	EBeginReportWidgetType::BRWT_None        = 0,
	EBeginReportWidgetType::BRWT_MatchEnd_Ranking = 1,
	EBeginReportWidgetType::BRWT_Spectator_Hud = 2,
	EBeginReportWidgetType::BRWT_Replay_Timeline = 3,
	EBeginReportWidgetType::BRWT_MAX         = 4
};

// Enum BravoHotelGame.EGameExitType
enum class EGameExitType : uint8 
{
	EGameExitType::EGET_None                 = 0,
	EGameExitType::EGET_Lobby                = 1,
	EGameExitType::EGET_Exit                 = 2,
	EGameExitType::EGET_MAX                  = 3
};

// Enum BravoHotelGame.ELobbyExitType
enum class ELobbyExitType : uint8 
{
	ELobbyExitType::ELET_None                = 0,
	ELobbyExitType::ELET_Game                = 1,
	ELobbyExitType::ELET_Replay              = 2,
	ELobbyExitType::ELET_TutorialPlay        = 3,
	ELobbyExitType::ELET_Exit                = 4,
	ELobbyExitType::ELET_MAX                 = 5
};

// Enum BravoHotelGame.EReportType
enum class EReportType : uint8 
{
	EReportType::RT_None                     = 0,
	EReportType::RT_Report                   = 1,
	EReportType::RT_Replay                   = 2,
	EReportType::RT_DeathCam                 = 3,
	EReportType::RT_Spectator                = 4,
	EReportType::RT_MAX                      = 5
};

// Enum BravoHotelGame.ENormalType
enum class ENormalType : uint8 
{
	ENormalType::None                        = 0,
	ENormalType::RankPoint                   = 1,
	ENormalType::KillPoint                   = 2,
	ENormalType::DMGPoint                    = 3,
	ENormalType::SurvivalPoint               = 4,
	ENormalType::SupplyBoxOpen               = 5,
	ENormalType::DropCoin                    = 6,
	ENormalType::AcquireCoin                 = 7,
	ENormalType::DropRecipe                  = 8,
	ENormalType::AcquireRecipe               = 9,
	ENormalType::ChangeDeck                  = 10,
	ENormalType::Resuscitation               = 11,
	ENormalType::RequestResuscitation        = 12,
	ENormalType::RandomGold                  = 13,
	ENormalType::RandomRankGold              = 14,
	ENormalType::SelectDeckMode              = 15,
	ENormalType::ChangeDeckList              = 16,
	ENormalType::ENormalType_MAX             = 17
};

// Enum BravoHotelGame.EDevelopmentStatus
enum class EDevelopmentStatus : uint8 
{
	EDevelopmentStatus::DP_InProgress        = 0,
	EDevelopmentStatus::DP_Done              = 1,
	EDevelopmentStatus::DP_Release           = 2,
	EDevelopmentStatus::DP_MAX               = 3
};

// Enum BravoHotelGame.ERewardChangeType
enum class ERewardChangeType : uint8 
{
	ERewardChangeType::RT_DoNotReward        = 0,
	ERewardChangeType::RT_Reward             = 1,
	ERewardChangeType::RT_MAX                = 2
};

// Enum BravoHotelGame.EItemRarity
enum class EItemRarity : uint8 
{
	EItemRarity::Level_None                  = 0,
	EItemRarity::Level_1                     = 0,
	EItemRarity::Level_2                     = 1,
	EItemRarity::Level_3                     = 2,
	EItemRarity::Level_4                     = 3,
	EItemRarity::Level_5                     = 4,
	EItemRarity::Level_6                     = 5,
	EItemRarity::Level_7                     = 6,
	EItemRarity::Level_8                     = 7,
	EItemRarity::Level_9                     = 8,
	EItemRarity::Level_10                    = 9,
	EItemRarity::Level_11                    = 10,
	EItemRarity::Level_MAX                   = 11
};

// Enum BravoHotelGame.EGenderType
enum class EGenderType : uint8 
{
	EGenderType::GT_None                     = 0,
	EGenderType::GT_Male                     = 1,
	EGenderType::GT_Female                   = 2,
	EGenderType::GT_ALL                      = 3,
	EGenderType::GT_MAX                      = 4
};

// Enum BravoHotelGame.EItemLifeTimeType
enum class EItemLifeTimeType : uint8 
{
	EItemLifeTimeType::ILTT_None             = 0,
	EItemLifeTimeType::ILTT_Etheral          = 1,
	EItemLifeTimeType::ILTT_LimitTime        = 2,
	EItemLifeTimeType::ILTT_LimitCount       = 3,
	EItemLifeTimeType::ILTT_LimitTimeCount   = 4,
	EItemLifeTimeType::ILTT_MAX              = 5
};

// Enum BravoHotelGame.EConsumablesItemType
enum class EConsumablesItemType : uint8 
{
	EConsumablesItemType::CON_Kitmid         = 0,
	EConsumablesItemType::CON_Kitbig         = 1,
	EConsumablesItemType::CON_Energybar      = 2,
	EConsumablesItemType::CON_Powerdrink     = 3,
	EConsumablesItemType::CON_Painkiller     = 4,
	EConsumablesItemType::CON_Perk           = 5,
	EConsumablesItemType::CON_Safety         = 6,
	EConsumablesItemType::CON_Package        = 7,
	EConsumablesItemType::CON_Plastic        = 8,
	EConsumablesItemType::CON_Aluminium      = 9,
	EConsumablesItemType::CON_Wood           = 10,
	EConsumablesItemType::CON_Bolt           = 11,
	EConsumablesItemType::CON_Coin           = 12,
	EConsumablesItemType::CON_None           = 255,
	EConsumablesItemType::CON_MAX            = 256
};

// Enum BravoHotelGame.EItemType
enum class EItemType : uint8 
{
	EItemType::IT_None                       = 0,
	EItemType::IT_Medical                    = 1,
	EItemType::IT_Weapon                     = 2,
	EItemType::IT_WeaponAttachment           = 3,
	EItemType::IT_Wearable                   = 4,
	EItemType::IT_Ammo                       = 5,
	EItemType::IT_Vehicle                    = 6,
	EItemType::IT_Chest                      = 7,
	EItemType::IT_Usable                     = 8,
	EItemType::IT_Material                   = 9,
	EItemType::IT_Recipe                     = 10,
	EItemType::IT_Skin                       = 11,
	EItemType::IT_Unknown                    = 12,
	EItemType::IT_MAX                        = 13
};

// Enum BravoHotelGame.EResultUIType
enum class EResultUIType : uint8 
{
	EResultUIType::Simple                    = 0,
	EResultUIType::Team                      = 1,
	EResultUIType::Match                     = 2,
	EResultUIType::EResultUIType_MAX         = 3
};

// Enum BravoHotelGame.EPlayerState
enum class EPlayerState : uint8 
{
	EPlayerState::PS_None                    = 0,
	EPlayerState::PS_Spawn                   = 1,
	EPlayerState::PS_Waiting                 = 2,
	EPlayerState::PS_InAircraft_Waiting      = 3,
	EPlayerState::PS_InAircraft_Ready        = 4,
	EPlayerState::PS_Descent                 = 5,
	EPlayerState::PS_Parachuting             = 6,
	EPlayerState::PS_Playing                 = 7,
	EPlayerState::PS_Death                   = 8,
	EPlayerState::PS_Spectating              = 9,
	EPlayerState::PS_MatchEnd                = 10,
	EPlayerState::PS_TeamEnd                 = 11,
	EPlayerState::PS_Respawn                 = 12,
	EPlayerState::PS_MAX                     = 13
};

// Enum BravoHotelGame.EItemSpawnPriorityType
enum class EItemSpawnPriorityType : uint8 
{
	EItemSpawnPriorityType::ISPT_Important   = 0,
	EItemSpawnPriorityType::ISPT_UnImportant = 1,
	EItemSpawnPriorityType::ISPT_Force       = 2,
	EItemSpawnPriorityType::ISPT_MAX         = 3
};

// Enum BravoHotelGame.ESpectatingMode
enum class ESpectatingMode : uint8 
{
	ESpectatingMode::SM_None                 = 0,
	ESpectatingMode::SM_Solo                 = 1,
	ESpectatingMode::SM_Team                 = 2,
	ESpectatingMode::SM_OtherTeam            = 3,
	ESpectatingMode::SM_Free                 = 4,
	ESpectatingMode::SM_MAX                  = 5
};

// Enum BravoHotelGame.EPlayerBehavior
enum class EPlayerBehavior : uint8 
{
	EPlayerBehavior::PB_KnockDown            = 0,
	EPlayerBehavior::PB_Alive                = 1,
	EPlayerBehavior::PB_Death                = 2,
	EPlayerBehavior::PB_Vehicle              = 3,
	EPlayerBehavior::PB_AirCraft             = 4,
	EPlayerBehavior::PB_Parachute            = 5,
	EPlayerBehavior::PB_Disconnect           = 6,
	EPlayerBehavior::PB_CriticalTime         = 7,
	EPlayerBehavior::PB_MAX                  = 8
};

// Enum BravoHotelGame.EPromotionCondition
enum class EPromotionCondition : uint8 
{
	EPromotionCondition::PC_RankRate         = 0,
	EPromotionCondition::PC_MAX              = 1
};

// Enum BravoHotelGame.EProjectileBehavior
enum class EProjectileBehavior : uint8 
{
	EProjectileBehavior::PB_Bounce_Only      = 0,
	EProjectileBehavior::PB_Penetrate_Only   = 1,
	EProjectileBehavior::PB_Bounce_And_Penetrate = 2,
	EProjectileBehavior::PB_MAX              = 3
};

// Enum BravoHotelGame.EQuestTaskType
enum class EQuestTaskType : uint8 
{
	EQuestTaskType::None                     = 0,
	EQuestTaskType::Dummy                    = 1,
	EQuestTaskType::Kill                     = 2,
	EQuestTaskType::PickUp                   = 3,
	EQuestTaskType::UseItem                  = 4,
	EQuestTaskType::Combine                  = 5,
	EQuestTaskType::ActiveSkill              = 6,
	EQuestTaskType::Weapon                   = 7,
	EQuestTaskType::Map                      = 8,
	EQuestTaskType::Inventory                = 9,
	EQuestTaskType::PersonalSupplyOpen       = 10,
	EQuestTaskType::EQuestTaskType_MAX       = 11
};

// Enum BravoHotelGame.EVehicleState
enum class EVehicleState : uint8 
{
	EVehicleState::Spawned                   = 1,
	EVehicleState::Standby                   = 2,
	EVehicleState::Idle                      = 3,
	EVehicleState::Driving                   = 4,
	EVehicleState::Holding                   = 5,
	EVehicleState::Flooded                   = 6,
	EVehicleState::Exploded                  = 7,
	EVehicleState::Disabled                  = 8,
	EVehicleState::EVehicleState_MAX         = 9
};

// Enum BravoHotelGame.EQuestState
enum class EQuestState : uint8 
{
	EQuestState::QS_None                     = 0,
	EQuestState::QS_Ready                    = 1,
	EQuestState::QS_Progress                 = 2,
	EQuestState::QS_Complete                 = 3,
	EQuestState::QS_MAX                      = 4
};

// Enum BravoHotelGame.EDediGameCheatType
enum class EDediGameCheatType : uint8 
{
	EDediGameCheatType::EGCT_None            = 0,
	EDediGameCheatType::EGCT_UnlockRoomLimit = 1,
	EDediGameCheatType::EGCT_MAX             = 2
};

// Enum BravoHotelGame.EMatchingType
enum class EMatchingType : uint8 
{
	EMatchingType::MT_Unknown                = 0,
	EMatchingType::MT_Solo                   = 1,
	EMatchingType::MT_Duo                    = 2,
	EMatchingType::MT_Squad                  = 4,
	EMatchingType::MT_MAX                    = 5
};

// Enum BravoHotelGame.EGameViewType
enum class EGameViewType : uint8 
{
	EGameViewType::GVT_Unknown               = 0,
	EGameViewType::GVT_TPP                   = 1,
	EGameViewType::GVT_FPP                   = 2,
	EGameViewType::GVT_MAX                   = 3
};

// Enum BravoHotelGame.ELoginType
enum class ELoginType : uint8 
{
	ELoginType::LT_Name                      = 0,
	ELoginType::LT_Account                   = 1,
	ELoginType::LT_Geegee                    = 2,
	ELoginType::LT_Steam                     = 3,
	ELoginType::LT_GeegeeWithSteam           = 4,
	ELoginType::LT_MAX                       = 5
};

// Enum BravoHotelGame.EGameMode
enum class EGameMode : uint8 
{
	EGameMode::GM_BattleRoyale               = 0,
	EGameMode::GM_DeathMatch                 = 1,
	EGameMode::GM_BattleRoyale_DEV           = 2,
	EGameMode::GM_BattleRoyale_QA            = 3,
	EGameMode::GM_BattleRoyale_STAGING       = 4,
	EGameMode::GM_MAX                        = 5
};

// Enum BravoHotelGame.EBluseZoneState
enum class EBluseZoneState : uint8 
{
	EBluseZoneState::EBRS_None               = 0,
	EBluseZoneState::EBZS_SurvivalCircleLulled = 1,
	EBluseZoneState::EBRS_SurvivalCircleShrinking = 2,
	EBluseZoneState::EBRS_Delay              = 3,
	EBluseZoneState::EBluseZoneState_MAX     = 4
};

// Enum BravoHotelGame.EWorldMapAreaWidgetType
enum class EWorldMapAreaWidgetType : uint8 
{
	EWorldMapAreaWidgetType::WAWT_RedZone    = 0,
	EWorldMapAreaWidgetType::WAWT_Nuclear    = 1,
	EWorldMapAreaWidgetType::WAWT_FindLandingPosition = 2,
	EWorldMapAreaWidgetType::WAWT_FindLandingPositionTry = 3,
	EWorldMapAreaWidgetType::WAWT_SearchInstinct = 4,
	EWorldMapAreaWidgetType::WAWT_VehicleSearch = 5,
	EWorldMapAreaWidgetType::WAWT_SpatialSense = 6,
	EWorldMapAreaWidgetType::WAWT_CarScan    = 7,
	EWorldMapAreaWidgetType::WAWT_CarScanTry = 8,
	EWorldMapAreaWidgetType::WAWT_UltimateVehicle = 9,
	EWorldMapAreaWidgetType::WAWT_NitroBoom  = 10,
	EWorldMapAreaWidgetType::WAWT_TransportAircraft = 11,
	EWorldMapAreaWidgetType::WAWT_TransportDropBox = 12,
	EWorldMapAreaWidgetType::WAWT_MaterialItem = 13,
	EWorldMapAreaWidgetType::WAWT_LocalPing  = 14,
	EWorldMapAreaWidgetType::WAWT_ExpertWeaponItem = 15,
	EWorldMapAreaWidgetType::WAWT_Amplifier  = 16,
	EWorldMapAreaWidgetType::WAWT_HeartBeatSensor = 17,
	EWorldMapAreaWidgetType::WAWT_Trap       = 18,
	EWorldMapAreaWidgetType::WAWT_Craft      = 19,
	EWorldMapAreaWidgetType::WAWT_Capsule    = 20,
	EWorldMapAreaWidgetType::WAWT_Skill      = 21,
	EWorldMapAreaWidgetType::WAWT_MAX        = 22
};

// Enum BravoHotelGame.EBroadCastTeamType
enum class EBroadCastTeamType : uint8 
{
	EBroadCastTeamType::None                 = 0,
	EBroadCastTeamType::Enemy                = 1,
	EBroadCastTeamType::Friendly             = 2,
	EBroadCastTeamType::Me                   = 3,
	EBroadCastTeamType::EBroadCastTeamType_MAX = 4
};

// Enum BravoHotelGame.EBroadCastKillMessageType
enum class EBroadCastKillMessageType : uint8 
{
	EBroadCastKillMessageType::None          = 0,
	EBroadCastKillMessageType::Kill          = 1,
	EBroadCastKillMessageType::Knockout      = 2,
	EBroadCastKillMessageType::Resuscitated  = 3,
	EBroadCastKillMessageType::Kicked        = 4,
	EBroadCastKillMessageType::EBroadCastKillMessageType_MAX = 5
};

// Enum BravoHotelGame.EStatupAnimType
enum class EStatupAnimType : uint8 
{
	EStatupAnimType::SAT_None                = 0,
	EStatupAnimType::SAT_Weapon1             = 1,
	EStatupAnimType::SAT_Weapon2             = 2,
	EStatupAnimType::SAT_Helmet              = 3,
	EStatupAnimType::SAT_Armor               = 4,
	EStatupAnimType::SAT_Bag                 = 5,
	EStatupAnimType::SAT_MAX                 = 6
};

// Enum BravoHotelGame.ESceneType
enum class ESceneType : uint8 
{
	ESceneType::Scene_Begin                  = 0,
	ESceneType::Scene_GammaSettings          = 1,
	ESceneType::Scene_CompanyLogo            = 2,
	ESceneType::Scene_SupportProgram         = 3,
	ESceneType::Scene_OpeningMovie           = 4,
	ESceneType::Scene_Login                  = 5,
	ESceneType::Scene_TermsConditions        = 6,
	ESceneType::Scene_CreateCharacter        = 7,
	ESceneType::Scene_StartScenarioMode      = 8,
	ESceneType::Scene_TutorialMovie          = 9,
	ESceneType::Scene_PlayTutorial           = 10,
	ESceneType::Scene_Lobby                  = 11,
	ESceneType::Scene_End                    = 12,
	ESceneType::Scene_MAX                    = 13
};

// Enum BravoHotelGame.ELoginFlow
enum class ELoginFlow : uint8 
{
	ELoginFlow::Flow_Begin                   = 0,
	ELoginFlow::Flow_WaitingTicket           = 1,
	ELoginFlow::Flow_ServicePlatform         = 2,
	ELoginFlow::Flow_End                     = 3,
	ELoginFlow::Flow_MAX                     = 4
};

// Enum BravoHotelGame.ESteamPresenceState
enum class ESteamPresenceState : uint8 
{
	ESteamPresenceState::Online              = 0,
	ESteamPresenceState::Offline             = 1,
	ESteamPresenceState::Away                = 2,
	ESteamPresenceState::ExtendedAway        = 3,
	ESteamPresenceState::DoNotDisturb        = 4,
	ESteamPresenceState::Chat                = 5,
	ESteamPresenceState::ESteamPresenceState_MAX = 6
};

// Enum BravoHotelGame.EVehicleWheelType
enum class EVehicleWheelType : uint8 
{
	EVehicleWheelType::VWT_Ground            = 0,
	EVehicleWheelType::VWT_Water             = 1,
	EVehicleWheelType::VWT_Wrecked           = 2,
	EVehicleWheelType::_COUNT_               = 3,
	EVehicleWheelType::EVehicleWheelType_MAX = 4
};

// Enum BravoHotelGame.EWeaponAnimationType
enum class EWeaponAnimationType : uint8 
{
	EWeaponAnimationType::EWAT_Unarmed       = 0,
	EWeaponAnimationType::EWAT_AssaultRifle  = 1,
	EWeaponAnimationType::EWAT_SMG           = 2,
	EWeaponAnimationType::EWAT_SniperRifle   = 3,
	EWeaponAnimationType::EWAT_Shotgun       = 4,
	EWeaponAnimationType::EWAT_Pistol        = 5,
	EWeaponAnimationType::EWAT_ThrowingWeapon = 6,
	EWeaponAnimationType::EWAT_Amplifier     = 7,
	EWeaponAnimationType::EWAT_MeleeWeapon   = 8,
	EWeaponAnimationType::EWAT_HeartBeatSensor = 9,
	EWeaponAnimationType::EWAT_MAX           = 10
};

// Enum BravoHotelGame.EWeaponState
enum class EWeaponState : uint8 
{
	EWeaponState::EWS_Idle                   = 0,
	EWeaponState::EWS_Firing                 = 1,
	EWeaponState::EWS_Reloading              = 2,
	EWeaponState::EWS_BoltAction             = 3,
	EWeaponState::EWS_Equipping              = 4,
	EWeaponState::EWS_MAX                    = 5
};

// Enum BravoHotelGame.EWeaponAttachmentMagazineType
enum class EWeaponAttachmentMagazineType : uint8 
{
	EWeaponAttachmentMagazineType::WA_Mag_None = 0,
	EWeaponAttachmentMagazineType::WA_Mag_QuickDraw = 1,
	EWeaponAttachmentMagazineType::WA_Mag_Extended = 2,
	EWeaponAttachmentMagazineType::WA_Mag_ExtendedQuickDraw = 3,
	EWeaponAttachmentMagazineType::WA_Mag_MAX = 4
};

// Enum BravoHotelGame.EWeaponRecoilType
enum class EWeaponRecoilType : uint8 
{
	EWeaponRecoilType::EWRT_2                = 0,
	EWeaponRecoilType::EWRT_3                = 1,
	EWeaponRecoilType::EWRT_MAX              = 2
};

// Enum BravoHotelGame.ETeamType
enum class ETeamType : uint8 
{
	ETeamType::None                          = 0,
	ETeamType::UserOnly                      = 1,
	ETeamType::AIOnly                        = 2,
	ETeamType::All                           = 3,
	ETeamType::ETeamType_MAX                 = 4
};

// Enum BravoHotelGame.EBattleRoyalTeamState
enum class EBattleRoyalTeamState : uint8 
{
	EBattleRoyalTeamState::None              = 0,
	EBattleRoyalTeamState::Alive             = 1,
	EBattleRoyalTeamState::Ranked            = 2,
	EBattleRoyalTeamState::EBattleRoyalTeamState_MAX = 3
};

// Enum BravoHotelGame.EBoxStateType
enum class EBoxStateType : uint8 
{
	EBoxStateType::None                      = 0,
	EBoxStateType::Show                      = 1,
	EBoxStateType::Opened                    = 2,
	EBoxStateType::Closed                    = 3,
	EBoxStateType::Hide                      = 4,
	EBoxStateType::EBoxStateType_MAX         = 5
};

// Enum BravoHotelGame.EAssignReason
enum class EAssignReason : uint8 
{
	EAssignReason::None                      = 0,
	EAssignReason::WithTeam                  = 1,
	EAssignReason::MinMax                    = 2,
	EAssignReason::InMax                     = 3,
	EAssignReason::All                       = 4,
	EAssignReason::EAssignReason_MAX         = 5
};

// Enum BravoHotelGame.EPersonalSupplyBoxState
enum class EPersonalSupplyBoxState : uint8 
{
	EPersonalSupplyBoxState::None            = 0,
	EPersonalSupplyBoxState::Unassigned      = 1,
	EPersonalSupplyBoxState::Assigned        = 2,
	EPersonalSupplyBoxState::Opened          = 3,
	EPersonalSupplyBoxState::TakeSome        = 4,
	EPersonalSupplyBoxState::TakeItAll       = 5,
	EPersonalSupplyBoxState::EPersonalSupplyBoxState_MAX = 6
};

// Enum BravoHotelGame.ECharacterClassFlag
enum class ECharacterClassFlag : uint8 
{
	ECharacterClassFlag::CCF_None            = 0,
	ECharacterClassFlag::CCF_Novice          = 1,
	ECharacterClassFlag::CCF_Shooter         = 2,
	ECharacterClassFlag::CCF_Survivor        = 4,
	ECharacterClassFlag::CCF_Assault         = 8,
	ECharacterClassFlag::CCF_Medic           = 16,
	ECharacterClassFlag::CCF_Scout           = 32,
	ECharacterClassFlag::CCF_Demolition      = 64,
	ECharacterClassFlag::CCF_SuperRookie     = 128,
	ECharacterClassFlag::CCF_All             = 255,
	ECharacterClassFlag::CCF_MAX             = 256
};

// Enum BravoHotelGame.ECharacterMovmentStateType
enum class ECharacterMovmentStateType : uint8 
{
	ECharacterMovmentStateType::CMST_None    = 0,
	ECharacterMovmentStateType::CMST_ProneWalk = 1,
	ECharacterMovmentStateType::CMST_ProneRun = 2,
	ECharacterMovmentStateType::CMST_ProneSprint = 3,
	ECharacterMovmentStateType::CMST_CrouchWalk = 4,
	ECharacterMovmentStateType::CMST_CrouchRun = 5,
	ECharacterMovmentStateType::CMST_CrouchSprint = 6,
	ECharacterMovmentStateType::CMST_StandWalk = 7,
	ECharacterMovmentStateType::CMST_StandRun = 8,
	ECharacterMovmentStateType::CMST_StandSprint = 9,
	ECharacterMovmentStateType::CMST_Moving  = 10,
	ECharacterMovmentStateType::CMST_Jump    = 11,
	ECharacterMovmentStateType::CMST_Swim    = 12,
	ECharacterMovmentStateType::CMST_Using   = 13,
	ECharacterMovmentStateType::CMST_Reviving = 14,
	ECharacterMovmentStateType::CMST_Resuscitating = 15,
	ECharacterMovmentStateType::CMST_Vehicle = 16,
	ECharacterMovmentStateType::CMST_Reload  = 17,
	ECharacterMovmentStateType::CMST_FullAttachment = 18,
	ECharacterMovmentStateType::CMST_Firing  = 19,
	ECharacterMovmentStateType::CMST_LeftLean = 20,
	ECharacterMovmentStateType::CMST_RightLean = 21,
	ECharacterMovmentStateType::CMST_KnockOut = 22,
	ECharacterMovmentStateType::CMST_HeadBanging = 23,
	ECharacterMovmentStateType::CMST_Burning = 24,
	ECharacterMovmentStateType::CMST_MAX     = 25
};

// Enum BravoHotelGame.EBuffTargetType
enum class EBuffTargetType : uint8 
{
	EBuffTargetType::BTT_Character           = 0,
	EBuffTargetType::BTT_Vehicle             = 1,
	EBuffTargetType::BTT_Weapon              = 2,
	EBuffTargetType::BTT_MAX                 = 3
};

// Enum BravoHotelGame.EAbilityCombineType
enum class EAbilityCombineType : uint8 
{
	EAbilityCombineType::ACT_None            = 0,
	EAbilityCombineType::ACT_Plus            = 1,
	EAbilityCombineType::ACT_Multiply        = 2,
	EAbilityCombineType::ACT_PercentPluse    = 3,
	EAbilityCombineType::ACT_PercentMultiply = 4,
	EAbilityCombineType::ACT_PercentMinusMultiply = 5,
	EAbilityCombineType::ACT_MAX             = 6
};

// Enum BravoHotelGame.ESoundCondition
enum class ESoundCondition : int32 
{
	ESoundCondition::SC_Local                = 1,
	ESoundCondition::SC_WeaponModel          = 2,
	ESoundCondition::SC_Water                = 4,
	ESoundCondition::SC_WeaponADS            = 8,
	ESoundCondition::SC_FoleyType            = 16,
	ESoundCondition::SC_BulletType           = 32,
	ESoundCondition::SC_VehicleImpactType    = 64,
	ESoundCondition::SC_VehicleImpulse       = 128,
	ESoundCondition::SC_DamageType           = 256,
	ESoundCondition::SC_DamageAmount         = 512,
	ESoundCondition::SC_AmbienceType         = 1024,
	ESoundCondition::SC_AmbienceSpace        = 2048,
	ESoundCondition::SC_Surface              = 4096,
	ESoundCondition::SC_WeaponSilencer       = 8192,
	ESoundCondition::SC_CharacterState       = 16384,
	ESoundCondition::SC_WeaponFireRate       = 32768,
	ESoundCondition::SC_FootstepType         = 65536,
	ESoundCondition::SC_BushLoudness         = 131072,
	ESoundCondition::SC_CharacterType        = 262144,
	ESoundCondition::SC_ActSilently          = 524288,
	ESoundCondition::SC_MysterySlate         = 1048576,
	ESoundCondition::SC_EnergyBar            = 2097152,
	ESoundCondition::SC_MAX                  = 2097153
};

// Enum BravoHotelGame.EAppAudioState
enum class EAppAudioState : uint8 
{
	EAppAudioState::Normal                   = 0,
	EAppAudioState::Cinematic                = 1,
	EAppAudioState::Loading                  = 2,
	EAppAudioState::Menu                     = 3,
	EAppAudioState::Background               = 4,
	EAppAudioState::Tutorial                 = 5,
	EAppAudioState::EAppAudioState_MAX       = 6
};

// Enum BravoHotelGame.EIndoorConditionTargets
enum class EIndoorConditionTargets : uint8 
{
	EIndoorConditionTargets::Character       = 1,
	EIndoorConditionTargets::Weapon          = 2,
	EIndoorConditionTargets::All             = 3,
	EIndoorConditionTargets::EIndoorConditionTargets_MAX = 4
};

// Enum BravoHotelGame.EOcclusionMethod
enum class EOcclusionMethod : uint8 
{
	EOcclusionMethod::Adaptive               = 0,
	EOcclusionMethod::Absolute               = 1,
	EOcclusionMethod::Legacy                 = 2,
	EOcclusionMethod::EOcclusionMethod_MAX   = 3
};

// Enum BravoHotelGame.ECrosshairPosition
enum class ECrosshairPosition : uint8 
{
	ECrosshairPosition::CP_Left              = 0,
	ECrosshairPosition::CP_Top               = 1,
	ECrosshairPosition::CP_Right             = 2,
	ECrosshairPosition::CP_Bottom            = 3,
	ECrosshairPosition::CP_Center            = 4,
	ECrosshairPosition::__COUNT__            = 5,
	ECrosshairPosition::ECrosshairPosition_MAX = 6
};

// Enum BravoHotelGame.EContentsType
enum class EContentsType : uint8 
{
	EContentsType::ECT_None                  = 0,
	EContentsType::ECT_GameInfo              = 1,
	EContentsType::ECT_CharacterInfo         = 2,
	EContentsType::ECT_Matching_RP_Info      = 3,
	EContentsType::ECT_SupplyBox_Spawn       = 4,
	EContentsType::ECT_Bulezone_Info         = 5,
	EContentsType::ECT_Transport_Info        = 6,
	EContentsType::ECT_Redzone_Info          = 7,
	EContentsType::ECT_Vehicle_Spawn_Info    = 8,
	EContentsType::ECT_Item_Spawn_Info       = 9,
	EContentsType::ECT_LogIn                 = 10,
	EContentsType::ECT_LobbyReady            = 11,
	EContentsType::ECT_MatchIn               = 12,
	EContentsType::ECT_LogOut                = 13,
	EContentsType::ECT_LogAbusing            = 14,
	EContentsType::ECT_LogKickedUsers        = 15,
	EContentsType::ECT_MAX                   = 16
};

// Enum BravoHotelGame.EReportIndex
enum class EReportIndex : uint8 
{
	EReportIndex::RI_None                    = 0,
	EReportIndex::RI_ImproperName            = 1,
	EReportIndex::RI_CheatProgram            = 2,
	EReportIndex::RI_DisruptionGame          = 3,
	EReportIndex::RI_AbnormalBehavior        = 4,
	EReportIndex::RI_MAX                     = 5
};

// Enum BravoHotelGame.ERecipeSearchType
enum class ERecipeSearchType : uint8 
{
	ERecipeSearchType::RST_None              = 0,
	ERecipeSearchType::RST_Auto              = 1,
	ERecipeSearchType::RST_Select            = 2,
	ERecipeSearchType::RST_MAX               = 3
};

// Enum BravoHotelGame.EItemLogType
enum class EItemLogType : uint8 
{
	EItemLogType::None                       = 0,
	EItemLogType::Division                   = 1,
	EItemLogType::TrySpawn                   = 2,
	EItemLogType::Spawned                    = 3,
	EItemLogType::Gain                       = 4,
	EItemLogType::RateDivision               = 5,
	EItemLogType::RateDelete                 = 6,
	EItemLogType::Max                        = 7
};

// Enum BravoHotelGame.EDataItemType
enum class EDataItemType : uint8 
{
	EDataItemType::DIT_None                  = 0,
	EDataItemType::DIT_Book                  = 1,
	EDataItemType::DIT_Booster               = 2,
	EDataItemType::DIT_Medical               = 3,
	EDataItemType::DIT_MAX                   = 4
};

// Enum BravoHotelGame.EClientGameContentsType
enum class EClientGameContentsType : uint8 
{
	EClientGameContentsType::CGCT_None       = 0,
	EClientGameContentsType::CGCT_Change_Class = 1,
	EClientGameContentsType::CGCT_Weapon_Equip = 2,
	EClientGameContentsType::CGCT_Item_Pickup = 3,
	EClientGameContentsType::CGCT_Exchange_Parts = 4,
	EClientGameContentsType::CGCT_Weapon_UnEquip = 5,
	EClientGameContentsType::CGCT_Item_Drop  = 6,
	EClientGameContentsType::CGCT_Recovery_Item_Use = 7,
	EClientGameContentsType::CGCT_EnergyBar_Item_Use = 8,
	EClientGameContentsType::CGCT_Recipe_Item_Search = 9,
	EClientGameContentsType::CGCT_Recipe_Item_Combine = 10,
	EClientGameContentsType::CGCT_Player_LevelUp = 11,
	EClientGameContentsType::CGCT_SupplyBox_Open = 12,
	EClientGameContentsType::CGCT_SupplyBox_Change = 13,
	EClientGameContentsType::CGCT_Hited_Player = 14,
	EClientGameContentsType::CGCT_Hit_Player = 15,
	EClientGameContentsType::CGCT_KnockDowned_Player = 16,
	EClientGameContentsType::CGCT_KnockDown_Player = 17,
	EClientGameContentsType::CGCT_Death_Player = 18,
	EClientGameContentsType::CGCT_Kill_Player = 19,
	EClientGameContentsType::CGCT_Hit_Rate   = 20,
	EClientGameContentsType::CGCT_Revival_Player = 21,
	EClientGameContentsType::CGCT_GoldenTime_Start_Player = 22,
	EClientGameContentsType::CGCT_GoldenTime_Revival_Player = 23,
	EClientGameContentsType::CGCT_CoolTime_Skill = 24,
	EClientGameContentsType::CGCT_Active_Skill = 25,
	EClientGameContentsType::CGCT_Vehicle_Board_Info = 26,
	EClientGameContentsType::CGCT_Vehicle_Alight_Info = 27,
	EClientGameContentsType::CGCT_Vehicle_ChangeSeat_Info = 28,
	EClientGameContentsType::CGCT_Vehicle_Hit_Player = 29,
	EClientGameContentsType::CGCT_Vehicle_Destroy_Player = 30,
	EClientGameContentsType::CGCT_CharacterControl_Info = 31,
	EClientGameContentsType::CGCT_Parkour_Interaction = 32,
	EClientGameContentsType::CGCT_Door_Interaction = 33,
	EClientGameContentsType::CGCT_Parachute_Interaction = 34,
	EClientGameContentsType::CGCT_Ladder_Interaction = 35,
	EClientGameContentsType::CGCT_Throwable_Use = 36,
	EClientGameContentsType::CGCT_Report_Illegal_Users = 37,
	EClientGameContentsType::CGCT_Game_Start = 38,
	EClientGameContentsType::CGCT_Game_Exit  = 39,
	EClientGameContentsType::CGCT_Game_Escape = 40,
	EClientGameContentsType::CGCT_Game_Network = 41,
	EClientGameContentsType::CGCT_Game_EarlyTechReport = 42,
	EClientGameContentsType::CGCT_Game_TechReport = 43,
	EClientGameContentsType::CGCT_MAX        = 44
};

// Enum BravoHotelGame.EEventTypeClientGameStateData
enum class EEventTypeClientGameStateData : uint8 
{
	EEventTypeClientGameStateData::None      = 0,
	EEventTypeClientGameStateData::Game_Start = 1,
	EEventTypeClientGameStateData::Game_Exit = 2,
	EEventTypeClientGameStateData::Game_Escape = 3,
	EEventTypeClientGameStateData::Max       = 4
};

// Enum BravoHotelGame.EEventTypeClientGameWeaponData
enum class EEventTypeClientGameWeaponData : uint8 
{
	EEventTypeClientGameWeaponData::None     = 0,
	EEventTypeClientGameWeaponData::Armed    = 1,
	EEventTypeClientGameWeaponData::Unarmed  = 2,
	EEventTypeClientGameWeaponData::Reload   = 3,
	EEventTypeClientGameWeaponData::Max      = 4
};

// Enum BravoHotelGame.EEventTypeClientGameInventoryData
enum class EEventTypeClientGameInventoryData : uint8 
{
	EEventTypeClientGameInventoryData::None  = 0,
	EEventTypeClientGameInventoryData::Open  = 1,
	EEventTypeClientGameInventoryData::Close = 2,
	EEventTypeClientGameInventoryData::Max   = 3
};

// Enum BravoHotelGame.EEventTypeClientGameVehicleData
enum class EEventTypeClientGameVehicleData : uint8 
{
	EEventTypeClientGameVehicleData::None    = 0,
	EEventTypeClientGameVehicleData::Vehicle_Board_Info = 1,
	EEventTypeClientGameVehicleData::Vehicle_Alight_Info = 2,
	EEventTypeClientGameVehicleData::Vehicle_ChangeSeat_Info = 3,
	EEventTypeClientGameVehicleData::Max     = 4
};

// Enum BravoHotelGame.EEventTypeClientGameRevivalData
enum class EEventTypeClientGameRevivalData : uint8 
{
	EEventTypeClientGameRevivalData::None    = 0,
	EEventTypeClientGameRevivalData::Revival_Player = 1,
	EEventTypeClientGameRevivalData::GoldenTime_Revival_Player = 2,
	EEventTypeClientGameRevivalData::Max     = 3
};

// Enum BravoHotelGame.EEventTypeClientGameDiedData
enum class EEventTypeClientGameDiedData : uint8 
{
	EEventTypeClientGameDiedData::None       = 0,
	EEventTypeClientGameDiedData::Death_Player = 1,
	EEventTypeClientGameDiedData::Kill_Player = 2,
	EEventTypeClientGameDiedData::Max        = 3
};

// Enum BravoHotelGame.EEventTypeClientGameKnockDownedData
enum class EEventTypeClientGameKnockDownedData : uint8 
{
	EEventTypeClientGameKnockDownedData::None = 0,
	EEventTypeClientGameKnockDownedData::KnockDowned_Player = 1,
	EEventTypeClientGameKnockDownedData::KnockDown_Player = 2,
	EEventTypeClientGameKnockDownedData::Max = 3
};

// Enum BravoHotelGame.EEventTypeClientGameBattleData
enum class EEventTypeClientGameBattleData : uint8 
{
	EEventTypeClientGameBattleData::None     = 0,
	EEventTypeClientGameBattleData::Hited_Player = 1,
	EEventTypeClientGameBattleData::Hit_Player = 2,
	EEventTypeClientGameBattleData::Vehicle_Hit_Player = 3,
	EEventTypeClientGameBattleData::Vehicle_Destroy_Player = 4,
	EEventTypeClientGameBattleData::GoldenTime_Start_Player = 5,
	EEventTypeClientGameBattleData::Max      = 6
};

// Enum BravoHotelGame.EEventTypeClientGameThrowableData
enum class EEventTypeClientGameThrowableData : uint8 
{
	EEventTypeClientGameThrowableData::None  = 0,
	EEventTypeClientGameThrowableData::Throwable_Use = 1,
	EEventTypeClientGameThrowableData::Max   = 2
};

// Enum BravoHotelGame.EEventTypeClientGameInteractionData
enum class EEventTypeClientGameInteractionData : uint8 
{
	EEventTypeClientGameInteractionData::None = 0,
	EEventTypeClientGameInteractionData::Parkour = 1,
	EEventTypeClientGameInteractionData::Door = 2,
	EEventTypeClientGameInteractionData::Parachute = 3,
	EEventTypeClientGameInteractionData::Ladder = 4,
	EEventTypeClientGameInteractionData::Max = 5
};

// Enum BravoHotelGame.EEventTypeClientGameItemSearchData
enum class EEventTypeClientGameItemSearchData : uint8 
{
	EEventTypeClientGameItemSearchData::None = 0,
	EEventTypeClientGameItemSearchData::Recipe_Item_Search = 1,
	EEventTypeClientGameItemSearchData::Max  = 2
};

// Enum BravoHotelGame.EEventTypeClientGameItemData
enum class EEventTypeClientGameItemData : uint8 
{
	EEventTypeClientGameItemData::None       = 0,
	EEventTypeClientGameItemData::Weapon_Equip = 1,
	EEventTypeClientGameItemData::Item_Pickup = 2,
	EEventTypeClientGameItemData::Exchange_Parts = 3,
	EEventTypeClientGameItemData::Weapon_UnEquip = 4,
	EEventTypeClientGameItemData::Item_Drop  = 5,
	EEventTypeClientGameItemData::Recovery_Item_Use = 6,
	EEventTypeClientGameItemData::EnergyBar_Item_Use = 7,
	EEventTypeClientGameItemData::Recipe_Item_Combine = 8,
	EEventTypeClientGameItemData::Item_Use   = 9,
	EEventTypeClientGameItemData::Max        = 10
};

// Enum BravoHotelGame.EEventTypeClientGameSkillData
enum class EEventTypeClientGameSkillData : uint8 
{
	EEventTypeClientGameSkillData::None      = 0,
	EEventTypeClientGameSkillData::CoolTime_Skill = 1,
	EEventTypeClientGameSkillData::Active_Skill = 2,
	EEventTypeClientGameSkillData::Max       = 3
};

// Enum BravoHotelGame.EEventTypeClientGameSupplyBoxData
enum class EEventTypeClientGameSupplyBoxData : uint8 
{
	EEventTypeClientGameSupplyBoxData::None  = 0,
	EEventTypeClientGameSupplyBoxData::SupplyBox_Open = 1,
	EEventTypeClientGameSupplyBoxData::SupplyBox_Change = 2,
	EEventTypeClientGameSupplyBoxData::Max   = 3
};

// Enum BravoHotelGame.EEventTypeClientData
enum class EEventTypeClientData : int32 
{
	EEventTypeClientData::None               = 0,
	EEventTypeClientData::LogIn              = 10101,
	EEventTypeClientData::LobbyReady         = 10102,
	EEventTypeClientData::MatchIn            = 10103,
	EEventTypeClientData::LogOut             = 10104,
	EEventTypeClientData::Max                = 10105
};

// Enum BravoHotelGame.EEventTypeWorldItemData
enum class EEventTypeWorldItemData : int32 
{
	EEventTypeWorldItemData::None            = 0,
	EEventTypeWorldItemData::Spawned         = 50101,
	EEventTypeWorldItemData::Picked          = 50102,
	EEventTypeWorldItemData::VehicleSpawned  = 50103,
	EEventTypeWorldItemData::Max             = 50104
};

// Enum BravoHotelGame.EEventTypeUseItemData
enum class EEventTypeUseItemData : int32 
{
	EEventTypeUseItemData::None              = 0,
	EEventTypeUseItemData::Heal              = 40301,
	EEventTypeUseItemData::Boost             = 40302,
	EEventTypeUseItemData::SkillBook         = 40303,
	EEventTypeUseItemData::Max               = 40304
};

// Enum BravoHotelGame.EEventTypeSupplyData
enum class EEventTypeSupplyData : uint8 
{
	EEventTypeSupplyData::None               = 0,
	EEventTypeSupplyData::Created            = 1,
	EEventTypeSupplyData::Opend              = 2,
	EEventTypeSupplyData::Max                = 3
};

// Enum BravoHotelGame.EEventTypeTransportData
enum class EEventTypeTransportData : uint8 
{
	EEventTypeTransportData::None            = 0,
	EEventTypeTransportData::Created         = 1,
	EEventTypeTransportData::SpawnFirst      = 2,
	EEventTypeTransportData::SpawnSecond     = 3,
	EEventTypeTransportData::Destroyed       = 4,
	EEventTypeTransportData::Max             = 5
};

// Enum BravoHotelGame.EEventTypeRedZoneData
enum class EEventTypeRedZoneData : uint8 
{
	EEventTypeRedZoneData::None              = 0,
	EEventTypeRedZoneData::Created           = 1,
	EEventTypeRedZoneData::Destroyed         = 2,
	EEventTypeRedZoneData::Max               = 3
};

// Enum BravoHotelGame.EEventTypeBlueZoneData
enum class EEventTypeBlueZoneData : uint8 
{
	EEventTypeBlueZoneData::None             = 0,
	EEventTypeBlueZoneData::Created          = 1,
	EEventTypeBlueZoneData::SurvivalCircleLulled = 2,
	EEventTypeBlueZoneData::SurvivalCircleShrinking = 3,
	EEventTypeBlueZoneData::Delay            = 4,
	EEventTypeBlueZoneData::Max              = 5
};

// Enum BravoHotelGame.EEventTypeBattleRoyalData
enum class EEventTypeBattleRoyalData : uint8 
{
	EEventTypeBattleRoyalData::None          = 0,
	EEventTypeBattleRoyalData::Ready         = 1,
	EEventTypeBattleRoyalData::GameStart     = 2,
	EEventTypeBattleRoyalData::AircraftStart = 3,
	EEventTypeBattleRoyalData::AircraftEnableDescent = 4,
	EEventTypeBattleRoyalData::AircraftEnd   = 5,
	EEventTypeBattleRoyalData::MatchEnd      = 6,
	EEventTypeBattleRoyalData::Max           = 7
};

// Enum BravoHotelGame.EEventTypeWeaponData
enum class EEventTypeWeaponData : int32 
{
	EEventTypeWeaponData::None               = 0,
	EEventTypeWeaponData::Fire               = 40201,
	EEventTypeWeaponData::Reload             = 40202,
	EEventTypeWeaponData::HitShotCount       = 40203,
	EEventTypeWeaponData::Kill               = 40204,
	EEventTypeWeaponData::TeamKill           = 40205,
	EEventTypeWeaponData::SelfKill           = 40206,
	EEventTypeWeaponData::KnockOut           = 40207,
	EEventTypeWeaponData::Max                = 40208
};

// Enum BravoHotelGame.EEventTypeCharacterFlyingData
enum class EEventTypeCharacterFlyingData : uint8 
{
	EEventTypeCharacterFlyingData::None      = 0,
	EEventTypeCharacterFlyingData::Diving    = 1,
	EEventTypeCharacterFlyingData::Parachute = 2,
	EEventTypeCharacterFlyingData::Landing   = 3,
	EEventTypeCharacterFlyingData::Max       = 4
};

// Enum BravoHotelGame.EEventTypeCharacterData
enum class EEventTypeCharacterData : int32 
{
	EEventTypeCharacterData::None            = 0,
	EEventTypeCharacterData::Created         = 40101,
	EEventTypeCharacterData::Death           = 40102,
	EEventTypeCharacterData::BeKnockedOuted  = 40103,
	EEventTypeCharacterData::BeKnockOutedHeadShot = 40104,
	EEventTypeCharacterData::HeadShotCount   = 40105,
	EEventTypeCharacterData::BeHeadShoted    = 40106,
	EEventTypeCharacterData::BeRecoveryed    = 40107,
	EEventTypeCharacterData::Recovery        = 40108,
	EEventTypeCharacterData::Damaged         = 40109,
	EEventTypeCharacterData::HitShotCount    = 40110,
	EEventTypeCharacterData::UsingBook       = 40111,
	EEventTypeCharacterData::UsingBooster    = 40112,
	EEventTypeCharacterData::UsingMedical    = 40113,
	EEventTypeCharacterData::HealAmount      = 40114,
	EEventTypeCharacterData::GainRP          = 40115,
	EEventTypeCharacterData::FinalRank       = 40116,
	EEventTypeCharacterData::LoserScore      = 40117,
	EEventTypeCharacterData::AssistCount     = 40118,
	EEventTypeCharacterData::LevelUp         = 40119,
	EEventTypeCharacterData::ClassChanged    = 40120,
	EEventTypeCharacterData::GetUltimate     = 40121,
	EEventTypeCharacterData::ShotCount       = 40122,
	EEventTypeCharacterData::LastState       = 40123,
	EEventTypeCharacterData::VehicleIExplosion = 40124,
	EEventTypeCharacterData::DestroyTire     = 40125,
	EEventTypeCharacterData::VehicleDamage   = 40126,
	EEventTypeCharacterData::LoadKill        = 40127,
	EEventTypeCharacterData::OpenPersonalSupplyBox = 40128,
	EEventTypeCharacterData::WeaponDurability = 40129,
	EEventTypeCharacterData::OpenAirDropBox  = 40130,
	EEventTypeCharacterData::DestroyHelicopter = 40131,
	EEventTypeCharacterData::TotalAirWalkDistance = 40132,
	EEventTypeCharacterData::MaxAirWalkDistance = 40133,
	EEventTypeCharacterData::Reconnected     = 40134,
	EEventTypeCharacterData::AccountGoldGameStart = 40135,
	EEventTypeCharacterData::AccountGoldGameEnd = 40136,
	EEventTypeCharacterData::FarmingGold     = 40137,
	EEventTypeCharacterData::RandomBonusGold = 40138,
	EEventTypeCharacterData::RemainCoinGold  = 40139,
	EEventTypeCharacterData::PaidCoinGold    = 40140,
	EEventTypeCharacterData::PaidAccountGold = 40141,
	EEventTypeCharacterData::ClassChangedGold = 40142,
	EEventTypeCharacterData::SupplyboxOpenedGold = 40143,
	EEventTypeCharacterData::RequestResuscitatedGold = 40144,
	EEventTypeCharacterData::ResuscitatedGold = 40145,
	EEventTypeCharacterData::Max             = 40146
};

// Enum BravoHotelGame.EEventTypePlayerData
enum class EEventTypePlayerData : int32 
{
	EEventTypePlayerData::None               = 0,
	EEventTypePlayerData::LogIn              = 30101,
	EEventTypePlayerData::LogOut             = 30102,
	EEventTypePlayerData::Disconnected       = 30103,
	EEventTypePlayerData::Max                = 30104
};

// Enum BravoHotelGame.EEventTypeGameData
enum class EEventTypeGameData : int32 
{
	EEventTypeGameData::None                 = 0,
	EEventTypeGameData::GameStart            = 20101,
	EEventTypeGameData::Ready                = 20102,
	EEventTypeGameData::MatchEnd             = 20103,
	EEventTypeGameData::Max                  = 20104
};

// Enum BravoHotelGame.EBlackmarketGearSortType
enum class EBlackmarketGearSortType : uint8 
{
	EBlackmarketGearSortType::EGEARSORT_ITEM_NAME = 0,
	EBlackmarketGearSortType::EGEARSORT_TYPE = 1,
	EBlackmarketGearSortType::EGEARSORT_ARMOR = 2,
	EBlackmarketGearSortType::EGEARSORT_CAPACITY = 3,
	EBlackmarketGearSortType::EGEARSORT_DECREASE_RELOAD_TIME = 4,
	EBlackmarketGearSortType::EGEARSORT_MAX  = 5
};

// Enum BravoHotelGame.EBlackmarketCustomSortType
enum class EBlackmarketCustomSortType : uint8 
{
	EBlackmarketCustomSortType::ECUSTOMSORT_ITEM_NAME = 0,
	EBlackmarketCustomSortType::ECUSTOMSORT_ITEM_MAX = 1
};

// Enum BravoHotelGame.EBlackmarketConsumableSortType
enum class EBlackmarketConsumableSortType : uint8 
{
	EBlackmarketConsumableSortType::ECONSUMABLESORT_ITEM_NAME = 0,
	EBlackmarketConsumableSortType::ECONSUMABLESORT_WEIGHT = 1,
	EBlackmarketConsumableSortType::ECONSUMABLESORT_HEALTH = 2,
	EBlackmarketConsumableSortType::ECONSUMABLESORT_ADRENALINE = 3,
	EBlackmarketConsumableSortType::ECONSUMABLESORT_FUEL = 4,
	EBlackmarketConsumableSortType::ECONSUMABLESORT_MAX = 5
};

// Enum BravoHotelGame.EBlackmarketWearableSortType
enum class EBlackmarketWearableSortType : uint8 
{
	EBlackmarketWearableSortType::EWEARABLESORT_ITEM_NAME = 0,
	EBlackmarketWearableSortType::EWEARABLESORT_TYPE = 1,
	EBlackmarketWearableSortType::EWEARABLESORT_ARMOR = 2,
	EBlackmarketWearableSortType::EWEARABLESORT_CAPACITY = 3,
	EBlackmarketWearableSortType::EWEARABLESORT_DECREASE_RELOAD_TIME = 4,
	EBlackmarketWearableSortType::EWEARABLESORT_MAX = 5
};

// Enum BravoHotelGame.EBlackmarketAttachmentSortType
enum class EBlackmarketAttachmentSortType : uint8 
{
	EBlackmarketAttachmentSortType::EATTACHMENTSORT_ITEM_NAME = 0,
	EBlackmarketAttachmentSortType::EATTACHMENTSORT_TYPE = 1,
	EBlackmarketAttachmentSortType::EATTACHMENTSORT_WEIGHT = 2,
	EBlackmarketAttachmentSortType::EATTACHMENTSORT_DECREASE_RELOAD_TIME = 3,
	EBlackmarketAttachmentSortType::EATTACHMENTSORT_VERTICAL_REDUCE = 4,
	EBlackmarketAttachmentSortType::EATTACHMENTSORT_HORIZENTAL_REDUCE = 5,
	EBlackmarketAttachmentSortType::EATTACHMENTSORT_INCREASE_RATE_OF_FIRE = 6,
	EBlackmarketAttachmentSortType::EATTACHMENTSORT_BURST_SPEED = 7,
	EBlackmarketAttachmentSortType::EATTACHMENTSORT_MAX = 8
};

// Enum BravoHotelGame.EBlackmarketAmmoSortType
enum class EBlackmarketAmmoSortType : uint8 
{
	EBlackmarketAmmoSortType::EAMMOSORT_ITEM_NAME = 0,
	EBlackmarketAmmoSortType::EAMMOSORT_WEIGHT = 1,
	EBlackmarketAmmoSortType::EAMMOSORT_COUNT = 2,
	EBlackmarketAmmoSortType::EAMMOSORT_TOTALWEIGHT = 3,
	EBlackmarketAmmoSortType::EAMMOSORT_MAX  = 4
};

// Enum BravoHotelGame.EBlackmarketWeaponSortType
enum class EBlackmarketWeaponSortType : uint8 
{
	EBlackmarketWeaponSortType::EWEAPONSORT_ITEM_NAME = 0,
	EBlackmarketWeaponSortType::EWEAPONSORT_AMMO = 1,
	EBlackmarketWeaponSortType::EWEAPONSORT_DAMAGE = 2,
	EBlackmarketWeaponSortType::EWEAPONSORT_FIRERATE = 3,
	EBlackmarketWeaponSortType::EWEAPONSORT_MAGSIZE = 4,
	EBlackmarketWeaponSortType::EWEAPONSORT_FIREMODE = 5,
	EBlackmarketWeaponSortType::EWEAPONSORT_RELOADTIME = 6,
	EBlackmarketWeaponSortType::EWEAPONSORT_PROJECTILEVELOCITY = 7,
	EBlackmarketWeaponSortType::EWEAPONSORT_MOVESPEED = 8,
	EBlackmarketWeaponSortType::EWEAPONSORT_WEIGHT = 9,
	EBlackmarketWeaponSortType::EWEAPONSORT_MAX = 10
};

// Enum BravoHotelGame.EBlackmarketTabType
enum class EBlackmarketTabType : uint8 
{
	EBlackmarketTabType::ETAB_WEAPON         = 0,
	EBlackmarketTabType::ETAB_AMMO           = 1,
	EBlackmarketTabType::ETAB_ATTACHMENT     = 2,
	EBlackmarketTabType::ETAB_WEARABLE       = 3,
	EBlackmarketTabType::ETAB_CONSUMABLE     = 4,
	EBlackmarketTabType::ETAB_CUSTOM         = 5,
	EBlackmarketTabType::ETAB_VEHICLE        = 6,
	EBlackmarketTabType::ETAB_GEAR           = 7,
	EBlackmarketTabType::ETAB_PERK           = 8,
	EBlackmarketTabType::ETAB_PRESET         = 9,
	EBlackmarketTabType::ETAB_MAX            = 10
};

// Enum BravoHotelGame.EDoorSoundType
enum class EDoorSoundType : uint8 
{
	EDoorSoundType::DST_HingedWood           = 0,
	EDoorSoundType::DST_HingedWoodBig        = 1,
	EDoorSoundType::DST_HingedGlass          = 2,
	EDoorSoundType::DST_HingedMetal          = 3,
	EDoorSoundType::DST_SlideWood            = 4,
	EDoorSoundType::DST_SlideGlass           = 5,
	EDoorSoundType::DST_SlideMetal           = 6,
	EDoorSoundType::DST_MAX                  = 7
};

// Enum BravoHotelGame.EElevatorStateType
enum class EElevatorStateType : uint8 
{
	EElevatorStateType::Moved                = 0,
	EElevatorStateType::Moving               = 1,
	EElevatorStateType::EElevatorStateType_MAX = 2
};

// Enum BravoHotelGame.EElevatorDoorStateType
enum class EElevatorDoorStateType : uint8 
{
	EElevatorDoorStateType::None             = 0,
	EElevatorDoorStateType::OpeningDoor      = 1,
	EElevatorDoorStateType::OpenDoorCompleted = 2,
	EElevatorDoorStateType::ClosingDoor      = 3,
	EElevatorDoorStateType::CloseDoorCompleted = 4,
	EElevatorDoorStateType::EElevatorDoorStateType_MAX = 5
};

// Enum BravoHotelGame.ENetworkLoginFlowFlags
enum class ENetworkLoginFlowFlags : uint8 
{
	ENetworkLoginFlowFlags::NLFF_None        = 0,
	ENetworkLoginFlowFlags::NLFF_HttpLogin   = 1,
	ENetworkLoginFlowFlags::NLFF_UserInfo    = 2,
	ENetworkLoginFlowFlags::NLFF_WebSocketLogin = 4,
	ENetworkLoginFlowFlags::NLFF_Completed_PIE = 5,
	ENetworkLoginFlowFlags::NLFF_Completed   = 7,
	ENetworkLoginFlowFlags::NLFF_MAX         = 8
};

// Enum BravoHotelGame.EGameResultWidgetMode
enum class EGameResultWidgetMode : uint8 
{
	EGameResultWidgetMode::GRWM_None         = 0,
	EGameResultWidgetMode::GRWM_Died         = 1,
	EGameResultWidgetMode::GRWM_TeamEnd      = 2,
	EGameResultWidgetMode::GRWM_WinStart     = 3,
	EGameResultWidgetMode::GRWM_LooseResult  = 4,
	EGameResultWidgetMode::GRWM_MatchEnd     = 5,
	EGameResultWidgetMode::GRWM_MAX          = 6
};

// Enum BravoHotelGame.EGoogleCloudType
enum class EGoogleCloudType : uint8 
{
	EGoogleCloudType::None                   = 0,
	EGoogleCloudType::PubSub                 = 1,
	EGoogleCloudType::FileUpload             = 2,
	EGoogleCloudType::Max                    = 3
};

// Enum BravoHotelGame.EItemEquipType
enum class EItemEquipType : uint8 
{
	EItemEquipType::ITEM_Equip               = 0,
	EItemEquipType::ITEM_UnEquip             = 1,
	EItemEquipType::ITEM_MAX                 = 2
};

// Enum BravoHotelGame.EItemLocation
enum class EItemLocation : uint8 
{
	EItemLocation::LOC_Inven                 = 0,
	EItemLocation::LOC_Equip                 = 1,
	EItemLocation::LOC_Weapon                = 2,
	EItemLocation::LOC_MAX                   = 3
};

// Enum BravoHotelGame.EBattleMode
enum class EBattleMode : uint8 
{
	EBattleMode::BATTLE_MODE_solo            = 1,
	EBattleMode::BATTLE_MODE_duo             = 2,
	EBattleMode::BATTLE_MODE_squad           = 4,
	EBattleMode::BATTLE_MODE_MAX             = 5
};

// Enum BravoHotelGame.EWebGameServerMode
enum class EWebGameServerMode : uint8 
{
	EWebGameServerMode::WEB_Login            = 0,
	EWebGameServerMode::WEB_Game             = 1,
	EWebGameServerMode::WEB_Game_For_DS      = 2,
	EWebGameServerMode::WEB_Wait             = 3,
	EWebGameServerMode::WEB_MAX              = 4
};

// Enum BravoHotelGame.ECompareItemType
enum class ECompareItemType : uint8 
{
	ECompareItemType::CIT_SAME               = 0,
	ECompareItemType::CIT_UP                 = 1,
	ECompareItemType::CIT_DOWN               = 2,
	ECompareItemType::CIT_MAX                = 3
};

// Enum BravoHotelGame.EItemEffectSubParticleSpawnState
enum class EItemEffectSubParticleSpawnState : uint8 
{
	EItemEffectSubParticleSpawnState::IESP_SpawnPassive = 0,
	EItemEffectSubParticleSpawnState::IESP_SpawnActive = 1,
	EItemEffectSubParticleSpawnState::IESP_MAX = 2
};

// Enum BravoHotelGame.EPatrolDirection
enum class EPatrolDirection : uint8 
{
	EPatrolDirection::Forward                = 0,
	EPatrolDirection::Reverse                = 1,
	EPatrolDirection::EPatrolDirection_MAX   = 2
};

// Enum BravoHotelGame.EEventLogType
enum class EEventLogType : uint8 
{
	EEventLogType::None                      = 0,
	EEventLogType::PcInfo                    = 1,
	EEventLogType::GameOption                = 2,
	EEventLogType::Fps                       = 3,
	EEventLogType::Exit                      = 4,
	EEventLogType::AccountCreate             = 5,
	EEventLogType::AccountLogIn              = 6,
	EEventLogType::AccountLogOut             = 7,
	EEventLogType::CreateCharacter           = 8,
	EEventLogType::PartyInfo                 = 9,
	EEventLogType::MatchJoin                 = 10,
	EEventLogType::MatchJoinFail             = 11,
	EEventLogType::JoinGame                  = 12,
	EEventLogType::JoinGameFail              = 13,
	EEventLogType::SkyDive                   = 14,
	EEventLogType::GainItem                  = 15,
	EEventLogType::UsingItem                 = 16,
	EEventLogType::EquipItemState            = 17,
	EEventLogType::AttachItemState           = 18,
	EEventLogType::CharacterMove             = 19,
	EEventLogType::CharacterBehavior         = 20,
	EEventLogType::CharacterAttack           = 21,
	EEventLogType::CharacterHit              = 22,
	EEventLogType::CharacterKnockDown        = 23,
	EEventLogType::CharacterRecorver         = 24,
	EEventLogType::CharacterDeath            = 25,
	EEventLogType::CharacterCycleInfo        = 26,
	EEventLogType::VechicleInfo              = 27,
	EEventLogType::DestructObject            = 28,
	EEventLogType::GameEnd                   = 29,
	EEventLogType::GameCycleInfo             = 30,
	EEventLogType::BlueZoneInfo              = 31,
	EEventLogType::RedZoneInfo               = 32,
	EEventLogType::SupplyInfo                = 33,
	EEventLogType::Max                       = 34
};

// Enum BravoHotelGame.EMoveElevatorStateType
enum class EMoveElevatorStateType : uint8 
{
	EMoveElevatorStateType::LowerMoving      = 0,
	EMoveElevatorStateType::UpperMoving      = 1,
	EMoveElevatorStateType::LowerMoved       = 2,
	EMoveElevatorStateType::UpperMoved       = 3,
	EMoveElevatorStateType::EMoveElevatorStateType_MAX = 4
};

// Enum BravoHotelGame.ECloudPlatformType
enum class ECloudPlatformType : uint8 
{
	ECloudPlatformType::CloudPlatform_Google = 0,
	ECloudPlatformType::CloudPlatform_Aws    = 1,
	ECloudPlatformType::CloudPlatform_MAX    = 2
};

// Enum BravoHotelGame.EClientOutGameContentsType
enum class EClientOutGameContentsType : uint8 
{
	EClientOutGameContentsType::COGCT_None   = 0,
	EClientOutGameContentsType::COGCT_First_Client_Run = 1,
	EClientOutGameContentsType::COGCT_Tutorial_Play_Exit = 2,
	EClientOutGameContentsType::COGCT_Tutorial_Play_Complete = 3,
	EClientOutGameContentsType::COGCT_Tutorial_Movie_Skip = 4,
	EClientOutGameContentsType::COGCT_Tutorial_Movie_Watch = 5,
	EClientOutGameContentsType::COGCT_Enter_Lobby = 6,
	EClientOutGameContentsType::COGCT_Clean_Campaign = 7,
	EClientOutGameContentsType::COGCT_Matching_Success = 8,
	EClientOutGameContentsType::COGCT_Matching_Cancel = 9,
	EClientOutGameContentsType::COGCT_Login_Forbid = 10,
	EClientOutGameContentsType::COGCT_Login_Success = 11,
	EClientOutGameContentsType::COGCT_Lobby_UI_Action = 12,
	EClientOutGameContentsType::COGCT_Lobby_Game_Exit = 13,
	EClientOutGameContentsType::COGCT_Connecting_Success = 14,
	EClientOutGameContentsType::COGCT_Connecting_Fail = 15,
	EClientOutGameContentsType::COGCT_Disconnected_FromDS = 16,
	EClientOutGameContentsType::COGCT_Common_Error = 17,
	EClientOutGameContentsType::COGCT_MAX    = 18
};

// Enum BravoHotelGame.EEventTypeClientOutGameFirstClientRunData
enum class EEventTypeClientOutGameFirstClientRunData : uint8 
{
	EEventTypeClientOutGameFirstClientRunData::None = 0,
	EEventTypeClientOutGameFirstClientRunData::FirstClient_Start = 1,
	EEventTypeClientOutGameFirstClientRunData::FirstClient_Character_Look = 2,
	EEventTypeClientOutGameFirstClientRunData::FirstClient_Character_Clothes = 3,
	EEventTypeClientOutGameFirstClientRunData::FirstClient_Character_NickName = 4,
	EEventTypeClientOutGameFirstClientRunData::FirstClient_Character_NickNameCheck = 5,
	EEventTypeClientOutGameFirstClientRunData::FirstClient_Character_NickNameConfirm = 6,
	EEventTypeClientOutGameFirstClientRunData::FirstClient_Character_Created = 7,
	EEventTypeClientOutGameFirstClientRunData::FirstClient_Tutorial_Movie_Start = 8,
	EEventTypeClientOutGameFirstClientRunData::FirstClient_Tutorial_Movie_Skip = 9,
	EEventTypeClientOutGameFirstClientRunData::FirstClient_Tutorial_Movie_Watch = 10,
	EEventTypeClientOutGameFirstClientRunData::FirstClient_Tutorial_Play_Start = 11,
	EEventTypeClientOutGameFirstClientRunData::FirstClient_Tutorial_Play_Exit = 12,
	EEventTypeClientOutGameFirstClientRunData::FirstClient_Tutorial_Play_Complete = 13,
	EEventTypeClientOutGameFirstClientRunData::FirstClient_Lobby_Enter = 14,
	EEventTypeClientOutGameFirstClientRunData::FirstClient_Clean_Campaign_Complete = 15,
	EEventTypeClientOutGameFirstClientRunData::FirstClient_Matching_Start = 16,
	EEventTypeClientOutGameFirstClientRunData::FirstClient_Matching_Success = 17,
	EEventTypeClientOutGameFirstClientRunData::Max = 18
};

// Enum BravoHotelGame.EEventTypeClientOutGameTutorialData
enum class EEventTypeClientOutGameTutorialData : uint8 
{
	EEventTypeClientOutGameTutorialData::None = 0,
	EEventTypeClientOutGameTutorialData::Tutorial_Play_Exit = 1,
	EEventTypeClientOutGameTutorialData::Tutorial_Play_Complete = 2,
	EEventTypeClientOutGameTutorialData::Tutorial_Movie_Skip = 3,
	EEventTypeClientOutGameTutorialData::Tutorial_Movie_Watch = 4,
	EEventTypeClientOutGameTutorialData::Max = 5
};

// Enum BravoHotelGame.EEventTypeClientOutGameExitData
enum class EEventTypeClientOutGameExitData : uint8 
{
	EEventTypeClientOutGameExitData::None    = 0,
	EEventTypeClientOutGameExitData::Game_Exit = 1,
	EEventTypeClientOutGameExitData::Max     = 2
};

// Enum BravoHotelGame.EEventTypeClientOutGameActionData
enum class EEventTypeClientOutGameActionData : uint8 
{
	EEventTypeClientOutGameActionData::None  = 0,
	EEventTypeClientOutGameActionData::UI_Action = 1,
	EEventTypeClientOutGameActionData::Max   = 2
};

// Enum BravoHotelGame.EEventTypeClientOutGameLoginData
enum class EEventTypeClientOutGameLoginData : uint8 
{
	EEventTypeClientOutGameLoginData::None   = 0,
	EEventTypeClientOutGameLoginData::Login_Forbid = 1,
	EEventTypeClientOutGameLoginData::Login_Success = 2,
	EEventTypeClientOutGameLoginData::Max    = 3
};

// Enum BravoHotelGame.EEventTypeClientOutGameMatchingData
enum class EEventTypeClientOutGameMatchingData : uint8 
{
	EEventTypeClientOutGameMatchingData::None = 0,
	EEventTypeClientOutGameMatchingData::Matching_Success = 1,
	EEventTypeClientOutGameMatchingData::Matching_Cancel = 2,
	EEventTypeClientOutGameMatchingData::Max = 3
};

// Enum BravoHotelGame.EItemSortType
enum class EItemSortType : uint8 
{
	EItemSortType::IST_All                   = 0,
	EItemSortType::IST_Attachment            = 1,
	EItemSortType::IST_Booster               = 2,
	EItemSortType::IST_Capsule               = 3,
	EItemSortType::IST_Equipment             = 4,
	EItemSortType::IST_Remedy                = 5,
	EItemSortType::IST_MAX                   = 6
};

// Enum BravoHotelGame.EPickUpItemEffectType
enum class EPickUpItemEffectType : uint8 
{
	EPickUpItemEffectType::IE_None           = 0,
	EPickUpItemEffectType::IE_Origin         = 1,
	EPickUpItemEffectType::IE_Weak           = 2,
	EPickUpItemEffectType::IE_MAX            = 3
};

// Enum BravoHotelGame.EPopupWidgetButtonFlags
enum class EPopupWidgetButtonFlags : uint8 
{
	EPopupWidgetButtonFlags::BT_None         = 0,
	EPopupWidgetButtonFlags::BT_Ok           = 1,
	EPopupWidgetButtonFlags::BT_Cancel       = 2,
	EPopupWidgetButtonFlags::BT_Waiting      = 4,
	EPopupWidgetButtonFlags::BT_MAX          = 5
};

// Enum BravoHotelGame.EAchievementState
enum class EAchievementState : uint8 
{
	EAchievementState::AS_None               = 0,
	EAchievementState::AS_Progress           = 1,
	EAchievementState::AS_Complete           = 2,
	EAchievementState::AS_MAX                = 3
};

// Enum BravoHotelGame.EAchievementType
enum class EAchievementType : uint8 
{
	EAchievementType::AT_None                = 0,
	EAchievementType::AT_GamePlay            = 1,
	EAchievementType::AT_Social              = 2,
	EAchievementType::AT_Event               = 3,
	EAchievementType::AT_MAX                 = 4
};

// Enum BravoHotelGame.ERemoteControlState
enum class ERemoteControlState : uint8 
{
	ERemoteControlState::ERCS_None           = 0,
	ERemoteControlState::ERCS_SwitchON       = 1,
	ERemoteControlState::ERCS_Deactive       = 2,
	ERemoteControlState::ERCS_MAX            = 3
};

// Enum BravoHotelGame.EDropBoxState
enum class EDropBoxState : uint8 
{
	EDropBoxState::None                      = 0,
	EDropBoxState::CutoffParachute           = 1,
	EDropBoxState::Landing                   = 2,
	EDropBoxState::OldBox                    = 3,
	EDropBoxState::Open                      = 4,
	EDropBoxState::EDropBoxState_MAX         = 5
};

// Enum BravoHotelGame.EGameLoadingStep
enum class EGameLoadingStep : uint8 
{
	EGameLoadingStep::EGLS_None              = 0,
	EGameLoadingStep::EGLS_LoadingStart      = 1,
	EGameLoadingStep::EGLS_LoadingEnd        = 2,
	EGameLoadingStep::EGLS_MAX               = 3
};

// Enum BravoHotelGame.ELanguageType
enum class ELanguageType : uint8 
{
	ELanguageType::LT_Korean                 = 0,
	ELanguageType::LT_English                = 1,
	ELanguageType::LT_Chinese                = 2,
	ELanguageType::LT_French                 = 3,
	ELanguageType::LT_Deutsch                = 4,
	ELanguageType::LT_Espanol                = 5,
	ELanguageType::LT_Portugues              = 6,
	ELanguageType::LT_Russian                = 7,
	ELanguageType::LT_Japanese               = 8,
	ELanguageType::LT_MAX                    = 9
};

// Enum BravoHotelGame.EMailMsgTag
enum class EMailMsgTag : uint8 
{
	EMailMsgTag::MMT_Payment                 = 0,
	EMailMsgTag::MMT_Report                  = 1,
	EMailMsgTag::MMT_System                  = 2,
	EMailMsgTag::MMT_MAX                     = 3
};

// Enum BravoHotelGame.EMailMsgSaveOption
enum class EMailMsgSaveOption : uint8 
{
	EMailMsgSaveOption::MMSO_Received        = 0,
	EMailMsgSaveOption::MMSO_Sent            = 1,
	EMailMsgSaveOption::MMSO_All             = 2,
	EMailMsgSaveOption::MMSO_MAX             = 3
};

// Enum BravoHotelGame.EMailMsgType
enum class EMailMsgType : uint8 
{
	EMailMsgType::MMT_Receive                = 0,
	EMailMsgType::MMT_Send                   = 1,
	EMailMsgType::MMT_MAX                    = 2
};

// Enum BravoHotelGame.ECommunicatorType
enum class ECommunicatorType : uint8 
{
	ECommunicatorType::C_Player              = 0,
	ECommunicatorType::C_Custom              = 1,
	ECommunicatorType::C_GM_QnA              = 2,
	ECommunicatorType::C_Master_Shop         = 3,
	ECommunicatorType::C_MAX                 = 4
};

// Enum BravoHotelGame.EBlockType
enum class EBlockType : uint8 
{
	EBlockType::BT_Account                   = 0,
	EBlockType::BT_IP                        = 1,
	EBlockType::BT_Hardware                  = 2,
	EBlockType::BT_MAX                       = 3
};

// Enum BravoHotelGame.EBroadCastKillerType
enum class EBroadCastKillerType : uint8 
{
	EBroadCastKillerType::None               = 0,
	EBroadCastKillerType::Killer             = 1,
	EBroadCastKillerType::SubKiller          = 2,
	EBroadCastKillerType::Assist             = 3,
	EBroadCastKillerType::EBroadCastKillerType_MAX = 4
};

// Enum BravoHotelGame.EAutoMoveSnapshotActionType
enum class EAutoMoveSnapshotActionType : uint8 
{
	EAutoMoveSnapshotActionType::None        = 0,
	EAutoMoveSnapshotActionType::StartRun    = 1,
	EAutoMoveSnapshotActionType::StopRun     = 2,
	EAutoMoveSnapshotActionType::StartParkour = 3,
	EAutoMoveSnapshotActionType::StartJump   = 4,
	EAutoMoveSnapshotActionType::StopJump    = 5,
	EAutoMoveSnapshotActionType::StartInteraction = 6,
	EAutoMoveSnapshotActionType::StopInteraction = 7,
	EAutoMoveSnapshotActionType::EAutoMoveSnapshotActionType_MAX = 8
};

// Enum BravoHotelGame.EMatchRateCaseType
enum class EMatchRateCaseType : uint8 
{
	EMatchRateCaseType::None                 = 0,
	EMatchRateCaseType::Rank                 = 1,
	EMatchRateCaseType::LifeTime             = 2,
	EMatchRateCaseType::Damage               = 3,
	EMatchRateCaseType::Assist               = 4,
	EMatchRateCaseType::Kill                 = 5,
	EMatchRateCaseType::HeadKill             = 6,
	EMatchRateCaseType::Max                  = 7
};

// Enum BravoHotelGame.EDeafenDistanceLevel
enum class EDeafenDistanceLevel : uint8 
{
	EDeafenDistanceLevel::EDDL_Close         = 0,
	EDeafenDistanceLevel::EDDL_Mid           = 1,
	EDeafenDistanceLevel::EDDL_Far           = 2,
	EDeafenDistanceLevel::EDDL_MAX           = 3
};

// Enum BravoHotelGame.EMouseCursorType
enum class EMouseCursorType : uint8 
{
	EMouseCursorType::EMCT_Default           = 0,
	EMouseCursorType::EMCT_Nuclear           = 1,
	EMouseCursorType::EMCT_MAX               = 2
};

// Enum BravoHotelGame.EStatusType
enum class EStatusType : uint8 
{
	EStatusType::ST_Power                    = 0,
	EStatusType::ST_Speed                    = 1,
	EStatusType::ST_Health                   = 2,
	EStatusType::ST_MAX                      = 3
};

// Enum BravoHotelGame.EPlayerListSortType
enum class EPlayerListSortType : uint8 
{
	EPlayerListSortType::ByAlive             = 0,
	EPlayerListSortType::ByDistance          = 1,
	EPlayerListSortType::ByKillCount         = 2,
	EPlayerListSortType::E_Last              = 3,
	EPlayerListSortType::EPlayerListSortType_MAX = 4
};

// Enum BravoHotelGame.CheatSubType
enum class CheatSubType : uint8 
{
	CheatSubType::CST_None                   = 0,
	CheatSubType::CST_Replay                 = 1,
	CheatSubType::CST_Coherent               = 2,
	CheatSubType::CST_RedZone                = 3,
	CheatSubType::CST_BlueZone               = 4,
	CheatSubType::CST_Character              = 5,
	CheatSubType::CST_Inventory              = 6,
	CheatSubType::CST_Weapon                 = 7,
	CheatSubType::CST_Vehicle                = 8,
	CheatSubType::CST_PersonalSupply         = 9,
	CheatSubType::CST_MAX                    = 10
};

// Enum BravoHotelGame.CheatMainType
enum class CheatMainType : uint8 
{
	CheatMainType::CMT_GamePlay              = 0,
	CheatMainType::CMT_Contents              = 1,
	CheatMainType::CMT_Optimization          = 2,
	CheatMainType::CMT_Etc                   = 3,
	CheatMainType::CMT_MAX                   = 4
};

// Enum BravoHotelGame.EVehicleTransmissionType
enum class EVehicleTransmissionType : uint8 
{
	EVehicleTransmissionType::Auto_PhysX     = 0,
	EVehicleTransmissionType::Auto_Movement  = 1,
	EVehicleTransmissionType::Manual         = 2,
	EVehicleTransmissionType::EVehicleTransmissionType_MAX = 3
};

// Enum BravoHotelGame.EDoorState
enum class EDoorState : uint8 
{
	EDoorState::DS_Destructed                = 0,
	EDoorState::DS_Closed                    = 1,
	EDoorState::DS_Opened                    = 2,
	EDoorState::DS_Closing                   = 3,
	EDoorState::DS_Opening                   = 4,
	EDoorState::DS_Kicking                   = 5,
	EDoorState::DS_MAX                       = 6
};

// Enum BravoHotelGame.EPingActorType
enum class EPingActorType : uint8 
{
	EPingActorType::PAT_None                 = 0,
	EPingActorType::PAT_Pawn                 = 1,
	EPingActorType::PAT_Item                 = 2,
	EPingActorType::PAT_Vehicle              = 3,
	EPingActorType::PAT_MAX                  = 4
};

// Enum BravoHotelGame.EPingIconAnimationStateType
enum class EPingIconAnimationStateType : uint8 
{
	EPingIconAnimationStateType::Enter       = 0,
	EPingIconAnimationStateType::Hold        = 1,
	EPingIconAnimationStateType::Exit        = 2,
	EPingIconAnimationStateType::EPingIconAnimationStateType_MAX = 3
};

// Enum BravoHotelGame.EPingIconLoopAnimationType
enum class EPingIconLoopAnimationType : uint8 
{
	EPingIconLoopAnimationType::None         = 0,
	EPingIconLoopAnimationType::PulseSlow    = 1,
	EPingIconLoopAnimationType::PulseFast    = 2,
	EPingIconLoopAnimationType::Spin         = 3,
	EPingIconLoopAnimationType::Bounce       = 4,
	EPingIconLoopAnimationType::EPingIconLoopAnimationType_MAX = 5
};

// Enum BravoHotelGame.EPingIconTransitionAnimationType
enum class EPingIconTransitionAnimationType : uint8 
{
	EPingIconTransitionAnimationType::None   = 0,
	EPingIconTransitionAnimationType::Slide  = 1,
	EPingIconTransitionAnimationType::Bounce = 2,
	EPingIconTransitionAnimationType::Scale  = 3,
	EPingIconTransitionAnimationType::EPingIconTransitionAnimationType_MAX = 4
};

// Enum BravoHotelGame.ETimeOfDayType
enum class ETimeOfDayType : uint8 
{
	ETimeOfDayType::ETOD_MidDay              = 0,
	ETimeOfDayType::ETOD_Dusk                = 1,
	ETimeOfDayType::ETOD_Dawn                = 2,
	ETimeOfDayType::ETOD_MAX                 = 3
};

// Enum BravoHotelGame.EWaterViewCameraType
enum class EWaterViewCameraType : uint8 
{
	EWaterViewCameraType::WVCT_None          = 0,
	EWaterViewCameraType::WVCT_InWater       = 1,
	EWaterViewCameraType::WVCT_OutWater      = 2,
	EWaterViewCameraType::WVCT_MAX           = 3
};

// Enum BravoHotelGame.ECharacterVoicePriorityType
enum class ECharacterVoicePriorityType : uint8 
{
	ECharacterVoicePriorityType::CVoice_DoNotRun = 0,
	ECharacterVoicePriorityType::CVoice_PreStop_DoRun = 1,
	ECharacterVoicePriorityType::CVoice_MAX  = 2
};

// Enum BravoHotelGame.ECharacterVoiceRPCType
enum class ECharacterVoiceRPCType : uint8 
{
	ECharacterVoiceRPCType::CVoice_RPC_Local = 0,
	ECharacterVoiceRPCType::CVoice_RPC_Team  = 1,
	ECharacterVoiceRPCType::CVoice_RPC_All   = 2,
	ECharacterVoiceRPCType::CVoice_RPC_MAX   = 3
};

// Enum BravoHotelGame.ESteamAvatarSize
enum class ESteamAvatarSize : uint8 
{
	ESteamAvatarSize::None                   = 0,
	ESteamAvatarSize::AvatarSmall            = 1,
	ESteamAvatarSize::AvatarMedium           = 2,
	ESteamAvatarSize::AvatarLarge            = 3,
	ESteamAvatarSize::ESteamAvatarSize_MAX   = 4
};

// Enum BravoHotelGame.EUpLoadDataType
enum class EUpLoadDataType : uint8 
{
	EUpLoadDataType::None                    = 0,
	EUpLoadDataType::Normal                  = 1,
	EUpLoadDataType::ItemSpawn               = 2,
	EUpLoadDataType::Max                     = 3
};

// Enum BravoHotelGame.EMovementDirection
enum class EMovementDirection : uint8 
{
	EMovementDirection::MD_Forwards          = 0,
	EMovementDirection::MD_Backwards         = 1,
	EMovementDirection::MD_MAX               = 2
};

// Enum BravoHotelGame.ECardinalDirection
enum class ECardinalDirection : uint8 
{
	ECardinalDirection::CD_North             = 0,
	ECardinalDirection::CD_East              = 1,
	ECardinalDirection::CD_West              = 2,
	ECardinalDirection::CD_South             = 3,
	ECardinalDirection::CD_MAX               = 4
};

// Enum BravoHotelGame.EVehicleExitSide
enum class EVehicleExitSide : uint8 
{
	EVehicleExitSide::VDS_Left               = 0,
	EVehicleExitSide::VDS_Right              = 1,
	EVehicleExitSide::VDS_Virtual            = 2,
	EVehicleExitSide::VDS_MAX                = 3
};

// Enum BravoHotelGame.EVehicleEffect
enum class EVehicleEffect : uint8 
{
	EVehicleEffect::EVE_None                 = 0,
	EVehicleEffect::EVE_GunShot              = 1,
	EVehicleEffect::EVE_Explosion            = 2,
	EVehicleEffect::EVE_Drive_Concrete       = 3,
	EVehicleEffect::EVE_MAX                  = 4
};

// Enum BravoHotelGame.ERedZoneSelectType
enum class ERedZoneSelectType : uint8 
{
	ERedZoneSelectType::All                  = 0,
	ERedZoneSelectType::WithinBlueZone       = 1,
	ERedZoneSelectType::WithinWhiteZone      = 2,
	ERedZoneSelectType::BetweenBlueZoneAndWhiteZone = 3,
	ERedZoneSelectType::ERedZoneSelectType_MAX = 4
};

// Enum BravoHotelGame.EPerkSpawnType
enum class EPerkSpawnType : uint8 
{
	EPerkSpawnType::PST_Near                 = 0,
	EPerkSpawnType::PST_Random               = 1,
	EPerkSpawnType::PST_MAX                  = 2
};

// Enum BravoHotelGame.ESurviveType
enum class ESurviveType : uint8 
{
	ESurviveType::EST_None                   = 0,
	ESurviveType::EST_Survive                = 1,
	ESurviveType::EST_Knockout               = 2,
	ESurviveType::EST_CriticalTime           = 3,
	ESurviveType::EST_Death                  = 4,
	ESurviveType::EST_MAX                    = 5
};

// Enum BravoHotelGame.ESimpleWeaponAnimationType
enum class ESimpleWeaponAnimationType : uint8 
{
	ESimpleWeaponAnimationType::EWAT_Default = 0,
	ESimpleWeaponAnimationType::EWAT_Rifle   = 1,
	ESimpleWeaponAnimationType::EWAT_MAX     = 2
};

// Enum BravoHotelGame.ELadderState
enum class ELadderState : uint8 
{
	ELadderState::LS_NotLadder               = 0,
	ELadderState::LS_UseLadder               = 1,
	ELadderState::LS_SnapToLadder            = 2,
	ELadderState::LS_ClimbLadder             = 3,
	ELadderState::LS_OnLadder                = 4,
	ELadderState::LS_Sliding                 = 5,
	ELadderState::LS_DownLadder              = 6,
	ELadderState::LS_MAX                     = 7
};

// Enum BravoHotelGame.ELadderInteractionType
enum class ELadderInteractionType : uint8 
{
	ELadderInteractionType::LIT_DirectSnap   = 0,
	ELadderInteractionType::LIT_DownIn       = 1,
	ELadderInteractionType::LIT_UpIn         = 2,
	ELadderInteractionType::LIT_DownOut      = 3,
	ELadderInteractionType::LIT_UpOut        = 4,
	ELadderInteractionType::LIT_MAX          = 5
};

// Enum BravoHotelGame.EWeaponAttachmentSight
enum class EWeaponAttachmentSight : uint8 
{
	EWeaponAttachmentSight::WA_Sight_Basic   = 0,
	EWeaponAttachmentSight::WA_Sight_Reddot  = 1,
	EWeaponAttachmentSight::WA_Sight_Holo    = 2,
	EWeaponAttachmentSight::WA_Sight_2X      = 3,
	EWeaponAttachmentSight::WA_Sight_4X      = 4,
	EWeaponAttachmentSight::WA_Sight_8X      = 5,
	EWeaponAttachmentSight::WA_Sight_15X     = 6,
	EWeaponAttachmentSight::WA_Sight_Digital = 7,
	EWeaponAttachmentSight::WA_Sight_MAX     = 8
};

// Enum BravoHotelGame.EProjectileType
enum class EProjectileType : uint8 
{
	EProjectileType::PT_5_56mm               = 0,
	EProjectileType::PT_7_62mm               = 1,
	EProjectileType::PT_9mm                  = 2,
	EProjectileType::PT_45ACP                = 3,
	EProjectileType::PT_12Gauge              = 4,
	EProjectileType::PT_300Magnum            = 5,
	EProjectileType::PT_44Magnum             = 6,
	EProjectileType::PT_MAX                  = 7
};

// Enum BravoHotelGame.ETerrainType
enum class ETerrainType : int32 
{
	ETerrainType::TT_None                    = 0,
	ETerrainType::TT_Wood                    = 2,
	ETerrainType::TT_Rock                    = 4,
	ETerrainType::TT_Indoor                  = 8,
	ETerrainType::TT_Fence                   = 16,
	ETerrainType::TT_Grass                   = 32,
	ETerrainType::TT_Cliff                   = 64,
	ETerrainType::TT_Water                   = 128,
	ETerrainType::TT_Air                     = 256,
	ETerrainType::TT_Vehicle                 = 512,
	ETerrainType::TT_MAX                     = 513
};

// Enum BravoHotelGame.EHumanWeaponHitArea
enum class EHumanWeaponHitArea : uint8 
{
	EHumanWeaponHitArea::HWHA_None           = 0,
	EHumanWeaponHitArea::HWHA_Head           = 1,
	EHumanWeaponHitArea::HWHA_Neck           = 2,
	EHumanWeaponHitArea::HWHA_Shoudler       = 3,
	EHumanWeaponHitArea::HWHA_Chest          = 4,
	EHumanWeaponHitArea::HWHA_Stomach        = 5,
	EHumanWeaponHitArea::HWHA_UpperWaist     = 6,
	EHumanWeaponHitArea::HWHA_LowerWaist     = 7,
	EHumanWeaponHitArea::HWHA_Thigh          = 8,
	EHumanWeaponHitArea::HWHA_Shank          = 9,
	EHumanWeaponHitArea::HWHA_Foot           = 10,
	EHumanWeaponHitArea::HWHA_UpperArm       = 11,
	EHumanWeaponHitArea::HWHA_LowerArm       = 12,
	EHumanWeaponHitArea::HWHA_Hand           = 13,
	EHumanWeaponHitArea::HWHA_MAX            = 14
};

// Enum BravoHotelGame.EWeaponHitArea
enum class EWeaponHitArea : uint8 
{
	EWeaponHitArea::HHA_None                 = 0,
	EWeaponHitArea::HHA_Head                 = 1,
	EWeaponHitArea::HHA_UpperBody            = 2,
	EWeaponHitArea::HHA_LowerBody            = 3,
	EWeaponHitArea::HHA_MAX                  = 4
};

// Enum BravoHotelGame.EVehicleSoundFlag
enum class EVehicleSoundFlag : uint8 
{
	EVehicleSoundFlag::None                  = 0,
	EVehicleSoundFlag::Engine                = 1,
	EVehicleSoundFlag::Horn                  = 2,
	EVehicleSoundFlag::Handbrake             = 4,
	EVehicleSoundFlag::EVehicleSoundFlag_MAX = 5
};

// Enum BravoHotelGame.EVehicleNetProperty
enum class EVehicleNetProperty : uint8 
{
	EVehicleNetProperty::VNP_None            = 0,
	EVehicleNetProperty::VNP_HealthPoint     = 1,
	EVehicleNetProperty::VNP_TireHealthPoint = 2,
	EVehicleNetProperty::VNP_IsBoosting      = 4,
	EVehicleNetProperty::VNP_FuelAmount      = 8,
	EVehicleNetProperty::VNP_ReplicatedMovement = 16,
	EVehicleNetProperty::VNP_MAX             = 17
};

// Enum BravoHotelGame.VoiceChannelType
enum class VoiceChannelType : uint8 
{
	VoiceChannelType::NonPositional          = 0,
	VoiceChannelType::Positional             = 1,
	VoiceChannelType::Echo                   = 2,
	VoiceChannelType::VoiceChannelType_MAX   = 3
};

// Enum BravoHotelGame.PTTKey
enum class PTTKey : uint8 
{
	PTTKey::PTTNoChannel                     = 0,
	PTTKey::PTTAreaChannel                   = 1,
	PTTKey::PTTTeamChannel                   = 2,
	PTTKey::PTTLobbyTeamChannel              = 3,
	PTTKey::PTTKey_MAX                       = 4
};

// Enum BravoHotelGame.EWeightMapBitCheck
enum class EWeightMapBitCheck : uint8 
{
	EWeightMapBitCheck::None                 = 0,
	EWeightMapBitCheck::CheckLand            = 1,
	EWeightMapBitCheck::CheckDescent         = 2,
	EWeightMapBitCheck::CheckPersonalSupplyBox = 4,
	EWeightMapBitCheck::EWeightMapBitCheck_MAX = 5
};

// Enum BravoHotelGame.EWeightMapLandType
enum class EWeightMapLandType : uint8 
{
	EWeightMapLandType::WLT_Error            = 0,
	EWeightMapLandType::WLT_Land             = 1,
	EWeightMapLandType::WLT_Water            = 2,
	EWeightMapLandType::WLT_MAX              = 3
};

// Enum BravoHotelGame.EWeightMapDescentType
enum class EWeightMapDescentType : uint8 
{
	EWeightMapDescentType::WDT_Error         = 0,
	EWeightMapDescentType::WDT_Enable        = 1,
	EWeightMapDescentType::WDT_Disable       = 2,
	EWeightMapDescentType::WDT_MAX           = 3
};

// Enum BravoHotelGame.EParkourDebugType
enum class EParkourDebugType : uint8 
{
	EParkourDebugType::PDT_None              = 0,
	EParkourDebugType::PDT_First             = 1,
	EParkourDebugType::PDT_Hole              = 2,
	EParkourDebugType::PDT_Position          = 4,
	EParkourDebugType::PDT_Hand              = 8,
	EParkourDebugType::PDT_Tickness          = 16,
	EParkourDebugType::PDT_Falling           = 32,
	EParkourDebugType::PDT_Hit               = 64,
	EParkourDebugType::PDT_LedgeGrab         = 128,
	EParkourDebugType::PDT_All               = 255,
	EParkourDebugType::PDT_MAX               = 256
};

// ScriptStruct BravoHotelGame.ConditionedWeaponInfo
// Size: 0x20 (Inherited: 0x00)
struct FConditionedWeaponInfo 
{
	struct TArray<None>                           TargetItemIDs;                                               // 0x00(0x10)
	struct TArray<None>                           WeaponTypes;                                                 // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.AircraftCinematic
// Size: 0x10 (Inherited: 0x00)
struct FAircraftCinematic 
{
	struct FNone*                                 LevelSequence;                                               // 0x00(0x08)
	struct FNone*                                 LevelSequenceBGM;                                            // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.AudioPlayingHandle
// Size: 0x04 (Inherited: 0x00)
struct FAudioPlayingHandle 
{
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
};

// ScriptStruct BravoHotelGame.InventoryItemInfo
// Size: 0x98 (Inherited: 0x00)
struct FInventoryItemInfo 
{
	struct FNone                                  Item;                                                        // 0x00(0x10)
	uint32_t                                      Quantity;                                                    // 0x10(0x04)
	uint32_t                                      Index;                                                       // 0x14(0x04)
	struct FNone*                                 ContainedInventory;                                          // 0x18(0x08)
	struct FNone*                                 Owner;                                                       // 0x20(0x08)
	enum class None                               State;                                                       // 0x28(0x01)
	char                                          UnknownData29[0x3];                                          // 0x29(0x03)
	float                                         PickedTimeSeconds;                                           // 0x2c(0x04)
	float                                         Durability;                                                  // 0x30(0x04)
	float                                         MaxDurability;                                               // 0x34(0x04)
	struct TArray<None>                           AdditionalBuffs;                                             // 0x38(0x10)
	struct TArray<None>                           ItemOptions;                                                 // 0x48(0x10)
	enum class None                               ItemBindType;                                                // 0x58(0x01)
	char                                          UnknownData59[0x3];                                          // 0x59(0x03)
	uint32_t                                      BindedPlayerUniqueID;                                        // 0x5c(0x04)
	struct FName                                  ItemWeaponID;                                                // 0x60(0x08)
	struct FString                                DivisionParent;                                              // 0x68(0x10)
	enum class None                               PickupRoot;                                                  // 0x78(0x01)
	char                                          UnknownData79[0x7];                                          // 0x79(0x07)
	struct FString                                ItemUID;                                                     // 0x80(0x10)
	float                                         ServerWorldTime;                                             // 0x90(0x04)
	char                                          UnknownData94[0x4];                                          // 0x94(0x04)
};

// ScriptStruct BravoHotelGame.DisplayAbility
// Size: 0x0c (Inherited: 0x00)
struct FDisplayAbility 
{
	uint32_t                                      DisplayPower;                                                // 0x00(0x04)
	uint32_t                                      DisplaySpeed;                                                // 0x04(0x04)
	uint32_t                                      DisplayDefense;                                              // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.PerkInfo
// Size: 0x28 (Inherited: 0x00)
struct FPerkInfo 
{
	enum class None                               Slot;                                                        // 0x00(0x01)
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
	struct FName                                  PerkName;                                                    // 0x04(0x08)
	uint32_t                                      PerkID;                                                      // 0x0c(0x04)
	uint32_t                                      InGamelevel;                                                 // 0x10(0x04)
	uint32_t                                      CurrentExp;                                                  // 0x14(0x04)
	char                                          UnknownData18[0x10];                                         // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.CastingInfo
// Size: 0x18 (Inherited: 0x00)
struct FCastingInfo 
{
	char                                          IsActive : 0;                                                // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
	enum class None                               CastingUIType;                                               // 0x01(0x01)
	char                                          UnknownData2[0x2];                                           // 0x02(0x02)
	struct FName                                  SourceName;                                                  // 0x04(0x08)
	float                                         MaxTime;                                                     // 0x0c(0x04)
	struct FNone*                                 Target;                                                      // 0x10(0x08)
};

// ScriptStruct BravoHotelGame.GoldenTimeLogData
// Size: 0x18 (Inherited: 0x00)
struct FGoldenTimeLogData 
{
	uint32_t                                      RevivedTime;                                                 // 0x00(0x04)
	uint32_t                                      GoldRequest;                                                 // 0x04(0x04)
	uint32_t                                      RevivedUseGold;                                              // 0x08(0x04)
	uint32_t                                      RevivedRemainGold;                                           // 0x0c(0x04)
	uint32_t                                      SaviorUseGold;                                               // 0x10(0x04)
	uint32_t                                      SaviorRemainGold;                                            // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.SpawnBaseInfo
// Size: 0x24 (Inherited: 0x00)
struct FSpawnBaseInfo 
{
	uint32_t                                      MinDistance;                                                 // 0x00(0x04)
	uint32_t                                      MaxDistance;                                                 // 0x04(0x04)
	char                                          UsingRate : 0;                                               // 0x08(0x01)
	char                                          UnknownData8[0x4];                                           // 0x08(0x04)
	float                                         MinDistanceRate;                                             // 0x0c(0x04)
	float                                         MaxDistanceRate;                                             // 0x10(0x04)
	float                                         Degree;                                                      // 0x14(0x04)
	float                                         BuildingSpawnRate;                                           // 0x18(0x04)
	float                                         LocalDeviation;                                              // 0x1c(0x04)
	uint32_t                                      DistanceCheckCount;                                          // 0x20(0x04)
};

// ScriptStruct BravoHotelGame.HitRateWeaponLogData
// Size: 0x14 (Inherited: 0x00)
struct FHitRateWeaponLogData 
{
	uint32_t                                      ShotCount;                                                   // 0x00(0x04)
	uint32_t                                      HitShotCount;                                                // 0x04(0x04)
	uint32_t                                      HeadShotCount;                                               // 0x08(0x04)
	uint32_t                                      KillCount;                                                   // 0x0c(0x04)
	uint32_t                                      HeadShotKillCount;                                           // 0x10(0x04)
};

// ScriptStruct BravoHotelGame.RepClientCharacterReconnectInfo
// Size: 0x01 (Inherited: 0x00)
struct FRepClientCharacterReconnectInfo 
{
	char                                          bRepIsCrouched : 0;                                          // 0x00(0x01)
	char                                          bRepIsProned : 0;                                            // 0x00(0x01)
	char                                          bRepNeedOwnerStopLadder : 0;                                 // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.LogBuildCountData
// Size: 0x10 (Inherited: 0x00)
struct FLogBuildCountData 
{
	uint32_t                                      BuildingCount;                                               // 0x00(0x04)
	uint32_t                                      DetectiongBoxCount;                                          // 0x04(0x04)
	uint32_t                                      StandardBoxCount;                                            // 0x08(0x04)
	uint32_t                                      ItemBoxCount;                                                // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.RepSimulatedHittedDamage
// Size: 0x10 (Inherited: 0x00)
struct FRepSimulatedHittedDamage 
{
	struct TArray<None>                           DamageInfoList;                                              // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.RepHitDamageInfo
// Size: 0x20 (Inherited: 0x00)
struct FRepHitDamageInfo 
{
	uint16_t                                      Damage;                                                      // 0x00(0x02)
	char                                          UnknownData2[0x6];                                           // 0x02(0x06)
	struct FNone*                                 DamageTypeClass;                                             // 0x08(0x08)
	struct TWeakObjectPtr<struct FNone>           Instigator;                                                  // 0x10(0x08)
	char                                          bTaskScheduler : 0;                                          // 0x18(0x01)
	char                                          UnknownData18[0x2];                                          // 0x18(0x02)
	uint16_t                                      HitPointIdx;                                                 // 0x1a(0x02)
	uint16_t                                      WeaponId;                                                    // 0x1c(0x02)
	uint16_t                                      ProjectileId;                                                // 0x1e(0x02)
};

// ScriptStruct BravoHotelGame.CommonMessageInfo
// Size: 0x18 (Inherited: 0x00)
struct FCommonMessageInfo 
{
	struct FString                                Message;                                                     // 0x00(0x10)
	float                                         HideTime;                                                    // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.AnimSlot
// Size: 0x10 (Inherited: 0x00)
struct FAnimSlot 
{
	struct FNone*                                 Anim1P;                                                      // 0x00(0x08)
	struct FNone*                                 Anim3P;                                                      // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.SpawnPerkData
// Size: 0x60 (Inherited: 0x00)
struct FSpawnPerkData 
{
	struct FNone*                                 Building;                                                    // 0x00(0x08)
	uint32_t                                      Count;                                                       // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FNone                                  Transform;                                                   // 0x10(0x30)
	float                                         SpawnDelay;                                                  // 0x40(0x04)
	struct FNone                                  BookColorRate;                                               // 0x44(0x14)
	char                                          UnknownData58[0x8];                                          // 0x58(0x08)
};

// ScriptStruct BravoHotelGame.SpawnPerkColorRate
// Size: 0x14 (Inherited: 0x00)
struct FSpawnPerkColorRate 
{
	float                                         RedBookRate;                                                 // 0x00(0x04)
	float                                         GreenBookRate;                                               // 0x04(0x04)
	float                                         BlueBookRate;                                                // 0x08(0x04)
	float                                         WhiteBookRate;                                               // 0x0c(0x04)
	float                                         BlackBookRate;                                               // 0x10(0x04)
};

// ScriptStruct BravoHotelGame.ConditionGroup
// Size: 0x18 (Inherited: 0x00)
struct FConditionGroup 
{
	enum class None                               Type;                                                        // 0x00(0x01)
	char                                          UnknownData1[0x7];                                           // 0x01(0x07)
	struct FString                                Name;                                                        // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.PerkDeckSelectInfo
// Size: 0x18 (Inherited: 0x00)
struct FPerkDeckSelectInfo 
{
	char                                          bSelectOpen : 0;                                             // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	uint32_t                                      SelectChangeCount;                                           // 0x04(0x04)
	struct TArray<None>                           PerkDeckClassInfos;                                          // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.PerkDeckClassInfo
// Size: 0x28 (Inherited: 0x00)
struct FPerkDeckClassInfo 
{
	struct FName                                  DeckName;                                                    // 0x00(0x08)
	struct TArray<None>                           PerkCards;                                                   // 0x08(0x10)
	struct TArray<None>                           ExpertWeapons;                                               // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelDefaultBalanceData
// Size: 0x78 (Inherited: 0x08)
struct FBravoHotelDefaultBalanceData : FTableRowBase 
{
	float                                         BaseHealth;                                                  // 0x08(0x04)
	float                                         BaseBreath;                                                  // 0x0c(0x04)
	float                                         UseBreath;                                                   // 0x10(0x04)
	float                                         RegainBreath;                                                // 0x14(0x04)
	float                                         NoBreathDamage;                                              // 0x18(0x04)
	float                                         BaseCarryWeight;                                             // 0x1c(0x04)
	float                                         SteadySecond;                                                // 0x20(0x04)
	float                                         NoSteadySecond;                                              // 0x24(0x04)
	float                                         KnockDamage;                                                 // 0x28(0x04)
	float                                         ReviveTime;                                                  // 0x2c(0x04)
	float                                         RevivedHealth;                                               // 0x30(0x04)
	float                                         ResuscitationTime;                                           // 0x34(0x04)
	float                                         ResuscitatedHealthModify;                                    // 0x38(0x04)
	float                                         CoinDropMin;                                                 // 0x3c(0x04)
	float                                         CoinDropMax;                                                 // 0x40(0x04)
	float                                         CoinDropHeadShotMin;                                         // 0x44(0x04)
	float                                         CoinDropHeadShotMax;                                         // 0x48(0x04)
	float                                         FrontAngle;                                                  // 0x4c(0x04)
	float                                         BackAngle;                                                   // 0x50(0x04)
	float                                         FarDitanceOfDamageReduce;                                    // 0x54(0x04)
	float                                         CloseDitanceOfDamageReduce;                                  // 0x58(0x04)
	char                                          UnknownData5C[0x4];                                          // 0x5c(0x04)
	struct FNone*                                 BlueZoneBorderCurve;                                         // 0x60(0x08)
	float                                         OverHealLimitValue;                                          // 0x68(0x04)
	float                                         OverHealTime;                                                // 0x6c(0x04)
	float                                         UpperOverHealRate;                                           // 0x70(0x04)
	float                                         LowerOverHealRate;                                           // 0x74(0x04)
};

// ScriptStruct BravoHotelGame.DamageInstigatorInfo
// Size: 0x40 (Inherited: 0x00)
struct FDamageInstigatorInfo 
{
	struct FNone*                                 PlayerState;                                                 // 0x00(0x08)
	struct FNone                                  DamageEvent;                                                 // 0x08(0x10)
	struct FNone*                                 DamageCauser;                                                // 0x18(0x08)
	uint32_t                                      HitPointIdx;                                                 // 0x20(0x04)
	float                                         DamageAmount;                                                // 0x24(0x04)
	float                                         Distance;                                                    // 0x28(0x04)
	char                                          UnknownData2C[0x4];                                          // 0x2c(0x04)
	struct TArray<None>                           AssistPSArray;                                               // 0x30(0x10)
};

// ScriptStruct BravoHotelGame.RepSimulatedTakeDamageInfo
// Size: 0x38 (Inherited: 0x00)
struct FRepSimulatedTakeDamageInfo 
{
	char                                          bHeadShot : 0;                                               // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	float                                         Damage;                                                      // 0x04(0x04)
	struct FNone*                                 DamageTypeClass;                                             // 0x08(0x08)
	struct FNone                                  ImpactPoint;                                                 // 0x10(0x0c)
	struct FNone                                  ShotDirection;                                               // 0x1c(0x0c)
	struct TWeakObjectPtr<struct FNone>           Instigator;                                                  // 0x28(0x08)
	uint16_t                                      HitPointIdx;                                                 // 0x30(0x02)
	uint16_t                                      WeaponId;                                                    // 0x32(0x02)
	uint16_t                                      ProjectileId;                                                // 0x34(0x02)
	char                                          UnknownData36[0x2];                                          // 0x36(0x02)
};

// ScriptStruct BravoHotelGame.PerkLevelUpElement
// Size: 0x58 (Inherited: 0x00)
struct FPerkLevelUpElement 
{
	uint32_t                                      Level;                                                       // 0x00(0x04)
	uint32_t                                      MaxLevel;                                                    // 0x04(0x04)
	struct FText                                  DisplayName;                                                 // 0x08(0x18)
	struct FText                                  DisplayDesc;                                                 // 0x20(0x18)
	uint32_t                                      DisplayPower;                                                // 0x38(0x04)
	uint32_t                                      DisplaySpeed;                                                // 0x3c(0x04)
	uint32_t                                      DisplayDefense;                                              // 0x40(0x04)
	char                                          UnknownData44[0x4];                                          // 0x44(0x04)
	struct TArray<None>                           BuffNames;                                                   // 0x48(0x10)
};

// ScriptStruct BravoHotelGame.PerkDeckData
// Size: 0x4b0 (Inherited: 0x08)
struct FPerkDeckData : FTableRowBase 
{
	char                                          UnknownData8[0x418];                                         // 0x08(0x418)
	uint32_t                                      ID;                                                          // 0x420(0x04)
	struct FText                                  DisplayName;                                                 // 0x298(0x18)
	struct FText                                  DisplayClassName;                                            // 0x258(0x18)
	struct FText                                  DisplayWeaponName;                                           // 0x180(0x18)
	struct FText                                  Description;                                                 // 0x390(0x18)
	uint32_t                                      ClassType;                                                   // 0x38c(0x04)
	enum class None                               ClassEnum;                                                   // 0x2d8(0x01)
	struct FName                                  BoostTypeKey;                                                // 0x248(0x08)
	struct FName                                  WeaponKey;                                                   // 0x250(0x08)
	struct FText                                  WeaponDescription;                                           // 0x2b0(0x18)
	struct TSoftObjectPtr<FNone>                  CohIcon;                                                     // 0x270(0x28)
	struct TSoftObjectPtr<FNone>                  TitleImage;                                                  // 0x3f8(0x28)
	struct TSoftObjectPtr<FNone>                  ClassIcon;                                                   // 0x2f0(0x28)
	struct TSoftObjectPtr<FNone>                  ClassIcon_Widget;                                            // 0x328(0x28)
	struct TSoftObjectPtr<FNone>                  TeamInfoClassIcon;                                           // 0x360(0x28)
	struct TSoftObjectPtr<FNone>                  ClassSelectIcon;                                             // 0x1b8(0x28)
	struct TSoftObjectPtr<FNone>                  NoClassWeaponImage;                                          // 0x428(0x28)
	uint32_t                                      PerkDeckWeight;                                              // 0x388(0x04)
	struct FNone                                  Beginner_Advantage;                                          // 0x198(0x20)
	struct TArray<None>                           Defeat_Advantage;                                            // 0x2e0(0x10)
	struct TArray<None>                           ClassBuffNames;                                              // 0x350(0x10)
	struct TArray<None>                           CraftedWeaponIDs;                                            // 0x1e8(0x10)
	struct TArray<None>                           WeaponItems;                                                 // 0x318(0x10)
	struct TArray<None>                           SupplyItems;                                                 // 0x2c8(0x10)
	struct TMap<None, None>                       FirstExpertWeapon;                                           // 0x1f8(0x50)
	struct TMap<None, None>                       SecondExpertWeapon;                                          // 0x3a8(0x50)
	struct TMap<None, None>                       ExpertWeaponModifier;                                        // 0x450(0x50)
	char                                          bNotKeepClass : 0;                                           // 0x1e0(0x01)
	struct TArray<None>                           PerkCards;                                                   // 0x4a0(0x10)
	struct FNone                                  PerkLevelUpData;                                             // 0x08(0x178)
};

// ScriptStruct BravoHotelGame.PerkLevelUpData
// Size: 0x178 (Inherited: 0x08)
struct FPerkLevelUpData : FTableRowBase 
{
	uint32_t                                      ID;                                                          // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FText                                  UltimateName;                                                // 0x10(0x18)
	struct FText                                  UltimateDesc;                                                // 0x28(0x18)
	struct FText                                  DisplayUltimateName;                                         // 0x40(0x18)
	struct FText                                  DisplayUltimateDesc;                                         // 0x58(0x18)
	struct TSoftObjectPtr<FNone>                  UltimateImage;                                               // 0x70(0x28)
	struct TSoftObjectPtr<FNone>                  UltimateIcon;                                                // 0x98(0x28)
	struct TSoftObjectPtr<FNone>                  UltimateGainSound;                                           // 0xc0(0x28)
	struct FName                                  UlimatePerkName;                                             // 0xe8(0x08)
	struct TArray<None>                           UlimateLevels;                                               // 0xf0(0x10)
	struct FName                                  UlimateNecessaryPerk;                                        // 0x100(0x08)
	struct TArray<None>                           GetUltimateEffects;                                          // 0x108(0x10)
	struct TMap<None, None>                       AddLevelByKill;                                              // 0x118(0x50)
	struct TArray<None>                           PerkLevels;                                                  // 0x168(0x10)
};

// ScriptStruct BravoHotelGame.PerkDeckElement
// Size: 0x70 (Inherited: 0x00)
struct FPerkDeckElement 
{
	uint32_t                                      Weight;                                                      // 0x00(0x04)
	uint32_t                                      LevelUpWeight;                                               // 0x04(0x04)
	struct FName                                  PerkID;                                                      // 0x08(0x08)
	struct TMap<None, None>                       RandomList;                                                  // 0x10(0x50)
	uint32_t                                      PerkPhase;                                                   // 0x60(0x04)
	uint32_t                                      PerkPhaseMaxCount;                                           // 0x64(0x04)
	uint32_t                                      PerkGroup;                                                   // 0x68(0x04)
	uint32_t                                      MinLevel;                                                    // 0x6c(0x04)
};

// ScriptStruct BravoHotelGame.PerkDeckNewbieAdvantage
// Size: 0x20 (Inherited: 0x00)
struct FPerkDeckNewbieAdvantage 
{
	float                                         PerkDeckWeightModifier;                                      // 0x00(0x04)
	char                                          UnknownData4[0x14];                                          // 0x04(0x14)
	char                                          bRecommend : 0;                                              // 0x18(0x01)
	struct TArray<None>                           ExpertWeaponOverride;                                        // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.ExpertWeaponSimpleElement
// Size: 0x0c (Inherited: 0x00)
struct FExpertWeaponSimpleElement 
{
	struct FName                                  WeaponDataID;                                                // 0x00(0x08)
	float                                         Weight;                                                      // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.RepPointDamageInfo
// Size: 0x60 (Inherited: 0x00)
struct FRepPointDamageInfo 
{
	struct FNone*                                 DamageTarget;                                                // 0x00(0x08)
	struct FNone*                                 DamageCauser;                                                // 0x08(0x08)
	struct FNone*                                 Instigator;                                                  // 0x10(0x08)
	struct FNone*                                 DamageTypeClass;                                             // 0x18(0x08)
	struct FNone*                                 HitComponent;                                                // 0x20(0x08)
	struct FNone                                  ShotDirection;                                               // 0x28(0x0c)
	struct FNone                                  ImpactPoint;                                                 // 0x34(0x0c)
	uint16_t                                      BoneIndex;                                                   // 0x40(0x02)
	uint16_t                                      ExtraIndex;                                                  // 0x42(0x02)
	float                                         ImpulsePower;                                                // 0x44(0x04)
	float                                         Damage;                                                      // 0x48(0x04)
	float                                         ProjectileGravity;                                           // 0x4c(0x04)
	uint16_t                                      ProjectileId;                                                // 0x50(0x02)
	char                                          UnknownData52[0x2];                                          // 0x52(0x02)
	struct FNone                                  FireLocation;                                                // 0x54(0x0c)
};

// ScriptStruct BravoHotelGame.AudioCondition
// Size: 0x38 (Inherited: 0x00)
struct FAudioCondition 
{
	char                                          UnknownData0[0x38];                                          // 0x00(0x38)
};

// ScriptStruct BravoHotelGame.BravoHotelDamageEvent_Point
// Size: 0xe0 (Inherited: 0xa8)
struct FBravoHotelDamageEvent_Point : FPointDamageEvent 
{
	struct FNone*                                 AttackerPC;                                                  // 0xa8(0x08)
	struct FNone*                                 AttackerActor;                                               // 0xb0(0x08)
	struct TArray<None>                           AdditionalBuffIndexes;                                       // 0xb8(0x10)
	struct FNone                                  FireLocation;                                                // 0xc8(0x0c)
	float                                         ProjectileGravity;                                           // 0xd4(0x04)
	uint16_t                                      ProjectileId;                                                // 0xd8(0x02)
	char                                          UnknownDataDA[0x6];                                          // 0xda(0x06)
};

// ScriptStruct BravoHotelGame.MolotovFlameDotDamageInfo
// Size: 0x30 (Inherited: 0x00)
struct FMolotovFlameDotDamageInfo 
{
	uint32_t                                      DamageTime;                                                  // 0x00(0x04)
	float                                         DamageAmount;                                                // 0x04(0x04)
	struct FNone                                  DamageEvent;                                                 // 0x08(0x10)
	struct FNone*                                 EventInstigator;                                             // 0x18(0x08)
	struct FNone*                                 DamageCauser;                                                // 0x20(0x08)
	uint32_t                                      InFlameCount;                                                // 0x28(0x04)
	char                                          UnknownData2C[0x4];                                          // 0x2c(0x04)
};

// ScriptStruct BravoHotelGame.NuclearInfo
// Size: 0x0c (Inherited: 0x00)
struct FNuclearInfo 
{
	float                                         TargetingRadius;                                             // 0x00(0x04)
	float                                         AreaRadius;                                                  // 0x04(0x04)
	float                                         AnnounceRadius;                                              // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.RepInvalidHitInfo
// Size: 0x18 (Inherited: 0x00)
struct FRepInvalidHitInfo 
{
	float                                         Distance;                                                    // 0x00(0x04)
	float                                         Dot;                                                         // 0x04(0x04)
	uint32_t                                      PlayerId;                                                    // 0x08(0x04)
	uint16_t                                      ProjectileId;                                                // 0x0c(0x02)
	char                                          UnknownDataE[0x2];                                           // 0x0e(0x02)
	float                                         DoubtScore;                                                  // 0x10(0x04)
	float                                         LevelLoadingProgress;                                        // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.DebugSupplyBoxInfo
// Size: 0x108 (Inherited: 0x00)
struct FDebugSupplyBoxInfo 
{
	uint32_t                                      UserID;                                                      // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                UserName;                                                    // 0x08(0x10)
	struct FString                                OverlapUserName;                                             // 0x18(0x10)
	struct FString                                OverlapHitActorName;                                         // 0x28(0x10)
	uint32_t                                      SpawnMode;                                                   // 0x38(0x04)
	uint32_t                                      Phase;                                                       // 0x3c(0x04)
	struct FNone                                  CharacterPos;                                                // 0x40(0x0c)
	struct FNone                                  Rule;                                                        // 0x4c(0x24)
	char                                          IsBuildingSpawn : 0;                                         // 0x70(0x01)
	char                                          UnknownData70[0x8];                                          // 0x70(0x08)
	struct FString                                BuildigName;                                                 // 0x78(0x10)
	struct FNone                                  BuidingBoxPos;                                               // 0x88(0x0c)
	struct FNone                                  AfterBuidingBoxPos;                                          // 0x94(0x0c)
	struct FNone                                  SpawnedPos;                                                  // 0xa0(0x0c)
	struct FNone                                  FindWeightMapPos;                                            // 0xac(0x0c)
	char                                          UsingSimulationBox : 0;                                      // 0xb8(0x01)
	char                                          UnknownDataB8[0x4];                                          // 0xb8(0x04)
	struct FNone                                  StartSimulationPos;                                          // 0xbc(0x0c)
	struct FNone                                  EndSimulationPos;                                            // 0xc8(0x0c)
	char                                          RePosition : 0;                                              // 0xd4(0x01)
	char                                          UnknownDataD4[0x4];                                          // 0xd4(0x04)
	struct FNone                                  RePositionSpawnedPos;                                        // 0xd8(0x0c)
	uint32_t                                      ReFindCount;                                                 // 0xe4(0x04)
	struct TArray<None>                           ReFindReason;                                                // 0xe8(0x10)
	struct FString                                Msg;                                                         // 0xf8(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelDamageEvent_Radial
// Size: 0xb8 (Inherited: 0x48)
struct FBravoHotelDamageEvent_Radial : FRadialDamageEvent 
{
	struct FNone*                                 AttackerPC;                                                  // 0x48(0x08)
	struct FNone*                                 AttackerActor;                                               // 0x50(0x08)
	struct TMap<None, None>                       AdditionalBuffIndexes;                                       // 0x58(0x50)
	struct FNone                                  FireLocation;                                                // 0xa8(0x0c)
	char                                          UnknownDataB4[0x4];                                          // 0xb4(0x04)
};

// ScriptStruct BravoHotelGame.RepCameraInfo
// Size: 0x28 (Inherited: 0x00)
struct FRepCameraInfo 
{
	float                                         CameraDistanceDelta;                                         // 0x00(0x04)
	struct FNone                                  CameraLocation_Idle;                                         // 0x04(0x0c)
	struct FNone                                  CameraLocation_ADS;                                          // 0x10(0x0c)
	float                                         CameraHeight_Stand;                                          // 0x1c(0x04)
	float                                         CameraHeight_Crouch;                                         // 0x20(0x04)
	float                                         CameraHeight_Prone;                                          // 0x24(0x04)
};

// ScriptStruct BravoHotelGame.CarScanUIInfo
// Size: 0x20 (Inherited: 0x00)
struct FCarScanUIInfo 
{
	struct TArray<None>                           VehicleLocations;                                            // 0x00(0x10)
	struct FNone                                  TryLocation;                                                 // 0x10(0x0c)
	float                                         ScanTime;                                                    // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.Interaction
// Size: 0x38 (Inherited: 0x00)
struct FInteraction 
{
	enum class None                               InteractionType;                                             // 0x00(0x01)
	enum class None                               KeyType;                                                     // 0x01(0x01)
	char                                          Visibility : 0;                                              // 0x02(0x01)
	char                                          UnknownData2[0x1];                                           // 0x02(0x01)
	char                                          bIsAble : 0;                                                 // 0x03(0x01)
	char                                          UnknownData3[0x5];                                           // 0x03(0x05)
	struct FText                                  Message;                                                     // 0x08(0x18)
	struct FText                                  MessageDesc;                                                 // 0x20(0x18)
};

// ScriptStruct BravoHotelGame.StatupAnimParameters
// Size: 0x1c (Inherited: 0x00)
struct FStatupAnimParameters 
{
	float                                         Damage;                                                      // 0x00(0x04)
	float                                         Decrement;                                                   // 0x04(0x04)
	float                                         Capacity;                                                    // 0x08(0x04)
	float                                         Attack;                                                      // 0x0c(0x04)
	float                                         Speed;                                                       // 0x10(0x04)
	float                                         Health;                                                      // 0x14(0x04)
	float                                         Rarity;                                                      // 0x18(0x04)
};

// ScriptStruct BravoHotelGame.AreaSkillZoneInfo
// Size: 0x20 (Inherited: 0x00)
struct FAreaSkillZoneInfo 
{
	float                                         StartValue;                                                  // 0x00(0x04)
	float                                         TargetValue;                                                 // 0x04(0x04)
	float                                         OwnerTargetRatio;                                            // 0x08(0x04)
	float                                         InTime;                                                      // 0x0c(0x04)
	float                                         OutTime;                                                     // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct FNone*                                 OwnerPawn;                                                   // 0x18(0x08)
};

// ScriptStruct BravoHotelGame.SecuredVariablesCache
// Size: 0x04 (Inherited: 0x00)
struct FSecuredVariablesCache 
{
	float                                         LeanDegreeMax;                                               // 0x00(0x04)
};

// ScriptStruct BravoHotelGame.BombingInfo
// Size: 0x24 (Inherited: 0x00)
struct FBombingInfo 
{
	float                                         BombDamage;                                                  // 0x00(0x04)
	float                                         BombDistance;                                                // 0x04(0x04)
	float                                         BombRange;                                                   // 0x08(0x04)
	float                                         BombHeight;                                                  // 0x0c(0x04)
	float                                         BombDelayTime;                                               // 0x10(0x04)
	float                                         BombTargetDelayTime;                                         // 0x14(0x04)
	struct FNone                                  Location;                                                    // 0x18(0x0c)
};

// ScriptStruct BravoHotelGame.WetFogZoneInfo
// Size: 0x0c (Inherited: 0x00)
struct FWetFogZoneInfo 
{
	float                                         VisibleDistance;                                             // 0x00(0x04)
	float                                         VisibleDistanceOwner;                                        // 0x04(0x04)
	float                                         AdditionalSeeThroughSmokeRatio;                              // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelPostProcessSettings
// Size: 0x6a0 (Inherited: 0x08)
struct FBravoHotelPostProcessSettings : FTableRowBase 
{
	char                                          bEnable : 0;                                                 // 0x08(0x01)
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
	struct FNone                                  PostProcessSettings;                                         // 0x10(0x5c0)
	float                                         Priority;                                                    // 0x5d0(0x04)
	char                                          UnknownData5D4[0x4];                                         // 0x5d4(0x04)
	struct FNone*                                 BlendCurve;                                                  // 0x5d8(0x08)
	char                                          bUseSkyLightSettings : 0;                                    // 0x5e0(0x01)
	char                                          UnknownData5E0[0x4];                                         // 0x5e0(0x04)
	float                                         SkyLightIntensity;                                           // 0x5e4(0x04)
	struct FNone                                  SkyLightOcclusionTint;                                       // 0x5e8(0x04)
	char                                          UnknownData5EC[0x4];                                         // 0x5ec(0x04)
	struct FNone*                                 PostProcess;                                                 // 0x5f0(0x08)
	struct FNone                                  BlendTimeline;                                               // 0x5f8(0x98)
	char                                          bIsReversing : 0;                                            // 0x690(0x01)
	char                                          UnknownData690[0x10];                                        // 0x690(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelItemPresetForBlackMarket
// Size: 0x18 (Inherited: 0x00)
struct FBravoHotelItemPresetForBlackMarket 
{
	struct FName                                  PresetName;                                                  // 0x00(0x08)
	struct TArray<None>                           ItemList;                                                    // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelDefaultWearableSetting
// Size: 0x18 (Inherited: 0x00)
struct FBravoHotelDefaultWearableSetting 
{
	char                                          bUse : 0;                                                    // 0x00(0x01)
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	struct TArray<None>                           WearableTableRowList;                                        // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelDefaultItemSetting
// Size: 0x38 (Inherited: 0x00)
struct FBravoHotelDefaultItemSetting 
{
	char                                          bIsUsingIncludeMapList : 0;                                  // 0x00(0x01)
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	struct TArray<None>                           IncludeMapList;                                              // 0x08(0x10)
	struct TArray<None>                           ExcludeMapList;                                              // 0x18(0x10)
	struct TArray<None>                           DefaultItemList;                                             // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelTakeDamageInfo
// Size: 0x48 (Inherited: 0x00)
struct FBravoHotelTakeDamageInfo 
{
	char                                          bHeadShot : 0;                                               // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	float                                         Damage;                                                      // 0x04(0x04)
	struct FNone*                                 DamageTypeClass;                                             // 0x08(0x08)
	struct FNone                                  ImpactPoint;                                                 // 0x10(0x0c)
	struct FNone                                  ImpactNormal;                                                // 0x1c(0x0c)
	struct FNone                                  ShotDirection;                                               // 0x28(0x0c)
	struct TWeakObjectPtr<struct FNone>           Instigator;                                                  // 0x34(0x08)
	uint16_t                                      HitPointIdx;                                                 // 0x3c(0x02)
	uint16_t                                      WeaponId;                                                    // 0x3e(0x02)
	uint16_t                                      ProjectileId;                                                // 0x40(0x02)
	char                                          UnknownData42[0x6];                                          // 0x42(0x06)
};

// ScriptStruct BravoHotelGame.MutableData
// Size: 0x18 (Inherited: 0x00)
struct FMutableData 
{
	enum class None                               MutableSlot;                                                 // 0x00(0x01)
	char                                          UnknownData1[0x7];                                           // 0x01(0x07)
	struct FString                                MutableKey;                                                  // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.PerkUIInfo
// Size: 0x2c (Inherited: 0x00)
struct FPerkUIInfo 
{
	enum class None                               Slot;                                                        // 0x00(0x01)
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
	struct FName                                  PerkName;                                                    // 0x04(0x08)
	uint32_t                                      PerkID;                                                      // 0x0c(0x04)
	uint32_t                                      InGamelevel;                                                 // 0x10(0x04)
	uint32_t                                      CurrentExp;                                                  // 0x14(0x04)
	uint32_t                                      ActiveSkillIndex;                                            // 0x18(0x04)
	char                                          bActive : 0;                                                 // 0x1c(0x01)
	char                                          UnknownData1C[0x1];                                          // 0x1c(0x01)
	char                                          bCanActive : 0;                                              // 0x1d(0x01)
	char                                          UnknownData1D[0x1];                                          // 0x1d(0x01)
	char                                          bCoolTime : 0;                                               // 0x1e(0x01)
	char                                          UnknownData1E[0x2];                                          // 0x1e(0x02)
	float                                         Timer;                                                       // 0x20(0x04)
	float                                         MaxTime;                                                     // 0x24(0x04)
	enum class None                               KeySettingType;                                              // 0x28(0x01)
	char                                          UnknownData29[0x3];                                          // 0x29(0x03)
};

// ScriptStruct BravoHotelGame.CompletedCasting
// Size: 0x08 (Inherited: 0x00)
struct FCompletedCasting 
{
	uint32_t                                      BackpackSlotIndex;                                           // 0x00(0x04)
	uint32_t                                      ID;                                                          // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.AssistInfo
// Size: 0x10 (Inherited: 0x00)
struct FAssistInfo 
{
	struct FNone*                                 TargetPS;                                                    // 0x00(0x08)
	float                                         HitTime;                                                     // 0x08(0x04)
	float                                         DamageAmount;                                                // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelArmsLag
// Size: 0x08 (Inherited: 0x00)
struct FBravoHotelArmsLag 
{
	float                                         ArmsLagRotationMax;                                          // 0x00(0x04)
	float                                         ArmsLagRotationSpeed;                                        // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.ResuscitationAnimSet
// Size: 0x28 (Inherited: 0x00)
struct FResuscitationAnimSet 
{
	struct FNone*                                 ToCriticalTime;                                              // 0x00(0x08)
	struct FNone*                                 CriticalTimeIdle;                                            // 0x08(0x08)
	struct FNone*                                 Resuscitated;                                                // 0x10(0x08)
	struct FNone                                  Resuscitation;                                               // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.TargetHealthInfo
// Size: 0x08 (Inherited: 0x00)
struct FTargetHealthInfo 
{
	float                                         TargetHealth;                                                // 0x00(0x04)
	float                                         Usablehealth;                                                // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelConditionState
// Size: 0x20 (Inherited: 0x00)
struct FBravoHotelConditionState 
{
	enum class None                               ConditionType;                                               // 0x00(0x01)
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
	float                                         CheckTimer;                                                  // 0x04(0x04)
	float                                         CheckDepth;                                                  // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct TArray<None>                           Keys;                                                        // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.MaterialEffectInfo
// Size: 0x18 (Inherited: 0x00)
struct FMaterialEffectInfo 
{
	float                                         EffectTimer;                                                 // 0x00(0x04)
	char                                          EffectIndex;                                                 // 0x04(0x01)
	char                                          UnknownData5[0x3];                                           // 0x05(0x03)
	struct TArray<None>                           MaterialEffectBuffs;                                         // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.BuffHandleArray
// Size: 0x118 (Inherited: 0x108)
struct FBuffHandleArray : FFastArraySerializer 
{
	struct TArray<None>                           Items;                                                       // 0x108(0x10)
};

// ScriptStruct BravoHotelGame.BuffHandle
// Size: 0x10 (Inherited: 0x0c)
struct FBuffHandle : FFastArraySerializerItem 
{
	uint16_t                                      Key;                                                         // 0x0c(0x02)
	char                                          UnknownDataE[0x2];                                           // 0x0e(0x02)
};

// ScriptStruct BravoHotelGame.BravoHotelBuffUIInfo
// Size: 0x98 (Inherited: 0x00)
struct FBravoHotelBuffUIInfo 
{
	uint32_t                                      Key;                                                         // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct TSoftObjectPtr<FNone>                  CohIcon;                                                     // 0x08(0x28)
	char                                          bCoolTime : 0;                                               // 0x30(0x01)
	char                                          UnknownData30[0x1];                                          // 0x30(0x01)
	char                                          bActive : 0;                                                 // 0x31(0x01)
	char                                          UnknownData31[0x3];                                          // 0x31(0x03)
	float                                         Timer;                                                       // 0x34(0x04)
	float                                         MaxTime;                                                     // 0x38(0x04)
	struct FNone                                  BorderColor;                                                 // 0x3c(0x04)
	struct FNone                                  BGColor;                                                     // 0x40(0x04)
	char                                          UnknownData44[0x4];                                          // 0x44(0x04)
	struct FText                                  DisplayName;                                                 // 0x48(0x18)
	struct FText                                  Description;                                                 // 0x60(0x18)
	uint32_t                                      DisplayLevel;                                                // 0x78(0x04)
	char                                          UnknownData7C[0x4];                                          // 0x7c(0x04)
	struct FString                                Param;                                                       // 0x80(0x10)
	char                                          UnknownData90[0x8];                                          // 0x90(0x08)
};

// ScriptStruct BravoHotelGame.BravoHotelConditionedAbilityState
// Size: 0x60 (Inherited: 0x00)
struct FBravoHotelConditionedAbilityState 
{
	char                                          UnknownData0[0x58];                                          // 0x00(0x58)
	struct FNone*                                 OwnerObject;                                                 // 0x58(0x08)
};

// ScriptStruct BravoHotelGame.BravoHotelAbilityState
// Size: 0x60 (Inherited: 0x00)
struct FBravoHotelAbilityState 
{
	char                                          UnknownData0[0x60];                                          // 0x00(0x60)
};

// ScriptStruct BravoHotelGame.BravoHotelPartyInvitation
// Size: 0x30 (Inherited: 0x00)
struct FBravoHotelPartyInvitation 
{
	struct FString                                FromUID;                                                     // 0x00(0x10)
	struct FString                                FromName;                                                    // 0x10(0x10)
	struct FString                                Ticket;                                                      // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelLocalPingInfo
// Size: 0x30 (Inherited: 0x00)
struct FBravoHotelLocalPingInfo 
{
	uint32_t                                      PingIndex;                                                   // 0x00(0x04)
	struct FNone                                  WorldLocation;                                               // 0x04(0x0c)
	struct FNone                                  PingColor;                                                   // 0x10(0x10)
	enum class None                               PingType;                                                    // 0x20(0x01)
	char                                          UnknownData21[0x7];                                          // 0x21(0x07)
	struct FNone*                                 IconImage;                                                   // 0x28(0x08)
};

// ScriptStruct BravoHotelGame.BravoHotelMapTableRow
// Size: 0x180 (Inherited: 0x08)
struct FBravoHotelMapTableRow : FTableRowBase 
{
	uint32_t                                      ID;                                                          // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FString                                DisplayName;                                                 // 0x10(0x10)
	struct FString                                Mode;                                                        // 0x20(0x10)
	uint32_t                                      BattleRoyaleWaitingTime;                                     // 0x30(0x04)
	uint32_t                                      BattleRoyaleReadyTime;                                       // 0x34(0x04)
	float                                         ParachuteAvailableDistance;                                  // 0x38(0x04)
	float                                         ForcingParachuteDistance;                                    // 0x3c(0x04)
	struct TSoftObjectPtr<FNone>                  PlayZoneDataTable;                                           // 0x40(0x28)
	struct TArray<None>                           DefaultPlayZoneImageList;                                    // 0x68(0x10)
	struct TSoftObjectPtr<FNone>                  UIResource;                                                  // 0x78(0x28)
	struct TSoftObjectPtr<FNone>                  WeightMapResource;                                           // 0xa0(0x28)
	struct TSoftObjectPtr<FStrProperty_88>        WeightmapData;                                               // 0xc8(0x28)
	struct TSoftObjectPtr<FNone>                  AudioAmbientMap;                                             // 0xf0(0x28)
	uint32_t                                      WeightMapRadiusCheckCount;                                   // 0x118(0x04)
	struct FNone                                  CenterPosOfWorld;                                            // 0x11c(0x08)
	struct FNone                                  SizeOfWorld;                                                 // 0x124(0x08)
	float                                         DisableDescentDistance;                                      // 0x12c(0x04)
	struct FNone                                  WorldCenterForAircraft;                                      // 0x130(0x08)
	struct FNone                                  WorldSizeForAircraft;                                        // 0x138(0x08)
	uint32_t                                      MiniMapZoomLevel;                                            // 0x140(0x04)
	float                                         TimeBeforeLoading;                                           // 0x144(0x04)
	uint32_t                                      Map_Mode_Reward_Solo;                                        // 0x148(0x04)
	uint32_t                                      Map_Mode_Reward_Duo;                                         // 0x14c(0x04)
	uint32_t                                      Map_Mode_Reward_Squad;                                       // 0x150(0x04)
	char                                          UnknownData154[0x4];                                         // 0x154(0x04)
	struct FString                                PackageName;                                                 // 0x158(0x10)
	char                                          IgnoreArea_MakeAirCraftLine : 0;                             // 0x168(0x01)
	char                                          UnknownData168[0x4];                                         // 0x168(0x04)
	struct FNone                                  AreaLocation;                                                // 0x16c(0x0c)
	float                                         AreaRadius;                                                  // 0x178(0x04)
	enum class None                               LoadingScreenType;                                           // 0x17c(0x01)
	char                                          UnknownData17D[0x3];                                         // 0x17d(0x03)
};

// ScriptStruct BravoHotelGame.BravoHotelHUDMessageRow
// Size: 0x68 (Inherited: 0x08)
struct FBravoHotelHUDMessageRow : FTableRowBase 
{
	enum class None                               MessageType;                                                 // 0x08(0x01)
	char                                          UnknownData9[0x7];                                           // 0x09(0x07)
	struct FString                                Description;                                                 // 0x10(0x10)
	struct FText                                  Message;                                                     // 0x20(0x18)
	uint32_t                                      Priority;                                                    // 0x38(0x04)
	char                                          UnknownData3C[0x4];                                          // 0x3c(0x04)
	struct TSoftObjectPtr<FNone>                  Sound;                                                       // 0x40(0x28)
};

// ScriptStruct BravoHotelGame.SpawnItems_DEBUG
// Size: 0x38 (Inherited: 0x00)
struct FSpawnItems_DEBUG 
{
	struct FString                                ActorName;                                                   // 0x00(0x10)
	struct FString                                BPName;                                                      // 0x10(0x10)
	uint32_t                                      GroupID;                                                     // 0x20(0x04)
	char                                          UnknownData24[0x4];                                          // 0x24(0x04)
	struct TArray<None>                           ItemList;                                                    // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.WorldSpawnItemStatisticInfo
// Size: 0x20 (Inherited: 0x00)
struct FWorldSpawnItemStatisticInfo 
{
	uint32_t                                      SpawnBoxID;                                                  // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                SpawnItemName;                                               // 0x08(0x10)
	uint32_t                                      SpawnItemCount;                                              // 0x18(0x04)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelUserInfo
// Size: 0x90 (Inherited: 0x00)
struct FBravoHotelUserInfo 
{
	struct FString                                UID;                                                         // 0x00(0x10)
	struct FString                                Name;                                                        // 0x10(0x10)
	struct FNone                                  LoggedInTime;                                                // 0x20(0x08)
	struct FNone                                  PCInfo;                                                      // 0x28(0x68)
};

// ScriptStruct BravoHotelGame.BravoHotelPartyPCInfo
// Size: 0x68 (Inherited: 0x00)
struct FBravoHotelPartyPCInfo 
{
	struct FString                                pc_id;                                                       // 0x00(0x10)
	uint32_t                                      class_type_index;                                            // 0x10(0x04)
	uint32_t                                      class_data_index;                                            // 0x14(0x04)
	struct FNone                                  looks;                                                       // 0x18(0x18)
	struct TArray<None>                           wear_item;                                                   // 0x30(0x10)
	struct TArray<None>                           Weapon;                                                      // 0x40(0x10)
	struct TArray<None>                           perk;                                                        // 0x50(0x10)
	uint32_t                                      exp;                                                         // 0x60(0x04)
	char                                          UnknownData64[0x4];                                          // 0x64(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelEquippedSlotInfo
// Size: 0x08 (Inherited: 0x00)
struct FBravoHotelEquippedSlotInfo 
{
	uint32_t                                      Key;                                                         // 0x00(0x04)
	uint32_t                                      table_index;                                                 // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelPCLooks
// Size: 0x18 (Inherited: 0x00)
struct FBravoHotelPCLooks 
{
	uint32_t                                      gender;                                                      // 0x00(0x04)
	uint32_t                                      face;                                                        // 0x04(0x04)
	uint32_t                                      face_color;                                                  // 0x08(0x04)
	uint32_t                                      hair;                                                        // 0x0c(0x04)
	uint32_t                                      hair_color;                                                  // 0x10(0x04)
	uint32_t                                      makeup;                                                      // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelFriendInfo
// Size: 0x98 (Inherited: 0x90)
struct FBravoHotelFriendInfo : FBravoHotelUserInfo 
{
	enum class None                               State;                                                       // 0x90(0x01)
	char                                          UnknownData91[0x7];                                          // 0x91(0x07)
};

// ScriptStruct BravoHotelGame.SpawnItemResult
// Size: 0x48 (Inherited: 0x00)
struct FSpawnItemResult 
{
	struct FNone                                  Item;                                                        // 0x00(0x10)
	struct TArray<None>                           BuffNames;                                                   // 0x10(0x10)
	uint32_t                                      Count;                                                       // 0x20(0x04)
	char                                          UnknownData24[0x4];                                          // 0x24(0x04)
	struct FString                                DivisionParent;                                              // 0x28(0x10)
	char                                          bAmmoItemFromWeapon : 0;                                     // 0x38(0x01)
	char                                          UnknownData38[0x4];                                          // 0x38(0x04)
	struct FName                                  TargetWeaponItemKey;                                         // 0x3c(0x08)
	char                                          UnknownData44[0x4];                                          // 0x44(0x04)
};

// ScriptStruct BravoHotelGame.RandomSpawn
// Size: 0x20 (Inherited: 0x08)
struct FRandomSpawn : FTableRowBase 
{
	enum class None                               RandomType;                                                  // 0x08(0x01)
	char                                          UnknownData9[0x7];                                           // 0x09(0x07)
	struct TArray<None>                           Items;                                                       // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.RandomProbability
// Size: 0x78 (Inherited: 0x00)
struct FRandomProbability 
{
	float                                         Weight;                                                      // 0x00(0x04)
	uint32_t                                      BundleItemAmount;                                            // 0x04(0x04)
	struct FNone                                  ItemRowHandle;                                               // 0x08(0x10)
	struct TArray<None>                           BuffNames;                                                   // 0x18(0x10)
	struct TSet<None>                             Types;                                                       // 0x28(0x50)
};

// ScriptStruct BravoHotelGame.DamageTypeTable
// Size: 0x68 (Inherited: 0x08)
struct FDamageTypeTable : FTableRowBase 
{
	uint32_t                                      ID;                                                          // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FNone*                                 StaticClass;                                                 // 0x10(0x08)
	struct TSoftObjectPtr<FNone>                  IconTexture_PaperSprite;                                     // 0x18(0x28)
	struct FText                                  CauserText;                                                  // 0x40(0x18)
	struct FNone*                                 HitedMontage;                                                // 0x58(0x08)
	char                                          IsClassSkill : 0;                                            // 0x60(0x01)
	char                                          UnknownData60[0x8];                                          // 0x60(0x08)
};

// ScriptStruct BravoHotelGame.SettingInfo
// Size: 0x88 (Inherited: 0x08)
struct FSettingInfo : FTableRowBase 
{
	char                                          bIsDevelopmentData : 0;                                      // 0x08(0x01)
	char                                          UnknownData8[0x1];                                           // 0x08(0x01)
	enum class None                               ParentType;                                                  // 0x09(0x01)
	enum class None                               Type;                                                        // 0x0a(0x01)
	enum class None                               KeyType;                                                     // 0x0b(0x01)
	enum class None                               SlotType;                                                    // 0x0c(0x01)
	char                                          UnknownDataD[0x3];                                           // 0x0d(0x03)
	struct FText                                  Title;                                                       // 0x10(0x18)
	struct FText                                  Desc;                                                        // 0x28(0x18)
	struct TArray<None>                           DescImageList;                                               // 0x40(0x10)
	char                                          ImmediatelyApply : 0;                                        // 0x50(0x01)
	char                                          UnknownData50[0x1];                                          // 0x50(0x01)
	enum class None                               KeySettingSubType;                                           // 0x51(0x01)
	char                                          EnableChangeKey : 0;                                         // 0x52(0x01)
	char                                          UnknownData52[0x1];                                          // 0x52(0x01)
	char                                          EnableDuplicatekeys : 0;                                     // 0x53(0x01)
	char                                          UnknownData53[0x1];                                          // 0x53(0x01)
	char                                          IsAxisKey : 0;                                               // 0x54(0x01)
	char                                          UnknownData54[0x1];                                          // 0x54(0x01)
	char                                          UseKeyMapping : 0;                                           // 0x55(0x01)
	char                                          UnknownData55[0x3];                                          // 0x55(0x03)
	float                                         Min;                                                         // 0x58(0x04)
	float                                         MAX;                                                         // 0x5c(0x04)
	char                                          bIsSubType : 0;                                              // 0x60(0x01)
	char                                          UnknownData60[0x4];                                          // 0x60(0x04)
	float                                         Unit;                                                        // 0x64(0x04)
	char                                          bIsFloatValue : 0;                                           // 0x68(0x01)
	char                                          UnknownData68[0x1];                                          // 0x68(0x01)
	char                                          bEditableText : 0;                                           // 0x69(0x01)
	char                                          UnknownData69[0x7];                                          // 0x69(0x07)
	struct TArray<None>                           ValueList;                                                   // 0x70(0x10)
	float                                         Default;                                                     // 0x80(0x04)
	char                                          UnknownData84[0x4];                                          // 0x84(0x04)
};

// ScriptStruct BravoHotelGame.SettingSlotListInfo
// Size: 0x20 (Inherited: 0x00)
struct FSettingSlotListInfo 
{
	struct FText                                  Title;                                                       // 0x00(0x18)
	float                                         SettingValue;                                                // 0x18(0x04)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelPartyInfo
// Size: 0x28 (Inherited: 0x00)
struct FBravoHotelPartyInfo 
{
	struct FString                                PartyID;                                                     // 0x00(0x10)
	uint32_t                                      LeaderIndex;                                                 // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct TArray<None>                           Members;                                                     // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelPartyMemberInfo
// Size: 0xe0 (Inherited: 0x98)
struct FBravoHotelPartyMemberInfo : FBravoHotelFriendInfo 
{
	char                                          bIsReady : 0;                                                // 0x98(0x01)
	char                                          UnknownData98[0x1];                                          // 0x98(0x01)
	char                                          bIsVoiceChat : 0;                                            // 0x99(0x01)
	char                                          UnknownData99[0x1];                                          // 0x99(0x01)
	char                                          bIsLeader : 0;                                               // 0x9a(0x01)
	char                                          UnknownData9A[0x6];                                          // 0x9a(0x06)
	struct FString                                clientStatus;                                                // 0xa0(0x10)
	uint32_t                                      SeasonTierID;                                                // 0xb0(0x04)
	char                                          UnknownDataB4[0x4];                                          // 0xb4(0x04)
	struct FString                                AccessRegion;                                                // 0xb8(0x10)
	uint32_t                                      Ping;                                                        // 0xc8(0x04)
	char                                          UnknownDataCC[0x4];                                          // 0xcc(0x04)
	struct FString                                steamID;                                                     // 0xd0(0x10)
};

// ScriptStruct BravoHotelGame.PersonalSupplyBoxPingInfo
// Size: 0x14 (Inherited: 0x00)
struct FPersonalSupplyBoxPingInfo 
{
	char                                          IsSpawned : 0;                                               // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	struct FNone                                  Location;                                                    // 0x04(0x0c)
	enum class None                               PingType;                                                    // 0x10(0x01)
	char                                          UnknownData11[0x3];                                          // 0x11(0x03)
};

// ScriptStruct BravoHotelGame.SettingData
// Size: 0x05 (Inherited: 0x00)
struct FSettingData 
{
	char                                          ImmediateAttachment : 0;                                     // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
	char                                          InheritAttachment : 0;                                       // 0x01(0x01)
	char                                          UnknownData1[0x1];                                           // 0x01(0x01)
	char                                          ShowPerkSlot : 0;                                            // 0x02(0x01)
	char                                          UnknownData2[0x1];                                           // 0x02(0x01)
	char                                          UnknownData3_0 : 7;                                          // 0x03(0x01)
	char                                          SupplyBox : 1;                                               // 0x03(0x01)
	char                                          SmartPing : 0;                                               // 0x04(0x01)
	char                                          UnknownData4[0x1];                                           // 0x04(0x01)
};

// ScriptStruct BravoHotelGame.SettingValue
// Size: 0x18 (Inherited: 0x00)
struct FSettingValue 
{
	enum class None                               SettingType;                                                 // 0x00(0x01)
	enum class None                               Type;                                                        // 0x01(0x01)
	char                                          UnknownData2[0x6];                                           // 0x02(0x06)
	struct TArray<None>                           ValueList;                                                   // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelPingInfo
// Size: 0x38 (Inherited: 0x00)
struct FBravoHotelPingInfo 
{
	char                                          HasMarker : 0;                                               // 0x00(0x01)
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	struct FNone*                                 TargetActor;                                                 // 0x08(0x08)
	struct FNone*                                 OwnerActor;                                                  // 0x10(0x08)
	struct FNone                                  WorldLocation;                                               // 0x18(0x0c)
	uint32_t                                      IconTableID;                                                 // 0x24(0x04)
	char                                          IsDirectPing : 0;                                            // 0x28(0x01)
	char                                          UnknownData28[0x1];                                          // 0x28(0x01)
	enum class None                               PingType;                                                    // 0x29(0x01)
	char                                          UnknownData2A[0x2];                                          // 0x2a(0x02)
	uint32_t                                      TargetTableIndex;                                            // 0x2c(0x04)
	enum class None                               ItemPingType;                                                // 0x30(0x01)
	char                                          UnknownData31[0x7];                                          // 0x31(0x07)
};

// ScriptStruct BravoHotelGame.BravoHotelWeaponInfo
// Size: 0xb30 (Inherited: 0x08)
struct FBravoHotelWeaponInfo : FTableRowBase 
{
	char                                          UnknownData8[0x830];                                         // 0x08(0x830)
	struct FName                                  WeaponKey;                                                   // 0x838(0x08)
	struct FText                                  DisplayName;                                                 // 0x88(0x18)
	char                                          UnknownData858[0x240];                                       // 0x858(0x240)
	struct FText                                  DisplayDesc;                                                 // 0xa98(0x18)
	struct FString                                AK_EventKey;                                                 // 0x288(0x10)
	char                                          UnknownDataAC0[0x60];                                        // 0xac0(0x60)
	struct FName                                  CrosshairRowName;                                            // 0xb20(0x08)
	float                                         CrosshairIncrease;                                           // 0x850(0x04)
	float                                         CrosshairDecreaseSpeed;                                      // 0x5d8(0x04)
	float                                         CrosshairInterpSpeed;                                        // 0x5c4(0x04)
	struct TSoftObjectPtr<FNone>                  SilhouetteIconTexture_PaperSprite;                           // 0x858(0x28)
	enum class None                               WeaponType;                                                  // 0x5c8(0x01)
	enum class None                               ThrowingWeaponType;                                          // 0x48(0x01)
	struct FText                                  DisplayWeaponType;                                           // 0x880(0x18)
	struct FText                                  DisplayRangeType;                                            // 0x5f0(0x18)
	float                                         Display_Damage;                                              // 0x89c(0x04)
	uint32_t                                      Display_EffectiveRange;                                      // 0xb1c(0x04)
	float                                         Display_Accuracy;                                            // 0xa90(0x04)
	uint32_t                                      Display_RateofFire;                                          // 0xb28(0x04)
	struct FName                                  Display_AmmoInfo;                                            // 0x840(0x08)
	struct FNone                                  ADS_Info;                                                    // 0x8a0(0x1f0)
	struct FNone                                  FPSK_Info;                                                   // 0x610(0x220)
	struct FNone                                  Attachment_Info;                                             // 0x2a0(0x318)
	struct FNone*                                 Curve_Sway_Idle;                                             // 0x50(0x08)
	struct FNone*                                 Curve_Sway_Move;                                             // 0xb10(0x08)
	struct FName                                  AllowedAmmoName;                                             // 0x5d0(0x08)
	float                                         MinDamage;                                                   // 0xa94(0x04)
	float                                         MaxDamage;                                                   // 0xb18(0x04)
	float                                         Accuracy;                                                    // 0x5cc(0x04)
	float                                         FireRateSingle;                                              // 0x5c0(0x04)
	float                                         FireRateBurst;                                               // 0x29c(0x04)
	float                                         FireRateAuto;                                                // 0x608(0x04)
	float                                         FireIntervalBurst;                                           // 0x298(0x04)
	float                                         Weight;                                                      // 0x848(0x04)
	uint32_t                                      NormalMagSize;                                               // 0x84c(0x04)
	uint32_t                                      LargeMagSize;                                                // 0x5bc(0x04)
	struct FNone                                  ReloadInfo;                                                  // 0x1c8(0xb8)
	struct TArray<None>                           AllowedFireModes;                                            // 0x5e0(0x10)
	float                                         ProjectileVelocity;                                          // 0x5b8(0x04)
	float                                         TerminalVelocity;                                            // 0x898(0x04)
	uint32_t                                      BurstCount;                                                  // 0x280(0x04)
	uint32_t                                      BulletsPerShot;                                              // 0xab0(0x04)
	char                                          bIsBoltAction : 0;                                           // 0x1c0(0x01)
	float                                         BoltActionTime;                                              // 0x830(0x04)
	float                                         ADSToReloadDelayTime;                                        // 0x834(0x04)
	float                                         MoveSpeedModifier;                                           // 0x4c(0x04)
	struct FNone                                  Spread;                                                      // 0x08(0x40)
	struct FNone                                  Deviation;                                                   // 0x58(0x2c)
	struct FNone                                  Recoil;                                                      // 0xa0(0x120)
	struct FNone                                  DepthOfField;                                                // 0xab8(0x50)
	struct FNone                                  ArmsLag;                                                     // 0xb08(0x08)
};

// ScriptStruct BravoHotelGame.BravoHotelDepthOfFieldBaseInfo
// Size: 0x50 (Inherited: 0x00)
struct FBravoHotelDepthOfFieldBaseInfo 
{
	struct TMap<None, None>                       DetailInfo;                                                  // 0x00(0x50)
};

// ScriptStruct BravoHotelGame.BravoHotelDepthOfFieldDetailInfo
// Size: 0x0c (Inherited: 0x00)
struct FBravoHotelDepthOfFieldDetailInfo 
{
	char                                          bUseDepthOfField : 0;                                        // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	float                                         FocalDistance;                                               // 0x04(0x04)
	float                                         CircleDOF_Fstop;                                             // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelRecoilInfo
// Size: 0x120 (Inherited: 0x00)
struct FBravoHotelRecoilInfo 
{
	float                                         VertClampMin;                                                // 0x00(0x04)
	float                                         VertClampMax;                                                // 0x04(0x04)
	float                                         VertSpeed;                                                   // 0x08(0x04)
	float                                         VertRecoveryClamp;                                           // 0x0c(0x04)
	float                                         VertRecoveryModifier;                                        // 0x10(0x04)
	float                                         HorSpeed;                                                    // 0x14(0x04)
	float                                         HorTendency;                                                 // 0x18(0x04)
	float                                         HorLeftMax;                                                  // 0x1c(0x04)
	float                                         HorRightMax;                                                 // 0x20(0x04)
	float                                         Speed;                                                       // 0x24(0x04)
	float                                         RecoverySpeed;                                               // 0x28(0x04)
	float                                         PatternScale;                                                // 0x2c(0x04)
	struct FNone*                                 BulletCountFallingCurve;                                     // 0x30(0x08)
	float                                         CrouchModifier;                                              // 0x38(0x04)
	float                                         ProneModifier;                                               // 0x3c(0x04)
	struct FNone*                                 HorizonControlRecoilCurve;                                   // 0x40(0x08)
	struct TMap<None, None>                       OverrideVisualRecoil;                                        // 0x48(0x50)
	struct FNone                                  VisualRecoil;                                                // 0x98(0x68)
	struct FNone                                  FireCameraShakeInfo;                                         // 0x100(0x20)
};

// ScriptStruct BravoHotelGame.BravoHotelFireCameraShakeInfo
// Size: 0x20 (Inherited: 0x00)
struct FBravoHotelFireCameraShakeInfo 
{
	uint32_t                                      BulletCountForMultiFire;                                     // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FNone*                                 FireCameraShake;                                             // 0x08(0x08)
	struct FNone*                                 FireCameraShake_ADS_SingleFire;                              // 0x10(0x08)
	struct FNone*                                 FireCameraShake_ADS_MultiFire;                               // 0x18(0x08)
};

// ScriptStruct BravoHotelGame.BravoHotelVisualRecoilInfo
// Size: 0x68 (Inherited: 0x00)
struct FBravoHotelVisualRecoilInfo 
{
	struct FNone                                  VisualShake;                                                 // 0x00(0x0c)
	float                                         VisualShakeSpeed;                                            // 0x0c(0x04)
	struct FNone                                  VisualRecoilAngle;                                           // 0x10(0x0c)
	struct FNone                                  VisualRecoil;                                                // 0x1c(0x0c)
	float                                         VisualRecoilSpeed;                                           // 0x28(0x04)
	float                                         VisualRecoilRecoverySpeed;                                   // 0x2c(0x04)
	float                                         BackAnimation;                                               // 0x30(0x04)
	float                                         BackAnimationSpeed;                                          // 0x34(0x04)
	float                                         BackAnimationRecoverySpeed;                                  // 0x38(0x04)
	float                                         HorizonWeight;                                               // 0x3c(0x04)
	struct FNone*                                 BackRecoilPositionCurve;                                     // 0x40(0x08)
	struct FNone*                                 VerticalRecoilPositionCurve;                                 // 0x48(0x08)
	struct FNone*                                 VerticalRecoilRotationCurve;                                 // 0x50(0x08)
	struct FNone*                                 HorizonRecoilPositionCurve;                                  // 0x58(0x08)
	struct FNone*                                 HorizonRecoilRotationCurve;                                  // 0x60(0x08)
};

// ScriptStruct BravoHotelGame.BravoHotelDeviation
// Size: 0x2c (Inherited: 0x00)
struct FBravoHotelDeviation 
{
	float                                         Base;                                                        // 0x00(0x04)
	float                                         BaseAOS;                                                     // 0x04(0x04)
	float                                         BaseADS;                                                     // 0x08(0x04)
	float                                         RecoilGain;                                                  // 0x0c(0x04)
	float                                         RecoilGainAOS;                                               // 0x10(0x04)
	float                                         RecoilGainADS;                                               // 0x14(0x04)
	float                                         MaxLimit;                                                    // 0x18(0x04)
	float                                         MoveModifierLimit;                                           // 0x1c(0x04)
	float                                         MoveVelocityClamp;                                           // 0x20(0x04)
	float                                         CrouchModifier;                                              // 0x24(0x04)
	float                                         ProneModifier;                                               // 0x28(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelSpreadInfo
// Size: 0x40 (Inherited: 0x00)
struct FBravoHotelSpreadInfo 
{
	float                                         ShotSpread;                                                  // 0x00(0x04)
	float                                         Base;                                                        // 0x04(0x04)
	float                                         AOSModifier;                                                 // 0x08(0x04)
	float                                         ADSModifier;                                                 // 0x0c(0x04)
	float                                         FiringBase;                                                  // 0x10(0x04)
	float                                         CrouchModifier;                                              // 0x14(0x04)
	float                                         ProneModifier;                                               // 0x18(0x04)
	float                                         WalkModifier;                                                // 0x1c(0x04)
	float                                         RunModifier;                                                 // 0x20(0x04)
	float                                         JumpModifier;                                                // 0x24(0x04)
	float                                         MaxLimit;                                                    // 0x28(0x04)
	char                                          bUseShotPattern : 0;                                         // 0x2c(0x01)
	char                                          UnknownData2C[0x4];                                          // 0x2c(0x04)
	struct TArray<None>                           PatternDivideList;                                           // 0x30(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelReloadInfo
// Size: 0xb8 (Inherited: 0x00)
struct FBravoHotelReloadInfo 
{
	enum class None                               LoadingType;                                                 // 0x00(0x01)
	char                                          bNeedBoltActionAfterReload : 0;                              // 0x01(0x01)
	char                                          UnknownData1[0x1];                                           // 0x01(0x01)
	char                                          bUseTacticalReload : 0;                                      // 0x02(0x01)
	char                                          UnknownData2[0x2];                                           // 0x02(0x02)
	float                                         ReloadTime;                                                  // 0x04(0x04)
	float                                         TacticalReloadTime;                                          // 0x08(0x04)
	float                                         StripperClipReloadTime;                                      // 0x0c(0x04)
	float                                         SingleBulletInitialTime;                                     // 0x10(0x04)
	float                                         SingleBulletRepeatTime;                                      // 0x14(0x04)
	struct FNone                                  ReloadPlayerAnim;                                            // 0x18(0x10)
	struct FNone                                  ReloadWeaponAnim;                                            // 0x28(0x10)
	struct FNone                                  ReloadPronePlayerAnim;                                       // 0x38(0x10)
	struct FNone                                  ReloadProneWeaponAnim;                                       // 0x48(0x10)
	struct FNone                                  ReloadVehiclePlayerAnim;                                     // 0x58(0x10)
	struct FNone                                  TacticalReloadPlayerAnim;                                    // 0x68(0x10)
	struct FNone                                  TacticalReloadWeaponAnim;                                    // 0x78(0x10)
	struct FNone                                  TacticalReloadPronePlayerAnim;                               // 0x88(0x10)
	struct FNone                                  TacticalReloadProneWeaponAnim;                               // 0x98(0x10)
	struct FNone                                  TacticalReloadVehiclePlayerAnim;                             // 0xa8(0x10)
};

// ScriptStruct BravoHotelGame.WeaponAttachmentInfo
// Size: 0x318 (Inherited: 0x00)
struct FWeaponAttachmentInfo 
{
	struct TMap<None, None>                       AttachmentSlotUseInfo;                                       // 0x00(0x50)
	struct TMap<None, None>                       AllowedAttachmentList;                                       // 0x50(0x50)
	struct FName                                  Socket_WeaponSight;                                          // 0xa0(0x08)
	struct FName                                  Socket_FrontSightWithScope;                                  // 0xa8(0x08)
	struct FName                                  Socket_Rail;                                                 // 0xb0(0x08)
	struct FName                                  Socket_Grip;                                                 // 0xb8(0x08)
	struct FName                                  Socket_Magazine;                                             // 0xc0(0x08)
	struct FName                                  Socket_ButtStock;                                            // 0xc8(0x08)
	struct FName                                  Socket_MuzzleDevice;                                         // 0xd0(0x08)
	struct FName                                  Socket_Barrel;                                               // 0xd8(0x08)
	struct FName                                  Socket_TacticalAttachment;                                   // 0xe0(0x08)
	struct TSoftObjectPtr<FNone>                  Sight_FrontSightWithScope;                                   // 0xe8(0x28)
	struct TSoftObjectPtr<FNone>                  Sight_Rail;                                                  // 0x110(0x28)
	struct TMap<None, None>                       Meshes_Grip;                                                 // 0x138(0x50)
	struct TMap<None, None>                       Meshes_Magazine;                                             // 0x188(0x50)
	struct TMap<None, None>                       Meshes_Stock;                                                // 0x1d8(0x50)
	struct TMap<None, None>                       Meshes_MuzzleDevice;                                         // 0x228(0x50)
	struct TMap<None, None>                       Meshes_Barrel;                                               // 0x278(0x50)
	struct TMap<None, None>                       OverrideReloadInfos;                                         // 0x2c8(0x50)
};

// ScriptStruct BravoHotelGame.WeaponAttachmentUseInfoMap
// Size: 0x50 (Inherited: 0x00)
struct FWeaponAttachmentUseInfoMap 
{
	struct TMap<None, None>                       AttachmentUseInfo;                                           // 0x00(0x50)
};

// ScriptStruct BravoHotelGame.BravoHotelWeaponInfoFPSK
// Size: 0x220 (Inherited: 0x08)
struct FBravoHotelWeaponInfoFPSK : FTableRowBase 
{
	struct TSoftObjectPtr<FNone>                  FPSK_SkelMesh_FPP;                                           // 0x08(0x28)
	struct TArray<None>                           FPSK_Materials_FPP;                                          // 0x30(0x10)
	struct FNone*                                 FPSK_AnimInstance_FPP;                                       // 0x40(0x08)
	struct TSoftObjectPtr<FNone>                  FPSK_SkelMesh_TPP;                                           // 0x48(0x28)
	struct TArray<None>                           FPSK_Materials_TPP;                                          // 0x70(0x10)
	struct FNone*                                 FPSK_AnimInstance_TPP;                                       // 0x80(0x08)
	struct TMap<None, None>                       FPSK_GripAnims;                                              // 0x88(0x50)
	float                                         FPSK_ADSSpeed;                                               // 0xd8(0x04)
	char                                          UnknownDataDC[0x4];                                          // 0xdc(0x04)
	struct TMap<None, None>                       FPSK_CameraDistance;                                         // 0xe0(0x50)
	struct TMap<None, None>                       FPSK_ScopeAngleOnMove;                                       // 0x130(0x50)
	struct TMap<None, None>                       FPSK_ClippingDistance;                                       // 0x180(0x50)
	struct TMap<None, None>                       FPSK_SightClasses;                                           // 0x1d0(0x50)
};

// ScriptStruct BravoHotelGame.BravoHotelWeaponInfoADS
// Size: 0x1f0 (Inherited: 0x08)
struct FBravoHotelWeaponInfoADS : FTableRowBase 
{
	char                                          bEnableADS : 0;                                              // 0x08(0x01)
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
	struct TMap<None, None>                       WeaponLocationList;                                          // 0x10(0x50)
	struct TMap<None, None>                       WeaponRotationList;                                          // 0x60(0x50)
	struct TMap<None, None>                       WeaponScaleList;                                             // 0xb0(0x50)
	struct TMap<None, None>                       FieldOfViewList;                                             // 0x100(0x50)
	struct TMap<None, None>                       SightRotationList;                                           // 0x150(0x50)
	struct TMap<None, None>                       SightScaleList;                                              // 0x1a0(0x50)
};

// ScriptStruct BravoHotelGame.S_ReplayInfo
// Size: 0x30 (Inherited: 0x00)
struct FS_ReplayInfo 
{
	struct FString                                ReplayName;                                                  // 0x00(0x10)
	struct FString                                FriendlyName;                                                // 0x10(0x10)
	struct FNone                                  Timestamp;                                                   // 0x20(0x08)
	uint32_t                                      LengthInMS;                                                  // 0x28(0x04)
	char                                          bIsValid : 0;                                                // 0x2c(0x01)
	char                                          UnknownData2C[0x4];                                          // 0x2c(0x04)
};

// ScriptStruct BravoHotelGame.RewardItemInfo
// Size: 0x08 (Inherited: 0x00)
struct FRewardItemInfo 
{
	uint32_t                                      table_index;                                                 // 0x00(0x04)
	uint32_t                                      Count;                                                       // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.MatchResultUIInfo
// Size: 0x50 (Inherited: 0x00)
struct FMatchResultUIInfo 
{
	uint32_t                                      FinalRank;                                                   // 0x00(0x04)
	uint32_t                                      GainedRP;                                                    // 0x04(0x04)
	struct FNone                                  GoldPoint;                                                   // 0x08(0x10)
	struct TArray<None>                           RewardItemList;                                              // 0x18(0x10)
	struct TArray<None>                           DropedItemList;                                              // 0x28(0x10)
	struct TArray<None>                           Message;                                                     // 0x38(0x10)
	float                                         TotalDamage;                                                 // 0x48(0x04)
	float                                         LifeTime;                                                    // 0x4c(0x04)
};

// ScriptStruct BravoHotelGame.ResultMessageInfo
// Size: 0x08 (Inherited: 0x00)
struct FResultMessageInfo 
{
	uint32_t                                      Amount;                                                      // 0x00(0x04)
	enum class None                               Type;                                                        // 0x04(0x01)
	char                                          UnknownData5[0x3];                                           // 0x05(0x03)
};

// ScriptStruct BravoHotelGame.RewardPoint
// Size: 0x10 (Inherited: 0x00)
struct FRewardPoint 
{
	uint32_t                                      RankPoint;                                                   // 0x00(0x04)
	uint32_t                                      KillPoint;                                                   // 0x04(0x04)
	uint32_t                                      HitPoint;                                                    // 0x08(0x04)
	uint32_t                                      SurvivalPoint;                                               // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.InventoryItemDetailInfo
// Size: 0x490 (Inherited: 0x08)
struct FInventoryItemDetailInfo : FTableRowBase 
{
	uint32_t                                      ID;                                                          // 0x08(0x04)
	enum class None                               ItemType;                                                    // 0x0c(0x01)
	char                                          bIsEquippable : 0;                                           // 0x0d(0x01)
	char                                          bIsMultiSlotWearable : 0;                                    // 0x0d(0x01)
	char                                          UnknownDataD[0x1];                                           // 0x0d(0x01)
	enum class None                               WearableItemType;                                            // 0x0e(0x01)
	char                                          UnknownDataF[0x1];                                           // 0x0f(0x01)
	struct TArray<None>                           AdditionalWearableSlot;                                      // 0x10(0x10)
	enum class None                               ConsumablesItemType;                                         // 0x20(0x01)
	enum class None                               SuperPeopleClassType;                                        // 0x21(0x01)
	char                                          UnknownData22[0x2];                                          // 0x22(0x02)
	uint32_t                                      ParentItemID;                                                // 0x24(0x04)
	enum class None                               LifeTimeType;                                                // 0x28(0x01)
	char                                          UnknownData29[0x3];                                          // 0x29(0x03)
	uint32_t                                      LimitOfTime;                                                 // 0x2c(0x04)
	uint32_t                                      LimitOfCount;                                                // 0x30(0x04)
	enum class None                               GenderType;                                                  // 0x34(0x01)
	char                                          UnknownData35[0x3];                                          // 0x35(0x03)
	float                                         Weight;                                                      // 0x38(0x04)
	enum class None                               Rarity;                                                      // 0x3c(0x01)
	char                                          UnknownData3D[0x3];                                          // 0x3d(0x03)
	uint32_t                                      CompareRating;                                               // 0x40(0x04)
	char                                          UnknownData44[0x4];                                          // 0x44(0x04)
	struct FString                                ItemSubType;                                                 // 0x48(0x10)
	enum class None                               ItemPingType;                                                // 0x58(0x01)
	char                                          bIsBackpackPuttable : 0;                                     // 0x59(0x01)
	char                                          bIsDroppable : 0;                                            // 0x59(0x01)
	char                                          bIsDropToFloor : 0;                                          // 0x59(0x01)
	char                                          bIsBindable : 0;                                             // 0x59(0x01)
	char                                          UnknownData59[0x3];                                          // 0x59(0x03)
	uint32_t                                      MaxStack;                                                    // 0x5c(0x04)
	float                                         PickupIntervalTime;                                          // 0x60(0x04)
	char                                          CorpseDrop : 0;                                              // 0x64(0x01)
	char                                          UnknownData64[0x4];                                          // 0x64(0x04)
	struct FName                                  LimitedCollectionType;                                       // 0x68(0x08)
	enum class None                               RewardType;                                                  // 0x70(0x01)
	char                                          bInStrongbox : 0;                                            // 0x71(0x01)
	char                                          UnknownData71[0x3];                                          // 0x71(0x03)
	uint32_t                                      RandomPackageID;                                             // 0x74(0x04)
	uint32_t                                      PickupOutlineStencilValue;                                   // 0x78(0x04)
	char                                          UnknownData7C[0x4];                                          // 0x7c(0x04)
	struct TArray<None>                           TypeTags;                                                    // 0x80(0x10)
	enum class None                               DevelopmentStatus;                                           // 0x90(0x01)
	char                                          UnknownData91[0x7];                                          // 0x91(0x07)
	struct FText                                  DisplayName;                                                 // 0x98(0x18)
	struct FText                                  DisplayShortName;                                            // 0xb0(0x18)
	struct FText                                  Description;                                                 // 0xc8(0x18)
	struct TMap<None, None>                       DescriptionValues;                                           // 0xe0(0x50)
	struct FName                                  ItemSortType;                                                // 0x130(0x08)
	uint32_t                                      SortOrder;                                                   // 0x138(0x04)
	char                                          UnknownData13C[0x4];                                         // 0x13c(0x04)
	struct FText                                  DisplayItemType;                                             // 0x140(0x18)
	struct FName                                  TopRecipe;                                                   // 0x158(0x08)
	struct TSoftObjectPtr<FNone>                  SlotIconTexture_PaperSprite;                                 // 0x160(0x28)
	struct TSoftObjectPtr<FNone>                  DragIconTexture_PaperSprite;                                 // 0x188(0x28)
	struct TSoftObjectPtr<FNone>                  EnableItemTexture_PaperSprite;                               // 0x1b0(0x28)
	struct FNone*                                 MaterialPingIcon;                                            // 0x1d8(0x08)
	char                                          IsBundleItem : 0;                                            // 0x1e0(0x01)
	char                                          UnknownData1E0[0x4];                                         // 0x1e0(0x04)
	struct FName                                  ItemEffectID;                                                // 0x1e4(0x08)
	char                                          bOverridePickupScale : 0;                                    // 0x1ec(0x01)
	char                                          UnknownData1EC[0x4];                                         // 0x1ec(0x04)
	struct FNone                                  OverlapBoxExtent;                                            // 0x1f0(0x0c)
	float                                         TraceSphereRadius;                                           // 0x1fc(0x04)
	struct FNone                                  WorldStaticMeshLoc;                                          // 0x200(0x0c)
	struct FNone                                  WorldStaticMeshRot;                                          // 0x20c(0x0c)
	struct FNone                                  WorldStaticMeshScale;                                        // 0x218(0x0c)
	struct FNone                                  WorldSkelMeshLoc;                                            // 0x224(0x0c)
	struct FNone                                  WorldSkelMeshRot;                                            // 0x230(0x0c)
	struct FNone                                  WorldSkelMeshScale;                                          // 0x23c(0x0c)
	char                                          bUseStaticMesh : 0;                                          // 0x248(0x01)
	char                                          UnknownData248[0x8];                                         // 0x248(0x08)
	struct TSoftObjectPtr<FNone>                  WorldStaticMesh;                                             // 0x250(0x28)
	struct TSoftObjectPtr<FNone>                  WorldSkeletalMesh;                                           // 0x278(0x28)
	float                                         NetCullDistanceSquared;                                      // 0x2a0(0x04)
	float                                         DrawDistance;                                                // 0x2a4(0x04)
	struct TSoftObjectPtr<FNone>                  AudioEvent;                                                  // 0x2a8(0x28)
	struct TSoftClassPtr<UObject>                 EquippableItemClass;                                         // 0x2d0(0x28)
	struct FName                                  MutableUniqueKey;                                            // 0x2f8(0x08)
	char                                          bUseEquippedStaticMesh : 0;                                  // 0x300(0x01)
	char                                          UnknownData300[0x8];                                         // 0x300(0x08)
	struct TSoftObjectPtr<FNone>                  EquippedStaticMesh;                                          // 0x308(0x28)
	struct TSoftObjectPtr<FNone>                  EquippedSkeletalMesh;                                        // 0x330(0x28)
	struct TArray<None>                           OverrideMeshMaterials;                                       // 0x358(0x10)
	struct FName                                  WeaponId;                                                    // 0x368(0x08)
	enum class None                               WeaponType;                                                  // 0x370(0x01)
	enum class None                               ThrowingWeaponType;                                          // 0x371(0x01)
	enum class None                               WeaponAttachmentType;                                        // 0x372(0x01)
	enum class None                               WeaponAttachmentItem;                                        // 0x373(0x01)
	char                                          UnknownData374[0x4];                                         // 0x374(0x04)
	struct FNone                                  Ability;                                                     // 0x378(0xa8)
	struct FNone                                  AttachmentInfo;                                              // 0x420(0x48)
	struct TArray<None>                           EquipedBuffName;                                             // 0x468(0x10)
	struct TArray<None>                           UsingBuffName;                                               // 0x478(0x10)
	char                                          bMovableDuringUse : 0;                                       // 0x488(0x01)
	char                                          UnknownData488[0x1];                                         // 0x488(0x01)
	char                                          bIsImportant : 0;                                            // 0x489(0x01)
	char                                          UnknownData489[0x7];                                         // 0x489(0x07)
};

// ScriptStruct BravoHotelGame.BravoHotelAttachmentInfo
// Size: 0x48 (Inherited: 0x00)
struct FBravoHotelAttachmentInfo 
{
	float                                         ReloadDurationMultiplier;                                    // 0x00(0x04)
	float                                         ADSSpeedMultiplier;                                          // 0x04(0x04)
	float                                         AmmoSpeedMultiplier;                                         // 0x08(0x04)
	float                                         AutoFireRateMultiplier;                                      // 0x0c(0x04)
	float                                         BaseSpreadMultiplier;                                        // 0x10(0x04)
	float                                         FiringBaseSpreadMultiplier;                                  // 0x14(0x04)
	float                                         DeviationMultiplier;                                         // 0x18(0x04)
	float                                         RecoilHorizontalMultiplier;                                  // 0x1c(0x04)
	float                                         RecoilVerticalMultiplier;                                    // 0x20(0x04)
	float                                         RecoilRecoveryMultiplier;                                    // 0x24(0x04)
	float                                         DecreaseRecoilPatternScale;                                  // 0x28(0x04)
	float                                         AnimationKickMultiplier;                                     // 0x2c(0x04)
	float                                         SwayMultiplier;                                              // 0x30(0x04)
	char                                          UnknownData34[0x4];                                          // 0x34(0x04)
	struct TArray<None>                           ZeroingDistance;                                             // 0x38(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelAbilityModifier
// Size: 0xa8 (Inherited: 0x00)
struct FBravoHotelAbilityModifier 
{
	float                                         Health;                                                      // 0x00(0x04)
	float                                         Usablehealth;                                                // 0x04(0x04)
	float                                         Bandage;                                                     // 0x08(0x04)
	float                                         Adrenaline;                                                  // 0x0c(0x04)
	uint32_t                                      Capacity;                                                    // 0x10(0x04)
	float                                         Fuel;                                                        // 0x14(0x04)
	float                                         DereaseReloadTimePercent;                                    // 0x18(0x04)
	float                                         MoveSpeedPercent;                                            // 0x1c(0x04)
	struct FNone                                  ArmorInfo;                                                   // 0x20(0x58)
	struct FNone                                  Detail;                                                      // 0x78(0x30)
};

// ScriptStruct BravoHotelGame.BravoHotelAbilityModifierDetail
// Size: 0x30 (Inherited: 0x00)
struct FBravoHotelAbilityModifierDetail 
{
	float                                         CastingSeconds;                                              // 0x00(0x04)
	struct FName                                  UseableMeshAttachSlotName;                                   // 0x04(0x08)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FNone                                  AnimSlot_Stand;                                              // 0x10(0x10)
	struct FNone                                  AnimSlot_Prone;                                              // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelAbilityModifierArmor
// Size: 0x58 (Inherited: 0x00)
struct FBravoHotelAbilityModifierArmor 
{
	float                                         Durability;                                                  // 0x00(0x04)
	float                                         Armor;                                                       // 0x04(0x04)
	struct TSet<None>                             CoverBones;                                                  // 0x08(0x50)
};

// ScriptStruct BravoHotelGame.SelecteSearchMaterialItemInfo
// Size: 0x10 (Inherited: 0x00)
struct FSelecteSearchMaterialItemInfo 
{
	struct FName                                  TopRecipeItem;                                               // 0x00(0x08)
	struct FName                                  SelectRecipeItem;                                            // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.TestPoint
// Size: 0x58 (Inherited: 0x00)
struct FTestPoint 
{
	struct FNone                                  StartPoint;                                                  // 0x00(0x08)
	struct FNone                                  EndPoint;                                                    // 0x08(0x08)
	struct FNone                                  CenterPos;                                                   // 0x10(0x08)
	struct FNone                                  StartStartPos;                                               // 0x18(0x08)
	struct FNone                                  StartEndPos;                                                 // 0x20(0x08)
	struct FNone                                  EndStartPos;                                                 // 0x28(0x08)
	struct FNone                                  EndEndPos;                                                   // 0x30(0x08)
	struct FNone                                  WorldStartPoint;                                             // 0x38(0x08)
	struct FNone                                  WorldEndPoint;                                               // 0x40(0x08)
	struct FNone                                  WorldSize;                                                   // 0x48(0x08)
	struct FNone                                  WorldCenter;                                                 // 0x50(0x08)
};

// ScriptStruct BravoHotelGame.DediDataInfoBase
// Size: 0x01 (Inherited: 0x00)
struct FDediDataInfoBase 
{
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.DediDataCharacterInfo
// Size: 0x188 (Inherited: 0x01)
struct FDediDataCharacterInfo : FDediDataInfoBase 
{
	struct FNone                                  KeyInfo;                                                     // 0x00(0x28)
	uint32_t                                      ClassIndex;                                                  // 0x28(0x04)
	uint32_t                                      CurrentWeaponID;                                             // 0x2c(0x04)
	uint32_t                                      FinalRank;                                                   // 0x30(0x04)
	uint32_t                                      GainRP;                                                      // 0x34(0x04)
	struct FNone                                  TotalData;                                                   // 0x38(0x70)
	char                                          UnknownDataA9[0xdf];                                         // 0xa9(0xdf)
};

// ScriptStruct BravoHotelGame.CharacterBaseInfo
// Size: 0x70 (Inherited: 0x00)
struct FCharacterBaseInfo 
{
	uint32_t                                      KillCount;                                                   // 0x00(0x04)
	uint32_t                                      AIKillCount;                                                 // 0x04(0x04)
	uint32_t                                      SequenceKillCount;                                           // 0x08(0x04)
	uint32_t                                      TempSequenceKillCount;                                       // 0x0c(0x04)
	uint32_t                                      DeathCount;                                                  // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct FNone                                  DeathTime;                                                   // 0x18(0x08)
	struct FNone                                  LastKillTime;                                                // 0x20(0x08)
	float                                         LifeTime;                                                    // 0x28(0x04)
	float                                         MoveDistance;                                                // 0x2c(0x04)
	uint32_t                                      HeadShotKillCount;                                           // 0x30(0x04)
	uint32_t                                      BeHeadShotedCount;                                           // 0x34(0x04)
	uint32_t                                      BeKnockOutedCount;                                           // 0x38(0x04)
	uint32_t                                      KnockOutCount;                                               // 0x3c(0x04)
	uint32_t                                      KnockOutHeadShotCount;                                       // 0x40(0x04)
	uint32_t                                      BeKnockOutedHeadShotCount;                                   // 0x44(0x04)
	uint32_t                                      RecoveryCount;                                               // 0x48(0x04)
	uint32_t                                      BeRecoveryedCount;                                           // 0x4c(0x04)
	uint32_t                                      TeamKillCount;                                               // 0x50(0x04)
	uint32_t                                      SelfKillCount;                                               // 0x54(0x04)
	float                                         Damage;                                                      // 0x58(0x04)
	float                                         BeDamaged;                                                   // 0x5c(0x04)
	uint32_t                                      UseSkillBookItemCount;                                       // 0x60(0x04)
	uint32_t                                      UseHealItemCount;                                            // 0x64(0x04)
	uint32_t                                      UseBoostItemCount;                                           // 0x68(0x04)
	char                                          UnknownData6C[0x4];                                          // 0x6c(0x04)
};

// ScriptStruct BravoHotelGame.DataKeyInfo
// Size: 0x28 (Inherited: 0x00)
struct FDataKeyInfo 
{
	struct FString                                CharacterIndex;                                              // 0x00(0x10)
	struct FString                                NickName;                                                    // 0x10(0x10)
	char                                          bIsAI : 0;                                                   // 0x20(0x01)
	char                                          UnknownData20[0x8];                                          // 0x20(0x08)
};

// ScriptStruct BravoHotelGame.ReplayReportVictimAndSuspectLogData
// Size: 0x48 (Inherited: 0x00)
struct FReplayReportVictimAndSuspectLogData 
{
	struct FNone*                                 VictimDamageTypeClass;                                       // 0x00(0x08)
	struct FString                                VictimHitBone;                                               // 0x08(0x10)
	struct FString                                SuspectIpAddress;                                            // 0x18(0x10)
	struct FString                                SuspectMaxItemID;                                            // 0x28(0x10)
	uint32_t                                      SuspectDistance;                                             // 0x38(0x04)
	uint32_t                                      SuspectMaxDistance;                                          // 0x3c(0x04)
	uint32_t                                      SuspectDamageCount;                                          // 0x40(0x04)
	uint32_t                                      SuspectHeadShotDamageCount;                                  // 0x44(0x04)
};

// ScriptStruct BravoHotelGame.RepDiedInfo
// Size: 0x60 (Inherited: 0x00)
struct FRepDiedInfo 
{
	struct FNone                                  Attacker;                                                    // 0x00(0x18)
	struct FNone                                  KnockOut;                                                    // 0x18(0x18)
	struct FNone*                                 Killer;                                                      // 0x30(0x08)
	struct FNone*                                 SubKiller;                                                   // 0x38(0x08)
	struct FNone*                                 Died;                                                        // 0x40(0x08)
	struct TArray<None>                           Assist;                                                      // 0x48(0x10)
	char                                          IsFinallyKill : 0;                                           // 0x58(0x01)
	char                                          UnknownData58[0x2];                                          // 0x58(0x02)
	uint16_t                                      KillCount;                                                   // 0x5a(0x02)
	uint16_t                                      AliveCount;                                                  // 0x5c(0x02)
	uint16_t                                      KillDistance;                                                // 0x5e(0x02)
};

// ScriptStruct BravoHotelGame.RepCharacterInfo
// Size: 0x18 (Inherited: 0x00)
struct FRepCharacterInfo 
{
	struct FNone*                                 PlayerState;                                                 // 0x00(0x08)
	uint32_t                                      DamageTypeID;                                                // 0x08(0x04)
	uint16_t                                      WeaponIndex;                                                 // 0x0c(0x02)
	uint16_t                                      HitPointIdx;                                                 // 0x0e(0x02)
	float                                         DamageAmount;                                                // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.DataEventBase
// Size: 0x58 (Inherited: 0x00)
struct FDataEventBase 
{
	char                                          UnknownData0[0x58];                                          // 0x00(0x58)
};

// ScriptStruct BravoHotelGame.DataEventClientGameIllegalUsers
// Size: 0x2d8 (Inherited: 0x58)
struct FDataEventClientGameIllegalUsers : FDataEventBase 
{
	struct FNone                                  ReportUserData;                                              // 0x58(0x280)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameIllegalReportUserData
// Size: 0x280 (Inherited: 0x00)
struct FAnalysisClientGameIllegalReportUserData 
{
	struct FNone                                  report_info;                                                 // 0x00(0x38)
	struct FNone                                  victim_info;                                                 // 0x38(0x128)
	struct FNone                                  suspect_info;                                                // 0x160(0x120)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameIllegalSuspectCharacterData
// Size: 0x120 (Inherited: 0x00)
struct FAnalysisClientGameIllegalSuspectCharacterData 
{
	uint32_t                                      loc_x;                                                       // 0x00(0x04)
	uint32_t                                      loc_y;                                                       // 0x04(0x04)
	uint32_t                                      loc_z;                                                       // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FString                                UserID;                                                      // 0x10(0x10)
	struct FString                                NickName;                                                    // 0x20(0x10)
	uint32_t                                      ClassIndex;                                                  // 0x30(0x04)
	uint32_t                                      Level;                                                       // 0x34(0x04)
	uint32_t                                      max_hp;                                                      // 0x38(0x04)
	uint32_t                                      current_hp;                                                  // 0x3c(0x04)
	uint32_t                                      current_max_hp;                                              // 0x40(0x04)
	char                                          UnknownData44[0x4];                                          // 0x44(0x04)
	struct TArray<None>                           skill_perk_id;                                               // 0x48(0x10)
	struct TArray<None>                           skill_perk_cooltime_id;                                      // 0x58(0x10)
	struct FNone                                  Weapon;                                                      // 0x68(0x60)
	struct FString                                equip_helmet;                                                // 0xc8(0x10)
	uint32_t                                      helmet_durability;                                           // 0xd8(0x04)
	char                                          UnknownDataDC[0x4];                                          // 0xdc(0x04)
	struct FString                                equip_armour;                                                // 0xe0(0x10)
	uint32_t                                      armour_durability;                                           // 0xf0(0x04)
	uint32_t                                      fire_type;                                                   // 0xf4(0x04)
	uint32_t                                      zoom_type;                                                   // 0xf8(0x04)
	uint32_t                                      Distance;                                                    // 0xfc(0x04)
	uint32_t                                      max_distance;                                                // 0x100(0x04)
	uint32_t                                      damage_count;                                                // 0x104(0x04)
	uint32_t                                      headshot_damage_count;                                       // 0x108(0x04)
	char                                          UnknownData10C[0x4];                                         // 0x10c(0x04)
	struct FString                                ip;                                                          // 0x110(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameIllegalSuspectWeaponData
// Size: 0x60 (Inherited: 0x00)
struct FAnalysisClientGameIllegalSuspectWeaponData 
{
	uint32_t                                      item_id;                                                     // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                item_name;                                                   // 0x08(0x10)
	char                                          is_expert_weapon : 0;                                        // 0x18(0x01)
	char                                          UnknownData18[0x8];                                          // 0x18(0x08)
	struct FString                                max_item_id;                                                 // 0x20(0x10)
	uint32_t                                      grade;                                                       // 0x30(0x04)
	uint32_t                                      enchant;                                                     // 0x34(0x04)
	uint32_t                                      perk_id_2;                                                   // 0x38(0x04)
	uint32_t                                      perk_id_3;                                                   // 0x3c(0x04)
	uint32_t                                      perk_id_4;                                                   // 0x40(0x04)
	uint32_t                                      perk_id_5;                                                   // 0x44(0x04)
	struct FNone                                  parts_id;                                                    // 0x48(0x14)
	char                                          UnknownData5C[0x4];                                          // 0x5c(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisPartsData
// Size: 0x14 (Inherited: 0x00)
struct FAnalysisPartsData 
{
	uint32_t                                      grip;                                                        // 0x00(0x04)
	uint32_t                                      magazine;                                                    // 0x04(0x04)
	uint32_t                                      muzzledevice;                                                // 0x08(0x04)
	uint32_t                                      sight;                                                       // 0x0c(0x04)
	uint32_t                                      stock;                                                       // 0x10(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameIllegalVictimCharacterData
// Size: 0x128 (Inherited: 0x00)
struct FAnalysisClientGameIllegalVictimCharacterData 
{
	uint32_t                                      team_id;                                                     // 0x00(0x04)
	uint32_t                                      team_cnt;                                                    // 0x04(0x04)
	uint32_t                                      current_rank;                                                // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FString                                UserID;                                                      // 0x10(0x10)
	struct FString                                NickName;                                                    // 0x20(0x10)
	uint32_t                                      ClassIndex;                                                  // 0x30(0x04)
	uint32_t                                      Level;                                                       // 0x34(0x04)
	uint32_t                                      current_hp;                                                  // 0x38(0x04)
	uint32_t                                      max_hp;                                                      // 0x3c(0x04)
	uint32_t                                      loc_x;                                                       // 0x40(0x04)
	uint32_t                                      loc_y;                                                       // 0x44(0x04)
	uint32_t                                      loc_z;                                                       // 0x48(0x04)
	uint32_t                                      isinbluezone;                                                // 0x4c(0x04)
	uint32_t                                      isinredzone;                                                 // 0x50(0x04)
	char                                          UnknownData54[0x4];                                          // 0x54(0x04)
	struct FString                                damage_type;                                                 // 0x58(0x10)
	uint32_t                                      current_max_hp;                                              // 0x68(0x04)
	char                                          UnknownData6C[0x4];                                          // 0x6c(0x04)
	struct FString                                hit_bone;                                                    // 0x70(0x10)
	uint32_t                                      Damage;                                                      // 0x80(0x04)
	char                                          UnknownData84[0x4];                                          // 0x84(0x04)
	struct TArray<None>                           skill_perk_id;                                               // 0x88(0x10)
	struct TArray<None>                           skill_perk_cooltime_id;                                      // 0x98(0x10)
	struct FNone                                  Weapon;                                                      // 0xa8(0x48)
	struct FString                                equip_helmet;                                                // 0xf0(0x10)
	uint32_t                                      helmet_durability;                                           // 0x100(0x04)
	char                                          UnknownData104[0x4];                                         // 0x104(0x04)
	struct FString                                equip_armour;                                                // 0x108(0x10)
	uint32_t                                      armour_durability;                                           // 0x118(0x04)
	uint32_t                                      fire_type;                                                   // 0x11c(0x04)
	uint32_t                                      zoom_type;                                                   // 0x120(0x04)
	char                                          UnknownData124[0x4];                                         // 0x124(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameIllegalVictimWeaponData
// Size: 0x48 (Inherited: 0x00)
struct FAnalysisClientGameIllegalVictimWeaponData 
{
	uint32_t                                      item_id;                                                     // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                item_name;                                                   // 0x08(0x10)
	char                                          is_expert_weapon : 0;                                        // 0x18(0x01)
	char                                          UnknownData18[0x4];                                          // 0x18(0x04)
	uint32_t                                      grade;                                                       // 0x1c(0x04)
	uint32_t                                      enchant;                                                     // 0x20(0x04)
	uint32_t                                      perk_id_2;                                                   // 0x24(0x04)
	uint32_t                                      perk_id_3;                                                   // 0x28(0x04)
	uint32_t                                      perk_id_4;                                                   // 0x2c(0x04)
	uint32_t                                      perk_id_5;                                                   // 0x30(0x04)
	struct FNone                                  parts_id;                                                    // 0x34(0x14)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameIllegalReportData
// Size: 0x38 (Inherited: 0x00)
struct FAnalysisClientGameIllegalReportData 
{
	uint32_t                                      report_type;                                                 // 0x00(0x04)
	uint32_t                                      report_index;                                                // 0x04(0x04)
	struct TArray<None>                           illegal_program_index;                                       // 0x08(0x10)
	struct FString                                replay_version;                                              // 0x18(0x10)
	struct FString                                replay_filename;                                             // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelMovePoint
// Size: 0x20 (Inherited: 0x00)
struct FBravoHotelMovePoint 
{
	struct FName                                  AreaName;                                                    // 0x00(0x08)
	struct FNone                                  TargetPoint;                                                 // 0x08(0x0c)
	struct FNone                                  TargetRotate;                                                // 0x14(0x0c)
};

// ScriptStruct BravoHotelGame.MatchEndSimpleResult
// Size: 0xa8 (Inherited: 0x00)
struct FMatchEndSimpleResult 
{
	char                                          bAllDead : 0;                                                // 0x00(0x01)
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	struct FNone*                                 Killer;                                                      // 0x08(0x08)
	char                                          IsWeaponKill : 0;                                            // 0x10(0x01)
	char                                          UnknownData10[0x8];                                          // 0x10(0x08)
	struct FText                                  WeaponName;                                                  // 0x18(0x18)
	uint32_t                                      WeaponLevel;                                                 // 0x30(0x04)
	uint32_t                                      WeaponRarity;                                                // 0x34(0x04)
	struct FNone                                  DamageTypeRow;                                               // 0x38(0x68)
	char                                          bDeathByHeadshot : 0;                                        // 0xa0(0x01)
	char                                          UnknownDataA0[0x1];                                          // 0xa0(0x01)
	char                                          Replicate : 0;                                               // 0xa1(0x01)
	char                                          UnknownDataA1[0x7];                                          // 0xa1(0x07)
};

// ScriptStruct BravoHotelGame.EquipmentInfo
// Size: 0x0c (Inherited: 0x00)
struct FEquipmentInfo 
{
	char                                          slot_num;                                                    // 0x00(0x01)
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
	uint32_t                                      table_index;                                                 // 0x04(0x04)
	uint32_t                                      Count;                                                       // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.RepRadialDamageInfo
// Size: 0x58 (Inherited: 0x00)
struct FRepRadialDamageInfo 
{
	float                                         BaseDamage;                                                  // 0x00(0x04)
	float                                         MinDamage;                                                   // 0x04(0x04)
	float                                         DamageInnerRadius;                                           // 0x08(0x04)
	float                                         DamageOuterRadius;                                           // 0x0c(0x04)
	float                                         DamageFalloff;                                               // 0x10(0x04)
	float                                         ImpulsePower;                                                // 0x14(0x04)
	char                                          ImpulseFalloff;                                              // 0x18(0x01)
	char                                          UnknownData19[0x7];                                          // 0x19(0x07)
	struct FNone*                                 DamageTypeClass;                                             // 0x20(0x08)
	struct FNone                                  Origin;                                                      // 0x28(0x0c)
	char                                          UnknownData34[0x4];                                          // 0x34(0x04)
	struct FNone*                                 DamageCauser;                                                // 0x38(0x08)
	struct FNone*                                 Instigator;                                                  // 0x40(0x08)
	struct TArray<None>                           RepHitResults;                                               // 0x48(0x10)
};

// ScriptStruct BravoHotelGame.RepHitResultInfo
// Size: 0x28 (Inherited: 0x00)
struct FRepHitResultInfo 
{
	struct FNone*                                 DamageTarget;                                                // 0x00(0x08)
	struct FNone*                                 HitComponent;                                                // 0x08(0x08)
	uint16_t                                      BoneIndex;                                                   // 0x10(0x02)
	uint16_t                                      ExtraIndex;                                                  // 0x12(0x02)
	struct FNone                                  ImpactPoint;                                                 // 0x14(0x0c)
	float                                         PenetrationDepth;                                            // 0x20(0x04)
	char                                          UnknownData24[0x4];                                          // 0x24(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelBlueZoneInfo
// Size: 0x1a8 (Inherited: 0x08)
struct FBravoHotelBlueZoneInfo : FTableRowBase 
{
	struct FNone                                  PlayZoneData;                                                // 0x08(0x188)
	struct TArray<None>                           BattleRoyalePhaseInfo;                                       // 0x190(0x10)
	struct FName                                  RowName_AddPerkInfos;                                        // 0x1a0(0x08)
};

// ScriptStruct BravoHotelGame.BattleRoyalPhaseInfo
// Size: 0xb8 (Inherited: 0x00)
struct FBattleRoyalPhaseInfo 
{
	float                                         DelayTime;                                                   // 0x00(0x04)
	float                                         WaitingTime;                                                 // 0x04(0x04)
	float                                         ShrinkTime;                                                  // 0x08(0x04)
	float                                         TargetCircleRate;                                            // 0x0c(0x04)
	float                                         DamagePerSecondOutOfCircle;                                  // 0x10(0x04)
	float                                         CriticalTimeLimitTime;                                       // 0x14(0x04)
	struct TArray<None>                           TransportProbabilities;                                      // 0x18(0x10)
	float                                         TransportStartingAddValue;                                   // 0x28(0x04)
	char                                          UsingFixTransportAltitude : 0;                               // 0x2c(0x01)
	char                                          UnknownData2C[0x4];                                          // 0x2c(0x04)
	float                                         FixTransportAltitude;                                        // 0x30(0x04)
	float                                         TransportAltitude;                                           // 0x34(0x04)
	uint32_t                                      TransportMinCount;                                           // 0x38(0x04)
	uint32_t                                      TransportMaxCount;                                           // 0x3c(0x04)
	struct FName                                  TransportRandomItemKey;                                      // 0x40(0x08)
	char                                          bUsingWeightMap : 0;                                         // 0x48(0x01)
	char                                          UnknownData48[0x4];                                          // 0x48(0x04)
	float                                         LocalDeviation;                                              // 0x4c(0x04)
	struct FNone                                  PersonalSupplyPhaseInfo;                                     // 0x50(0x30)
	char                                          EnableUsingDelayAddPerk : 0;                                 // 0x80(0x01)
	char                                          UnknownData80[0x8];                                          // 0x80(0x08)
	struct TArray<None>                           AddPerkInfos;                                                // 0x88(0x10)
	char                                          UnknownData98[0x20];                                         // 0x98(0x20)
};

// ScriptStruct BravoHotelGame.AddPerkInfo
// Size: 0x18 (Inherited: 0x00)
struct FAddPerkInfo 
{
	float                                         MinTime;                                                     // 0x00(0x04)
	float                                         MaxTime;                                                     // 0x04(0x04)
	struct TArray<None>                           LevelUpWeights;                                              // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.PerkLevelUpWeight
// Size: 0x20 (Inherited: 0x00)
struct FPerkLevelUpWeight 
{
	uint32_t                                      LevelCount;                                                  // 0x00(0x04)
	float                                         Weight;                                                      // 0x04(0x04)
	float                                         Beginner_Weight;                                             // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct TArray<None>                           Defeat_Weight;                                               // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.PersonalSupplyPhaseInfo
// Size: 0x30 (Inherited: 0x00)
struct FPersonalSupplyPhaseInfo 
{
	float                                         Probability;                                                 // 0x00(0x04)
	float                                         ProbabilityWithTeam;                                         // 0x04(0x04)
	float                                         MinAssignmentDelayTime;                                      // 0x08(0x04)
	float                                         AddAssignmentDelayTime;                                      // 0x0c(0x04)
	float                                         AssignmentRange;                                             // 0x10(0x04)
	float                                         MaxAssignmentRange;                                          // 0x14(0x04)
	float                                         Degree;                                                      // 0x18(0x04)
	char                                          UsingDistanceRate : 0;                                       // 0x1c(0x01)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
	float                                         MinAssignmentRangeRate;                                      // 0x20(0x04)
	float                                         MaxAssignmentRangeRate;                                      // 0x24(0x04)
	char                                          IndividualAssignmentDelayTime : 0;                           // 0x28(0x01)
	char                                          UnknownData28[0x4];                                          // 0x28(0x04)
	float                                         ItemSpawnVolume;                                             // 0x2c(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelPlayZoneData
// Size: 0x188 (Inherited: 0x00)
struct FBravoHotelPlayZoneData 
{
	uint32_t                                      ID;                                                          // 0x00(0x04)
	struct FName                                  MapKey;                                                      // 0x04(0x08)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FString                                DisplayName;                                                 // 0x10(0x10)
	struct FString                                AdditionalOption;                                            // 0x20(0x10)
	char                                          bCustomSetting : 0;                                          // 0x30(0x01)
	char                                          UnknownData30[0x1];                                          // 0x30(0x01)
	char                                          bDev : 0;                                                    // 0x31(0x01)
	char                                          UnknownData31[0x7];                                          // 0x31(0x07)
	struct FString                                CQRKey;                                                      // 0x38(0x10)
	uint32_t                                      MaxPlayerCount;                                              // 0x48(0x04)
	uint32_t                                      AutoStartPlayerCount;                                        // 0x4c(0x04)
	struct FNone                                  CircleCenterPos;                                             // 0x50(0x08)
	float                                         CircleRadius;                                                // 0x58(0x04)
	float                                         DamagePerSecondOutOfCircle;                                  // 0x5c(0x04)
	char                                          UsingInitialRandomCircle : 0;                                // 0x60(0x01)
	char                                          UnknownData60[0x4];                                          // 0x60(0x04)
	float                                         InitialRandomCircleRadius;                                   // 0x64(0x04)
	float                                         InitialRandomCircleDeviation;                                // 0x68(0x04)
	float                                         InitialRandomCircleMinAngle;                                 // 0x6c(0x04)
	float                                         InitialRandomCircleMaxAngle;                                 // 0x70(0x04)
	char                                          bShowFirstTarget : 0;                                        // 0x74(0x01)
	char                                          UnknownData74[0x1];                                          // 0x74(0x01)
	char                                          UsingWidgetMapDataForAircraft : 0;                           // 0x75(0x01)
	char                                          UnknownData75[0x1];                                          // 0x75(0x01)
	char                                          ShowMessage : 0;                                             // 0x76(0x01)
	char                                          UnknownData76[0x2];                                          // 0x76(0x02)
	struct TArray<None>                           PlayZoneImageList;                                           // 0x78(0x10)
	struct FText                                  BlueZoneTitle;                                               // 0x88(0x18)
	struct FText                                  BlueZoneDesc;                                                // 0xa0(0x18)
	struct TArray<None>                           PlayZoneInfos;                                               // 0xb8(0x10)
	uint32_t                                      SelectedPlayZoneInfoIndex;                                   // 0xc8(0x04)
	struct FName                                  RedZoneTableID;                                              // 0xcc(0x08)
	struct FName                                  ExpertWeaponTableID;                                         // 0xd4(0x08)
	float                                         AircraftAltitude;                                            // 0xdc(0x04)
	float                                         AircrafSpeed;                                                // 0xe0(0x04)
	uint32_t                                      OverrideUltimateLevel;                                       // 0xe4(0x04)
	struct FName                                  PerkClassRuleKey;                                            // 0xe8(0x08)
	struct FName                                  ResuscitationTypeKey;                                        // 0xf0(0x08)
	struct FName                                  AIItemSettingType;                                           // 0xf8(0x08)
	char                                          LastPhaseBlueZonePositionIsCenter : 0;                       // 0x100(0x01)
	char                                          UnknownData100[0x8];                                         // 0x100(0x08)
	struct TArray<None>                           ItemWorldSpawnDataTableList;                                 // 0x108(0x10)
	char                                          UsingOuterCircle : 0;                                        // 0x118(0x01)
	char                                          UnknownData118[0x4];                                         // 0x118(0x04)
	struct FNone                                  OuterCircleCenterPos;                                        // 0x11c(0x08)
	float                                         OuterCircleRadius;                                           // 0x124(0x04)
	float                                         OuterCircleDamageDelay;                                      // 0x128(0x04)
	float                                         OuterCircleDamagePerSecond;                                  // 0x12c(0x04)
	struct FNone                                  AreaItemSpawnList;                                           // 0x130(0x10)
	struct FNone                                  AreaOverrideStandardGroupDataList;                           // 0x140(0x10)
	struct TArray<None>                           AreaSpawnRateKeyList;                                        // 0x150(0x10)
	struct FName                                  BlueZoneSpawnRateKey;                                        // 0x160(0x08)
	struct TArray<None>                           VehicleAreaSpawnRateKeyList;                                 // 0x168(0x10)
	struct FName                                  VehicleBlueZoneSpawnRateKey;                                 // 0x178(0x08)
	char                                          bNotUseForceParachuteSeaLevelZ : 0;                          // 0x180(0x01)
	char                                          UnknownData180[0x8];                                         // 0x180(0x08)
};

// ScriptStruct BravoHotelGame.AreaOverrideStandardGroupDataList
// Size: 0x10 (Inherited: 0x00)
struct FAreaOverrideStandardGroupDataList 
{
	struct TArray<None>                           List;                                                        // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.AreaOverrideStandardGroupData
// Size: 0xb0 (Inherited: 0x00)
struct FAreaOverrideStandardGroupData 
{
	struct FNone                                  CenterLocation;                                              // 0x00(0x08)
	float                                         Radius;                                                      // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct TMap<None, None>                       ExchangeInfos;                                               // 0x10(0x50)
	struct TMap<None, None>                       Items;                                                       // 0x60(0x50)
};

// ScriptStruct BravoHotelGame.AreaItemSpawnDataList
// Size: 0x10 (Inherited: 0x00)
struct FAreaItemSpawnDataList 
{
	struct TArray<None>                           List;                                                        // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.AreaItemSpawnData
// Size: 0x20 (Inherited: 0x00)
struct FAreaItemSpawnData 
{
	struct FNone                                  CenterLocation;                                              // 0x00(0x08)
	float                                         Radius;                                                      // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct TArray<None>                           List;                                                        // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.ItemStandardGroupInfo
// Size: 0x10 (Inherited: 0x00)
struct FItemStandardGroupInfo 
{
	struct FName                                  RandomSpawnItemID;                                           // 0x00(0x08)
	uint32_t                                      MinCnt;                                                      // 0x08(0x04)
	uint32_t                                      MaxCnt;                                                      // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.PlayZoneInfo
// Size: 0x58 (Inherited: 0x00)
struct FPlayZoneInfo 
{
	struct TSoftObjectPtr<FNone>                  PlayZoneImage;                                               // 0x00(0x28)
	struct FText                                  PlayZoneTitle;                                               // 0x28(0x18)
	struct FText                                  PlayZoneDesc;                                                // 0x40(0x18)
};

// ScriptStruct BravoHotelGame.RepVehicleMovement
// Size: 0x38 (Inherited: 0x34)
struct FRepVehicleMovement : FRepMovement 
{
	char                                          bHasLinearVelocity : 0;                                      // 0x34(0x01)
	char                                          bHasAngularVelocity : 0;                                     // 0x34(0x01)
	char                                          UnknownData34[0x4];                                          // 0x34(0x04)
};

// ScriptStruct BravoHotelGame.RepWCLevelVisibilityInfo
// Size: 0x08 (Inherited: 0x00)
struct FRepWCLevelVisibilityInfo 
{
	uint32_t                                      TileIndex;                                                   // 0x00(0x04)
	char                                          bIsVisible : 0;                                              // 0x04(0x01)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.MaterialItemList
// Size: 0x10 (Inherited: 0x00)
struct FMaterialItemList 
{
	struct TArray<None>                           MaterialItemList;                                            // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.HideObjectInfo
// Size: 0x20 (Inherited: 0x00)
struct FHideObjectInfo 
{
	struct TArray<None>                           Objects;                                                     // 0x00(0x10)
	struct FString                                TagName;                                                     // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.HideObjectSingleInfo
// Size: 0x10 (Inherited: 0x00)
struct FHideObjectSingleInfo 
{
	char                                          UnknownData0[0x10];                                          // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.LevelStreamimgPriorityByZ
// Size: 0x08 (Inherited: 0x00)
struct FLevelStreamimgPriorityByZ 
{
	float                                         DistanceZ;                                                   // 0x00(0x04)
	uint32_t                                      MinPriority;                                                 // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.DummyInfo
// Size: 0x60 (Inherited: 0x00)
struct FDummyInfo 
{
	struct FNone                                  PingInfo;                                                    // 0x00(0x38)
	struct FNone                                  PingLocalLocation;                                           // 0x38(0x0c)
	char                                          UnknownData44[0x4];                                          // 0x44(0x04)
	struct TArray<None>                           RouteInfo;                                                   // 0x48(0x10)
	uint32_t                                      RegionPing;                                                  // 0x58(0x04)
	char                                          UnknownData5C[0x4];                                          // 0x5c(0x04)
};

// ScriptStruct BravoHotelGame.SeasonTierUpElement
// Size: 0xd0 (Inherited: 0x00)
struct FSeasonTierUpElement 
{
	uint32_t                                      TierID;                                                      // 0x00(0x04)
	uint32_t                                      NextTierID;                                                  // 0x04(0x04)
	struct FText                                  DisplayName;                                                 // 0x08(0x18)
	struct TSoftObjectPtr<FNone>                  UMGIcon;                                                     // 0x20(0x28)
	struct TSoftObjectPtr<FNone>                  CohIcon;                                                     // 0x48(0x28)
	uint32_t                                      Point;                                                       // 0x70(0x04)
	uint32_t                                      Rank;                                                        // 0x74(0x04)
	uint32_t                                      PromotePoint;                                                // 0x78(0x04)
	enum class None                               PromoteCondition;                                            // 0x7c(0x01)
	char                                          UnknownData7D[0x3];                                          // 0x7d(0x03)
	float                                         TargetValueToPromote;                                        // 0x80(0x04)
	uint32_t                                      PromoteRewardRP;                                             // 0x84(0x04)
	uint32_t                                      PromotePenaltyRP;                                            // 0x88(0x04)
	uint32_t                                      DemotePoint;                                                 // 0x8c(0x04)
	enum class None                               DemoteCondition;                                             // 0x90(0x01)
	char                                          UnknownData91[0x3];                                          // 0x91(0x03)
	float                                         TargetValueToDemote;                                         // 0x94(0x04)
	uint32_t                                      DemoteRewardRP;                                              // 0x98(0x04)
	uint32_t                                      DemotePenaltyRP;                                             // 0x9c(0x04)
	uint32_t                                      NextSeasonStartPoint;                                        // 0xa0(0x04)
	float                                         FirstKillRP;                                                 // 0xa4(0x04)
	float                                         KillRP;                                                      // 0xa8(0x04)
	float                                         AIKillRP;                                                    // 0xac(0x04)
	float                                         FirstResurrectionRP;                                         // 0xb0(0x04)
	float                                         ResurrectionRP;                                              // 0xb4(0x04)
	float                                         AssistRP;                                                    // 0xb8(0x04)
	float                                         SaveRP;                                                      // 0xbc(0x04)
	float                                         MatchRankMinRP;                                              // 0xc0(0x04)
	float                                         MatchRankMaxRP;                                              // 0xc4(0x04)
	float                                         MatchRankRPZeroRate;                                         // 0xc8(0x04)
	float                                         TotalMaxRP;                                                  // 0xcc(0x04)
};

// ScriptStruct BravoHotelGame.ExpertWeaponPingInfo
// Size: 0x28 (Inherited: 0x00)
struct FExpertWeaponPingInfo 
{
	uint32_t                                      PingIndex;                                                   // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FNone*                                 ExpertWeaponItem;                                            // 0x08(0x08)
	struct FNone*                                 LocationActor;                                               // 0x10(0x08)
	struct FNone*                                 Image;                                                       // 0x18(0x08)
	char                                          Rarity;                                                      // 0x20(0x01)
	char                                          EffectReinforce : 0;                                         // 0x21(0x01)
	char                                          UnknownData21[0x1];                                          // 0x21(0x01)
	char                                          bSetData : 0;                                                // 0x22(0x01)
	char                                          UnknownData22[0x6];                                          // 0x22(0x06)
};

// ScriptStruct BravoHotelGame.MaterialItemPingInfo
// Size: 0x30 (Inherited: 0x00)
struct FMaterialItemPingInfo 
{
	uint32_t                                      PingIndex;                                                   // 0x00(0x04)
	struct FName                                  MaterialKey;                                                 // 0x04(0x08)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FNone*                                 MaterialItem;                                                // 0x10(0x08)
	struct FNone*                                 LocationActor;                                               // 0x18(0x08)
	struct FNone*                                 Image;                                                       // 0x20(0x08)
	char                                          Rarity;                                                      // 0x28(0x01)
	char                                          EffectReinforce : 0;                                         // 0x29(0x01)
	char                                          UnknownData29[0x7];                                          // 0x29(0x07)
};

// ScriptStruct BravoHotelGame.PerkVechicleInfo
// Size: 0x28 (Inherited: 0x00)
struct FPerkVechicleInfo 
{
	char                                          NeedUpdate : 0;                                              // 0x00(0x01)
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	struct TArray<None>                           VehicleList;                                                 // 0x08(0x10)
	struct TArray<None>                           VehicleLocationList;                                         // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.TrajectoryInitialConditions
// Size: 0x4c (Inherited: 0x00)
struct FTrajectoryInitialConditions 
{
	struct FNone                                  InitialVelocity;                                             // 0x00(0x0c)
	struct FNone                                  InitialWorldLocation;                                        // 0x0c(0x0c)
	struct FNone                                  InitialRotation;                                             // 0x18(0x0c)
	float                                         t0;                                                          // 0x24(0x04)
	struct FNone                                  v0direction;                                                 // 0x28(0x0c)
	float                                         v0length;                                                    // 0x34(0x04)
	float                                         PenRestDeltaTime;                                            // 0x38(0x04)
	struct FNone                                  PenRestLocation;                                             // 0x3c(0x0c)
	float                                         PenDeceleration;                                             // 0x48(0x04)
};

// ScriptStruct BravoHotelGame.QuestEventInfo
// Size: 0x90 (Inherited: 0x00)
struct FQuestEventInfo 
{
	struct FString                                PlayerUID;                                                   // 0x00(0x10)
	enum class None                               QuestTaskType;                                               // 0x10(0x01)
	char                                          UnknownData11[0x7];                                          // 0x11(0x07)
	struct FNone                                  Condition;                                                   // 0x18(0x70)
	uint32_t                                      AddValue;                                                    // 0x88(0x04)
	char                                          UnknownData8C[0x4];                                          // 0x8c(0x04)
};

// ScriptStruct BravoHotelGame.QuestTaskCondition
// Size: 0x70 (Inherited: 0x00)
struct FQuestTaskCondition 
{
	struct TArray<None>                           TargetItemIndex;                                             // 0x00(0x10)
	struct TArray<None>                           EquipedItemIndex;                                            // 0x10(0x10)
	struct TArray<None>                           WeaponType;                                                  // 0x20(0x10)
	struct TArray<None>                           BoneName;                                                    // 0x30(0x10)
	struct TArray<None>                           State;                                                       // 0x40(0x10)
	struct TArray<None>                           Action;                                                      // 0x50(0x10)
	struct TArray<None>                           ETC;                                                         // 0x60(0x10)
};

// ScriptStruct BravoHotelGame.RepVehicleCollisionEvent
// Size: 0x28 (Inherited: 0x00)
struct FRepVehicleCollisionEvent 
{
	struct FNone*                                 HitComponent;                                                // 0x00(0x08)
	uint16_t                                      InstanceIndex;                                               // 0x08(0x02)
	char                                          UnknownDataA[0x2];                                           // 0x0a(0x02)
	struct FNone                                  ImpactPoint;                                                 // 0x0c(0x0c)
	struct FNone                                  ImpactNormal;                                                // 0x18(0x0c)
	float                                         ForwardSpeedKmH;                                             // 0x24(0x04)
};

// ScriptStruct BravoHotelGame.VehiclePostPhysicsTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FVehiclePostPhysicsTickFunction : FTickFunction 
{
	char                                          UnknownData28[0x8];                                          // 0x28(0x08)
};

// ScriptStruct BravoHotelGame.RepVehicleSeatInfo
// Size: 0x10 (Inherited: 0x00)
struct FRepVehicleSeatInfo 
{
	char                                          bIsOccupied : 0;                                             // 0x00(0x01)
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	struct FNone*                                 Occupant;                                                    // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.QuestData
// Size: 0x58 (Inherited: 0x08)
struct FQuestData : FTableRowBase 
{
	uint32_t                                      ID;                                                          // 0x08(0x04)
	struct FName                                  NextQuestKey;                                                // 0x0c(0x08)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct FText                                  QuestTitle;                                                  // 0x18(0x18)
	struct FText                                  QuestDesc;                                                   // 0x30(0x18)
	struct TArray<None>                           Tasks;                                                       // 0x48(0x10)
};

// ScriptStruct BravoHotelGame.QuestTaskElement
// Size: 0xb0 (Inherited: 0x00)
struct FQuestTaskElement 
{
	enum class None                               QuestTaskType;                                               // 0x00(0x01)
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
	uint32_t                                      GoalValue;                                                   // 0x04(0x04)
	uint32_t                                      ProgressRate;                                                // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FText                                  TaskTitle;                                                   // 0x10(0x18)
	struct FText                                  TaskDesc;                                                    // 0x28(0x18)
	struct FNone                                  Condition;                                                   // 0x40(0x70)
};

// ScriptStruct BravoHotelGame.QuestInfo
// Size: 0x30 (Inherited: 0x00)
struct FQuestInfo 
{
	struct FName                                  QuestKey;                                                    // 0x00(0x08)
	uint32_t                                      ID;                                                          // 0x08(0x04)
	enum class None                               State;                                                       // 0x0c(0x01)
	char                                          UnknownDataD[0x3];                                           // 0x0d(0x03)
	uint32_t                                      CurrentProgress;                                             // 0x10(0x04)
	uint32_t                                      GoalProgress;                                                // 0x14(0x04)
	struct TArray<None>                           Tasks;                                                       // 0x18(0x10)
	char                                          UnknownData28[0x8];                                          // 0x28(0x08)
};

// ScriptStruct BravoHotelGame.QuestTaskInfo
// Size: 0x20 (Inherited: 0x00)
struct FQuestTaskInfo 
{
	struct FName                                  QuestKey;                                                    // 0x00(0x08)
	uint32_t                                      Index;                                                       // 0x08(0x04)
	enum class None                               State;                                                       // 0x0c(0x01)
	char                                          UnknownDataD[0x3];                                           // 0x0d(0x03)
	uint32_t                                      CurrentValue;                                                // 0x10(0x04)
	char                                          UnknownData14[0xc];                                          // 0x14(0x0c)
};

// ScriptStruct BravoHotelGame.SeasonQuestInfo
// Size: 0x18 (Inherited: 0x00)
struct FSeasonQuestInfo 
{
	uint32_t                                      QuestIndex;                                                  // 0x00(0x04)
	uint32_t                                      CurrentScore;                                                // 0x04(0x04)
	uint32_t                                      MaxScore;                                                    // 0x08(0x04)
	char                                          UnknownDataC[0xc];                                           // 0x0c(0x0c)
};

// ScriptStruct BravoHotelGame.LoadBuildingInfo
// Size: 0x20 (Inherited: 0x00)
struct FLoadBuildingInfo 
{
	struct FString                                BuildingName;                                                // 0x00(0x10)
	struct FNone                                  Location;                                                    // 0x10(0x0c)
	char                                          UnknownData1C_0 : 7;                                         // 0x1c(0x01)
	char                                          isinbluezone : 1;                                            // 0x1c(0x01)
	char                                          UnknownData1D[0x3];                                          // 0x1d(0x03)
};

// ScriptStruct BravoHotelGame.ItemSpawnLimitInfo
// Size: 0x14 (Inherited: 0x00)
struct FItemSpawnLimitInfo 
{
	uint32_t                                      MaxLimitCnt;                                                 // 0x00(0x04)
	uint32_t                                      UserCnt1;                                                    // 0x04(0x04)
	uint32_t                                      LimitCnt1;                                                   // 0x08(0x04)
	uint32_t                                      UserCnt2;                                                    // 0x0c(0x04)
	uint32_t                                      LimitCnt2;                                                   // 0x10(0x04)
};

// ScriptStruct BravoHotelGame.LocalSpawnRate
// Size: 0x28 (Inherited: 0x08)
struct FLocalSpawnRate : FTableRowBase 
{
	struct FSM_SofaC0                             CenterLocation;                                              // 0x08(0x0c)
	float                                         Radius;                                                      // 0x14(0x04)
	struct TArray<None>                           highTypeList;                                                // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.HighTypeSpawnRate
// Size: 0x20 (Inherited: 0x00)
struct FHighTypeSpawnRate 
{
	struct FString                                highTypeName;                                                // 0x00(0x10)
	struct TArray<None>                           midTypeList;                                                 // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.MidTypeSpawnRate
// Size: 0x28 (Inherited: 0x00)
struct FMidTypeSpawnRate 
{
	struct FString                                midTypeName;                                                 // 0x00(0x10)
	float                                         SpawnRate;                                                   // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct TArray<None>                           ItemList;                                                    // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.ItemSpawnRate
// Size: 0x18 (Inherited: 0x00)
struct FItemSpawnRate 
{
	struct FString                                ItemName;                                                    // 0x00(0x10)
	float                                         SpawnRate;                                                   // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.VehicleAreaSpawnRateInfo
// Size: 0x78 (Inherited: 0x00)
struct FVehicleAreaSpawnRateInfo 
{
	struct FNone                                  Data;                                                        // 0x00(0x28)
	struct TMap<None, None>                       AreaList;                                                    // 0x28(0x50)
};

// ScriptStruct BravoHotelGame.VehicleAreaSpawnDetailInfo
// Size: 0x20 (Inherited: 0x00)
struct FVehicleAreaSpawnDetailInfo 
{
	struct TArray<None>                           StandardGroupList;                                           // 0x00(0x10)
	struct TArray<None>                           VehicleBoxList;                                              // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.VehicleBoxDetailInfo
// Size: 0x10 (Inherited: 0x00)
struct FVehicleBoxDetailInfo 
{
	struct FNone*                                 Box;                                                         // 0x00(0x08)
	uint32_t                                      Count;                                                       // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.AreaSpawnRateInfo
// Size: 0x88 (Inherited: 0x00)
struct FAreaSpawnRateInfo 
{
	struct FNone                                  Data;                                                        // 0x00(0x28)
	struct TArray<None>                           StandardGroupList;                                           // 0x28(0x10)
	struct TMap<None, None>                       AreaList;                                                    // 0x38(0x50)
};

// ScriptStruct BravoHotelGame.AreaSpawnDetailInfo
// Size: 0x10 (Inherited: 0x00)
struct FAreaSpawnDetailInfo 
{
	struct TArray<None>                           ItemBoxList;                                                 // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.StandardGroupKeyCountInfo
// Size: 0x58 (Inherited: 0x00)
struct FStandardGroupKeyCountInfo 
{
	struct TMap<None, None>                       StandardGroupKeyCountList;                                   // 0x00(0x50)
	uint32_t                                      TotalBoxCount;                                               // 0x50(0x04)
	char                                          UnknownData54[0x4];                                          // 0x54(0x04)
};

// ScriptStruct BravoHotelGame.DamageInfo
// Size: 0x10 (Inherited: 0x00)
struct FDamageInfo 
{
	struct FNone*                                 Instigator;                                                  // 0x00(0x08)
	float                                         DamageAmount;                                                // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.TeamInfo
// Size: 0x30 (Inherited: 0x00)
struct FTeamInfo 
{
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	struct TArray<None>                           MemberStates;                                                // 0x08(0x10)
	char                                          UnknownData18[0x18];                                         // 0x18(0x18)
};

// ScriptStruct BravoHotelGame.BravoHotelMatchingSettings
// Size: 0x20 (Inherited: 0x00)
struct FBravoHotelMatchingSettings 
{
	char                                          bPerson : 0;                                                 // 0x00(0x01)
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	struct FString                                Map;                                                         // 0x08(0x10)
	enum class None                               Type;                                                        // 0x18(0x01)
	char                                          bNeedMoreMember : 0;                                         // 0x19(0x01)
	char                                          UnknownData19[0x7];                                          // 0x19(0x07)
};

// ScriptStruct BravoHotelGame.PlayerPawnList
// Size: 0xe8 (Inherited: 0x00)
struct FPlayerPawnList 
{
	struct FNone*                                 Pawn;                                                        // 0x00(0x08)
	struct FNone                                  PartyInfo;                                                   // 0x08(0xe0)
};

// ScriptStruct BravoHotelGame.GameSettingInfo
// Size: 0x88 (Inherited: 0x00)
struct FGameSettingInfo 
{
	struct TArray<None>                           classindex_activeinfos;                                      // 0x00(0x10)
	char                                          redzone_active : 0;                                          // 0x10(0x01)
	char                                          UnknownData10[0x1];                                          // 0x10(0x01)
	char                                          vehicle_active : 0;                                          // 0x11(0x01)
	char                                          UnknownData11[0x3];                                          // 0x11(0x03)
	uint32_t                                      ultimate_unlocklevel;                                        // 0x14(0x04)
	uint32_t                                      standby_timer;                                               // 0x18(0x04)
	uint32_t                                      ready_timer;                                                 // 0x1c(0x04)
	struct TArray<None>                           cqr_quickstartinfos;                                         // 0x20(0x10)
	struct TArray<None>                           class_select_info;                                           // 0x30(0x10)
	struct TArray<None>                           class_change_info;                                           // 0x40(0x10)
	uint32_t                                      newbie_play_count;                                           // 0x50(0x04)
	char                                          UnknownData54[0x4];                                          // 0x54(0x04)
	struct TArray<None>                           loser_level_score;                                           // 0x58(0x10)
	struct TArray<None>                           loser_scores;                                                // 0x68(0x10)
	struct TArray<None>                           user_score_test_uid;                                         // 0x78(0x10)
};

// ScriptStruct BravoHotelGame.LoserScoreElement
// Size: 0x28 (Inherited: 0x00)
struct FLoserScoreElement 
{
	uint32_t                                      match_rating;                                                // 0x00(0x04)
	uint32_t                                      loser_level;                                                 // 0x04(0x04)
	float                                         max_score;                                                   // 0x08(0x04)
	float                                         score_by_rank;                                               // 0x0c(0x04)
	float                                         score_on_defeat;                                             // 0x10(0x04)
	float                                         score_on_zero_kill;                                          // 0x14(0x04)
	float                                         score_on_zero_assist;                                        // 0x18(0x04)
	float                                         score_on_win;                                                // 0x1c(0x04)
	float                                         score_per_kill;                                              // 0x20(0x04)
	float                                         score_per_assist;                                            // 0x24(0x04)
};

// ScriptStruct BravoHotelGame.GameSettingClassChangeInfoElement
// Size: 0x48 (Inherited: 0x00)
struct FGameSettingClassChangeInfoElement 
{
	struct FString                                battle_mode;                                                 // 0x00(0x10)
	uint32_t                                      class_select_mode_price;                                     // 0x10(0x04)
	uint32_t                                      random_change_refresh_max_count;                             // 0x14(0x04)
	struct TArray<None>                           random_change_price;                                         // 0x18(0x10)
	uint32_t                                      scope_select_refresh_max_count;                              // 0x28(0x04)
	char                                          UnknownData2C[0x4];                                          // 0x2c(0x04)
	struct TArray<None>                           scope_select_price;                                          // 0x30(0x10)
	uint32_t                                      scope_select_count;                                          // 0x40(0x04)
	char                                          UnknownData44[0x4];                                          // 0x44(0x04)
};

// ScriptStruct BravoHotelGame.GameSettingClassSelectInfoElement
// Size: 0x28 (Inherited: 0x00)
struct FGameSettingClassSelectInfoElement 
{
	struct FString                                battle_mode;                                                 // 0x00(0x10)
	uint32_t                                      class_select_mode;                                           // 0x10(0x04)
	uint32_t                                      current_status;                                              // 0x14(0x04)
	uint32_t                                      current_status_view;                                         // 0x18(0x04)
	uint32_t                                      current_status_party;                                        // 0x1c(0x04)
	uint32_t                                      duplicate_select_possible;                                   // 0x20(0x04)
	uint32_t                                      random_possible;                                             // 0x24(0x04)
};

// ScriptStruct BravoHotelGame.GameSettingCQRElement
// Size: 0x18 (Inherited: 0x00)
struct FGameSettingCQRElement 
{
	struct FString                                cqr;                                                         // 0x00(0x10)
	uint32_t                                      Value;                                                       // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.DeckBlockElement
// Size: 0x08 (Inherited: 0x00)
struct FDeckBlockElement 
{
	uint32_t                                      Index;                                                       // 0x00(0x04)
	char                                          UnknownData4_0 : 7;                                          // 0x04(0x01)
	char                                          Value : 1;                                                   // 0x04(0x01)
	char                                          UnknownData5[0x3];                                           // 0x05(0x03)
};

// ScriptStruct BravoHotelGame.AirCraftBoardingPlayerList
// Size: 0x10 (Inherited: 0x00)
struct FAirCraftBoardingPlayerList 
{
	struct TArray<None>                           AirCraftBoardingPlayerList;                                  // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.AirCraftBoardingPlayerInfo
// Size: 0x08 (Inherited: 0x00)
struct FAirCraftBoardingPlayerInfo 
{
	uint32_t                                      PlayerUniqueID;                                              // 0x00(0x04)
	char                                          IsDescent : 0;                                               // 0x04(0x01)
	char                                          UnknownData4[0x1];                                           // 0x04(0x01)
	char                                          AirCraftID;                                                  // 0x05(0x01)
	char                                          SeatID;                                                      // 0x06(0x01)
	char                                          UnknownData7[0x1];                                           // 0x07(0x01)
};

// ScriptStruct BravoHotelGame.TeamEndInfo
// Size: 0x20 (Inherited: 0x00)
struct FTeamEndInfo 
{
	uint32_t                                      TeamUID;                                                     // 0x00(0x04)
	uint32_t                                      LastKillerTeamUID;                                           // 0x04(0x04)
	uint32_t                                      Rank;                                                        // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct TArray<None>                           DiedInfos;                                                   // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.CharacterDiedInfo
// Size: 0x28 (Inherited: 0x00)
struct FCharacterDiedInfo 
{
	uint32_t                                      DiedUID;                                                     // 0x00(0x04)
	uint32_t                                      KillerUID;                                                   // 0x04(0x04)
	uint32_t                                      KnockUID;                                                    // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FNone                                  DiedDamageEvent;                                             // 0x10(0x10)
	float                                         EventTime;                                                   // 0x20(0x04)
	char                                          UnknownData24[0x4];                                          // 0x24(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelGameData
// Size: 0x320 (Inherited: 0x00)
struct FBravoHotelGameData 
{
	struct FNone                                  MapData;                                                     // 0x00(0x180)
	struct FNone                                  PlayZoneBaseData;                                            // 0x180(0x188)
	struct TArray<None>                           PlayZonePhaseList;                                           // 0x308(0x10)
	struct FNone*                                 WeightMapInfo;                                               // 0x318(0x08)
};

// ScriptStruct BravoHotelGame.SentenceData
// Size: 0xb0 (Inherited: 0x08)
struct FSentenceData : FTableRowBase 
{
	struct FText                                  SpeakerName;                                                 // 0x08(0x18)
	struct FText                                  SentenceText;                                                // 0x20(0x18)
	uint32_t                                      FaceIndex;                                                   // 0x38(0x04)
	char                                          bNeedInput : 0;                                              // 0x3c(0x01)
	char                                          UnknownData3C[0x1];                                          // 0x3c(0x01)
	char                                          bHoldOnVoicePlay : 0;                                        // 0x3d(0x01)
	char                                          UnknownData3D[0x3];                                          // 0x3d(0x03)
	float                                         NextTime;                                                    // 0x40(0x04)
	char                                          UnknownData44[0x4];                                          // 0x44(0x04)
	struct FNone*                                 VoiceEvent;                                                  // 0x48(0x08)
	struct TMap<None, None>                       ChannelVoiceEvent;                                           // 0x50(0x50)
	struct TArray<None>                           AdditionalEvents;                                            // 0xa0(0x10)
};

// ScriptStruct BravoHotelGame.AreaWidgetInfo
// Size: 0x88 (Inherited: 0x00)
struct FAreaWidgetInfo 
{
	struct FNone                                  ServerLocation;                                              // 0x00(0x0c)
	float                                         Radius;                                                      // 0x0c(0x04)
	struct FNone*                                 TargetActor;                                                 // 0x10(0x08)
	char                                          bIsAutoRemove : 0;                                           // 0x18(0x01)
	char                                          UnknownData18[0x4];                                          // 0x18(0x04)
	float                                         AutoRemoveTime;                                              // 0x1c(0x04)
	struct FNone                                  PingInfo;                                                    // 0x20(0x30)
	struct FNone                                  ExpertWeaponPingInfo;                                        // 0x50(0x28)
	struct FNone*                                 Image;                                                       // 0x78(0x08)
	uint32_t                                      LocalPingIndex;                                              // 0x80(0x04)
	char                                          UnknownData84[0x4];                                          // 0x84(0x04)
};

// ScriptStruct BravoHotelGame.KillBroadcastKillerInfo
// Size: 0xba8 (Inherited: 0x00)
struct FKillBroadcastKillerInfo 
{
	struct FNone*                                 PlayerState;                                                 // 0x00(0x08)
	char                                          IsHeadShot : 0;                                              // 0x08(0x01)
	char                                          UnknownData8[0x1];                                           // 0x08(0x01)
	char                                          IsSelfKill : 0;                                              // 0x09(0x01)
	char                                          UnknownData9[0x1];                                           // 0x09(0x01)
	char                                          IsTeamKill : 0;                                              // 0x0a(0x01)
	char                                          UnknownDataA[0x1];                                           // 0x0a(0x01)
	char                                          IsWeaponKill : 0;                                            // 0x0b(0x01)
	char                                          UnknownDataB[0x5];                                           // 0x0b(0x05)
	struct FNone                                  WeaponInfo;                                                  // 0x10(0xb30)
	struct FNone                                  DamageTypeRow;                                               // 0xb40(0x68)
};

// ScriptStruct BravoHotelGame.KillBroadcastUIInfo
// Size: 0x1788 (Inherited: 0x00)
struct FKillBroadcastUIInfo 
{
	struct FNone                                  Attacker;                                                    // 0x00(0xba8)
	struct FNone                                  KnockOut;                                                    // 0xba8(0xba8)
	struct FNone*                                 Killer;                                                      // 0x1750(0x08)
	struct FNone*                                 SubKiller;                                                   // 0x1758(0x08)
	struct FNone*                                 Died;                                                        // 0x1760(0x08)
	struct TArray<None>                           Assist;                                                      // 0x1768(0x10)
	char                                          IsFinallyKill : 0;                                           // 0x1778(0x01)
	char                                          UnknownData1778[0x4];                                        // 0x1778(0x04)
	uint32_t                                      KillCount;                                                   // 0x177c(0x04)
	enum class None                               BroadCastKillMessageType;                                    // 0x1780(0x01)
	char                                          UnknownData1781[0x7];                                        // 0x1781(0x07)
};

// ScriptStruct BravoHotelGame.StatupAnimData
// Size: 0x14 (Inherited: 0x00)
struct FStatupAnimData 
{
	struct FName                                  PreItemKey;                                                  // 0x00(0x08)
	struct FName                                  NewItemKey;                                                  // 0x08(0x08)
	uint32_t                                      SlotIndex;                                                   // 0x10(0x04)
};

// ScriptStruct BravoHotelGame.Coh_ResultInfo
// Size: 0x38 (Inherited: 0x00)
struct FCoh_ResultInfo 
{
	uint32_t                                      TableIndex;                                                  // 0x00(0x04)
	uint32_t                                      NewTableIndex;                                               // 0x04(0x04)
	struct FString                                Identified;                                                  // 0x08(0x10)
	float                                         fatigue;                                                     // 0x18(0x04)
	uint32_t                                      beforeDurability;                                            // 0x1c(0x04)
	float                                         beforeFatigue;                                               // 0x20(0x04)
	char                                          UnknownData24[0x4];                                          // 0x24(0x04)
	struct TArray<None>                           Rewards;                                                     // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.Coh_Reward
// Size: 0x08 (Inherited: 0x00)
struct FCoh_Reward 
{
	uint32_t                                      TableIndex;                                                  // 0x00(0x04)
	uint32_t                                      Count;                                                       // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.Coh_Query
// Size: 0x20 (Inherited: 0x00)
struct FCoh_Query 
{
	struct FName                                  TableName;                                                   // 0x00(0x08)
	char                                          AllRows : 0;                                                 // 0x08(0x01)
	char                                          UnknownData8[0x1];                                           // 0x08(0x01)
	char                                          ArrayType : 0;                                               // 0x09(0x01)
	char                                          UnknownData9[0x1];                                           // 0x09(0x01)
	char                                          LocalizationKey : 0;                                         // 0x0a(0x01)
	char                                          UnknownDataA[0x6];                                           // 0x0a(0x06)
	struct TArray<None>                           RowNames;                                                    // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.Coh_ForceMatching
// Size: 0x68 (Inherited: 0x00)
struct FCoh_ForceMatching 
{
	struct FString                                HostIP;                                                      // 0x00(0x10)
	uint32_t                                      Port;                                                        // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct FString                                Token;                                                       // 0x18(0x10)
	struct FString                                Key;                                                         // 0x28(0x10)
	uint32_t                                      MatchNum;                                                    // 0x38(0x04)
	char                                          UnknownData3C[0x4];                                          // 0x3c(0x04)
	struct FString                                Map;                                                         // 0x40(0x10)
	char                                          SpectatorOnly : 0;                                           // 0x50(0x01)
	char                                          UnknownData50[0x8];                                          // 0x50(0x08)
	struct FString                                AddOptions;                                                  // 0x58(0x10)
};

// ScriptStruct BravoHotelGame.Response_MaterialList_Data
// Size: 0x30 (Inherited: 0x00)
struct FResponse_MaterialList_Data 
{
	uint32_t                                      table_index;                                                 // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                item_id;                                                     // 0x08(0x10)
	uint32_t                                      stack_count;                                                 // 0x18(0x04)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
	struct FString                                created;                                                     // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.Response_Weapon_List_Data
// Size: 0x88 (Inherited: 0x00)
struct FResponse_Weapon_List_Data 
{
	uint32_t                                      base_index;                                                  // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                item_id;                                                     // 0x08(0x10)
	uint32_t                                      table_index;                                                 // 0x18(0x04)
	uint32_t                                      Durability;                                                  // 0x1c(0x04)
	char                                          UnknownData20_0 : 7;                                         // 0x20(0x01)
	char                                          Identified : 1;                                              // 0x20(0x01)
	char                                          supplied : 0;                                                // 0x21(0x01)
	char                                          UnknownData21[0x7];                                          // 0x21(0x07)
	struct TMap<None, None>                       options;                                                     // 0x28(0x50)
	struct FString                                created;                                                     // 0x78(0x10)
};

// ScriptStruct BravoHotelGame.Response_CraftWeapon_Data
// Size: 0xc0 (Inherited: 0x00)
struct FResponse_CraftWeapon_Data 
{
	uint32_t                                      table_index;                                                 // 0x00(0x04)
	uint32_t                                      before_gold;                                                 // 0x04(0x04)
	uint32_t                                      after_gold;                                                  // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct TArray<None>                           removed_materials;                                           // 0x10(0x10)
	struct TArray<None>                           updated_materials;                                           // 0x20(0x10)
	struct FString                                removed_weapon_item_id;                                      // 0x30(0x10)
	struct FNone                                  crafted_weapon;                                              // 0x40(0x80)
};

// ScriptStruct BravoHotelGame.Response_CraftWeapon_Weapon
// Size: 0x80 (Inherited: 0x00)
struct FResponse_CraftWeapon_Weapon 
{
	uint32_t                                      table_index;                                                 // 0x00(0x04)
	uint32_t                                      table_base_index;                                            // 0x04(0x04)
	uint32_t                                      Durability;                                                  // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct TMap<None, None>                       options;                                                     // 0x10(0x50)
	struct FString                                item_id;                                                     // 0x60(0x10)
	struct FString                                created;                                                     // 0x70(0x10)
};

// ScriptStruct BravoHotelGame.Response_CraftWeapon_Material
// Size: 0x20 (Inherited: 0x00)
struct FResponse_CraftWeapon_Material 
{
	uint32_t                                      table_index;                                                 // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                item_id;                                                     // 0x08(0x10)
	uint32_t                                      stack_count;                                                 // 0x18(0x04)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.Coh_MatchingSettings
// Size: 0x20 (Inherited: 0x00)
struct FCoh_MatchingSettings 
{
	char                                          bPerson : 0;                                                 // 0x00(0x01)
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	struct FString                                Map;                                                         // 0x08(0x10)
	uint32_t                                      TypeNum;                                                     // 0x18(0x04)
	char                                          NeedMoreMember : 0;                                          // 0x1c(0x01)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelLobbyMapSetting
// Size: 0x10 (Inherited: 0x00)
struct FBravoHotelLobbyMapSetting 
{
	struct TArray<None>                           IncludeMapList;                                              // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.EffectTransitionInfo
// Size: 0x18 (Inherited: 0x00)
struct FEffectTransitionInfo 
{
	struct FNone*                                 Actor;                                                       // 0x00(0x08)
	struct FNone*                                 SupplyActorRef;                                              // 0x08(0x08)
	float                                         ScalarParameterValue;                                        // 0x10(0x04)
	char                                          Visible : 0;                                                 // 0x14(0x01)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.SupplySlotInfo
// Size: 0x10 (Inherited: 0x00)
struct FSupplySlotInfo 
{
	uint32_t                                      Idx;                                                         // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FNone*                                 Slot;                                                        // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.SupplyBoxItemInfo
// Size: 0x30 (Inherited: 0x00)
struct FSupplyBoxItemInfo 
{
	struct FName                                  Name;                                                        // 0x00(0x08)
	struct FNone*                                 Actor;                                                       // 0x08(0x08)
	struct FNone*                                 SupplyMeshParticle;                                          // 0x10(0x08)
	uint32_t                                      Idx;                                                         // 0x18(0x04)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
	struct TArray<None>                           ToolTipOffset;                                               // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.PerkInfoArray
// Size: 0x118 (Inherited: 0x108)
struct FPerkInfoArray : FFastArraySerializer 
{
	struct TArray<None>                           Items;                                                       // 0x108(0x10)
};

// ScriptStruct BravoHotelGame.RepPerkInfo
// Size: 0x10 (Inherited: 0x0c)
struct FRepPerkInfo : FFastArraySerializerItem 
{
	uint16_t                                      PerkIndex;                                                   // 0x0c(0x02)
	char                                          InGamelevel;                                                 // 0x0e(0x01)
	char                                          UnknownDataF[0x1];                                           // 0x0f(0x01)
};

// ScriptStruct BravoHotelGame.SteamFriendInfo
// Size: 0x50 (Inherited: 0x00)
struct FSteamFriendInfo 
{
	struct FNone                                  UniqueNetId;                                                 // 0x00(0x28)
	struct FString                                DisplayName;                                                 // 0x28(0x10)
	struct FString                                RealName;                                                    // 0x38(0x10)
	enum class None                               OnlineState;                                                 // 0x48(0x01)
	char                                          bIsOnline : 0;                                               // 0x49(0x01)
	char                                          UnknownData49[0x1];                                          // 0x49(0x01)
	char                                          bIsPlaying : 0;                                              // 0x4a(0x01)
	char                                          UnknownData4A[0x1];                                          // 0x4a(0x01)
	char                                          bIsPlayingThisGame : 0;                                      // 0x4b(0x01)
	char                                          UnknownData4B[0x1];                                          // 0x4b(0x01)
	char                                          bIsJoinable : 0;                                             // 0x4c(0x01)
	char                                          UnknownData4C[0x1];                                          // 0x4c(0x01)
	char                                          bHasVoiceSupport : 0;                                        // 0x4d(0x01)
	char                                          UnknownData4D[0x3];                                          // 0x4d(0x03)
};

// ScriptStruct BravoHotelGame.RepVehicleControlStates
// Size: 0x07 (Inherited: 0x00)
struct FRepVehicleControlStates 
{
	char                                          bHasLeftSteeringInput : 0;                                   // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
	char                                          bHasRightSteeringInput : 0;                                  // 0x01(0x01)
	char                                          UnknownData1[0x1];                                           // 0x01(0x01)
	char                                          bHasThrottleInput : 0;                                       // 0x02(0x01)
	char                                          UnknownData2[0x1];                                           // 0x02(0x01)
	char                                          bHasBrakeInput : 0;                                          // 0x03(0x01)
	char                                          UnknownData3[0x1];                                           // 0x03(0x01)
	char                                          bIsIdleBraking : 0;                                          // 0x04(0x01)
	char                                          UnknownData4[0x1];                                           // 0x04(0x01)
	char                                          bHasHandbrakeInput : 0;                                      // 0x05(0x01)
	char                                          UnknownData5[0x1];                                           // 0x05(0x01)
	uint8_t                                       CurrentGear;                                                 // 0x06(0x01)
};

// ScriptStruct BravoHotelGame.WeaponBaseData
// Size: 0x110 (Inherited: 0x08)
struct FWeaponBaseData : FTableRowBase 
{
	struct FName                                  WeaponKey;                                                   // 0x08(0x08)
	uint32_t                                      ID;                                                          // 0x10(0x04)
	enum class None                               WeaponType;                                                  // 0x14(0x01)
	char                                          UnknownData15[0x3];                                          // 0x15(0x03)
	struct FText                                  DisplayName;                                                 // 0x18(0x18)
	struct FText                                  DisplayDesc;                                                 // 0x30(0x18)
	struct FText                                  DisplayWeaponType;                                           // 0x48(0x18)
	struct FText                                  DisplayRangeType;                                            // 0x60(0x18)
	uint32_t                                      Display_Damage;                                              // 0x78(0x04)
	uint32_t                                      Display_EffectiveRange;                                      // 0x7c(0x04)
	uint32_t                                      Display_Accuracy;                                            // 0x80(0x04)
	uint32_t                                      Display_RateofFire;                                          // 0x84(0x04)
	struct FName                                  Display_AmmoInfo;                                            // 0x88(0x08)
	struct TSoftObjectPtr<FNone>                  SlotIconTexture_PaperSprite;                                 // 0x90(0x28)
	struct TSoftObjectPtr<FNone>                  DragIconTexture_PaperSprite;                                 // 0xb8(0x28)
	char                                          IsArmoryWeapon : 0;                                          // 0xe0(0x01)
	char                                          UnknownDataE0[0x4];                                          // 0xe0(0x04)
	struct FName                                  ItemKey;                                                     // 0xe4(0x08)
	struct FName                                  TopRecipe;                                                   // 0xec(0x08)
	uint32_t                                      Display_MagSize;                                             // 0xf4(0x04)
	struct FNone*                                 DataAsset;                                                   // 0xf8(0x08)
	struct FName                                  AmmoTableKey;                                                // 0x100(0x08)
	struct FNone*                                 PerBoneDamageTable;                                          // 0x108(0x08)
};

// ScriptStruct BravoHotelGame.ZeroPoint
// Size: 0x08 (Inherited: 0x00)
struct FZeroPoint 
{
	uint32_t                                      Distance;                                                    // 0x00(0x04)
	float                                         Angle;                                                       // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.RepProjectileInfo
// Size: 0xa8 (Inherited: 0x00)
struct FRepProjectileInfo 
{
	struct FNone                                  Location;                                                    // 0x00(0x0c)
	struct FNone                                  OriginRotation;                                              // 0x0c(0x0c)
	struct TArray<None>                           SpreadRotations;                                             // 0x18(0x10)
	char                                          NumBulletsAndSpreadBit;                                      // 0x28(0x01)
	char                                          bIsCharacterInfoData : 0;                                    // 0x29(0x01)
	char                                          UnknownData29[0x1];                                          // 0x29(0x01)
	char                                          CharacterInfoBit;                                            // 0x2a(0x01)
	char                                          Index;                                                       // 0x2b(0x01)
	float                                         ShotFoV;                                                     // 0x2c(0x04)
	enum class None                               FireMode;                                                    // 0x30(0x01)
	char                                          UnknownData31[0x3];                                          // 0x31(0x03)
	float                                         ProjectileVelocity;                                          // 0x34(0x04)
	float                                         TerminalVelocity;                                            // 0x38(0x04)
	char                                          bIsBoltAction : 0;                                           // 0x3c(0x01)
	char                                          UnknownData3C[0x4];                                          // 0x3c(0x04)
	struct FNone                                  RecoilInfo;                                                  // 0x40(0x3c)
	float                                         LeanDegreeMax;                                               // 0x7c(0x04)
	float                                         ADSSpeed;                                                    // 0x80(0x04)
	float                                         Deviation;                                                   // 0x84(0x04)
	uint16_t                                      UniqueID;                                                    // 0x88(0x02)
	char                                          bHasAuthority : 0;                                           // 0x8a(0x01)
	char                                          UnknownData8A[0x6];                                          // 0x8a(0x06)
	struct FNone*                                 AuthorityController;                                         // 0x90(0x08)
	float                                         Time;                                                        // 0x98(0x04)
	float                                         DamageRate;                                                  // 0x9c(0x04)
	char                                          LevelVisibleRate;                                            // 0xa0(0x01)
	char                                          UnknownDataA1[0x7];                                          // 0xa1(0x07)
};

// ScriptStruct BravoHotelGame.RepRecoilInfo
// Size: 0x3c (Inherited: 0x00)
struct FRepRecoilInfo 
{
	float                                         VertClampMin;                                                // 0x00(0x04)
	float                                         VertClampMax;                                                // 0x04(0x04)
	float                                         VertSpeed;                                                   // 0x08(0x04)
	float                                         VertRecoveryClamp;                                           // 0x0c(0x04)
	float                                         VertRecoveryModifier;                                        // 0x10(0x04)
	float                                         HorSpeed;                                                    // 0x14(0x04)
	float                                         HorTendency;                                                 // 0x18(0x04)
	float                                         HorLeftMax;                                                  // 0x1c(0x04)
	float                                         HorRightMax;                                                 // 0x20(0x04)
	float                                         Speed;                                                       // 0x24(0x04)
	float                                         RecoverySpeed;                                               // 0x28(0x04)
	float                                         PatternScale;                                                // 0x2c(0x04)
	float                                         CrouchModifier;                                              // 0x30(0x04)
	float                                         ProneModifier;                                               // 0x34(0x04)
	float                                         DecreaseRecoilPatternScale;                                  // 0x38(0x04)
};

// ScriptStruct BravoHotelGame.ExplosionInfo
// Size: 0x10 (Inherited: 0x00)
struct FExplosionInfo 
{
	char                                          bActive : 0;                                                 // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	float                                         Damage;                                                      // 0x04(0x04)
	float                                         EffectRange;                                                 // 0x08(0x04)
	float                                         DamageFalloff;                                               // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.IncendiaryInfo
// Size: 0x14 (Inherited: 0x00)
struct FIncendiaryInfo 
{
	char                                          bActive : 0;                                                 // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	float                                         DamageTime;                                                  // 0x04(0x04)
	float                                         FireDamage;                                                  // 0x08(0x04)
	float                                         ActiveRange;                                                 // 0x0c(0x04)
	float                                         FireShrinkTime;                                              // 0x10(0x04)
};

// ScriptStruct BravoHotelGame.RangedWeaponFireSound
// Size: 0x20 (Inherited: 0x00)
struct FRangedWeaponFireSound 
{
	struct FNone*                                 SingleFireEvent;                                             // 0x00(0x08)
	struct FNone*                                 LoopStartEvent;                                              // 0x08(0x08)
	struct FNone*                                 LoopStopEvent;                                               // 0x10(0x08)
	struct FNone*                                 WarmupStartEvent;                                            // 0x18(0x08)
};

// ScriptStruct BravoHotelGame.LoginInfo
// Size: 0xa0 (Inherited: 0x00)
struct FLoginInfo 
{
	struct TMap<None, None>                       AppIDs;                                                      // 0x00(0x50)
	struct TMap<None, None>                       Keys;                                                        // 0x50(0x50)
};

// ScriptStruct BravoHotelGame.BoostTypeData
// Size: 0x20 (Inherited: 0x08)
struct FBoostTypeData : FTableRowBase 
{
	float                                         BoostMax;                                                    // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct TArray<None>                           BoostDefine;                                                 // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.BoostTypeElement
// Size: 0x20 (Inherited: 0x00)
struct FBoostTypeElement 
{
	float                                         StepStart;                                                   // 0x00(0x04)
	float                                         BoostDecreasePerSec;                                         // 0x04(0x04)
	char                                          bShowHealUI : 0;                                             // 0x08(0x01)
	char                                          UnknownData8[0x1];                                           // 0x08(0x01)
	char                                          bShowSpeedUI : 0;                                            // 0x09(0x01)
	char                                          UnknownData9[0x7];                                           // 0x09(0x07)
	struct TArray<None>                           BuffKeys;                                                    // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.PerkDeckInfo
// Size: 0x70 (Inherited: 0x00)
struct FPerkDeckInfo 
{
	struct FNone                                  ClassInfo;                                                   // 0x00(0x28)
	uint32_t                                      ChangeDeckCount;                                             // 0x28(0x04)
	char                                          UnknownData2C[0x4];                                          // 0x2c(0x04)
	struct TArray<None>                           ExpertSupplyItems;                                           // 0x30(0x10)
	struct TArray<None>                           ExpertSupplyWeaponItems;                                     // 0x40(0x10)
	struct TArray<None>                           ExpertFreeSupplyItems;                                       // 0x50(0x10)
	struct TArray<None>                           ExpertFreeSupplyWeaponItems;                                 // 0x60(0x10)
};

// ScriptStruct BravoHotelGame.CharacterAbilityData
// Size: 0x10 (Inherited: 0x08)
struct FCharacterAbilityData : FTableRowBase 
{
	enum class None                               AbilityType;                                                 // 0x08(0x01)
	enum class None                               AbilityCase;                                                 // 0x09(0x01)
	char                                          UnknownDataA[0x2];                                           // 0x0a(0x02)
	float                                         AbilityValue;                                                // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.ExpertWeaponListData
// Size: 0x58 (Inherited: 0x08)
struct FExpertWeaponListData : FTableRowBase 
{
	struct TMap<None, None>                       ExpertWeaponType;                                            // 0x08(0x50)
};

// ScriptStruct BravoHotelGame.ExpertWeaponType
// Size: 0x10 (Inherited: 0x00)
struct FExpertWeaponType 
{
	struct TArray<None>                           WeaponList;                                                  // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.ExpertWeaponElement
// Size: 0xa0 (Inherited: 0x00)
struct FExpertWeaponElement 
{
	struct FName                                  WeaponDataID;                                                // 0x00(0x08)
	float                                         Weight;                                                      // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct TArray<None>                           SupplyWeaponItems;                                           // 0x10(0x10)
	struct TArray<None>                           SupplyItems;                                                 // 0x20(0x10)
	struct TMap<None, None>                       PerkNames;                                                   // 0x30(0x50)
	struct TArray<None>                           FreeSupplyWeaponItems;                                       // 0x80(0x10)
	struct TArray<None>                           FreeSupplyItems;                                             // 0x90(0x10)
};

// ScriptStruct BravoHotelGame.CameraEffectData
// Size: 0x80 (Inherited: 0x08)
struct FCameraEffectData : FTableRowBase 
{
	float                                         Duration;                                                    // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FNone*                                 Particle_TPP;                                                // 0x10(0x08)
	struct FNone*                                 Particle_FPP;                                                // 0x18(0x08)
	struct FNone                                  ParticlePivot;                                               // 0x20(0x0c)
	char                                          UnknownData2C[0x4];                                          // 0x2c(0x04)
	struct TMap<None, None>                       EffectColor;                                                 // 0x30(0x50)
};

// ScriptStruct BravoHotelGame.MaterialEffectData
// Size: 0x210 (Inherited: 0x08)
struct FMaterialEffectData : FTableRowBase 
{
	float                                         ActiveTime;                                                  // 0x08(0x04)
	float                                         SleepTime;                                                   // 0x0c(0x04)
	struct TMap<None, None>                       StartMutableDatas;                                           // 0x10(0x50)
	struct TMap<None, None>                       ChangeMutableDatas;                                          // 0x60(0x50)
	float                                         TargetChangeRate;                                            // 0xb0(0x04)
	char                                          UnknownDataB4[0x4];                                          // 0xb4(0x04)
	struct FNone*                                 CameraPostProcessClase;                                      // 0xb8(0x08)
	struct TMap<None, None>                       ColorValues;                                                 // 0xc0(0x50)
	struct TMap<None, None>                       FloatValues;                                                 // 0x110(0x50)
	struct TMap<None, None>                       ColorCurves;                                                 // 0x160(0x50)
	struct TMap<None, None>                       FloatCurves;                                                 // 0x1b0(0x50)
	struct FName                                  BlendOutParameterName;                                       // 0x200(0x08)
	float                                         BlendOutSpeed;                                               // 0x208(0x04)
	char                                          UnknownData20C[0x4];                                         // 0x20c(0x04)
};

// ScriptStruct BravoHotelGame.ConditionedAbilityInfo
// Size: 0xa8 (Inherited: 0x00)
struct FConditionedAbilityInfo 
{
	char                                          UnknownData0[0xa8];                                          // 0x00(0xa8)
};

// ScriptStruct BravoHotelGame.PerkData
// Size: 0xe0 (Inherited: 0x08)
struct FPerkData : FTableRowBase 
{
	struct FNone                                  BaseData;                                                    // 0x08(0xc8)
	struct TArray<None>                           InGameDatas;                                                 // 0xd0(0x10)
};

// ScriptStruct BravoHotelGame.PerkInGameData
// Size: 0x1c8 (Inherited: 0x08)
struct FPerkInGameData : FTableRowBase 
{
	struct FText                                  DisplayName;                                                 // 0x08(0x18)
	struct TMap<None, None>                       DisplayNameValues;                                           // 0x20(0x50)
	struct FText                                  Description;                                                 // 0x70(0x18)
	struct TMap<None, None>                       DescriptionValues;                                           // 0x88(0x50)
	struct FText                                  PopupName;                                                   // 0xd8(0x18)
	struct FText                                  PopupNewDesc;                                                // 0xf0(0x18)
	struct FText                                  PopupLevelUpDesc;                                            // 0x108(0x18)
	struct TMap<None, None>                       PopupLevelUpDescValues;                                      // 0x120(0x50)
	struct TSoftObjectPtr<FNone>                  PopupNewSound;                                               // 0x170(0x28)
	struct FName                                  DisplayKey;                                                  // 0x198(0x08)
	uint32_t                                      DisplayPower;                                                // 0x1a0(0x04)
	uint32_t                                      DisplaySpeed;                                                // 0x1a4(0x04)
	uint32_t                                      DisplayDefense;                                              // 0x1a8(0x04)
	uint32_t                                      Level;                                                       // 0x1ac(0x04)
	uint32_t                                      MaxLevel;                                                    // 0x1b0(0x04)
	uint32_t                                      NextLevelExp;                                                // 0x1b4(0x04)
	struct TArray<None>                           BuffNames;                                                   // 0x1b8(0x10)
};

// ScriptStruct BravoHotelGame.PerkBaseData
// Size: 0xc8 (Inherited: 0x08)
struct FPerkBaseData : FTableRowBase 
{
	uint32_t                                      ID;                                                          // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FText                                  DisplayName;                                                 // 0x10(0x18)
	struct FText                                  DisplayShortName;                                            // 0x28(0x18)
	struct FText                                  Description;                                                 // 0x40(0x18)
	struct FText                                  Tooltip;                                                     // 0x58(0x18)
	struct TSoftObjectPtr<FNone>                  SlotIconTexture;                                             // 0x70(0x28)
	uint32_t                                      MaxGrade;                                                    // 0x98(0x04)
	uint32_t                                      grade;                                                       // 0x9c(0x04)
	struct FName                                  TextTableIndex;                                              // 0xa0(0x08)
	struct TArray<None>                           EquipableClass;                                              // 0xa8(0x10)
	char                                          EquipableSlot;                                               // 0xb8(0x01)
	char                                          UnknownDataB9[0x3];                                          // 0xb9(0x03)
	struct FName                                  SpecialWeaponName;                                           // 0xbc(0x08)
	char                                          UnknownDataC4[0x4];                                          // 0xc4(0x04)
};

// ScriptStruct BravoHotelGame.NewbieBuff
// Size: 0x38 (Inherited: 0x08)
struct FNewbieBuff : FTableRowBase 
{
	char                                          UnknownData8[0x18];                                          // 0x08(0x18)
	struct TArray<None>                           CommonBuffNames;                                             // 0x20(0x10)
	float                                         SupplyProbabilityModifyer;                                   // 0x18(0x04)
	struct FName                                  ExpertWeaponTableID;                                         // 0x30(0x08)
	struct TArray<None>                           SuperPeopleClassBuffNames;                                   // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.SpecificClassBuff
// Size: 0x18 (Inherited: 0x00)
struct FSpecificClassBuff 
{
	enum class None                               SpecificClass;                                               // 0x00(0x01)
	char                                          UnknownData1[0x7];                                           // 0x01(0x07)
	struct TArray<None>                           BuffNames;                                                   // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.BuffData
// Size: 0x188 (Inherited: 0x08)
struct FBuffData : FTableRowBase 
{
	struct FNone*                                 BuffClass;                                                   // 0x08(0x08)
	enum class None                               BuffTarget;                                                  // 0x10(0x01)
	char                                          UnknownData11[0x7];                                          // 0x11(0x07)
	struct TSoftObjectPtr<FNone>                  CohIcon;                                                     // 0x18(0x28)
	struct FText                                  DisplayName;                                                 // 0x40(0x18)
	struct FText                                  Description;                                                 // 0x58(0x18)
	struct FNone                                  BorderColor;                                                 // 0x70(0x04)
	struct FNone                                  BGColor;                                                     // 0x74(0x04)
	uint32_t                                      DisplayLevel;                                                // 0x78(0x04)
	struct FName                                  EffectSet;                                                   // 0x7c(0x08)
	float                                         ReadyTime;                                                   // 0x84(0x04)
	float                                         BuffTime;                                                    // 0x88(0x04)
	float                                         CoolTime;                                                    // 0x8c(0x04)
	float                                         Chance;                                                      // 0x90(0x04)
	uint32_t                                      LimitCount;                                                  // 0x94(0x04)
	struct TArray<None>                           SubBuffIndex;                                                // 0x98(0x10)
	struct TArray<None>                           StartBuffIndex;                                              // 0xa8(0x10)
	struct TArray<None>                           EndBuffIndex;                                                // 0xb8(0x10)
	struct FString                                SpecialCondition;                                            // 0xc8(0x10)
	float                                         PlusValue;                                                   // 0xd8(0x04)
	float                                         PercentValue;                                                // 0xdc(0x04)
	char                                          bReverseCondition : 0;                                       // 0xe0(0x01)
	char                                          UnknownDataE0[0x1];                                          // 0xe0(0x01)
	char                                          bUseableInVehicle : 0;                                       // 0xe1(0x01)
	char                                          UnknownDataE1[0x7];                                          // 0xe1(0x07)
	struct TArray<None>                           TargetItemIndex;                                             // 0xe8(0x10)
	struct TArray<None>                           EquipedItemIndex;                                            // 0xf8(0x10)
	struct TArray<None>                           WeaponType;                                                  // 0x108(0x10)
	struct TArray<None>                           BoneName;                                                    // 0x118(0x10)
	struct TArray<None>                           State;                                                       // 0x128(0x10)
	struct TArray<None>                           ETC;                                                         // 0x138(0x10)
	struct FString                                Param01;                                                     // 0x148(0x10)
	struct FString                                Param02;                                                     // 0x158(0x10)
	struct FString                                Param03;                                                     // 0x168(0x10)
	struct FString                                Param04;                                                     // 0x178(0x10)
};

// ScriptStruct BravoHotelGame.BuffEffectSetData
// Size: 0x158 (Inherited: 0x08)
struct FBuffEffectSetData : FTableRowBase 
{
	struct TMap<None, None>                       CharacterParticleStart;                                      // 0x08(0x50)
	struct TMap<None, None>                       CharacterParticleIng;                                        // 0x58(0x50)
	struct TMap<None, None>                       CharacterParticleEnd;                                        // 0xa8(0x50)
	struct TArray<None>                           Sound2DStart;                                                // 0xf8(0x10)
	struct TArray<None>                           Sound2DEnd;                                                  // 0x108(0x10)
	struct TArray<None>                           Sound3DStart;                                                // 0x118(0x10)
	struct TArray<None>                           Sound3DEnd;                                                  // 0x128(0x10)
	struct TArray<None>                           SoundFollowStart;                                            // 0x138(0x10)
	struct TArray<None>                           SoundFollowEnd;                                              // 0x148(0x10)
};

// ScriptStruct BravoHotelGame.AICharacterSettingData
// Size: 0x58 (Inherited: 0x08)
struct FAICharacterSettingData : FTableRowBase 
{
	struct FString                                NickName;                                                    // 0x08(0x10)
	struct FNone                                  AppearanceInfo;                                              // 0x18(0x14)
	char                                          UnknownData2C[0x4];                                          // 0x2c(0x04)
	struct TArray<None>                           AddItems;                                                    // 0x30(0x10)
	struct TArray<None>                           Buffs;                                                       // 0x40(0x10)
	struct FName                                  ItemSettingType;                                             // 0x50(0x08)
};

// ScriptStruct BravoHotelGame.AICharacterAppearanceInfo
// Size: 0x14 (Inherited: 0x00)
struct FAICharacterAppearanceInfo 
{
	uint32_t                                      FaceID;                                                      // 0x00(0x04)
	uint32_t                                      FaceColorID;                                                 // 0x04(0x04)
	uint32_t                                      HairID;                                                      // 0x08(0x04)
	uint32_t                                      HairColorID;                                                 // 0x0c(0x04)
	uint32_t                                      gender;                                                      // 0x10(0x04)
};

// ScriptStruct BravoHotelGame.AIItemSettingData
// Size: 0x18 (Inherited: 0x08)
struct FAIItemSettingData : FTableRowBase 
{
	struct TArray<None>                           PhaseItemSettingInfo;                                        // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.AIPhaseItemSettingInfo
// Size: 0x28 (Inherited: 0x00)
struct FAIPhaseItemSettingInfo 
{
	uint32_t                                      Phase;                                                       // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct TArray<None>                           EquipItems;                                                  // 0x08(0x10)
	struct TArray<None>                           DropItems;                                                   // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.DebugAircraftWorldInfo
// Size: 0x40 (Inherited: 0x00)
struct FDebugAircraftWorldInfo 
{
	struct FNone                                  RightVectorStartWorldPos;                                    // 0x00(0x0c)
	struct FNone                                  RightVectorEndWorldPos;                                      // 0x0c(0x0c)
	struct FNone                                  ChangedStartWorldPos;                                        // 0x18(0x0c)
	struct FNone                                  ChangedEndWorldPos;                                          // 0x24(0x0c)
	struct FNone                                  IgnoreAreaWorldPos;                                          // 0x30(0x0c)
	float                                         IgnoreAreaRadius;                                            // 0x3c(0x04)
};

// ScriptStruct BravoHotelGame.AirCraftInfo
// Size: 0x5c (Inherited: 0x00)
struct FAirCraftInfo 
{
	struct FNone                                  CurrentPos;                                                  // 0x00(0x08)
	struct FNone                                  StartPos;                                                    // 0x08(0x08)
	struct FNone                                  EndPos;                                                      // 0x10(0x08)
	struct FNone                                  DescentStartPos;                                             // 0x18(0x08)
	struct FNone                                  DescentEndPos;                                               // 0x20(0x08)
	struct FNone                                  DebugData;                                                   // 0x28(0x2c)
	float                                         Angle;                                                       // 0x54(0x04)
	uint32_t                                      FindDescentPointCnt;                                         // 0x58(0x04)
};

// ScriptStruct BravoHotelGame.DebugAirCraftInfo
// Size: 0x2c (Inherited: 0x00)
struct FDebugAirCraftInfo 
{
	struct FNone                                  RightVectorStart;                                            // 0x00(0x08)
	struct FNone                                  RightVectorEnd;                                              // 0x08(0x08)
	struct FNone                                  ChangedStartPos;                                             // 0x10(0x08)
	struct FNone                                  ChangedEndPos;                                               // 0x18(0x08)
	struct FNone                                  IgnoreAreaPos;                                               // 0x20(0x08)
	float                                         IgnoreAreaRadius;                                            // 0x28(0x04)
};

// ScriptStruct BravoHotelGame.AirCraftBoardingInfo
// Size: 0x0c (Inherited: 0x00)
struct FAirCraftBoardingInfo 
{
	char                                          IsDescent : 0;                                               // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
	char                                          IsMyTeam : 0;                                                // 0x01(0x01)
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
	uint32_t                                      PlayerUniqueID;                                              // 0x04(0x04)
	char                                          AirCraftID;                                                  // 0x08(0x01)
	char                                          SeatID;                                                      // 0x09(0x01)
	char                                          UnknownDataA[0x2];                                           // 0x0a(0x02)
};

// ScriptStruct BravoHotelGame.KillAliveInfo
// Size: 0x14 (Inherited: 0x00)
struct FKillAliveInfo 
{
	char                                          Visibility : 0;                                              // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	uint32_t                                      KillCount;                                                   // 0x04(0x04)
	uint32_t                                      AssistCount;                                                 // 0x08(0x04)
	uint32_t                                      AliveCount;                                                  // 0x0c(0x04)
	uint32_t                                      AliveTeamCount;                                              // 0x10(0x04)
};

// ScriptStruct BravoHotelGame.ConditionedSound
// Size: 0x10 (Inherited: 0x00)
struct FConditionedSound 
{
	uint32_t                                      ConditionMask;                                               // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FNone*                                 Event;                                                       // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.AttachedUsableItem_ScalarParamData
// Size: 0x10 (Inherited: 0x00)
struct FAttachedUsableItem_ScalarParamData 
{
	struct FName                                  Key;                                                         // 0x00(0x08)
	float                                         BeginValue;                                                  // 0x08(0x04)
	float                                         EndValue;                                                    // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.AudioEventAssetData
// Size: 0x18 (Inherited: 0x00)
struct FAudioEventAssetData 
{
	char                                          bLoadAsync : 0;                                              // 0x00(0x01)
	char                                          bPrepareAsset : 0;                                           // 0x00(0x01)
	char                                          bCleanUpPreparedAsset : 0;                                   // 0x00(0x01)
	char                                          bUnloadFromWwise : 0;                                        // 0x00(0x01)
	char                                          UnknownData0[0x18];                                          // 0x00(0x18)
};

// ScriptStruct BravoHotelGame.AudioGeometryData
// Size: 0x60 (Inherited: 0x50)
struct FAudioGeometryData : FAkGeometryData 
{
	struct TArray<None>                           WorldVertices;                                               // 0x50(0x10)
};

// ScriptStruct BravoHotelGame.CameraMoveData
// Size: 0x78 (Inherited: 0x00)
struct FCameraMoveData 
{
	char                                          UnknownData0[0x18];                                          // 0x00(0x18)
	struct FNone*                                 InCurve;                                                     // 0x18(0x08)
	struct FNone*                                 InHeightCurve;                                               // 0x20(0x08)
	char                                          UnknownData28[0x10];                                         // 0x28(0x10)
	struct FNone*                                 SecondCurve;                                                 // 0x38(0x08)
	struct FNone*                                 SecondHeightCurve;                                           // 0x40(0x08)
	char                                          UnknownData48[0x10];                                         // 0x48(0x10)
	struct FNone*                                 OutCurve;                                                    // 0x58(0x08)
	struct FNone*                                 CurveFPP;                                                    // 0x60(0x08)
	char                                          UnknownData68[0x10];                                         // 0x68(0x10)
};

// ScriptStruct BravoHotelGame.ReplicationMoveParameter
// Size: 0x08 (Inherited: 0x00)
struct FReplicationMoveParameter 
{
	float                                         SignificanceTickInterval;                                    // 0x00(0x04)
	uint32_t                                      DynamicFrequency;                                            // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.Coh_LocalizationTable
// Size: 0x10 (Inherited: 0x00)
struct FCoh_LocalizationTable 
{
	struct TArray<None>                           Tbl;                                                         // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Coh_LocalizationString
// Size: 0x28 (Inherited: 0x00)
struct FCoh_LocalizationString 
{
	struct FString                                Key;                                                         // 0x00(0x10)
	struct FText                                  SourceString;                                                // 0x10(0x18)
};

// ScriptStruct BravoHotelGame.ResuscitationMarkerInfo
// Size: 0x20 (Inherited: 0x00)
struct FResuscitationMarkerInfo 
{
	struct FNone                                  Pos;                                                         // 0x00(0x08)
	struct FNone                                  PrePos;                                                      // 0x08(0x08)
	struct FNone*                                 Widget;                                                      // 0x10(0x08)
	struct FNone*                                 PlayerState;                                                 // 0x18(0x08)
};

// ScriptStruct BravoHotelGame.LocalPingMarkerInfo
// Size: 0x48 (Inherited: 0x00)
struct FLocalPingMarkerInfo 
{
	struct FNone                                  Pos;                                                         // 0x00(0x08)
	struct FNone                                  PrePos;                                                      // 0x08(0x08)
	struct FNone*                                 Widget;                                                      // 0x10(0x08)
	struct FNone                                  PingInfo;                                                    // 0x18(0x30)
};

// ScriptStruct BravoHotelGame.ExpertWeaponItemMarkerInfo
// Size: 0x40 (Inherited: 0x00)
struct FExpertWeaponItemMarkerInfo 
{
	struct FNone                                  Pos;                                                         // 0x00(0x08)
	struct FNone                                  PrePos;                                                      // 0x08(0x08)
	struct FNone*                                 Widget;                                                      // 0x10(0x08)
	struct FNone                                  PingInfo;                                                    // 0x18(0x28)
};

// ScriptStruct BravoHotelGame.MaterialItemMarkerInfo
// Size: 0x48 (Inherited: 0x00)
struct FMaterialItemMarkerInfo 
{
	struct FNone                                  Pos;                                                         // 0x00(0x08)
	struct FNone                                  PrePos;                                                      // 0x08(0x08)
	struct FNone*                                 Widget;                                                      // 0x10(0x08)
	struct FNone                                  PingInfo;                                                    // 0x18(0x30)
};

// ScriptStruct BravoHotelGame.MarkerInfo
// Size: 0x28 (Inherited: 0x00)
struct FMarkerInfo 
{
	char                                          PreVisibility : 0;                                           // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
	char                                          Visibility : 0;                                              // 0x01(0x01)
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
	struct FNone                                  Pos;                                                         // 0x04(0x08)
	struct FNone                                  PrePos;                                                      // 0x0c(0x08)
	uint32_t                                      IconIdx;                                                     // 0x14(0x04)
	struct FNone*                                 Widget;                                                      // 0x18(0x08)
	struct FNone*                                 PlayerState;                                                 // 0x20(0x08)
};

// ScriptStruct BravoHotelGame.CompassUnit
// Size: 0x10 (Inherited: 0x00)
struct FCompassUnit 
{
	struct FNone*                                 Widget;                                                      // 0x00(0x08)
	float                                         Angle;                                                       // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.CrosshairDataMap
// Size: 0x50 (Inherited: 0x00)
struct FCrosshairDataMap 
{
	struct TMap<None, None>                       Map;                                                         // 0x00(0x50)
};

// ScriptStruct BravoHotelGame.CrosshairData
// Size: 0x40 (Inherited: 0x00)
struct FCrosshairData 
{
	struct FNone*                                 Texture;                                                     // 0x00(0x08)
	struct FNone                                  BasePosition;                                                // 0x08(0x08)
	struct FNone                                  BaseSize;                                                    // 0x10(0x08)
	struct FNone                                  BeginUV;                                                     // 0x18(0x08)
	struct FNone                                  EndUV;                                                       // 0x20(0x08)
	struct FNone                                  TintColor;                                                   // 0x28(0x10)
	float                                         SpreadScaleFactor;                                           // 0x38(0x04)
	char                                          UnknownData3C[0x4];                                          // 0x3c(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelWardrobeDataType
// Size: 0x50 (Inherited: 0x00)
struct FBravoHotelWardrobeDataType 
{
	struct FName                                  ItemRowName;                                                 // 0x00(0x08)
	struct TSoftObjectPtr<FNone>                  ItemIconTexture;                                             // 0x08(0x28)
	struct FText                                  ItemName;                                                    // 0x30(0x18)
	enum class None                               WearableType;                                                // 0x48(0x01)
	char                                          UnknownData49[0x7];                                          // 0x49(0x07)
};

// ScriptStruct BravoHotelGame.DataInfo
// Size: 0x218 (Inherited: 0x00)
struct FDataInfo 
{
	struct FNone                                  CurrentGameInfo;                                             // 0x00(0x88)
	struct TMap<None, None>                       CurrentCharacterInfos;                                       // 0x88(0x50)
	struct TMap<None, None>                       CurrentPlayerInfos;                                          // 0xd8(0x50)
	struct TMap<None, None>                       ItemSpawnInfos;                                              // 0x128(0x50)
	struct TMap<None, None>                       GamePlayerInfo;                                              // 0x178(0x50)
	struct TArray<None>                           GamePlayerMatchingRPInfos;                                   // 0x1c8(0x10)
	struct TArray<None>                           BlueZoneEvents;                                              // 0x1d8(0x10)
	struct TArray<None>                           RedZoneEvents;                                               // 0x1e8(0x10)
	struct TArray<None>                           TransportEvents;                                             // 0x1f8(0x10)
	struct TArray<None>                           SupplyEvents;                                                // 0x208(0x10)
};

// ScriptStruct BravoHotelGame.DataEventSupply
// Size: 0xc0 (Inherited: 0x58)
struct FDataEventSupply : FDataEventBase 
{
	char                                          UnknownData58[0x68];                                         // 0x58(0x68)
};

// ScriptStruct BravoHotelGame.DataEventTransport
// Size: 0x80 (Inherited: 0x58)
struct FDataEventTransport : FDataEventBase 
{
	char                                          UnknownData58[0x28];                                         // 0x58(0x28)
};

// ScriptStruct BravoHotelGame.DataEventRedZone
// Size: 0x88 (Inherited: 0x58)
struct FDataEventRedZone : FDataEventBase 
{
	char                                          UnknownData58[0x30];                                         // 0x58(0x30)
};

// ScriptStruct BravoHotelGame.DataEventBlueZone
// Size: 0x80 (Inherited: 0x58)
struct FDataEventBlueZone : FDataEventBase 
{
	char                                          UnknownData58[0x28];                                         // 0x58(0x28)
};

// ScriptStruct BravoHotelGame.GamePlayerMatchingRPInfo
// Size: 0x68 (Inherited: 0x00)
struct FGamePlayerMatchingRPInfo 
{
	struct FString                                UserID;                                                      // 0x00(0x10)
	struct FString                                NickName;                                                    // 0x10(0x10)
	uint32_t                                      Rating;                                                      // 0x20(0x04)
	char                                          UnknownData24[0x4];                                          // 0x24(0x04)
	struct FString                                Training;                                                    // 0x28(0x10)
	struct FString                                TeamID;                                                      // 0x38(0x10)
	uint32_t                                      TeamRating;                                                  // 0x48(0x04)
	char                                          UnknownData4C[0x4];                                          // 0x4c(0x04)
	struct FString                                PartyID;                                                     // 0x50(0x10)
	uint32_t                                      PartyRating;                                                 // 0x60(0x04)
	char                                          UnknownData64[0x4];                                          // 0x64(0x04)
};

// ScriptStruct BravoHotelGame.GamePlayerInfo
// Size: 0x320 (Inherited: 0x00)
struct FGamePlayerInfo 
{
	struct FNone                                  GamePlayerInfo;                                              // 0x00(0x280)
	struct TMap<None, None>                       TempWeapon;                                                  // 0x280(0x50)
	struct TMap<None, None>                       TempDamageType;                                              // 0x2d0(0x50)
};

// ScriptStruct BravoHotelGame.DamageInfoByDamageTypeInfo
// Size: 0x10 (Inherited: 0x00)
struct FDamageInfoByDamageTypeInfo 
{
	uint32_t                                      damage_type_index;                                           // 0x00(0x04)
	char                                          is_class_skill : 0;                                          // 0x04(0x01)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	uint32_t                                      kill_count;                                                  // 0x08(0x04)
	uint32_t                                      Damage;                                                      // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.DamageInfoByWeaponInfo
// Size: 0x1c (Inherited: 0x00)
struct FDamageInfoByWeaponInfo 
{
	uint32_t                                      base_weapon_index;                                           // 0x00(0x04)
	uint32_t                                      shot_count;                                                  // 0x04(0x04)
	uint32_t                                      hitshot_count;                                               // 0x08(0x04)
	uint32_t                                      headshot_count;                                              // 0x0c(0x04)
	uint32_t                                      kill_count;                                                  // 0x10(0x04)
	uint32_t                                      Damage;                                                      // 0x14(0x04)
	uint32_t                                      far_distance;                                                // 0x18(0x04)
};

// ScriptStruct BravoHotelGame.GamePlayRecord
// Size: 0x280 (Inherited: 0x00)
struct FGamePlayRecord 
{
	struct FString                                UserID;                                                      // 0x00(0x10)
	struct FString                                NickName;                                                    // 0x10(0x10)
	char                                          bIsAI : 0;                                                   // 0x20(0x01)
	char                                          UnknownData20[0x8];                                          // 0x20(0x08)
	struct FNone                                  play_record_info;                                            // 0x28(0x258)
};

// ScriptStruct BravoHotelGame.PlayRecordInfo
// Size: 0x258 (Inherited: 0x00)
struct FPlayRecordInfo 
{
	uint32_t                                      game_view_type;                                              // 0x00(0x04)
	uint32_t                                      battle_mode;                                                 // 0x04(0x04)
	uint32_t                                      game_mode;                                                   // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FString                                map_info;                                                    // 0x10(0x10)
	uint64_t                                      start_time;                                                  // 0x20(0x08)
	uint32_t                                      reconnected_count;                                           // 0x28(0x04)
	char                                          UnknownData2C[0x4];                                          // 0x2c(0x04)
	struct FNone                                  class_info;                                                  // 0x30(0x28)
	struct FNone                                  gold_info;                                                   // 0x58(0x2c)
	struct FNone                                  match_result_info;                                           // 0x84(0x34)
	struct FNone                                  battle_royal_info;                                           // 0xb8(0x24)
	char                                          UnknownDataDC[0x4];                                          // 0xdc(0x04)
	struct FNone                                  damage_info;                                                 // 0xe0(0x20)
	struct FNone                                  shot_info;                                                   // 0x100(0x10)
	struct FNone                                  weapon_durability_info;                                      // 0x110(0x30)
	struct FNone                                  vehicle_info;                                                // 0x140(0x10)
	struct FNone                                  flying_info;                                                 // 0x150(0x34)
	char                                          UnknownData184[0x4];                                         // 0x184(0x04)
	struct F ��灯⽳潈灳瑩污启ⵘ午牣敥彮㄰䅟吮ⵘ午牣敥彮㄰䅟༼䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳牐灯⽳潈灳瑩污启ⵘ午牣敥彮㄰䅟ϼ塔䠭捓敲湥た弱Aጐ Equipment_info;                                              // 0x188(0xc0)
	struct FString                                extra_data;                                                  // 0x248(0x10)
};

// ScriptStruct BravoHotelGame.Equipment_info
// Size: 0xc0 (Inherited: 0x00)
struct FEquipment_info 
{
	uint32_t                                      weapon_slot1_id;                                             // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                weapon_slot1_name;                                           // 0x08(0x10)
	uint32_t                                      weapon_slot2_id;                                             // 0x18(0x04)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
	struct FString                                weapon_slot2_name;                                           // 0x20(0x10)
	uint32_t                                      weapon_slot3_id;                                             // 0x30(0x04)
	char                                          UnknownData34[0x4];                                          // 0x34(0x04)
	struct FString                                weapon_slot3_name;                                           // 0x38(0x10)
	uint32_t                                      weapon_slot4_id;                                             // 0x48(0x04)
	char                                          UnknownData4C[0x4];                                          // 0x4c(0x04)
	struct FString                                weapon_slot4_name;                                           // 0x50(0x10)
	uint32_t                                      weapon_slot5_id;                                             // 0x60(0x04)
	char                                          UnknownData64[0x4];                                          // 0x64(0x04)
	struct FString                                weapon_slot5_name;                                           // 0x68(0x10)
	uint32_t                                      helmet_id;                                                   // 0x78(0x04)
	char                                          UnknownData7C[0x4];                                          // 0x7c(0x04)
	struct FString                                helmet_name;                                                 // 0x80(0x10)
	uint32_t                                      armor_id;                                                    // 0x90(0x04)
	char                                          UnknownData94[0x4];                                          // 0x94(0x04)
	struct FString                                armor_name;                                                  // 0x98(0x10)
	uint32_t                                      bag_id;                                                      // 0xa8(0x04)
	char                                          UnknownDataAC[0x4];                                          // 0xac(0x04)
	struct FString                                bag_name;                                                    // 0xb0(0x10)
};

// ScriptStruct BravoHotelGame.FlyingInfo
// Size: 0x34 (Inherited: 0x00)
struct FFlyingInfo 
{
	uint32_t                                      diving_time;                                                 // 0x00(0x04)
	uint32_t                                      diving_location_loc_x;                                       // 0x04(0x04)
	uint32_t                                      diving_location_loc_y;                                       // 0x08(0x04)
	uint32_t                                      diving_location_loc_z;                                       // 0x0c(0x04)
	uint32_t                                      parachute_time;                                              // 0x10(0x04)
	uint32_t                                      parachute_loc_x;                                             // 0x14(0x04)
	uint32_t                                      parachute_loc_y;                                             // 0x18(0x04)
	uint32_t                                      parachute_loc_z;                                             // 0x1c(0x04)
	uint32_t                                      landing_time;                                                // 0x20(0x04)
	uint32_t                                      landing_loc_x;                                               // 0x24(0x04)
	uint32_t                                      landing_loc_y;                                               // 0x28(0x04)
	uint32_t                                      landing_loc_z;                                               // 0x2c(0x04)
	uint32_t                                      flying_distance;                                             // 0x30(0x04)
};

// ScriptStruct BravoHotelGame.VehicleInfo
// Size: 0x10 (Inherited: 0x00)
struct FVehicleInfo 
{
	uint32_t                                      explosion_count;                                             // 0x00(0x04)
	uint32_t                                      destroy_tire_count;                                          // 0x04(0x04)
	uint32_t                                      total_damage;                                                // 0x08(0x04)
	uint32_t                                      road_kill_count;                                             // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.WeaponDurabilityInfo
// Size: 0x30 (Inherited: 0x00)
struct FWeaponDurabilityInfo 
{
	struct FString                                item_uid;                                                    // 0x00(0x10)
	uint32_t                                      item_id;                                                     // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct FString                                item_name;                                                   // 0x18(0x10)
	uint32_t                                      before_durability;                                           // 0x28(0x04)
	uint32_t                                      after_durability;                                            // 0x2c(0x04)
};

// ScriptStruct BravoHotelGame.ShotInfo
// Size: 0x10 (Inherited: 0x00)
struct FShotInfo 
{
	uint32_t                                      headshot_count;                                              // 0x00(0x04)
	uint32_t                                      headshot_kill_count;                                         // 0x04(0x04)
	uint32_t                                      hitshot_count;                                               // 0x08(0x04)
	uint32_t                                      all_shot_count;                                              // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.DamageInfos
// Size: 0x20 (Inherited: 0x00)
struct FDamageInfos 
{
	struct TArray<None>                           by_weapon;                                                   // 0x00(0x10)
	struct TArray<None>                           by_damage_type;                                              // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.BattelRoyalInfo
// Size: 0x24 (Inherited: 0x00)
struct FBattelRoyalInfo 
{
	uint32_t                                      live_time;                                                   // 0x00(0x04)
	uint32_t                                      total_move_distance;                                         // 0x04(0x04)
	uint32_t                                      open_invisible_drop_box_count;                               // 0x08(0x04)
	uint32_t                                      open_air_drop_box_count;                                     // 0x0c(0x04)
	uint32_t                                      destory_supply_helicopter_count;                             // 0x10(0x04)
	float                                         heal_amount;                                                 // 0x14(0x04)
	uint32_t                                      boost_amount;                                                // 0x18(0x04)
	uint32_t                                      air_walk_distance;                                           // 0x1c(0x04)
	uint32_t                                      max_air_walk_distance;                                       // 0x20(0x04)
};

// ScriptStruct BravoHotelGame.MatchResultInfo
// Size: 0x34 (Inherited: 0x00)
struct FMatchResultInfo 
{
	uint32_t                                      rp;                                                          // 0x00(0x04)
	uint32_t                                      Rank;                                                        // 0x04(0x04)
	uint32_t                                      team_count;                                                  // 0x08(0x04)
	char                                          is_top_rank : 0;                                             // 0x0c(0x01)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	uint32_t                                      kill_count;                                                  // 0x10(0x04)
	uint32_t                                      ai_kill_count;                                               // 0x14(0x04)
	uint32_t                                      death;                                                       // 0x18(0x04)
	uint32_t                                      sequence_kill;                                               // 0x1c(0x04)
	uint32_t                                      team_alive_count;                                            // 0x20(0x04)
	uint32_t                                      team_kill_count;                                             // 0x24(0x04)
	uint32_t                                      assist_count;                                                // 0x28(0x04)
	uint32_t                                      total_damage;                                                // 0x2c(0x04)
	uint32_t                                      loser_score;                                                 // 0x30(0x04)
};

// ScriptStruct BravoHotelGame.GoldInfo
// Size: 0x2c (Inherited: 0x00)
struct FGoldInfo 
{
	uint32_t                                      account_gold_game_start;                                     // 0x00(0x04)
	uint32_t                                      account_gold_game_end;                                       // 0x04(0x04)
	struct FNone                                  gain_gold_info;                                              // 0x08(0x0c)
	struct FNone                                  use_gold_info;                                               // 0x14(0x18)
};

// ScriptStruct BravoHotelGame.UseGold
// Size: 0x18 (Inherited: 0x00)
struct FUseGold 
{
	uint32_t                                      paid_coin_gold;                                              // 0x00(0x04)
	uint32_t                                      paid_account_gold;                                           // 0x04(0x04)
	uint32_t                                      class_changed_gold;                                          // 0x08(0x04)
	uint32_t                                      supplybox_opened_gold;                                       // 0x0c(0x04)
	uint32_t                                      request_resuscitated_gold;                                   // 0x10(0x04)
	uint32_t                                      resuscitated_gold;                                           // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.GainGold
// Size: 0x0c (Inherited: 0x00)
struct FGainGold 
{
	uint32_t                                      farming_gold;                                                // 0x00(0x04)
	uint32_t                                      random_bonus_gold;                                           // 0x04(0x04)
	uint32_t                                      remain_coin_gold;                                            // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.ClassInfo
// Size: 0x28 (Inherited: 0x00)
struct FClassInfo 
{
	uint32_t                                      pc_class_type_index;                                         // 0x00(0x04)
	uint32_t                                      base_weapon_index;                                           // 0x04(0x04)
	struct TArray<None>                           ignore_pc_class_type_indexs;                                 // 0x08(0x10)
	char                                          is_get_ultimate_skill : 0;                                   // 0x18(0x01)
	char                                          UnknownData18[0x4];                                          // 0x18(0x04)
	uint32_t                                      Level;                                                       // 0x1c(0x04)
	uint32_t                                      level_up_by_book;                                            // 0x20(0x04)
	char                                          UnknownData24[0x4];                                          // 0x24(0x04)
};

// ScriptStruct BravoHotelGame.DediDataItemSpawnInfo
// Size: 0x20 (Inherited: 0x01)
struct FDediDataItemSpawnInfo : FDediDataInfoBase 
{
	char                                          UnknownData1[0x1f];                                          // 0x01(0x1f)
};

// ScriptStruct BravoHotelGame.DediDataPlayerInfo
// Size: 0x28 (Inherited: 0x01)
struct FDediDataPlayerInfo : FDediDataInfoBase 
{
	char                                          UnknownData1[0x27];                                          // 0x01(0x27)
};

// ScriptStruct BravoHotelGame.DediDataGameInfo
// Size: 0x88 (Inherited: 0x01)
struct FDediDataGameInfo : FDediDataInfoBase 
{
	char                                          UnknownData1[0x87];                                          // 0x01(0x87)
};

// ScriptStruct BravoHotelGame.KickedUserInfoMap
// Size: 0x50 (Inherited: 0x00)
struct FKickedUserInfoMap 
{
	struct TMap<None, None>                       UserAndReason;                                               // 0x00(0x50)
};

// ScriptStruct BravoHotelGame.DebugRecordInfo
// Size: 0x188 (Inherited: 0x00)
struct FDebugRecordInfo 
{
	struct FNone                                  ItemData;                                                    // 0x00(0xe8)
	struct TMap<None, None>                       PersonalSupplyBoxDebugList;                                  // 0xe8(0x50)
	struct TMap<None, None>                       VehicleDebugList;                                            // 0x138(0x50)
};

// ScriptStruct BravoHotelGame.VehicleSpawnDebugDataList
// Size: 0x10 (Inherited: 0x00)
struct FVehicleSpawnDebugDataList 
{
	struct TArray<None>                           List;                                                        // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.VehicleSpawnDebugData
// Size: 0x20 (Inherited: 0x00)
struct FVehicleSpawnDebugData 
{
	struct FNone                                  SpawnedLoaction;                                             // 0x00(0x0c)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FString                                ParentVehicleActorName;                                      // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.ItemDataInfo
// Size: 0xe8 (Inherited: 0x00)
struct FItemDataInfo 
{
	uint32_t                                      LastTotalSpawnedPickUpItemCount;                             // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct TArray<None>                           ItemSpawnStateList;                                          // 0x08(0x10)
	struct TMap<None, None>                       ItemLogList;                                                 // 0x18(0x50)
	uint32_t                                      PickUpItemSpawnCount;                                        // 0x68(0x04)
	uint32_t                                      TotalItemSpawnCount;                                         // 0x6c(0x04)
	uint32_t                                      MaxPickUpItemSpawnCount;                                     // 0x70(0x04)
	char                                          UnlimitItemSpawnCnt : 0;                                     // 0x74(0x01)
	char                                          UnknownData74[0x1];                                          // 0x74(0x01)
	char                                          ItemSpawnInBlueZone : 0;                                     // 0x75(0x01)
	char                                          UnknownData75[0x1];                                          // 0x75(0x01)
	char                                          UsingWorldItemSpawnTalbeInBlueZone : 0;                      // 0x76(0x01)
	char                                          UnknownData76[0x1];                                          // 0x76(0x01)
	char                                          UsingMaxPickUpItemSpawnCount : 0;                            // 0x77(0x01)
	char                                          UnknownData77[0x1];                                          // 0x77(0x01)
	char                                          UsingOuterBlueZone : 0;                                      // 0x78(0x01)
	char                                          UnknownData78[0x8];                                          // 0x78(0x08)
	struct FNone                                  ItemSpawnDebugList;                                          // 0x80(0x68)
};

// ScriptStruct BravoHotelGame.ItemSpawnDebug
// Size: 0x68 (Inherited: 0x00)
struct FItemSpawnDebug 
{
	struct FName                                  WorldItemSpawnTableKey;                                      // 0x00(0x08)
	struct FNone                                  OuterCenter;                                                 // 0x08(0x08)
	float                                         OuterRadius;                                                 // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct TMap<None, None>                       BuildingItemList;                                            // 0x18(0x50)
};

// ScriptStruct BravoHotelGame.ItemDebugInfo
// Size: 0x60 (Inherited: 0x00)
struct FItemDebugInfo 
{
	struct FNone                                  BuuildingLocation;                                           // 0x00(0x0c)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct TMap<None, None>                       StandardGroupData;                                           // 0x10(0x50)
};

// ScriptStruct BravoHotelGame.BuildingDebug
// Size: 0x58 (Inherited: 0x00)
struct FBuildingDebug 
{
	struct FName                                  StandardGroupKey;                                            // 0x00(0x08)
	struct TMap<None, None>                       ItemDivisionDebugList;                                       // 0x08(0x50)
};

// ScriptStruct BravoHotelGame.ItemDivisionDebugList
// Size: 0x30 (Inherited: 0x00)
struct FItemDivisionDebugList 
{
	struct TArray<None>                           List;                                                        // 0x00(0x10)
	struct TArray<None>                           RateAddList;                                                 // 0x10(0x10)
	struct TArray<None>                           RateRemoveList;                                              // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.ItemDivisionDebug
// Size: 0x14 (Inherited: 0x00)
struct FItemDivisionDebug 
{
	struct FName                                  ItemName;                                                    // 0x00(0x08)
	uint32_t                                      DivisionCnt;                                                 // 0x08(0x04)
	uint32_t                                      SpawnCnt;                                                    // 0x0c(0x04)
	char                                          CompleteDivision : 0;                                        // 0x10(0x01)
	char                                          UnknownData10[0x1];                                          // 0x10(0x01)
	char                                          CompleteSpawed : 0;                                          // 0x11(0x01)
	char                                          UnknownData11[0x3];                                          // 0x11(0x03)
};

// ScriptStruct BravoHotelGame.ItemCountInfo
// Size: 0x1c (Inherited: 0x00)
struct FItemCountInfo 
{
	uint32_t                                      Division;                                                    // 0x00(0x04)
	uint32_t                                      RateDivision;                                                // 0x04(0x04)
	uint32_t                                      RateDelete;                                                  // 0x08(0x04)
	uint32_t                                      Spawned;                                                     // 0x0c(0x04)
	uint32_t                                      Gained;                                                      // 0x10(0x04)
	uint32_t                                      TrySpawnPickUpCount;                                         // 0x14(0x04)
	uint32_t                                      PickUpCount;                                                 // 0x18(0x04)
};

// ScriptStruct BravoHotelGame.ItemSpawnState
// Size: 0x14 (Inherited: 0x00)
struct FItemSpawnState 
{
	uint32_t                                      CurAliveUserCnt;                                             // 0x00(0x04)
	uint32_t                                      MaxLimitSpawnCnt;                                            // 0x04(0x04)
	uint32_t                                      EnableCurMaxSpawnCnt;                                        // 0x08(0x04)
	uint32_t                                      CurSpawnedCnt;                                               // 0x0c(0x04)
	uint32_t                                      TotalSpawnedCntFromBox;                                      // 0x10(0x04)
};

// ScriptStruct BravoHotelGame.ExtraDebugInfo
// Size: 0x10 (Inherited: 0x00)
struct FExtraDebugInfo 
{
	struct FNone*                                 ItemBox;                                                     // 0x00(0x08)
	struct FName                                  RandomSpawnKey;                                              // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.ItemDebugDetailInfo
// Size: 0x18 (Inherited: 0x00)
struct FItemDebugDetailInfo 
{
	struct FString                                ItemName;                                                    // 0x00(0x10)
	uint32_t                                      Count;                                                       // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameTechReportData
// Size: 0xe8 (Inherited: 0x00)
struct FAnalysisClientGameTechReportData 
{
	struct FNone                                  pc_data;                                                     // 0x00(0x88)
	struct FNone                                  fps_data;                                                    // 0x88(0x50)
	struct FNone                                  loading_data;                                                // 0xd8(0x0c)
	char                                          UnknownDataE4[0x4];                                          // 0xe4(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameLoadingData
// Size: 0x0c (Inherited: 0x00)
struct FAnalysisClientGameLoadingData 
{
	char                                          game_start : 0;                                              // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	uint32_t                                      loading_seconds;                                             // 0x04(0x04)
	uint32_t                                      relative_loading_seconds;                                    // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameTrackFPSData
// Size: 0x50 (Inherited: 0x00)
struct FAnalysisClientGameTrackFPSData 
{
	struct FString                                start_record_time;                                           // 0x00(0x10)
	struct FString                                stop_record_time;                                            // 0x10(0x10)
	float                                         avg_fps;                                                     // 0x20(0x04)
	float                                         min_fps;                                                     // 0x24(0x04)
	float                                         max_fps;                                                     // 0x28(0x04)
	float                                         standard_deviation_fps;                                      // 0x2c(0x04)
	uint32_t                                      hitch_count;                                                 // 0x30(0x04)
	float                                         under50_fps_percent;                                         // 0x34(0x04)
	float                                         inter50_60_fps_percent;                                      // 0x38(0x04)
	float                                         inter60_70_fps_percent;                                      // 0x3c(0x04)
	float                                         inter70_80_fps_percent;                                      // 0x40(0x04)
	float                                         inter80_90_fps_percent;                                      // 0x44(0x04)
	float                                         over90_fps_percent;                                          // 0x48(0x04)
	char                                          UnknownData4C[0x4];                                          // 0x4c(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGamePCData
// Size: 0x88 (Inherited: 0x00)
struct FAnalysisClientGamePCData 
{
	struct FString                                os_name;                                                     // 0x00(0x10)
	struct FString                                cpu_name;                                                    // 0x10(0x10)
	struct FString                                gpu_name;                                                    // 0x20(0x10)
	struct FString                                mac_address;                                                 // 0x30(0x10)
	struct FString                                install_storage_type;                                        // 0x40(0x10)
	float                                         game_view_width;                                             // 0x50(0x04)
	float                                         game_view_height;                                            // 0x54(0x04)
	uint64_t                                      total_physical_memory;                                       // 0x58(0x08)
	uint64_t                                      used_physical_memory;                                        // 0x60(0x08)
	uint64_t                                      total_virtual_memory;                                        // 0x68(0x08)
	uint64_t                                      used_virtual_memory;                                         // 0x70(0x08)
	uint32_t                                      texture_quality;                                             // 0x78(0x04)
	uint32_t                                      view_distance_quality;                                       // 0x7c(0x04)
	float                                         avg_graphics_quality;                                        // 0x80(0x04)
	char                                          is_blacklisted_graphics_driver : 0;                          // 0x84(0x01)
	char                                          UnknownData84[0x4];                                          // 0x84(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameEarlyTechReportData
// Size: 0xe8 (Inherited: 0x00)
struct FAnalysisClientGameEarlyTechReportData 
{
	struct FNone                                  pc_data;                                                     // 0x00(0x88)
	struct FNone                                  fps_data;                                                    // 0x88(0x50)
	struct FNone                                  loading_data;                                                // 0xd8(0x0c)
	char                                          UnknownDataE4[0x4];                                          // 0xe4(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameNetwork
// Size: 0x28 (Inherited: 0x00)
struct FAnalysisClientGameNetwork 
{
	uint32_t                                      spectated;                                                   // 0x00(0x04)
	uint32_t                                      avg_ping;                                                    // 0x04(0x04)
	uint32_t                                      max_ping;                                                    // 0x08(0x04)
	uint32_t                                      min_ping;                                                    // 0x0c(0x04)
	uint32_t                                      received_pkt_bytesec;                                        // 0x10(0x04)
	uint32_t                                      received_num_pkt;                                            // 0x14(0x04)
	uint32_t                                      received_loss_ratio;                                         // 0x18(0x04)
	uint32_t                                      sended_pkt_bytesec;                                          // 0x1c(0x04)
	uint32_t                                      sended_num_pkt;                                              // 0x20(0x04)
	uint32_t                                      sended_loss_ratio;                                           // 0x24(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameEscapeData
// Size: 0x38 (Inherited: 0x00)
struct FAnalysisClientGameEscapeData 
{
	struct FString                                matching_success_time;                                       // 0x00(0x10)
	struct FString                                escape_time;                                                 // 0x10(0x10)
	uint32_t                                      escape_state;                                                // 0x20(0x04)
	uint32_t                                      survive_state;                                               // 0x24(0x04)
	uint32_t                                      spectated;                                                   // 0x28(0x04)
	uint32_t                                      spectator_time;                                              // 0x2c(0x04)
	uint32_t                                      reported;                                                    // 0x30(0x04)
	char                                          UnknownData34[0x4];                                          // 0x34(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameExitData
// Size: 0x04 (Inherited: 0x00)
struct FAnalysisClientGameExitData 
{
	uint32_t                                      exit_type;                                                   // 0x00(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameStartData
// Size: 0x20 (Inherited: 0x00)
struct FAnalysisClientGameStartData 
{
	struct FString                                matching_start_time;                                         // 0x00(0x10)
	struct FString                                game_start_time;                                             // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.ReplayReportInfo
// Size: 0x38 (Inherited: 0x00)
struct FReplayReportInfo 
{
	struct FString                                reporter_nickname;                                           // 0x00(0x10)
	struct FString                                victim_nickname;                                             // 0x10(0x10)
	struct FString                                suspect_nickname;                                            // 0x20(0x10)
	uint32_t                                      report_type;                                                 // 0x30(0x04)
	uint32_t                                      replay_time;                                                 // 0x34(0x04)
};

// ScriptStruct BravoHotelGame.WeaponItemLogData
// Size: 0x20 (Inherited: 0x00)
struct FWeaponItemLogData 
{
	struct FString                                MaxItemID;                                                   // 0x00(0x10)
	uint32_t                                      MaxItemDamageValue;                                          // 0x10(0x04)
	uint32_t                                      MaxItemDamageCount;                                          // 0x14(0x04)
	uint32_t                                      MaxItemHeadShotCount;                                        // 0x18(0x04)
	float                                         MaxItemDistance;                                             // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.ReportVictimLogData
// Size: 0x18 (Inherited: 0x00)
struct FReportVictimLogData 
{
	struct FNone*                                 DamageTypeClass;                                             // 0x00(0x08)
	struct FString                                HitBone;                                                     // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameReporterDataHead
// Size: 0x98 (Inherited: 0x00)
struct FAnalysisClientGameReporterDataHead 
{
	uint32_t                                      DateTime;                                                    // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                match_id;                                                    // 0x08(0x10)
	struct FString                                game_server_id;                                              // 0x18(0x10)
	struct FString                                MapName;                                                     // 0x28(0x10)
	uint32_t                                      GameViewType;                                                // 0x38(0x04)
	uint32_t                                      GameMode;                                                    // 0x3c(0x04)
	uint32_t                                      BattleMode;                                                  // 0x40(0x04)
	char                                          UnknownData44[0x4];                                          // 0x44(0x04)
	struct FString                                cqr_type;                                                    // 0x48(0x10)
	uint32_t                                      bluezone_id;                                                 // 0x58(0x04)
	uint32_t                                      phase_info;                                                  // 0x5c(0x04)
	uint32_t                                      current_survival_player;                                     // 0x60(0x04)
	uint32_t                                      current_survival_team;                                       // 0x64(0x04)
	uint32_t                                      team_id;                                                     // 0x68(0x04)
	uint32_t                                      team_cnt;                                                    // 0x6c(0x04)
	uint32_t                                      current_rank;                                                // 0x70(0x04)
	char                                          UnknownData74[0x4];                                          // 0x74(0x04)
	struct FString                                UserID;                                                      // 0x78(0x10)
	struct FString                                NickName;                                                    // 0x88(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisClientHeartBeatData
// Size: 0xe8 (Inherited: 0x00)
struct FAnalysisClientHeartBeatData 
{
	struct TArray<None>                           skill_perk_id;                                               // 0x00(0x10)
	struct FNone                                  primary_weapon_info;                                         // 0x10(0x48)
	struct FNone                                  secondary_weapon_info;                                       // 0x58(0x48)
	uint32_t                                      pistol_id;                                                   // 0xa0(0x04)
	uint32_t                                      helmet_id;                                                   // 0xa4(0x04)
	uint32_t                                      armor_id;                                                    // 0xa8(0x04)
	uint32_t                                      bag_id;                                                      // 0xac(0x04)
	struct FString                                State;                                                       // 0xb0(0x10)
	struct FString                                pose;                                                        // 0xc0(0x10)
	struct FString                                Direction;                                                   // 0xd0(0x10)
	uint32_t                                      Speed;                                                       // 0xe0(0x04)
	char                                          UnknownDataE4[0x4];                                          // 0xe4(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameWeaponData
// Size: 0x48 (Inherited: 0x00)
struct FAnalysisClientGameWeaponData 
{
	uint32_t                                      item_id;                                                     // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                item_name;                                                   // 0x08(0x10)
	char                                          is_expert_weapon : 0;                                        // 0x18(0x01)
	char                                          UnknownData18[0x4];                                          // 0x18(0x04)
	uint32_t                                      grade;                                                       // 0x1c(0x04)
	uint32_t                                      enchant;                                                     // 0x20(0x04)
	uint32_t                                      perk_id_2;                                                   // 0x24(0x04)
	uint32_t                                      perk_id_3;                                                   // 0x28(0x04)
	uint32_t                                      perk_id_4;                                                   // 0x2c(0x04)
	uint32_t                                      perk_id_5;                                                   // 0x30(0x04)
	struct FNone                                  parts_id;                                                    // 0x34(0x14)
};

// ScriptStruct BravoHotelGame.AnalysisClientActiveSkillData
// Size: 0x48 (Inherited: 0x00)
struct FAnalysisClientActiveSkillData 
{
	struct TArray<None>                           skill_perk_id;                                               // 0x00(0x10)
	uint32_t                                      perk_id;                                                     // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct FString                                perk_name;                                                   // 0x18(0x10)
	uint32_t                                      start_loc_x;                                                 // 0x28(0x04)
	uint32_t                                      start_loc_y;                                                 // 0x2c(0x04)
	uint32_t                                      start_loc_z;                                                 // 0x30(0x04)
	uint32_t                                      end_loc_x;                                                   // 0x34(0x04)
	uint32_t                                      end_loc_y;                                                   // 0x38(0x04)
	uint32_t                                      end_loc_z;                                                   // 0x3c(0x04)
	uint32_t                                      apply_user_cnt;                                              // 0x40(0x04)
	char                                          UnknownData44[0x4];                                          // 0x44(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientReactSkillData
// Size: 0x28 (Inherited: 0x00)
struct FAnalysisClientReactSkillData 
{
	struct TArray<None>                           skill_perk_id;                                               // 0x00(0x10)
	uint32_t                                      perk_id;                                                     // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct FString                                perk_name;                                                   // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisClientSupplyBoxChangeData
// Size: 0x58 (Inherited: 0x00)
struct FAnalysisClientSupplyBoxChangeData 
{
	uint32_t                                      current_gold;                                                // 0x00(0x04)
	uint32_t                                      setting_gold;                                                // 0x04(0x04)
	struct FNone                                  supply_item_info;                                            // 0x08(0x50)
};

// ScriptStruct BravoHotelGame.AnalysisClientSupplyItemInfoData
// Size: 0x50 (Inherited: 0x00)
struct FAnalysisClientSupplyItemInfoData 
{
	struct FString                                slot1_item_id;                                               // 0x00(0x10)
	struct FString                                slot2_item_id;                                               // 0x10(0x10)
	struct FString                                slot3_item_id;                                               // 0x20(0x10)
	struct FString                                slot4_item_id;                                               // 0x30(0x10)
	struct FString                                slot5_item_id;                                               // 0x40(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisClientSupplyBoxOpenData
// Size: 0x0c (Inherited: 0x00)
struct FAnalysisClientSupplyBoxOpenData 
{
	uint32_t                                      open_time;                                                   // 0x00(0x04)
	uint32_t                                      used_gold;                                                   // 0x04(0x04)
	uint32_t                                      remain_gold;                                                 // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientClassChangeData
// Size: 0x1c (Inherited: 0x00)
struct FAnalysisClientClassChangeData 
{
	uint32_t                                      use_gold;                                                    // 0x00(0x04)
	uint32_t                                      after_gold;                                                  // 0x04(0x04)
	uint32_t                                      before_class;                                                // 0x08(0x04)
	uint32_t                                      change_class;                                                // 0x0c(0x04)
	uint32_t                                      class_select_mode;                                           // 0x10(0x04)
	uint32_t                                      class_select_type;                                           // 0x14(0x04)
	char                                          is_recommended_select : 0;                                   // 0x18(0x01)
	char                                          UnknownData18[0x4];                                          // 0x18(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameVehicleSeatData
// Size: 0xc0 (Inherited: 0x00)
struct FAnalysisClientGameVehicleSeatData 
{
	uint32_t                                      targetseat_index;                                            // 0x00(0x04)
	uint32_t                                      preseat_index;                                               // 0x04(0x04)
	uint32_t                                      driving_time;                                                // 0x08(0x04)
	uint32_t                                      driving_distance;                                            // 0x0c(0x04)
	struct FNone                                  vehicle_info;                                                // 0x10(0xb0)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameVehicleData
// Size: 0xb0 (Inherited: 0x00)
struct FAnalysisClientGameVehicleData 
{
	uint32_t                                      loc_x;                                                       // 0x00(0x04)
	uint32_t                                      loc_y;                                                       // 0x04(0x04)
	uint32_t                                      loc_z;                                                       // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FString                                vehicle_name;                                                // 0x10(0x10)
	struct FString                                vehicle_uid;                                                 // 0x20(0x10)
	uint32_t                                      hp;                                                          // 0x30(0x04)
	uint32_t                                      Fuel;                                                        // 0x34(0x04)
	uint32_t                                      tire1_hp;                                                    // 0x38(0x04)
	uint32_t                                      tire2_hp;                                                    // 0x3c(0x04)
	uint32_t                                      tire3_hp;                                                    // 0x40(0x04)
	uint32_t                                      tire4_hp;                                                    // 0x44(0x04)
	uint32_t                                      Speed;                                                       // 0x48(0x04)
	char                                          UnknownData4C[0x4];                                          // 0x4c(0x04)
	struct FString                                seat1_uid;                                                   // 0x50(0x10)
	struct FString                                seat2_uid;                                                   // 0x60(0x10)
	struct FString                                seat3_uid;                                                   // 0x70(0x10)
	struct FString                                seat4_uid;                                                   // 0x80(0x10)
	struct FString                                seat5_uid;                                                   // 0x90(0x10)
	struct FString                                seat6_uid;                                                   // 0xa0(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameVehicleBattleData
// Size: 0x1c0 (Inherited: 0x00)
struct FAnalysisClientGameVehicleBattleData 
{
	struct FString                                damage_type;                                                 // 0x00(0x10)
	uint32_t                                      damage_type_index;                                           // 0x10(0x04)
	uint32_t                                      damage_weapon_id;                                            // 0x14(0x04)
	struct FString                                damage_weapon_name;                                          // 0x18(0x10)
	struct FString                                hit_bone;                                                    // 0x28(0x10)
	uint32_t                                      Damage;                                                      // 0x38(0x04)
	uint32_t                                      Distance;                                                    // 0x3c(0x04)
	struct FNone                                  attacker_info;                                               // 0x40(0xd0)
	struct FNone                                  vehicle_info;                                                // 0x110(0xb0)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameCharacterData
// Size: 0xd0 (Inherited: 0x00)
struct FAnalysisClientGameCharacterData 
{
	char                                          bIsAI : 0;                                                   // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	uint32_t                                      loc_x;                                                       // 0x04(0x04)
	uint32_t                                      loc_y;                                                       // 0x08(0x04)
	uint32_t                                      loc_z;                                                       // 0x0c(0x04)
	struct FString                                UserID;                                                      // 0x10(0x10)
	struct FString                                NickName;                                                    // 0x20(0x10)
	uint32_t                                      ClassIndex;                                                  // 0x30(0x04)
	uint32_t                                      Level;                                                       // 0x34(0x04)
	uint32_t                                      max_hp;                                                      // 0x38(0x04)
	uint32_t                                      current_hp;                                                  // 0x3c(0x04)
	struct TArray<None>                           skill_perk_id;                                               // 0x40(0x10)
	struct FNone                                  current_weapon;                                              // 0x50(0x48)
	struct FString                                equip_helmet;                                                // 0x98(0x10)
	uint32_t                                      helmet_durability;                                           // 0xa8(0x04)
	char                                          UnknownDataAC[0x4];                                          // 0xac(0x04)
	struct FString                                equip_armour;                                                // 0xb0(0x10)
	uint32_t                                      armour_durability;                                           // 0xc0(0x04)
	uint32_t                                      fire_type;                                                   // 0xc4(0x04)
	uint32_t                                      zoom_type;                                                   // 0xc8(0x04)
	char                                          UnknownDataCC[0x4];                                          // 0xcc(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameGoldenTimeRevivalData
// Size: 0x88 (Inherited: 0x00)
struct FAnalysisClientGameGoldenTimeRevivalData 
{
	uint32_t                                      revived_time;                                                // 0x00(0x04)
	uint32_t                                      gold_request;                                                // 0x04(0x04)
	struct FNone                                  savior_info;                                                 // 0x08(0x40)
	struct FNone                                  revived_info;                                                // 0x48(0x40)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameGoldenTimeRevivalCharacterData
// Size: 0x40 (Inherited: 0x00)
struct FAnalysisClientGameGoldenTimeRevivalCharacterData 
{
	uint32_t                                      loc_x;                                                       // 0x00(0x04)
	uint32_t                                      loc_y;                                                       // 0x04(0x04)
	uint32_t                                      loc_z;                                                       // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FString                                UserID;                                                      // 0x10(0x10)
	struct FString                                NickName;                                                    // 0x20(0x10)
	uint32_t                                      ClassIndex;                                                  // 0x30(0x04)
	uint32_t                                      Level;                                                       // 0x34(0x04)
	uint32_t                                      use_gold;                                                    // 0x38(0x04)
	uint32_t                                      remain_gold;                                                 // 0x3c(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameRevivalData
// Size: 0x78 (Inherited: 0x00)
struct FAnalysisClientGameRevivalData 
{
	uint32_t                                      revived_time;                                                // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FNone                                  savior_info;                                                 // 0x08(0x38)
	struct FNone                                  revived_info;                                                // 0x40(0x38)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameRevivalCharacterData
// Size: 0x38 (Inherited: 0x00)
struct FAnalysisClientGameRevivalCharacterData 
{
	uint32_t                                      loc_x;                                                       // 0x00(0x04)
	uint32_t                                      loc_y;                                                       // 0x04(0x04)
	uint32_t                                      loc_z;                                                       // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FString                                UserID;                                                      // 0x10(0x10)
	struct FString                                NickName;                                                    // 0x20(0x10)
	uint32_t                                      ClassIndex;                                                  // 0x30(0x04)
	uint32_t                                      Level;                                                       // 0x34(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameDiedDeathData
// Size: 0x350 (Inherited: 0x00)
struct FAnalysisClientGameDiedDeathData 
{
	struct FString                                damage_type;                                                 // 0x00(0x10)
	uint32_t                                      damage_type_index;                                           // 0x10(0x04)
	uint32_t                                      damage_weapon_id;                                            // 0x14(0x04)
	struct FString                                damage_weapon_name;                                          // 0x18(0x10)
	struct FString                                hit_bone;                                                    // 0x28(0x10)
	uint32_t                                      Damage;                                                      // 0x38(0x04)
	uint32_t                                      Distance;                                                    // 0x3c(0x04)
	uint32_t                                      team_kill;                                                   // 0x40(0x04)
	char                                          UnknownData44[0x4];                                          // 0x44(0x04)
	struct FNone                                  knockdown_attacker_info;                                     // 0x48(0xd0)
	struct FNone                                  killer_info;                                                 // 0x118(0xd0)
	struct FNone                                  attacker_info;                                               // 0x1e8(0xd0)
	struct FNone                                  victim_info;                                                 // 0x2b8(0x98)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameDiedVictimCharacterMiniData
// Size: 0x98 (Inherited: 0x00)
struct FAnalysisClientGameDiedVictimCharacterMiniData 
{
	char                                          bIsAI : 0;                                                   // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	uint32_t                                      knockdowned;                                                 // 0x04(0x04)
	struct TArray<None>                           skill_perk_id;                                               // 0x08(0x10)
	struct FNone                                  current_weapon;                                              // 0x18(0x48)
	struct FString                                equip_helmet;                                                // 0x60(0x10)
	uint32_t                                      helmet_durability;                                           // 0x70(0x04)
	char                                          UnknownData74[0x4];                                          // 0x74(0x04)
	struct FString                                equip_armour;                                                // 0x78(0x10)
	uint32_t                                      armour_durability;                                           // 0x88(0x04)
	uint32_t                                      fire_type;                                                   // 0x8c(0x04)
	uint32_t                                      zoom_type;                                                   // 0x90(0x04)
	char                                          UnknownData94[0x4];                                          // 0x94(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameDiedKillData
// Size: 0x358 (Inherited: 0x00)
struct FAnalysisClientGameDiedKillData 
{
	struct FString                                damage_type;                                                 // 0x00(0x10)
	uint32_t                                      damage_type_index;                                           // 0x10(0x04)
	uint32_t                                      damage_weapon_id;                                            // 0x14(0x04)
	struct FString                                damage_weapon_name;                                          // 0x18(0x10)
	struct FString                                hit_bone;                                                    // 0x28(0x10)
	uint32_t                                      Damage;                                                      // 0x38(0x04)
	uint32_t                                      Distance;                                                    // 0x3c(0x04)
	uint32_t                                      team_kill;                                                   // 0x40(0x04)
	char                                          UnknownData44[0x4];                                          // 0x44(0x04)
	struct FNone                                  knockdown_attacker_info;                                     // 0x48(0xd0)
	struct FNone                                  killer_info;                                                 // 0x118(0xd0)
	struct FNone                                  attacker_info;                                               // 0x1e8(0x98)
	struct FNone                                  victim_info;                                                 // 0x280(0xd8)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameDiedVictimCharacterData
// Size: 0xd8 (Inherited: 0x00)
struct FAnalysisClientGameDiedVictimCharacterData 
{
	char                                          bIsAI : 0;                                                   // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	uint32_t                                      loc_x;                                                       // 0x04(0x04)
	uint32_t                                      loc_y;                                                       // 0x08(0x04)
	uint32_t                                      loc_z;                                                       // 0x0c(0x04)
	struct FString                                UserID;                                                      // 0x10(0x10)
	struct FString                                NickName;                                                    // 0x20(0x10)
	uint32_t                                      ClassIndex;                                                  // 0x30(0x04)
	uint32_t                                      Level;                                                       // 0x34(0x04)
	uint32_t                                      max_hp;                                                      // 0x38(0x04)
	uint32_t                                      knockdowned;                                                 // 0x3c(0x04)
	uint32_t                                      current_hp;                                                  // 0x40(0x04)
	char                                          UnknownData44[0x4];                                          // 0x44(0x04)
	struct TArray<None>                           skill_perk_id;                                               // 0x48(0x10)
	struct FNone                                  current_weapon;                                              // 0x58(0x48)
	struct FString                                equip_helmet;                                                // 0xa0(0x10)
	uint32_t                                      helmet_durability;                                           // 0xb0(0x04)
	char                                          UnknownDataB4[0x4];                                          // 0xb4(0x04)
	struct FString                                equip_armour;                                                // 0xb8(0x10)
	uint32_t                                      armour_durability;                                           // 0xc8(0x04)
	uint32_t                                      fire_type;                                                   // 0xcc(0x04)
	uint32_t                                      zoom_type;                                                   // 0xd0(0x04)
	char                                          UnknownDataD4[0x4];                                          // 0xd4(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameCharacterMiniData
// Size: 0x98 (Inherited: 0x00)
struct FAnalysisClientGameCharacterMiniData 
{
	char                                          bIsAI : 0;                                                   // 0x00(0x01)
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	struct TArray<None>                           skill_perk_id;                                               // 0x08(0x10)
	struct FNone                                  current_weapon;                                              // 0x18(0x48)
	struct FString                                equip_helmet;                                                // 0x60(0x10)
	uint32_t                                      helmet_durability;                                           // 0x70(0x04)
	char                                          UnknownData74[0x4];                                          // 0x74(0x04)
	struct FString                                equip_armour;                                                // 0x78(0x10)
	uint32_t                                      armour_durability;                                           // 0x88(0x04)
	uint32_t                                      fire_type;                                                   // 0x8c(0x04)
	uint32_t                                      zoom_type;                                                   // 0x90(0x04)
	char                                          UnknownData94[0x4];                                          // 0x94(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameKnockDownedVictimData
// Size: 0x1b0 (Inherited: 0x00)
struct FAnalysisClientGameKnockDownedVictimData 
{
	struct FString                                damage_type;                                                 // 0x00(0x10)
	uint32_t                                      damage_type_index;                                           // 0x10(0x04)
	uint32_t                                      damage_weapon_id;                                            // 0x14(0x04)
	struct FString                                damage_weapon_name;                                          // 0x18(0x10)
	struct FString                                hit_bone;                                                    // 0x28(0x10)
	uint32_t                                      Damage;                                                      // 0x38(0x04)
	uint32_t                                      Distance;                                                    // 0x3c(0x04)
	uint32_t                                      team_kill;                                                   // 0x40(0x04)
	char                                          UnknownData44[0x4];                                          // 0x44(0x04)
	struct FNone                                  attacker_info;                                               // 0x48(0xd0)
	struct FNone                                  victim_info;                                                 // 0x118(0x98)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameKnockDownedAttackData
// Size: 0x1b0 (Inherited: 0x00)
struct FAnalysisClientGameKnockDownedAttackData 
{
	struct FString                                damage_type;                                                 // 0x00(0x10)
	uint32_t                                      damage_type_index;                                           // 0x10(0x04)
	uint32_t                                      damage_weapon_id;                                            // 0x14(0x04)
	struct FString                                damage_weapon_name;                                          // 0x18(0x10)
	struct FString                                hit_bone;                                                    // 0x28(0x10)
	uint32_t                                      Damage;                                                      // 0x38(0x04)
	uint32_t                                      Distance;                                                    // 0x3c(0x04)
	uint32_t                                      team_kill;                                                   // 0x40(0x04)
	char                                          UnknownData44[0x4];                                          // 0x44(0x04)
	struct FNone                                  attacker_info;                                               // 0x48(0x98)
	struct FNone                                  victim_info;                                                 // 0xe0(0xd0)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameBattleHitRateData
// Size: 0x10 (Inherited: 0x00)
struct FAnalysisClientGameBattleHitRateData 
{
	struct TArray<None>                           weapon_info;                                                 // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameHitRateWeaponInfo
// Size: 0x30 (Inherited: 0x00)
struct FAnalysisClientGameHitRateWeaponInfo 
{
	uint32_t                                      last_saved_time;                                             // 0x00(0x04)
	uint32_t                                      item_id;                                                     // 0x04(0x04)
	struct FString                                item_name;                                                   // 0x08(0x10)
	uint32_t                                      shot_count;                                                  // 0x18(0x04)
	uint32_t                                      hitshot_count;                                               // 0x1c(0x04)
	uint32_t                                      headshot_count;                                              // 0x20(0x04)
	uint32_t                                      kill_count;                                                  // 0x24(0x04)
	uint32_t                                      headshot_kill_count;                                         // 0x28(0x04)
	char                                          UnknownData2C[0x4];                                          // 0x2c(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameBattleVictimData
// Size: 0x1a8 (Inherited: 0x00)
struct FAnalysisClientGameBattleVictimData 
{
	struct FString                                damage_type;                                                 // 0x00(0x10)
	uint32_t                                      damage_type_index;                                           // 0x10(0x04)
	uint32_t                                      damage_weapon_id;                                            // 0x14(0x04)
	struct FString                                damage_weapon_name;                                          // 0x18(0x10)
	struct FString                                hit_bone;                                                    // 0x28(0x10)
	uint32_t                                      Damage;                                                      // 0x38(0x04)
	uint32_t                                      Distance;                                                    // 0x3c(0x04)
	struct FNone                                  attacker_info;                                               // 0x40(0xd0)
	struct FNone                                  victim_info;                                                 // 0x110(0x98)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameBattleAttackerData
// Size: 0x1a8 (Inherited: 0x00)
struct FAnalysisClientGameBattleAttackerData 
{
	struct FString                                damage_type;                                                 // 0x00(0x10)
	uint32_t                                      damage_type_index;                                           // 0x10(0x04)
	uint32_t                                      damage_weapon_id;                                            // 0x14(0x04)
	struct FString                                damage_weapon_name;                                          // 0x18(0x10)
	struct FString                                hit_bone;                                                    // 0x28(0x10)
	uint32_t                                      Damage;                                                      // 0x38(0x04)
	uint32_t                                      Distance;                                                    // 0x3c(0x04)
	struct FNone                                  attacker_info;                                               // 0x40(0x98)
	struct FNone                                  victim_info;                                                 // 0xd8(0xd0)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameThrowableUseData
// Size: 0x40 (Inherited: 0x00)
struct FAnalysisClientGameThrowableUseData 
{
	uint32_t                                      item_id;                                                     // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                item_name;                                                   // 0x08(0x10)
	uint32_t                                      item_count;                                                  // 0x18(0x04)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
	struct TArray<None>                           skill_perk_id;                                               // 0x20(0x10)
	uint32_t                                      landing_distance;                                            // 0x30(0x04)
	uint32_t                                      landing_loc_x;                                               // 0x34(0x04)
	uint32_t                                      landing_loc_y;                                               // 0x38(0x04)
	uint32_t                                      landing_loc_z;                                               // 0x3c(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameIteractionData
// Size: 0x30 (Inherited: 0x00)
struct FAnalysisClientGameIteractionData 
{
	struct FString                                Action;                                                      // 0x00(0x10)
	struct FString                                Target;                                                      // 0x10(0x10)
	uint32_t                                      loc_x;                                                       // 0x20(0x04)
	uint32_t                                      loc_y;                                                       // 0x24(0x04)
	uint32_t                                      loc_z;                                                       // 0x28(0x04)
	char                                          UnknownData2C[0x4];                                          // 0x2c(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameItemWeaponData
// Size: 0x78 (Inherited: 0x00)
struct FAnalysisClientGameItemWeaponData 
{
	uint32_t                                      loc_x;                                                       // 0x00(0x04)
	uint32_t                                      loc_y;                                                       // 0x04(0x04)
	uint32_t                                      loc_z;                                                       // 0x08(0x04)
	uint32_t                                      pickup_root;                                                 // 0x0c(0x04)
	uint32_t                                      slot_index;                                                  // 0x10(0x04)
	uint32_t                                      item_id;                                                     // 0x14(0x04)
	struct FString                                item_name;                                                   // 0x18(0x10)
	uint32_t                                      stack;                                                       // 0x28(0x04)
	uint32_t                                      Durability;                                                  // 0x2c(0x04)
	struct FNone                                  Weapon;                                                      // 0x30(0x48)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameItemData
// Size: 0x40 (Inherited: 0x00)
struct FAnalysisClientGameItemData 
{
	uint32_t                                      loc_x;                                                       // 0x00(0x04)
	uint32_t                                      loc_y;                                                       // 0x04(0x04)
	uint32_t                                      loc_z;                                                       // 0x08(0x04)
	uint32_t                                      pickup_root;                                                 // 0x0c(0x04)
	uint32_t                                      slot_index;                                                  // 0x10(0x04)
	uint32_t                                      item_id;                                                     // 0x14(0x04)
	struct FString                                item_name;                                                   // 0x18(0x10)
	uint32_t                                      stack;                                                       // 0x28(0x04)
	uint32_t                                      Durability;                                                  // 0x2c(0x04)
	uint32_t                                      item_type;                                                   // 0x30(0x04)
	uint32_t                                      WearableItemType;                                            // 0x34(0x04)
	uint32_t                                      WeaponAttachmentType;                                        // 0x38(0x04)
	uint32_t                                      current_weight;                                              // 0x3c(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameItemCombineData
// Size: 0x28 (Inherited: 0x00)
struct FAnalysisClientGameItemCombineData 
{
	struct TArray<None>                           source_item_list;                                            // 0x00(0x10)
	uint32_t                                      result_item_id;                                              // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct FString                                result_item_name;                                            // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.CombineSourceItem
// Size: 0x18 (Inherited: 0x00)
struct FCombineSourceItem 
{
	uint32_t                                      source_item_id;                                              // 0x00(0x04)
	uint32_t                                      source_item_count;                                           // 0x04(0x04)
	struct FString                                source_item_name;                                            // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameItemSearchData
// Size: 0x18 (Inherited: 0x00)
struct FAnalysisClientGameItemSearchData 
{
	uint32_t                                      search_type;                                                 // 0x00(0x04)
	uint32_t                                      select_item_id;                                              // 0x04(0x04)
	struct TArray<None>                           find_recipe_list;                                            // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.ItemSearchLog
// Size: 0x10 (Inherited: 0x00)
struct FItemSearchLog 
{
	uint32_t                                      item_id;                                                     // 0x00(0x04)
	struct FNone                                  Location;                                                    // 0x04(0x0c)
};

// ScriptStruct BravoHotelGame.IntLocation
// Size: 0x0c (Inherited: 0x00)
struct FIntLocation 
{
	uint32_t                                      loc_x;                                                       // 0x00(0x04)
	uint32_t                                      loc_y;                                                       // 0x04(0x04)
	uint32_t                                      loc_z;                                                       // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameEnegyBarItemUseData
// Size: 0x30 (Inherited: 0x00)
struct FAnalysisClientGameEnegyBarItemUseData 
{
	uint32_t                                      item_id;                                                     // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                item_name;                                                   // 0x08(0x10)
	uint32_t                                      current_buff_id;                                             // 0x18(0x04)
	uint32_t                                      current_buff_time;                                           // 0x1c(0x04)
	uint32_t                                      to_be_buff_id;                                               // 0x20(0x04)
	uint32_t                                      to_be_buff_time;                                             // 0x24(0x04)
	uint32_t                                      stack_cnt;                                                   // 0x28(0x04)
	char                                          UnknownData2C[0x4];                                          // 0x2c(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameRecoveryItemUseData
// Size: 0x20 (Inherited: 0x00)
struct FAnalysisClientGameRecoveryItemUseData 
{
	uint32_t                                      item_id;                                                     // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                item_name;                                                   // 0x08(0x10)
	uint32_t                                      item_recovery_hp;                                            // 0x18(0x04)
	uint32_t                                      stack_cnt;                                                   // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameExchangePartsData
// Size: 0x48 (Inherited: 0x00)
struct FAnalysisClientGameExchangePartsData 
{
	uint32_t                                      weapon_slot_index;                                           // 0x00(0x04)
	uint32_t                                      weapon_id;                                                   // 0x04(0x04)
	struct FString                                weapon_name;                                                 // 0x08(0x10)
	struct FNone                                  equip_parts_info;                                            // 0x18(0x18)
	struct FNone                                  unequip_parts_info;                                          // 0x30(0x18)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameItemPartsData
// Size: 0x18 (Inherited: 0x00)
struct FAnalysisClientGameItemPartsData 
{
	uint32_t                                      parts_slot_index;                                            // 0x00(0x04)
	uint32_t                                      parts_id;                                                    // 0x04(0x04)
	struct FString                                parts_name;                                                  // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameData
// Size: 0x48 (Inherited: 0x00)
struct FAnalysisClientGameData 
{
	enum class None                               contentType;                                                 // 0x00(0x01)
	char                                          UnknownData1[0x7];                                           // 0x01(0x07)
	struct FString                                Base;                                                        // 0x08(0x10)
	struct FString                                Msg;                                                         // 0x18(0x10)
	struct FString                                nowDate;                                                     // 0x28(0x10)
	struct FString                                ApiPhase;                                                    // 0x38(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisClientGameDataHead
// Size: 0xf0 (Inherited: 0x00)
struct FAnalysisClientGameDataHead 
{
	uint32_t                                      DateTime;                                                    // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                match_id;                                                    // 0x08(0x10)
	struct FString                                game_server_id;                                              // 0x18(0x10)
	struct FString                                MapName;                                                     // 0x28(0x10)
	uint32_t                                      GameViewType;                                                // 0x38(0x04)
	uint32_t                                      GameMode;                                                    // 0x3c(0x04)
	uint32_t                                      BattleMode;                                                  // 0x40(0x04)
	char                                          UnknownData44[0x4];                                          // 0x44(0x04)
	struct FString                                cqr_type;                                                    // 0x48(0x10)
	uint32_t                                      bluezone_id;                                                 // 0x58(0x04)
	uint32_t                                      phase_info;                                                  // 0x5c(0x04)
	uint32_t                                      current_survival_player;                                     // 0x60(0x04)
	uint32_t                                      current_survival_team;                                       // 0x64(0x04)
	uint32_t                                      team_id;                                                     // 0x68(0x04)
	uint32_t                                      team_cnt;                                                    // 0x6c(0x04)
	uint32_t                                      current_rank;                                                // 0x70(0x04)
	char                                          UnknownData74[0x4];                                          // 0x74(0x04)
	struct FString                                UserID;                                                      // 0x78(0x10)
	struct FString                                NickName;                                                    // 0x88(0x10)
	uint32_t                                      ClassIndex;                                                  // 0x98(0x04)
	uint32_t                                      expert_weapon_id;                                            // 0x9c(0x04)
	struct FString                                expert_weapon_name;                                          // 0xa0(0x10)
	uint32_t                                      Level;                                                       // 0xb0(0x04)
	char                                          UnknownDataB4[0x4];                                          // 0xb4(0x04)
	struct FString                                Training;                                                    // 0xb8(0x10)
	uint32_t                                      loser_score;                                                 // 0xc8(0x04)
	uint32_t                                      current_hp;                                                  // 0xcc(0x04)
	uint32_t                                      max_hp;                                                      // 0xd0(0x04)
	uint32_t                                      overheal;                                                    // 0xd4(0x04)
	uint32_t                                      loc_x;                                                       // 0xd8(0x04)
	uint32_t                                      loc_y;                                                       // 0xdc(0x04)
	uint32_t                                      loc_z;                                                       // 0xe0(0x04)
	uint32_t                                      isinbluezone;                                                // 0xe4(0x04)
	uint32_t                                      isinredzone;                                                 // 0xe8(0x04)
	char                                          UnknownDataEC[0x4];                                          // 0xec(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisDediItemSpawnData
// Size: 0x18 (Inherited: 0x00)
struct FAnalysisDediItemSpawnData 
{
	uint32_t                                      total_box_count;                                             // 0x00(0x04)
	uint32_t                                      spawn_box_count;                                             // 0x04(0x04)
	struct TArray<None>                           item_spawn_info;                                             // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisDediItemData
// Size: 0x20 (Inherited: 0x00)
struct FAnalysisDediItemData 
{
	uint32_t                                      item_id;                                                     // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                item_name;                                                   // 0x08(0x10)
	uint32_t                                      item_count;                                                  // 0x18(0x04)
	uint32_t                                      item_stack_count;                                            // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisDediVehicleSpawnData
// Size: 0x18 (Inherited: 0x00)
struct FAnalysisDediVehicleSpawnData 
{
	uint32_t                                      spawner_cnt;                                                 // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct TArray<None>                           vehicle_spawn_info;                                          // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisDediVehicleData
// Size: 0x38 (Inherited: 0x00)
struct FAnalysisDediVehicleData 
{
	struct FString                                spawner_name;                                                // 0x00(0x10)
	uint32_t                                      spawner_pos_x;                                               // 0x10(0x04)
	uint32_t                                      spawner_pos_y;                                               // 0x14(0x04)
	uint32_t                                      spawner_pos_z;                                               // 0x18(0x04)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
	struct FString                                vehicle_name;                                                // 0x20(0x10)
	uint32_t                                      board;                                                       // 0x30(0x04)
	uint32_t                                      destroy;                                                     // 0x34(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisDediRedZoneData
// Size: 0x30 (Inherited: 0x00)
struct FAnalysisDediRedZoneData 
{
	uint32_t                                      event_time;                                                  // 0x00(0x04)
	uint32_t                                      phase_index;                                                 // 0x04(0x04)
	uint32_t                                      redzone_time;                                                // 0x08(0x04)
	uint32_t                                      center_loc_x;                                                // 0x0c(0x04)
	uint32_t                                      center_loc_y;                                                // 0x10(0x04)
	uint32_t                                      center_loc_z;                                                // 0x14(0x04)
	uint32_t                                      circle_radius;                                               // 0x18(0x04)
	uint32_t                                      boom_count;                                                  // 0x1c(0x04)
	uint32_t                                      boom_per_interval;                                           // 0x20(0x04)
	uint32_t                                      indoor_cnt;                                                  // 0x24(0x04)
	uint32_t                                      outdoor_cnt;                                                 // 0x28(0x04)
	uint32_t                                      boom_damage;                                                 // 0x2c(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisDediTransportData
// Size: 0x28 (Inherited: 0x00)
struct FAnalysisDediTransportData 
{
	uint32_t                                      event_time;                                                  // 0x00(0x04)
	uint32_t                                      phase_index;                                                 // 0x04(0x04)
	uint32_t                                      Turn;                                                        // 0x08(0x04)
	uint32_t                                      loc_x;                                                       // 0x0c(0x04)
	uint32_t                                      loc_y;                                                       // 0x10(0x04)
	uint32_t                                      loc_z;                                                       // 0x14(0x04)
	struct TArray<None>                           transportitem;                                               // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisDediBlueZoneData
// Size: 0x24 (Inherited: 0x00)
struct FAnalysisDediBlueZoneData 
{
	uint32_t                                      event_time;                                                  // 0x00(0x04)
	uint32_t                                      phase_index;                                                 // 0x04(0x04)
	uint32_t                                      center_loc_x;                                                // 0x08(0x04)
	uint32_t                                      center_loc_y;                                                // 0x0c(0x04)
	uint32_t                                      center_loc_z;                                                // 0x10(0x04)
	uint32_t                                      circle_radius;                                               // 0x14(0x04)
	uint32_t                                      incircle_player;                                             // 0x18(0x04)
	uint32_t                                      outcircle_player;                                            // 0x1c(0x04)
	uint32_t                                      death_player_cnt;                                            // 0x20(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisDediSupplyBoxData
// Size: 0x50 (Inherited: 0x00)
struct FAnalysisDediSupplyBoxData 
{
	uint32_t                                      event_time;                                                  // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                UserID;                                                      // 0x08(0x10)
	struct FString                                NickName;                                                    // 0x18(0x10)
	uint32_t                                      loc_x;                                                       // 0x28(0x04)
	uint32_t                                      loc_y;                                                       // 0x2c(0x04)
	uint32_t                                      loc_z;                                                       // 0x30(0x04)
	uint32_t                                      box_loc_x;                                                   // 0x34(0x04)
	uint32_t                                      box_loc_y;                                                   // 0x38(0x04)
	uint32_t                                      box_loc_z;                                                   // 0x3c(0x04)
	struct FString                                spawner_name;                                                // 0x40(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisDediMatchingRPInfoData
// Size: 0x10 (Inherited: 0x00)
struct FAnalysisDediMatchingRPInfoData 
{
	struct TArray<None>                           player_rp_info;                                              // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisDediPlayerRPInfoData
// Size: 0x68 (Inherited: 0x00)
struct FAnalysisDediPlayerRPInfoData 
{
	struct FString                                UserID;                                                      // 0x00(0x10)
	struct FString                                NickName;                                                    // 0x10(0x10)
	uint32_t                                      Rating;                                                      // 0x20(0x04)
	char                                          UnknownData24[0x4];                                          // 0x24(0x04)
	struct FString                                Training;                                                    // 0x28(0x10)
	struct FString                                TeamID;                                                      // 0x38(0x10)
	uint32_t                                      team_rating;                                                 // 0x48(0x04)
	char                                          UnknownData4C[0x4];                                          // 0x4c(0x04)
	struct FString                                PartyID;                                                     // 0x50(0x10)
	uint32_t                                      party_rating;                                                // 0x60(0x04)
	char                                          UnknownData64[0x4];                                          // 0x64(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisDataGameInfo
// Size: 0x50 (Inherited: 0x00)
struct FAnalysisDataGameInfo 
{
	uint32_t                                      flight_start_loc_x;                                          // 0x00(0x04)
	uint32_t                                      flight_start_loc_y;                                          // 0x04(0x04)
	uint32_t                                      flight_start_loc_z;                                          // 0x08(0x04)
	uint32_t                                      flight_end_loc_x;                                            // 0x0c(0x04)
	uint32_t                                      flight_end_loc_y;                                            // 0x10(0x04)
	uint32_t                                      flight_end_loc_z;                                            // 0x14(0x04)
	uint32_t                                      bluezone_circle_x;                                           // 0x18(0x04)
	uint32_t                                      bluezone_circle_y;                                           // 0x1c(0x04)
	uint32_t                                      bluezone_radius;                                             // 0x20(0x04)
	uint32_t                                      matching_player;                                             // 0x24(0x04)
	uint32_t                                      matching_ai_player;                                          // 0x28(0x04)
	uint32_t                                      escape_player;                                               // 0x2c(0x04)
	struct FString                                start_game_time;                                             // 0x30(0x10)
	struct FString                                end_game_time;                                               // 0x40(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisDataBase
// Size: 0xc0 (Inherited: 0x00)
struct FAnalysisDataBase 
{
	enum class None                               contentType;                                                 // 0x00(0x01)
	char                                          UnknownData1[0x7];                                           // 0x01(0x07)
	struct FTX-Brick_Wall_A_Half_02_M.TX-Brick_Wall_A_Half_02_M_101 Base;                                                        // 0x08(0x88)
	struct FString                                Msg;                                                         // 0x90(0x10)
	struct FString                                nowDate;                                                     // 0xa0(0x10)
	struct FString                                ApiPhase;                                                    // 0xb0(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisDataBaseHead
// Size: 0x88 (Inherited: 0x00)
struct FAnalysisDataBaseHead 
{
	uint32_t                                      DateTime;                                                    // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                match_id;                                                    // 0x08(0x10)
	struct FString                                game_server_id;                                              // 0x18(0x10)
	struct FString                                MapName;                                                     // 0x28(0x10)
	uint32_t                                      GameViewType;                                                // 0x38(0x04)
	uint32_t                                      GameMode;                                                    // 0x3c(0x04)
	uint32_t                                      BattleMode;                                                  // 0x40(0x04)
	char                                          UnknownData44[0x4];                                          // 0x44(0x04)
	struct FString                                cqr_type;                                                    // 0x48(0x10)
	uint32_t                                      bluezone_id;                                                 // 0x58(0x04)
	char                                          UnknownData5C[0x4];                                          // 0x5c(0x04)
	struct FString                                ip;                                                          // 0x60(0x10)
	struct FString                                Training;                                                    // 0x70(0x10)
	uint32_t                                      ai_grade;                                                    // 0x80(0x04)
	uint32_t                                      class_select_mode;                                           // 0x84(0x04)
};

// ScriptStruct BravoHotelGame.LogWeaponSlots
// Size: 0x10 (Inherited: 0x00)
struct FLogWeaponSlots 
{
	struct TArray<None>                           weapon_slots;                                                // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.LogEquippedWeaponInfo
// Size: 0x08 (Inherited: 0x00)
struct FLogEquippedWeaponInfo 
{
	uint32_t                                      weapon_index;                                                // 0x00(0x04)
	uint32_t                                      Level;                                                       // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.LogMapInfo
// Size: 0x08 (Inherited: 0x00)
struct FLogMapInfo 
{
	uint32_t                                      map_index;                                                   // 0x00(0x04)
	uint32_t                                      magnetic_index;                                              // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.ItemLocationLog
// Size: 0x10 (Inherited: 0x00)
struct FItemLocationLog 
{
	struct TArray<None>                           Locations;                                                   // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.DediDataEquipmentInfo
// Size: 0x0c (Inherited: 0x01)
struct FDediDataEquipmentInfo : FDediDataInfoBase 
{
	char                                          UnknownData1[0xb];                                           // 0x01(0x0b)
};

// ScriptStruct BravoHotelGame.DediDataArmorInfo
// Size: 0x18 (Inherited: 0x0c)
struct FDediDataArmorInfo : FDediDataEquipmentInfo 
{
	char                                          UnknownDataC[0xc];                                           // 0x0c(0x0c)
};

// ScriptStruct BravoHotelGame.DediDataWeaponInfo
// Size: 0x48 (Inherited: 0x0c)
struct FDediDataWeaponInfo : FDediDataEquipmentInfo 
{
	char                                          UnknownDataC[0x3c];                                          // 0x0c(0x3c)
};

// ScriptStruct BravoHotelGame.ClientDataInfoBase
// Size: 0x01 (Inherited: 0x00)
struct FClientDataInfoBase 
{
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.DataEventClientGameState
// Size: 0x78 (Inherited: 0x58)
struct FDataEventClientGameState : FDataEventBase 
{
	char                                          UnknownData58[0x20];                                         // 0x58(0x20)
};

// ScriptStruct BravoHotelGame.DataEventClientGameWeapon
// Size: 0x68 (Inherited: 0x58)
struct FDataEventClientGameWeapon : FDataEventBase 
{
	char                                          UnknownData58[0x8];                                          // 0x58(0x08)
	struct FNone*                                 WeaponActor;                                                 // 0x60(0x08)
};

// ScriptStruct BravoHotelGame.DataEventClientGameInventory
// Size: 0x68 (Inherited: 0x58)
struct FDataEventClientGameInventory : FDataEventBase 
{
	char                                          UnknownData58[0x10];                                         // 0x58(0x10)
};

// ScriptStruct BravoHotelGame.DataEventClientGameVehicle
// Size: 0x78 (Inherited: 0x58)
struct FDataEventClientGameVehicle : FDataEventBase 
{
	char                                          UnknownData58[0x18];                                         // 0x58(0x18)
	struct FNone*                                 VehicleActor;                                                // 0x70(0x08)
};

// ScriptStruct BravoHotelGame.DataEventClientGameRevival
// Size: 0x88 (Inherited: 0x58)
struct FDataEventClientGameRevival : FDataEventBase 
{
	char                                          UnknownData58[0x8];                                          // 0x58(0x08)
	struct FNone*                                 RevivedPlayerState;                                          // 0x60(0x08)
	struct FNone*                                 SaviorPlayerState;                                           // 0x68(0x08)
	char                                          UnknownData70[0x18];                                         // 0x70(0x18)
};

// ScriptStruct BravoHotelGame.DataEventClientGameDied
// Size: 0xa8 (Inherited: 0x58)
struct FDataEventClientGameDied : FDataEventBase 
{
	char                                          UnknownData58[0x8];                                          // 0x58(0x08)
	struct FNone*                                 DamageTypeClass;                                             // 0x60(0x08)
	struct FNone*                                 KnockDownAttackerPlayerState;                                // 0x68(0x08)
	struct FNone*                                 KillerPlayerState;                                           // 0x70(0x08)
	struct FNone*                                 AttackerPlayerState;                                         // 0x78(0x08)
	struct FNone*                                 VictimPlayerState;                                           // 0x80(0x08)
	char                                          UnknownData88[0x20];                                         // 0x88(0x20)
};

// ScriptStruct BravoHotelGame.DataEventClientGameKnockDowned
// Size: 0xa8 (Inherited: 0x58)
struct FDataEventClientGameKnockDowned : FDataEventBase 
{
	char                                          UnknownData58[0x8];                                          // 0x58(0x08)
	struct FNone*                                 DamageTypeClass;                                             // 0x60(0x08)
	struct FNone*                                 AttackerActor;                                               // 0x68(0x08)
	struct FNone*                                 AttackerPlayerState;                                         // 0x70(0x08)
	struct FNone*                                 VictimActor;                                                 // 0x78(0x08)
	struct FNone*                                 VictimPlayerState;                                           // 0x80(0x08)
	char                                          UnknownData88[0x20];                                         // 0x88(0x20)
};

// ScriptStruct BravoHotelGame.DataEventClientGameBattle
// Size: 0xa8 (Inherited: 0x58)
struct FDataEventClientGameBattle : FDataEventBase 
{
	char                                          UnknownData58[0x8];                                          // 0x58(0x08)
	struct FNone*                                 DamageTypeClass;                                             // 0x60(0x08)
	struct FNone*                                 AttackerActor;                                               // 0x68(0x08)
	struct FNone*                                 AttackerPlayerState;                                         // 0x70(0x08)
	struct FNone*                                 VictimActor;                                                 // 0x78(0x08)
	struct FNone*                                 VictimPlayerState;                                           // 0x80(0x08)
	char                                          UnknownData88[0x20];                                         // 0x88(0x20)
};

// ScriptStruct BravoHotelGame.DataEventClientGameThrowable
// Size: 0x88 (Inherited: 0x58)
struct FDataEventClientGameThrowable : FDataEventBase 
{
	char                                          UnknownData58[0x30];                                         // 0x58(0x30)
};

// ScriptStruct BravoHotelGame.DataEventClientGameInteraction
// Size: 0x80 (Inherited: 0x58)
struct FDataEventClientGameInteraction : FDataEventBase 
{
	char                                          UnknownData58[0x28];                                         // 0x58(0x28)
};

// ScriptStruct BravoHotelGame.DataEventClientGameItemSearch
// Size: 0x78 (Inherited: 0x58)
struct FDataEventClientGameItemSearch : FDataEventBase 
{
	char                                          UnknownData58[0x20];                                         // 0x58(0x20)
};

// ScriptStruct BravoHotelGame.DataEventClientGameItem
// Size: 0x1e0 (Inherited: 0x58)
struct FDataEventClientGameItem : FDataEventBase 
{
	char                                          UnknownData58[0x188];                                        // 0x58(0x188)
};

// ScriptStruct BravoHotelGame.DataEventClientGameSkill
// Size: 0x80 (Inherited: 0x58)
struct FDataEventClientGameSkill : FDataEventBase 
{
	char                                          UnknownData58[0x28];                                         // 0x58(0x28)
};

// ScriptStruct BravoHotelGame.DataEventClientGameSupplyBox
// Size: 0xc0 (Inherited: 0x58)
struct FDataEventClientGameSupplyBox : FDataEventBase 
{
	char                                          UnknownData58[0x68];                                         // 0x58(0x68)
};

// ScriptStruct BravoHotelGame.DataEventClientGame
// Size: 0x70 (Inherited: 0x58)
struct FDataEventClientGame : FDataEventBase 
{
	char                                          UnknownData58[0x18];                                         // 0x58(0x18)
};

// ScriptStruct BravoHotelGame.DataEventClient
// Size: 0x60 (Inherited: 0x58)
struct FDataEventClient : FDataEventBase 
{
	char                                          UnknownData58[0x8];                                          // 0x58(0x08)
};

// ScriptStruct BravoHotelGame.DataEventWorldItem
// Size: 0x68 (Inherited: 0x58)
struct FDataEventWorldItem : FDataEventBase 
{
	char                                          UnknownData58[0x10];                                         // 0x58(0x10)
};

// ScriptStruct BravoHotelGame.DataEventBattleRoyal
// Size: 0x78 (Inherited: 0x58)
struct FDataEventBattleRoyal : FDataEventBase 
{
	char                                          UnknownData58[0x20];                                         // 0x58(0x20)
};

// ScriptStruct BravoHotelGame.DataEventDamageType
// Size: 0x90 (Inherited: 0x58)
struct FDataEventDamageType : FDataEventBase 
{
	char                                          UnknownData58[0x38];                                         // 0x58(0x38)
};

// ScriptStruct BravoHotelGame.DataEventLastEquip
// Size: 0x140 (Inherited: 0x58)
struct FDataEventLastEquip : FDataEventBase 
{
	char                                          UnknownData58[0xe8];                                         // 0x58(0xe8)
};

// ScriptStruct BravoHotelGame.DataEventWeapon
// Size: 0xb0 (Inherited: 0x58)
struct FDataEventWeapon : FDataEventBase 
{
	char                                          UnknownData58[0x58];                                         // 0x58(0x58)
};

// ScriptStruct BravoHotelGame.DataEventCharacterFlying
// Size: 0x98 (Inherited: 0x58)
struct FDataEventCharacterFlying : FDataEventBase 
{
	char                                          UnknownData58[0x40];                                         // 0x58(0x40)
};

// ScriptStruct BravoHotelGame.DataEventCharacter
// Size: 0x90 (Inherited: 0x58)
struct FDataEventCharacter : FDataEventBase 
{
	char                                          UnknownData58[0x38];                                         // 0x58(0x38)
};

// ScriptStruct BravoHotelGame.DataEventPlayer
// Size: 0x70 (Inherited: 0x58)
struct FDataEventPlayer : FDataEventBase 
{
	char                                          UnknownData58[0x18];                                         // 0x58(0x18)
};

// ScriptStruct BravoHotelGame.EmptyData
// Size: 0x01 (Inherited: 0x00)
struct FEmptyData 
{
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.ItemRarityInfo
// Size: 0x0c (Inherited: 0x00)
struct FItemRarityInfo 
{
	enum class None                               Rarity;                                                      // 0x00(0x01)
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
	struct FName                                  ItemName;                                                    // 0x04(0x08)
};

// ScriptStruct BravoHotelGame.ItemTypeProb
// Size: 0x08 (Inherited: 0x00)
struct FItemTypeProb 
{
	enum class None                               ItemType;                                                    // 0x00(0x01)
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
	float                                         ProbSum;                                                     // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.DetectBoxSpawnItemsInfo
// Size: 0x08 (Inherited: 0x00)
struct FDetectBoxSpawnItemsInfo 
{
	enum class None                               ItemType;                                                    // 0x00(0x01)
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
	float                                         SpawnProbability;                                            // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelBlackMarketDataType
// Size: 0x118 (Inherited: 0x00)
struct FBravoHotelBlackMarketDataType 
{
	struct FName                                  ItemRowName;                                                 // 0x00(0x08)
	struct TSoftObjectPtr<FNone>                  ItemIconTextureEx;                                           // 0x08(0x28)
	struct TSoftObjectPtr<FNone>                  ItemIconImage;                                               // 0x30(0x28)
	struct FText                                  ItemName;                                                    // 0x58(0x18)
	float                                         Weight;                                                      // 0x70(0x04)
	enum class None                               TabType;                                                     // 0x74(0x01)
	enum class None                               ItemType;                                                    // 0x75(0x01)
	enum class None                               WeaponType;                                                  // 0x76(0x01)
	enum class None                               AttachmentType;                                              // 0x77(0x01)
	enum class None                               WearableType;                                                // 0x78(0x01)
	enum class None                               DevelopmentStatus;                                           // 0x79(0x01)
	char                                          UnknownData7A[0x2];                                          // 0x7a(0x02)
	struct FName                                  CompatibleAmmoName;                                          // 0x7c(0x08)
	float                                         Damage;                                                      // 0x84(0x04)
	float                                         FireRate;                                                    // 0x88(0x04)
	uint32_t                                      NormalMagSize;                                               // 0x8c(0x04)
	struct TArray<None>                           AllowedFireModes;                                            // 0x90(0x10)
	float                                         ReloadTime;                                                  // 0xa0(0x04)
	float                                         ProjectileVelocity;                                          // 0xa4(0x04)
	float                                         MoveSpeedModifier;                                           // 0xa8(0x04)
	uint32_t                                      AmmoCount;                                                   // 0xac(0x04)
	float                                         TotalWeight;                                                 // 0xb0(0x04)
	float                                         DecreaseReloadTime;                                          // 0xb4(0x04)
	float                                         VerticalReduce;                                              // 0xb8(0x04)
	float                                         HorizentalReduce;                                            // 0xbc(0x04)
	float                                         IncreaseRateoffire;                                          // 0xc0(0x04)
	float                                         BurstSpeed;                                                  // 0xc4(0x04)
	float                                         Armor;                                                       // 0xc8(0x04)
	uint32_t                                      Capacity;                                                    // 0xcc(0x04)
	float                                         Health;                                                      // 0xd0(0x04)
	float                                         Adrenaline;                                                  // 0xd4(0x04)
	float                                         Fuel;                                                        // 0xd8(0x04)
	enum class None                               EquipableSlot;                                               // 0xdc(0x01)
	char                                          UnknownDataDD[0x3];                                          // 0xdd(0x03)
	struct TArray<None>                           EquipableClass;                                              // 0xe0(0x10)
	struct FText                                  Description;                                                 // 0xf0(0x18)
	struct TArray<None>                           ItemList;                                                    // 0x108(0x10)
};

// ScriptStruct BravoHotelGame.ProjectDirectoriesPath
// Size: 0x10 (Inherited: 0x00)
struct FProjectDirectoriesPath 
{
	struct TArray<None>                           DirectoriesPath;                                             // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.ProjectDirectoryPath
// Size: 0x10 (Inherited: 0x00)
struct FProjectDirectoryPath 
{
	struct FNone                                  DirectoryPath;                                               // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.ParachuteInfo
// Size: 0x1c (Inherited: 0x00)
struct FParachuteInfo 
{
	char                                          Visibility : 0;                                              // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
	char                                          ParachuteImage : 0;                                          // 0x01(0x01)
	char                                          UnknownData1[0x1];                                           // 0x01(0x01)
	char                                          PlayerImage : 0;                                             // 0x02(0x01)
	char                                          UnknownData2[0x2];                                           // 0x02(0x02)
	float                                         ParachutePoint;                                              // 0x04(0x04)
	float                                         TerrainHeight;                                               // 0x08(0x04)
	float                                         Speed;                                                       // 0x0c(0x04)
	float                                         Angle;                                                       // 0x10(0x04)
	struct FNone                                  ParachutePos;                                                // 0x14(0x08)
};

// ScriptStruct BravoHotelGame.HitInfoNeedToCheck
// Size: 0x18 (Inherited: 0x00)
struct FHitInfoNeedToCheck 
{
	char                                          UnknownData0[0x18];                                          // 0x00(0x18)
};

// ScriptStruct BravoHotelGame.ProjectileHitInfo
// Size: 0x58 (Inherited: 0x00)
struct FProjectileHitInfo 
{
	char                                          UnknownData0[0x58];                                          // 0x00(0x58)
};

// ScriptStruct BravoHotelGame.HitInfo
// Size: 0x20 (Inherited: 0x00)
struct FHitInfo 
{
	char                                          UnknownData0[0x20];                                          // 0x00(0x20)
};

// ScriptStruct BravoHotelGame.ClientInfo
// Size: 0x01 (Inherited: 0x00)
struct FClientInfo 
{
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.CoherentWidgetInfo
// Size: 0x10 (Inherited: 0x00)
struct FCoherentWidgetInfo 
{
	struct FNone*                                 Widget;                                                      // 0x00(0x08)
	char                                          FinishLoad : 0;                                              // 0x08(0x01)
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.VivoxChanelInfo
// Size: 0x20 (Inherited: 0x00)
struct FVivoxChanelInfo 
{
	enum class None                               Type;                                                        // 0x00(0x01)
	char                                          ShouldTransmitOnJoin : 0;                                    // 0x01(0x01)
	char                                          UnknownData1[0x7];                                           // 0x01(0x07)
	struct FString                                ChannelName;                                                 // 0x08(0x10)
	enum class None                               AssignChanneltoPTTKey;                                       // 0x18(0x01)
	char                                          UnknownData19[0x7];                                          // 0x19(0x07)
};

// ScriptStruct BravoHotelGame.GoogleCloudRequestInfo
// Size: 0x01 (Inherited: 0x00)
struct FGoogleCloudRequestInfo 
{
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.GoogleCloudRequestControl
// Size: 0x30 (Inherited: 0x00)
struct FGoogleCloudRequestControl 
{
	char                                          UnknownData0[0x30];                                          // 0x00(0x30)
};

// ScriptStruct BravoHotelGame.GoogleCloud_PubSub
// Size: 0x10 (Inherited: 0x00)
struct FGoogleCloud_PubSub 
{
	struct TArray<None>                           messages;                                                    // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.PubSub_Message
// Size: 0x30 (Inherited: 0x00)
struct FPubSub_Message 
{
	struct FNone                                  Attributes;                                                  // 0x00(0x20)
	struct FString                                Data;                                                        // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.PubSub_Attribute
// Size: 0x20 (Inherited: 0x00)
struct FPubSub_Attribute 
{
	struct FString                                Key;                                                         // 0x00(0x10)
	struct FString                                Value;                                                       // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.Request_WaitingTicket
// Size: 0x20 (Inherited: 0x00)
struct FRequest_WaitingTicket 
{
	struct FString                                geegee_id;                                                   // 0x00(0x10)
	struct FString                                steam_id;                                                    // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.Response_CraftWeapon
// Size: 0xd8 (Inherited: 0x00)
struct FResponse_CraftWeapon 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FNone                                  D;                                                           // 0x18(0xc0)
};

// ScriptStruct BravoHotelGame.Request_CraftWeapon
// Size: 0x20 (Inherited: 0x00)
struct FRequest_CraftWeapon 
{
	uint32_t                                      crafting_id;                                                 // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FNone                                  base_weapon;                                                 // 0x08(0x18)
};

// ScriptStruct BravoHotelGame.Request_CraftWeapon_BaseWeapon
// Size: 0x18 (Inherited: 0x00)
struct FRequest_CraftWeapon_BaseWeapon 
{
	uint32_t                                      table_base_index;                                            // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                item_id;                                                     // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.Response_MaterialList
// Size: 0x28 (Inherited: 0x00)
struct FResponse_MaterialList 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FNone                                  D;                                                           // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.Response_MaterialList_Array
// Size: 0x10 (Inherited: 0x00)
struct FResponse_MaterialList_Array 
{
	struct TArray<None>                           material_list;                                               // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Response_Weapon_List
// Size: 0x28 (Inherited: 0x00)
struct FResponse_Weapon_List 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FNone                                  D;                                                           // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.Response_Weapon_List_Array
// Size: 0x10 (Inherited: 0x00)
struct FResponse_Weapon_List_Array 
{
	struct TArray<None>                           weapon_list;                                                 // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Response_Google_JWT
// Size: 0x28 (Inherited: 0x00)
struct FResponse_Google_JWT 
{
	struct FString                                access_token;                                                // 0x00(0x10)
	uint32_t                                      expires_in;                                                  // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct FString                                token_type;                                                  // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.RedisPubSub_Header
// Size: 0x10 (Inherited: 0x00)
struct FRedisPubSub_Header 
{
	struct FString                                Cmd;                                                         // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.RedisPubSub_LeaveGame
// Size: 0x20 (Inherited: 0x10)
struct FRedisPubSub_LeaveGame : FRedisPubSub_Header 
{
	struct FString                                UID;                                                         // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.RedisPubSub_StartPlay
// Size: 0x20 (Inherited: 0x10)
struct FRedisPubSub_StartPlay : FRedisPubSub_Header 
{
	struct FString                                Mode;                                                        // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.RedisPubSub_LoadMap
// Size: 0x20 (Inherited: 0x10)
struct FRedisPubSub_LoadMap : FRedisPubSub_Header 
{
	struct FString                                map_name;                                                    // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.Response_FriendPendingList
// Size: 0x28 (Inherited: 0x00)
struct FResponse_FriendPendingList 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FNone                                  D;                                                           // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.Response_FriendPendingListArray
// Size: 0x10 (Inherited: 0x00)
struct FResponse_FriendPendingListArray 
{
	struct TArray<None>                           pendingInviteInfoList;                                       // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Response_FriendInfo_Rec
// Size: 0x30 (Inherited: 0x00)
struct FResponse_FriendInfo_Rec 
{
	struct FString                                UID;                                                         // 0x00(0x10)
	struct FString                                player_name;                                                 // 0x10(0x10)
	struct FString                                status;                                                      // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.Request_FriendPendingList
// Size: 0x01 (Inherited: 0x00)
struct FRequest_FriendPendingList 
{
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.Response_FriendList
// Size: 0x28 (Inherited: 0x00)
struct FResponse_FriendList 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FNone                                  D;                                                           // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.Response_FriendListArray
// Size: 0x10 (Inherited: 0x00)
struct FResponse_FriendListArray 
{
	struct TArray<None>                           friendInfoList;                                              // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Request_FriendList
// Size: 0x01 (Inherited: 0x00)
struct FRequest_FriendList 
{
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.Response_AcceptFriend
// Size: 0x20 (Inherited: 0x00)
struct FResponse_AcceptFriend 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FNone                                  D;                                                           // 0x18(0x01)
	char                                          UnknownData19[0x7];                                          // 0x19(0x07)
};

// ScriptStruct BravoHotelGame.Response_AcceptFriend_Rec
// Size: 0x01 (Inherited: 0x00)
struct FResponse_AcceptFriend_Rec 
{
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.Request_AcceptFriend
// Size: 0x10 (Inherited: 0x00)
struct FRequest_AcceptFriend 
{
	struct FString                                user_id;                                                     // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Response_InviteFriend
// Size: 0x28 (Inherited: 0x00)
struct FResponse_InviteFriend 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FNone                                  D;                                                           // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.Response_InviteFriend_Rec
// Size: 0x10 (Inherited: 0x00)
struct FResponse_InviteFriend_Rec 
{
	struct FString                                invite_user_id;                                              // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Request_InviteFriend
// Size: 0x10 (Inherited: 0x00)
struct FRequest_InviteFriend 
{
	struct FString                                user_id;                                                     // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Response_SearchPlayer
// Size: 0x38 (Inherited: 0x00)
struct FResponse_SearchPlayer 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FNone                                  D;                                                           // 0x18(0x20)
};

// ScriptStruct BravoHotelGame.Response_SearchPlayer_Rec
// Size: 0x20 (Inherited: 0x00)
struct FResponse_SearchPlayer_Rec 
{
	struct FString                                user_id;                                                     // 0x00(0x10)
	struct FString                                Name;                                                        // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.Request_SearchPlayer
// Size: 0x10 (Inherited: 0x00)
struct FRequest_SearchPlayer 
{
	struct FString                                player_name;                                                 // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Response_Equipitem
// Size: 0x38 (Inherited: 0x00)
struct FResponse_Equipitem 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FNone                                  D;                                                           // 0x18(0x20)
};

// ScriptStruct BravoHotelGame.Response_Equipitem_Rec
// Size: 0x20 (Inherited: 0x00)
struct FResponse_Equipitem_Rec 
{
	uint32_t                                      item_mid;                                                    // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                item_name;                                                   // 0x08(0x10)
	uint32_t                                      inven_item_slot;                                             // 0x18(0x04)
	uint32_t                                      equip_item_slot;                                             // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.Request_EquipItem
// Size: 0x20 (Inherited: 0x00)
struct FRequest_EquipItem 
{
	uint32_t                                      item_mid;                                                    // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                item_name;                                                   // 0x08(0x10)
	uint32_t                                      inven_item_slot;                                             // 0x18(0x04)
	uint32_t                                      equip_item_slot;                                             // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.Response_MoveItem
// Size: 0x38 (Inherited: 0x00)
struct FResponse_MoveItem 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FNone                                  D;                                                           // 0x18(0x20)
};

// ScriptStruct BravoHotelGame.Response_MoveItem_Rec
// Size: 0x20 (Inherited: 0x00)
struct FResponse_MoveItem_Rec 
{
	uint32_t                                      item_mid;                                                    // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                item_name;                                                   // 0x08(0x10)
	uint32_t                                      inven_old_item_slot;                                         // 0x18(0x04)
	uint32_t                                      inven_new_item_slot;                                         // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.Request_MoveItem
// Size: 0x20 (Inherited: 0x00)
struct FRequest_MoveItem 
{
	uint32_t                                      item_mid;                                                    // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                item_name;                                                   // 0x08(0x10)
	uint32_t                                      inven_old_item_slot;                                         // 0x18(0x04)
	uint32_t                                      inven_new_item_slot;                                         // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.Response_DelItem
// Size: 0x38 (Inherited: 0x00)
struct FResponse_DelItem 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FNone                                  D;                                                           // 0x18(0x20)
};

// ScriptStruct BravoHotelGame.Response_DelItem_Rec
// Size: 0x20 (Inherited: 0x00)
struct FResponse_DelItem_Rec 
{
	uint32_t                                      item_mid;                                                    // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                item_name;                                                   // 0x08(0x10)
	uint32_t                                      item_slot;                                                   // 0x18(0x04)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.Request_DelItem
// Size: 0x20 (Inherited: 0x00)
struct FRequest_DelItem 
{
	uint32_t                                      item_mid;                                                    // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                item_name;                                                   // 0x08(0x10)
	uint32_t                                      item_slot;                                                   // 0x18(0x04)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.Response_AddItem
// Size: 0x38 (Inherited: 0x00)
struct FResponse_AddItem 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FNone                                  D;                                                           // 0x18(0x20)
};

// ScriptStruct BravoHotelGame.Response_AddItem_Rec
// Size: 0x20 (Inherited: 0x00)
struct FResponse_AddItem_Rec 
{
	uint32_t                                      item_mid;                                                    // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                item_name;                                                   // 0x08(0x10)
	uint32_t                                      item_slot;                                                   // 0x18(0x04)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.Request_AddItem
// Size: 0x20 (Inherited: 0x00)
struct FRequest_AddItem 
{
	uint32_t                                      item_mid;                                                    // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                item_name;                                                   // 0x08(0x10)
	uint32_t                                      item_slot;                                                   // 0x18(0x04)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.Response_WeaponList
// Size: 0x28 (Inherited: 0x00)
struct FResponse_WeaponList 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FSM_SofaC0                             D;                                                           // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.Response_WeaponListArray
// Size: 0x10 (Inherited: 0x00)
struct FResponse_WeaponListArray 
{
	struct TArray<None>                           Weapon;                                                      // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Response_ItemList_Rec
// Size: 0x28 (Inherited: 0x00)
struct FResponse_ItemList_Rec 
{
	uint32_t                                      item_id;                                                     // 0x00(0x04)
	uint32_t                                      item_slot;                                                   // 0x04(0x04)
	uint32_t                                      item_mid;                                                    // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FString                                item_name;                                                   // 0x10(0x10)
	uint32_t                                      item_count;                                                  // 0x20(0x04)
	uint32_t                                      item_level;                                                  // 0x24(0x04)
};

// ScriptStruct BravoHotelGame.Response_EquipList
// Size: 0x28 (Inherited: 0x00)
struct FResponse_EquipList 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FNone                                  D;                                                           // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.Response_EquipListArray
// Size: 0x10 (Inherited: 0x00)
struct FResponse_EquipListArray 
{
	struct TArray<None>                           equipment;                                                   // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Response_invenList
// Size: 0x28 (Inherited: 0x00)
struct FResponse_invenList 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FNone                                  D;                                                           // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.Response_InvenListArray
// Size: 0x10 (Inherited: 0x00)
struct FResponse_InvenListArray 
{
	struct TArray<None>                           inventory;                                                   // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Response_SeasonInfo
// Size: 0x40 (Inherited: 0x00)
struct FResponse_SeasonInfo 
{
	uint32_t                                      season_id;                                                   // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                begin_time;                                                  // 0x08(0x10)
	struct FString                                play_end_time;                                               // 0x18(0x10)
	struct FString                                end_time;                                                    // 0x28(0x10)
	uint32_t                                      exp_table_index;                                             // 0x38(0x04)
	uint32_t                                      quest_table_index;                                           // 0x3c(0x04)
};

// ScriptStruct BravoHotelGame.Response_GamePlayerInfo
// Size: 0xf8 (Inherited: 0x00)
struct FResponse_GamePlayerInfo 
{
	uint32_t                                      selected_pc_class_type_index;                                // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct TArray<None>                           pc_list;                                                     // 0x08(0x10)
	struct TArray<None>                           all_perk_list;                                               // 0x18(0x10)
	struct FNone                                  supply_box;                                                  // 0x28(0x48)
	uint32_t                                      Gold;                                                        // 0x70(0x04)
	struct FNone                                  player_season_info;                                          // 0x74(0x18)
	char                                          UnknownData8C[0x4];                                          // 0x8c(0x04)
	struct TArray<None>                           season_quest_list;                                           // 0x90(0x10)
	double                                        rating_point;                                                // 0xa0(0x08)
	struct FNone                                  match_class;                                                 // 0xa8(0x28)
	struct FNone                                  play_info;                                                   // 0xd0(0x20)
	char                                          is_suspicious_user : 0;                                      // 0xf0(0x01)
	char                                          UnknownDataF0[0x8];                                          // 0xf0(0x08)
};

// ScriptStruct BravoHotelGame.Response_PlayInfo
// Size: 0x20 (Inherited: 0x00)
struct FResponse_PlayInfo 
{
	uint32_t                                      kill_count;                                                  // 0x00(0x04)
	uint32_t                                      play_count;                                                  // 0x04(0x04)
	struct FString                                Training;                                                    // 0x08(0x10)
	uint32_t                                      loser_score;                                                 // 0x18(0x04)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.MatchClassInfo
// Size: 0x28 (Inherited: 0x00)
struct FMatchClassInfo 
{
	uint32_t                                      change_count;                                                // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                Info;                                                        // 0x08(0x10)
	struct FString                                selection_info;                                              // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.SeasonQuestBaseInfo
// Size: 0x08 (Inherited: 0x00)
struct FSeasonQuestBaseInfo 
{
	uint32_t                                      quest_index;                                                 // 0x00(0x04)
	uint32_t                                      Count;                                                       // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.PlayerSeasonInfo
// Size: 0x18 (Inherited: 0x00)
struct FPlayerSeasonInfo 
{
	char                                          is_bought_season_ticket : 0;                                 // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	uint32_t                                      season_level;                                                // 0x04(0x04)
	uint32_t                                      season_exp;                                                  // 0x08(0x04)
	uint32_t                                      season_rp;                                                   // 0x0c(0x04)
	char                                          tier_game_mode;                                              // 0x10(0x01)
	char                                          UnknownData11[0x3];                                          // 0x11(0x03)
	uint32_t                                      tier_id;                                                     // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.SupplyBoxInfo
// Size: 0x48 (Inherited: 0x00)
struct FSupplyBoxInfo 
{
	uint32_t                                      table_index;                                                 // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                item_id;                                                     // 0x08(0x10)
	struct TArray<None>                           weapons;                                                     // 0x18(0x10)
	struct TArray<None>                           equipments;                                                  // 0x28(0x10)
	char                                          expanded : 0;                                                // 0x38(0x01)
	char                                          UnknownData38[0x4];                                          // 0x38(0x04)
	uint32_t                                      count_of_supply;                                             // 0x3c(0x04)
	uint32_t                                      free_supply_ticket;                                          // 0x40(0x04)
	char                                          UnknownData44[0x4];                                          // 0x44(0x04)
};

// ScriptStruct BravoHotelGame.WeaponInfo
// Size: 0x30 (Inherited: 0x00)
struct FWeaponInfo 
{
	char                                          slot_num;                                                    // 0x00(0x01)
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
	uint32_t                                      table_index;                                                 // 0x04(0x04)
	struct FString                                item_id;                                                     // 0x08(0x10)
	struct TArray<None>                           options;                                                     // 0x18(0x10)
	uint32_t                                      Durability;                                                  // 0x28(0x04)
	char                                          supplied : 0;                                                // 0x2c(0x01)
	char                                          UnknownData2C[0x4];                                          // 0x2c(0x04)
};

// ScriptStruct BravoHotelGame.OptionInfo
// Size: 0x18 (Inherited: 0x00)
struct FOptionInfo 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	uint32_t                                      table_index;                                                 // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.BasePerkInfo
// Size: 0x08 (Inherited: 0x00)
struct FBasePerkInfo 
{
	uint32_t                                      Type;                                                        // 0x00(0x04)
	uint32_t                                      table_index;                                                 // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.Response_PCInfo
// Size: 0x68 (Inherited: 0x00)
struct FResponse_PCInfo 
{
	struct FString                                pc_id;                                                       // 0x00(0x10)
	uint32_t                                      class_type_index;                                            // 0x10(0x04)
	uint32_t                                      class_data_index;                                            // 0x14(0x04)
	struct FNone                                  looks;                                                       // 0x18(0x18)
	struct TArray<None>                           wear_item;                                                   // 0x30(0x10)
	struct TArray<None>                           Weapon;                                                      // 0x40(0x10)
	struct TArray<None>                           perk;                                                        // 0x50(0x10)
	uint32_t                                      exp;                                                         // 0x60(0x04)
	char                                          UnknownData64[0x4];                                          // 0x64(0x04)
};

// ScriptStruct BravoHotelGame.EquippedSlotInfo
// Size: 0x08 (Inherited: 0x00)
struct FEquippedSlotInfo 
{
	uint32_t                                      Key;                                                         // 0x00(0x04)
	uint32_t                                      table_index;                                                 // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.PCLooks
// Size: 0x18 (Inherited: 0x00)
struct FPCLooks 
{
	uint32_t                                      gender;                                                      // 0x00(0x04)
	uint32_t                                      face;                                                        // 0x04(0x04)
	uint32_t                                      face_color;                                                  // 0x08(0x04)
	uint32_t                                      hair;                                                        // 0x0c(0x04)
	uint32_t                                      hair_color;                                                  // 0x10(0x04)
	uint32_t                                      makeup;                                                      // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.Response_Matching
// Size: 0x28 (Inherited: 0x00)
struct FResponse_Matching 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FNone                                  D;                                                           // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.Response_Matching_Rec
// Size: 0x10 (Inherited: 0x00)
struct FResponse_Matching_Rec 
{
	struct FString                                ipaddr;                                                      // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Request_Matching
// Size: 0x18 (Inherited: 0x00)
struct FRequest_Matching 
{
	char                                          battle_mode;                                                 // 0x00(0x01)
	char                                          UnknownData1[0x7];                                           // 0x01(0x07)
	struct FString                                map_name;                                                    // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.Request_DS_MatchRewardList
// Size: 0x28 (Inherited: 0x00)
struct FRequest_DS_MatchRewardList 
{
	struct FString                                map_name;                                                    // 0x00(0x10)
	char                                          game_mode;                                                   // 0x10(0x01)
	char                                          battle_mode;                                                 // 0x11(0x01)
	char                                          UnknownData12[0x6];                                          // 0x12(0x06)
	struct TArray<None>                           match_reward_list;                                           // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.PlayerMatchReward
// Size: 0x58 (Inherited: 0x00)
struct FPlayerMatchReward 
{
	struct FString                                user_id;                                                     // 0x00(0x10)
	uint32_t                                      pc_class_type_index;                                         // 0x10(0x04)
	char                                          reward_type;                                                 // 0x14(0x01)
	enum class  ��数瑲yٚ畍瑬捩獡䑴汥来瑡健潲数瑲y҆慌祺扏敪瑣牐灯牥祴Ҟ潓瑦扏敪瑣牐灯牥祴͂湉㙴倴潲数瑲yͶ湉㍴倲潲数瑲y͐湉ㅴ倶潲数瑲y̸湉㡴牐灯牥祴Ά䥕瑮㐶牐灯牥祴Έ䥕瑮㈳牐灯牥祴Ζ䥕瑮㘱牐灯牥祴ˎ慍偰潲数瑲yˆ敓側潲数瑲yĦ潃敲ƺ湅楧敮Ƭ摅t| Rank;                                                        // 0x15(0x01)
	char                                          participants;                                                // 0x16(0x01)
	char                                          UnknownData17[0x1];                                          // 0x17(0x01)
	uint32_t                                      earned_gold;                                                 // 0x18(0x04)
	uint32_t                                      earned_exp;                                                  // 0x1c(0x04)
	struct TArray<None>                           earned_items;                                                // 0x20(0x10)
	struct FNone                                  supplied_weapon;                                             // 0x30(0x20)
	char                                          save_summary : 0;                                            // 0x50(0x01)
	char                                          UnknownData50[0x8];                                          // 0x50(0x08)
};

// ScriptStruct BravoHotelGame.SuppliedWeapon
// Size: 0x20 (Inherited: 0x00)
struct FSuppliedWeapon 
{
	uint32_t                                      table_index;                                                 // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                item_id;                                                     // 0x08(0x10)
	uint32_t                                      Durability;                                                  // 0x18(0x04)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.RewardItem
// Size: 0x58 (Inherited: 0x00)
struct FRewardItem 
{
	uint32_t                                      table_index;                                                 // 0x00(0x04)
	uint32_t                                      Count;                                                       // 0x04(0x04)
	struct TMap<None, None>                       options;                                                     // 0x08(0x50)
};

// ScriptStruct BravoHotelGame.Request_DS_MatchReward
// Size: 0x70 (Inherited: 0x00)
struct FRequest_DS_MatchReward 
{
	struct FString                                map_name;                                                    // 0x00(0x10)
	char                                          game_mode;                                                   // 0x10(0x01)
	char                                          battle_mode;                                                 // 0x11(0x01)
	char                                          UnknownData12[0x6];                                          // 0x12(0x06)
	struct FNone                                  match_reward;                                                // 0x18(0x58)
};

// ScriptStruct BravoHotelGame.Request_DS_CurrencyGain
// Size: 0x20 (Inherited: 0x00)
struct FRequest_DS_CurrencyGain 
{
	struct FString                                user_id;                                                     // 0x00(0x10)
	uint32_t                                      currency_index;                                              // 0x10(0x04)
	uint32_t                                      Amount;                                                      // 0x14(0x04)
	uint32_t                                      action_code;                                                 // 0x18(0x04)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.Request_DS_CurrencyPay
// Size: 0x20 (Inherited: 0x00)
struct FRequest_DS_CurrencyPay 
{
	struct FString                                user_id;                                                     // 0x00(0x10)
	uint32_t                                      currency_index;                                              // 0x10(0x04)
	uint32_t                                      Amount;                                                      // 0x14(0x04)
	uint32_t                                      action_code;                                                 // 0x18(0x04)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.Request_DS_MakeSupplyBoxUsed
// Size: 0x28 (Inherited: 0x00)
struct FRequest_DS_MakeSupplyBoxUsed 
{
	struct FString                                user_id;                                                     // 0x00(0x10)
	uint32_t                                      table_index;                                                 // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct FString                                item_id;                                                     // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.Response_MatchResultDataListArray
// Size: 0x18 (Inherited: 0x00)
struct FResponse_MatchResultDataListArray 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.Request_MatchResultDataListArray
// Size: 0x70 (Inherited: 0x00)
struct FRequest_MatchResultDataListArray 
{
	char                                          battle_mode;                                                 // 0x00(0x01)
	char                                          game_mode;                                                   // 0x01(0x01)
	char                                          UnknownData2[0x6];                                           // 0x02(0x06)
	struct FString                                match_id;                                                    // 0x08(0x10)
	struct FString                                map_name;                                                    // 0x18(0x10)
	struct FString                                start_time;                                                  // 0x28(0x10)
	struct FString                                end_time;                                                    // 0x38(0x10)
	struct FString                                dedi_ip;                                                     // 0x48(0x10)
	uint32_t                                      dedi_port;                                                   // 0x58(0x04)
	char                                          UnknownData5C[0x4];                                          // 0x5c(0x04)
	struct TArray<None>                           user_result;                                                 // 0x60(0x10)
};

// ScriptStruct BravoHotelGame.Request_UserResultDataList_Rec
// Size: 0x30 (Inherited: 0x00)
struct FRequest_UserResultDataList_Rec 
{
	struct FString                                user_id;                                                     // 0x00(0x10)
	struct FString                                player_name;                                                 // 0x10(0x10)
	uint16_t                                      Rank;                                                        // 0x20(0x02)
	char                                          team_id;                                                     // 0x22(0x01)
	char                                          UnknownData23[0x5];                                          // 0x23(0x05)
	double                                        Weight;                                                      // 0x28(0x08)
};

// ScriptStruct BravoHotelGame.Response_PlayerSaveScore
// Size: 0x28 (Inherited: 0x00)
struct FResponse_PlayerSaveScore 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FNone                                  D;                                                           // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.Response_PlayerName_Rec
// Size: 0x10 (Inherited: 0x00)
struct FResponse_PlayerName_Rec 
{
	struct FString                                player_name;                                                 // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Response_PlayerScoreList
// Size: 0x28 (Inherited: 0x00)
struct FResponse_PlayerScoreList 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FMI-Exter                              D;                                                           // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.Response_ScoreListArray
// Size: 0x10 (Inherited: 0x00)
struct FResponse_ScoreListArray 
{
	struct TArray<None>                           score_list;                                                  // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Response_PlayerScore_Rec
// Size: 0xc8 (Inherited: 0x00)
struct FResponse_PlayerScore_Rec 
{
	char                                          battle_mode;                                                 // 0x00(0x01)
	char                                          UnknownData1[0x7];                                           // 0x01(0x07)
	double                                        mu;                                                          // 0x08(0x08)
	double                                        sigma;                                                       // 0x10(0x08)
	double                                        Rating;                                                      // 0x18(0x08)
	double                                        win_rating;                                                  // 0x20(0x08)
	double                                        kill_rating;                                                 // 0x28(0x08)
	uint32_t                                      matches_played;                                              // 0x30(0x04)
	uint32_t                                      top_10s;                                                     // 0x34(0x04)
	uint32_t                                      wins;                                                        // 0x38(0x04)
	uint32_t                                      tot_playtime;                                                // 0x3c(0x04)
	uint32_t                                      survival_time;                                               // 0x40(0x04)
	uint32_t                                      kill_oneself;                                                // 0x44(0x04)
	double                                        tot_distance_travelled;                                      // 0x48(0x08)
	double                                        distance_foot;                                               // 0x50(0x08)
	double                                        distance_swimming;                                           // 0x58(0x08)
	double                                        distance_vehicle;                                            // 0x60(0x08)
	double                                        acquire_weapon;                                              // 0x68(0x08)
	double                                        recover;                                                     // 0x70(0x08)
	double                                        boost;                                                       // 0x78(0x08)
	uint32_t                                      kills;                                                       // 0x80(0x04)
	char                                          UnknownData84[0x4];                                          // 0x84(0x04)
	double                                        kill_rate;                                                   // 0x88(0x08)
	double                                        damage_add;                                                  // 0x90(0x08)
	uint32_t                                      assists;                                                     // 0x98(0x04)
	char                                          UnknownData9C[0x4];                                          // 0x9c(0x04)
	double                                        longest_kill;                                                // 0xa0(0x08)
	uint32_t                                      headshots;                                                   // 0xa8(0x04)
	uint32_t                                      game_max_kills;                                              // 0xac(0x04)
	uint32_t                                      max_continuously_kills;                                      // 0xb0(0x04)
	uint32_t                                      road_kills;                                                  // 0xb4(0x04)
	uint32_t                                      distory_vehicles;                                            // 0xb8(0x04)
	uint32_t                                      faint;                                                       // 0xbc(0x04)
	uint32_t                                      team_kills;                                                  // 0xc0(0x04)
	char                                          UnknownDataC4[0x4];                                          // 0xc4(0x04)
};

// ScriptStruct BravoHotelGame.Request_PlayerScore
// Size: 0xd8 (Inherited: 0x00)
struct FRequest_PlayerScore 
{
	struct FString                                player_name;                                                 // 0x00(0x10)
	struct FNone                                  D;                                                           // 0x10(0xc8)
};

// ScriptStruct BravoHotelGame.Request_CheatCash
// Size: 0x18 (Inherited: 0x00)
struct FRequest_CheatCash 
{
	struct FString                                Command;                                                     // 0x00(0x10)
	struct FNone                                  Parameter;                                                   // 0x10(0x08)
};

// ScriptStruct BravoHotelGame.CheatParamCurrency
// Size: 0x08 (Inherited: 0x00)
struct FCheatParamCurrency 
{
	char                                          is_plus : 0;                                                 // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	uint32_t                                      Amount;                                                      // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.Request_CheatGold
// Size: 0x18 (Inherited: 0x00)
struct FRequest_CheatGold 
{
	struct FString                                Command;                                                     // 0x00(0x10)
	struct FNone                                  Parameter;                                                   // 0x10(0x08)
};

// ScriptStruct BravoHotelGame.Request_CheatCommand
// Size: 0x20 (Inherited: 0x00)
struct FRequest_CheatCommand 
{
	struct FString                                Command;                                                     // 0x00(0x10)
	struct FString                                Parameter;                                                   // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.Response_Language
// Size: 0x18 (Inherited: 0x00)
struct FResponse_Language 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.Request_Language
// Size: 0x10 (Inherited: 0x00)
struct FRequest_Language 
{
	struct FString                                Language;                                                    // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Response_PlayerInfo
// Size: 0xa0 (Inherited: 0x00)
struct FResponse_PlayerInfo 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FNone                                  D;                                                           // 0x18(0x88)
};

// ScriptStruct BravoHotelGame.Response_PlayerInfo_Rec
// Size: 0x88 (Inherited: 0x00)
struct FResponse_PlayerInfo_Rec 
{
	struct FString                                server_name;                                                 // 0x00(0x10)
	struct FString                                now;                                                         // 0x10(0x10)
	struct FString                                db;                                                          // 0x20(0x10)
	uint32_t                                      uid_local;                                                   // 0x30(0x04)
	char                                          UnknownData34[0x4];                                          // 0x34(0x04)
	uint64_t                                      uid_global;                                                  // 0x38(0x08)
	struct FString                                Name;                                                        // 0x40(0x10)
	uint32_t                                      Level;                                                       // 0x50(0x04)
	uint32_t                                      xp;                                                          // 0x54(0x04)
	uint32_t                                      Gold;                                                        // 0x58(0x04)
	uint32_t                                      energy;                                                      // 0x5c(0x04)
	struct FString                                energy_updated_at;                                           // 0x60(0x10)
	uint32_t                                      buy_coin;                                                    // 0x70(0x04)
	uint32_t                                      free_coin;                                                   // 0x74(0x04)
	uint32_t                                      sex;                                                         // 0x78(0x04)
	uint32_t                                      face;                                                        // 0x7c(0x04)
	uint32_t                                      hairstyle;                                                   // 0x80(0x04)
	uint32_t                                      intro;                                                       // 0x84(0x04)
};

// ScriptStruct BravoHotelGame.Response_ChangePName
// Size: 0x28 (Inherited: 0x00)
struct FResponse_ChangePName 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FNone                                  D;                                                           // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.Request_PlayerName
// Size: 0x10 (Inherited: 0x00)
struct FRequest_PlayerName 
{
	struct FString                                player_name;                                                 // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Response_CreateDefaultPC
// Size: 0x28 (Inherited: 0x00)
struct FResponse_CreateDefaultPC 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FNone                                  D;                                                           // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.Response_CreateDefaultPC_Rec
// Size: 0x10 (Inherited: 0x00)
struct FResponse_CreateDefaultPC_Rec 
{
	struct FString                                user_id;                                                     // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Request_CreateDefaultPC
// Size: 0x18 (Inherited: 0x00)
struct FRequest_CreateDefaultPC 
{
	struct FNone                                  pc_looks;                                                    // 0x00(0x18)
};

// ScriptStruct BravoHotelGame.Response_CreatePlayer
// Size: 0x38 (Inherited: 0x00)
struct FResponse_CreatePlayer 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FNone                                  D;                                                           // 0x18(0x20)
};

// ScriptStruct BravoHotelGame.Response_CreatePlayer_Rec
// Size: 0x20 (Inherited: 0x00)
struct FResponse_CreatePlayer_Rec 
{
	struct FString                                user_id;                                                     // 0x00(0x10)
	struct FString                                auth_token;                                                  // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.Request_CreatePlayer
// Size: 0x38 (Inherited: 0x00)
struct FRequest_CreatePlayer 
{
	struct FString                                player_name;                                                 // 0x00(0x10)
	struct FNone                                  pc_looks;                                                    // 0x10(0x18)
	struct TArray<None>                           equip_clothes;                                               // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.Response_CheckPlayerName
// Size: 0x20 (Inherited: 0x00)
struct FResponse_CheckPlayerName 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FNone                                  D;                                                           // 0x18(0x01)
	char                                          UnknownData19[0x7];                                          // 0x19(0x07)
};

// ScriptStruct BravoHotelGame.Response_CheckPlayerName_Rec
// Size: 0x01 (Inherited: 0x00)
struct FResponse_CheckPlayerName_Rec 
{
	char                                          is_available : 0;                                            // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.Request_CheckPlayerName
// Size: 0x10 (Inherited: 0x00)
struct FRequest_CheckPlayerName 
{
	struct FString                                player_name;                                                 // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Response_DSList
// Size: 0x28 (Inherited: 0x00)
struct FResponse_DSList 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct F`InterfaceProperty ZMulticastDelegateProperty �LazyObjectProperty�SoftObjectPropertyBInt64Property vInt32Property PInt16Property 8Int8Property�UInt64Property�UInt32Property�UInt16Property�MapProperty �SetProperty &Core�Engine�Editor�CoreUObject  EnumProperty&Cylinder�BoxSphereBounds �Sphere� Box  Vector2D�IntRect <IntPoint�Vector4 Name�Vector�Rotator SHVectorrColor rPlane �Matrix�LinearColor AdvanceFrame�Pointer �DoubleQuatSelfFTransform D;                                                           // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.CustomMatchDSList
// Size: 0x10 (Inherited: 0x00)
struct FCustomMatchDSList 
{
	struct TArray<None>                           waiting_ds_info_list;                                        // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.CustomMatchDS
// Size: 0x30 (Inherited: 0x00)
struct FCustomMatchDS 
{
	struct FString                                address;                                                     // 0x00(0x10)
	struct FString                                Token;                                                       // 0x10(0x10)
	struct FString                                encryption_key;                                              // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.Request_LoginGeegeeWithSteam
// Size: 0x68 (Inherited: 0x00)
struct FRequest_LoginGeegeeWithSteam 
{
	struct FString                                Client_version;                                              // 0x00(0x10)
	uint32_t                                      os;                                                          // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct FString                                ott;                                                         // 0x18(0x10)
	struct FString                                session_ticket;                                              // 0x28(0x10)
	struct FString                                entry_code;                                                  // 0x38(0x10)
	struct FString                                hardware_info;                                               // 0x48(0x10)
	struct FString                                geegee_project_id;                                           // 0x58(0x10)
};

// ScriptStruct BravoHotelGame.Request_LoginSteam
// Size: 0x48 (Inherited: 0x00)
struct FRequest_LoginSteam 
{
	struct FString                                Client_version;                                              // 0x00(0x10)
	uint32_t                                      os;                                                          // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct FString                                session_ticket;                                              // 0x18(0x10)
	struct FString                                entry_code;                                                  // 0x28(0x10)
	struct FString                                hardware_info;                                               // 0x38(0x10)
};

// ScriptStruct BravoHotelGame.Request_LoginGeegee
// Size: 0x58 (Inherited: 0x00)
struct FRequest_LoginGeegee 
{
	struct FString                                Client_version;                                              // 0x00(0x10)
	uint32_t                                      os;                                                          // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct FString                                ott;                                                         // 0x18(0x10)
	struct FString                                entry_code;                                                  // 0x28(0x10)
	struct FString                                hardware_info;                                               // 0x38(0x10)
	struct FString                                geegee_project_id;                                           // 0x48(0x10)
};

// ScriptStruct BravoHotelGame.Request_LoginAccount
// Size: 0x50 (Inherited: 0x00)
struct FRequest_LoginAccount 
{
	struct FString                                Client_version;                                              // 0x00(0x10)
	uint32_t                                      os;                                                          // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct FString                                account;                                                     // 0x18(0x10)
	char                                          allowed_only_if_exists : 0;                                  // 0x28(0x01)
	char                                          UnknownData28[0x8];                                          // 0x28(0x08)
	struct FString                                entry_code;                                                  // 0x30(0x10)
	struct FString                                hardware_info;                                               // 0x40(0x10)
};

// ScriptStruct BravoHotelGame.Response_LoginName
// Size: 0x78 (Inherited: 0x00)
struct FResponse_LoginName 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FNone                                  D;                                                           // 0x18(0x60)
};

// ScriptStruct BravoHotelGame.Response_LoginName_Rec
// Size: 0x60 (Inherited: 0x00)
struct FResponse_LoginName_Rec 
{
	char                                          created : 0;                                                 // 0x00(0x01)
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	struct FString                                SessionID;                                                   // 0x08(0x10)
	struct FString                                session_id;                                                  // 0x18(0x10)
	struct FString                                UID;                                                         // 0x28(0x10)
	char                                          is_go_create_pc : 0;                                         // 0x38(0x01)
	char                                          UnknownData38[0x8];                                          // 0x38(0x08)
	struct FString                                auth_token;                                                  // 0x40(0x10)
	struct FString                                match_making_tag;                                            // 0x50(0x10)
};

// ScriptStruct BravoHotelGame.Request_LoginName
// Size: 0x80 (Inherited: 0x00)
struct FRequest_LoginName 
{
	struct FString                                Client_version;                                              // 0x00(0x10)
	uint32_t                                      os;                                                          // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct FString                                player_name;                                                 // 0x18(0x10)
	char                                          allowed_only_if_exists : 0;                                  // 0x28(0x01)
	char                                          UnknownData28[0x8];                                          // 0x28(0x08)
	struct FNone                                  hardware_info;                                               // 0x30(0x50)
};

// ScriptStruct BravoHotelGame.HardWareInfo
// Size: 0x50 (Inherited: 0x00)
struct FHardWareInfo 
{
	struct FString                                full_guid;                                                   // 0x00(0x10)
	struct FString                                grid;                                                        // 0x10(0x10)
	struct FString                                hardware_id;                                                 // 0x20(0x10)
	struct FString                                software_id;                                                 // 0x30(0x10)
	struct FString                                network_id;                                                  // 0x40(0x10)
};

// ScriptStruct BravoHotelGame.Response_Login
// Size: 0x80 (Inherited: 0x00)
struct FResponse_Login 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FNone                                  D;                                                           // 0x18(0x68)
};

// ScriptStruct BravoHotelGame.Response_Login_Rec
// Size: 0x68 (Inherited: 0x00)
struct FResponse_Login_Rec 
{
	char                                          created : 0;                                                 // 0x00(0x01)
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	struct FString                                UID;                                                         // 0x08(0x10)
	char                                          go_to_create_pc : 0;                                         // 0x18(0x01)
	char                                          UnknownData18[0x8];                                          // 0x18(0x08)
	struct FString                                auth_token;                                                  // 0x20(0x10)
	struct FString                                Language;                                                    // 0x30(0x10)
	char                                          clean_campaign_joined : 0;                                   // 0x40(0x01)
	char                                          UnknownData40[0x8];                                          // 0x40(0x08)
	struct FString                                Msg;                                                         // 0x48(0x10)
	struct FString                                match_making_tag;                                            // 0x58(0x10)
};

// ScriptStruct BravoHotelGame.Request_Login
// Size: 0x28 (Inherited: 0x00)
struct FRequest_Login 
{
	struct FString                                Client_version;                                              // 0x00(0x10)
	uint32_t                                      os;                                                          // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct FString                                guest_id;                                                    // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.Response_AskLoginAvailable
// Size: 0x38 (Inherited: 0x00)
struct FResponse_AskLoginAvailable 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FNone                                  D;                                                           // 0x18(0x20)
};

// ScriptStruct BravoHotelGame.Response_AskLoginAvailable_Rec
// Size: 0x20 (Inherited: 0x00)
struct FResponse_AskLoginAvailable_Rec 
{
	char                                          approved : 0;                                                // 0x00(0x01)
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	struct FString                                entry_code;                                                  // 0x08(0x10)
	uint32_t                                      waiting_user;                                                // 0x18(0x04)
	char                                          not_available : 0;                                           // 0x1c(0x01)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.Request_AskLoginAvailable
// Size: 0x10 (Inherited: 0x00)
struct FRequest_AskLoginAvailable 
{
	struct FString                                waiting_ticket;                                              // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Response_GetWaitingTicket
// Size: 0x40 (Inherited: 0x00)
struct FResponse_GetWaitingTicket 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FNone                                  D;                                                           // 0x18(0x28)
};

// ScriptStruct BravoHotelGame.Response_GetWaitingTicket_Rec
// Size: 0x28 (Inherited: 0x00)
struct FResponse_GetWaitingTicket_Rec 
{
	struct FString                                waiting_ticket;                                              // 0x00(0x10)
	struct FString                                entry_code;                                                  // 0x10(0x10)
	char                                          not_available : 0;                                           // 0x20(0x01)
	char                                          UnknownData20[0x8];                                          // 0x20(0x08)
};

// ScriptStruct BravoHotelGame.Response_Header
// Size: 0x18 (Inherited: 0x00)
struct FResponse_Header 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.ConfigData
// Size: 0x188 (Inherited: 0x00)
struct FConfigData 
{
	struct FString                                service_status;                                              // 0x00(0x10)
	uint32_t                                      client_version_least;                                        // 0x10(0x04)
	uint32_t                                      client_version_latest;                                       // 0x14(0x04)
	struct FString                                ui_lobby;                                                    // 0x18(0x10)
	struct FString                                api_wait;                                                    // 0x28(0x10)
	struct FString                                api_auth;                                                    // 0x38(0x10)
	struct FString                                api_game;                                                    // 0x48(0x10)
	struct FString                                api_websocket;                                               // 0x58(0x10)
	struct FString                                wait_status;                                                 // 0x68(0x10)
	struct TArray<None>                           ping_display_by_region;                                      // 0x78(0x10)
	struct FString                                log_target_for_client;                                       // 0x88(0x10)
	struct FNone                                  log_target_for_client_to_kinesis;                            // 0x98(0x80)
	struct FString                                log_target_for_dedi;                                         // 0x118(0x10)
	struct FString                                replay_min_supported_version;                                // 0x128(0x10)
	struct FString                                replay_transfer_bucket;                                      // 0x138(0x10)
	struct FString                                evidential_data_bucket;                                      // 0x148(0x10)
	struct FNone                                  log_target_for_client_to_google;                             // 0x158(0x30)
};

// ScriptStruct BravoHotelGame.GoogleClientConfigData
// Size: 0x30 (Inherited: 0x00)
struct FGoogleClientConfigData 
{
	struct FString                                privatekey;                                                  // 0x00(0x10)
	struct FString                                privateid;                                                   // 0x10(0x10)
	struct FString                                iss;                                                         // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.KinesisConfigData
// Size: 0x80 (Inherited: 0x00)
struct FKinesisConfigData 
{
	struct FString                                cognito_kinesis_region;                                      // 0x00(0x10)
	struct FString                                cognito_user_pool_id;                                        // 0x10(0x10)
	struct FString                                cognito_user_pool_client_id;                                 // 0x20(0x10)
	struct FString                                cognito_user_name;                                           // 0x30(0x10)
	struct FString                                cognito_user_password;                                       // 0x40(0x10)
	struct FString                                cognito_identity_pool_id;                                    // 0x50(0x10)
	struct FString                                kinesis_data_stream_name;                                    // 0x60(0x10)
	struct FString                                evidential_data_bucket;                                      // 0x70(0x10)
};

// ScriptStruct BravoHotelGame.RegionConfigData
// Size: 0x30 (Inherited: 0x00)
struct FRegionConfigData 
{
	struct FString                                region;                                                      // 0x00(0x10)
	struct FString                                ec2_endpoint_url;                                            // 0x10(0x10)
	struct TArray<None>                           match_making_tag_list;                                       // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.WeaponCompare
// Size: 0x170 (Inherited: 0x00)
struct FWeaponCompare 
{
	char                                          CompareRating : 0;                                           // 0x00(0x01)
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	struct FNone                                  Power;                                                       // 0x08(0x20)
	struct FNone                                  EffectiveRange;                                              // 0x28(0x20)
	struct FNone                                  Stability;                                                   // 0x48(0x20)
	struct FNone                                  Firingrate;                                                  // 0x68(0x20)
	struct FNone                                  Ammo;                                                        // 0x88(0x20)
	struct FText                                  PickupWeaponText;                                            // 0xa8(0x18)
	struct FText                                  WeaponItemComparingName;                                     // 0xc0(0x18)
	struct FString                                AmmoInfo;                                                    // 0xd8(0x10)
	struct TSoftObjectPtr<FNone>                  TexturePtr;                                                  // 0xe8(0x28)
	enum class None                               PickupRarity;                                                // 0x110(0x01)
	char                                          UnknownData111[0x7];                                         // 0x111(0x07)
	struct FText                                  Desc;                                                        // 0x118(0x18)
	char                                          WeaponLockVisibility : 0;                                    // 0x130(0x01)
	char                                          UnknownData130[0x1];                                         // 0x130(0x01)
	char                                          IsMyWeapon : 0;                                              // 0x131(0x01)
	char                                          UnknownData131[0x1];                                         // 0x131(0x01)
	char                                          BindInfoVisibility : 0;                                      // 0x132(0x01)
	char                                          UnknownData132[0x6];                                         // 0x132(0x06)
	struct FString                                BindInfoNickName;                                            // 0x138(0x10)
	struct FString                                BindInfoDesc;                                                // 0x148(0x10)
	uint32_t                                      BindLevel;                                                   // 0x158(0x04)
	char                                          UnknownData15C[0x4];                                         // 0x15c(0x04)
	struct TArray<None>                           AbilitySlot;                                                 // 0x160(0x10)
};

// ScriptStruct BravoHotelGame.AbilitySlot
// Size: 0x20 (Inherited: 0x00)
struct FAbilitySlot 
{
	struct FString                                Icon;                                                        // 0x00(0x10)
	struct FString                                Value;                                                       // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.ItemCompareInfo
// Size: 0x20 (Inherited: 0x00)
struct FItemCompareInfo 
{
	uint32_t                                      Value;                                                       // 0x00(0x04)
	uint32_t                                      CompareValue;                                                // 0x04(0x04)
	enum class None                               CompareType;                                                 // 0x08(0x01)
	char                                          UnknownData9[0x7];                                           // 0x09(0x07)
	struct FString                                CompareString;                                               // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.ItemComparefloatInfo
// Size: 0x20 (Inherited: 0x00)
struct FItemComparefloatInfo 
{
	float                                         Value;                                                       // 0x00(0x04)
	float                                         CompareValue;                                                // 0x04(0x04)
	enum class None                               CompareType;                                                 // 0x08(0x01)
	char                                          UnknownData9[0x7];                                           // 0x09(0x07)
	struct FString                                CompareString;                                               // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.WeaponItem
// Size: 0xc0 (Inherited: 0x00)
struct FWeaponItem 
{
	float                                         Power;                                                       // 0x00(0x04)
	uint32_t                                      EffectiveRange;                                              // 0x04(0x04)
	float                                         Stability;                                                   // 0x08(0x04)
	uint32_t                                      Firingrate;                                                  // 0x0c(0x04)
	uint32_t                                      Ammo;                                                        // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct FString                                PickupWeaponText;                                            // 0x18(0x10)
	struct FString                                AmmoInfo;                                                    // 0x28(0x10)
	struct TSoftObjectPtr<FNone>                  TexturePtr;                                                  // 0x38(0x28)
	enum class None                               Rarity;                                                      // 0x60(0x01)
	char                                          UnknownData61[0x7];                                          // 0x61(0x07)
	struct FText                                  Desc;                                                        // 0x68(0x18)
	char                                          WeaponLockVisibility : 0;                                    // 0x80(0x01)
	char                                          UnknownData80[0x1];                                          // 0x80(0x01)
	char                                          IsMyWeapon : 0;                                              // 0x81(0x01)
	char                                          UnknownData81[0x1];                                          // 0x81(0x01)
	char                                          BindInfoVisibility : 0;                                      // 0x82(0x01)
	char                                          UnknownData82[0x6];                                          // 0x82(0x06)
	struct FString                                BindInfoNickName;                                            // 0x88(0x10)
	struct FString                                BindInfoDesc;                                                // 0x98(0x10)
	uint32_t                                      BindLevel;                                                   // 0xa8(0x04)
	char                                          UnknownDataAC[0x4];                                          // 0xac(0x04)
	struct TArray<None>                           AbilitySlot;                                                 // 0xb0(0x10)
};

// ScriptStruct BravoHotelGame.PickupItem
// Size: 0x98 (Inherited: 0x00)
struct FPickupItem 
{
	char                                          Visibility : 0;                                              // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
	char                                          NotEnoughSpace : 0;                                          // 0x01(0x01)
	char                                          UnknownData1[0x1];                                           // 0x01(0x01)
	char                                          SeperateAmmo : 0;                                            // 0x02(0x01)
	char                                          UnknownData2[0x1];                                           // 0x02(0x01)
	char                                          bNeedItem : 0;                                               // 0x03(0x01)
	char                                          UnknownData3[0x1];                                           // 0x03(0x01)
	char                                          bFullNeedItem : 0;                                           // 0x04(0x01)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FText                                  DisplayName;                                                 // 0x08(0x18)
	uint32_t                                      Quantity;                                                    // 0x20(0x04)
	char                                          UnknownData24[0x4];                                          // 0x24(0x04)
	struct FString                                ItemMessage;                                                 // 0x28(0x10)
	struct TSoftObjectPtr<FNone>                  TexturePtr;                                                  // 0x38(0x28)
	enum class None                               ItemType;                                                    // 0x60(0x01)
	enum class None                               Rarity;                                                      // 0x61(0x01)
	char                                          UnknownData62[0x6];                                          // 0x62(0x06)
	struct FText                                  Desc;                                                        // 0x68(0x18)
	struct FText                                  CombineTargetText;                                           // 0x80(0x18)
};

// ScriptStruct BravoHotelGame.Action
// Size: 0x38 (Inherited: 0x00)
struct FAction 
{
	char                                          Visibility : 0;                                              // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
	char                                          State : 0;                                                   // 0x01(0x01)
	char                                          UnknownData1[0x1];                                           // 0x01(0x01)
	char                                          Ladder : 0;                                                  // 0x02(0x01)
	char                                          UnknownData2[0x1];                                           // 0x02(0x01)
	char                                          UnknownData3_0 : 7;                                          // 0x03(0x01)
	char                                          SpaceBar : 1;                                                // 0x03(0x01)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                Message;                                                     // 0x08(0x10)
	struct FString                                SubMessage;                                                  // 0x18(0x10)
	struct FString                                BombingMessage;                                              // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.RecipeTreeWidgetInfo
// Size: 0x30 (Inherited: 0x00)
struct FRecipeTreeWidgetInfo 
{
	struct FNone*                                 CurrentWidget;                                               // 0x00(0x08)
	uint32_t                                      RepairWidgetInfoIndex;                                       // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct TArray<None>                           MaterialWidgetInfoIndex;                                     // 0x10(0x10)
	struct TArray<None>                           TreeDecoWidgets;                                             // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.SpawnedItemInfo
// Size: 0x24 (Inherited: 0x00)
struct FSpawnedItemInfo 
{
	struct FNone                                  Loc;                                                         // 0x00(0x0c)
	struct FNone                                  Rot;                                                         // 0x0c(0x0c)
	struct FNone                                  ForwardVector;                                               // 0x18(0x0c)
};

// ScriptStruct BravoHotelGame.ResultSpawnItemInfo
// Size: 0x20 (Inherited: 0x00)
struct FResultSpawnItemInfo 
{
	uint32_t                                      SpawnBoxID;                                                  // 0x00(0x04)
	struct FName                                  ItemId;                                                      // 0x04(0x08)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FNone*                                 SpawnItem;                                                   // 0x10(0x08)
	uint32_t                                      ItemCount;                                                   // 0x18(0x04)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.SpawnItemsInBox
// Size: 0x18 (Inherited: 0x00)
struct FSpawnItemsInBox 
{
	struct FNone                                  Item;                                                        // 0x00(0x10)
	enum class None                               Rarity;                                                      // 0x10(0x01)
	char                                          UnknownData11[0x7];                                          // 0x11(0x07)
};

// ScriptStruct BravoHotelGame.MustSpawnItemInfo
// Size: 0x08 (Inherited: 0x00)
struct FMustSpawnItemInfo 
{
	uint32_t                                      ItemId;                                                      // 0x00(0x04)
	uint32_t                                      ItemCount;                                                   // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.SpawnItemInfo
// Size: 0x08 (Inherited: 0x00)
struct FSpawnItemInfo 
{
	enum class None                               ItemType;                                                    // 0x00(0x01)
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
	float                                         ItemProbability;                                             // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.SpawnBoxList
// Size: 0x10 (Inherited: 0x00)
struct FSpawnBoxList 
{
	struct TArray<None>                           List;                                                        // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.StandardGroupInfo_UI
// Size: 0x20 (Inherited: 0x00)
struct FStandardGroupInfo_UI 
{
	struct FString                                StandardGroupName;                                           // 0x00(0x10)
	struct FString                                StandardGroupKey;                                            // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.BuildingInfo_UI
// Size: 0x18 (Inherited: 0x00)
struct FBuildingInfo_UI 
{
	struct FNone                                  BuildingPosition;                                            // 0x00(0x08)
	struct FString                                BuildingName;                                                // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.BuildingData
// Size: 0xa8 (Inherited: 0x00)
struct FBuildingData 
{
	struct FNone                                  BuildingPosition;                                            // 0x00(0x0c)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FNone*                                 SlotWidget;                                                  // 0x10(0x08)
	struct TArray<None>                           SpawnInfos;                                                  // 0x18(0x10)
	struct TArray<None>                           DivisionInfos;                                               // 0x28(0x10)
	struct TArray<None>                           RateAddInfos;                                                // 0x38(0x10)
	struct TArray<None>                           RateRemoveInfos;                                             // 0x48(0x10)
	struct TMap<None, None>                       StandardGroupData;                                           // 0x58(0x50)
};

// ScriptStruct BravoHotelGame.ItemRecipeTreeData
// Size: 0x38 (Inherited: 0x08)
struct FItemRecipeTreeData : FTableRowBase 
{
	struct FName                                  CurrentRecipe;                                               // 0x08(0x08)
	struct FName                                  CurrentItem;                                                 // 0x10(0x08)
	uint32_t                                      Count;                                                       // 0x18(0x04)
	struct FName                                  RepairRecipe;                                                // 0x1c(0x08)
	char                                          UnknownData24[0x14];                                         // 0x24(0x14)
};

// ScriptStruct BravoHotelGame.ItemRecipeData
// Size: 0x38 (Inherited: 0x08)
struct FItemRecipeData : FTableRowBase 
{
	struct FName                                  ResultItem;                                                  // 0x08(0x08)
	char                                          RepairRecipe : 0;                                            // 0x10(0x01)
	char                                          UnknownData10[0x1];                                          // 0x10(0x01)
	char                                          TopRecipe : 0;                                               // 0x11(0x01)
	char                                          UnknownData11[0x3];                                          // 0x11(0x03)
	float                                         CombineTime;                                                 // 0x14(0x04)
	struct TArray<None>                           GroupRewardIDs;                                              // 0x18(0x10)
	struct TArray<None>                           MaterialItems;                                               // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.ItemRecipeMaterialElement
// Size: 0x18 (Inherited: 0x08)
struct FItemRecipeMaterialElement : FTableRowBase 
{
	struct FName                                  MaterialItem;                                                // 0x08(0x08)
	uint32_t                                      Count;                                                       // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelThrowingWeaponItemInfo
// Size: 0x530 (Inherited: 0x00)
struct FBravoHotelThrowingWeaponItemInfo 
{
	struct FNone                                  ItemInfo;                                                    // 0x00(0x98)
	struct FNone                                  ItemDetailInfo;                                              // 0x98(0x490)
	char                                          PrevItem : 0;                                                // 0x528(0x01)
	char                                          UnknownData528[0x8];                                         // 0x528(0x08)
};

// ScriptStruct BravoHotelGame.ItemEffectData
// Size: 0x200 (Inherited: 0x08)
struct FItemEffectData : FTableRowBase 
{
	struct FNone*                                 RootParticle;                                                // 0x08(0x08)
	struct FNone                                  RootParticleScale;                                           // 0x10(0x0c)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
	struct FNone                                  OriginEffectInfo;                                            // 0x20(0xa0)
	struct FNone                                  WeakEffectInfo;                                              // 0xc0(0xa0)
	struct FNone*                                 ActivateParticle;                                            // 0x160(0x08)
	struct FNone*                                 DeactivateParticle;                                          // 0x168(0x08)
	struct TSoftObjectPtr<FNone>                  MeshParticle;                                                // 0x170(0x28)
	struct FNone                                  MeshParticleScale;                                           // 0x198(0x0c)
	char                                          UnknownData1A4[0xc];                                         // 0x1a4(0x0c)
	struct FNone                                  MeshParticleTransform;                                       // 0x1b0(0x30)
	struct FName                                  MeshParticleAttachSocketName;                                // 0x1e0(0x08)
	struct TArray<None>                           SubParticles;                                                // 0x1e8(0x10)
	char                                          UnknownData1F8[0x8];                                         // 0x1f8(0x08)
};

// ScriptStruct BravoHotelGame.ItemEffectSubParticleInfo
// Size: 0x70 (Inherited: 0x00)
struct FItemEffectSubParticleInfo 
{
	struct FNone*                                 Particle;                                                    // 0x00(0x08)
	enum class None                               SpawnType;                                                   // 0x08(0x01)
	char                                          UnknownData9[0x7];                                           // 0x09(0x07)
	struct TMap<None, None>                       ParticleColor;                                               // 0x10(0x50)
	struct FNone                                  Scale;                                                       // 0x60(0x0c)
	char                                          UnknownData6C[0x4];                                          // 0x6c(0x04)
};

// ScriptStruct BravoHotelGame.ItemEffectInfo
// Size: 0xa0 (Inherited: 0x00)
struct FItemEffectInfo 
{
	struct TMap<None, None>                       RootParticleColor;                                           // 0x00(0x50)
	struct TMap<None, None>                       StaticMeshColor;                                             // 0x50(0x50)
};

// ScriptStruct BravoHotelGame.ItemAbilityData
// Size: 0x130 (Inherited: 0x08)
struct FItemAbilityData : FTableRowBase 
{
	struct FName                                  WeaponId;                                                    // 0x08(0x08)
	enum class None                               WeaponType;                                                  // 0x10(0x01)
	enum class None                               ThrowingWeaponType;                                          // 0x11(0x01)
	enum class None                               WeaponAttachmentType;                                        // 0x12(0x01)
	enum class None                               WeaponAttachmentItem;                                        // 0x13(0x01)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct FNone                                  Ability;                                                     // 0x18(0xa8)
	struct FNone                                  AttachmentInfo;                                              // 0xc0(0x48)
	struct TArray<None>                           EquipedBuffName;                                             // 0x108(0x10)
	struct TArray<None>                           UsingBuffName;                                               // 0x118(0x10)
	char                                          bMovableDuringUse : 0;                                       // 0x128(0x01)
	char                                          UnknownData128[0x8];                                         // 0x128(0x08)
};

// ScriptStruct BravoHotelGame.ItemEquipData
// Size: 0x90 (Inherited: 0x08)
struct FItemEquipData : FTableRowBase 
{
	struct TSoftClassPtr<UObject>                 EquippableItemClass;                                         // 0x08(0x28)
	struct FName                                  MutableUniqueKey;                                            // 0x30(0x08)
	char                                          bUseEquippedStaticMesh : 0;                                  // 0x38(0x01)
	char                                          UnknownData38[0x8];                                          // 0x38(0x08)
	struct TSoftObjectPtr<FNone>                  EquippedStaticMesh;                                          // 0x40(0x28)
	struct TSoftObjectPtr<FNone>                  EquippedSkeletalMesh;                                        // 0x68(0x28)
};

// ScriptStruct BravoHotelGame.ItemPickUpData
// Size: 0xf0 (Inherited: 0x08)
struct FItemPickUpData : FTableRowBase 
{
	struct FName                                  ItemEffectID;                                                // 0x08(0x08)
	char                                          bOverridePickupScale : 0;                                    // 0x10(0x01)
	char                                          UnknownData10[0x4];                                          // 0x10(0x04)
	struct FNone                                  OverlapBoxExtent;                                            // 0x14(0x0c)
	float                                         TraceSphereRadius;                                           // 0x20(0x04)
	struct FNone                                  WorldStaticMeshLoc;                                          // 0x24(0x0c)
	struct FNone                                  WorldStaticMeshRot;                                          // 0x30(0x0c)
	struct FNone                                  WorldStaticMeshScale;                                        // 0x3c(0x0c)
	struct FNone                                  WorldSkelMeshLoc;                                            // 0x48(0x0c)
	struct FNone                                  WorldSkelMeshRot;                                            // 0x54(0x0c)
	struct FNone                                  WorldSkelMeshScale;                                          // 0x60(0x0c)
	char                                          bUseStaticMesh : 0;                                          // 0x6c(0x01)
	char                                          UnknownData6C[0x4];                                          // 0x6c(0x04)
	struct TSoftObjectPtr<FNone>                  WorldStaticMesh;                                             // 0x70(0x28)
	struct TSoftObjectPtr<FNone>                  WorldSkeletalMesh;                                           // 0x98(0x28)
	float                                         NetCullDistanceSquared;                                      // 0xc0(0x04)
	float                                         DrawDistance;                                                // 0xc4(0x04)
	struct TSoftObjectPtr<FNone>                  AudioEvent;                                                  // 0xc8(0x28)
};

// ScriptStruct BravoHotelGame.InventoryItemInfoArray
// Size: 0x10 (Inherited: 0x00)
struct FInventoryItemInfoArray 
{
	struct TArray<None>                           ItemInfos;                                                   // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.DivisionItem
// Size: 0x18 (Inherited: 0x00)
struct FDivisionItem 
{
	char                                          DivisionComplete : 0;                                        // 0x00(0x01)
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	struct TArray<None>                           Items;                                                       // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.KeepedItemInfo
// Size: 0xa8 (Inherited: 0x00)
struct FKeepedItemInfo 
{
	struct FNone                                  MainItemInfo;                                                // 0x00(0x98)
	struct TArray<None>                           AdditionalItemInfos;                                         // 0x98(0x10)
};

// ScriptStruct BravoHotelGame.ItemUse
// Size: 0x20 (Inherited: 0x00)
struct FItemUse 
{
	char                                          Visibility : 0;                                              // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
	char                                          SubInfo : 0;                                                 // 0x01(0x01)
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
	float                                         Percent;                                                     // 0x04(0x04)
	float                                         RemainTime;                                                  // 0x08(0x04)
	struct FNone                                  Color;                                                       // 0x0c(0x04)
	struct FString                                Message;                                                     // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.PopupWidgetInfo
// Size: 0x10 (Inherited: 0x00)
struct FPopupWidgetInfo 
{
	struct FNone*                                 Widget;                                                      // 0x00(0x08)
	char                                          IsGmaeAndUIMode : 0;                                         // 0x08(0x01)
	char                                          UnknownData8[0x1];                                           // 0x08(0x01)
	char                                          ShowMouseCursorCapture : 0;                                  // 0x09(0x01)
	char                                          UnknownData9[0x1];                                           // 0x09(0x01)
	char                                          bOnlyRemoveByObject : 0;                                     // 0x0a(0x01)
	char                                          UnknownDataA[0x6];                                           // 0x0a(0x06)
};

// ScriptStruct BravoHotelGame.Coh_Response_MaterialList
// Size: 0x10 (Inherited: 0x00)
struct FCoh_Response_MaterialList 
{
	struct TArray<None>                           material_list;                                               // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Coh_Response_Weapon_List
// Size: 0x10 (Inherited: 0x00)
struct FCoh_Response_Weapon_List 
{
	struct TArray<None>                           weapon_list;                                                 // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.Coh_InviteUser
// Size: 0x20 (Inherited: 0x00)
struct FCoh_InviteUser 
{
	struct FString                                Name;                                                        // 0x00(0x10)
	struct FString                                UID;                                                         // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.Coh_Error
// Size: 0x18 (Inherited: 0x00)
struct FCoh_Error 
{
	uint32_t                                      Code;                                                        // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                Desc;                                                        // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.Coh_PartyInfo
// Size: 0x38 (Inherited: 0x00)
struct FCoh_PartyInfo 
{
	struct FString                                PartyID;                                                     // 0x00(0x10)
	struct FString                                LeaderUID;                                                   // 0x10(0x10)
	char                                          IsInvite : 0;                                                // 0x20(0x01)
	char                                          UnknownData20[0x8];                                          // 0x20(0x08)
	struct TArray<None>                           Members;                                                     // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.Coh_PartyMemberInfo
// Size: 0x90 (Inherited: 0x00)
struct FCoh_PartyMemberInfo 
{
	struct FString                                UID;                                                         // 0x00(0x10)
	struct FString                                Name;                                                        // 0x10(0x10)
	char                                          IsReady : 0;                                                 // 0x20(0x01)
	char                                          UnknownData20[0x1];                                          // 0x20(0x01)
	char                                          IsVoiceChat : 0;                                             // 0x21(0x01)
	char                                          UnknownData21[0x1];                                          // 0x21(0x01)
	char                                          IsLeader : 0;                                                // 0x22(0x01)
	char                                          UnknownData22[0x1];                                          // 0x22(0x01)
	char                                          IsOnline : 0;                                                // 0x23(0x01)
	char                                          UnknownData23[0x5];                                          // 0x23(0x05)
	struct FString                                clientStatus;                                                // 0x28(0x10)
	uint32_t                                      SeasonTierID;                                                // 0x38(0x04)
	char                                          UnknownData3C[0x4];                                          // 0x3c(0x04)
	struct FString                                AccessRegion;                                                // 0x40(0x10)
	uint32_t                                      Ping;                                                        // 0x50(0x04)
	char                                          UnknownData54[0x4];                                          // 0x54(0x04)
	struct FString                                steamID;                                                     // 0x58(0x10)
	struct FNone                                  Pos;                                                         // 0x68(0x08)
	uint32_t                                      ClassDataIndex;                                              // 0x70(0x04)
	char                                          UnknownData74[0x4];                                          // 0x74(0x04)
	struct FString                                ClassName;                                                   // 0x78(0x10)
	uint32_t                                      ClassLevel;                                                  // 0x88(0x04)
	char                                          UnknownData8C[0x4];                                          // 0x8c(0x04)
};

// ScriptStruct BravoHotelGame.Coh_LocalPlayerInfo
// Size: 0x20 (Inherited: 0x00)
struct FCoh_LocalPlayerInfo 
{
	struct FString                                UID;                                                         // 0x00(0x10)
	struct FString                                Name;                                                        // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.CoherentSavedSettings
// Size: 0x18 (Inherited: 0x00)
struct FCoherentSavedSettings 
{
	struct FString                                UserID;                                                      // 0x00(0x10)
	char                                          bArmory : 0;                                                 // 0x10(0x01)
	char                                          UnknownData10[0x1];                                          // 0x10(0x01)
	char                                          bInventory : 0;                                              // 0x11(0x01)
	char                                          UnknownData11[0x1];                                          // 0x11(0x01)
	char                                          bSupplybox : 0;                                              // 0x12(0x01)
	char                                          UnknownData12[0x1];                                          // 0x12(0x01)
	char                                          bInviteBox : 0;                                              // 0x13(0x01)
	char                                          UnknownData13[0x5];                                          // 0x13(0x05)
};

// ScriptStruct BravoHotelGame.LogInfo
// Size: 0x210 (Inherited: 0x00)
struct FLogInfo 
{
	char                                          UnknownData0[0x210];                                         // 0x00(0x210)
};

// ScriptStruct BravoHotelGame.EventLogBase
// Size: 0x08 (Inherited: 0x00)
struct FEventLogBase 
{
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
};

// ScriptStruct BravoHotelGame.SupplyInfoEvent
// Size: 0x10 (Inherited: 0x08)
struct FSupplyInfoEvent : FEventLogBase 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.RedZoneInfoEvent
// Size: 0x10 (Inherited: 0x08)
struct FRedZoneInfoEvent : FEventLogBase 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.BlueZoneInfoEvent
// Size: 0x10 (Inherited: 0x08)
struct FBlueZoneInfoEvent : FEventLogBase 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.GameCycleInfoEvent
// Size: 0x10 (Inherited: 0x08)
struct FGameCycleInfoEvent : FEventLogBase 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.GameEndEvent
// Size: 0x10 (Inherited: 0x08)
struct FGameEndEvent : FEventLogBase 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.DestructObjectEvent
// Size: 0x10 (Inherited: 0x08)
struct FDestructObjectEvent : FEventLogBase 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.VechicleInfoEvent
// Size: 0x10 (Inherited: 0x08)
struct FVechicleInfoEvent : FEventLogBase 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.CharacterCycleInfoEvent
// Size: 0x10 (Inherited: 0x08)
struct FCharacterCycleInfoEvent : FEventLogBase 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.CharacterDeathEvent
// Size: 0x10 (Inherited: 0x08)
struct FCharacterDeathEvent : FEventLogBase 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.CharacterRecorverEvent
// Size: 0x10 (Inherited: 0x08)
struct FCharacterRecorverEvent : FEventLogBase 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.CharacterKnockDownEvent
// Size: 0x10 (Inherited: 0x08)
struct FCharacterKnockDownEvent : FEventLogBase 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.CharacterHitEvent
// Size: 0x10 (Inherited: 0x08)
struct FCharacterHitEvent : FEventLogBase 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.CharacterAttackEvent
// Size: 0x10 (Inherited: 0x08)
struct FCharacterAttackEvent : FEventLogBase 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.CharacterBehaviorEvent
// Size: 0x10 (Inherited: 0x08)
struct FCharacterBehaviorEvent : FEventLogBase 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.CharacterMoveEvent
// Size: 0x10 (Inherited: 0x08)
struct FCharacterMoveEvent : FEventLogBase 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.AttachItemStateEvent
// Size: 0x10 (Inherited: 0x08)
struct FAttachItemStateEvent : FEventLogBase 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.EquipItemStateEvent
// Size: 0x10 (Inherited: 0x08)
struct FEquipItemStateEvent : FEventLogBase 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.UsingItemEvent
// Size: 0x20 (Inherited: 0x08)
struct FUsingItemEvent : FEventLogBase 
{
	char                                          UnknownData8[0x18];                                          // 0x08(0x18)
};

// ScriptStruct BravoHotelGame.GainItemEvent
// Size: 0x20 (Inherited: 0x08)
struct FGainItemEvent : FEventLogBase 
{
	char                                          UnknownData8[0x18];                                          // 0x08(0x18)
};

// ScriptStruct BravoHotelGame.SkyDiveEvent
// Size: 0x10 (Inherited: 0x08)
struct FSkyDiveEvent : FEventLogBase 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.JoinGameFailEvent
// Size: 0x10 (Inherited: 0x08)
struct FJoinGameFailEvent : FEventLogBase 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.JoinGameEvent
// Size: 0x10 (Inherited: 0x08)
struct FJoinGameEvent : FEventLogBase 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.MatchJoinFailEvent
// Size: 0x10 (Inherited: 0x08)
struct FMatchJoinFailEvent : FEventLogBase 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.MatchJoinEvent
// Size: 0x10 (Inherited: 0x08)
struct FMatchJoinEvent : FEventLogBase 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.PartyInfoEvent
// Size: 0x10 (Inherited: 0x08)
struct FPartyInfoEvent : FEventLogBase 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.CreateCharacterEvent
// Size: 0x10 (Inherited: 0x08)
struct FCreateCharacterEvent : FEventLogBase 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.AccountLogOutEvent
// Size: 0x10 (Inherited: 0x08)
struct FAccountLogOutEvent : FEventLogBase 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.AccountLogInEvent
// Size: 0x10 (Inherited: 0x08)
struct FAccountLogInEvent : FEventLogBase 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.AccountCreateEvent
// Size: 0x10 (Inherited: 0x08)
struct FAccountCreateEvent : FEventLogBase 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.ExitEvent
// Size: 0x10 (Inherited: 0x08)
struct FExitEvent : FEventLogBase 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.FpsEvent
// Size: 0x10 (Inherited: 0x08)
struct FFpsEvent : FEventLogBase 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.GameOptionEvent
// Size: 0x10 (Inherited: 0x08)
struct FGameOptionEvent : FEventLogBase 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.PcInfoEvent
// Size: 0x10 (Inherited: 0x08)
struct FPcInfoEvent : FEventLogBase 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.TempEvent
// Size: 0x10 (Inherited: 0x08)
struct FTempEvent : FEventLogBase 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.ReplayCircleInfo
// Size: 0x10 (Inherited: 0x00)
struct FReplayCircleInfo 
{
	char                                          IsReplayCircle : 0;                                          // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	struct FNone                                  ReplayCirclePos;                                             // 0x04(0x08)
	float                                         ReplayCircleRadius;                                          // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.MapCompBlueZoneInfo
// Size: 0x2c (Inherited: 0x00)
struct FMapCompBlueZoneInfo 
{
	char                                          IsBlueZone : 0;                                              // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
	char                                          IsVisibleBlueZone : 0;                                       // 0x01(0x01)
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
	struct FNone                                  CurrentSurvivalCirclePos;                                    // 0x04(0x08)
	float                                         CurrentSurvivalCircleRadius;                                 // 0x0c(0x04)
	char                                          IsVisibleTargetCircle : 0;                                   // 0x10(0x01)
	char                                          UnknownData10[0x4];                                          // 0x10(0x04)
	struct FNone                                  TargetSurvivalCirclePos;                                     // 0x14(0x08)
	float                                         TargetSurvivalCircleRadius;                                  // 0x1c(0x04)
	struct FNone                                  OuterCirclePos;                                              // 0x20(0x08)
	float                                         OuterCircleRadius;                                           // 0x28(0x04)
};

// ScriptStruct BravoHotelGame.PersonalSupplyBoxInfo
// Size: 0x10 (Inherited: 0x00)
struct FPersonalSupplyBoxInfo 
{
	char                                          IsSpawned : 0;                                               // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	struct FNone                                  Position;                                                    // 0x04(0x08)
	enum class None                               PingType;                                                    // 0x0c(0x01)
	char                                          UnknownDataD[0x3];                                           // 0x0d(0x03)
};

// ScriptStruct BravoHotelGame.MapPlayerInfo
// Size: 0x58 (Inherited: 0x00)
struct FMapPlayerInfo 
{
	struct FNone*                                 PlayerState;                                                 // 0x00(0x08)
	struct FNone                                  Position;                                                    // 0x08(0x08)
	float                                         Angle;                                                       // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct FNone*                                 PlayerIconWidget;                                            // 0x18(0x08)
	char                                          HasMarker : 0;                                               // 0x20(0x01)
	char                                          UnknownData20[0x4];                                          // 0x20(0x04)
	struct FNone                                  MarkerPosition;                                              // 0x24(0x08)
	char                                          UnknownData2C[0x4];                                          // 0x2c(0x04)
	struct FNone*                                 PlayerMarkerWidget;                                          // 0x30(0x08)
	char                                          HasRoutePing : 0;                                            // 0x38(0x01)
	char                                          UnknownData38[0x8];                                          // 0x38(0x08)
	struct TArray<None>                           RoutePositions;                                              // 0x40(0x10)
	struct FNone*                                 RoutePingWidget;                                             // 0x50(0x08)
};

// ScriptStruct BravoHotelGame.MuzzleEffect
// Size: 0x50 (Inherited: 0x00)
struct FMuzzleEffect 
{
	struct FNone*                                 MuzzleFlash_3P_SingleFire;                                   // 0x00(0x08)
	struct FNone*                                 MuzzleSmoke_3P_SingleFire;                                   // 0x08(0x08)
	struct FNone*                                 MuzzleFlash_3P_MultiFire;                                    // 0x10(0x08)
	struct FNone*                                 MuzzleSmoke_3P_MultiFire;                                    // 0x18(0x08)
	struct FNone*                                 MuzzleFlash_1P_SingleFire;                                   // 0x20(0x08)
	struct FNone*                                 MuzzleSmoke_1P_SingleFire;                                   // 0x28(0x08)
	struct FNone*                                 MuzzleFlash_1P_MultiFire;                                    // 0x30(0x08)
	struct FNone*                                 MuzzleSmoke_1P_MultiFire;                                    // 0x38(0x08)
	struct FNone*                                 MuzzleFlash_1P_HighMagnificationSight;                       // 0x40(0x08)
	struct FNone*                                 MuzzleSmoke_1P_HighMagnificationSight;                       // 0x48(0x08)
};

// ScriptStruct BravoHotelGame.RepNewbieData
// Size: 0x20 (Inherited: 0x00)
struct FRepNewbieData 
{
	char                                          bIsBeginner : 0;                                             // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	uint32_t                                      DefeatLevel;                                                 // 0x04(0x04)
	struct FString                                Training;                                                    // 0x08(0x10)
	uint32_t                                      LoserScore;                                                  // 0x18(0x04)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.ReplayFireEvent
// Size: 0xb8 (Inherited: 0x00)
struct FReplayFireEvent 
{
	struct FString                                NetGUID;                                                     // 0x00(0x10)
	struct FNone                                  ProjectileInfo;                                              // 0x10(0xa8)
};

// ScriptStruct BravoHotelGame.RepCharacterAppearanceInfo
// Size: 0x14 (Inherited: 0x00)
struct FRepCharacterAppearanceInfo 
{
	uint32_t                                      FaceID;                                                      // 0x00(0x04)
	uint32_t                                      FaceColorID;                                                 // 0x04(0x04)
	uint32_t                                      HairID;                                                      // 0x08(0x04)
	uint32_t                                      HairColorID;                                                 // 0x0c(0x04)
	uint8_t                                       gender;                                                      // 0x10(0x01)
	char                                          UnknownData11[0x3];                                          // 0x11(0x03)
};

// ScriptStruct BravoHotelGame.RepSimulatedDeathInfo
// Size: 0x30 (Inherited: 0x00)
struct FRepSimulatedDeathInfo 
{
	char                                          bRagdollStartForce : 0;                                      // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	struct FNone                                  RagdollStartForce;                                           // 0x04(0x0c)
	struct FNone                                  DeathRotation;                                               // 0x10(0x0c)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
	struct FNone*                                 Anim1P;                                                      // 0x20(0x08)
	struct FNone*                                 Anim3P;                                                      // 0x28(0x08)
};

// ScriptStruct BravoHotelGame.RepDestructComponentInfo
// Size: 0x30 (Inherited: 0x00)
struct FRepDestructComponentInfo 
{
	float                                         Damage;                                                      // 0x00(0x04)
	struct FNone                                  Direction;                                                   // 0x04(0x0c)
	struct FNone                                  Location;                                                    // 0x10(0x0c)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
	struct FNone*                                 Instigator;                                                  // 0x20(0x08)
	uint16_t                                      InstanceIndex;                                               // 0x28(0x02)
	char                                          UnknownData2A[0x6];                                          // 0x2a(0x06)
};

// ScriptStruct BravoHotelGame.PingInfo
// Size: 0x18 (Inherited: 0x00)
struct FPingInfo 
{
	char                                          UnknownData0[0x18];                                          // 0x00(0x18)
};

// ScriptStruct BravoHotelGame.BaseProtocolLog
// Size: 0x30 (Inherited: 0x00)
struct FBaseProtocolLog 
{
	struct FString                                UserID;                                                      // 0x00(0x10)
	struct FString                                NickName;                                                    // 0x10(0x10)
	char                                          UnknownData20[0x10];                                         // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.ReceiveCoherentLog
// Size: 0x30 (Inherited: 0x30)
struct FReceiveCoherentLog : FBaseProtocolLog 
{
};

// ScriptStruct BravoHotelGame.ReceiveDediLog
// Size: 0x30 (Inherited: 0x30)
struct FReceiveDediLog : FBaseProtocolLog 
{
};

// ScriptStruct BravoHotelGame.ReceiveHttpLog
// Size: 0x48 (Inherited: 0x30)
struct FReceiveHttpLog : FBaseProtocolLog 
{
	struct FString                                URL;                                                         // 0x30(0x10)
	uint32_t                                      responsecode;                                                // 0x40(0x04)
	char                                          UnknownData44[0x4];                                          // 0x44(0x04)
};

// ScriptStruct BravoHotelGame.SendHttpLog
// Size: 0x40 (Inherited: 0x30)
struct FSendHttpLog : FBaseProtocolLog 
{
	struct FString                                route;                                                       // 0x30(0x10)
};

// ScriptStruct BravoHotelGame.ReceiveWebSocketLog
// Size: 0x30 (Inherited: 0x30)
struct FReceiveWebSocketLog : FBaseProtocolLog 
{
};

// ScriptStruct BravoHotelGame.SendWebSocketLog
// Size: 0x30 (Inherited: 0x30)
struct FSendWebSocketLog : FBaseProtocolLog 
{
};

// ScriptStruct BravoHotelGame.NetworkWebSocket
// Size: 0x20 (Inherited: 0x00)
struct FNetworkWebSocket 
{
	struct FNone*                                 WebSocket;                                                   // 0x00(0x08)
	struct FString                                ip;                                                          // 0x08(0x10)
	uint32_t                                      Port;                                                        // 0x18(0x04)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.NetworkSocket
// Size: 0x10 (Inherited: 0x00)
struct FNetworkSocket 
{
	char                                          UnknownData0[0x10];                                          // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.SyncInfo
// Size: 0x04 (Inherited: 0x00)
struct FSyncInfo 
{
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientOutGameCommonErrorData
// Size: 0x28 (Inherited: 0x00)
struct FAnalysisClientOutGameCommonErrorData 
{
	struct FString                                module_name;                                                 // 0x00(0x10)
	uint32_t                                      error_code;                                                  // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct FString                                error_message;                                               // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisClientOutGameFirstClientRunData
// Size: 0x90 (Inherited: 0x00)
struct FAnalysisClientOutGameFirstClientRunData 
{
	struct FString                                progress_name;                                               // 0x00(0x10)
	uint32_t                                      tutorial_progress;                                           // 0x10(0x04)
	uint32_t                                      tutorial_movie_skiptime;                                     // 0x14(0x04)
	struct FNone                                  pc_data;                                                     // 0x18(0x78)
};

// ScriptStruct BravoHotelGame.OutGamePCData
// Size: 0x78 (Inherited: 0x00)
struct FOutGamePCData 
{
	struct FString                                os_name;                                                     // 0x00(0x10)
	struct FString                                cpu_name;                                                    // 0x10(0x10)
	struct FString                                gpu_name;                                                    // 0x20(0x10)
	struct FString                                mac_address;                                                 // 0x30(0x10)
	struct FString                                ip_address;                                                  // 0x40(0x10)
	struct FString                                install_storage_type;                                        // 0x50(0x10)
	float                                         game_view_width;                                             // 0x60(0x04)
	float                                         game_view_height;                                            // 0x64(0x04)
	struct FString                                Client_version;                                              // 0x68(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisClientOutGameTutorialMovieSkipData
// Size: 0x04 (Inherited: 0x00)
struct FAnalysisClientOutGameTutorialMovieSkipData 
{
	uint32_t                                      skip_time;                                                   // 0x00(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientOutGameTutorialPlayCompleteData
// Size: 0x04 (Inherited: 0x00)
struct FAnalysisClientOutGameTutorialPlayCompleteData 
{
	uint32_t                                      play_time;                                                   // 0x00(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientOutGameTutorialPlayExitData
// Size: 0x08 (Inherited: 0x00)
struct FAnalysisClientOutGameTutorialPlayExitData 
{
	uint32_t                                      play_time;                                                   // 0x00(0x04)
	uint32_t                                      progress;                                                    // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientOutGameExitData
// Size: 0x04 (Inherited: 0x00)
struct FAnalysisClientOutGameExitData 
{
	uint32_t                                      scene_type;                                                  // 0x00(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientOutGameLobbyUIActionData
// Size: 0x08 (Inherited: 0x00)
struct FAnalysisClientOutGameLobbyUIActionData 
{
	uint32_t                                      before_scene_type;                                           // 0x00(0x04)
	uint32_t                                      after_scene_type;                                            // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.AnalysisClientOutGameLoginSucessData
// Size: 0x78 (Inherited: 0x00)
struct FAnalysisClientOutGameLoginSucessData 
{
	struct FNone                                  pc_data;                                                     // 0x00(0x78)
};

// ScriptStruct BravoHotelGame.AnalysisClientOutGameLoginForbidData
// Size: 0x88 (Inherited: 0x00)
struct FAnalysisClientOutGameLoginForbidData 
{
	struct FString                                forbid_reason;                                               // 0x00(0x10)
	struct FNone                                  pc_data;                                                     // 0x10(0x78)
};

// ScriptStruct BravoHotelGame.AnalysisClientOutGameMatchingCancelData
// Size: 0x28 (Inherited: 0x00)
struct FAnalysisClientOutGameMatchingCancelData 
{
	uint32_t                                      GameViewType;                                                // 0x00(0x04)
	uint32_t                                      BattleMode;                                                  // 0x04(0x04)
	struct FString                                matching_start_time;                                         // 0x08(0x10)
	struct FString                                matching_cancel_time;                                        // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisClientOutGameMatchingSuccessData
// Size: 0x48 (Inherited: 0x00)
struct FAnalysisClientOutGameMatchingSuccessData 
{
	struct FString                                game_server_id;                                              // 0x00(0x10)
	struct FString                                match_making_tag;                                            // 0x10(0x10)
	uint32_t                                      GameViewType;                                                // 0x20(0x04)
	uint32_t                                      BattleMode;                                                  // 0x24(0x04)
	struct FString                                matching_start_time;                                         // 0x28(0x10)
	struct FString                                matching_success_time;                                       // 0x38(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisDSDisconnectData
// Size: 0x38 (Inherited: 0x00)
struct FAnalysisDSDisconnectData 
{
	struct FString                                Error;                                                       // 0x00(0x10)
	struct FString                                reason;                                                      // 0x10(0x10)
	uint32_t                                      connected_duration;                                          // 0x20(0x04)
	char                                          UnknownData24[0x4];                                          // 0x24(0x04)
	struct FString                                Version;                                                     // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisDSConnectFailData
// Size: 0x50 (Inherited: 0x00)
struct FAnalysisDSConnectFailData 
{
	struct FString                                URL;                                                         // 0x00(0x10)
	enum class None                               Type;                                                        // 0x10(0x01)
	char                                          UnknownData11[0x7];                                          // 0x11(0x07)
	struct FString                                Error;                                                       // 0x18(0x10)
	struct FString                                reason;                                                      // 0x28(0x10)
	uint32_t                                      retry;                                                       // 0x38(0x04)
	uint32_t                                      connecting_fail_time;                                        // 0x3c(0x04)
	struct FString                                Version;                                                     // 0x40(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisDSConnectSuccessData
// Size: 0x30 (Inherited: 0x00)
struct FAnalysisDSConnectSuccessData 
{
	struct FString                                URL;                                                         // 0x00(0x10)
	enum class None                               Type;                                                        // 0x10(0x01)
	char                                          UnknownData11[0x3];                                          // 0x11(0x03)
	uint32_t                                      retry;                                                       // 0x14(0x04)
	uint32_t                                      connecting_success_time;                                     // 0x18(0x04)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
	struct FString                                Version;                                                     // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisClientOutGameData
// Size: 0x48 (Inherited: 0x00)
struct FAnalysisClientOutGameData 
{
	enum class None                               contentType;                                                 // 0x00(0x01)
	char                                          UnknownData1[0x7];                                           // 0x01(0x07)
	struct FString                                Base;                                                        // 0x08(0x10)
	struct FString                                Msg;                                                         // 0x18(0x10)
	struct FString                                nowDate;                                                     // 0x28(0x10)
	struct FString                                ApiPhase;                                                    // 0x38(0x10)
};

// ScriptStruct BravoHotelGame.AnalysisClientOutGameDataHead
// Size: 0x30 (Inherited: 0x00)
struct FAnalysisClientOutGameDataHead 
{
	uint32_t                                      DateTime;                                                    // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                UserID;                                                      // 0x08(0x10)
	struct FString                                NickName;                                                    // 0x18(0x10)
	uint32_t                                      Level;                                                       // 0x28(0x04)
	uint32_t                                      exp;                                                         // 0x2c(0x04)
};

// ScriptStruct BravoHotelGame.DataOutGameEventBase
// Size: 0x58 (Inherited: 0x00)
struct FDataOutGameEventBase 
{
	char                                          UnknownData0[0x58];                                          // 0x00(0x58)
};

// ScriptStruct BravoHotelGame.DataEventClientOutGameFirstClientRun
// Size: 0x68 (Inherited: 0x58)
struct FDataEventClientOutGameFirstClientRun : FDataOutGameEventBase 
{
	char                                          UnknownData58[0x10];                                         // 0x58(0x10)
};

// ScriptStruct BravoHotelGame.DataEventClientOutGameTutorial
// Size: 0x68 (Inherited: 0x58)
struct FDataEventClientOutGameTutorial : FDataOutGameEventBase 
{
	char                                          UnknownData58[0x10];                                         // 0x58(0x10)
};

// ScriptStruct BravoHotelGame.DataEventClientOutGameCommonError
// Size: 0x80 (Inherited: 0x58)
struct FDataEventClientOutGameCommonError : FDataOutGameEventBase 
{
	char                                          UnknownData58[0x28];                                         // 0x58(0x28)
};

// ScriptStruct BravoHotelGame.DataEventClientOutGameExit
// Size: 0x60 (Inherited: 0x58)
struct FDataEventClientOutGameExit : FDataOutGameEventBase 
{
	char                                          UnknownData58[0x8];                                          // 0x58(0x08)
};

// ScriptStruct BravoHotelGame.DataEventClientOutGameAction
// Size: 0x68 (Inherited: 0x58)
struct FDataEventClientOutGameAction : FDataOutGameEventBase 
{
	char                                          UnknownData58[0x10];                                         // 0x58(0x10)
};

// ScriptStruct BravoHotelGame.DataEventClientOutGameLogin
// Size: 0x70 (Inherited: 0x58)
struct FDataEventClientOutGameLogin : FDataOutGameEventBase 
{
	char                                          UnknownData58[0x18];                                         // 0x58(0x18)
};

// ScriptStruct BravoHotelGame.DataEventClientOutGameMatching
// Size: 0x90 (Inherited: 0x58)
struct FDataEventClientOutGameMatching : FDataOutGameEventBase 
{
	char                                          UnknownData58[0x38];                                         // 0x58(0x38)
};

// ScriptStruct BravoHotelGame.OutGameEmptyData
// Size: 0x01 (Inherited: 0x00)
struct FOutGameEmptyData 
{
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.OutGameAccountData
// Size: 0x08 (Inherited: 0x00)
struct FOutGameAccountData 
{
	uint32_t                                      Level;                                                       // 0x00(0x04)
	uint32_t                                      exp;                                                         // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.TimedCameraEffectData
// Size: 0x40 (Inherited: 0x00)
struct FTimedCameraEffectData 
{
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	struct FNone*                                 TargetCamera_TPP;                                            // 0x08(0x08)
	struct FNone*                                 TargetCamera_FPP;                                            // 0x10(0x08)
	struct FNone*                                 SpawnedParticle_TPP;                                         // 0x18(0x08)
	struct FNone*                                 SpawnedParticle_FPP;                                         // 0x20(0x08)
	char                                          UnknownData28[0x18];                                         // 0x28(0x18)
};

// ScriptStruct BravoHotelGame.TimedCameraPostProcessData
// Size: 0x28 (Inherited: 0x00)
struct FTimedCameraPostProcessData 
{
	char                                          UnknownData0[0x18];                                          // 0x00(0x18)
	struct FNone*                                 CameraPostProcess;                                           // 0x18(0x08)
	char                                          UnknownData20[0x8];                                          // 0x20(0x08)
};

// ScriptStruct BravoHotelGame.BuffSlot
// Size: 0x10 (Inherited: 0x00)
struct FBuffSlot 
{
	struct TArray<None>                           UIBuff;                                                      // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.MyInfo
// Size: 0x38 (Inherited: 0x00)
struct FMyInfo 
{
	uint32_t                                      CurrentAmmo;                                                 // 0x00(0x04)
	uint32_t                                      CapacityAmmo;                                                // 0x04(0x04)
	uint32_t                                      TotalAmmo;                                                   // 0x08(0x04)
	enum class None                               Mode;                                                        // 0x0c(0x01)
	char                                          UnknownDataD[0x3];                                           // 0x0d(0x03)
	uint32_t                                      CurrentEnergy;                                               // 0x10(0x04)
	uint32_t                                      MaxEnergy;                                                   // 0x14(0x04)
	uint32_t                                      CurrentHealth;                                               // 0x18(0x04)
	uint32_t                                      MaxHealth;                                                   // 0x1c(0x04)
	uint32_t                                      ShortTimeHealth;                                             // 0x20(0x04)
	uint32_t                                      TargetHealth;                                                // 0x24(0x04)
	float                                         BackpackPercent;                                             // 0x28(0x04)
	char                                          bIsFirstPerson : 0;                                          // 0x2c(0x01)
	char                                          UnknownData2C[0x4];                                          // 0x2c(0x04)
	uint32_t                                      Stance;                                                      // 0x30(0x04)
	char                                          bIsHeadbanging : 0;                                          // 0x34(0x01)
	char                                          UnknownData34[0x4];                                          // 0x34(0x04)
};

// ScriptStruct BravoHotelGame.WeaponWidgetInfo
// Size: 0xa8 (Inherited: 0x00)
struct FWeaponWidgetInfo 
{
	char                                          IsEquipped : 0;                                              // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	uint32_t                                      SlotIndex;                                                   // 0x04(0x04)
	struct FText                                  Name;                                                        // 0x08(0x18)
	enum class None                               WeaponLevel;                                                 // 0x20(0x01)
	char                                          UnknownData21[0x7];                                          // 0x21(0x07)
	struct TSoftObjectPtr<FNone>                  Texture;                                                     // 0x28(0x28)
	struct FString                                AmmoName;                                                    // 0x50(0x10)
	uint32_t                                      Damage;                                                      // 0x60(0x04)
	uint32_t                                      AdditionalDamage;                                            // 0x64(0x04)
	uint32_t                                      BulletsPerShot;                                              // 0x68(0x04)
	enum class None                               Mode;                                                        // 0x6c(0x01)
	char                                          IsFireMode : 0;                                              // 0x6d(0x01)
	char                                          UnknownData6D[0x3];                                          // 0x6d(0x03)
	struct FString                                CurrentAmmo;                                                 // 0x70(0x10)
	struct FString                                CapacityAmmo;                                                // 0x80(0x10)
	struct FString                                TotalAmmo;                                                   // 0x90(0x10)
	enum class None                               LoadingType;                                                 // 0xa0(0x01)
	char                                          UnknownDataA1[0x7];                                          // 0xa1(0x07)
};

// ScriptStruct BravoHotelGame.ActorPoolInfo
// Size: 0x30 (Inherited: 0x00)
struct FActorPoolInfo 
{
	struct FNone*                                 ActorClass;                                                  // 0x00(0x08)
	struct TArray<None>                           PoolingActors;                                               // 0x08(0x10)
	struct TArray<None>                           ActiveActors;                                                // 0x18(0x10)
	struct FNone*                                 CurrentWorld;                                                // 0x28(0x08)
};

// ScriptStruct BravoHotelGame.WaitingEvent
// Size: 0x08 (Inherited: 0x00)
struct FWaitingEvent 
{
	float                                         DelayTime;                                                   // 0x00(0x04)
	uint32_t                                      TrialCount;                                                  // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.BlindCharacter
// Size: 0x18 (Inherited: 0x00)
struct FBlindCharacter 
{
	struct FNone*                                 Character;                                                   // 0x00(0x08)
	struct FNone                                  ImpactNormal;                                                // 0x08(0x0c)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.UpdateAchievementData
// Size: 0x18 (Inherited: 0x00)
struct FUpdateAchievementData 
{
	struct FString                                PlayerUID;                                                   // 0x00(0x10)
	uint32_t                                      AchievementID;                                               // 0x10(0x04)
	uint32_t                                      AddValue;                                                    // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.AchievementInfo
// Size: 0x10 (Inherited: 0x00)
struct FAchievementInfo 
{
	uint32_t                                      ID;                                                          // 0x00(0x04)
	enum class None                               State;                                                       // 0x04(0x01)
	char                                          UnknownData5[0x3];                                           // 0x05(0x03)
	uint32_t                                      CurrentValue;                                                // 0x08(0x04)
	uint32_t                                      GoalValue;                                                   // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.UpdateQuestData
// Size: 0x18 (Inherited: 0x00)
struct FUpdateQuestData 
{
	struct FString                                PlayerUID;                                                   // 0x00(0x10)
	uint32_t                                      QuestID;                                                     // 0x10(0x04)
	uint32_t                                      AddValue;                                                    // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.AchievementData
// Size: 0x50 (Inherited: 0x08)
struct FAchievementData : FTableRowBase 
{
	uint32_t                                      ID;                                                          // 0x08(0x04)
	enum class None                               Type;                                                        // 0x0c(0x01)
	char                                          UnknownDataD[0x3];                                           // 0x0d(0x03)
	struct TArray<None>                           GoalValues;                                                  // 0x10(0x10)
	struct TArray<None>                           Steps;                                                       // 0x20(0x10)
	uint32_t                                      Point;                                                       // 0x30(0x04)
	char                                          UnknownData34[0x4];                                          // 0x34(0x04)
	struct FText                                  Description;                                                 // 0x38(0x18)
};

// ScriptStruct BravoHotelGame.ConversationData
// Size: 0x18 (Inherited: 0x08)
struct FConversationData : FTableRowBase 
{
	struct TArray<None>                           SentenceData;                                                // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.BackupSlotData
// Size: 0x10 (Inherited: 0x00)
struct FBackupSlotData 
{
	struct FNone*                                 Slot;                                                        // 0x00(0x08)
	float                                         OldValue;                                                    // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.SettingInfoList
// Size: 0x10 (Inherited: 0x00)
struct FSettingInfoList 
{
	struct TArray<None>                           List;                                                        // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.SettingInfoData
// Size: 0x90 (Inherited: 0x00)
struct FSettingInfoData 
{
	struct FName                                  TableKey;                                                    // 0x00(0x08)
	struct FNone                                  Data;                                                        // 0x08(0x88)
};

// ScriptStruct BravoHotelGame.ChangeKeySlotInfo
// Size: 0x10 (Inherited: 0x00)
struct FChangeKeySlotInfo 
{
	char                                          IsChangedMainKey : 0;                                        // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
	char                                          IsChangedSubKey : 0;                                         // 0x01(0x01)
	char                                          UnknownData1[0x7];                                           // 0x01(0x07)
	struct FNone*                                 Slot;                                                        // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.SignificanceCriteriaSetup
// Size: 0x28 (Inherited: 0x00)
struct FSignificanceCriteriaSetup 
{
	char                                          bCheckVisibility : 0;                                        // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
	char                                          bUseAsScreenSize : 0;                                        // 0x01(0x01)
	char                                          UnknownData1[0x7];                                           // 0x01(0x07)
	struct TArray<None>                           Criterias;                                                   // 0x08(0x10)
	struct TArray<None>                           CriteriaWhenVisible;                                         // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelLoserScore
// Size: 0x30 (Inherited: 0x08)
struct FBravoHotelLoserScore : FTableRowBase 
{
	uint32_t                                      Level;                                                       // 0x08(0x04)
	float                                         RankPoint;                                                   // 0x0c(0x04)
	float                                         DefeatMaxPoint;                                              // 0x10(0x04)
	float                                         ScoreOnDefeat;                                               // 0x14(0x04)
	float                                         ScoreOnZeroKill;                                             // 0x18(0x04)
	float                                         ScoreOnZeroAssist;                                           // 0x1c(0x04)
	float                                         ScoreOnWin;                                                  // 0x20(0x04)
	float                                         ScorePerKill;                                                // 0x24(0x04)
	float                                         ScorePerAssist;                                              // 0x28(0x04)
	char                                          UnknownData2C[0x4];                                          // 0x2c(0x04)
};

// ScriptStruct BravoHotelGame.PlayMovieInfo
// Size: 0x10 (Inherited: 0x00)
struct FPlayMovieInfo 
{
	struct TArray<None>                           SoundList;                                                   // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.VoiceTalkState
// Size: 0x20 (Inherited: 0x00)
struct FVoiceTalkState 
{
	struct FString                                UserName;                                                    // 0x00(0x10)
	uint32_t                                      Volume;                                                      // 0x10(0x04)
	char                                          bIsMute : 0;                                                 // 0x14(0x01)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	uint32_t                                      TeamPlayerIndex;                                             // 0x18(0x04)
	uint32_t                                      Ping;                                                        // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.OnlineSubsystemFriends
// Size: 0x30 (Inherited: 0x00)
struct FOnlineSubsystemFriends 
{
	struct FString                                NickName;                                                    // 0x00(0x10)
	struct FString                                PlayerAvatarIcon;                                            // 0x10(0x10)
	struct TArray<None>                           Friends;                                                     // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.OnlineSubsystemFriendInfo
// Size: 0x48 (Inherited: 0x00)
struct FOnlineSubsystemFriendInfo 
{
	struct FString                                PlayerId;                                                    // 0x00(0x10)
	struct FString                                NickName;                                                    // 0x10(0x10)
	struct FString                                AvatarIcon;                                                  // 0x20(0x10)
	char                                          IsOnline : 0;                                                // 0x30(0x01)
	char                                          UnknownData30[0x8];                                          // 0x30(0x08)
	struct FString                                ServicePlatform;                                             // 0x38(0x10)
};

// ScriptStruct BravoHotelGame.ColorInfo
// Size: 0x28 (Inherited: 0x08)
struct FColorInfo : FTableRowBase 
{
	struct FNone                                  ColorInfo;                                                   // 0x08(0x10)
	struct FString                                Desc;                                                        // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.ReplayCastingEvent
// Size: 0x18 (Inherited: 0x00)
struct FReplayCastingEvent 
{
	struct FString                                NetGUID;                                                     // 0x00(0x10)
	float                                         Time;                                                        // 0x10(0x04)
	uint32_t                                      ReplicateIndex;                                              // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.CQRInfo
// Size: 0x20 (Inherited: 0x08)
struct FCQRInfo : FTableRowBase 
{
	struct FText                                  PlayerCountText;                                             // 0x08(0x18)
};

// ScriptStruct BravoHotelGame.AccountExpData
// Size: 0x58 (Inherited: 0x08)
struct FAccountExpData : FTableRowBase 
{
	uint32_t                                      ID;                                                          // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FText                                  DisplayName;                                                 // 0x10(0x18)
	struct FText                                  Description;                                                 // 0x28(0x18)
	uint32_t                                      Level;                                                       // 0x40(0x04)
	uint32_t                                      MaxLevel;                                                    // 0x44(0x04)
	uint32_t                                      LevelUPExp;                                                  // 0x48(0x04)
	uint32_t                                      NextLevelExp;                                                // 0x4c(0x04)
	uint32_t                                      NextLevel;                                                   // 0x50(0x04)
	uint32_t                                      GroupRewardID;                                               // 0x54(0x04)
};

// ScriptStruct BravoHotelGame.SelectLoadingScreenData
// Size: 0x40 (Inherited: 0x00)
struct FSelectLoadingScreenData 
{
	enum class None                               LoadingType;                                                 // 0x00(0x01)
	char                                          UnknownData1[0x7];                                           // 0x01(0x07)
	struct FNone*                                 Image;                                                       // 0x08(0x08)
	struct FText                                  Title;                                                       // 0x10(0x18)
	struct FText                                  Desc;                                                        // 0x28(0x18)
};

// ScriptStruct BravoHotelGame.LoadingScreenData
// Size: 0x40 (Inherited: 0x08)
struct FLoadingScreenData : FTableRowBase 
{
	enum class None                               LoadingType;                                                 // 0x08(0x01)
	char                                          UnknownData9[0x7];                                           // 0x09(0x07)
	struct TArray<None>                           ImageList;                                                   // 0x10(0x10)
	struct TArray<None>                           TitleList;                                                   // 0x20(0x10)
	struct TArray<None>                           DescList;                                                    // 0x30(0x10)
};

// ScriptStruct BravoHotelGame.KickData
// Size: 0x50 (Inherited: 0x08)
struct FKickData : FTableRowBase 
{
	struct FText                                  Title;                                                       // 0x08(0x18)
	struct FText                                  Desc;                                                        // 0x20(0x18)
	struct FText                                  AdminDesc;                                                   // 0x38(0x18)
};

// ScriptStruct BravoHotelGame.NoticeData
// Size: 0x30 (Inherited: 0x08)
struct FNoticeData : FTableRowBase 
{
	struct FText                                  Notice_String;                                               // 0x08(0x18)
	struct FString                                AdminDesc;                                                   // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.MailMessage
// Size: 0x130 (Inherited: 0x08)
struct FMailMessage : FTableRowBase 
{
	uint32_t                                      ID;                                                          // 0x08(0x04)
	uint32_t                                      Name;                                                        // 0x0c(0x04)
	struct FText                                  DisplayName;                                                 // 0x10(0x18)
	struct FText                                  DisplayDesc;                                                 // 0x28(0x18)
	enum class None                               DefaultSender;                                               // 0x40(0x01)
	enum class None                               DefaultReceiver;                                             // 0x41(0x01)
	enum class None                               Type;                                                        // 0x42(0x01)
	enum class None                               SaveOption;                                                  // 0x43(0x01)
	enum class None                               Tag;                                                         // 0x44(0x01)
	char                                          UnknownData45[0x3];                                          // 0x45(0x03)
	struct FText                                  TagString;                                                   // 0x48(0x18)
	enum class None                               Tag_Additional;                                              // 0x60(0x01)
	char                                          UnknownData61[0x7];                                          // 0x61(0x07)
	struct FText                                  Tag_AdditionalString;                                        // 0x68(0x18)
	char                                          CustomMessage : 0;                                           // 0x80(0x01)
	char                                          UnknownData80[0x1];                                          // 0x80(0x01)
	char                                          Attached_Items : 0;                                          // 0x81(0x01)
	char                                          UnknownData81[0x3];                                          // 0x81(0x03)
	uint32_t                                      LifeTime;                                                    // 0x84(0x04)
	uint32_t                                      LifeTime_AfterRead;                                          // 0x88(0x04)
	char                                          UnknownData8C[0x4];                                          // 0x8c(0x04)
	struct FText                                  TitleTemplate;                                               // 0x90(0x18)
	struct FText                                  TitleTemplate_Desc;                                          // 0xa8(0x18)
	struct FString                                TitleTemplate_DataName;                                      // 0xc0(0x10)
	struct FString                                TitleTemplate_DataField;                                     // 0xd0(0x10)
	struct FText                                  MessageTemplate;                                             // 0xe0(0x18)
	struct FText                                  MessageTemplate_Desc;                                        // 0xf8(0x18)
	struct FString                                MessageTemplate_DataName;                                    // 0x110(0x10)
	struct FString                                MessageTemplate_DataField;                                   // 0x120(0x10)
};

// ScriptStruct BravoHotelGame.RequestMessage
// Size: 0x28 (Inherited: 0x08)
struct FRequestMessage : FTableRowBase 
{
	struct FText                                  RequestMessage;                                              // 0x08(0x18)
	char                                          IsAmmoRequest : 0;                                           // 0x20(0x01)
	char                                          UnknownData20[0x8];                                          // 0x20(0x08)
};

// ScriptStruct BravoHotelGame.CustomMatchInfo
// Size: 0x188 (Inherited: 0x00)
struct FCustomMatchInfo 
{
	struct FNone                                  PlayZoneBaseData;                                            // 0x00(0x188)
};

// ScriptStruct BravoHotelGame.MaterialItemDistanceInfo
// Size: 0x10 (Inherited: 0x00)
struct FMaterialItemDistanceInfo 
{
	float                                         Distance;                                                    // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FNone*                                 MaterialItem;                                                // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.ItemAmountInfo
// Size: 0x10 (Inherited: 0x08)
struct FItemAmountInfo : FTableRowBase 
{
	uint32_t                                      Amount;                                                      // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.AmmoSpawnAmountInfo
// Size: 0x10 (Inherited: 0x08)
struct FAmmoSpawnAmountInfo : FTableRowBase 
{
	uint32_t                                      Amount;                                                      // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.SimpleStringData
// Size: 0x18 (Inherited: 0x08)
struct FSimpleStringData : FTableRowBase 
{
	struct FString                                MainString;                                                  // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.BlockData
// Size: 0x38 (Inherited: 0x08)
struct FBlockData : FTableRowBase 
{
	uint32_t                                      Index;                                                       // 0x08(0x04)
	enum class None                               Type;                                                        // 0x0c(0x01)
	char                                          Period : 0;                                                  // 0x0d(0x01)
	char                                          UnknownDataD[0x3];                                           // 0x0d(0x03)
	struct FText                                  Desc;                                                        // 0x10(0x18)
	struct FString                                Adm_Desc;                                                    // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.NoticeTextData
// Size: 0x28 (Inherited: 0x08)
struct FNoticeTextData : FTableRowBase 
{
	uint32_t                                      ID;                                                          // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FText                                  MainText;                                                    // 0x10(0x18)
};

// ScriptStruct BravoHotelGame.ReplayReportUserDataInfo
// Size: 0x70 (Inherited: 0x00)
struct FReplayReportUserDataInfo 
{
	struct FNone                                  VictimInfo;                                                  // 0x00(0x30)
	struct FNone                                  SuspectInfo;                                                 // 0x30(0x40)
};

// ScriptStruct BravoHotelGame.ReplayReportSuspectInfo
// Size: 0x40 (Inherited: 0x00)
struct FReplayReportSuspectInfo 
{
	struct FString                                SuspectNickName;                                             // 0x00(0x10)
	struct FString                                SuspectIpAddress;                                            // 0x10(0x10)
	struct FString                                MaxItemID;                                                   // 0x20(0x10)
	uint32_t                                      Distance;                                                    // 0x30(0x04)
	uint32_t                                      MaxDistance;                                                 // 0x34(0x04)
	uint32_t                                      DamageCount;                                                 // 0x38(0x04)
	uint32_t                                      HeadShotDamageCount;                                         // 0x3c(0x04)
};

// ScriptStruct BravoHotelGame.ReplayReportVictimInfo
// Size: 0x30 (Inherited: 0x00)
struct FReplayReportVictimInfo 
{
	struct FString                                VictimNickName;                                              // 0x00(0x10)
	struct FString                                DamageType;                                                  // 0x10(0x10)
	struct FString                                HitBone;                                                     // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.ReplayDiedInfo
// Size: 0xb8 (Inherited: 0x00)
struct FReplayDiedInfo 
{
	struct FNone                                  Info;                                                        // 0x00(0xb0)
	float                                         Time;                                                        // 0xb0(0x04)
	char                                          UnknownDataB4[0x4];                                          // 0xb4(0x04)
};

// ScriptStruct BravoHotelGame.ReplayDiedSaveInfo
// Size: 0xb0 (Inherited: 0x00)
struct FReplayDiedSaveInfo 
{
	struct FNone                                  Attacker;                                                    // 0x00(0x20)
	struct FNone                                  KnockOut;                                                    // 0x20(0x20)
	struct FNone                                  Killer;                                                      // 0x40(0x20)
	struct FNone                                  SubKiller;                                                   // 0x60(0x18)
	struct FNone                                  Died;                                                        // 0x78(0x18)
	struct TArray<None>                           Assist;                                                      // 0x90(0x10)
	char                                          IsFinallyKill : 0;                                           // 0xa0(0x01)
	char                                          UnknownDataA0[0x4];                                          // 0xa0(0x04)
	uint32_t                                      KillCount;                                                   // 0xa4(0x04)
	enum class None                               BroadCastKillMessageType;                                    // 0xa8(0x01)
	char                                          UnknownDataA9[0x7];                                          // 0xa9(0x07)
};

// ScriptStruct BravoHotelGame.ReplayDiedPlayerInfo
// Size: 0x18 (Inherited: 0x00)
struct FReplayDiedPlayerInfo 
{
	struct FString                                UserName;                                                    // 0x00(0x10)
	uint32_t                                      UniquePlayerId;                                              // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.ReplayDiedKillerInfo
// Size: 0x20 (Inherited: 0x00)
struct FReplayDiedKillerInfo 
{
	struct FString                                UserName;                                                    // 0x00(0x10)
	uint32_t                                      UniquePlayerId;                                              // 0x10(0x04)
	char                                          IsHeadShot : 0;                                              // 0x14(0x01)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	uint32_t                                      WeaponIndex;                                                 // 0x18(0x04)
	uint32_t                                      DamageTypeID;                                                // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.HitDamageLogInfo
// Size: 0xb58 (Inherited: 0x00)
struct FHitDamageLogInfo 
{
	char                                          UnknownData0[0xb40];                                         // 0x00(0xb40)
	struct FNone*                                 TargetPlayerState;                                           // 0xb40(0x08)
	char                                          UnknownDataB48[0x4];                                         // 0xb48(0x04)
	char                                          bIsWeaponKill : 0;                                           // 0xb4c(0x01)
	struct FNone                                  WeaponInfo;                                                  // 0x08(0xb30)
	uint32_t                                      DamageTypeRowID;                                             // 0xb3c(0x04)
	uint32_t                                      WeaponLevel;                                                 // 0xb38(0x04)
	uint32_t                                      HitCount;                                                    // 0xb48(0x04)
	float                                         Damage;                                                      // 0x00(0x04)
	float                                         OriginDamage;                                                // 0xb50(0x04)
	char                                          bIsHeadShot : 0;                                             // 0xb54(0x01)
	enum class None                               DamageResult;                                                // 0xb4d(0x01)
};

// ScriptStruct BravoHotelGame.KillMessageInfo
// Size: 0x88 (Inherited: 0x00)
struct FKillMessageInfo 
{
	uint32_t                                      Type;                                                        // 0x00(0x04)
	uint32_t                                      KillerTierID;                                                // 0x04(0x04)
	struct FString                                Killer;                                                      // 0x08(0x10)
	uint32_t                                      VictimTierID;                                                // 0x18(0x04)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
	struct FString                                Victim;                                                      // 0x20(0x10)
	struct FString                                Block1;                                                      // 0x30(0x10)
	struct FString                                Block2;                                                      // 0x40(0x10)
	struct FString                                Weapon;                                                      // 0x50(0x10)
	struct FString                                AliveCount1;                                                 // 0x60(0x10)
	struct FString                                AliveCount2;                                                 // 0x70(0x10)
	uint32_t                                      FontColorIndex;                                              // 0x80(0x04)
	char                                          UnknownData84[0x4];                                          // 0x84(0x04)
};

// ScriptStruct BravoHotelGame.Coh_KillMessageInfo
// Size: 0xc0 (Inherited: 0x00)
struct FCoh_KillMessageInfo 
{
	uint32_t                                      Type;                                                        // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                TYPE1_Killer;                                                // 0x08(0x10)
	struct FString                                TYPE1_Block_01;                                              // 0x18(0x10)
	struct FString                                TYPE1_Victim;                                                // 0x28(0x10)
	struct FString                                TYPE1_Block_02;                                              // 0x38(0x10)
	struct FString                                TYPE1_Weapon;                                                // 0x48(0x10)
	struct FString                                TYPE1_AliverCount;                                           // 0x58(0x10)
	struct FString                                TYPE2_Victim;                                                // 0x68(0x10)
	struct FString                                TYPE2_Block_01;                                              // 0x78(0x10)
	struct FString                                TYPE2_Block_02;                                              // 0x88(0x10)
	struct FString                                TYPE2_AliveCount01;                                          // 0x98(0x10)
	struct FString                                TYPE2_AliveCount02;                                          // 0xa8(0x10)
	uint32_t                                      FontColorIndex;                                              // 0xb8(0x04)
	char                                          UnknownDataBC[0x4];                                          // 0xbc(0x04)
};

// ScriptStruct BravoHotelGame.ItemSlotInfo
// Size: 0x68 (Inherited: 0x00)
struct FItemSlotInfo 
{
	struct TArray<None>                           StandardGroupItemInfos;                                      // 0x00(0x10)
	struct TMap<None, None>                       BoxList;                                                     // 0x10(0x50)
	uint32_t                                      TotalDivisionCount;                                          // 0x60(0x04)
	char                                          UnknownData64[0x4];                                          // 0x64(0x04)
};

// ScriptStruct BravoHotelGame.BoxItemInfo
// Size: 0x0c (Inherited: 0x00)
struct FBoxItemInfo 
{
	char                                          IsDivision : 0;                                              // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	uint32_t                                      DivisionCount;                                               // 0x04(0x04)
	uint32_t                                      SelectCount;                                                 // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.StandardGroupItemInfo
// Size: 0x0c (Inherited: 0x00)
struct FStandardGroupItemInfo 
{
	struct FName                                  StandardGroupItemKey;                                        // 0x00(0x08)
	uint32_t                                      Count;                                                       // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.PoisitionInfo
// Size: 0x18 (Inherited: 0x00)
struct FPoisitionInfo 
{
	char                                          UnknownData0[0x18];                                          // 0x00(0x18)
};

// ScriptStruct BravoHotelGame.LengthInfo
// Size: 0x18 (Inherited: 0x00)
struct FLengthInfo 
{
	char                                          UnknownData0[0x18];                                          // 0x00(0x18)
};

// ScriptStruct BravoHotelGame.MatchRateData
// Size: 0x20 (Inherited: 0x08)
struct FMatchRateData : FTableRowBase 
{
	enum class None                               MatchRateCaseType;                                           // 0x08(0x01)
	char                                          UnknownData9[0x3];                                           // 0x09(0x03)
	float                                         Min;                                                         // 0x0c(0x04)
	float                                         MAX;                                                         // 0x10(0x04)
	float                                         PlusPoint;                                                   // 0x14(0x04)
	float                                         MultiplyPoint;                                               // 0x18(0x04)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.ItemWeapon
// Size: 0x130 (Inherited: 0x08)
struct FItemWeapon : FTableRowBase 
{
	struct FName                                  WeaponName;                                                  // 0x08(0x08)
	uint32_t                                      Rarity;                                                      // 0x10(0x04)
	uint32_t                                      Level;                                                       // 0x14(0x04)
	uint32_t                                      MaxLevel;                                                    // 0x18(0x04)
	uint32_t                                      SupplyCost;                                                  // 0x1c(0x04)
	uint32_t                                      LevelUpgradeCost;                                            // 0x20(0x04)
	uint32_t                                      LevelUpgradeGroupItemID;                                     // 0x24(0x04)
	uint32_t                                      RepairGroupItemID;                                           // 0x28(0x04)
	char                                          UnknownData2C[0x4];                                          // 0x2c(0x04)
	struct TArray<None>                           RepairFactor;                                                // 0x30(0x10)
	struct FName                                  WeaponFatigueKey;                                            // 0x40(0x08)
	uint32_t                                      FatigueTableID;                                              // 0x48(0x04)
	uint32_t                                      DurabilityMax;                                               // 0x4c(0x04)
	uint32_t                                      DurabilityRate;                                              // 0x50(0x04)
	float                                         Damage;                                                      // 0x54(0x04)
	float                                         VertRecoil;                                                  // 0x58(0x04)
	float                                         HorRecoil;                                                   // 0x5c(0x04)
	float                                         Spread;                                                      // 0x60(0x04)
	uint32_t                                      MagSize;                                                     // 0x64(0x04)
	uint32_t                                      ItemId;                                                      // 0x68(0x04)
	struct FName                                  ItemName;                                                    // 0x6c(0x08)
	char                                          UnknownData74[0x4];                                          // 0x74(0x04)
	struct FText                                  DisplayName;                                                 // 0x78(0x18)
	struct FText                                  Description;                                                 // 0x90(0x18)
	struct TSoftObjectPtr<F ��䔯癮物湯敭瑮⽳牐灯⽳慌灭䴯ⵉ慌灭䱟浡ば⸳䥍䰭浡彰慌灭㌰෪䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳牐灯⽳慌灭䴯ⵉ慌灭䱟浡ばΰ䥍䰭浡彰慌灭㌰ᆌ䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳牐灯⽳慌灭䴯ⵉ慌灭䱟浡ば⸴䥍䰭浡彰慌灭㐰ෆ䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳牐灯⽳慌灭䴯ⵉ慌灭䱟浡ば휴Ζ䥍䰭浡彰慌灭㐰ᆎ䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳牐De_6226021> SlotIconTexture_PaperSprite;                                 // 0xa8(0x28)
	struct TSoftObjectPtr<F ��䔯癮物湯敭瑮⽳牐灯⽳慌灭䴯ⵉ慌灭䱟浡ば⸳䥍䰭浡彰慌灭㌰෪䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳牐灯⽳慌灭䴯ⵉ慌灭䱟浡ばΰ䥍䰭浡彰慌灭㌰ᆌ䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳牐灯⽳慌灭䴯ⵉ慌灭䱟浡ば⸴䥍䰭浡彰慌灭㐰ෆ䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳牐灯⽳慌灭䴯ⵉ慌灭䱟浡ば휴Ζ䥍䰭浡彰慌灭㐰ᆎ䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳牐De_6226021> DragIconTexture_PaperSprite;                                 // 0xd0(0x28)
	struct FNone*                                 DataAsset;                                                   // 0xf8(0x08)
	struct FText                                  DisplayWeaponType;                                           // 0x100(0x18)
	float                                         DamageMod;                                                   // 0x118(0x04)
	float                                         VertRecoilMod;                                               // 0x11c(0x04)
	float                                         HorRecoilMod;                                                // 0x120(0x04)
	float                                         SpreadMod;                                                   // 0x124(0x04)
	float                                         MagSizeMod;                                                  // 0x128(0x04)
	char                                          UnknownData12C[0x4];                                         // 0x12c(0x04)
};

// ScriptStruct BravoHotelGame.WeaponFatigueData
// Size: 0x60 (Inherited: 0x08)
struct FWeaponFatigueData : FTableRowBase 
{
	uint32_t                                      ID;                                                          // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct TMap<None, None>                       FatigueMap;                                                  // 0x10(0x50)
};

// ScriptStruct BravoHotelGame.ItemCrafting
// Size: 0x128 (Inherited: 0x08)
struct FItemCrafting : FTableRowBase 
{
	struct FName                                  ID;                                                          // 0x08(0x08)
	struct FText                                  CategoryName;                                                // 0x10(0x18)
	struct FText                                  DisplayName;                                                 // 0x28(0x18)
	struct FText                                  Description;                                                 // 0x40(0x18)
	uint32_t                                      BaseItemID;                                                  // 0x58(0x04)
	uint32_t                                      MaterialGroupItemID;                                         // 0x5c(0x04)
	uint32_t                                      GoldCost;                                                    // 0x60(0x04)
	uint32_t                                      ResultItemID;                                                // 0x64(0x04)
	uint32_t                                      ItemId;                                                      // 0x68(0x04)
	char                                          UnknownData6C[0x4];                                          // 0x6c(0x04)
	struct FText                                  RandomOptionDesc;                                            // 0x70(0x18)
	struct TArray<None>                           ResultOptionIDList;                                          // 0x88(0x10)
	struct TSoftObjectPtr<F ��䔯癮物湯敭瑮⽳牐灯⽳慌灭䴯ⵉ慌灭䱟浡ば⸳䥍䰭浡彰慌灭㌰෪䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳牐灯⽳慌灭䴯ⵉ慌灭䱟浡ばΰ䥍䰭浡彰慌灭㌰ᆌ䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳牐灯⽳慌灭䴯ⵉ慌灭䱟浡ば⸴䥍䰭浡彰慌灭㐰ෆ䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳牐灯⽳慌灭䴯ⵉ慌灭䱟浡ば휴Ζ䥍䰭浡彰慌灭㐰ᆎ䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳牐De_6226021> SlotIconTexture_PaperSprite;                                 // 0x98(0x28)
	struct TSoftObjectPtr<F ��䔯癮物湯敭瑮⽳牐灯⽳慌灭䴯ⵉ慌灭䱟浡ば⸳䥍䰭浡彰慌灭㌰෪䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳牐灯⽳慌灭䴯ⵉ慌灭䱟浡ばΰ䥍䰭浡彰慌灭㌰ᆌ䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳牐灯⽳慌灭䴯ⵉ慌灭䱟浡ば⸴䥍䰭浡彰慌灭㐰ෆ䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳牐灯⽳慌灭䴯ⵉ慌灭䱟浡ば휴Ζ䥍䰭浡彰慌灭㐰ᆎ䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳牐De_6226021> DragIconTexture_PaperSprite;                                 // 0xc0(0x28)
	struct TSoftObjectPtr<FNone>                  CategoryIconTexture_PaperSprite;                             // 0xe8(0x28)
	struct FText                                  DisplayWeaponType;                                           // 0x110(0x18)
};

// ScriptStruct BravoHotelGame.PreLoadObjectsTable
// Size: 0x40 (Inherited: 0x08)
struct FPreLoadObjectsTable : FTableRowBase 
{
	struct FString                                Desc;                                                        // 0x08(0x10)
	struct TSoftClassPtr<UObject>                 ClassPtr;                                                    // 0x18(0x28)
};

// ScriptStruct BravoHotelGame.KeyImageTable
// Size: 0x28 (Inherited: 0x08)
struct FKeyImageTable : FTableRowBase 
{
	struct FNone                                  Key;                                                         // 0x08(0x18)
	struct FName                                  DisplayName;                                                 // 0x20(0x08)
};

// ScriptStruct BravoHotelGame.CheckTimeInfo
// Size: 0x18 (Inherited: 0x00)
struct FCheckTimeInfo 
{
	char                                          UnknownData0[0x18];                                          // 0x00(0x18)
};

// ScriptStruct BravoHotelGame.BuildingItemSpawnLog
// Size: 0xa0 (Inherited: 0x00)
struct FBuildingItemSpawnLog 
{
	struct FString                                LevelName;                                                   // 0x00(0x10)
	struct FString                                ParentName;                                                  // 0x10(0x10)
	struct FString                                BuildingName;                                                // 0x20(0x10)
	struct FString                                DetectingUserName;                                           // 0x30(0x10)
	char                                          DetectingBoxResult : 0;                                      // 0x40(0x01)
	char                                          UnknownData40[0x1];                                          // 0x40(0x01)
	char                                          StandardBoxTableComplete : 0;                                // 0x41(0x01)
	char                                          UnknownData41[0x1];                                          // 0x41(0x01)
	char                                          IsValid : 0;                                                 // 0x42(0x01)
	char                                          UnknownData42[0x2];                                          // 0x42(0x02)
	struct FNone                                  Location;                                                    // 0x44(0x0c)
	struct TMap<None, None>                       Items;                                                       // 0x50(0x50)
};

// ScriptStruct BravoHotelGame.LogItemInfoData
// Size: 0x50 (Inherited: 0x00)
struct FLogItemInfoData 
{
	struct TMap<None, None>                       Items;                                                       // 0x00(0x50)
};

// ScriptStruct BravoHotelGame.LogItemInfo
// Size: 0x18 (Inherited: 0x00)
struct FLogItemInfo 
{
	uint32_t                                      Index;                                                       // 0x00(0x04)
	char                                          DataSet : 0;                                                 // 0x04(0x01)
	char                                          UnknownData4[0x1];                                           // 0x04(0x01)
	char                                          RunAsyncLoad : 0;                                            // 0x05(0x01)
	char                                          UnknownData5[0x1];                                           // 0x05(0x01)
	char                                          CompleteAsyncLoad : 0;                                       // 0x06(0x01)
	char                                          UnknownData6[0x1];                                           // 0x06(0x01)
	char                                          RunTask : 0;                                                 // 0x07(0x01)
	char                                          UnknownData7[0x1];                                           // 0x07(0x01)
	char                                          CompleteTask : 0;                                            // 0x08(0x01)
	char                                          UnknownData8[0x4];                                           // 0x08(0x04)
	struct FName                                  ItemName;                                                    // 0x0c(0x08)
	float                                         Distance;                                                    // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.LevelUpInfo
// Size: 0x08 (Inherited: 0x00)
struct FLevelUpInfo 
{
	uint32_t                                      UpCount;                                                     // 0x00(0x04)
	float                                         SpawnDelay;                                                  // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.BookSpawnInfo
// Size: 0x58 (Inherited: 0x00)
struct FBookSpawnInfo 
{
	struct FNone                                  SpawnPerkInfo;                                               // 0x00(0x4c)
	char                                          UnknownData4C[0x4];                                          // 0x4c(0x04)
	struct FNone                                  SpawnBookTimerHandle;                                        // 0x50(0x08)
};

// ScriptStruct BravoHotelGame.SpawnPerkInfo
// Size: 0x4c (Inherited: 0x24)
struct FSpawnPerkInfo : FSpawnBaseInfo 
{
	struct FNone                                  BookColorRate;                                               // 0x24(0x14)
	float                                         MinTime;                                                     // 0x38(0x04)
	float                                         MaxTime;                                                     // 0x3c(0x04)
	uint32_t                                      MinCount;                                                    // 0x40(0x04)
	uint32_t                                      MaxCount;                                                    // 0x44(0x04)
	enum class None                               SpawnType;                                                   // 0x48(0x01)
	char                                          UnknownData49[0x3];                                          // 0x49(0x03)
};

// ScriptStruct BravoHotelGame.AttackDamageWidgetInfo
// Size: 0x50 (Inherited: 0x00)
struct FAttackDamageWidgetInfo 
{
	struct FNone*                                 DamageCauser;                                                // 0x00(0x08)
	struct FNone*                                 TargetPawn;                                                  // 0x08(0x08)
	float                                         CurrentHitTimeSecond;                                        // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct FNone*                                 Widget;                                                      // 0x18(0x08)
	float                                         Damage;                                                      // 0x20(0x04)
	char                                          UnknownData24[0x4];                                          // 0x24(0x04)
	struct FString                                HitType;                                                     // 0x28(0x10)
	float                                         LifeTime;                                                    // 0x38(0x04)
	char                                          bRand : 0;                                                   // 0x3c(0x01)
	char                                          UnknownData3C[0x4];                                          // 0x3c(0x04)
	struct FNone                                  ImpactPoint;                                                 // 0x40(0x0c)
	char                                          UnknownData4C[0x4];                                          // 0x4c(0x04)
};

// ScriptStruct BravoHotelGame.CarScanInfo
// Size: 0x0c (Inherited: 0x00)
struct FCarScanInfo 
{
	float                                         CarScanRange;                                                // 0x00(0x04)
	float                                         CarScanDuration;                                             // 0x04(0x04)
	char                                          bCarScanOutOfRange : 0;                                      // 0x08(0x01)
	char                                          UnknownData8[0x4];                                           // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.SpatialSenseInfo
// Size: 0x10 (Inherited: 0x00)
struct FSpatialSenseInfo 
{
	float                                         SearchRadius;                                                // 0x00(0x04)
	float                                         ErrorDistRange;                                              // 0x04(0x04)
	float                                         FoundRadius;                                                 // 0x08(0x04)
	float                                         Duration;                                                    // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.SearchInstinctInfo
// Size: 0x14 (Inherited: 0x00)
struct FSearchInstinctInfo 
{
	float                                         CycleTime;                                                   // 0x00(0x04)
	float                                         Radius;                                                      // 0x04(0x04)
	float                                         ErrorDistRange;                                              // 0x08(0x04)
	float                                         FoundRadius;                                                 // 0x0c(0x04)
	float                                         Duration;                                                    // 0x10(0x04)
};

// ScriptStruct BravoHotelGame.AreaSkillInfo
// Size: 0x08 (Inherited: 0x00)
struct FAreaSkillInfo 
{
	float                                         Radius;                                                      // 0x00(0x04)
	float                                         RemainTime;                                                  // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.ShootingInfo
// Size: 0x20 (Inherited: 0x00)
struct FShootingInfo 
{
	struct FNone                                  StartPos;                                                    // 0x00(0x0c)
	struct FNone                                  EndPos;                                                      // 0x0c(0x0c)
	float                                         ShootingLength;                                              // 0x18(0x04)
	float                                         HitTime;                                                     // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelTeamColorRow
// Size: 0x18 (Inherited: 0x08)
struct FBravoHotelTeamColorRow : FTableRowBase 
{
	struct FNone                                  Color;                                                       // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.TeamColorRow
// Size: 0x30 (Inherited: 0x08)
struct FTeamColorRow : FTableRowBase 
{
	struct FText                                  Code;                                                        // 0x08(0x18)
	uint32_t                                      R;                                                           // 0x20(0x04)
	uint32_t                                      G;                                                           // 0x24(0x04)
	uint32_t                                      B;                                                           // 0x28(0x04)
	char                                          UnknownData2C[0x4];                                          // 0x2c(0x04)
};

// ScriptStruct BravoHotelGame.LanguageInfo
// Size: 0x50 (Inherited: 0x08)
struct FLanguageInfo : FTableRowBase 
{
	struct FString                                CultureCode;                                                 // 0x08(0x10)
	struct FNone*                                 NativeB;                                                     // 0x18(0x08)
	struct FNone*                                 NativeR;                                                     // 0x20(0x08)
	struct FNone*                                 NativeEB;                                                    // 0x28(0x08)
	struct FString                                OpeningMediaPath;                                            // 0x30(0x10)
	struct FString                                TutorialMediaPath;                                           // 0x40(0x10)
};

// ScriptStruct BravoHotelGame.SettingInputActionKeyMapping
// Size: 0x28 (Inherited: 0x00)
struct FSettingInputActionKeyMapping 
{
	struct FName                                  ActionName;                                                  // 0x00(0x08)
	char                                          bShift : 0;                                                  // 0x08(0x01)
	char                                          UnknownData8[0x1];                                           // 0x08(0x01)
	char                                          bCtrl : 0;                                                   // 0x09(0x01)
	char                                          UnknownData9[0x1];                                           // 0x09(0x01)
	char                                          bAlt : 0;                                                    // 0x0a(0x01)
	char                                          UnknownDataA[0x1];                                           // 0x0a(0x01)
	char                                          bCmd : 0;                                                    // 0x0b(0x01)
	char                                          UnknownDataB[0x5];                                           // 0x0b(0x05)
	struct FNone                                  Key;                                                         // 0x10(0x18)
};

// ScriptStruct BravoHotelGame.SettingValueData
// Size: 0x18 (Inherited: 0x00)
struct FSettingValueData 
{
	enum class None                               Type;                                                        // 0x00(0x01)
	char                                          UnknownData1[0x7];                                           // 0x01(0x07)
	struct TArray<None>                           ValueList;                                                   // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.JoinGameUserData
// Size: 0x0c (Inherited: 0x00)
struct FJoinGameUserData 
{
	struct FName                                  Name;                                                        // 0x00(0x08)
	uint32_t                                      UniqueID;                                                    // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelCheatTable
// Size: 0x20 (Inherited: 0x08)
struct FBravoHotelCheatTable : FTableRowBase 
{
	enum class None                               MainType;                                                    // 0x08(0x01)
	char                                          UnknownData9[0x7];                                           // 0x09(0x07)
	struct TArray<None>                           SubCommandList;                                              // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.CheaCommandSubInfo
// Size: 0x18 (Inherited: 0x00)
struct FCheaCommandSubInfo 
{
	enum class None                               SubType;                                                     // 0x00(0x01)
	char                                          UnknownData1[0x7];                                           // 0x01(0x07)
	struct TArray<None>                           CommandList;                                                 // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.CheaCommandInfo
// Size: 0x38 (Inherited: 0x00)
struct FCheaCommandInfo 
{
	char                                          IsHotKey : 0;                                                // 0x00(0x01)
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	struct FString                                Command;                                                     // 0x08(0x10)
	struct FString                                Desc;                                                        // 0x18(0x10)
	struct TArray<None>                           ParamHintList;                                               // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.CheatParamInfo
// Size: 0x18 (Inherited: 0x00)
struct FCheatParamInfo 
{
	struct FString                                Hint;                                                        // 0x00(0x10)
	enum class None                               ParamType;                                                   // 0x10(0x01)
	char                                          UnknownData11[0x7];                                          // 0x11(0x07)
};

// ScriptStruct BravoHotelGame.MatchEndAnimation
// Size: 0x02 (Inherited: 0x00)
struct FMatchEndAnimation 
{
	char                                          bWin : 0;                                                    // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
	char                                          bSecondPlace : 0;                                            // 0x01(0x01)
	char                                          UnknownData1[0x1];                                           // 0x01(0x01)
};

// ScriptStruct BravoHotelGame.MatchEndFinalResult
// Size: 0x04 (Inherited: 0x00)
struct FMatchEndFinalResult 
{
	char                                          bIsShowingSimpleResult : 0;                                  // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
	char                                          bIsMatchEnd : 0;                                             // 0x01(0x01)
	char                                          UnknownData1[0x1];                                           // 0x01(0x01)
	char                                          bGiveUp : 0;                                                 // 0x02(0x01)
	char                                          UnknownData2[0x1];                                           // 0x02(0x01)
	char                                          bExitGame : 0;                                               // 0x03(0x01)
	char                                          UnknownData3[0x1];                                           // 0x03(0x01)
};

// ScriptStruct BravoHotelGame.PersonalSupplyBoxTransform
// Size: 0x40 (Inherited: 0x00)
struct FPersonalSupplyBoxTransform 
{
	char                                          TraceLand : 0;                                               // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	uint32_t                                      Index;                                                       // 0x04(0x04)
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
	struct FNone                                  Transform;                                                   // 0x10(0x30)
};

// ScriptStruct BravoHotelGame.BuildMatchEnd
// Size: 0x04 (Inherited: 0x00)
struct FBuildMatchEnd 
{
	char                                          WinMessage : 0;                                              // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
	char                                          LooseMessage : 0;                                            // 0x01(0x01)
	char                                          UnknownData1[0x1];                                           // 0x01(0x01)
	char                                          bIsSpectated : 0;                                            // 0x02(0x01)
	char                                          UnknownData2[0x1];                                           // 0x02(0x01)
	char                                          WinningCam : 0;                                              // 0x03(0x01)
	char                                          UnknownData3[0x1];                                           // 0x03(0x01)
};

// ScriptStruct BravoHotelGame.PingNeedAnimationInfo
// Size: 0x04 (Inherited: 0x00)
struct FPingNeedAnimationInfo 
{
	char                                          WorldMap : 0;                                                // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
	char                                          MiniMap : 0;                                                 // 0x01(0x01)
	char                                          UnknownData1[0x1];                                           // 0x01(0x01)
	char                                          PlayerInfo : 0;                                              // 0x02(0x01)
	char                                          UnknownData2[0x1];                                           // 0x02(0x01)
	char                                          Compass : 0;                                                 // 0x03(0x01)
	char                                          UnknownData3[0x1];                                           // 0x03(0x01)
};

// ScriptStruct BravoHotelGame.ItemPingIcon
// Size: 0x18 (Inherited: 0x08)
struct FItemPingIcon : FTableRowBase 
{
	enum class None                               ItemPingType;                                                // 0x08(0x01)
	char                                          UnknownData9[0x7];                                           // 0x09(0x07)
	struct FNone*                                 Icon;                                                        // 0x10(0x08)
};

// ScriptStruct BravoHotelGame.SeasonQuest
// Size: 0x20 (Inherited: 0x08)
struct FSeasonQuest : FTableRowBase 
{
	uint32_t                                      ID;                                                          // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct TArray<None>                           Quests;                                                      // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.SeasonQuestElement
// Size: 0xa8 (Inherited: 0x00)
struct FSeasonQuestElement 
{
	uint32_t                                      ID;                                                          // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FText                                  DisplayName;                                                 // 0x08(0x18)
	struct FString                                QuestType;                                                   // 0x20(0x10)
	uint32_t                                      TargetCount;                                                 // 0x30(0x04)
	char                                          UnknownData34[0x4];                                          // 0x34(0x04)
	struct FString                                Value01;                                                     // 0x38(0x10)
	struct FString                                Value02;                                                     // 0x48(0x10)
	struct FString                                Value03;                                                     // 0x58(0x10)
	struct FString                                Value04;                                                     // 0x68(0x10)
	uint32_t                                      LevelUpRewardIndex;                                          // 0x78(0x04)
	char                                          UnknownData7C[0x4];                                          // 0x7c(0x04)
	struct FString                                ClearType;                                                   // 0x80(0x10)
	struct FString                                RewardType;                                                  // 0x90(0x10)
	uint32_t                                      RewardAmount;                                                // 0xa0(0x04)
	char                                          UnknownDataA4[0x4];                                          // 0xa4(0x04)
};

// ScriptStruct BravoHotelGame.SeasonEXP
// Size: 0x38 (Inherited: 0x08)
struct FSeasonEXP : FTableRowBase 
{
	uint32_t                                      ID;                                                          // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FText                                  DisplayName;                                                 // 0x10(0x18)
	struct TArray<None>                           Levels;                                                      // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.SeasonEXPElement
// Size: 0x58 (Inherited: 0x00)
struct FSeasonEXPElement 
{
	uint32_t                                      Level;                                                       // 0x00(0x04)
	uint32_t                                      LevelUPExp;                                                  // 0x04(0x04)
	uint32_t                                      LevelUpRewardIndex;                                          // 0x08(0x04)
	uint32_t                                      LevelUpRewardCount;                                          // 0x0c(0x04)
	char                                          ShowInTitle : 0;                                             // 0x10(0x01)
	char                                          UnknownData10[0x8];                                          // 0x10(0x08)
	struct FText                                  DisplayName;                                                 // 0x18(0x18)
	struct TSoftObjectPtr<FNone>                  CohIcon;                                                     // 0x30(0x28)
};

// ScriptStruct BravoHotelGame.SeasonEndReward
// Size: 0x20 (Inherited: 0x08)
struct FSeasonEndReward : FTableRowBase 
{
	uint32_t                                      ID;                                                          // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct TArray<None>                           Tiers;                                                       // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.SeasonEndRewardElement
// Size: 0x68 (Inherited: 0x00)
struct FSeasonEndRewardElement 
{
	uint32_t                                      Point;                                                       // 0x00(0x04)
	uint32_t                                      Rank;                                                        // 0x04(0x04)
	struct TArray<None>                           SeasonEndRewards;                                            // 0x08(0x10)
	uint32_t                                      index_01;                                                    // 0x18(0x04)
	uint32_t                                      count_01;                                                    // 0x1c(0x04)
	uint32_t                                      index_02;                                                    // 0x20(0x04)
	uint32_t                                      count_02;                                                    // 0x24(0x04)
	uint32_t                                      index_03;                                                    // 0x28(0x04)
	uint32_t                                      count_03;                                                    // 0x2c(0x04)
	uint32_t                                      index_04;                                                    // 0x30(0x04)
	uint32_t                                      count_04;                                                    // 0x34(0x04)
	uint32_t                                      index_05;                                                    // 0x38(0x04)
	uint32_t                                      count_05;                                                    // 0x3c(0x04)
	uint32_t                                      index_06;                                                    // 0x40(0x04)
	uint32_t                                      count_06;                                                    // 0x44(0x04)
	uint32_t                                      index_07;                                                    // 0x48(0x04)
	uint32_t                                      count_07;                                                    // 0x4c(0x04)
	uint32_t                                      index_08;                                                    // 0x50(0x04)
	uint32_t                                      count_08;                                                    // 0x54(0x04)
	uint32_t                                      index_09;                                                    // 0x58(0x04)
	uint32_t                                      count_09;                                                    // 0x5c(0x04)
	uint32_t                                      Index_11;                                                    // 0x60(0x04)
	uint32_t                                      Count_11;                                                    // 0x64(0x04)
};

// ScriptStruct BravoHotelGame.ItemCountData
// Size: 0x08 (Inherited: 0x00)
struct FItemCountData 
{
	uint32_t                                      Index;                                                       // 0x00(0x04)
	uint32_t                                      Count;                                                       // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.SeasonTierUp
// Size: 0x20 (Inherited: 0x08)
struct FSeasonTierUp : FTableRowBase 
{
	uint32_t                                      ID;                                                          // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct TArray<None>                           Tiers;                                                       // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.SeasonTier
// Size: 0x28 (Inherited: 0x08)
struct FSeasonTier : FTableRowBase 
{
	uint32_t                                      ID;                                                          // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	uint64_t                                      StartTime;                                                   // 0x10(0x08)
	struct TArray<None>                           Tiers;                                                       // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.SeasonTierElement
// Size: 0x98 (Inherited: 0x00)
struct FSeasonTierElement 
{
	uint32_t                                      TierID;                                                      // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FText                                  DisplayName;                                                 // 0x08(0x18)
	struct TSoftObjectPtr<FNone>                  UMGIcon;                                                     // 0x20(0x28)
	struct TSoftObjectPtr<FNone>                  CohIcon;                                                     // 0x48(0x28)
	struct TSoftObjectPtr<FNone>                  SmallIcon;                                                   // 0x70(0x28)
};

// ScriptStruct BravoHotelGame.SeasonPlan
// Size: 0x68 (Inherited: 0x08)
struct FSeasonPlan : FTableRowBase 
{
	uint32_t                                      ID;                                                          // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FText                                  DisplayName;                                                 // 0x10(0x18)
	uint64_t                                      StartTime;                                                   // 0x28(0x08)
	uint64_t                                      EndTime;                                                     // 0x30(0x08)
	uint64_t                                      GoldPrice;                                                   // 0x38(0x08)
	uint64_t                                      CashPrice;                                                   // 0x40(0x08)
	uint32_t                                      LastSeasonID;                                                // 0x48(0x04)
	uint32_t                                      TierTableID;                                                 // 0x4c(0x04)
	uint32_t                                      TierUpTableID;                                               // 0x50(0x04)
	uint32_t                                      SeasonEndRewardTableID;                                      // 0x54(0x04)
	uint32_t                                      MaxLevel;                                                    // 0x58(0x04)
	uint32_t                                      ExpTableID;                                                  // 0x5c(0x04)
	uint32_t                                      QuestTableID;                                                // 0x60(0x04)
	char                                          UnknownData64[0x4];                                          // 0x64(0x04)
};

// ScriptStruct BravoHotelGame.GroupItem
// Size: 0x38 (Inherited: 0x08)
struct FGroupItem : FTableRowBase 
{
	uint32_t                                      ID;                                                          // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FText                                  DisplayName;                                                 // 0x10(0x18)
	struct TArray<None>                           Items;                                                       // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.GroupItemElement
// Size: 0x0c (Inherited: 0x00)
struct FGroupItemElement 
{
	uint32_t                                      ID;                                                          // 0x00(0x04)
	uint32_t                                      MinCount;                                                    // 0x04(0x04)
	uint32_t                                      MaxCount;                                                    // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.GroupReward
// Size: 0x40 (Inherited: 0x08)
struct FGroupReward : FTableRowBase 
{
	uint32_t                                      ID;                                                          // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FText                                  DisplayName;                                                 // 0x10(0x18)
	uint32_t                                      DrawCount;                                                   // 0x28(0x04)
	char                                          UnknownData2C[0x4];                                          // 0x2c(0x04)
	struct TArray<None>                           Rewards;                                                     // 0x30(0x10)
};

// ScriptStruct BravoHotelGame.GroupRewardElement
// Size: 0x14 (Inherited: 0x00)
struct FGroupRewardElement 
{
	uint32_t                                      ID;                                                          // 0x00(0x04)
	uint32_t                                      MinCount;                                                    // 0x04(0x04)
	uint32_t                                      MaxCount;                                                    // 0x08(0x04)
	uint32_t                                      Rate;                                                        // 0x0c(0x04)
	uint32_t                                      DuplicateCount;                                              // 0x10(0x04)
};

// ScriptStruct BravoHotelGame.SupplyItem
// Size: 0x100 (Inherited: 0x08)
struct FSupplyItem : FTableRowBase 
{
	uint32_t                                      ID;                                                          // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FText                                  DisplayName;                                                 // 0x10(0x18)
	struct FText                                  Description;                                                 // 0x28(0x18)
	struct TSoftObjectPtr<F ��䔯癮物湯敭瑮⽳牐灯⽳慌灭䴯ⵉ慌灭䱟浡ば⸳䥍䰭浡彰慌灭㌰෪䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳牐灯⽳慌灭䴯ⵉ慌灭䱟浡ばΰ䥍䰭浡彰慌灭㌰ᆌ䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳牐灯⽳慌灭䴯ⵉ慌灭䱟浡ば⸴䥍䰭浡彰慌灭㐰ෆ䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳牐灯⽳慌灭䴯ⵉ慌灭䱟浡ば휴Ζ䥍䰭浡彰慌灭㐰ᆎ䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳牐De_6226021> SlotIconTexture_PaperSprite;                                 // 0x40(0x28)
	struct FText                                  ItemSortType;                                                // 0x68(0x18)
	uint32_t                                      SupplyGoldCost;                                              // 0x80(0x04)
	char                                          UnknownData84[0x4];                                          // 0x84(0x04)
	struct TArray<None>                           Items;                                                       // 0x88(0x10)
	struct TSoftObjectPtr<FNone>                  StaticMesh;                                                  // 0x98(0x28)
	struct TSoftObjectPtr<FNone>                  SupplyMeshParticle;                                          // 0xc0(0x28)
	struct FName                                  SupplyMeshParticleSocketName;                                // 0xe8(0x08)
	struct TArray<None>                           ToolTipLocationOffset;                                       // 0xf0(0x10)
};

// ScriptStruct BravoHotelGame.SupplyBox
// Size: 0x90 (Inherited: 0x08)
struct FSupplyBox : FTableRowBase 
{
	uint32_t                                      ID;                                                          // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FText                                  DisplayName;                                                 // 0x10(0x18)
	struct FText                                  Description;                                                 // 0x28(0x18)
	struct TSoftObjectPtr<FNone>                  CohIcon;                                                     // 0x40(0x28)
	uint32_t                                      CoolTime;                                                    // 0x68(0x04)
	uint32_t                                      CoolTimeResetGoldCost;                                       // 0x6c(0x04)
	uint32_t                                      CastingTime;                                                 // 0x70(0x04)
	uint32_t                                      DefaultWeaponSlotCount;                                      // 0x74(0x04)
	uint32_t                                      MaxWeaponSlotCount;                                          // 0x78(0x04)
	uint32_t                                      DefaultEquipSlotCount;                                       // 0x7c(0x04)
	uint32_t                                      MaxEquipSlotCount;                                           // 0x80(0x04)
	uint32_t                                      SlotExpansionPrice;                                          // 0x84(0x04)
	uint32_t                                      Price;                                                       // 0x88(0x04)
	char                                          UnknownData8C[0x4];                                          // 0x8c(0x04)
};

// ScriptStruct BravoHotelGame.GenerateOption
// Size: 0x20 (Inherited: 0x08)
struct FGenerateOption : FTableRowBase 
{
	uint32_t                                      ID;                                                          // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct TArray<None>                           GroupRewardIDs;                                              // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.ItemOption
// Size: 0xb8 (Inherited: 0x08)
struct FItemOption : FTableRowBase 
{
	uint32_t                                      ID;                                                          // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FText                                  DisplayName;                                                 // 0x10(0x18)
	struct TArray<None>                           BuffIDs;                                                     // 0x28(0x10)
	struct FText                                  Description;                                                 // 0x38(0x18)
	struct TSoftObjectPtr<F ��䔯癮物湯敭瑮⽳牐灯⽳慌灭䴯ⵉ慌灭䱟浡ば⸳䥍䰭浡彰慌灭㌰෪䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳牐灯⽳慌灭䴯ⵉ慌灭䱟浡ばΰ䥍䰭浡彰慌灭㌰ᆌ䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳牐灯⽳慌灭䴯ⵉ慌灭䱟浡ば⸴䥍䰭浡彰慌灭㐰ෆ䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳牐灯⽳慌灭䴯ⵉ慌灭䱟浡ば휴Ζ䥍䰭浡彰慌灭㐰ᆎ䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳牐De_6226021> SlotIconTexture_PaperSprite;                                 // 0x50(0x28)
	struct TSoftObjectPtr<F ��䔯癮物湯敭瑮⽳牐灯⽳慌灭䴯ⵉ慌灭䱟浡ば⸳䥍䰭浡彰慌灭㌰෪䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳牐灯⽳慌灭䴯ⵉ慌灭䱟浡ばΰ䥍䰭浡彰慌灭㌰ᆌ䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳牐灯⽳慌灭䴯ⵉ慌灭䱟浡ば⸴䥍䰭浡彰慌灭㐰ෆ䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳牐灯⽳慌灭䴯ⵉ慌灭䱟浡ば휴Ζ䥍䰭浡彰慌灭㐰ᆎ䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳牐De_6226021> DragIconTexture_PaperSprite;                                 // 0x78(0x28)
	uint32_t                                      Rarity;                                                      // 0xa0(0x04)
	uint32_t                                      Display_Damage;                                              // 0xa4(0x04)
	uint32_t                                      Display_EffectiveRange;                                      // 0xa8(0x04)
	uint32_t                                      Display_Accuracy;                                            // 0xac(0x04)
	uint32_t                                      Display_RateofFire;                                          // 0xb0(0x04)
	uint32_t                                      NormalMagSize;                                               // 0xb4(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelSmartPingIconSettings
// Size: 0xb8 (Inherited: 0x08)
struct FBravoHotelSmartPingIconSettings : FTableRowBase 
{
	struct FNone*                                 Icon;                                                        // 0x08(0x08)
	struct FNone*                                 MenuIcon;                                                    // 0x10(0x08)
	struct FText                                  DisplayName;                                                 // 0x18(0x18)
	struct FNone                                  Appearance;                                                  // 0x30(0x1c)
	struct FNone                                  Animation;                                                   // 0x4c(0x18)
	char                                          UnknownData64[0x4];                                          // 0x64(0x04)
	struct FNone                                  Sound;                                                       // 0x68(0x18)
	struct FNone                                  Advanced;                                                    // 0x80(0x0c)
	char                                          UnknownData8C[0x4];                                          // 0x8c(0x04)
	struct FText                                  Msg;                                                         // 0x90(0x18)
	enum class None                               PingType;                                                    // 0xa8(0x01)
	char                                          UnknownDataA9[0x3];                                          // 0xa9(0x03)
	float                                         IconSize;                                                    // 0xac(0x04)
	char                                          Rarity;                                                      // 0xb0(0x01)
	char                                          UnknownDataB1[0x7];                                          // 0xb1(0x07)
};

// ScriptStruct BravoHotelGame.BravoHotelSmartPingIconAdvancedSettings
// Size: 0x0c (Inherited: 0x00)
struct FBravoHotelSmartPingIconAdvancedSettings 
{
	char                                          ShowInSelectionMenu : 0;                                     // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
	char                                          ShowDistance : 0;                                            // 0x01(0x01)
	char                                          UnknownData1[0x1];                                           // 0x01(0x01)
	char                                          ShowPeripheral : 0;                                          // 0x02(0x01)
	char                                          UnknownData2[0x2];                                           // 0x02(0x02)
	float                                         PeripheralEdgePercent;                                       // 0x04(0x04)
	char                                          AllowLocalTintOverride : 0;                                  // 0x08(0x01)
	char                                          UnknownData8[0x4];                                           // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelSmartPingIconSoundSettings
// Size: 0x18 (Inherited: 0x00)
struct FBravoHotelSmartPingIconSoundSettings 
{
	struct FNone*                                 Enter;                                                       // 0x00(0x08)
	struct FNone*                                 Hold;                                                        // 0x08(0x08)
	struct FNone*                                 Exit;                                                        // 0x10(0x08)
};

// ScriptStruct BravoHotelGame.BravoHotelSmartPingIconAnimationSettings
// Size: 0x18 (Inherited: 0x00)
struct FBravoHotelSmartPingIconAnimationSettings 
{
	enum class None                               Enter;                                                       // 0x00(0x01)
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
	float                                         EnterDuration;                                               // 0x04(0x04)
	enum class None                               Loop;                                                        // 0x08(0x01)
	char                                          UnknownData9[0x3];                                           // 0x09(0x03)
	float                                         LoopDuration;                                                // 0x0c(0x04)
	enum class None                               Exit;                                                        // 0x10(0x01)
	char                                          UnknownData11[0x3];                                          // 0x11(0x03)
	float                                         ExitDuration;                                                // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelSmartPingIconAppearanceSettings
// Size: 0x1c (Inherited: 0x00)
struct FBravoHotelSmartPingIconAppearanceSettings 
{
	float                                         Scale;                                                       // 0x00(0x04)
	struct FNone                                  Anchor;                                                      // 0x04(0x08)
	struct FNone                                  Tint;                                                        // 0x0c(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelFallingAnimParameters
// Size: 0x0c (Inherited: 0x00)
struct FBravoHotelFallingAnimParameters 
{
	float                                         StartTime;                                                   // 0x00(0x04)
	float                                         ApexTime;                                                    // 0x04(0x04)
	float                                         EndTime;                                                     // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelTimeOfDaySimulateInformation
// Size: 0x10 (Inherited: 0x00)
struct FBravoHotelTimeOfDaySimulateInformation 
{
	enum class None                               TOD_Begin;                                                   // 0x00(0x01)
	enum class None                               TOD_End;                                                     // 0x01(0x01)
	char                                          UnknownData2[0x2];                                           // 0x02(0x02)
	float                                         DL_Rotation_TransitionTime;                                  // 0x04(0x04)
	float                                         PostTransitionDelayTime;                                     // 0x08(0x04)
	float                                         PostTransitionTime;                                          // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelTimeOfDaySettings
// Size: 0x98 (Inherited: 0x00)
struct FBravoHotelTimeOfDaySettings 
{
	char                                          bOverride_DL_Rotation : 0;                                   // 0x00(0x01)
	char                                          bOverride_DL_Temperature : 0;                                // 0x00(0x01)
	char                                          bOverride_DL_Intensity : 0;                                  // 0x00(0x01)
	char                                          bOverride_DL_DistanceFieldTrace : 0;                         // 0x00(0x01)
	char                                          bOverride_DL_RayStartOffsetDepthScale : 0;                   // 0x00(0x01)
	char                                          bOverride_DL_DistanceFieldShadowDistance : 0;                // 0x00(0x01)
	char                                          bOverride_DL_DynamicShadowDistance : 0;                      // 0x00(0x01)
	char                                          bOverride_DL_VolumetricScatteringIntensity : 0;              // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
	char                                          bOverride_DL_IndirectLightIntensity : 0;                     // 0x01(0x01)
	char                                          bOverride_SkyLight_Intensity : 0;                            // 0x01(0x01)
	char                                          bOverride_SkyLight_Color : 0;                                // 0x01(0x01)
	char                                          bOverride_SkyLight_OcclusionTint : 0;                        // 0x01(0x01)
	char                                          bOverride_SkyLight_OcclusionFoliageTint : 0;                 // 0x01(0x01)
	char                                          bOverride_SkyLight_OcclusionBarkTint : 0;                    // 0x01(0x01)
	char                                          bOverride_ExFog_Density : 0;                                 // 0x01(0x01)
	char                                          bOverride_ExFog_Density_Clear : 0;                           // 0x01(0x01)
	char                                          UnknownData1[0x1];                                           // 0x01(0x01)
	char                                          bOverride_ExFog_Color : 0;                                   // 0x02(0x01)
	char                                          bOverride_ExFog_HeightFalloff : 0;                           // 0x02(0x01)
	char                                          bOverride_ExFog_VolumetricFogScatteringDistribution : 0;     // 0x02(0x01)
	char                                          bOverride_AF_SunMultiplier : 0;                              // 0x02(0x01)
	char                                          bOverride_PP_ExposureMin : 0;                                // 0x02(0x01)
	char                                          bOverride_PP_ExposureMax : 0;                                // 0x02(0x01)
	char                                          bOverride_PP_ExposureLowPercent : 0;                         // 0x02(0x01)
	char                                          bOverride_PP_ExposureCompensation : 0;                       // 0x02(0x01)
	char                                          UnknownData2[0x1];                                           // 0x02(0x01)
	char                                          bOverride_PP_BloomIntensity : 0;                             // 0x03(0x01)
	char                                          bOverride_PP_BloomThreshold : 0;                             // 0x03(0x01)
	char                                          bOverride_PP_LPVSize : 0;                                    // 0x03(0x01)
	char                                          bOverride_PP_LPVIntensity : 0;                               // 0x03(0x01)
	char                                          bOverride_PP_LPVLightInjectionBias : 0;                      // 0x03(0x01)
	char                                          UnknownData3[0x1];                                           // 0x03(0x01)
	struct FNone                                  DL_Rotation;                                                 // 0x04(0x0c)
	float                                         DL_Temperature;                                              // 0x10(0x04)
	float                                         DL_Intensity;                                                // 0x14(0x04)
	float                                         DL_DistanceFieldTrace;                                       // 0x18(0x04)
	float                                         DL_RayStartOffsetDepthScale;                                 // 0x1c(0x04)
	float                                         DL_DistanceFieldShadowDistance;                              // 0x20(0x04)
	float                                         DL_DynamicShadowDistance;                                    // 0x24(0x04)
	float                                         DL_VolumetricScatteringIntensity;                            // 0x28(0x04)
	float                                         DL_IndirectLightIntensity;                                   // 0x2c(0x04)
	float                                         SkyLight_Intensity;                                          // 0x30(0x04)
	struct FNone                                  SkyLight_Color;                                              // 0x34(0x10)
	struct FNone                                  SkyLight_OcclusionTint;                                      // 0x44(0x04)
	struct FNone                                  SkyLight_OcclusionFoliageTint;                               // 0x48(0x04)
	struct FNone                                  SkyLight_OcclusionBarkTint;                                  // 0x4c(0x04)
	float                                         ExFog_Density;                                               // 0x50(0x04)
	float                                         ExFog_Density_Clear;                                         // 0x54(0x04)
	struct FNone                                  ExFog_Color;                                                 // 0x58(0x10)
	float                                         ExFog_HeightFalloff;                                         // 0x68(0x04)
	float                                         ExFog_VolumetricFogScatteringDistribution;                   // 0x6c(0x04)
	float                                         AF_SunMultiplier;                                            // 0x70(0x04)
	float                                         PP_ExposureMin;                                              // 0x74(0x04)
	float                                         PP_ExposureMax;                                              // 0x78(0x04)
	float                                         PP_ExposureLowPercent;                                       // 0x7c(0x04)
	float                                         PP_ExposureCompensation;                                     // 0x80(0x04)
	float                                         PP_BloomIntensity;                                           // 0x84(0x04)
	float                                         PP_BloomThreshold;                                           // 0x88(0x04)
	float                                         PP_LPVSize;                                                  // 0x8c(0x04)
	float                                         PP_LPVIntensity;                                             // 0x90(0x04)
	float                                         PP_LPVLightInjectionBias;                                    // 0x94(0x04)
};

// ScriptStruct BravoHotelGame.SpawnActors_DEBUG
// Size: 0x20 (Inherited: 0x00)
struct FSpawnActors_DEBUG 
{
	struct FString                                ActorName;                                                   // 0x00(0x10)
	struct TArray<None>                           ActorList;                                                   // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelRewardItem
// Size: 0x20 (Inherited: 0x00)
struct FBravoHotelRewardItem 
{
	uint32_t                                      table_index;                                                 // 0x00(0x04)
	uint32_t                                      RandomPackageID;                                             // 0x04(0x04)
	uint32_t                                      Count;                                                       // 0x08(0x04)
	uint32_t                                      SortType;                                                    // 0x0c(0x04)
	struct TArray<None>                           ItemOptions;                                                 // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelLevelStreamSettings
// Size: 0x40 (Inherited: 0x08)
struct FBravoHotelLevelStreamSettings : FTableRowBase 
{
	char                                          bEnable : 0;                                                 // 0x08(0x01)
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
	struct FString                                WorldDefault_LightLevelString;                               // 0x10(0x10)
	struct FString                                CustomDefault_LightLevelString;                              // 0x20(0x10)
	struct TArray<None>                           AfterGameStart_LightLevelString;                             // 0x30(0x10)
};

// ScriptStruct BravoHotelGame.ItemColorData
// Size: 0x70 (Inherited: 0x08)
struct FItemColorData : FTableRowBase 
{
	uint32_t                                      ID;                                                          // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FText                                  DisplayName;                                                 // 0x10(0x18)
	struct FText                                  Description;                                                 // 0x28(0x18)
	enum class None                               Slot;                                                        // 0x40(0x01)
	char                                          UnknownData41[0x7];                                          // 0x41(0x07)
	struct TSoftObjectPtr<FNone>                  Icon;                                                        // 0x48(0x28)
};

// ScriptStruct BravoHotelGame.ItemAppearanceData
// Size: 0x58 (Inherited: 0x08)
struct FItemAppearanceData : FTableRowBase 
{
	uint32_t                                      ID;                                                          // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FText                                  DisplayName;                                                 // 0x10(0x18)
	struct FText                                  Description;                                                 // 0x28(0x18)
	enum class None                               Slot;                                                        // 0x40(0x01)
	char                                          UnknownData41[0x7];                                          // 0x41(0x07)
	struct TArray<None>                           Color;                                                       // 0x48(0x10)
};

// ScriptStruct BravoHotelGame.ItemAppearanceColorData
// Size: 0x38 (Inherited: 0x00)
struct FItemAppearanceColorData 
{
	struct FName                                  ColorID;                                                     // 0x00(0x08)
	struct TSoftObjectPtr<FNone>                  IconEx;                                                      // 0x08(0x28)
	struct FName                                  MutableUniqueKey;                                            // 0x30(0x08)
};

// ScriptStruct BravoHotelGame.ClimbData
// Size: 0x98 (Inherited: 0x00)
struct FClimbData 
{
	float                                         TargetHeight;                                                // 0x00(0x04)
	float                                         MaxDistance;                                                 // 0x04(0x04)
	struct FNone*                                 Montage;                                                     // 0x08(0x08)
	struct FNone*                                 OneHandMontage;                                              // 0x10(0x08)
	struct FNone*                                 TwoHandMontage;                                              // 0x18(0x08)
	float                                         FallingRate;                                                 // 0x20(0x04)
	struct FNone                                  DettachLaunch;                                               // 0x24(0x0c)
	struct FNone                                  CameraPosition;                                              // 0x30(0x0c)
	struct FNone                                  CameraSecondPosition;                                        // 0x3c(0x0c)
	float                                         CameraTime;                                                  // 0x48(0x04)
	float                                         CameraSecondTime;                                            // 0x4c(0x04)
	float                                         CameraOutTime;                                               // 0x50(0x04)
	struct FNone                                  StartPosition;                                               // 0x54(0x0c)
	char                                          bWalkToStartPosition : 0;                                    // 0x60(0x01)
	char                                          UnknownData60[0x1];                                          // 0x60(0x01)
	char                                          bSlide : 0;                                                  // 0x61(0x01)
	char                                          UnknownData61[0x1];                                          // 0x61(0x01)
	char                                          bUseHeightCurve : 0;                                         // 0x62(0x01)
	char                                          UnknownData62[0x2];                                          // 0x62(0x02)
	struct FName                                  CameraBone;                                                  // 0x64(0x08)
	char                                          bHandToWeaponIK : 0;                                         // 0x6c(0x01)
	char                                          UnknownData6C[0x4];                                          // 0x6c(0x04)
	float                                         PlaySpeed;                                                   // 0x70(0x04)
	struct FName                                  OverrideKey;                                                 // 0x74(0x08)
	char                                          UnknownData7C[0x4];                                          // 0x7c(0x04)
	struct FNone*                                 CurveFPP;                                                    // 0x80(0x08)
	float                                         CameraYawLimit_FPP;                                          // 0x88(0x04)
	float                                         CameraPitchMax_FPP;                                          // 0x8c(0x04)
	float                                         CameraPitchMin_FPP;                                          // 0x90(0x04)
	char                                          bFixCameraBaseLocation_FPP : 0;                              // 0x94(0x01)
	char                                          UnknownData94[0x4];                                          // 0x94(0x04)
};

// ScriptStruct BravoHotelGame.UsableItemText
// Size: 0x18 (Inherited: 0x08)
struct FUsableItemText : FTableRowBase 
{
	uint32_t                                      Using;                                                       // 0x08(0x04)
	uint32_t                                      Full;                                                        // 0x0c(0x04)
	uint32_t                                      NoTarget;                                                    // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelHitResults
// Size: 0x10 (Inherited: 0x00)
struct FBravoHotelHitResults 
{
	struct TArray<None>                           HitResults;                                                  // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelMatchRewardTableRow
// Size: 0x128 (Inherited: 0x08)
struct FBravoHotelMatchRewardTableRow : FTableRowBase 
{
	uint32_t                                      Reward_ID;                                                   // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FText                                  map_name;                                                    // 0x10(0x18)
	struct FText                                  Mode_Name;                                                   // 0x28(0x18)
	struct FNone                                  PersonalReward;                                              // 0x40(0x24)
	struct FNone                                  RankReward;                                                  // 0x64(0x1c)
	struct FNone                                  RandomReward;                                                // 0x80(0xa8)
};

// ScriptStruct BravoHotelGame.BravoHotelRandomReward
// Size: 0xa8 (Inherited: 0x00)
struct FBravoHotelRandomReward 
{
	float                                         RandomGoldMinRate;                                           // 0x00(0x04)
	float                                         RandomGoldMaxRate;                                           // 0x04(0x04)
	struct TMap<None, None>                       BaseRandomGold;                                              // 0x08(0x50)
	struct TMap<None, None>                       MaxRandomGold;                                               // 0x58(0x50)
};

// ScriptStruct BravoHotelGame.BravoHotelRankReward
// Size: 0x1c (Inherited: 0x00)
struct FBravoHotelRankReward 
{
	uint32_t                                      TimeBase;                                                    // 0x00(0x04)
	float                                         GoldPerTime;                                                 // 0x04(0x04)
	float                                         ExpPerTime;                                                  // 0x08(0x04)
	float                                         Ratio;                                                       // 0x0c(0x04)
	float                                         Percentage;                                                  // 0x10(0x04)
	float                                         ReduceCycle;                                                 // 0x14(0x04)
	float                                         ReducePercentage;                                            // 0x18(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelPersonalReward
// Size: 0x24 (Inherited: 0x00)
struct FBravoHotelPersonalReward 
{
	uint32_t                                      GoldPerkill;                                                 // 0x00(0x04)
	uint32_t                                      ExpPerKill;                                                  // 0x04(0x04)
	uint32_t                                      PerDMG_BaseDMG;                                              // 0x08(0x04)
	uint32_t                                      GoldPerDMG;                                                  // 0x0c(0x04)
	uint32_t                                      ExpPerDMG;                                                   // 0x10(0x04)
	uint32_t                                      PerTime_BaseTime;                                            // 0x14(0x04)
	uint32_t                                      PerTime_TimeLimit;                                           // 0x18(0x04)
	uint32_t                                      GoldPerTime;                                                 // 0x1c(0x04)
	uint32_t                                      ExpPerTime;                                                  // 0x20(0x04)
};

// ScriptStruct BravoHotelGame.LimitedCollection
// Size: 0x28 (Inherited: 0x08)
struct FLimitedCollection : FTableRowBase 
{
	uint32_t                                      StackableMaxCount;                                           // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FText                                  Notice;                                                      // 0x10(0x18)
};

// ScriptStruct BravoHotelGame.CurrencyData
// Size: 0x70 (Inherited: 0x08)
struct FCurrencyData : FTableRowBase 
{
	uint32_t                                      ID;                                                          // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FText                                  DisplayName;                                                 // 0x10(0x18)
	struct FText                                  Description;                                                 // 0x28(0x18)
	struct TSoftObjectPtr<FNone>                  SlotIconTexture;                                             // 0x40(0x28)
	uint32_t                                      Limit;                                                       // 0x68(0x04)
	uint32_t                                      Price;                                                       // 0x6c(0x04)
};

// ScriptStruct BravoHotelGame.ItemMaterialData
// Size: 0xd0 (Inherited: 0x08)
struct FItemMaterialData : FTableRowBase 
{
	uint32_t                                      ID;                                                          // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FText                                  DisplayName;                                                 // 0x10(0x18)
	struct FText                                  Description;                                                 // 0x28(0x18)
	uint32_t                                      Rarity;                                                      // 0x40(0x04)
	uint32_t                                      Slot;                                                        // 0x44(0x04)
	struct FName                                  TargetIngameItem;                                            // 0x48(0x08)
	uint32_t                                      CraftingID;                                                  // 0x50(0x04)
	char                                          UnknownData54[0x4];                                          // 0x54(0x04)
	struct TSoftObjectPtr<FNone>                  SlotIconTexture;                                             // 0x58(0x28)
	struct TSoftObjectPtr<FNone>                  SlotIconTexture1024;                                         // 0x80(0x28)
	struct FNone*                                 DataAsset;                                                   // 0xa8(0x08)
	uint32_t                                      Limit;                                                       // 0xb0(0x04)
	uint32_t                                      Price;                                                       // 0xb4(0x04)
	struct FText                                  Filter;                                                      // 0xb8(0x18)
};

// ScriptStruct BravoHotelGame.CharacterClassData
// Size: 0x90 (Inherited: 0x08)
struct FCharacterClassData : FTableRowBase 
{
	uint32_t                                      ID;                                                          // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FText                                  DisplayName;                                                 // 0x10(0x18)
	struct FText                                  Description;                                                 // 0x28(0x18)
	uint32_t                                      TypeID;                                                      // 0x40(0x04)
	uint32_t                                      Level;                                                       // 0x44(0x04)
	uint32_t                                      MaxLevel;                                                    // 0x48(0x04)
	uint32_t                                      NextLevelExp;                                                // 0x4c(0x04)
	struct FName                                  Reward_01;                                                   // 0x50(0x08)
	uint32_t                                      Reward_Value_01;                                             // 0x58(0x04)
	struct FName                                  Reward_02;                                                   // 0x5c(0x08)
	uint32_t                                      Reward_Value_02;                                             // 0x64(0x04)
	struct FName                                  Reward_03;                                                   // 0x68(0x08)
	uint32_t                                      Reward_Value_03;                                             // 0x70(0x04)
	struct FName                                  Reward_04;                                                   // 0x74(0x08)
	uint32_t                                      Reward_Value_04;                                             // 0x7c(0x04)
	struct TArray<None>                           Reward;                                                      // 0x80(0x10)
};

// ScriptStruct BravoHotelGame.MaterialUnit
// Size: 0x08 (Inherited: 0x00)
struct FMaterialUnit 
{
	uint32_t                                      ID;                                                          // 0x00(0x04)
	uint32_t                                      Count;                                                       // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.CharacterClassTypeData
// Size: 0xe8 (Inherited: 0x08)
struct FCharacterClassTypeData : FTableRowBase 
{
	uint32_t                                      ID;                                                          // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FText                                  DisplayName;                                                 // 0x10(0x18)
	struct FText                                  Description;                                                 // 0x28(0x18)
	struct FName                                  MaterialID;                                                  // 0x40(0x08)
	uint32_t                                      MaterialCount;                                               // 0x48(0x04)
	char                                          UnknownData4C[0x4];                                          // 0x4c(0x04)
	struct TArray<None>                           DefaultClothes;                                              // 0x50(0x10)
	struct TArray<None>                           EquipClothes;                                                // 0x60(0x10)
	struct TArray<None>                           RandomEquipClothes;                                          // 0x70(0x10)
	struct FNone                                  LookInfo;                                                    // 0x80(0x14)
	char                                          UnknownData94[0x4];                                          // 0x94(0x04)
	struct TArray<None>                           DefaultPerk;                                                 // 0x98(0x10)
	struct TArray<None>                           MaleFace;                                                    // 0xa8(0x10)
	struct TArray<None>                           MaleHair;                                                    // 0xb8(0x10)
	struct TArray<None>                           FemaleFace;                                                  // 0xc8(0x10)
	struct TArray<None>                           FemaleHair;                                                  // 0xd8(0x10)
};

// ScriptStruct BravoHotelGame.LookInfo
// Size: 0x14 (Inherited: 0x00)
struct FLookInfo 
{
	uint32_t                                      hair;                                                        // 0x00(0x04)
	uint32_t                                      hair_color;                                                  // 0x04(0x04)
	uint32_t                                      face;                                                        // 0x08(0x04)
	uint32_t                                      face_color;                                                  // 0x0c(0x04)
	uint32_t                                      gender;                                                      // 0x10(0x04)
};

// ScriptStruct BravoHotelGame.RandomEquipClothesData
// Size: 0x18 (Inherited: 0x08)
struct FRandomEquipClothesData : FTableRowBase 
{
	struct TArray<None>                           EquipClothes;                                                // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.CrosshairTableRow
// Size: 0x2a8 (Inherited: 0x08)
struct FCrosshairTableRow : FTableRowBase 
{
	float                                         SpreadDistance;                                              // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FNone                                  TextureInfo;                                                 // 0x10(0x148)
	char                                          bUseCrosshairOnADS : 0;                                      // 0x158(0x01)
	char                                          UnknownData158[0x4];                                         // 0x158(0x04)
	float                                         SpreadDistance_ADS;                                          // 0x15c(0x04)
	struct FNone                                  TextureInfo_ADS;                                             // 0x160(0x148)
};

// ScriptStruct BravoHotelGame.CrosshairTextureInfo
// Size: 0x148 (Inherited: 0x00)
struct FCrosshairTextureInfo 
{
	struct TSoftObjectPtr<FNone>                  CenterTexture;                                               // 0x00(0x28)
	struct TSoftObjectPtr<FNone>                  LeftTexture;                                                 // 0x28(0x28)
	struct TSoftObjectPtr<FNone>                  TopTexture;                                                  // 0x50(0x28)
	struct TSoftObjectPtr<FNone>                  RightTexture;                                                // 0x78(0x28)
	struct TSoftObjectPtr<FNone>                  BottomTexture;                                               // 0xa0(0x28)
	struct FNone                                  CenterColor;                                                 // 0xc8(0x10)
	struct FNone                                  LeftColor;                                                   // 0xd8(0x10)
	struct FNone                                  TopColor;                                                    // 0xe8(0x10)
	struct FNone                                  RightColor;                                                  // 0xf8(0x10)
	struct FNone                                  BottomColor;                                                 // 0x108(0x10)
	struct FNone                                  CenterDeltaPosition;                                         // 0x118(0x08)
	struct FNone                                  LeftDeltaPosition;                                           // 0x120(0x08)
	struct FNone                                  TopDeltaPosition;                                            // 0x128(0x08)
	struct FNone                                  RightDeltaPosition;                                          // 0x130(0x08)
	struct FNone                                  BottomDeltaPosition;                                         // 0x138(0x08)
	float                                         TextureScale;                                                // 0x140(0x04)
	char                                          UnknownData144[0x4];                                         // 0x144(0x04)
};

// ScriptStruct BravoHotelGame.CharacterVoiceTableRow
// Size: 0x70 (Inherited: 0x08)
struct FCharacterVoiceTableRow : FTableRowBase 
{
	uint32_t                                      PriorityOrder;                                               // 0x08(0x04)
	enum class None                               PriorityType;                                                // 0x0c(0x01)
	char                                          UnknownDataD[0x3];                                           // 0x0d(0x03)
	struct TSoftObjectPtr<FNone>                  AudioEvent;                                                  // 0x10(0x28)
	struct TSoftObjectPtr<FNone>                  TeamAudioEvent;                                              // 0x38(0x28)
	enum class None                               RPCType;                                                     // 0x60(0x01)
	char                                          UnknownData61[0x3];                                          // 0x61(0x03)
	float                                         IntervalTime;                                                // 0x64(0x04)
	uint32_t                                      Repeat;                                                      // 0x68(0x04)
	float                                         CoolTime;                                                    // 0x6c(0x04)
};

// ScriptStruct BravoHotelGame.TurnAnims
// Size: 0x400 (Inherited: 0x00)
struct FTurnAnims 
{
	struct FNone                                  Unarmed_Stand_Turn_L_91;                                     // 0x00(0x20)
	struct FNone                                  Unarmed_Stand_Turn_L_181;                                    // 0x20(0x20)
	struct FNone                                  Unarmed_Stand_Turn_R_91;                                     // 0x40(0x20)
	struct FNone                                  Unarmed_Stand_Turn_R_181;                                    // 0x60(0x20)
	struct FNone                                  Unarmed_Crouch_Turn_L_91;                                    // 0x80(0x20)
	struct FNone                                  Unarmed_Crouch_Turn_L_181;                                   // 0xa0(0x20)
	struct FNone                                  Unarmed_Crouch_Turn_R_91;                                    // 0xc0(0x20)
	struct FNone                                  Unarmed_Crouch_Turn_R_181;                                   // 0xe0(0x20)
	struct FNone                                  Unarmed_Prone_Turn_L_46;                                     // 0x100(0x20)
	struct FNone                                  Unarmed_Prone_Turn_R_46;                                     // 0x120(0x20)
	struct FNone                                  Rifle_Stand_Turn_L_91;                                       // 0x140(0x20)
	struct FNone                                  Rifle_Stand_Turn_L_181;                                      // 0x160(0x20)
	struct FNone                                  Rifle_Stand_Turn_R_91;                                       // 0x180(0x20)
	struct FNone                                  Rifle_Stand_Turn_R_181;                                      // 0x1a0(0x20)
	struct FNone                                  Rifle_Crouch_Turn_L_91;                                      // 0x1c0(0x20)
	struct FNone                                  Rifle_Crouch_Turn_L_181;                                     // 0x1e0(0x20)
	struct FNone                                  Rifle_Crouch_Turn_R_91;                                      // 0x200(0x20)
	struct FNone                                  Rifle_Crouch_Turn_R_181;                                     // 0x220(0x20)
	struct FNone                                  Rifle_Prone_Turn_L_46;                                       // 0x240(0x20)
	struct FNone                                  Rifle_Prone_Turn_R_46;                                       // 0x260(0x20)
	struct FNone                                  Pistol_Stand_Turn_L_91;                                      // 0x280(0x20)
	struct FNone                                  Pistol_Stand_Turn_L_181;                                     // 0x2a0(0x20)
	struct FNone                                  Pistol_Stand_Turn_R_91;                                      // 0x2c0(0x20)
	struct FNone                                  Pistol_Stand_Turn_R_181;                                     // 0x2e0(0x20)
	struct FNone                                  Pistol_Crouch_Turn_L_91;                                     // 0x300(0x20)
	struct FNone                                  Pistol_Crouch_Turn_L_181;                                    // 0x320(0x20)
	struct FNone                                  Pistol_Crouch_Turn_R_91;                                     // 0x340(0x20)
	struct FNone                                  Pistol_Crouch_Turn_R_181;                                    // 0x360(0x20)
	struct FNone                                  Pistol_Prone_Turn_L_46;                                      // 0x380(0x20)
	struct FNone                                  Pistol_Prone_Turn_R_46;                                      // 0x3a0(0x20)
	struct FNone                                  Descent_Turn_L;                                              // 0x3c0(0x20)
	struct FNone                                  Descent_Turn_R;                                              // 0x3e0(0x20)
};

// ScriptStruct BravoHotelGame.TurnInPlaceAnimInfo
// Size: 0x20 (Inherited: 0x00)
struct FTurnInPlaceAnimInfo 
{
	struct FNone*                                 DynamicMontageAnim;                                          // 0x00(0x08)
	struct FNone*                                 RepeatMontageAnim;                                           // 0x08(0x08)
	float                                         TurnTime;                                                    // 0x10(0x04)
	float                                         TurnAngle;                                                   // 0x14(0x04)
	float                                         TurnTriggerAngle;                                            // 0x18(0x04)
	float                                         PlayRate;                                                    // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelRenderSettings
// Size: 0x30 (Inherited: 0x08)
struct FBravoHotelRenderSettings : FTableRowBase 
{
	struct FNone                                  TAA;                                                         // 0x08(0x10)
	struct FNone                                  Exposure;                                                    // 0x18(0x18)
};

// ScriptStruct BravoHotelGame.BravoHotelExposureSettings
// Size: 0x18 (Inherited: 0x00)
struct FBravoHotelExposureSettings 
{
	char                                          bEnable : 0;                                                 // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	float                                         CustomDeltaHeight;                                           // 0x04(0x04)
	float                                         MinHeight;                                                   // 0x08(0x04)
	float                                         MaxHeight;                                                   // 0x0c(0x04)
	float                                         MinExposureCompensation;                                     // 0x10(0x04)
	float                                         MaxExposureCompensation;                                     // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.BravoHotelTemporalAASettings
// Size: 0x10 (Inherited: 0x00)
struct FBravoHotelTemporalAASettings 
{
	float                                         IdleTemporalAA_Weight;                                       // 0x00(0x04)
	float                                         MovingTemporalAA_Weight;                                     // 0x04(0x04)
	float                                         ADSTemporalAA_Weight;                                        // 0x08(0x04)
	float                                         BlendSpeed;                                                  // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.ItemWorldSpawn
// Size: 0x38 (Inherited: 0x08)
struct FItemWorldSpawn : FTableRowBase 
{
	struct FText                                  Desc;                                                        // 0x08(0x18)
	uint32_t                                      MaxItemSpawnCnt;                                             // 0x20(0x04)
	char                                          UnknownData24[0x4];                                          // 0x24(0x04)
	struct TArray<None>                           ItemWorldSpawnInfos;                                         // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.ItemWorldSpawnInfo
// Size: 0x0c (Inherited: 0x00)
struct FItemWorldSpawnInfo 
{
	struct FName                                  ItemId;                                                      // 0x00(0x08)
	uint32_t                                      Cnt;                                                         // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.VehicleRandomSpawn
// Size: 0x18 (Inherited: 0x08)
struct FVehicleRandomSpawn : FTableRowBase 
{
	struct TArray<None>                           List;                                                        // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.VehicleSpawnRate
// Size: 0x0c (Inherited: 0x00)
struct FVehicleSpawnRate 
{
	struct FName                                  VehicleKey;                                                  // 0x00(0x08)
	float                                         SpawnWeight;                                                 // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.VehicleStandardGroup
// Size: 0x18 (Inherited: 0x08)
struct FVehicleStandardGroup : FTableRowBase 
{
	struct TArray<None>                           VehicleStandardGroupInfos;                                   // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.VehicleSpawnInfo
// Size: 0x0c (Inherited: 0x00)
struct FVehicleSpawnInfo 
{
	struct FName                                  RandomVehicleKey;                                            // 0x00(0x08)
	uint32_t                                      SpawnCount;                                                  // 0x08(0x04)
};

// ScriptStruct BravoHotelGame.ItemGroup
// Size: 0x18 (Inherited: 0x08)
struct FItemGroup : FTableRowBase 
{
	struct TArray<None>                           Items;                                                       // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.ItemGroupInfo
// Size: 0x20 (Inherited: 0x00)
struct FItemGroupInfo 
{
	struct FNone                                  ItemRowHandle;                                               // 0x00(0x10)
	struct FName                                  SkinID;                                                      // 0x10(0x08)
	uint32_t                                      Count;                                                       // 0x18(0x04)
	float                                         Probability;                                                 // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.RandomPackage
// Size: 0x90 (Inherited: 0x08)
struct FRandomPackage : FTableRowBase 
{
	uint32_t                                      ID;                                                          // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FText                                  DisplayName;                                                 // 0x10(0x18)
	uint32_t                                      No;                                                          // 0x28(0x04)
	uint32_t                                      TicketCount;                                                 // 0x2c(0x04)
	struct TSoftObjectPtr<FNone>                  UMGIcon;                                                     // 0x30(0x28)
	struct TSoftObjectPtr<FNone>                  CohIcon;                                                     // 0x58(0x28)
	struct TArray<None>                           Rewards;                                                     // 0x80(0x10)
};

// ScriptStruct BravoHotelGame.RandomPackageProbability
// Size: 0x30 (Inherited: 0x00)
struct FRandomPackageProbability 
{
	uint32_t                                      ID;                                                          // 0x00(0x04)
	uint32_t                                      Min;                                                         // 0x04(0x04)
	uint32_t                                      MAX;                                                         // 0x08(0x04)
	uint32_t                                      Rate;                                                        // 0x0c(0x04)
	uint32_t                                      DuplicateCount;                                              // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct FText                                  DisplayName;                                                 // 0x18(0x18)
};

// ScriptStruct BravoHotelGame.TeamMemberInfo
// Size: 0x24 (Inherited: 0x00)
struct FTeamMemberInfo 
{
	uint32_t                                      TeamIndex;                                                   // 0x00(0x04)
	uint32_t                                      MemberIndex;                                                 // 0x04(0x04)
	struct FNone                                  Location;                                                    // 0x08(0x0c)
	char                                          UnknownData14[0x10];                                         // 0x14(0x10)
};

// ScriptStruct BravoHotelGame.BravoHotelErrorStringData
// Size: 0x40 (Inherited: 0x08)
struct FBravoHotelErrorStringData : FTableRowBase 
{
	struct FText                                  DisplayString;                                               // 0x08(0x18)
	char                                          bShowCode : 0;                                               // 0x20(0x01)
	char                                          UnknownData20[0x1];                                          // 0x20(0x01)
	char                                          bShowExtraDescription : 0;                                   // 0x21(0x01)
	char                                          UnknownData21[0x7];                                          // 0x21(0x07)
	struct FText                                  Desc;                                                        // 0x28(0x18)
};

// ScriptStruct BravoHotelGame.ItemSpawingInfoTableRow
// Size: 0x48 (Inherited: 0x08)
struct FItemSpawingInfoTableRow : FTableRowBase 
{
	struct FNone                                  Item;                                                        // 0x08(0x10)
	uint32_t                                      DefaultSpawnItemQuantiy;                                     // 0x18(0x04)
	uint32_t                                      NumSpawnsMin;                                                // 0x1c(0x04)
	uint32_t                                      NumSpawnsMax;                                                // 0x20(0x04)
	char                                          bHasFollwingItem : 0;                                        // 0x24(0x01)
	char                                          UnknownData24[0x4];                                          // 0x24(0x04)
	struct FNone                                  FollowingItem;                                               // 0x28(0x10)
	uint32_t                                      DefaultFollowingItemSpawnQuantiy;                            // 0x38(0x04)
	uint32_t                                      NumFollowingSpawnsMin;                                       // 0x3c(0x04)
	uint32_t                                      NumFollowingSpawnsMax;                                       // 0x40(0x04)
	char                                          UnknownData44[0x4];                                          // 0x44(0x04)
};

// ScriptStruct BravoHotelGame.WorldSpawnItemInfo
// Size: 0x10 (Inherited: 0x00)
struct FWorldSpawnItemInfo 
{
	uint32_t                                      SpawnBoxID;                                                  // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FNone*                                 SpawnItem;                                                   // 0x08(0x08)
};

// ScriptStruct BravoHotelGame.TableRedZoneData
// Size: 0x78 (Inherited: 0x08)
struct FTableRedZoneData : FTableRowBase 
{
	uint32_t                                      BeginPhase;                                                  // 0x08(0x04)
	uint32_t                                      EndPhase;                                                    // 0x0c(0x04)
	struct FNone                                  DefaultRedZoneData;                                          // 0x10(0x58)
	struct TArray<None>                           ArrayRedZoneData;                                            // 0x68(0x10)
};

// ScriptStruct BravoHotelGame.RedZoneData
// Size: 0x58 (Inherited: 0x00)
struct FRedZoneData 
{
	enum class None                               RedZoneSelectType;                                           // 0x00(0x01)
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
	float                                         MinSpawnDelay;                                               // 0x04(0x04)
	float                                         MaxSpawnDelay;                                               // 0x08(0x04)
	float                                         SpawnRate;                                                   // 0x0c(0x04)
	uint32_t                                      AppearPhase;                                                 // 0x10(0x04)
	char                                          isOverwriteBombData : 0;                                     // 0x14(0x01)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct FNone                                  RedZoneBombData;                                             // 0x18(0x40)
};

// ScriptStruct BravoHotelGame.RedZoneBombData
// Size: 0x40 (Inherited: 0x00)
struct FRedZoneBombData 
{
	float                                         WarningTime;                                                 // 0x00(0x04)
	float                                         MinRange;                                                    // 0x04(0x04)
	float                                         MaxRange;                                                    // 0x08(0x04)
	float                                         BombHeight;                                                  // 0x0c(0x04)
	float                                         BombInterval;                                                // 0x10(0x04)
	uint32_t                                      BombCount;                                                   // 0x14(0x04)
	float                                         AircraftRandAngle;                                           // 0x18(0x04)
	float                                         AircraftRandWide;                                            // 0x1c(0x04)
	uint32_t                                      AircraftLoopCount;                                           // 0x20(0x04)
	char                                          UnknownData24[0x4];                                          // 0x24(0x04)
	struct TArray<None>                           AircraftSpawnPlan;                                           // 0x28(0x10)
	uint32_t                                      MinBombPerInterval;                                          // 0x38(0x04)
	uint32_t                                      MaxBombPerInterval;                                          // 0x3c(0x04)
};

// ScriptStruct BravoHotelGame.ItemStandardGroup
// Size: 0x18 (Inherited: 0x08)
struct FItemStandardGroup : FTableRowBase 
{
	struct TArray<None>                           ItemStandardGroupInfos;                                      // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.ResuscitationTypeData
// Size: 0xb0 (Inherited: 0x08)
struct FResuscitationTypeData : FTableRowBase 
{
	float                                         ModifyPerCountSelf;                                          // 0x08(0x04)
	float                                         ModifyPerCountOther;                                         // 0x0c(0x04)
	struct TMap<None, None>                       CostPerCountSelf;                                            // 0x10(0x50)
	struct TMap<None, None>                       CostPerCountOther;                                           // 0x60(0x50)
};

// ScriptStruct BravoHotelGame.PerkClassRuleData
// Size: 0xa8 (Inherited: 0x08)
struct FPerkClassRuleData : FTableRowBase 
{
	struct TMap<None, None>                       PerkClassNumCap;                                             // 0x08(0x50)
	struct TMap<None, None>                       PerkClassWeightModifier;                                     // 0x58(0x50)
};

// ScriptStruct BravoHotelGame.TransportAircraftInfo
// Size: 0x80 (Inherited: 0x00)
struct FTransportAircraftInfo 
{
	struct FNone                                  Start;                                                       // 0x00(0x0c)
	struct FNone                                  End;                                                         // 0x0c(0x0c)
	struct FNone                                  StartBlueZone;                                               // 0x18(0x0c)
	struct FNone                                  EndBlueZone;                                                 // 0x24(0x0c)
	struct FNone                                  Target;                                                      // 0x30(0x0c)
	struct FNone                                  SecondTarget;                                                // 0x3c(0x0c)
	struct FName                                  RandomItemKey;                                               // 0x48(0x08)
	struct FNone                                  DropBoxCurrentPos;                                           // 0x50(0x0c)
	char                                          UnknownData5C[0x4];                                          // 0x5c(0x04)
	struct TArray<None>                           DropDistances;                                               // 0x60(0x10)
	struct TArray<None>                           DropBoxes;                                                   // 0x70(0x10)
};

// ScriptStruct BravoHotelGame.AddPerkInfos
// Size: 0x18 (Inherited: 0x08)
struct FAddPerkInfos : FTableRowBase 
{
	struct TArray<None>                           AddPerkInfos;                                                // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.AddPerkInfoArray
// Size: 0x10 (Inherited: 0x00)
struct FAddPerkInfoArray 
{
	struct TArray<None>                           AddPerkInfoArray;                                            // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.SupplyBoxAssignmentInfo
// Size: 0x30 (Inherited: 0x00)
struct FSupplyBoxAssignmentInfo 
{
	uint32_t                                      Guid;                                                        // 0x00(0x04)
	struct FNone                                  Location;                                                    // 0x04(0x0c)
	float                                         AssignmentTime;                                              // 0x10(0x04)
	float                                         AssignmentDelayTime;                                         // 0x14(0x04)
	struct FNone*                                 AssignSupplyBox;                                             // 0x18(0x08)
	struct FNone*                                 Spawner;                                                     // 0x20(0x08)
	char                                          IsTest : 0;                                                  // 0x28(0x01)
	char                                          UnknownData28[0x8];                                          // 0x28(0x08)
};

// ScriptStruct BravoHotelGame.VehicleTableRow
// Size: 0x40 (Inherited: 0x08)
struct FVehicleTableRow : FTableRowBase 
{
	struct TSoftClassPtr<UObject>                 VehicleClass;                                                // 0x08(0x28)
	struct FNone                                  SpawnLocationOffset;                                         // 0x30(0x0c)
	char                                          UnknownData3C[0x4];                                          // 0x3c(0x04)
};

// ScriptStruct BravoHotelGame.DamageModifierByWeapon
// Size: 0x08 (Inherited: 0x00)
struct FDamageModifierByWeapon 
{
	enum class None                               WeaponType;                                                  // 0x00(0x01)
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
	float                                         Value;                                                       // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.BoneDamageStruct
// Size: 0x18 (Inherited: 0x08)
struct FBoneDamageStruct : FTableRowBase 
{
	struct FName                                  BoneName;                                                    // 0x08(0x08)
	float                                         DamageFactor;                                                // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.WeaponAssetData
// Size: 0x740 (Inherited: 0x08)
struct FWeaponAssetData : FTableRowBase 
{
	struct FNone                                  ADS_Info;                                                    // 0x08(0x1f0)
	struct FNone                                  FPSK_Info;                                                   // 0x1f8(0x220)
	struct FNone                                  Attachment_Info;                                             // 0x418(0x318)
	struct FNone*                                 Curve_Sway_Idle;                                             // 0x730(0x08)
	struct FNone*                                 Curve_Sway_Move;                                             // 0x738(0x08)
};

// ScriptStruct BravoHotelGame.WeaponAbilityData
// Size: 0x3a8 (Inherited: 0x08)
struct FWeaponAbilityData : FTableRowBase 
{
	struct FName                                  WeaponKey;                                                   // 0x08(0x08)
	struct FText                                  DisplayName;                                                 // 0x10(0x18)
	struct FText                                  DisplayDesc;                                                 // 0x28(0x18)
	struct FName                                  AK_EventKey;                                                 // 0x40(0x08)
	float                                         CrosshairIncrease;                                           // 0x48(0x04)
	float                                         CrosshairDecreaseSpeed;                                      // 0x4c(0x04)
	float                                         CrosshairInterpSpeed;                                        // 0x50(0x04)
	char                                          UnknownData54[0x4];                                          // 0x54(0x04)
	struct FNone*                                 SilhouetteIconTexture_PaperSprite;                           // 0x58(0x08)
	enum class None                               WeaponType;                                                  // 0x60(0x01)
	enum class None                               ThrowingWeaponType;                                          // 0x61(0x01)
	char                                          UnknownData62[0x6];                                          // 0x62(0x06)
	struct FText                                  DisplayWeaponType;                                           // 0x68(0x18)
	struct FText                                  DisplayRangeType;                                            // 0x80(0x18)
	uint32_t                                      Display_Damage;                                              // 0x98(0x04)
	uint32_t                                      Display_EffectiveRange;                                      // 0x9c(0x04)
	uint32_t                                      Display_Accuracy;                                            // 0xa0(0x04)
	uint32_t                                      Display_RateofFire;                                          // 0xa4(0x04)
	struct FName                                  Display_AmmoInfo;                                            // 0xa8(0x08)
	struct FName                                  AllowedAmmoName;                                             // 0xb0(0x08)
	float                                         MinDamage;                                                   // 0xb8(0x04)
	float                                         MaxDamage;                                                   // 0xbc(0x04)
	float                                         Accuracy;                                                    // 0xc0(0x04)
	float                                         FireRate;                                                    // 0xc4(0x04)
	float                                         FireRateBurst;                                               // 0xc8(0x04)
	float                                         Weight;                                                      // 0xcc(0x04)
	uint32_t                                      NormalMagSize;                                               // 0xd0(0x04)
	uint32_t                                      LargeMagSize;                                                // 0xd4(0x04)
	struct FNone                                  ReloadInfo;                                                  // 0xd8(0xb8)
	struct TArray<None>                           AllowedFireModes;                                            // 0x190(0x10)
	float                                         ProjectileVelocity;                                          // 0x1a0(0x04)
	float                                         TerminalVelocity;                                            // 0x1a4(0x04)
	uint32_t                                      BurstCount;                                                  // 0x1a8(0x04)
	uint32_t                                      BulletsPerShot;                                              // 0x1ac(0x04)
	char                                          bIsBoltAction : 0;                                           // 0x1b0(0x01)
	char                                          UnknownData1B0[0x4];                                         // 0x1b0(0x04)
	float                                         BoltActionTime;                                              // 0x1b4(0x04)
	float                                         ADSToReloadDelayTime;                                        // 0x1b8(0x04)
	float                                         MoveSpeedModifier;                                           // 0x1bc(0x04)
	struct FNone                                  Spread;                                                      // 0x1c0(0x40)
	struct FNone                                  Deviation;                                                   // 0x200(0x2c)
	char                                          UnknownData22C[0x4];                                         // 0x22c(0x04)
	struct FNone                                  Recoil;                                                      // 0x230(0x120)
	struct FNone                                  DepthOfField;                                                // 0x350(0x50)
	struct FNone                                  ArmsLag;                                                     // 0x3a0(0x08)
};

// ScriptStruct BravoHotelGame.WeaponSlot
// Size: 0x10 (Inherited: 0x00)
struct FWeaponSlot 
{
	struct TArray<None>                           AllowedWeaponTypes;                                          // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.CharacterMutableTagData
// Size: 0x28 (Inherited: 0x00)
struct FCharacterMutableTagData 
{
	uint16_t                                      HelmetLevel;                                                 // 0x00(0x02)
	uint16_t                                      ArmorLevel;                                                  // 0x02(0x02)
	uint16_t                                      BackpackLevel;                                               // 0x04(0x02)
	char                                          bHoodOn : 0;                                                 // 0x06(0x01)
	char                                          UnknownData6[0x1];                                           // 0x06(0x01)
	char                                          bPonyDynamicOn : 0;                                          // 0x07(0x01)
	char                                          UnknownData7[0x1];                                           // 0x07(0x01)
	char                                          bCoatDynamicOn : 0;                                          // 0x08(0x01)
	char                                          UnknownData8[0x1];                                           // 0x08(0x01)
	char                                          bSkirtDynamicOn : 0;                                         // 0x09(0x01)
	char                                          UnknownData9[0x1];                                           // 0x09(0x01)
	char                                          bSkirtDynamicOff : 0;                                        // 0x0a(0x01)
	char                                          UnknownDataA[0x1];                                           // 0x0a(0x01)
	char                                          bBackpackDynamicOff : 0;                                     // 0x0b(0x01)
	char                                          UnknownDataB[0x5];                                           // 0x0b(0x05)
	struct FString                                TargetBackpackPhysicsBone;                                   // 0x10(0x10)
	char                                          bUseBack03_Slot : 0;                                         // 0x20(0x01)
	char                                          UnknownData20[0x1];                                          // 0x20(0x01)
	char                                          bUseRPG_Slot : 0;                                            // 0x21(0x01)
	char                                          UnknownData21[0x1];                                          // 0x21(0x01)
	char                                          bOuter : 0;                                                  // 0x22(0x01)
	char                                          UnknownData22[0x1];                                          // 0x22(0x01)
	char                                          bGhillie : 0;                                                // 0x23(0x01)
	char                                          UnknownData23[0x1];                                          // 0x23(0x01)
	char                                          bHalfGhillie : 0;                                            // 0x24(0x01)
	char                                          UnknownData24[0x4];                                          // 0x24(0x04)
};

// ScriptStruct BravoHotelGame.VehicleCrashDamage
// Size: 0x20 (Inherited: 0x00)
struct FVehicleCrashDamage 
{
	struct FNone                                  VelocityRange;                                               // 0x00(0x10)
	float                                         DamageToCharacter;                                           // 0x10(0x04)
	float                                         DamageToRigidBody;                                           // 0x14(0x04)
	float                                         DamageReductionToCharacter;                                  // 0x18(0x04)
	float                                         DamageReductionToRigidBody;                                  // 0x1c(0x04)
};

// ScriptStruct BravoHotelGame.SpawnVehicleInfo
// Size: 0x10 (Inherited: 0x00)
struct FSpawnVehicleInfo 
{
	struct FNone*                                 SpawnVehicleClass;                                           // 0x00(0x08)
	float                                         VehicleProbability;                                          // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.VehicleSpawnBoxList
// Size: 0x10 (Inherited: 0x00)
struct FVehicleSpawnBoxList 
{
	struct TArray<None>                           List;                                                        // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.WheelInfo
// Size: 0x08 (Inherited: 0x00)
struct FWheelInfo 
{
	uint32_t                                      Index;                                                       // 0x00(0x04)
	char                                          Show : 0;                                                    // 0x04(0x01)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
};

// ScriptStruct BravoHotelGame.SeatInfo
// Size: 0x08 (Inherited: 0x00)
struct FSeatInfo 
{
	uint32_t                                      Index;                                                       // 0x00(0x04)
	char                                          Show : 0;                                                    // 0x04(0x01)
	char                                          UnknownData4[0x1];                                           // 0x04(0x01)
	char                                          Mine : 0;                                                    // 0x05(0x01)
	char                                          UnknownData5[0x3];                                           // 0x05(0x03)
};

// ScriptStruct BravoHotelGame.G2C_Update_AuthToken
// Size: 0x20 (Inherited: 0x00)
struct FG2C_Update_AuthToken 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.G2C_Update_AuthToken_Data
// Size: 0x10 (Inherited: 0x00)
struct FG2C_Update_AuthToken_Data 
{
	struct FString                                auth_token;                                                  // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.G2C_Game_View_Type
// Size: 0x18 (Inherited: 0x00)
struct FG2C_Game_View_Type 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x02)
	char                                          UnknownData12[0x6];                                          // 0x12(0x06)
};

// ScriptStruct BravoHotelGame.G2C_Game_View_Type_Data
// Size: 0x02 (Inherited: 0x00)
struct FG2C_Game_View_Type_Data 
{
	char                                          isGameViewTypeFPP : 0;                                       // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
	char                                          isGameViewTypeTPP : 0;                                       // 0x01(0x01)
	char                                          UnknownData1[0x1];                                           // 0x01(0x01)
};

// ScriptStruct BravoHotelGame.G2C_Matching_On_Off
// Size: 0x20 (Inherited: 0x00)
struct FG2C_Matching_On_Off 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.G2C_Matching_On_Off_Data
// Size: 0x10 (Inherited: 0x00)
struct FG2C_Matching_On_Off_Data 
{
	struct FString                                matchingOnOff;                                               // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.G2C_Battle_Mode_Possible
// Size: 0x18 (Inherited: 0x00)
struct FG2C_Battle_Mode_Possible 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x03)
	char                                          UnknownData13[0x5];                                          // 0x13(0x05)
};

// ScriptStruct BravoHotelGame.G2C_Battle_Mode_Possible_Data
// Size: 0x03 (Inherited: 0x00)
struct FG2C_Battle_Mode_Possible_Data 
{
	char                                          isBattleModeSoloPossible : 0;                                // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
	char                                          isBattleModeDuoPossible : 0;                                 // 0x01(0x01)
	char                                          UnknownData1[0x1];                                           // 0x01(0x01)
	char                                          isBattleModeSquadPossible : 0;                               // 0x02(0x01)
	char                                          UnknownData2[0x1];                                           // 0x02(0x01)
};

// ScriptStruct BravoHotelGame.G2C_Notify_Alarm
// Size: 0x18 (Inherited: 0x00)
struct FG2C_Notify_Alarm 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.G2C_Notify_Alarm_Data
// Size: 0x04 (Inherited: 0x00)
struct FG2C_Notify_Alarm_Data 
{
	uint32_t                                      notify_alarm;                                                // 0x00(0x04)
};

// ScriptStruct BravoHotelGame.G2C_Notify_Emergency
// Size: 0x20 (Inherited: 0x00)
struct FG2C_Notify_Emergency 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.G2C_Notify_Emergency_Data
// Size: 0x10 (Inherited: 0x00)
struct FG2C_Notify_Emergency_Data 
{
	struct TArray<None>                           notify_emergency;                                            // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.G2C_Notify_Emergency_Array
// Size: 0x20 (Inherited: 0x00)
struct FG2C_Notify_Emergency_Array 
{
	struct FString                                Language;                                                    // 0x00(0x10)
	struct FString                                notify;                                                      // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.G2C_AllUserKick
// Size: 0x18 (Inherited: 0x00)
struct FG2C_AllUserKick 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x01)
	char                                          UnknownData11[0x7];                                          // 0x11(0x07)
};

// ScriptStruct BravoHotelGame.G2C_AllUserKick_Data
// Size: 0x01 (Inherited: 0x00)
struct FG2C_AllUserKick_Data 
{
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.G2C_GoToDediWhenYouWerePlaying
// Size: 0xb0 (Inherited: 0x00)
struct FG2C_GoToDediWhenYouWerePlaying 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0xa0)
};

// ScriptStruct BravoHotelGame.G2C_GoToDediWhenYouWerePlaying_Data
// Size: 0xa0 (Inherited: 0x00)
struct FG2C_GoToDediWhenYouWerePlaying_Data 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FString                                D;                                                           // 0x18(0x10)
	char                                          is_go : 0;                                                   // 0x28(0x01)
	char                                          UnknownData28[0x8];                                          // 0x28(0x08)
	struct FString                                ds;                                                          // 0x30(0x10)
	struct FString                                Token;                                                       // 0x40(0x10)
	struct FString                                team_id;                                                     // 0x50(0x10)
	struct FString                                Key;                                                         // 0x60(0x10)
	uint32_t                                      how;                                                         // 0x70(0x04)
	char                                          UnknownData74[0x4];                                          // 0x74(0x04)
	struct FString                                player_session_id;                                           // 0x78(0x10)
	char                                          SpectatorOnly : 0;                                           // 0x88(0x01)
	char                                          UnknownData88[0x8];                                          // 0x88(0x08)
	struct FString                                AddOptions;                                                  // 0x90(0x10)
};

// ScriptStruct BravoHotelGame.C2G_GoToDediWhenYouWerePlaying
// Size: 0x18 (Inherited: 0x00)
struct FC2G_GoToDediWhenYouWerePlaying 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x01)
	char                                          UnknownData11[0x7];                                          // 0x11(0x07)
};

// ScriptStruct BravoHotelGame.C2G_GoToDediWhenYouWerePlaying_Data
// Size: 0x01 (Inherited: 0x00)
struct FC2G_GoToDediWhenYouWerePlaying_Data 
{
	char                                          is_go : 0;                                                   // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoUpdatedPCInfo
// Size: 0x88 (Inherited: 0x00)
struct FG2C_PartyWhoUpdatedPCInfo 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x78)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoUpdatedPCInfo_Data
// Size: 0x78 (Inherited: 0x00)
struct FG2C_PartyWhoUpdatedPCInfo_Data 
{
	struct FString                                UID;                                                         // 0x00(0x10)
	struct FNone                                  pc_info;                                                     // 0x10(0x68)
};

// ScriptStruct BravoHotelGame.PartyPCInfo
// Size: 0x68 (Inherited: 0x00)
struct FPartyPCInfo 
{
	struct FString                                pc_id;                                                       // 0x00(0x10)
	uint32_t                                      class_type_index;                                            // 0x10(0x04)
	uint32_t                                      class_data_index;                                            // 0x14(0x04)
	struct FNone                                  looks;                                                       // 0x18(0x18)
	struct TArray<None>                           wear_item;                                                   // 0x30(0x10)
	struct TArray<None>                           Weapon;                                                      // 0x40(0x10)
	struct TArray<None>                           perk;                                                        // 0x50(0x10)
	uint32_t                                      exp;                                                         // 0x60(0x04)
	char                                          UnknownData64[0x4];                                          // 0x64(0x04)
};

// ScriptStruct BravoHotelGame.G2C_FriendWhoAccept
// Size: 0x30 (Inherited: 0x00)
struct FG2C_FriendWhoAccept 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x20)
};

// ScriptStruct BravoHotelGame.G2C_FriendWhoAccept_Data
// Size: 0x20 (Inherited: 0x00)
struct FG2C_FriendWhoAccept_Data 
{
	struct FString                                inviteUid;                                                   // 0x00(0x10)
	struct FString                                invitePlayerName;                                            // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.G2C_FriendWhoInvite
// Size: 0x30 (Inherited: 0x00)
struct FG2C_FriendWhoInvite 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct F ��畦敳⧮䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳牐灯⽳潃獮牴捵楴湯䠯佌⽄彔䵓䌭湯牣瑥彥敓敷慲敧㄰䡟佌彄杓慂敫䵤瑡牥慩彬佌ㅄた䵟卒吮卟ⵍ潃据敲整卟睥牥条づ弱䱈䑏卟䉧歡摥慍整楲污䱟䑏弱弰前S᮸䜯浡iv_100 Data;                                                        // 0x10(0x20)
};

// ScriptStruct BravoHotelGame.G2C_FriendWhoInvite_Data
// Size: 0x20 (Inherited: 0x00)
struct FG2C_FriendWhoInvite_Data 
{
	struct FString                                FromUID;                                                     // 0x00(0x10)
	struct FString                                fromPlayerName;                                              // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoEnterLobby
// Size: 0x20 (Inherited: 0x00)
struct FG2C_PartyWhoEnterLobby 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoEnterLobby_Data
// Size: 0x10 (Inherited: 0x00)
struct FG2C_PartyWhoEnterLobby_Data 
{
	struct FString                                UID;                                                         // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.C2G_EnterLobby
// Size: 0x18 (Inherited: 0x00)
struct FC2G_EnterLobby 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x01)
	char                                          UnknownData11[0x7];                                          // 0x11(0x07)
};

// ScriptStruct BravoHotelGame.C2G_EnterLobby_Data
// Size: 0x01 (Inherited: 0x00)
struct FC2G_EnterLobby_Data 
{
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.G2C_FriendList
// Size: 0x20 (Inherited: 0x00)
struct FG2C_FriendList 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.G2C_FriendList_Data
// Size: 0x10 (Inherited: 0x00)
struct FG2C_FriendList_Data 
{
	struct TArray<None>                           friendInfoList;                                              // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.FriendInfo
// Size: 0x30 (Inherited: 0x00)
struct FFriendInfo 
{
	struct FString                                UID;                                                         // 0x00(0x10)
	struct FString                                player_name;                                                 // 0x10(0x10)
	struct FString                                status;                                                      // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.C2G_FriendList
// Size: 0x18 (Inherited: 0x00)
struct FC2G_FriendList 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x01)
	char                                          UnknownData11[0x7];                                          // 0x11(0x07)
};

// ScriptStruct BravoHotelGame.C2G_FriendList_Data
// Size: 0x01 (Inherited: 0x00)
struct FC2G_FriendList_Data 
{
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoUpdateTierID
// Size: 0x20 (Inherited: 0x00)
struct FG2C_PartyWhoUpdateTierID 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoUpdateTierID_Data
// Size: 0x10 (Inherited: 0x00)
struct FG2C_PartyWhoUpdateTierID_Data 
{
	struct TArray<None>                           party_who_update_tier_id;                                    // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoUpdateTierID_Array
// Size: 0x18 (Inherited: 0x00)
struct FG2C_PartyWhoUpdateTierID_Array 
{
	struct FString                                UID;                                                         // 0x00(0x10)
	uint32_t                                      tier_id;                                                     // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoPing
// Size: 0x28 (Inherited: 0x00)
struct FG2C_PartyWhoPing 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x18)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoPing_Data
// Size: 0x18 (Inherited: 0x00)
struct FG2C_PartyWhoPing_Data 
{
	struct FString                                UID;                                                         // 0x00(0x10)
	uint32_t                                      Ping;                                                        // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.C2G_PartyWhoPing
// Size: 0x18 (Inherited: 0x00)
struct FC2G_PartyWhoPing 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
};

// ScriptStruct BravoHotelGame.C2G_PartyWhoPing_Data
// Size: 0x04 (Inherited: 0x00)
struct FC2G_PartyWhoPing_Data 
{
	uint32_t                                      Ping;                                                        // 0x00(0x04)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoVoiceChat
// Size: 0x28 (Inherited: 0x00)
struct FG2C_PartyWhoVoiceChat 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x18)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoVoiceChat_Data
// Size: 0x18 (Inherited: 0x00)
struct FG2C_PartyWhoVoiceChat_Data 
{
	struct FString                                UID;                                                         // 0x00(0x10)
	char                                          is_voice_chat : 0;                                           // 0x10(0x01)
	char                                          UnknownData10[0x8];                                          // 0x10(0x08)
};

// ScriptStruct BravoHotelGame.C2G_PartyWhoVoiceChat
// Size: 0x18 (Inherited: 0x00)
struct FC2G_PartyWhoVoiceChat 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x01)
	char                                          UnknownData11[0x7];                                          // 0x11(0x07)
};

// ScriptStruct BravoHotelGame.C2G_PartyWhoVoiceChat_Data
// Size: 0x01 (Inherited: 0x00)
struct FC2G_PartyWhoVoiceChat_Data 
{
	char                                          is_voice_chat : 0;                                           // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoReady
// Size: 0x28 (Inherited: 0x00)
struct FG2C_PartyWhoReady 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x18)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoReady_Data
// Size: 0x18 (Inherited: 0x00)
struct FG2C_PartyWhoReady_Data 
{
	struct FString                                UID;                                                         // 0x00(0x10)
	char                                          is_ready : 0;                                                // 0x10(0x01)
	char                                          UnknownData10[0x8];                                          // 0x10(0x08)
};

// ScriptStruct BravoHotelGame.C2G_PartyWhoReady
// Size: 0x18 (Inherited: 0x00)
struct FC2G_PartyWhoReady 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x01)
	char                                          UnknownData11[0x7];                                          // 0x11(0x07)
};

// ScriptStruct BravoHotelGame.C2G_PartyWhoReady_Data
// Size: 0x01 (Inherited: 0x00)
struct FC2G_PartyWhoReady_Data 
{
	char                                          is_ready : 0;                                                // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.G2C_PartySelectMap
// Size: 0x48 (Inherited: 0x00)
struct FG2C_PartySelectMap 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x38)
};

// ScriptStruct BravoHotelGame.G2C_PartySelectMap_Data
// Size: 0x38 (Inherited: 0x00)
struct FG2C_PartySelectMap_Data 
{
	struct FString                                Mode;                                                        // 0x00(0x10)
	struct FString                                Map;                                                         // 0x10(0x10)
	char                                          itself : 0;                                                  // 0x20(0x01)
	char                                          UnknownData20[0x8];                                          // 0x20(0x08)
	struct FString                                person;                                                      // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.C2G_PartySelectMap
// Size: 0x48 (Inherited: 0x00)
struct FC2G_PartySelectMap 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x38)
};

// ScriptStruct BravoHotelGame.C2G_PartySelectMap_Data
// Size: 0x38 (Inherited: 0x00)
struct FC2G_PartySelectMap_Data 
{
	struct FString                                Mode;                                                        // 0x00(0x10)
	struct FString                                Map;                                                         // 0x10(0x10)
	char                                          itself : 0;                                                  // 0x20(0x01)
	char                                          UnknownData20[0x8];                                          // 0x20(0x08)
	struct FString                                person;                                                      // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.G2C_MatchCancel
// Size: 0x28 (Inherited: 0x00)
struct FG2C_MatchCancel 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x18)
};

// ScriptStruct BravoHotelGame.G2C_MatchCancel_Data
// Size: 0x18 (Inherited: 0x00)
struct FG2C_MatchCancel_Data 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.C2G_MatchCancel
// Size: 0x18 (Inherited: 0x00)
struct FC2G_MatchCancel 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x01)
	char                                          UnknownData11[0x7];                                          // 0x11(0x07)
};

// ScriptStruct BravoHotelGame.C2G_MatchCancel_Data
// Size: 0x01 (Inherited: 0x00)
struct FC2G_MatchCancel_Data 
{
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.G2C_MatchSuccess
// Size: 0x88 (Inherited: 0x00)
struct FG2C_MatchSuccess 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct F`InterfaceProperty ZMulticastDelegateProperty �LazyObjectProperty�SoftObjectPropertyBInt64Property vInt32Property PInt16Property 8Int8Property�UInt64Property�UInt32Property�UInt16Property�MapProperty �SetProperty &Core�Engine�Editor�CoreUObject  EnumProperty&Cylinder�BoxSphereBounds �Sphere� Box  Vector2D�IntRect <IntPoint�Vector4 Name�Vector�Rotator SHVectorrColor rPlane �Matrix�LinearColor AdvanceFrame�Pointer �DoubleQuatSelfFTransform Data;                                                        // 0x10(0x78)
};

// ScriptStruct BravoHotelGame.G2C_MatchSuccess_Data
// Size: 0x78 (Inherited: 0x00)
struct FG2C_MatchSuccess_Data 
{
	struct FString                                ds;                                                          // 0x00(0x10)
	struct FString                                Token;                                                       // 0x10(0x10)
	struct FString                                team_id;                                                     // 0x20(0x10)
	struct FString                                Key;                                                         // 0x30(0x10)
	uint32_t                                      how;                                                         // 0x40(0x04)
	char                                          UnknownData44[0x4];                                          // 0x44(0x04)
	struct FString                                player_session_id;                                           // 0x48(0x10)
	struct FString                                game_server_id;                                              // 0x58(0x10)
	struct FString                                match_making_tag;                                            // 0x68(0x10)
};

// ScriptStruct BravoHotelGame.G2C_MatchFail
// Size: 0x28 (Inherited: 0x00)
struct FG2C_MatchFail 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x18)
};

// ScriptStruct BravoHotelGame.G2C_MatchFail_Data
// Size: 0x18 (Inherited: 0x00)
struct FG2C_MatchFail_Data 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.G2C_MatchRequest
// Size: 0x48 (Inherited: 0x00)
struct FG2C_MatchRequest 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x38)
};

// ScriptStruct BravoHotelGame.G2C_MatchRequest_Data
// Size: 0x38 (Inherited: 0x00)
struct FG2C_MatchRequest_Data 
{
	struct FString                                person;                                                      // 0x00(0x10)
	struct FString                                Mode;                                                        // 0x10(0x10)
	struct FString                                Map;                                                         // 0x20(0x10)
	uint32_t                                      how;                                                         // 0x30(0x04)
	char                                          UnknownData34[0x4];                                          // 0x34(0x04)
};

// ScriptStruct BravoHotelGame.C2G_MatchRequest
// Size: 0x48 (Inherited: 0x00)
struct FC2G_MatchRequest 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x38)
};

// ScriptStruct BravoHotelGame.C2G_MatchRequest_Data
// Size: 0x38 (Inherited: 0x00)
struct FC2G_MatchRequest_Data 
{
	struct FString                                person;                                                      // 0x00(0x10)
	struct FString                                Mode;                                                        // 0x10(0x10)
	struct FString                                Map;                                                         // 0x20(0x10)
	uint32_t                                      how;                                                         // 0x30(0x04)
	char                                          UnknownData34[0x4];                                          // 0x34(0x04)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoMatchMakingTag
// Size: 0x30 (Inherited: 0x00)
struct FG2C_PartyWhoMatchMakingTag 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x20)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoMatchMakingTag_Data
// Size: 0x20 (Inherited: 0x00)
struct FG2C_PartyWhoMatchMakingTag_Data 
{
	struct FString                                UID;                                                         // 0x00(0x10)
	struct FString                                match_making_tag;                                            // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoOnline
// Size: 0x28 (Inherited: 0x00)
struct FG2C_PartyWhoOnline 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x18)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoOnline_Data
// Size: 0x18 (Inherited: 0x00)
struct FG2C_PartyWhoOnline_Data 
{
	struct FString                                UID;                                                         // 0x00(0x10)
	char                                          is_online : 0;                                               // 0x10(0x01)
	char                                          UnknownData10[0x8];                                          // 0x10(0x08)
};

// ScriptStruct BravoHotelGame.G2C_PartyClientStatus
// Size: 0x48 (Inherited: 0x00)
struct FG2C_PartyClientStatus 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x38)
};

// ScriptStruct BravoHotelGame.G2C_PartyClientStatus_Data
// Size: 0x38 (Inherited: 0x00)
struct FG2C_PartyClientStatus_Data 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FString                                uidStatus;                                                   // 0x18(0x10)
	struct FString                                clientStatus;                                                // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.C2G_PartyClientStatus
// Size: 0x20 (Inherited: 0x00)
struct FC2G_PartyClientStatus 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.C2G_PartyClientStatus_Data
// Size: 0x10 (Inherited: 0x00)
struct FC2G_PartyClientStatus_Data 
{
	struct FString                                clientStatus;                                                // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.G2C_PartyEntrustSomeone
// Size: 0x38 (Inherited: 0x00)
struct FG2C_PartyEntrustSomeone 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x28)
};

// ScriptStruct BravoHotelGame.G2C_PartyEntrustSomeone_Data
// Size: 0x28 (Inherited: 0x00)
struct FG2C_PartyEntrustSomeone_Data 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FString                                uidEntrusted;                                                // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.C2G_PartyEntrustSomeone
// Size: 0x20 (Inherited: 0x00)
struct FC2G_PartyEntrustSomeone 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.C2G_PartyEntrustSomeone_Data
// Size: 0x10 (Inherited: 0x00)
struct FC2G_PartyEntrustSomeone_Data 
{
	struct FString                                uidEntrusted;                                                // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.G2C_PartyKickSomeone
// Size: 0x38 (Inherited: 0x00)
struct FG2C_PartyKickSomeone 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FTextProperty_8                        Data;                                                        // 0x10(0x28)
};

// ScriptStruct BravoHotelGame.G2C_PartyKickSomeone_Data
// Size: 0x28 (Inherited: 0x00)
struct FG2C_PartyKickSomeone_Data 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FString                                D;                                                           // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.C2G_PartyKickSomeone
// Size: 0x20 (Inherited: 0x00)
struct FC2G_PartyKickSomeone 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.C2G_PartyKickSomeone_Data
// Size: 0x10 (Inherited: 0x00)
struct FC2G_PartyKickSomeone_Data 
{
	struct FString                                uidKicked;                                                   // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoLeaved
// Size: 0x30 (Inherited: 0x00)
struct FG2C_PartyWhoLeaved 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x20)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoLeaved_Data
// Size: 0x20 (Inherited: 0x00)
struct FG2C_PartyWhoLeaved_Data 
{
	struct FString                                uidLeaved;                                                   // 0x00(0x10)
	struct FString                                uidBoss;                                                     // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.G2C_PartyLeave
// Size: 0x28 (Inherited: 0x00)
struct FG2C_PartyLeave 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x18)
};

// ScriptStruct BravoHotelGame.G2C_PartyLeave_Data
// Size: 0x18 (Inherited: 0x00)
struct FG2C_PartyLeave_Data 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.C2G_PartyLeave
// Size: 0x18 (Inherited: 0x00)
struct FC2G_PartyLeave 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x01)
	char                                          UnknownData11[0x7];                                          // 0x11(0x07)
};

// ScriptStruct BravoHotelGame.C2G_PartyLeave_Data
// Size: 0x01 (Inherited: 0x00)
struct FC2G_PartyLeave_Data 
{
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.G2C_PartyWhoJoined
// Size: 0x70 (Inherited: 0x00)
struct FG2C_PartyWhoJoined 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x60)
};

// ScriptStruct BravoHotelGame.PartyUser
// Size: 0x60 (Inherited: 0x00)
struct FPartyUser 
{
	struct FString                                UID;                                                         // 0x00(0x10)
	struct FString                                playerName;                                                  // 0x10(0x10)
	char                                          UnknownData20_0 : 7;                                         // 0x20(0x01)
	char                                          IsReady : 1;                                                 // 0x20(0x01)
	char                                          UnknownData21_0 : 7;                                         // 0x21(0x01)
	char                                          IsOnline : 1;                                                // 0x21(0x01)
	char                                          UnknownData22_0 : 7;                                         // 0x22(0x01)
	char                                          IsVoiceChat : 1;                                             // 0x22(0x01)
	char                                          UnknownData23[0x5];                                          // 0x23(0x05)
	struct FString                                clientStatus;                                                // 0x28(0x10)
	uint32_t                                      SeasonTierID;                                                // 0x38(0x04)
	char                                          UnknownData3C[0x4];                                          // 0x3c(0x04)
	struct FString                                matchMakingTag;                                              // 0x40(0x10)
	struct FString                                steamID;                                                     // 0x50(0x10)
};

// ScriptStruct BravoHotelGame.G2C_PartyYouJoined
// Size: 0x80 (Inherited: 0x00)
struct FG2C_PartyYouJoined 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FBravoH_100                            Data;                                                        // 0x10(0x70)
};

// ScriptStruct BravoHotelGame.G2C_PartyYouJoined_Data
// Size: 0x70 (Inherited: 0x00)
struct FG2C_PartyYouJoined_Data 
{
	struct FNone                                  PartyInfo;                                                   // 0x00(0x68)
	char                                          is_invite : 0;                                               // 0x68(0x01)
	char                                          UnknownData68[0x8];                                          // 0x68(0x08)
};

// ScriptStruct BravoHotelGame.PartyInfo
// Size: 0x68 (Inherited: 0x00)
struct FPartyInfo 
{
	struct FString                                PartyID;                                                     // 0x00(0x10)
	struct FString                                uidBoss;                                                     // 0x10(0x10)
	struct TArray<None>                           partyUserList;                                               // 0x20(0x10)
	struct F ��桃牵档慄獩䅟坟也Ӱ塔䌭畨捲䑨楡彳彁彗N‌䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳畏却畯捲湩⽧㈰䍟浯汰瑡⽥㄰卟牴捵畴敲⽳䑖䍟畨捲と⼱敔瑸牵獥启ⵘ桃牵档慄獩䉟坟䅟吮ⵘ桃牵档慄獩䉟坟䅟ᬖ䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳畏却畯捲湩⽧㈰䍟浯汰瑡⽥_111 SelectedMapInfo;                                             // 0x30(0x38)
};

// ScriptStruct BravoHotelGame.SelectedMapInfo
// Size: 0x38 (Inherited: 0x00)
struct FSelectedMapInfo 
{
	struct FString                                Mode;                                                        // 0x00(0x10)
	struct FString                                Map;                                                         // 0x10(0x10)
	char                                          itself : 0;                                                  // 0x20(0x01)
	char                                          UnknownData20[0x8];                                          // 0x20(0x08)
	struct FString                                person;                                                      // 0x28(0x10)
};

// ScriptStruct BravoHotelGame.G2C_PartyAcceptFailed
// Size: 0x28 (Inherited: 0x00)
struct FG2C_PartyAcceptFailed 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x18)
};

// ScriptStruct BravoHotelGame.G2C_PartyAcceptFailed_Data
// Size: 0x18 (Inherited: 0x00)
struct FG2C_PartyAcceptFailed_Data 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
};

// ScriptStruct BravoHotelGame.C2G_PartyAccept
// Size: 0x20 (Inherited: 0x00)
struct FC2G_PartyAccept 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.C2G_PartyAccept_Data
// Size: 0x10 (Inherited: 0x00)
struct FC2G_PartyAccept_Data 
{
	struct FString                                partyTicket;                                                 // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.G2C_PartyInvited_From
// Size: 0x40 (Inherited: 0x00)
struct FG2C_PartyInvited_From 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct F ��畦敳⧮䜯浡⽥牂癡䡯瑯汥䔯癮物湯敭瑮⽳牐灯⽳潃獮牴捵楴湯䠯佌⽄彔䵓䌭湯牣瑥彥敓敷慲敧㄰䡟佌彄杓慂敫䵤瑡牥慩彬佌ㅄた䵟卒吮卟ⵍ潃据敲整卟睥牥条づ弱䱈䑏卟䉧歡摥慍整楲污䱟䑏弱弰前S᮸䜯浡iv_100 Data;                                                        // 0x10(0x30)
};

// ScriptStruct BravoHotelGame.G2C_PartyInvited_From_Data
// Size: 0x30 (Inherited: 0x00)
struct FG2C_PartyInvited_From_Data 
{
	struct FString                                partyTicket;                                                 // 0x00(0x10)
	struct FString                                FromUID;                                                     // 0x10(0x10)
	struct FString                                fromPlayerName;                                              // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.G2C_PartyInvite
// Size: 0x38 (Inherited: 0x00)
struct FG2C_PartyInvite 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x28)
};

// ScriptStruct BravoHotelGame.G2C_PartyInvite_Data
// Size: 0x28 (Inherited: 0x00)
struct FG2C_PartyInvite_Data 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FString                                toUid;                                                       // 0x18(0x10)
};

// ScriptStruct BravoHotelGame.C2G_PartyInvite
// Size: 0x20 (Inherited: 0x00)
struct FC2G_PartyInvite 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x10)
};

// ScriptStruct BravoHotelGame.C2G_PartyInvite_Data
// Size: 0x10 (Inherited: 0x00)
struct FC2G_PartyInvite_Data 
{
	struct FString                                toUid;                                                       // 0x00(0x10)
};

// ScriptStruct BravoHotelGame.G2C_Login
// Size: 0x88 (Inherited: 0x00)
struct FG2C_Login 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct FNone                                  Data;                                                        // 0x10(0x78)
};

// ScriptStruct BravoHotelGame.G2C_Login_Data
// Size: 0x78 (Inherited: 0x00)
struct FG2C_Login_Data 
{
	uint32_t                                      C;                                                           // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                E;                                                           // 0x08(0x10)
	struct FString                                D;                                                           // 0x18(0x10)
	struct FString                                UID;                                                         // 0x28(0x10)
	struct FString                                playerName;                                                  // 0x38(0x10)
	struct FString                                URL;                                                         // 0x48(0x10)
	char                                          isCanGoDedi : 0;                                             // 0x58(0x01)
	char                                          UnknownData58[0x8];                                          // 0x58(0x08)
	struct FString                                matchingOnOff;                                               // 0x60(0x10)
	char                                          isBattleModeSoloPossible : 0;                                // 0x70(0x01)
	char                                          UnknownData70[0x1];                                          // 0x70(0x01)
	char                                          isBattleModeDuoPossible : 0;                                 // 0x71(0x01)
	char                                          UnknownData71[0x1];                                          // 0x71(0x01)
	char                                          isBattleModeSquadPossible : 0;                               // 0x72(0x01)
	char                                          UnknownData72[0x1];                                          // 0x72(0x01)
	char                                          isWhiteIP : 0;                                               // 0x73(0x01)
	char                                          UnknownData73[0x1];                                          // 0x73(0x01)
	char                                          isGameViewTypeFPP : 0;                                       // 0x74(0x01)
	char                                          UnknownData74[0x1];                                          // 0x74(0x01)
	char                                          isGameViewTypeTPP : 0;                                       // 0x75(0x01)
	char                                          UnknownData75[0x3];                                          // 0x75(0x03)
};

// ScriptStruct BravoHotelGame.C2G_Login
// Size: 0x40 (Inherited: 0x00)
struct FC2G_Login 
{
	struct FString                                Type;                                                        // 0x00(0x10)
	struct F                                      Data;                                                        // 0x10(0x30)
};

// ScriptStruct BravoHotelGame.C2G_Login_Data
// Size: 0x30 (Inherited: 0x00)
struct FC2G_Login_Data 
{
	struct FString                                SessionID;                                                   // 0x00(0x10)
	struct FString                                AuthToken;                                                   // 0x10(0x10)
	struct FString                                match_making_tag;                                            // 0x20(0x10)
};

// ScriptStruct BravoHotelGame.DistributionRuleParams
// Size: 0x01 (Inherited: 0x00)
struct FDistributionRuleParams 
{
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.PrefabRuleParams
// Size: 0x01 (Inherited: 0x00)
struct FPrefabRuleParams 
{
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.ActorTagRuleParams
// Size: 0x01 (Inherited: 0x00)
struct FActorTagRuleParams 
{
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.QuadRuleParams
// Size: 0x01 (Inherited: 0x00)
struct FQuadRuleParams 
{
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.GridRuleParams
// Size: 0x01 (Inherited: 0x00)
struct FGridRuleParams 
{
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct BravoHotelGame.ReplicationItemInfo
// Size: 0x18 (Inherited: 0x00)
struct FReplicationItemInfo 
{
	char                                          UnknownData0[0x18];                                          // 0x00(0x18)
};

// ScriptStruct BravoHotelGame.RepClimbInfo
// Size: 0xd8 (Inherited: 0x00)
struct FRepClimbInfo 
{
	struct FNone                                  TargetPosition;                                              // 0x00(0x0c)
	struct FNone                                  WallNormal;                                                  // 0x0c(0x0c)
	float                                         HitHeight;                                                   // 0x18(0x04)
	float                                         WallThickness;                                               // 0x1c(0x04)
	struct FNone*                                 PlayMontage;                                                 // 0x20(0x08)
	char                                          bBreakWindow : 0;                                            // 0x28(0x01)
	char                                          UnknownData28[0x1];                                          // 0x28(0x01)
	char                                          bClimbOver : 0;                                              // 0x29(0x01)
	char                                          UnknownData29[0x1];                                          // 0x29(0x01)
	char                                          bSprint : 0;                                                 // 0x2a(0x01)
	char                                          UnknownData2A[0x1];                                          // 0x2a(0x01)
	char                                          bLedgeGrab : 0;                                              // 0x2b(0x01)
	char                                          UnknownData2B[0x1];                                          // 0x2b(0x01)
	char                                          bLedgeGrabBlocked : 0;                                       // 0x2c(0x01)
	char                                          UnknownData2C[0x4];                                          // 0x2c(0x04)
	struct FNone*                                 TargetComponent;                                             // 0x30(0x08)
	uint8_t                                       ClimbDataIndex;                                              // 0x38(0x01)
	char                                          UnknownData39[0x9f];                                         // 0x39(0x9f)
};

// ScriptStruct BravoHotelGame.ParkourEvent
// Size: 0x18 (Inherited: 0x00)
struct FParkourEvent 
{
	char                                          UnknownData0[0x18];                                          // 0x00(0x18)
};

// ScriptStruct BravoHotelGame.ChangeEquipResult
// Size: 0x0c (Inherited: 0x00)
struct FChangeEquipResult 
{
	char                                          Equip : 0;                                                   // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
	char                                          UnEquip : 0;                                                 // 0x01(0x01)
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
	struct FName                                  ItemKey;                                                     // 0x04(0x08)
};

// ScriptStruct BravoHotelGame.MaterialProperties
// Size: 0x10 (Inherited: 0x08)
struct FMaterialProperties : FTableRowBase 
{
	float                                         Toughness;                                                   // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
};

// ScriptStruct BravoHotelGame.STFloat
// Size: 0x40 (Inherited: 0x00)
struct FSTFloat 
{
	char                                          UnknownData0[0x40];                                          // 0x00(0x40)
};

// ScriptStruct BravoHotelGame.STInt
// Size: 0x40 (Inherited: 0x00)
struct FSTInt 
{
	char                                          UnknownData0[0x40];                                          // 0x00(0x40)
};

