// Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class MovieScene3DPathSection_Axis : uint8 {
	MovieScene3DPathSection_Axis = 0
	MovieScene3DPathSection_Axis = 1
	MovieScene3DPathSection_Axis = 2
	MovieScene3DPathSection_Axis = 3
	MovieScene3DPathSection_Axis = 4
	MovieScene3DPathSection_Axis = 5
	MovieScene3DPathSection_Axis = 6
};

// Enum MovieSceneTracks.EFireEventsAtPosition
enum class EFireEventsAtPosition : uint8 {
	EFireEventsAtPosition = 0
	EFireEventsAtPosition = 1
	EFireEventsAtPosition = 2
	EFireEventsAtPosition = 3
};

// Enum MovieSceneTracks.ELevelVisibility
enum class ELevelVisibility : uint8 {
	ELevelVisibility = 0
	ELevelVisibility = 1
	ELevelVisibility = 2
};

// Enum MovieSceneTracks.EParticleKey
enum class EParticleKey : uint8 {
	EParticleKey = 0
	EParticleKey = 1
	EParticleKey = 2
	EParticleKey = 3
};

// Class MovieSceneTracks.MovieScenePropertyTrack
struct UMovieScenePropertyTrack : UMovieSceneNameableTrack {
	struct Unknown SectionToKey; // 0x58 (8)
	struct FName PropertyName; // 0x60 (8)
	struct FString PropertyPath; // 0x68 (16)
	struct TArray<Unknown> Sections; // 0x78 (16)
};

// Class MovieSceneTracks.MovieScene3DConstraintSection
struct UMovieScene3DConstraintSection : UMovieSceneSection {
	struct Unknown ConstraintId; // 0xE0 (16)
	struct Unknown ConstraintBindingID; // 0xF0 (24)

	void SetConstraintBindingID(struct Unknown& InConstraintBindingID); // Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x328FCA0>
	struct Unknown GetConstraintBindingID(); // Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x328FC20>
};

// Class MovieSceneTracks.MovieScene3DAttachSection
struct UMovieScene3DAttachSection : UMovieScene3DConstraintSection {
	struct FName AttachSocketName; // 0x108 (8)
	struct FName AttachComponentName; // 0x110 (8)
	enum class Unknow AttachmentLocationRule; // 0x118 (1)
	enum class Unknow AttachmentRotationRule; // 0x119 (1)
	enum class Unknow AttachmentScaleRule; // 0x11A (1)
	enum class Unknow DetachmentLocationRule; // 0x11B (1)
	enum class Unknow DetachmentRotationRule; // 0x11C (1)
	enum class Unknow DetachmentScaleRule; // 0x11D (1)
};

// Class MovieSceneTracks.MovieScene3DConstraintTrack
struct UMovieScene3DConstraintTrack : UMovieSceneTrack {
	struct TArray<Unknown> ConstraintSections; // 0x58 (16)
};

// Class MovieSceneTracks.MovieScene3DPathSection
struct UMovieScene3DPathSection : UMovieScene3DConstraintSection {
	struct Unknown TimingCurve; // 0x108 (160)
	enum class Unknow FrontAxisEnum; // 0x1A8 (1)
	enum class Unknow UpAxisEnum; // 0x1A9 (1)
	char bFollow : 0; // 0x1AC (1)
	char b : 0; // 0x1AC (1)
	char bForceUpright : 0; // 0x1AC (1)
};

// Class MovieSceneTracks.MovieScene3DTransformSection
struct UMovieScene3DTransformSection : UMovieSceneSection {
	struct Unknown TransformMask; // 0xE0 (4)
	struct Unknown Translation[0x3]; // 0xE8 (480)
	struct Unknown Rotation[0x3]; // 0x2C8 (480)
	struct Unknown Scale[0x3]; // 0x4A8 (480)
	struct Unknown ManualWeight; // 0x688 (160)
	char bUseQuaternionInterpolation : 0; // 0x72C (1)
};

// Class MovieSceneTracks.MovieSceneActorReferenceSection
struct UMovieSceneActorReferenceSection : UMovieSceneSection {
	struct Unknown ActorReferenceData; // 0xE0 (176)
	struct Unknown ActorGuidIndexCurve; // 0x190 (128)
	struct TArray<Unknown> ActorGuidStrings; // 0x210 (16)
};

