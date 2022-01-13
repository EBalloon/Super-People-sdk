// Enum AkAudio.EAkCallbackType
enum class EAkCallbackType : uint8_t {
	EndOfEvent = 0,
	Marker = 2,
	Duration = 3,
	Starvation = 5,
	MusicPlayStarted = 7,
	MusicSyncBeat = 8,
	MusicSyncBar = 9,
	MusicSyncEntry = 10,
	MusicSyncExit = 11,
	MusicSyncGrid = 12,
	MusicSyncUserCue = 13,
	MusicSyncPoint = 14,
	MIDIEvent = 16,
	EAkCallbackType_MAX = 17,
};

// Enum AkAudio.EAkResult
enum class EAkResult : uint8_t {
	NotImplemented = 0,
	Success = 1,
	Fail = 2,
	PartialSuccess = 3,
	NotCompatible = 4,
	AlreadyConnected = 5,
	InvalidFile = 7,
	AudioFileHeaderTooLarge = 8,
	MaxReached = 9,
	InvalidID = 14,
	IDNotFound = 15,
	InvalidInstanceID = 16,
	NoMoreData = 17,
	InvalidStateGroup = 20,
	ChildAlreadyHasAParent = 21,
	InvalidLanguage = 22,
	CannotAddItseflAsAChild = 23,
	InvalidParameter = 31,
	ElementAlreadyInList = 35,
	PathNotFound = 36,
	PathNoVertices = 37,
	PathNotRunning = 38,
	PathNotPaused = 39,
	PathNodeAlreadyInList = 40,
	PathNodeNotInList = 41,
	DataNeeded = 43,
	NoDataNeeded = 44,
	DataReady = 45,
	NoDataReady = 46,
	InsufficientMemory = 52,
	Cancelled = 53,
	UnknownBankID = 54,
	BankReadError = 56,
	InvalidSwitchType = 57,
	FormatNotReady = 63,
	WrongBankVersion = 64,
	FileNotFound = 66,
	DeviceNotReady = 67,
	BankAlreadyLoaded = 69,
	RenderedFX = 71,
	ProcessNeeded = 72,
	ProcessDone = 73,
	MemManagerNotInitialized = 74,
	StreamMgrNotInitialized = 75,
	SSEInstructionsNotSupported = 76,
	Busy = 77,
	UnsupportedChannelConfig = 78,
	PluginMediaNotAvailable = 79,
	MustBeVirtualized = 80,
	CommandTooLarge = 81,
	RejectedByFilter = 82,
	InvalidCustomPlatformName = 83,
	DLLCannotLoad = 84,
	DLLPathNotFound = 85,
	NoJavaVM = 86,
	OpenSLError = 87,
	PluginNotRegistered = 88,
	DataAlignmentError = 89,
	EAkResult_MAX = 90,
};

// Enum AkAudio.EAkAndroidAudioAPI
enum class EAkAndroidAudioAPI : uint8_t {
	AAudio = 0,
	OpenSL_ES = 1,
	EAkAndroidAudioAPI_MAX = 2,
};

// Enum AkAudio.EAkAudioSessionMode
enum class EAkAudioSessionMode : uint8_t {
	Default = 0,
	VoiceChat = 1,
	GameChat = 2,
	VideoRecording = 3,
	Measurement = 4,
	MoviePlayback = 5,
	VideoChat = 6,
	EAkAudioSessionMode_MAX = 7,
};

// Enum AkAudio.EAkAudioSessionCategoryOptions
enum class EAkAudioSessionCategoryOptions : uint8_t {
	MixWithOthers = 0,
	DuckOthers = 1,
	AllowBluetooth = 2,
	DefaultToSpeaker = 3,
	EAkAudioSessionCategoryOptions_MAX = 4,
};

// Enum AkAudio.EAkAudioSessionCategory
enum class EAkAudioSessionCategory : uint8_t {
	Ambient = 0,
	SoloAmbient = 1,
	PlayAndRecord = 2,
	EAkAudioSessionCategory_MAX = 3,
};

// Enum AkAudio.EReflectionFilterBits
enum class EReflectionFilterBits : uint8_t {
	Wall = 0,
	Ceiling = 1,
	Floor = 2,
	EReflectionFilterBits_MAX = 3,
};

// Enum AkAudio.AkCodecId
enum class AkCodecId : uint8_t {
	None = 0,
	PCM = 1,
	ADPCM = 2,
	XMA = 3,
	Vorbis = 4,
	AAC = 10,
	ATRAC9 = 12,
	OpusNX = 17,
	AkOpus = 19,
	AkOpusWEM = 20,
	AkCodecId_MAX = 21,
};

// Enum AkAudio.EAkMidiCcValues
enum class EAkMidiCcValues : uint8_t {
	AkMidiCcBankSelectCoarse = 0,
	AkMidiCcModWheelCoarse = 1,
	AkMidiCcBreathCtrlCoarse = 2,
	AkMidiCcCtrl3Coarse = 3,
	AkMidiCcFootPedalCoarse = 4,
	AkMidiCcPortamentoCoarse = 5,
	AkMidiCcDataEntryCoarse = 6,
	AkMidiCcVolumeCoarse = 7,
	AkMidiCcBalanceCoarse = 8,
	AkMidiCcCtrl9Coarse = 9,
	AkMidiCcPanPositionCoarse = 10,
	AkMidiCcExpressionCoarse = 11,
	AkMidiCcEffectCtrl1Coarse = 12,
	AkMidiCcEffectCtrl2Coarse = 13,
	AkMidiCcCtrl14Coarse = 14,
	AkMidiCcCtrl15Coarse = 15,
	AkMidiCcGenSlider1 = 16,
	AkMidiCcGenSlider2 = 17,
	AkMidiCcGenSlider3 = 18,
	AkMidiCcGenSlider4 = 19,
	AkMidiCcCtrl20Coarse = 20,
	AkMidiCcCtrl21Coarse = 21,
	AkMidiCcCtrl22Coarse = 22,
	AkMidiCcCtrl23Coarse = 23,
	AkMidiCcCtrl24Coarse = 24,
	AkMidiCcCtrl25Coarse = 25,
	AkMidiCcCtrl26Coarse = 26,
	AkMidiCcCtrl27Coarse = 27,
	AkMidiCcCtrl28Coarse = 28,
	AkMidiCcCtrl29Coarse = 29,
	AkMidiCcCtrl30Coarse = 30,
	AkMidiCcCtrl31Coarse = 31,
	AkMidiCcBankSelectFine = 32,
	AkMidiCcModWheelFine = 33,
	AkMidiCcBreathCtrlFine = 34,
	AkMidiCcCtrl3Fine = 35,
	AkMidiCcFootPedalFine = 36,
	AkMidiCcPortamentoFine = 37,
	AkMidiCcDataEntryFine = 38,
	AkMidiCcVolumeFine = 39,
	AkMidiCcBalanceFine = 40,
	AkMidiCcCtrl9Fine = 41,
	AkMidiCcPanPositionFine = 42,
	AkMidiCcExpressionFine = 43,
	AkMidiCcEffectCtrl1Fine = 44,
	AkMidiCcEffectCtrl2Fine = 45,
	AkMidiCcCtrl14Fine = 46,
	AkMidiCcCtrl15Fine = 47,
	AkMidiCcCtrl20Fine = 52,
	AkMidiCcCtrl21Fine = 53,
	AkMidiCcCtrl22Fine = 54,
	AkMidiCcCtrl23Fine = 55,
	AkMidiCcCtrl24Fine = 56,
	AkMidiCcCtrl25Fine = 57,
	AkMidiCcCtrl26Fine = 58,
	AkMidiCcCtrl27Fine = 59,
	AkMidiCcCtrl28Fine = 60,
	AkMidiCcCtrl29Fine = 61,
	AkMidiCcCtrl30Fine = 62,
	AkMidiCcCtrl31Fine = 63,
	AkMidiCcHoldPedal = 64,
	AkMidiCcPortamentoOnOff = 65,
	AkMidiCcSustenutoPedal = 66,
	AkMidiCcSoftPedal = 67,
	AkMidiCcLegatoPedal = 68,
	AkMidiCcHoldPedal2 = 69,
	AkMidiCcSoundVariation = 70,
	AkMidiCcSoundTimbre = 71,
	AkMidiCcSoundReleaseTime = 72,
	AkMidiCcSoundAttackTime = 73,
	AkMidiCcSoundBrightness = 74,
	AkMidiCcSoundCtrl6 = 75,
	AkMidiCcSoundCtrl7 = 76,
	AkMidiCcSoundCtrl8 = 77,
	AkMidiCcSoundCtrl9 = 78,
	AkMidiCcSoundCtrl10 = 79,
	AkMidiCcGeneralButton1 = 80,
	AkMidiCcGeneralButton2 = 81,
	AkMidiCcGeneralButton3 = 82,
	AkMidiCcGeneralButton4 = 83,
	AkMidiCcReverbLevel = 91,
	AkMidiCcTremoloLevel = 92,
	AkMidiCcChorusLevel = 93,
	AkMidiCcCelesteLevel = 94,
	AkMidiCcPhaserLevel = 95,
	AkMidiCcDataButtonP1 = 96,
	AkMidiCcDataButtonM1 = 97,
	AkMidiCcNonRegisterCoarse = 98,
	AkMidiCcNonRegisterFine = 99,
	AkMidiCcAllSoundOff = 120,
	AkMidiCcAllControllersOff = 121,
	AkMidiCcLocalKeyboard = 122,
	AkMidiCcAllNotesOff = 123,
	AkMidiCcOmniModeOff = 124,
	AkMidiCcOmniModeOn = 125,
	AkMidiCcOmniMonophonicOn = 126,
	AkMidiCcOmniPolyphonicOn = 127,
	EAkMidiCcValues_MAX = 128,
};

// Enum AkAudio.EAkMidiEventType
enum class EAkMidiEventType : uint8_t {
	AkMidiEventTypeInvalid = 0,
	AkMidiEventTypeNoteOff = 128,
	AkMidiEventTypeNoteOn = 144,
	AkMidiEventTypeNoteAftertouch = 160,
	AkMidiEventTypeController = 176,
	AkMidiEventTypeProgramChange = 192,
	AkMidiEventTypeChannelAftertouch = 208,
	AkMidiEventTypePitchBend = 224,
	AkMidiEventTypeSysex = 240,
	AkMidiEventTypeEscape = 247,
	AkMidiEventTypeMeta = 255,
	EAkMidiEventType_MAX = 256,
};

// Enum AkAudio.ERTPCValueType
enum class ERTPCValueType : uint8_t {
	Default = 0,
	Global = 1,
	GameObject = 2,
	PlayingID = 3,
	Unavailable = 4,
	ERTPCValueType_MAX = 5,
};

// Enum AkAudio.EAkCurveInterpolation
enum class EAkCurveInterpolation : uint8_t {
	Log3 = 0,
	Sine = 1,
	Log1 = 2,
	InvSCurve = 3,
	Linear = 4,
	SCurve = 5,
	Exp1 = 6,
	SineRecip = 7,
	Exp3 = 8,
	LastFadeCurve = 8,
	Constant = 9,
	EAkCurveInterpolation_MAX = 10,
};

// Enum AkAudio.AkActionOnEventType
enum class AkActionOnEventType : uint8_t {
	Stop = 0,
	Pause = 1,
	Resume = 2,
	Break = 3,
	ReleaseEnvelope = 4,
	AkActionOnEventType_MAX = 5,
};

// Enum AkAudio.AkMultiPositionType
enum class AkMultiPositionType : uint8_t {
	SingleSource = 0,
	MultiSources = 1,
	MultiDirections = 2,
	AkMultiPositionType_MAX = 3,
};

// Enum AkAudio.AkSpeakerConfiguration
enum class AkSpeakerConfiguration : int32_t {
	Ak_Speaker_Front_Left = 1,
	Ak_Speaker_Front_Right = 2,
	Ak_Speaker_Front_Center = 4,
	Ak_Speaker_Low_Frequency = 8,
	Ak_Speaker_Back_Left = 16,
	Ak_Speaker_Back_Right = 32,
	Ak_Speaker_Back_Center = 256,
	Ak_Speaker_Side_Left = 512,
	Ak_Speaker_Side_Right = 1024,
	Ak_Speaker_Top = 2048,
	Ak_Speaker_Height_Front_Left = 4096,
	Ak_Speaker_Height_Front_Center = 8192,
	Ak_Speaker_Height_Front_Right = 16384,
	Ak_Speaker_Height_Back_Left = 32768,
	Ak_Speaker_Height_Back_Center = 65536,
	Ak_Speaker_Height_Back_Right = 131072,
	Ak_Speaker_MAX = 131073,
};

// Enum AkAudio.AkChannelConfiguration
enum class AkChannelConfiguration : uint8_t {
	Ak_Parent = 0,
	Ak_LFE = 1,
	Ak_1_1 = 2,
	Ak_2_1 = 3,
	Ak_2_2 = 4,
	Ak_3_1 = 5,
	Ak_3_2 = 6,
	Ak_4_1 = 7,
	Ak_4_2 = 8,
	Ak_5_1 = 9,
	Ak_5_2 = 10,
	Ak_7_2 = 11,
	Ak_5_1_3 = 12,
	Ak_7_1_3 = 13,
	Ak_7_1_5 = 14,
	Ak_Auro_9_2 = 15,
	Ak_Auro_10_2 = 16,
	Ak_Auro_11_2 = 17,
	Ak_Auro_13_2 = 18,
	Ak_Ambisonics_1st_order = 19,
	Ak_Ambisonics_2nd_order = 20,
	Ak_Ambisonics_3rd_order = 21,
	Ak_MAX = 22,
};

// Enum AkAudio.AkAcousticPortalState
enum class AkAcousticPortalState : uint8_t {
	Closed = 0,
	Open = 1,
	AkAcousticPortalState_MAX = 2,
};

// Enum AkAudio.PanningRule
enum class PanningRule : uint8_t {
	PanningRule_Speakers = 0,
	PanningRule_Headphones = 1,
	PanningRule_MAX = 2,
};

// Enum AkAudio.AkMeshType
enum class AkMeshType : uint8_t {
	StaticMesh = 0,
	CollisionMesh = 1,
	AkMeshType_MAX = 2,
};

// Enum AkAudio.EAkHololensAudioAPI
enum class EAkHololensAudioAPI : uint8_t {
	Wasapi = 0,
	XAudio2 = 1,
	DirectSound = 2,
	EAkHololensAudioAPI_MAX = 3,
};

// Enum AkAudio.EAkCommSystem
enum class EAkCommSystem : uint8_t {
	Socket = 0,
	HTCS = 1,
	EAkCommSystem_MAX = 2,
};

// Enum AkAudio.EAkChannelMask
enum class EAkChannelMask : uint8_t {
	FrontLeft = 0,
	FrontRight = 1,
	FrontCenter = 2,
	LowFrequency = 3,
	BackLeft = 4,
	BackRight = 5,
	BackCenter = 8,
	SideLeft = 9,
	SideRight = 10,
	Top = 11,
	HeightFrontLeft = 12,
	HeightFrontCenter = 13,
	HeightFrontRight = 14,
	HeightBackLeft = 15,
	HeightBackCenter = 16,
	HeightBackRight = 17,
	EAkChannelMask_MAX = 18,
};

// Enum AkAudio.EAkChannelConfigType
enum class EAkChannelConfigType : uint8_t {
	Anonymous = 0,
	Standard = 1,
	Ambisonic = 2,
	EAkChannelConfigType_MAX = 3,
};

// Enum AkAudio.EAkDiffractionFlags
enum class EAkDiffractionFlags : uint8_t {
	UseBuiltInParam = 0,
	UseObstruction = 1,
	CalcEmitterVirtualPosition = 3,
	EAkDiffractionFlags_MAX = 4,
};

// Enum AkAudio.EAkPanningRule
enum class EAkPanningRule : uint8_t {
	Speakers = 0,
	Headphones = 1,
	EAkPanningRule_MAX = 2,
};

// Enum AkAudio.EAkWindowsAudioAPI
enum class EAkWindowsAudioAPI : uint8_t {
	Wasapi = 0,
	XAudio2 = 1,
	DirectSound = 2,
	EAkWindowsAudioAPI_MAX = 3,
};

// Class AkAudio.AkAcousticPortal
class AAkAcousticPortal : public AVolume {

public:

	enum class AkAcousticPortalState InitialState; // 0x350 (1)
	float ObstructionRefreshInterval; // 0x354 (4)
	char ObstructionCollisionChannel; // 0x358 (1)

	void OpenPortal(); // Function AkAudio.AkAcousticPortal.OpenPortal(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1611660>
	enum class AkAcousticPortalState GetCurrentState(); // Function AkAudio.AkAcousticPortal.GetCurrentState(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1611230>
	void ClosePortal(); // Function AkAudio.AkAcousticPortal.ClosePortal(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1611120>
};

// Class AkAudio.AkAudioType
class UAkAudioType : public Object {

public:

	uint32_t ShortID; // 0x28 (4)
	struct TArray<struct Object> UserData; // 0x30 (16)
};

// Class AkAudio.AkAmbientSound
class AAkAmbientSound : public UActor {

public:

	struct UAkAudioEvent AkAudioEvent; // 0x318 (8)
	struct UAkComponent AkComponent; // 0x320 (8)
	char StopWhenOwnerIsDestroyed : 0; // 0x328 (1)
	char AutoPost : 0; // 0x329 (1)

	void StopAmbientSound(); // Function AkAudio.AkAmbientSound.StopAmbientSound(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16128A0>
	void StartAmbientSound(); // Function AkAudio.AkAmbientSound.StartAmbientSound(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1612880>
};

// Class AkAudio.AkAndroidInitializationSettings
class UAkAndroidInitializationSettings : public Object {

public:

	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28 (104)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90 (40)
	struct FAkAndroidAdvancedInitializationSettings AdvancedSettings; // 0xB8 (64)

	void MigrateMultiCoreRendering(char NewValue); // Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16115E0>
};

// Class AkAudio.AkAssetData
class UAkAssetData : public Object {

public:

	uint32_t CachedHash; // 0x28 (4)
};

// Class AkAudio.AkAssetDataWithMedia
class UAkAssetDataWithMedia : public UAkAssetData {

public:

	struct TArray<struct UAkMediaAsset> MediaList; // 0x60 (16)
};

// Class AkAudio.AkAssetPlatformData
class UAkAssetPlatformData : public Object {

public:

	struct UAkAssetData CurrentAssetData; // 0x28 (8)
};

// Class AkAudio.AkAssetBase
class UAkAssetBase : public UAkAudioType {

public:

	struct UAkAssetPlatformData PlatformAssetData; // 0x40 (8)
};

// Class AkAudio.AkAudioBank
class UAkAudioBank : public UAkAssetBase {

public:

	char AutoLoad : 0; // 0x50 (1)
	struct TMap<struct FString, struct TSoftObjectPtr<UAkAssetPlatformData>> LocalizedPlatformAssetDataMap; // 0x58 (80)
	struct TSet<struct TSoftObjectPtr<UAkAudioEvent>> LinkedAkEvents; // 0xA8 (80)
	struct UAkAssetPlatformData CurrentLocalizedPlatformAssetData; // 0xF8 (8)
};

// Class AkAudio.AkAssetDataSwitchContainerData
class UAkAssetDataSwitchContainerData : public Object {

public:

	struct TSoftObjectPtr<UAkGroupValue> GroupValue; // 0x28 (40)
	struct UAkGroupValue DefaultGroupValue; // 0x50 (8)
	struct TArray<struct UAkMediaAsset> MediaList; // 0x58 (16)
	struct TArray<struct UAkAssetDataSwitchContainerData> Children; // 0x68 (16)
};

// Class AkAudio.AkAssetDataSwitchContainer
class UAkAssetDataSwitchContainer : public UAkAssetDataWithMedia {

public:

	struct TArray<struct UAkAssetDataSwitchContainerData> SwitchContainers; // 0x70 (16)
	struct UAkGroupValue DefaultGroupValue; // 0x80 (8)
};

// Class AkAudio.AkAudioEventData
class UAkAudioEventData : public UAkAssetDataSwitchContainer {

public:

	float MaxAttenuationRadius; // 0x88 (4)
	char IsInfinite : 0; // 0x8C (1)
	float MinimumDuration; // 0x90 (4)
	float MaximumDuration; // 0x94 (4)
	struct TMap<struct FString, struct UAkAssetDataSwitchContainer> LocalizedMedia; // 0x98 (80)
	struct TSet<struct UAkAudioEvent> PostedEvents; // 0xE8 (80)
	struct TSet<struct UAkAuxBus> UserDefinedSends; // 0x138 (80)
	struct TSet<struct UAkTrigger> PostedTriggers; // 0x188 (80)
	struct TSet<struct UAkGroupValue> GroupValues; // 0x1D8 (80)
};

// Class AkAudio.AkAudioEvent
class UAkAudioEvent : public UAkAssetBase {

public:

	struct TMap<struct FString, struct TSoftObjectPtr<UAkAssetPlatformData>> LocalizedPlatformAssetDataMap; // 0x50 (80)
	struct UAkAudioBank RequiredBank; // 0xA0 (8)
	struct UAkAssetPlatformData CurrentLocalizedPlatformData; // 0xB0 (8)
	float MaxAttenuationRadius; // 0xB8 (4)
	char IsInfinite : 0; // 0xBC (1)
	float MinimumDuration; // 0xC0 (4)
	float MaximumDuration; // 0xC4 (4)

	float GetMinimumDuration(); // Function AkAudio.AkAudioEvent.GetMinimumDuration(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16112F0>
	float GetMaximumDuration(); // Function AkAudio.AkAudioEvent.GetMaximumDuration(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16112C0>
	float GetMaxAttenuationRadius(); // Function AkAudio.AkAudioEvent.GetMaxAttenuationRadius(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1611290>
	char GetIsInfinite(); // Function AkAudio.AkAudioEvent.GetIsInfinite(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1611260>
};

// Class AkAudio.AkGameObject
class UAkGameObject : public USceneComponent {

public:

	struct UAkAudioEvent AkAudioEvent; // 0x230 (8)
	struct FString EventName; // 0x238 (16)
	char bAutoRegisterWithWwise : 0; // 0x248 (1)