// Class MovieSceneTracks.MovieSceneAudioSection
struct UMovieSceneAudioSection : UMovieSceneSection {
	struct Unknown Sound; // 0xE0 (8)
	struct Unknown StartFrameOffset; // 0xE8 (4)
	float StartOffset; // 0xEC (4)
	float AudioStartTime; // 0xF0 (4)
	float AudioDilationFactor; // 0xF4 (4)
	float AudioVolume; // 0xF8 (4)
	struct Unknown SoundVolume; // 0x100 (160)
	struct Unknown PitchMultiplier; // 0x1A0 (160)
	struct Unknown AttachActorData; // 0x240 (176)
	char bSuppressSubtitles : 0; // 0x2F0 (1)
	char bOverrideAttenuation : 0; // 0x2F1 (1)
	struct Unknown AttenuationSettings; // 0x2F8 (8)
	struct FDelegate OnQueueSubtitles; // 0x300 (16)
	struct FMulticastInlineDelegate OnAudioFinished; // 0x310 (16)
	struct FMulticastInlineDelegate OnAudioPlaybackPercent; // 0x320 (16)

	void SetStartOffset(struct Unknown InStartOffset); // Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x328FDE0>
	void SetSound(struct Unknown InSound); // Function MovieSceneTracks.MovieSceneAudioSection.SetSound(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x328FD60>
	struct Unknown GetStartOffset(); // Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x328FC80>
	struct Unknown GetSound(); // Function MovieSceneTracks.MovieSceneAudioSection.GetSound(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x328FC60>
};

// Class MovieSceneTracks.MovieSceneAudioTrack
struct UMovieSceneAudioTrack : UMovieSceneNameableTrack {
	struct TArray<Unknown> AudioSections; // 0x58 (16)
};

// Class MovieSceneTracks.MovieSceneBoolSection
struct UMovieSceneBoolSection : UMovieSceneSection {
	char DefaultValue : 0; // 0xE0 (1)
	struct Unknown BoolCurve; // 0xE8 (144)
};

// Class MovieSceneTracks.MovieSceneByteSection
struct UMovieSceneByteSection : UMovieSceneSection {
	struct Unknown ByteCurve; // 0xE0 (152)
};

// Class MovieSceneTracks.MovieSceneByteTrack
struct UMovieSceneByteTrack : UMovieScenePropertyTrack {
	struct Unknown Enum; // 0x88 (8)
};

// Class MovieSceneTracks.MovieSceneCameraAnimSection
struct UMovieSceneCameraAnimSection : UMovieSceneSection {
	struct Unknown AnimData; // 0xE0 (32)
	struct Unknown CameraAnim; // 0x100 (8)
	float PlayRate; // 0x108 (4)
	float PlayScale; // 0x10C (4)
	float BlendInTime; // 0x110 (4)
	float BlendOutTime; // 0x114 (4)
	char bLooping : 0; // 0x118 (1)
};

// Class MovieSceneTracks.MovieSceneCameraAnimTrack
struct UMovieSceneCameraAnimTrack : UMovieSceneNameableTrack {
	struct TArray<Unknown> CameraAnimSections; // 0x58 (16)
};

// Class MovieSceneTracks.MovieSceneCameraCutSection
struct UMovieSceneCameraCutSection : UMovieSceneSection {
	struct Unknown CameraGuid; // 0xE0 (16)
	struct Unknown CameraBindingID; // 0xF0 (24)

	void SetCameraBindingID(struct Unknown& InCameraBindingID); // Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3297570>
	struct Unknown GetCameraBindingID(); // Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x328FC20>
};

// Class MovieSceneTracks.MovieSceneCameraCutTrack
struct UMovieSceneCameraCutTrack : UMovieSceneNameableTrack {
	char bCanBlend : 0; // 0x58 (1)
	struct TArray<Unknown> Sections; // 0x60 (16)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSection
struct UMovieSceneCameraShakeSection : UMovieSceneSection {
	struct Unknown ShakeData; // 0xE0 (32)
	struct Unknown* ShakeClass; // 0x100 (8)
	float PlayScale; // 0x108 (4)
	char PlaySpace; // 0x10C (1)
	struct Unknown UserDefinedPlaySpace; // 0x110 (12)
};

// Class MovieSceneTracks.MovieSceneCameraShakeTrack
struct UMovieSceneCameraShakeTrack : UMovieSceneNameableTrack {
	struct TArray<Unknown> CameraShakeSections; // 0x58 (16)
};

// Class MovieSceneTracks.MovieSceneCinematicShotSection
struct UMovieSceneCinematicShotSection : UMovieSceneSubSection {
	struct FString ShotDisplayName; // 0x158 (16)
	struct FText DisplayName; // 0x168 (24)