	void Stop(); // Function AkAudio.AkGameObject.Stop(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16178C0>
	void PostAssociatedAkEventAsync(struct Object WorldContextObject, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo, int32_t& PlayingID); // Function AkAudio.AkGameObject.PostAssociatedAkEventAsync(BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1615880>
	int32_t PostAssociatedAkEvent(int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources); // Function AkAudio.AkGameObject.PostAssociatedAkEvent(BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16156E0>
	void PostAkEventAsync(struct Object WorldContextObject, struct UAkAudioEvent AkEvent, int32_t& PlayingID, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameObject.PostAkEventAsync(BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1614F40>
	int32_t PostAkEvent(struct UAkAudioEvent AkEvent, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FString in_EventName); // Function AkAudio.AkGameObject.PostAkEvent(BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1614D10>
};

// Class AkAudio.AkComponent
class UAkComponent : public UAkGameObject {

public:

	char bUseSpatialAudio : 0; // 0x250 (1)
	char OcclusionCollisionChannel; // 0x258 (1)
	char EnableSpotReflectors : 0; // 0x25C (1)
	struct UAkAuxBus EarlyReflectionAuxBus; // 0x260 (8)
	struct FString EarlyReflectionAuxBusName; // 0x268 (16)
	int32_t EarlyReflectionOrder; // 0x278 (4)
	float EarlyReflectionBusSendGain; // 0x27C (4)
	float EarlyReflectionMaxPathLength; // 0x280 (4)
	float roomReverbAuxBusGain; // 0x284 (4)
	int32_t diffractionMaxEdges; // 0x288 (4)
	int32_t diffractionMaxPaths; // 0x28C (4)
	float diffractionMaxPathLength; // 0x290 (4)
	char DrawFirstOrderReflections : 0; // 0x294 (1)
	char DrawSecondOrderReflections : 0; // 0x294 (1)
	char DrawHigherOrderReflections : 0; // 0x294 (1)
	char DrawDiffraction : 0; // 0x294 (1)
	char StopWhenOwnerDestroyed : 0; // 0x298 (1)
	float RoomIterationInterval; // 0x29C (4)
	float AttenuationScalingFactor; // 0x2A0 (4)
	float OcclusionRefreshInterval; // 0x2A4 (4)
	char bUseReverbVolumes : 0; // 0x2A8 (1)
	struct TSet<struct UAkComponent> Listeners; // 0x398 (80)
	struct TSet<struct UAkComponent> Emitters; // 0x3E8 (80)

	void UseReverbVolumes(char inUseReverbVolumes); // Function AkAudio.AkComponent.UseReverbVolumes(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1612AA0>
	void UseEarlyReflections(struct UAkAuxBus AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, char SpotReflectors, struct FString AuxBusName); // Function AkAudio.AkComponent.UseEarlyReflections(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16128C0>
	void SetSwitch(struct UAkSwitchValue SwitchValue, struct FString SwitchGroup, struct FString SwitchState); // Function AkAudio.AkComponent.SetSwitch(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16126B0>
	void SetStopWhenOwnerDestroyed(char bStopWhenOwnerDestroyed); // Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1612620>
	void SetRTPCValue(struct UAkRtpc RTPCValue, float Value, int32_t InterpolationTimeMs, struct FString RTPC); // Function AkAudio.AkComponent.SetRTPCValue(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1612470>
	void SetOutputBusVolume(float BusVolume); // Function AkAudio.AkComponent.SetOutputBusVolume(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16123F0>
	void SetListeners(struct TArray<struct UAkComponent>& Listeners); // Function AkAudio.AkComponent.SetListeners(Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1612340>
	void SetEarlyReflectionsVolume(float SendVolume); // Function AkAudio.AkComponent.SetEarlyReflectionsVolume(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1612230>
	void SetEarlyReflectionsAuxBus(struct FString AuxBusName); // Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1612190>
	void SetAttenuationScalingFactor(float Value); // Function AkAudio.AkComponent.SetAttenuationScalingFactor(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1612090>
	void PostTrigger(struct UAkTrigger TriggerValue, struct FString Trigger); // Function AkAudio.AkComponent.PostTrigger(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1611E20>
	void PostAssociatedAkEventAndWaitForEndAsync(int32_t& PlayingID, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1611C50>
	int32_t PostAssociatedAkEventAndWaitForEnd(struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1611AF0>
	int32_t PostAkEventByName(struct FString in_EventName); // Function AkAudio.AkComponent.PostAkEventByName(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1611A40>
	void PostAkEventAndWaitForEndAsync(struct UAkAudioEvent AkEvent, int32_t& PlayingID, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1611870>
	int32_t PostAkEventAndWaitForEnd(struct UAkAudioEvent AkEvent, struct FString in_EventName, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAkEventAndWaitForEnd(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1611680>
	void GetRTPCValue(struct UAkRtpc RTPCValue, enum class ERTPCValueType InputValueType, float& Value, enum class ERTPCValueType& OutputValueType, struct FString RTPC, int32_t PlayingID); // Function AkAudio.AkComponent.GetRTPCValue(Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1611320>
	float GetAttenuationRadius(); // Function AkAudio.AkComponent.GetAttenuationRadius(Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16111D0>
};

// Class AkAudio.AkAuxBus
class UAkAuxBus : public UAkAssetBase {

public:

	struct UAkAudioBank RequiredBank; // 0x50 (8)
};

// Class AkAudio.AkCheckBox
class UAkCheckBox : public UContentWidget {

public:

	enum class ECheckBoxState CheckedState; // 0x4D0 (1)
	struct FDelegate CheckedStateDelegate; // 0x4D4 (16)
	struct FCheckBoxStyle WidgetStyle; // 0x4E8 (1408)
	char HorizontalAlignment; // 0xA68 (1)
	char IsFocusable : 0; // 0xA69 (1)
	struct FAkBoolPropertyToControl ThePropertyToControl; // 0xA70 (16)
	struct FAkWwiseItemToControl ItemToControl; // 0xA80 (64)
	struct FMulticastInlineDelegate AkOnCheckStateChanged; // 0xAC0 (16)
	struct FMulticastInlineDelegate OnItemDropped; // 0xAD0 (16)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0xAE0 (16)

	void SetIsChecked(char InIsChecked); // Function AkAudio.AkCheckBox.SetIsChecked(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16122B0>
	void SetCheckedState(enum class ECheckBoxState InCheckedState); // Function AkAudio.AkCheckBox.SetCheckedState(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1612110>
	void SetAkItemId(struct FGuid& ItemId); // Function AkAudio.AkCheckBox.SetAkItemId(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1611FF0>
	void SetAkBoolProperty(struct FString ItemProperty); // Function AkAudio.AkCheckBox.SetAkBoolProperty(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1611F50>
	char IsPressed(); // Function AkAudio.AkCheckBox.IsPressed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16115B0>
	char IsChecked(); // Function AkAudio.AkCheckBox.IsChecked(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1611580>
	enum class ECheckBoxState GetCheckedState(); // Function AkAudio.AkCheckBox.GetCheckedState(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1611200>
	struct FString GetAkProperty(); // Function AkAudio.AkCheckBox.GetAkProperty(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1611180>
	struct FGuid GetAkItemId(); // Function AkAudio.AkCheckBox.GetAkItemId(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1611140>
};

// Class AkAudio.AkFolder
class UAkFolder : public UAkAudioType {

public:

	struct FString UnrealFolderPath; // 0x40 (16)
	struct FString WwiseFolderPath; // 0x50 (16)
};

// Class AkAudio.AkCallbackInfo
class UAkCallbackInfo : public Object {

public:

	struct UAkComponent AkComponent; // 0x28 (8)
};

// Class AkAudio.AkEventCallbackInfo
class UAkEventCallbackInfo : public UAkCallbackInfo {

public:

	int32_t PlayingID; // 0x30 (4)
	int32_t EventID; // 0x34 (4)
};

// Class AkAudio.AkMarkerCallbackInfo
class UAkMarkerCallbackInfo : public UAkEventCallbackInfo {

public:

	int32_t Identifier; // 0x38 (4)
	int32_t Position; // 0x3C (4)
	struct FString Label; // 0x40 (16)
};

// Class AkAudio.AkDurationCallbackInfo
class UAkDurationCallbackInfo : public UAkEventCallbackInfo {

public:

	float Duration; // 0x38 (4)
	float EstimatedDuration; // 0x3C (4)
	int32_t AudioNodeID; // 0x40 (4)
	int32_t MediaID; // 0x44 (4)
	char bStreaming : 0; // 0x48 (1)
};

// Class AkAudio.AkMusicSyncCallbackInfo
class UAkMusicSyncCallbackInfo : public UAkCallbackInfo {

public:

	int32_t PlayingID; // 0x30 (4)
	struct FAkSegmentInfo SegmentInfo; // 0x34 (36)
	enum class EAkCallbackType MusicSyncType; // 0x58 (1)
	struct FString UserCueName; // 0x60 (16)
};

// Class AkAudio.AkGeometryComponent
class UAkGeometryComponent : public USceneComponent {

public:

	enum class AkMeshType MeshType; // 0x230 (1)
	int32_t LOD; // 0x234 (4)
	float WeldingThreshold; // 0x238 (4)
	struct TMap<struct UMaterialInterface, struct FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride; // 0x240 (80)
	struct FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride; // 0x290 (16)
	char bEnableDiffraction : 0; // 0x2A0 (1)
	char bEnableDiffractionOnBoundaryEdges : 0; // 0x2A0 (1)
	struct UActor AssociatedRoom; // 0x2A8 (8)
	struct FAkGeometryData GeometryData; // 0x2C0 (80)

	void UpdateGeometry(); // Function AkAudio.AkGeometryComponent.UpdateGeometry(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x161D170>
	void RemoveGeometry(); // Function AkAudio.AkGeometryComponent.RemoveGeometry(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x161D150>
	void ConvertMesh(); // Function AkAudio.AkGeometryComponent.ConvertMesh(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x161CB50>
};

// Class AkAudio.AkGroupValue
class UAkGroupValue : public UAkAudioType {

public:

	struct TArray<struct TSoftObjectPtr<UAkMediaAsset>> MediaDependencies; // 0x40 (16)
	uint32_t GroupShortID; // 0x50 (4)
};

// Class AkAudio.AkHololensInitializationSettings
class UAkHololensInitializationSettings : public Object {

public:

	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28 (104)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90 (40)
	struct FAkHololensAdvancedInitializationSettings AdvancedSettings; // 0xB8 (64)

	void MigrateMultiCoreRendering(char NewValue); // Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16115E0>
};

// Class AkAudio.AkInitBankAssetData
class UAkInitBankAssetData : public UAkAssetDataWithMedia {

public:

	struct TArray<struct FAkPluginInfo> PluginInfos; // 0x70 (16)
};

// Class AkAudio.AkInitBank
class UAkInitBank : public UAkAssetBase {

public:

	struct TArray<struct FString> AvailableAudioCultures; // 0x50 (16)
	struct FString DefaultLanguage; // 0x60 (16)
};

// Class AkAudio.AkIOSInitializationSettings
class UAkIOSInitializationSettings : public Object {

public:

	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28 (104)
	struct FAkAudioSession AudioSession; // 0x90 (12)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xA0 (40)
	struct FAkAdvancedInitializationSettings AdvancedSettings; // 0xC8 (52)
};

// Class AkAudio.AkItemBoolProperties
class UAkItemBoolProperties : public UWidget {

public:

	struct FMulticastInlineDelegate OnSelectionChanged; // 0x108 (16)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x118 (16)

	void SetSearchText(struct FString newText); // Function AkAudio.AkItemBoolProperties.SetSearchText(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1623DB0>
	struct FString GetSelectedProperty(); // Function AkAudio.AkItemBoolProperties.GetSelectedProperty(Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1623C30>
	struct FString GetSearchText(); // Function AkAudio.AkItemBoolProperties.GetSearchText(Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1623BB0>
};

// Class AkAudio.AkItemProperties
class UAkItemProperties : public UWidget {

public:

	struct FMulticastInlineDelegate OnSelectionChanged; // 0x108 (16)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x118 (16)

	void SetSearchText(struct FString newText); // Function AkAudio.AkItemProperties.SetSearchText(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1623DB0>
	struct FString GetSelectedProperty(); // Function AkAudio.AkItemProperties.GetSelectedProperty(Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1623CB0>
	struct FString GetSearchText(); // Function AkAudio.AkItemProperties.GetSearchText(Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1623BB0>
};

// Class AkAudio.AkLateReverbComponent
class UAkLateReverbComponent : public USceneComponent {

public:

	char bEnable : 0; // 0x230 (1)
	struct UAkAuxBus AuxBus; // 0x238 (8)
	struct FString AuxBusName; // 0x240 (16)
	float SendLevel; // 0x250 (4)
	float FadeRate; // 0x254 (4)
	float Priority; // 0x258 (4)
	struct UAkLateReverbComponent NextLowerPriorityComponent; // 0x260 (8)
};

// Class AkAudio.AkLinuxInitializationSettings
class UAkLinuxInitializationSettings : public Object {

public:

	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28 (104)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90 (40)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xB8 (56)

	void MigrateMultiCoreRendering(char NewValue); // Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16115E0>
};

// Class AkAudio.AkLuminInitializationSettings
class UAkLuminInitializationSettings : public Object {

public:

	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28 (104)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90 (40)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xB8 (56)

	void MigrateMultiCoreRendering(char NewValue); // Function AkAudio.AkLuminInitializationSettings.MigrateMultiCoreRendering(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16115E0>
};

// Class AkAudio.AkMacInitializationSettings
class UAkMacInitializationSettings : public Object {

public:

	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28 (104)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90 (40)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xB8 (56)

	void MigrateMultiCoreRendering(char NewValue); // Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16115E0>
};

// Class AkAudio.AkMediaAssetData
class UAkMediaAssetData : public Object {

public:

	char IsStreamed : 0; // 0x28 (1)
	char UseDeviceMemory : 0; // 0x29 (1)
};

// Class AkAudio.AkMediaAsset
class UAkMediaAsset : public Object {

public:

	uint32_t ID; // 0x28 (4)
	char AutoLoad : 0; // 0x2C (1)
	struct TArray<struct Object> UserData; // 0x30 (16)
	struct UAkMediaAssetData CurrentMediaAssetData; // 0x40 (8)
};

// Class AkAudio.AkPS4InitializationSettings
class UAkPS4InitializationSettings : public Object {

public:

	struct FAkCommonInitializationSettings CommonSettings; // 0x28 (96)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x88 (40)
	struct FAkPS4AdvancedInitializationSettings AdvancedSettings; // 0xB0 (64)

	void MigrateMultiCoreRendering(char NewValue); // Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1623D30>
};

// Class AkAudio.AkReverbVolume
class AAkReverbVolume : public AVolume {

public:

	char bEnabled : 0; // 0x350 (1)
	struct UAkAuxBus AuxBus; // 0x358 (8)
	struct FString AuxBusName; // 0x360 (16)
	float SendLevel; // 0x370 (4)
	float FadeRate; // 0x374 (4)
	float Priority; // 0x378 (4)
	struct UAkLateReverbComponent LateReverbComponent; // 0x380 (8)
};

// Class AkAudio.AkRoomComponent
class UAkRoomComponent : public UAkGameObject {

public:

	char bEnable : 0; // 0x250 (1)
	struct UAkRoomComponent NextLowerPriorityComponent; // 0x258 (8)
	float Priority; // 0x260 (4)
	float WallOcclusion; // 0x264 (4)
	float AuxSendLevel; // 0x268 (4)
	char AutoPost : 0; // 0x26C (1)
};

// Class AkAudio.AkSettings
class UAkSettings : public Object {

public:

	char MaxSimultaneousReverbVolumes; // 0x28 (1)
	struct FFilePath WwiseProjectPath; // 0x30 (16)
	struct FDirectoryPath WwiseSoundDataFolder; // 0x40 (16)
	char bAutoConnectToWAAPI : 0; // 0x50 (1)
	char DefaultOcclusionCollisionChannel; // 0x51 (1)
	struct TMap<struct TSoftObjectPtr<UPhysicalMaterial>, struct FAkGeometrySurfacePropertiesToMap> AkGeometryMap; // 0x58 (80)
	char SplitSwitchContainerMedia : 0; // 0xA8 (1)
	char SplitMediaPerFolder : 0; // 0xA9 (1)
	char UseEventBasedPackaging : 0; // 0xAA (1)
	char EnableAutomaticAssetSynchronization : 0; // 0xAB (1)
	struct TSoftClassPtr<UObject> ComponentClass; // 0xB0 (40)
	struct FString CommandletCommitMessage; // 0xD8 (16)
	struct TMap<struct FString, struct FString> UnrealCultureToWwiseCulture; // 0xE8 (80)
	char AskedToUseNewAssetManagement : 0; // 0x138 (1)
	char bEnableMultiCoreRendering : 0; // 0x139 (1)
	char MigratedEnableMultiCoreRendering : 0; // 0x13A (1)
	char FixupRedirectorsDuringMigration : 0; // 0x13B (1)
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x140 (16)
	struct FFilePath WwiseMacInstallationPath; // 0x150 (16)
};

// Class AkAudio.AkSettingsPerUser
class UAkSettingsPerUser : public Object {

public:

	struct FFilePath WwiseProjectPath; // 0x28 (16)
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x38 (16)
	struct FFilePath WwiseMacInstallationPath; // 0x48 (16)
	char EnableAutomaticAssetSynchronization : 0; // 0x58 (1)
	struct FString WaapiIPAddress; // 0x60 (16)
	uint32_t WaapiPort; // 0x70 (4)
	char bAutoConnectToWAAPI : 0; // 0x74 (1)
	char AutoSyncSelection : 0; // 0x75 (1)
	char SuppressWwiseProjectPathWarnings : 0; // 0x76 (1)
	char SoundDataGenerationSkipLanguage : 0; // 0x77 (1)
};

// Class AkAudio.AkSlider
class UAkSlider : public UWidget {

public:

	float Value; // 0x108 (4)
	struct FDelegate ValueDelegate; // 0x10C (16)
	struct FSliderStyle WidgetStyle; // 0x120 (832)
	char Orientation; // 0x460 (1)
	struct FLinearColor SliderBarColor; // 0x464 (16)
	struct FLinearColor SliderHandleColor; // 0x474 (16)
	char IndentHandle : 0; // 0x484 (1)
	char Locked : 0; // 0x485 (1)
	float StepSize; // 0x488 (4)
	char IsFocusable : 0; // 0x48C (1)
	struct FAkPropertyToControl ThePropertyToControl; // 0x490 (16)
	struct FAkWwiseItemToControl ItemToControl; // 0x4A0 (64)
	struct FMulticastInlineDelegate OnValueChanged; // 0x4E0 (16)
	struct FMulticastInlineDelegate OnItemDropped; // 0x4F0 (16)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0x500 (16)

	void SetValue(float InValue); // Function AkAudio.AkSlider.SetValue(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1627FB0>
	void SetStepSize(float InValue); // Function AkAudio.AkSlider.SetStepSize(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1627E60>
	void SetSliderHandleColor(struct FLinearColor InValue); // Function AkAudio.AkSlider.SetSliderHandleColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1627DE0>
	void SetSliderBarColor(struct FLinearColor InValue); // Function AkAudio.AkSlider.SetSliderBarColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1627D60>
	void SetLocked(char InValue); // Function AkAudio.AkSlider.SetLocked(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1627CD0>
	void SetIndentHandle(char InValue); // Function AkAudio.AkSlider.SetIndentHandle(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1627C40>
	void SetAkSliderItemProperty(struct FString ItemProperty); // Function AkAudio.AkSlider.SetAkSliderItemProperty(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1627BA0>
	void SetAkSliderItemId(struct FGuid& ItemId); // Function AkAudio.AkSlider.SetAkSliderItemId(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1627B00>
	float GetValue(); // Function AkAudio.AkSlider.GetValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1627930>
	struct FString GetAkSliderItemProperty(); // Function AkAudio.AkSlider.GetAkSliderItemProperty(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1627850>
	struct FGuid GetAkSliderItemId(); // Function AkAudio.AkSlider.GetAkSliderItemId(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1627810>
};

// Class AkAudio.AkSpatialAudioVolume
class AAkSpatialAudioVolume : public AVolume {

public:

	struct UAkSurfaceReflectorSetComponent SurfaceReflectorSet; // 0x350 (8)
	struct UAkLateReverbComponent LateReverb; // 0x358 (8)
	struct UAkRoomComponent Room; // 0x360 (8)
};

// Class AkAudio.AkSpotReflector
class AAkSpotReflector : public UActor {

public:

	struct UAkAuxBus EarlyReflectionAuxBus; // 0x318 (8)
	struct FString EarlyReflectionAuxBusName; // 0x320 (16)
	struct UAkAcousticTexture AcousticTexture; // 0x330 (8)
	float DistanceScalingFactor; // 0x338 (4)
	float Level; // 0x33C (4)
};

// Class AkAudio.AkSurfaceReflectorSetComponent
class UAkSurfaceReflectorSetComponent : public USceneComponent {

public:

	char bEnableSurfaceReflectors : 0; // 0x230 (1)
	struct TArray<struct FAkPoly> AcousticPolys; // 0x238 (16)
	char bEnableDiffraction : 0; // 0x248 (1)
	char bEnableDiffractionOnBoundaryEdges : 0; // 0x248 (1)
	struct UActor AssociatedRoom; // 0x250 (8)

	void UpdateSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16283D0>
	void SendSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1627AE0>
	void RemoveSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1627AC0>
};

// Class AkAudio.AkSwitchInitializationSettings
class UAkSwitchInitializationSettings : public Object {

public:

	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28 (104)
	struct FAkCommunicationSettingsWithCommSelection CommunicationSettings; // 0x90 (40)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xB8 (56)

	void MigrateMultiCoreRendering(char NewValue); // Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16115E0>
};

// Class AkAudio.AkTVOSInitializationSettings
class UAkTVOSInitializationSettings : public Object {

public:

	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28 (104)
	struct FAkAudioSession AudioSession; // 0x90 (12)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xA0 (40)
	struct FAkAdvancedInitializationSettings AdvancedSettings; // 0xC8 (52)
};

// Class AkAudio.AkWindowsInitializationSettings
class UAkWindowsInitializationSettings : public Object {

public:

	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28 (104)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90 (40)
	struct FAkWindowsAdvancedInitializationSettings AdvancedSettings; // 0xB8 (64)

	void MigrateMultiCoreRendering(char NewValue); // Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16115E0>
};

// Class AkAudio.AkWwiseTree
class UAkWwiseTree : public UWidget {

public:

	struct FMulticastInlineDelegate OnSelectionChanged; // 0x108 (16)
	struct FMulticastInlineDelegate OnItemDragged; // 0x118 (16)

	void SetSearchText(struct FString newText); // Function AkAudio.AkWwiseTree.SetSearchText(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1623DB0>
	struct FAkWwiseObjectDetails GetSelectedItem(); // Function AkAudio.AkWwiseTree.GetSelectedItem(Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x162E6A0>
	struct FString GetSearchText(); // Function AkAudio.AkWwiseTree.GetSearchText(Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x162E620>
};

// Class AkAudio.AkWwiseTreeSelector
class UAkWwiseTreeSelector : public UWidget {

public:

	struct FMulticastInlineDelegate OnSelectionChanged; // 0x108 (16)
	struct FMulticastInlineDelegate OnItemDragged; // 0x118 (16)
};

// Class AkAudio.AkXboxOneInitializationSettings
class UAkXboxOneInitializationSettings : public Object {

public:

	struct FAkCommonInitializationSettings CommonSettings; // 0x28 (96)
	struct FAkXboxOneApuHeapInitializationSettings ApuHeapSettings; // 0x88 (8)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90 (40)
	struct FAkXboxOneAdvancedInitializationSettings AdvancedSettings; // 0xB8 (60)

	void MigrateMultiCoreRendering(char NewValue); // Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16115E0>
};

// Class AkAudio.InterpTrackAkAudioEvent
class UInterpTrackAkAudioEvent : public UInterpTrackVectorBase {

public:

	struct TArray<struct FAkAudioEventTrackKey> Events; // 0x90 (16)
	char bContinueEventOnMatineeEnd : 0; // 0xA0 (1)
};

// Class AkAudio.InterpTrackAkAudioRTPC
class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase {

public:

	struct FString Param; // 0x90 (16)
	char bPlayOnReverse : 0; // 0xA0 (1)
	char bContinueRTPCOnMatineeEnd : 0; // 0xA0 (1)
};

// Class AkAudio.InterpTrackInstAkAudioEvent
class UInterpTrackInstAkAudioEvent : public UInterpTrackInst {

public:

	float LastUpdatePosition; // 0x28 (4)
};

// Class AkAudio.InterpTrackInstAkAudioRTPC
class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst {

public:

	float LastUpdatePosition; // 0x28 (4)
};

// Class AkAudio.MovieSceneAkAudioEventSection
class UMovieSceneAkAudioEventSection : public UMovieSceneSection {

public:

	struct UAkAudioEvent Event; // 0x120 (8)
	char RetriggerEvent : 0; // 0x128 (1)
	int32_t ScrubTailLengthMs; // 0x12C (4)
	char StopAtSectionEnd : 0; // 0x130 (1)
	struct FString EventName; // 0x138 (16)
	float MaxSourceDuration; // 0x168 (4)
	struct FString MaxDurationSourceID; // 0x170 (16)
};

// Class AkAudio.MovieSceneAkTrack
class UMovieSceneAkTrack : public UMovieSceneTrack {

public:

	struct TArray<struct UMovieSceneSection> Sections; // 0x58 (16)
	char bIsAMasterTrack : 0; // 0x68 (1)
};

// Class AkAudio.MovieSceneAkAudioRTPCSection
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection {

public:

	struct UAkRtpc RTPC; // 0xE0 (8)
	struct FString Name; // 0xE8 (16)
	struct FRichCurve FloatCurve; // 0xF8 (128)
	struct FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper; // 0x178 (48)
	struct FMovieSceneFloatChannel RTPCChannel; // 0x1A8 (160)
};

// Class AkAudio.PostEventAsync
class UPostEventAsync : public UBlueprintAsyncActionBase {

public:

	struct FMulticastInlineDelegate Completed; // 0x30 (16)

	struct UPostEventAsync PostEventAsync(struct Object WorldContextObject, struct UAkAudioEvent AkEvent, struct UActor Actor, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, char bStopWhenAttachedToDestroyed); // Function AkAudio.PostEventAsync.PostEventAsync(Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x162E970>
	void PollPostEventFuture(); // Function AkAudio.PostEventAsync.PollPostEventFuture(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x162E950>
};

// Class AkAudio.PostEventAtLocationAsync
class UPostEventAtLocationAsync : public UBlueprintAsyncActionBase {

public:

	struct FMulticastInlineDelegate Completed; // 0x30 (16)

	struct UPostEventAtLocationAsync PostEventAtLocationAsync(struct Object WorldContextObject, struct UAkAudioEvent AkEvent, struct FVector Location, struct FRotator Orientation); // Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync(Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x162FA60>
	void PollPostEventFuture(); // Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x162FA40>
};

// ScriptStruct AkAudio.AkExternalSourceInfo
struct FAkExternalSourceInfo {
	struct FString ExternalSrcName; // 0x0 (16)
	enum class AkCodecId CodecID; // 0x10 (1)
	struct FString Filename; // 0x18 (16)
	struct UAkExternalMediaAsset ExternalSourceAsset; // 0x28 (8)
	char IsStreamed : 0; // 0x30 (1)
};

// ScriptStruct AkAudio.AkAmbSoundCheckpointRecord
struct FAkAmbSoundCheckpointRecord {
	char bCurrentlyPlaying : 0; // 0x0 (1)
};

// ScriptStruct AkAudio.AkAdvancedInitializationSettings
struct FAkAdvancedInitializationSettings {
	uint32_t IO_MemorySize; // 0x0 (4)
	uint32_t IO_Granularity; // 0x4 (4)
	float TargetAutoStreamBufferLength; // 0x8 (4)
	char UseStreamCache : 0; // 0xC (1)
	uint32_t MaximumPinnedBytesInCache; // 0x10 (4)
	char EnableGameSyncPreparation : 0; // 0x14 (1)
	uint32_t ContinuousPlaybackLookAhead; // 0x18 (4)
	uint32_t MonitorQueuePoolSize; // 0x1C (4)
	uint32_t MaximumHardwareTimeoutMs; // 0x20 (4)
	char DebugOutOfRangeCheckEnabled : 0; // 0x24 (1)
	float DebugOutOfRangeLimit; // 0x28 (4)
	struct FAkAdvancedSpatialAudioSettings SpatialAudioSettings; // 0x2C (8)
};

// ScriptStruct AkAudio.AkAdvancedSpatialAudioSettings
struct FAkAdvancedSpatialAudioSettings {
	float DiffractionShadowAttenuationFactor; // 0x0 (4)
	float DiffractionShadowDegrees; // 0x4 (4)
};

// ScriptStruct AkAudio.AkAdvancedInitializationSettingsWithMultiCoreRendering
struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : FAkAdvancedInitializationSettings {
	char EnableMultiCoreRendering : 0; // 0x34 (1)
};

// ScriptStruct AkAudio.AkAndroidAdvancedInitializationSettings
struct FAkAndroidAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t AudioAPI; // 0x38 (4)
	char RoundFrameSizeToHardwareSize : 0; // 0x3C (1)
};

// ScriptStruct AkAudio.AkAudioSession
struct FAkAudioSession {
	enum class EAkAudioSessionCategory AudioSessionCategory; // 0x0 (4)
	uint32_t AudioSessionCategoryOptions; // 0x4 (4)
	enum class EAkAudioSessionMode AudioSessionMode; // 0x8 (4)
};

// ScriptStruct AkAudio.AkSegmentInfo
struct FAkSegmentInfo {
	int32_t CurrentPosition; // 0x0 (4)
	int32_t PreEntryDuration; // 0x4 (4)
	int32_t ActiveDuration; // 0x8 (4)
	int32_t PostExitDuration; // 0xC (4)
	int32_t RemainingLookAheadTime; // 0x10 (4)
	float BeatDuration; // 0x14 (4)
	float BarDuration; // 0x18 (4)
	float GridDuration; // 0x1C (4)
	float GridOffset; // 0x20 (4)
};

// ScriptStruct AkAudio.AkMidiEventBase
struct FAkMidiEventBase {
	enum class EAkMidiEventType Type; // 0x0 (1)
	char Chan; // 0x1 (1)
};

// ScriptStruct AkAudio.AkMidiProgramChange
struct FAkMidiProgramChange : FAkMidiEventBase {
	char ProgramNum; // 0x2 (1)
};

// ScriptStruct AkAudio.AkMidiChannelAftertouch
struct FAkMidiChannelAftertouch : FAkMidiEventBase {
	char Value; // 0x2 (1)
};

// ScriptStruct AkAudio.AkMidiNoteAftertouch
struct FAkMidiNoteAftertouch : FAkMidiEventBase {
	char Note; // 0x2 (1)
	char Value; // 0x3 (1)
};

// ScriptStruct AkAudio.AkMidiPitchBend
struct FAkMidiPitchBend : FAkMidiEventBase {
	char ValueLsb; // 0x2 (1)
	char ValueMsb; // 0x3 (1)
	int32_t FullValue; // 0x4 (4)
};

// ScriptStruct AkAudio.AkMidiCc
struct FAkMidiCc : FAkMidiEventBase {
	enum class EAkMidiCcValues Cc; // 0x2 (1)
	char Value; // 0x3 (1)
};

// ScriptStruct AkAudio.AkMidiNoteOnOff
struct FAkMidiNoteOnOff : FAkMidiEventBase {
	char Note; // 0x2 (1)
	char Velocity; // 0x3 (1)
};

// ScriptStruct AkAudio.AkMidiGeneric
struct FAkMidiGeneric : FAkMidiEventBase {
	char Param1; // 0x2 (1)
	char Param2; // 0x3 (1)
};

// ScriptStruct AkAudio.AkChannelMask
struct FAkChannelMask {
	int32_t ChannelMask; // 0x0 (4)
};

// ScriptStruct AkAudio.AkGeometrySurfaceOverride
struct FAkGeometrySurfaceOverride {
	struct UAkAcousticTexture AcousticTexture; // 0x0 (8)
	char bEnableOcclusionOverride : 0; // 0x8 (1)
	float OcclusionValue; // 0xC (4)
};

// ScriptStruct AkAudio.AkGeometryData
struct FAkGeometryData {
	struct TArray<struct FVector> Vertices; // 0x0 (16)
	struct TArray<struct FAkAcousticSurface> Surfaces; // 0x10 (16)
	struct TArray<struct FAkTriangle> Triangles; // 0x20 (16)
	struct TArray<struct UPhysicalMaterial> ToOverrideAcousticTexture; // 0x30 (16)
	struct TArray<struct UPhysicalMaterial> ToOverrideOcclusion; // 0x40 (16)
};

// ScriptStruct AkAudio.AkTriangle
struct FAkTriangle {
	uint16_t Point0; // 0x0 (2)
	uint16_t Point1; // 0x2 (2)
	uint16_t Point2; // 0x4 (2)
	uint16_t Surface; // 0x6 (2)
};

// ScriptStruct AkAudio.AkAcousticSurface
struct FAkAcousticSurface {
	uint32_t Texture; // 0x0 (4)
	float Occlusion; // 0x4 (4)
	struct FString Name; // 0x8 (16)
};

// ScriptStruct AkAudio.AkHololensAdvancedInitializationSettings
struct FAkHololensAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t AudioAPI; // 0x38 (4)
	char GlobalFocus : 0; // 0x3C (1)
	char UseHeadMountedDisplayAudioDevice : 0; // 0x3D (1)
};

// ScriptStruct AkAudio.AkPluginInfo
struct FAkPluginInfo {
	struct FString Name; // 0x0 (16)
	uint32_t PluginID; // 0x10 (4)
	struct FString dll; // 0x18 (16)
};

// ScriptStruct AkAudio.AkCommonInitializationSettings
struct FAkCommonInitializationSettings {
	uint32_t MaximumNumberOfMemoryPools; // 0x0 (4)
	uint32_t MaximumNumberOfPositioningPaths; // 0x4 (4)
	uint32_t CommandQueueSize; // 0x8 (4)
	uint32_t SamplesPerFrame; // 0xC (4)
	struct FAkMainOutputSettings MainOutputSettings; // 0x10 (40)
	float StreamingLookAheadRatio; // 0x38 (4)
	uint16_t NumberOfRefillsInVoice; // 0x3C (2)
	struct FAkSpatialAudioSettings SpatialAudioSettings; // 0x40 (32)
};

// ScriptStruct AkAudio.AkSpatialAudioSettings
struct FAkSpatialAudioSettings {
	uint32_t MaxSoundPropagationDepth; // 0x0 (4)
	uint32_t DiffractionFlags; // 0x4 (4)
	float MovementThreshold; // 0x8 (4)
	uint32_t NumberOfPrimaryRays; // 0xC (4)
	uint32_t ReflectionOrder; // 0x10 (4)
	char EnableDiffractionOnReflections : 0; // 0x14 (1)
	char EnableDirectPathDiffraction : 0; // 0x15 (1)
	float MaximumPathLength; // 0x18 (4)
	char EnableTransmission : 0; // 0x1C (1)
};

// ScriptStruct AkAudio.AkMainOutputSettings
struct FAkMainOutputSettings {
	struct FString AudioDeviceShareset; // 0x0 (16)
	uint32_t DeviceID; // 0x10 (4)
	enum class EAkPanningRule PanningRule; // 0x14 (4)
	enum class EAkChannelConfigType ChannelConfigType; // 0x18 (4)
	uint32_t ChannelMask; // 0x1C (4)
	uint32_t NumberOfChannels; // 0x20 (4)
};

// ScriptStruct AkAudio.AkCommonInitializationSettingsWithSampleRate
struct FAkCommonInitializationSettingsWithSampleRate : FAkCommonInitializationSettings {
	uint32_t SampleRate; // 0x60 (4)
};

// ScriptStruct AkAudio.AkCommunicationSettings
struct FAkCommunicationSettings {
	uint32_t PoolSize; // 0x0 (4)
	uint16_t DiscoveryBroadcastPort; // 0x4 (2)
	uint16_t CommandPort; // 0x6 (2)
	uint16_t NotificationPort; // 0x8 (2)
	struct FString NetworkName; // 0x10 (16)
};

// ScriptStruct AkAudio.AkCommunicationSettingsWithCommSelection
struct FAkCommunicationSettingsWithCommSelection : FAkCommunicationSettings {
	enum class EAkCommSystem CommunicationSystem; // 0x20 (4)
};

// ScriptStruct AkAudio.AkCommunicationSettingsWithSystemInitialization
struct FAkCommunicationSettingsWithSystemInitialization : FAkCommunicationSettings {
	char InitializeSystemComms : 0; // 0x20 (1)
};

// ScriptStruct AkAudio.AkBoolPropertyToControl
struct FAkBoolPropertyToControl {
	struct FString ItemProperty; // 0x0 (16)
};

// ScriptStruct AkAudio.AkPropertyToControl
struct FAkPropertyToControl {
	struct FString ItemProperty; // 0x0 (16)
};

// ScriptStruct AkAudio.AkPS4AdvancedInitializationSettings
struct FAkPS4AdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t ACPBatchBufferSize; // 0x38 (4)
	char UseHardwareCodecLowLatencyMode : 0; // 0x3C (1)
};

// ScriptStruct AkAudio.AkGeometrySurfacePropertiesToMap
struct FAkGeometrySurfacePropertiesToMap {
	struct TSoftObjectPtr<UAkAcousticTexture> AcousticTexture; // 0x0 (40)
	float OcclusionValue; // 0x28 (4)
};

// ScriptStruct AkAudio.AkWwiseItemToControl
struct FAkWwiseItemToControl {
	struct FAkWwiseObjectDetails ItemPicked; // 0x0 (48)
	struct FString ItemPath; // 0x30 (16)
};

// ScriptStruct AkAudio.AkWwiseObjectDetails
struct FAkWwiseObjectDetails {
	struct FString ItemName; // 0x0 (16)
	struct FString ItemPath; // 0x10 (16)
	struct FString ItemId; // 0x20 (16)
};

// ScriptStruct AkAudio.AkPoly
struct FAkPoly {
	struct UAkAcousticTexture Texture; // 0x0 (8)
	float Occlusion; // 0x8 (4)
	char EnableSurface : 0; // 0xC (1)
};

// ScriptStruct AkAudio.AkWaapiFieldNames
struct FAkWaapiFieldNames {
	struct FString FieldName; // 0x0 (16)
};

// ScriptStruct AkAudio.AkWaapiUri
struct FAkWaapiUri {
	struct FString Uri; // 0x0 (16)
};

// ScriptStruct AkAudio.AkWindowsAdvancedInitializationSettings
struct FAkWindowsAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t AudioAPI; // 0x38 (4)
	char GlobalFocus : 0; // 0x3C (1)
	char UseHeadMountedDisplayAudioDevice : 0; // 0x3D (1)
};

// ScriptStruct AkAudio.AkXboxOneApuHeapInitializationSettings
struct FAkXboxOneApuHeapInitializationSettings {
	uint32_t CachedSize; // 0x0 (4)
	uint32_t NonCachedSize; // 0x4 (4)
};

// ScriptStruct AkAudio.AkXboxOneAdvancedInitializationSettings
struct FAkXboxOneAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint16_t MaximumNumberOfXMAVoices; // 0x38 (2)
	char UseHardwareCodecLowLatencyMode : 0; // 0x3A (1)
};

// ScriptStruct AkAudio.AkAudioEventTrackKey
struct FAkAudioEventTrackKey {
	float Time; // 0x0 (4)
	struct UAkAudioEvent AkAudioEvent; // 0x8 (8)
	struct FString EventName; // 0x10 (16)
};

// ScriptStruct AkAudio.MovieSceneAkAudioEventTemplate
struct FMovieSceneAkAudioEventTemplate : FMovieSceneEvalTemplate {
	struct UMovieSceneAkAudioEventSection Section; // 0x20 (8)
};

// ScriptStruct AkAudio.MovieSceneAkAudioRTPCTemplate
struct FMovieSceneAkAudioRTPCTemplate : FMovieSceneEvalTemplate {
	struct UMovieSceneAkAudioRTPCSection Section; // 0x20 (8)
};

// ScriptStruct AkAudio.MovieSceneFloatChannelSerializationHelper
struct FMovieSceneFloatChannelSerializationHelper {
	char PreInfinityExtrap; // 0x0 (1)
	char PostInfinityExtrap; // 0x1 (1)
	struct TArray<int32_t> Times; // 0x8 (16)
	struct TArray<struct FMovieSceneFloatValueSerializationHelper> Values; // 0x18 (16)
	float DefaultValue; // 0x28 (4)
	char bHasDefaultValue : 0; // 0x2C (1)
};

// ScriptStruct AkAudio.MovieSceneFloatValueSerializationHelper
struct FMovieSceneFloatValueSerializationHelper {
	float Value; // 0x0 (4)
	char InterpMode; // 0x4 (1)
	char TangentMode; // 0x5 (1)
	struct FMovieSceneTangentDataSerializationHelper Tangent; // 0x8 (20)
};

// ScriptStruct AkAudio.MovieSceneTangentDataSerializationHelper
struct FMovieSceneTangentDataSerializationHelper {
	float ArriveTangent; // 0x0 (4)
	float LeaveTangent; // 0x4 (4)
	char TangentWeightMode; // 0x8 (1)
	float ArriveTangentWeight; // 0xC (4)
	float LeaveTangentWeight; // 0x10 (4)
};

// Function AkAudio.AkAcousticPortal.OpenPortal
inline void AAkAcousticPortal::OpenPortal() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkAcousticPortal.OpenPortal");

	struct OpenPortal_Params {
		
	}; OpenPortal_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkAcousticPortal.GetCurrentState
inline enum class AkAcousticPortalState AAkAcousticPortal::GetCurrentState() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkAcousticPortal.GetCurrentState");

	struct GetCurrentState_Params {
		
		enum class AkAcousticPortalState ReturnValue;

	}; GetCurrentState_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AkAudio.AkAcousticPortal.ClosePortal
inline void AAkAcousticPortal::ClosePortal() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkAcousticPortal.ClosePortal");

	struct ClosePortal_Params {
		
	}; ClosePortal_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkAmbientSound.StopAmbientSound
inline void AAkAmbientSound::StopAmbientSound() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkAmbientSound.StopAmbientSound");

	struct StopAmbientSound_Params {
		
	}; StopAmbientSound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkAmbientSound.StartAmbientSound
inline void AAkAmbientSound::StartAmbientSound() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkAmbientSound.StartAmbientSound");

	struct StartAmbientSound_Params {
		
	}; StartAmbientSound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering
inline void UAkAndroidInitializationSettings::MigrateMultiCoreRendering(char NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering");

	struct MigrateMultiCoreRendering_Params {
		char NewValue;
	}; MigrateMultiCoreRendering_Params Params;

	Params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkAudioEvent.GetMinimumDuration
inline float UAkAudioEvent::GetMinimumDuration() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkAudioEvent.GetMinimumDuration");

	struct GetMinimumDuration_Params {
		
		float ReturnValue;

	}; GetMinimumDuration_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AkAudio.AkAudioEvent.GetMaximumDuration
inline float UAkAudioEvent::GetMaximumDuration() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkAudioEvent.GetMaximumDuration");

	struct GetMaximumDuration_Params {
		
		float ReturnValue;

	}; GetMaximumDuration_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AkAudio.AkAudioEvent.GetMaxAttenuationRadius
inline float UAkAudioEvent::GetMaxAttenuationRadius() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkAudioEvent.GetMaxAttenuationRadius");

	struct GetMaxAttenuationRadius_Params {
		
		float ReturnValue;

	}; GetMaxAttenuationRadius_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AkAudio.AkAudioEvent.GetIsInfinite
inline char UAkAudioEvent::GetIsInfinite() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkAudioEvent.GetIsInfinite");

	struct GetIsInfinite_Params {
		
		char ReturnValue;

	}; GetIsInfinite_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AkAudio.AkGameObject.Stop
inline void UAkGameObject::Stop() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameObject.Stop");

	struct Stop_Params {
		
	}; Stop_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkGameObject.PostAssociatedAkEventAsync
inline void UAkGameObject::PostAssociatedAkEventAsync(struct Object WorldContextObject, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo, int32_t& PlayingID) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameObject.PostAssociatedAkEventAsync");

	struct PostAssociatedAkEventAsync_Params {
		struct Object WorldContextObject;
		int32_t CallbackMask;
		struct FDelegate& PostEventCallback;
		struct TArray<struct FAkExternalSourceInfo>& ExternalSources;
		struct FLatentActionInfo LatentInfo;
		int32_t& PlayingID;
	}; PostAssociatedAkEventAsync_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.CallbackMask = CallbackMask;
	Params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PostEventCallback = Params.PostEventCallback;
	ExternalSources = Params.ExternalSources;
	PlayingID = Params.PlayingID;

}

// Function AkAudio.AkGameObject.PostAssociatedAkEvent
inline int32_t UAkGameObject::PostAssociatedAkEvent(int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameObject.PostAssociatedAkEvent");

	struct PostAssociatedAkEvent_Params {
		int32_t CallbackMask;
		struct FDelegate& PostEventCallback;
		struct TArray<struct FAkExternalSourceInfo>& ExternalSources;
		int32_t ReturnValue;

	}; PostAssociatedAkEvent_Params Params;

	Params.CallbackMask = CallbackMask;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PostEventCallback = Params.PostEventCallback;
	ExternalSources = Params.ExternalSources;


	return params.ReturnValue;
}

// Function AkAudio.AkGameObject.PostAkEventAsync
inline void UAkGameObject::PostAkEventAsync(struct Object WorldContextObject, struct UAkAudioEvent AkEvent, int32_t& PlayingID, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameObject.PostAkEventAsync");

	struct PostAkEventAsync_Params {
		struct Object WorldContextObject;
		struct UAkAudioEvent AkEvent;
		int32_t& PlayingID;
		int32_t CallbackMask;
		struct FDelegate& PostEventCallback;
		struct TArray<struct FAkExternalSourceInfo>& ExternalSources;
		struct FLatentActionInfo LatentInfo;
	}; PostAkEventAsync_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.AkEvent = AkEvent;
	Params.CallbackMask = CallbackMask;
	Params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PlayingID = Params.PlayingID;
	PostEventCallback = Params.PostEventCallback;
	ExternalSources = Params.ExternalSources;

}

// Function AkAudio.AkGameObject.PostAkEvent
inline int32_t UAkGameObject::PostAkEvent(struct UAkAudioEvent AkEvent, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FString in_EventName) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameObject.PostAkEvent");

	struct PostAkEvent_Params {
		struct UAkAudioEvent AkEvent;
		int32_t CallbackMask;
		struct FDelegate& PostEventCallback;
		struct TArray<struct FAkExternalSourceInfo>& ExternalSources;
		struct FString in_EventName;
		int32_t ReturnValue;

	}; PostAkEvent_Params Params;

	Params.AkEvent = AkEvent;
	Params.CallbackMask = CallbackMask;
	Params.in_EventName = in_EventName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PostEventCallback = Params.PostEventCallback;
	ExternalSources = Params.ExternalSources;


	return params.ReturnValue;
}

// Function AkAudio.AkComponent.UseReverbVolumes
inline void UAkComponent::UseReverbVolumes(char inUseReverbVolumes) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.UseReverbVolumes");

	struct UseReverbVolumes_Params {
		char inUseReverbVolumes;
	}; UseReverbVolumes_Params Params;

	Params.inUseReverbVolumes = inUseReverbVolumes;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkComponent.UseEarlyReflections
inline void UAkComponent::UseEarlyReflections(struct UAkAuxBus AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, char SpotReflectors, struct FString AuxBusName) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.UseEarlyReflections");

	struct UseEarlyReflections_Params {
		struct UAkAuxBus AuxBus;
		int32_t Order;
		float BusSendGain;
		float MaxPathLength;
		char SpotReflectors;
		struct FString AuxBusName;
	}; UseEarlyReflections_Params Params;

	Params.AuxBus = AuxBus;
	Params.Order = Order;
	Params.BusSendGain = BusSendGain;
	Params.MaxPathLength = MaxPathLength;
	Params.SpotReflectors = SpotReflectors;
	Params.AuxBusName = AuxBusName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkComponent.SetSwitch
inline void UAkComponent::SetSwitch(struct UAkSwitchValue SwitchValue, struct FString SwitchGroup, struct FString SwitchState) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetSwitch");

	struct SetSwitch_Params {
		struct UAkSwitchValue SwitchValue;
		struct FString SwitchGroup;
		struct FString SwitchState;
	}; SetSwitch_Params Params;