	void SetShotDisplayName(struct FString InShotDisplayName); // Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x32976E0>
	struct FString GetShotDisplayName(); // Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3297470>
};

// Class MovieSceneTracks.MovieSceneColorSection
struct UMovieSceneColorSection : UMovieSceneSection {
	struct Unknown RedCurve; // 0xE0 (160)
	struct Unknown GreenCurve; // 0x180 (160)
	struct Unknown BlueCurve; // 0x220 (160)
	struct Unknown AlphaCurve; // 0x2C0 (160)
};

// Class MovieSceneTracks.MovieSceneColorTrack
struct UMovieSceneColorTrack : UMovieScenePropertyTrack {
	char bIsSlateColor : 0; // 0x88 (1)
};

// Class MovieSceneTracks.MovieSceneEnumSection
struct UMovieSceneEnumSection : UMovieSceneSection {
	struct Unknown EnumCurve; // 0xE0 (152)
};

// Class MovieSceneTracks.MovieSceneEnumTrack
struct UMovieSceneEnumTrack : UMovieScenePropertyTrack {
	struct Unknown Enum; // 0x88 (8)
};

// Class MovieSceneTracks.MovieSceneEventRepeaterSection
struct UMovieSceneEventRepeaterSection : UMovieSceneEventSectionBase {
	struct Unknown Event; // 0xE0 (40)
};

// Class MovieSceneTracks.MovieSceneEventSection
struct UMovieSceneEventSection : UMovieSceneSection {
	struct Unknown Events; // 0xE0 (120)
	struct Unknown eventData; // 0x158 (136)
};

// Class MovieSceneTracks.MovieSceneEventTrack
struct UMovieSceneEventTrack : UMovieSceneNameableTrack {
	char bFireEventsWhenForwards : 0; // 0x58 (1)
	char bFireEventsWhenBackwards : 0; // 0x58 (1)
	enum class Unknow EventPosition; // 0x5C (1)
	struct TArray<Unknown> EventReceivers; // 0x60 (16)
	struct TArray<Unknown> Sections; // 0x70 (16)
};

// Class MovieSceneTracks.MovieSceneEventTriggerSection
struct UMovieSceneEventTriggerSection : UMovieSceneEventSectionBase {
	struct Unknown EventChannel; // 0xE0 (136)
};

// Class MovieSceneTracks.MovieSceneFloatSection
struct UMovieSceneFloatSection : UMovieSceneSection {
	struct Unknown FloatCurve; // 0xE0 (160)
};

// Class MovieSceneTracks.MovieSceneFadeSection
struct UMovieSceneFadeSection : UMovieSceneFloatSection {
	struct Unknown FadeColor; // 0x180 (16)
	char bFadeAudio : 0; // 0x190 (1)
};

// Class MovieSceneTracks.MovieSceneIntegerSection
struct UMovieSceneIntegerSection : UMovieSceneSection {
	struct Unknown IntegerCurve; // 0xE0 (144)
};

// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
struct UMovieSceneLevelVisibilitySection : UMovieSceneSection {
	enum class Unknow Visibility; // 0xE0 (1)
	struct TArray<Unknown> LevelNames; // 0xE8 (16)