	Params.SwitchValue = SwitchValue;
	Params.SwitchGroup = SwitchGroup;
	Params.SwitchState = SwitchState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
inline void UAkComponent::SetStopWhenOwnerDestroyed(char bStopWhenOwnerDestroyed) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed");

	struct SetStopWhenOwnerDestroyed_Params {
		char bStopWhenOwnerDestroyed;
	}; SetStopWhenOwnerDestroyed_Params Params;

	Params.bStopWhenOwnerDestroyed = bStopWhenOwnerDestroyed;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkComponent.SetRTPCValue
inline void UAkComponent::SetRTPCValue(struct UAkRtpc RTPCValue, float Value, int32_t InterpolationTimeMs, struct FString RTPC) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetRTPCValue");

	struct SetRTPCValue_Params {
		struct UAkRtpc RTPCValue;
		float Value;
		int32_t InterpolationTimeMs;
		struct FString RTPC;
	}; SetRTPCValue_Params Params;

	Params.RTPCValue = RTPCValue;
	Params.Value = Value;
	Params.InterpolationTimeMs = InterpolationTimeMs;
	Params.RTPC = RTPC;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkComponent.SetOutputBusVolume
inline void UAkComponent::SetOutputBusVolume(float BusVolume) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetOutputBusVolume");

	struct SetOutputBusVolume_Params {
		float BusVolume;
	}; SetOutputBusVolume_Params Params;

	Params.BusVolume = BusVolume;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkComponent.SetListeners
inline void UAkComponent::SetListeners(struct TArray<struct UAkComponent>& Listeners) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetListeners");

	struct SetListeners_Params {
		struct TArray<struct UAkComponent>& Listeners;
	}; SetListeners_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Listeners = Params.Listeners;

}

// Function AkAudio.AkComponent.SetEarlyReflectionsVolume
inline void UAkComponent::SetEarlyReflectionsVolume(float SendVolume) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetEarlyReflectionsVolume");

	struct SetEarlyReflectionsVolume_Params {
		float SendVolume;
	}; SetEarlyReflectionsVolume_Params Params;

	Params.SendVolume = SendVolume;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus
inline void UAkComponent::SetEarlyReflectionsAuxBus(struct FString AuxBusName) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus");

	struct SetEarlyReflectionsAuxBus_Params {
		struct FString AuxBusName;
	}; SetEarlyReflectionsAuxBus_Params Params;

	Params.AuxBusName = AuxBusName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkComponent.SetAttenuationScalingFactor
inline void UAkComponent::SetAttenuationScalingFactor(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetAttenuationScalingFactor");

	struct SetAttenuationScalingFactor_Params {
		float Value;
	}; SetAttenuationScalingFactor_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkComponent.PostTrigger
inline void UAkComponent::PostTrigger(struct UAkTrigger TriggerValue, struct FString Trigger) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostTrigger");

	struct PostTrigger_Params {
		struct UAkTrigger TriggerValue;
		struct FString Trigger;
	}; PostTrigger_Params Params;

	Params.TriggerValue = TriggerValue;
	Params.Trigger = Trigger;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync
inline void UAkComponent::PostAssociatedAkEventAndWaitForEndAsync(int32_t& PlayingID, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync");

	struct PostAssociatedAkEventAndWaitForEndAsync_Params {
		int32_t& PlayingID;
		struct TArray<struct FAkExternalSourceInfo>& ExternalSources;
		struct FLatentActionInfo LatentInfo;
	}; PostAssociatedAkEventAndWaitForEndAsync_Params Params;

	Params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PlayingID = Params.PlayingID;
	ExternalSources = Params.ExternalSources;

}

// Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
inline int32_t UAkComponent::PostAssociatedAkEventAndWaitForEnd(struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd");

	struct PostAssociatedAkEventAndWaitForEnd_Params {
		struct TArray<struct FAkExternalSourceInfo>& ExternalSources;
		struct FLatentActionInfo LatentInfo;
		int32_t ReturnValue;

	}; PostAssociatedAkEventAndWaitForEnd_Params Params;

	Params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ExternalSources = Params.ExternalSources;


	return params.ReturnValue;
}

// Function AkAudio.AkComponent.PostAkEventByName
inline int32_t UAkComponent::PostAkEventByName(struct FString in_EventName) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAkEventByName");

	struct PostAkEventByName_Params {
		struct FString in_EventName;
		int32_t ReturnValue;

	}; PostAkEventByName_Params Params;

	Params.in_EventName = in_EventName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync
inline void UAkComponent::PostAkEventAndWaitForEndAsync(struct UAkAudioEvent AkEvent, int32_t& PlayingID, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync");

	struct PostAkEventAndWaitForEndAsync_Params {
		struct UAkAudioEvent AkEvent;
		int32_t& PlayingID;
		struct TArray<struct FAkExternalSourceInfo>& ExternalSources;
		struct FLatentActionInfo LatentInfo;
	}; PostAkEventAndWaitForEndAsync_Params Params;

	Params.AkEvent = AkEvent;
	Params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PlayingID = Params.PlayingID;
	ExternalSources = Params.ExternalSources;

}

// Function AkAudio.AkComponent.PostAkEventAndWaitForEnd
inline int32_t UAkComponent::PostAkEventAndWaitForEnd(struct UAkAudioEvent AkEvent, struct FString in_EventName, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAkEventAndWaitForEnd");

	struct PostAkEventAndWaitForEnd_Params {
		struct UAkAudioEvent AkEvent;
		struct FString in_EventName;
		struct TArray<struct FAkExternalSourceInfo>& ExternalSources;
		struct FLatentActionInfo LatentInfo;
		int32_t ReturnValue;

	}; PostAkEventAndWaitForEnd_Params Params;

	Params.AkEvent = AkEvent;
	Params.in_EventName = in_EventName;
	Params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ExternalSources = Params.ExternalSources;


	return params.ReturnValue;
}

// Function AkAudio.AkComponent.GetRTPCValue
inline void UAkComponent::GetRTPCValue(struct UAkRtpc RTPCValue, enum class ERTPCValueType InputValueType, float& Value, enum class ERTPCValueType& OutputValueType, struct FString RTPC, int32_t PlayingID) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.GetRTPCValue");

	struct GetRTPCValue_Params {
		struct UAkRtpc RTPCValue;
		enum class ERTPCValueType InputValueType;
		float& Value;
		enum class ERTPCValueType& OutputValueType;
		struct FString RTPC;
		int32_t PlayingID;
	}; GetRTPCValue_Params Params;

	Params.RTPCValue = RTPCValue;
	Params.InputValueType = InputValueType;
	Params.RTPC = RTPC;
	Params.PlayingID = PlayingID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;
	OutputValueType = Params.OutputValueType;

}