	void SetVisibility(enum class Unknow InVisibility); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x32977E0>
	void SetLevelNames(struct TArray<Unknown>& InLevelNames); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3297630>
	enum class Unknow GetVisibility(); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3297540>
	struct TArray<Unknown> GetLevelNames(); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3297440>
};

// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
struct UMovieSceneLevelVisibilityTrack : UMovieSceneNameableTrack {
	struct TArray<Unknown> Sections; // 0x58 (16)
};

// Class MovieSceneTracks.MovieSceneMaterialTrack
struct UMovieSceneMaterialTrack : UMovieSceneNameableTrack {
	struct TArray<Unknown> Sections; // 0x58 (16)
};

// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
struct UMovieSceneMaterialParameterCollectionTrack : UMovieSceneMaterialTrack {
	struct Unknown MPC; // 0x68 (8)
};

// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
struct UMovieSceneComponentMaterialTrack : UMovieSceneMaterialTrack {
	int32_t MaterialIndex; // 0x68 (4)
};

// Class MovieSceneTracks.MovieSceneObjectPropertySection
struct UMovieSceneObjectPropertySection : UMovieSceneSection {
	struct Unknown ObjectChannel; // 0xE0 (192)
};

// Class MovieSceneTracks.MovieSceneObjectPropertyTrack
struct UMovieSceneObjectPropertyTrack : UMovieScenePropertyTrack {
	struct Unknown* PropertyClass; // 0x88 (8)
};

// Class MovieSceneTracks.MovieSceneParameterSection
struct UMovieSceneParameterSection : UMovieSceneSection {
	struct TArray<Unknown> BoolParameterNamesAndCurves; // 0xE0 (16)
	struct TArray<Unknown> ScalarParameterNamesAndCurves; // 0xF0 (16)
	struct TArray<Unknown> Vector2DParameterNamesAndCurves; // 0x100 (16)
	struct TArray<Unknown> VectorParameterNamesAndCurves; // 0x110 (16)
	struct TArray<Unknown> ColorParameterNamesAndCurves; // 0x120 (16)
	struct TArray<Unknown> TransformParameterNamesAndCurves; // 0x130 (16)
};

// Class MovieSceneTracks.MovieSceneParticleParameterTrack
struct UMovieSceneParticleParameterTrack : UMovieSceneNameableTrack {
	struct TArray<Unknown> Sections; // 0x58 (16)
};

// Class MovieSceneTracks.MovieSceneParticleSection
struct UMovieSceneParticleSection : UMovieSceneSection {
	struct Unknown ParticleKeys; // 0xE0 (152)
};

// Class MovieSceneTracks.MovieSceneParticleTrack
struct UMovieSceneParticleTrack : UMovieSceneNameableTrack {
	struct TArray<Unknown> ParticleSections; // 0x58 (16)
};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
struct UMovieScenePrimitiveMaterialSection : UMovieSceneSection {
	struct Unknown MaterialChannel; // 0xE0 (192)
};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
struct UMovieScenePrimitiveMaterialTrack : UMovieScenePropertyTrack {
	int32_t MaterialIndex; // 0x88 (4)
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
struct UMovieSceneSkeletalAnimationSection : UMovieSceneSection {
	struct Unknown Params; // 0xE0 (216)
	struct Unknown AnimSequence; // 0x1B8 (8)
	struct Unknown Animation; // 0x1C0 (8)
	float StartOffset; // 0x1C8 (4)
	float EndOffset; // 0x1CC (4)
	float PlayRate; // 0x1D0 (4)
	char b : 0; // 0x1D4 (1)
	struct FName SlotName; // 0x1D8 (8)
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
struct UMovieSceneSkeletalAnimationTrack : UMovieSceneNameableTrack {
	struct TArray<Unknown> AnimationSections; // 0x58 (16)
	char bUseLegacySectionIndexBlend : 0; // 0x68 (1)
};

// Class MovieSceneTracks.MovieSceneSpawnTrack
struct UMovieSceneSpawnTrack : UMovieSceneTrack {
	struct TArray<Unknown> Sections; // 0x58 (16)
	struct Unknown ObjectGuid; // 0x68 (16)
};

// Class MovieSceneTracks.MovieSceneStringSection
struct UMovieSceneStringSection : UMovieSceneSection {
	struct Unknown StringCurve; // 0xE0 (160)
};

// Class MovieSceneTracks.MovieSceneVectorSection
struct UMovieSceneVectorSection : UMovieSceneSection {
	struct Unknown Curves[0x4]; // 0xE0 (640)
	int32_t ChannelsUsed; // 0x360 (4)
};

// Class MovieSceneTracks.MovieSceneVectorTrack
struct UMovieSceneVectorTrack : UMovieScenePropertyTrack {
	int32_t NumChannelsUsed; // 0x88 (4)
};