// Function AkAudio.AkComponent.GetAttenuationRadius
inline float UAkComponent::GetAttenuationRadius() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.GetAttenuationRadius");

	struct GetAttenuationRadius_Params {
		
		float ReturnValue;

	}; GetAttenuationRadius_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AkAudio.AkCheckBox.SetIsChecked
inline void UAkCheckBox::SetIsChecked(char InIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.SetIsChecked");

	struct SetIsChecked_Params {
		char InIsChecked;
	}; SetIsChecked_Params Params;

	Params.InIsChecked = InIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkCheckBox.SetCheckedState
inline void UAkCheckBox::SetCheckedState(enum class ECheckBoxState InCheckedState) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.SetCheckedState");

	struct SetCheckedState_Params {
		enum class ECheckBoxState InCheckedState;
	}; SetCheckedState_Params Params;

	Params.InCheckedState = InCheckedState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkCheckBox.SetAkItemId
inline void UAkCheckBox::SetAkItemId(struct FGuid& ItemId) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.SetAkItemId");

	struct SetAkItemId_Params {
		struct FGuid& ItemId;
	}; SetAkItemId_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemId = Params.ItemId;

}

// Function AkAudio.AkCheckBox.SetAkBoolProperty
inline void UAkCheckBox::SetAkBoolProperty(struct FString ItemProperty) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.SetAkBoolProperty");

	struct SetAkBoolProperty_Params {
		struct FString ItemProperty;
	}; SetAkBoolProperty_Params Params;

	Params.ItemProperty = ItemProperty;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkCheckBox.IsPressed
inline char UAkCheckBox::IsPressed() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.IsPressed");

	struct IsPressed_Params {
		
		char ReturnValue;

	}; IsPressed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AkAudio.AkCheckBox.IsChecked
inline char UAkCheckBox::IsChecked() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.IsChecked");

	struct IsChecked_Params {
		
		char ReturnValue;

	}; IsChecked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AkAudio.AkCheckBox.GetCheckedState
inline enum class ECheckBoxState UAkCheckBox::GetCheckedState() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.GetCheckedState");

	struct GetCheckedState_Params {
		
		enum class ECheckBoxState ReturnValue;

	}; GetCheckedState_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AkAudio.AkCheckBox.GetAkProperty
inline struct FString UAkCheckBox::GetAkProperty() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.GetAkProperty");

	struct GetAkProperty_Params {
		
		struct FString ReturnValue;

	}; GetAkProperty_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AkAudio.AkCheckBox.GetAkItemId
inline struct FGuid UAkCheckBox::GetAkItemId() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.GetAkItemId");

	struct GetAkItemId_Params {
		
		struct FGuid ReturnValue;

	}; GetAkItemId_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AkAudio.AkGeometryComponent.UpdateGeometry
inline void UAkGeometryComponent::UpdateGeometry() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGeometryComponent.UpdateGeometry");

	struct UpdateGeometry_Params {
		
	}; UpdateGeometry_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkGeometryComponent.RemoveGeometry
inline void UAkGeometryComponent::RemoveGeometry() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGeometryComponent.RemoveGeometry");

	struct RemoveGeometry_Params {
		
	}; RemoveGeometry_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkGeometryComponent.ConvertMesh
inline void UAkGeometryComponent::ConvertMesh() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGeometryComponent.ConvertMesh");

	struct ConvertMesh_Params {
		
	}; ConvertMesh_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering
inline void UAkHololensInitializationSettings::MigrateMultiCoreRendering(char NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering");

	struct MigrateMultiCoreRendering_Params {
		char NewValue;
	}; MigrateMultiCoreRendering_Params Params;

	Params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkItemBoolProperties.SetSearchText
inline void UAkItemBoolProperties::SetSearchText(struct FString newText) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolProperties.SetSearchText");

	struct SetSearchText_Params {
		struct FString newText;
	}; SetSearchText_Params Params;

	Params.newText = newText;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkItemBoolProperties.GetSelectedProperty
inline struct FString UAkItemBoolProperties::GetSelectedProperty() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolProperties.GetSelectedProperty");

	struct GetSelectedProperty_Params {
		
		struct FString ReturnValue;

	}; GetSelectedProperty_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AkAudio.AkItemBoolProperties.GetSearchText
inline struct FString UAkItemBoolProperties::GetSearchText() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolProperties.GetSearchText");

	struct GetSearchText_Params {
		
		struct FString ReturnValue;

	}; GetSearchText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AkAudio.AkItemProperties.SetSearchText
inline void UAkItemProperties::SetSearchText(struct FString newText) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemProperties.SetSearchText");

	struct SetSearchText_Params {
		struct FString newText;
	}; SetSearchText_Params Params;

	Params.newText = newText;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkItemProperties.GetSelectedProperty
inline struct FString UAkItemProperties::GetSelectedProperty() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemProperties.GetSelectedProperty");

	struct GetSelectedProperty_Params {
		
		struct FString ReturnValue;

	}; GetSelectedProperty_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AkAudio.AkItemProperties.GetSearchText
inline struct FString UAkItemProperties::GetSearchText() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemProperties.GetSearchText");

	struct GetSearchText_Params {
		
		struct FString ReturnValue;

	}; GetSearchText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering
inline void UAkLinuxInitializationSettings::MigrateMultiCoreRendering(char NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering");

	struct MigrateMultiCoreRendering_Params {
		char NewValue;
	}; MigrateMultiCoreRendering_Params Params;

	Params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkLuminInitializationSettings.MigrateMultiCoreRendering
inline void UAkLuminInitializationSettings::MigrateMultiCoreRendering(char NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkLuminInitializationSettings.MigrateMultiCoreRendering");

	struct MigrateMultiCoreRendering_Params {
		char NewValue;
	}; MigrateMultiCoreRendering_Params Params;

	Params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering
inline void UAkMacInitializationSettings::MigrateMultiCoreRendering(char NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering");

	struct MigrateMultiCoreRendering_Params {
		char NewValue;
	}; MigrateMultiCoreRendering_Params Params;

	Params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering
inline void UAkPS4InitializationSettings::MigrateMultiCoreRendering(char NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering");

	struct MigrateMultiCoreRendering_Params {
		char NewValue;
	}; MigrateMultiCoreRendering_Params Params;

	Params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkSlider.SetValue
inline void UAkSlider::SetValue(float InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetValue");

	struct SetValue_Params {
		float InValue;
	}; SetValue_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkSlider.SetStepSize
inline void UAkSlider::SetStepSize(float InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetStepSize");

	struct SetStepSize_Params {
		float InValue;
	}; SetStepSize_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkSlider.SetSliderHandleColor
inline void UAkSlider::SetSliderHandleColor(struct FLinearColor InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetSliderHandleColor");

	struct SetSliderHandleColor_Params {
		struct FLinearColor InValue;
	}; SetSliderHandleColor_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkSlider.SetSliderBarColor
inline void UAkSlider::SetSliderBarColor(struct FLinearColor InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetSliderBarColor");

	struct SetSliderBarColor_Params {
		struct FLinearColor InValue;
	}; SetSliderBarColor_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkSlider.SetLocked
inline void UAkSlider::SetLocked(char InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetLocked");

	struct SetLocked_Params {
		char InValue;
	}; SetLocked_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkSlider.SetIndentHandle
inline void UAkSlider::SetIndentHandle(char InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetIndentHandle");

	struct SetIndentHandle_Params {
		char InValue;
	}; SetIndentHandle_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkSlider.SetAkSliderItemProperty
inline void UAkSlider::SetAkSliderItemProperty(struct FString ItemProperty) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetAkSliderItemProperty");

	struct SetAkSliderItemProperty_Params {
		struct FString ItemProperty;
	}; SetAkSliderItemProperty_Params Params;

	Params.ItemProperty = ItemProperty;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkSlider.SetAkSliderItemId
inline void UAkSlider::SetAkSliderItemId(struct FGuid& ItemId) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetAkSliderItemId");

	struct SetAkSliderItemId_Params {
		struct FGuid& ItemId;
	}; SetAkSliderItemId_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemId = Params.ItemId;

}

// Function AkAudio.AkSlider.GetValue
inline float UAkSlider::GetValue() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.GetValue");

	struct GetValue_Params {
		
		float ReturnValue;

	}; GetValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AkAudio.AkSlider.GetAkSliderItemProperty
inline struct FString UAkSlider::GetAkSliderItemProperty() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.GetAkSliderItemProperty");

	struct GetAkSliderItemProperty_Params {
		
		struct FString ReturnValue;

	}; GetAkSliderItemProperty_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AkAudio.AkSlider.GetAkSliderItemId
inline struct FGuid UAkSlider::GetAkSliderItemId() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.GetAkSliderItemId");

	struct GetAkSliderItemId_Params {
		
		struct FGuid ReturnValue;

	}; GetAkSliderItemId_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
inline void UAkSurfaceReflectorSetComponent::UpdateSurfaceReflectorSet() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet");

	struct UpdateSurfaceReflectorSet_Params {
		
	}; UpdateSurfaceReflectorSet_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
inline void UAkSurfaceReflectorSetComponent::SendSurfaceReflectorSet() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet");

	struct SendSurfaceReflectorSet_Params {
		
	}; SendSurfaceReflectorSet_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
inline void UAkSurfaceReflectorSetComponent::RemoveSurfaceReflectorSet() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet");

	struct RemoveSurfaceReflectorSet_Params {
		
	}; RemoveSurfaceReflectorSet_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering
inline void UAkSwitchInitializationSettings::MigrateMultiCoreRendering(char NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering");

	struct MigrateMultiCoreRendering_Params {
		char NewValue;
	}; MigrateMultiCoreRendering_Params Params;

	Params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering
inline void UAkWindowsInitializationSettings::MigrateMultiCoreRendering(char NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering");

	struct MigrateMultiCoreRendering_Params {
		char NewValue;
	}; MigrateMultiCoreRendering_Params Params;

	Params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkWwiseTree.SetSearchText
inline void UAkWwiseTree::SetSearchText(struct FString newText) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWwiseTree.SetSearchText");

	struct SetSearchText_Params {
		struct FString newText;
	}; SetSearchText_Params Params;

	Params.newText = newText;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.AkWwiseTree.GetSelectedItem
inline struct FAkWwiseObjectDetails UAkWwiseTree::GetSelectedItem() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWwiseTree.GetSelectedItem");

	struct GetSelectedItem_Params {
		
		struct FAkWwiseObjectDetails ReturnValue;

	}; GetSelectedItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AkAudio.AkWwiseTree.GetSearchText
inline struct FString UAkWwiseTree::GetSearchText() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWwiseTree.GetSearchText");

	struct GetSearchText_Params {
		
		struct FString ReturnValue;

	}; GetSearchText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering
inline void UAkXboxOneInitializationSettings::MigrateMultiCoreRendering(char NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering");

	struct MigrateMultiCoreRendering_Params {
		char NewValue;
	}; MigrateMultiCoreRendering_Params Params;

	Params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.PostEventAsync.PostEventAsync
inline struct UPostEventAsync UPostEventAsync::PostEventAsync(struct Object WorldContextObject, struct UAkAudioEvent AkEvent, struct UActor Actor, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, char bStopWhenAttachedToDestroyed) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.PostEventAsync.PostEventAsync");

	struct PostEventAsync_Params {
		struct Object WorldContextObject;
		struct UAkAudioEvent AkEvent;
		struct UActor Actor;
		int32_t CallbackMask;
		struct FDelegate& PostEventCallback;
		struct TArray<struct FAkExternalSourceInfo>& ExternalSources;
		char bStopWhenAttachedToDestroyed;
		struct UPostEventAsync ReturnValue;

	}; PostEventAsync_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.AkEvent = AkEvent;
	Params.Actor = Actor;
	Params.CallbackMask = CallbackMask;
	Params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PostEventCallback = Params.PostEventCallback;
	ExternalSources = Params.ExternalSources;


	return params.ReturnValue;
}

// Function AkAudio.PostEventAsync.PollPostEventFuture
inline void UPostEventAsync::PollPostEventFuture() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.PostEventAsync.PollPostEventFuture");

	struct PollPostEventFuture_Params {
		
	}; PollPostEventFuture_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync
inline struct UPostEventAtLocationAsync UPostEventAtLocationAsync::PostEventAtLocationAsync(struct Object WorldContextObject, struct UAkAudioEvent AkEvent, struct FVector Location, struct FRotator Orientation) {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync");

	struct PostEventAtLocationAsync_Params {
		struct Object WorldContextObject;
		struct UAkAudioEvent AkEvent;
		struct FVector Location;
		struct FRotator Orientation;
		struct UPostEventAtLocationAsync ReturnValue;

	}; PostEventAtLocationAsync_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.AkEvent = AkEvent;
	Params.Location = Location;
	Params.Orientation = Orientation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture
inline void UPostEventAtLocationAsync::PollPostEventFuture() {
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture");

	struct PollPostEventFuture_Params {
		
	}; PollPostEventFuture_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

