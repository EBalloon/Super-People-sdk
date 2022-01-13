// Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class MovieScene3DPathSection_Axis : uint8_t {
	X = 0,
	Y = 1,
	Z = 2,
	NEG_X = 3,
	NEG_Y = 4,
	NEG_Z = 5,
	MovieScene3DPathSection_MAX = 6,
};

// Enum MovieSceneTracks.EFireEventsAtPosition
enum class EFireEventsAtPosition : uint8_t {
	AtStartOfEvaluation = 0,
	AtEndOfEvaluation = 1,
	AfterSpawn = 2,
	EFireEventsAtPosition_MAX = 3,
};

// Enum MovieSceneTracks.ELevelVisibility
enum class ELevelVisibility : uint8_t {
	Visible = 0,
	Hidden = 1,
	ELevelVisibility_MAX = 2,
};

// Enum MovieSceneTracks.EParticleKey
enum class EParticleKey : uint8_t {
	Activate = 0,
	Deactivate = 1,
	Trigger = 2,
	EParticleKey_MAX = 3,
};

// Class MovieSceneTracks.MovieScenePropertyTrack
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack {

public:

	struct UMovieSceneSection SectionToKey; // 0x58 (8)
	struct FName PropertyName; // 0x60 (8)
	struct FString PropertyPath; // 0x68 (16)
	struct TArray<struct UMovieSceneSection> Sections; // 0x78 (16)
};

// Class MovieSceneTracks.MovieScene3DConstraintSection
class UMovieScene3DConstraintSection : public UMovieSceneSection {

public:

	struct FGuid ConstraintId; // 0xE0 (16)
	struct FMovieSceneObjectBindingID ConstraintBindingID; // 0xF0 (24)

	void SetConstraintBindingID(struct FMovieSceneObjectBindingID& InConstraintBindingID); // Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3A66770>
	struct FMovieSceneObjectBindingID GetConstraintBindingID(); // Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3A666F0>
};

// Class MovieSceneTracks.MovieScene3DAttachSection
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection {

public:

	struct FName AttachSocketName; // 0x108 (8)
	struct FName AttachComponentName; // 0x110 (8)
	enum class EAttachmentRule AttachmentLocationRule; // 0x118 (1)
	enum class EAttachmentRule AttachmentRotationRule; // 0x119 (1)
	enum class EAttachmentRule AttachmentScaleRule; // 0x11A (1)
	enum class EDetachmentRule DetachmentLocationRule; // 0x11B (1)
	enum class EDetachmentRule DetachmentRotationRule; // 0x11C (1)
	enum class EDetachmentRule DetachmentScaleRule; // 0x11D (1)
};

// Class MovieSceneTracks.MovieScene3DConstraintTrack
class UMovieScene3DConstraintTrack : public UMovieSceneTrack {

public:

	struct TArray<struct UMovieSceneSection> ConstraintSections; // 0x58 (16)
};

// Class MovieSceneTracks.MovieScene3DPathSection
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection {

public:

	struct FMovieSceneFloatChannel TimingCurve; // 0x108 (160)
	enum class MovieScene3DPathSection_Axis FrontAxisEnum; // 0x1A8 (1)
	enum class MovieScene3DPathSection_Axis UpAxisEnum; // 0x1A9 (1)
	char bFollow : 0; // 0x1AC (1)
	char bReverse : 0; // 0x1AC (1)
	char bForceUpright : 0; // 0x1AC (1)
};

// Class MovieSceneTracks.MovieScene3DTransformSection
class UMovieScene3DTransformSection : public UMovieSceneSection {

public:

	struct FMovieSceneTransformMask TransformMask; // 0xE0 (4)
	struct FMovieSceneFloatChannel Translation[0x3]; // 0xE8 (480)
	struct FMovieSceneFloatChannel Rotation[0x3]; // 0x2C8 (480)
	struct FMovieSceneFloatChannel Scale[0x3]; // 0x4A8 (480)
	struct FMovieSceneFloatChannel ManualWeight; // 0x688 (160)
	char bUseQuaternionInterpolation : 0; // 0x72C (1)
};

// Class MovieSceneTracks.MovieSceneActorReferenceSection
class UMovieSceneActorReferenceSection : public UMovieSceneSection {

public:

	struct FMovieSceneActorReferenceData ActorReferenceData; // 0xE0 (176)
	struct FIntegralCurve ActorGuidIndexCurve; // 0x190 (128)
	struct TArray<struct FString> ActorGuidStrings; // 0x210 (16)
};

// Class MovieSceneTracks.MovieSceneAudioSection
class UMovieSceneAudioSection : public UMovieSceneSection {

public:

	struct USoundBase Sound; // 0xE0 (8)
	struct FFrameNumber StartFrameOffset; // 0xE8 (4)
	float StartOffset; // 0xEC (4)
	float AudioStartTime; // 0xF0 (4)
	float AudioDilationFactor; // 0xF4 (4)
	float AudioVolume; // 0xF8 (4)
	struct FMovieSceneFloatChannel SoundVolume; // 0x100 (160)
	struct FMovieSceneFloatChannel PitchMultiplier; // 0x1A0 (160)
	struct FMovieSceneActorReferenceData AttachActorData; // 0x240 (176)
	char bSuppressSubtitles : 0; // 0x2F0 (1)
	char bOverrideAttenuation : 0; // 0x2F1 (1)
	struct USoundAttenuation AttenuationSettings; // 0x2F8 (8)
	struct FDelegate OnQueueSubtitles; // 0x300 (16)
	struct FMulticastInlineDelegate OnAudioFinished; // 0x310 (16)
	struct FMulticastInlineDelegate OnAudioPlaybackPercent; // 0x320 (16)

	void SetStartOffset(struct FFrameNumber InStartOffset); // Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3A668B0>
	void SetSound(struct USoundBase InSound); // Function MovieSceneTracks.MovieSceneAudioSection.SetSound(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3A66830>
	struct FFrameNumber GetStartOffset(); // Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3A66750>
	struct USoundBase GetSound(); // Function MovieSceneTracks.MovieSceneAudioSection.GetSound(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3A66730>
};

// Class MovieSceneTracks.MovieSceneAudioTrack
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack {

public:

	struct TArray<struct UMovieSceneSection> AudioSections; // 0x58 (16)
};

// Class MovieSceneTracks.MovieSceneBoolSection
class UMovieSceneBoolSection : public UMovieSceneSection {

public:

	char DefaultValue : 0; // 0xE0 (1)
	struct FMovieSceneBoolChannel BoolCurve; // 0xE8 (144)
};

// Class MovieSceneTracks.MovieSceneByteSection
class UMovieSceneByteSection : public UMovieSceneSection {

public:

	struct FMovieSceneByteChannel ByteCurve; // 0xE0 (152)
};

// Class MovieSceneTracks.MovieSceneByteTrack
class UMovieSceneByteTrack : public UMovieScenePropertyTrack {

public:

	struct UEnum Enum; // 0x88 (8)
};

// Class MovieSceneTracks.MovieSceneCameraAnimSection
class UMovieSceneCameraAnimSection : public UMovieSceneSection {

public:

	struct FMovieSceneCameraAnimSectionData AnimData; // 0xE0 (32)
	struct UCameraAnim CameraAnim; // 0x100 (8)
	float PlayRate; // 0x108 (4)
	float PlayScale; // 0x10C (4)
	float BlendInTime; // 0x110 (4)
	float BlendOutTime; // 0x114 (4)
	char bLooping : 0; // 0x118 (1)
};

// Class MovieSceneTracks.MovieSceneCameraAnimTrack
class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack {

public:

	struct TArray<struct UMovieSceneSection> CameraAnimSections; // 0x58 (16)
};

// Class MovieSceneTracks.MovieSceneCameraCutSection
class UMovieSceneCameraCutSection : public UMovieSceneSection {

public:

	struct FGuid CameraGuid; // 0xE0 (16)
	struct FMovieSceneObjectBindingID CameraBindingID; // 0xF0 (24)

	void SetCameraBindingID(struct FMovieSceneObjectBindingID& InCameraBindingID); // Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3A6E040>
	struct FMovieSceneObjectBindingID GetCameraBindingID(); // Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3A666F0>
};

// Class MovieSceneTracks.MovieSceneCameraCutTrack
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack {

public:

	char bCanBlend : 0; // 0x58 (1)
	struct TArray<struct UMovieSceneSection> Sections; // 0x60 (16)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSection
class UMovieSceneCameraShakeSection : public UMovieSceneSection {

public:

	struct FMovieSceneCameraShakeSectionData ShakeData; // 0xE0 (32)
	struct UClass* ShakeClass; // 0x100 (8)
	float PlayScale; // 0x108 (4)
	char PlaySpace; // 0x10C (1)
	struct FRotator UserDefinedPlaySpace; // 0x110 (12)
};

// Class MovieSceneTracks.MovieSceneCameraShakeTrack
class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack {

public:

	struct TArray<struct UMovieSceneSection> CameraShakeSections; // 0x58 (16)
};

// Class MovieSceneTracks.MovieSceneCinematicShotSection
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection {

public:

	struct FString ShotDisplayName; // 0x158 (16)
	struct FText DisplayName; // 0x168 (24)

	void SetShotDisplayName(struct FString InShotDisplayName); // Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3A6E1B0>
	struct FString GetShotDisplayName(); // Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3A6DF40>
};

// Class MovieSceneTracks.MovieSceneColorSection
class UMovieSceneColorSection : public UMovieSceneSection {

public:

	struct FMovieSceneFloatChannel RedCurve; // 0xE0 (160)
	struct FMovieSceneFloatChannel GreenCurve; // 0x180 (160)
	struct FMovieSceneFloatChannel BlueCurve; // 0x220 (160)
	struct FMovieSceneFloatChannel AlphaCurve; // 0x2C0 (160)
};

// Class MovieSceneTracks.MovieSceneColorTrack
class UMovieSceneColorTrack : public UMovieScenePropertyTrack {

public:

	char bIsSlateColor : 0; // 0x88 (1)
};

// Class MovieSceneTracks.MovieSceneEnumSection
class UMovieSceneEnumSection : public UMovieSceneSection {

public:

	struct FMovieSceneByteChannel EnumCurve; // 0xE0 (152)
};

// Class MovieSceneTracks.MovieSceneEnumTrack
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack {

public:

	struct UEnum Enum; // 0x88 (8)
};

// Class MovieSceneTracks.MovieSceneEventRepeaterSection
class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase {

public:

	struct FMovieSceneEvent Event; // 0xE0 (40)
};

// Class MovieSceneTracks.MovieSceneEventSection
class UMovieSceneEventSection : public UMovieSceneSection {

public:

	struct FNameCurve Events; // 0xE0 (120)
	struct FMovieSceneEventSectionData eventData; // 0x158 (136)
};

// Class MovieSceneTracks.MovieSceneEventTrack
class UMovieSceneEventTrack : public UMovieSceneNameableTrack {

public:

	char bFireEventsWhenForwards : 0; // 0x58 (1)
	char bFireEventsWhenBackwards : 0; // 0x58 (1)
	enum class EFireEventsAtPosition EventPosition; // 0x5C (1)
	struct TArray<struct FMovieSceneObjectBindingID> EventReceivers; // 0x60 (16)
	struct TArray<struct UMovieSceneSection> Sections; // 0x70 (16)
};

// Class MovieSceneTracks.MovieSceneEventTriggerSection
class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase {

public:

	struct FMovieSceneEventChannel EventChannel; // 0xE0 (136)
};

// Class MovieSceneTracks.MovieSceneFloatSection
class UMovieSceneFloatSection : public UMovieSceneSection {

public:

	struct FMovieSceneFloatChannel FloatCurve; // 0xE0 (160)
};

// Class MovieSceneTracks.MovieSceneFadeSection
class UMovieSceneFadeSection : public UMovieSceneFloatSection {

public:

	struct FLinearColor FadeColor; // 0x180 (16)
	char bFadeAudio : 0; // 0x190 (1)
};

// Class MovieSceneTracks.MovieSceneIntegerSection
class UMovieSceneIntegerSection : public UMovieSceneSection {

public:

	struct FMovieSceneIntegerChannel IntegerCurve; // 0xE0 (144)
};

// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection {

public:

	enum class ELevelVisibility Visibility; // 0xE0 (1)
	struct TArray<struct FName> LevelNames; // 0xE8 (16)

	void SetVisibility(enum class ELevelVisibility InVisibility); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3A6E2B0>
	void SetLevelNames(struct TArray<struct FName>& InLevelNames); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3A6E100>
	enum class ELevelVisibility GetVisibility(); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3A6E010>
	struct TArray<struct FName> GetLevelNames(); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3A6DF10>
};

// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack {

public:

	struct TArray<struct UMovieSceneSection> Sections; // 0x58 (16)
};

// Class MovieSceneTracks.MovieSceneMaterialTrack
class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack {

public:

	struct TArray<struct UMovieSceneSection> Sections; // 0x58 (16)
};

// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack {

public:

	struct UMaterialParameterCollection MPC; // 0x68 (8)
};

// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack {

public:

	int32_t MaterialIndex; // 0x68 (4)
};

// Class MovieSceneTracks.MovieSceneObjectPropertySection
class UMovieSceneObjectPropertySection : public UMovieSceneSection {

public:

	struct FMovieSceneObjectPathChannel ObjectChannel; // 0xE0 (192)
};

// Class MovieSceneTracks.MovieSceneObjectPropertyTrack
class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack {

public:

	struct UClass* PropertyClass; // 0x88 (8)
};

// Class MovieSceneTracks.MovieSceneParameterSection
class UMovieSceneParameterSection : public UMovieSceneSection {

public:

	struct TArray<struct FBoolParameterNameAndCurve> BoolParameterNamesAndCurves; // 0xE0 (16)
	struct TArray<struct FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; // 0xF0 (16)
	struct TArray<struct FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves; // 0x100 (16)
	struct TArray<struct FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; // 0x110 (16)
	struct TArray<struct FColorParameterNameAndCurves> ColorParameterNamesAndCurves; // 0x120 (16)
	struct TArray<struct FTransformParameterNameAndCurves> TransformParameterNamesAndCurves; // 0x130 (16)
};

// Class MovieSceneTracks.MovieSceneParticleParameterTrack
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack {

public:

	struct TArray<struct UMovieSceneSection> Sections; // 0x58 (16)
};

// Class MovieSceneTracks.MovieSceneParticleSection
class UMovieSceneParticleSection : public UMovieSceneSection {

public:

	struct FMovieSceneParticleChannel ParticleKeys; // 0xE0 (152)
};

// Class MovieSceneTracks.MovieSceneParticleTrack
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack {

public:

	struct TArray<struct UMovieSceneSection> ParticleSections; // 0x58 (16)
};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection {

public:

	struct FMovieSceneObjectPathChannel MaterialChannel; // 0xE0 (192)
};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack {

public:

	int32_t MaterialIndex; // 0x88 (4)
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection {

public:

	struct FMovieSceneSkeletalAnimationParams Params; // 0xE0 (216)
	struct UAnimSequence AnimSequence; // 0x1B8 (8)
	struct UAnimSequenceBase Animation; // 0x1C0 (8)
	float StartOffset; // 0x1C8 (4)
	float EndOffset; // 0x1CC (4)
	float PlayRate; // 0x1D0 (4)
	char bReverse : 0; // 0x1D4 (1)
	struct FName SlotName; // 0x1D8 (8)
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack {

public:

	struct TArray<struct UMovieSceneSection> AnimationSections; // 0x58 (16)
	char bUseLegacySectionIndexBlend : 0; // 0x68 (1)
};

// Class MovieSceneTracks.MovieSceneSpawnTrack
class UMovieSceneSpawnTrack : public UMovieSceneTrack {

public:

	struct TArray<struct UMovieSceneSection> Sections; // 0x58 (16)
	struct FGuid ObjectGuid; // 0x68 (16)
};

// Class MovieSceneTracks.MovieSceneStringSection
class UMovieSceneStringSection : public UMovieSceneSection {

public:

	struct FMovieSceneStringChannel StringCurve; // 0xE0 (160)
};

// Class MovieSceneTracks.MovieSceneVectorSection
class UMovieSceneVectorSection : public UMovieSceneSection {

public:

	struct FMovieSceneFloatChannel Curves[0x4]; // 0xE0 (640)
	int32_t ChannelsUsed; // 0x360 (4)
};

// Class MovieSceneTracks.MovieSceneVectorTrack
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack {

public:

	int32_t NumChannelsUsed; // 0x88 (4)
};

// ScriptStruct MovieSceneTracks.MovieScene3DAttachSectionTemplate
struct FMovieScene3DAttachSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneObjectBindingID AttachBindingID; // 0x20 (24)
	struct FName AttachSocketName; // 0x38 (8)
	struct FName AttachComponentName; // 0x40 (8)
	enum class EAttachmentRule AttachmentLocationRule; // 0x48 (1)
	enum class EAttachmentRule AttachmentRotationRule; // 0x49 (1)
	enum class EAttachmentRule AttachmentScaleRule; // 0x4A (1)
	enum class EDetachmentRule DetachmentLocationRule; // 0x4B (1)
	enum class EDetachmentRule DetachmentRotationRule; // 0x4C (1)
	enum class EDetachmentRule DetachmentScaleRule; // 0x4D (1)
};

// ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
struct FMovieScene3DPathSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneObjectBindingID PathBindingID; // 0x20 (24)
	struct FMovieSceneFloatChannel TimingCurve; // 0x38 (160)
	enum class MovieScene3DPathSection_Axis FrontAxisEnum; // 0xD8 (1)
	enum class MovieScene3DPathSection_Axis UpAxisEnum; // 0xD9 (1)
	char bFollow : 0; // 0xDC (1)
	char bReverse : 0; // 0xDC (1)
	char bForceUpright : 0; // 0xDC (1)
};

// ScriptStruct MovieSceneTracks.MovieSceneTransformMask
struct FMovieSceneTransformMask {
	uint32_t Mask; // 0x0 (4)
};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct {
	struct FVector Location; // 0x8 (12)
	struct FRotator Rotation; // 0x14 (12)
	struct FVector Scale; // 0x20 (12)
	struct FFrameNumber Time; // 0x2C (4)
};

// ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct {
	struct FVector Scale; // 0x8 (12)
	struct FFrameNumber Time; // 0x14 (4)
};

// ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct {
	struct FRotator Rotation; // 0x8 (12)
	struct FFrameNumber Time; // 0x14 (4)
};

// ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct {
	struct FVector Location; // 0x8 (12)
	struct FFrameNumber Time; // 0x14 (4)
};

// ScriptStruct MovieSceneTracks.MovieSceneComponentTransformSectionTemplate
struct FMovieSceneComponentTransformSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieScene3DTransformTemplateData TemplateData; // 0x20 (1616)
};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformTemplateData
struct FMovieScene3DTransformTemplateData {
	struct FMovieSceneFloatChannel TranslationCurve[0x3]; // 0x0 (480)
	struct FMovieSceneFloatChannel RotationCurve[0x3]; // 0x1E0 (480)
	struct FMovieSceneFloatChannel ScaleCurve[0x3]; // 0x3C0 (480)
	struct FMovieSceneFloatChannel ManualWeight; // 0x5A0 (160)
	enum class EMovieSceneBlendType BlendType; // 0x640 (1)
	struct FMovieSceneTransformMask Mask; // 0x644 (4)
	char bUseQuaternionInterpolation : 0; // 0x648 (1)
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceData
struct FMovieSceneActorReferenceData : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> KeyTimes; // 0x8 (16)
	struct TArray<struct FMovieSceneActorReferenceKey> KeyValues; // 0x40 (16)
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceKey
struct FMovieSceneActorReferenceKey {
	struct FMovieSceneObjectBindingID Object; // 0x0 (24)
	struct FName ComponentName; // 0x18 (8)
	struct FName SocketName; // 0x20 (8)
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieScenePropertySectionData PropertyData; // 0x20 (40)
	struct FMovieSceneActorReferenceData ActorReferenceData; // 0x48 (176)
};

// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate {
	struct UMovieSceneAudioSection AudioSection; // 0x20 (8)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
struct FMovieSceneCameraAnimSectionData {
	struct UCameraAnim CameraAnim; // 0x0 (8)
	float PlayRate; // 0x8 (4)
	float PlayScale; // 0xC (4)
	float BlendInTime; // 0x10 (4)
	float BlendOutTime; // 0x14 (4)
	char bLooping : 0; // 0x18 (1)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	struct FMovieSceneCameraShakeSectionData SourceData; // 0x20 (32)
	struct FFrameNumber SectionStartTime; // 0x40 (4)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
struct FMovieSceneCameraShakeSectionData {
	struct UClass* ShakeClass; // 0x0 (8)
	float PlayScale; // 0x8 (4)
	char PlaySpace; // 0xC (1)
	struct FRotator UserDefinedPlaySpace; // 0x10 (12)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	struct FMovieSceneCameraAnimSectionData SourceData; // 0x20 (32)
	struct FFrameNumber SectionStartTime; // 0x40 (4)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraCutSectionTemplate
struct FMovieSceneCameraCutSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneObjectBindingID CameraBindingID; // 0x20 (24)
	struct FTransform CutTransform; // 0x40 (48)
	char bHasCutTransform : 0; // 0x70 (1)
	char bIsFinalSection : 0; // 0x71 (1)
};

// ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct {
	struct FLinearColor Color; // 0x8 (16)
	struct FFrameNumber Time; // 0x18 (4)
};

// ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneFloatChannel Curves[0x4]; // 0x48 (640)
	enum class EMovieSceneBlendType BlendType; // 0x2C8 (1)
};

// ScriptStruct MovieSceneTracks.MovieSceneEvent
struct FMovieSceneEvent {
	struct FMovieSceneEventPtrs Ptrs; // 0x0 (40)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventPtrs
struct FMovieSceneEventPtrs {
	struct UFunction Function; // 0x0 (8)
	struct TFieldPath<FNone> BoundObjectProperty; // 0x8 (32)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventPayloadVariable
struct FMovieSceneEventPayloadVariable {
	struct FString Value; // 0x0 (16)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventChannel
struct FMovieSceneEventChannel : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> KeyTimes; // 0x8 (16)
	struct TArray<struct FMovieSceneEvent> KeyValues; // 0x18 (16)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
struct FMovieSceneEventSectionData : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> Times; // 0x8 (16)
	struct TArray<struct FEventPayload> KeyValues; // 0x18 (16)
};

// ScriptStruct MovieSceneTracks.EventPayload
struct FEventPayload {
	struct FName EventName; // 0x0 (8)
	struct FMovieSceneEventParameters Parameters; // 0x8 (40)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventTemplateBase
struct FMovieSceneEventTemplateBase : FMovieSceneEvalTemplate {
	struct TArray<struct FMovieSceneObjectBindingID> EventReceivers; // 0x20 (16)
	char bFireEventsWhenForwards : 0; // 0x30 (1)
	char bFireEventsWhenBackwards : 0; // 0x30 (1)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventRepeaterTemplate
struct FMovieSceneEventRepeaterTemplate : FMovieSceneEventTemplateBase {
	struct FMovieSceneEventPtrs EventToTrigger; // 0x38 (40)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventTriggerTemplate
struct FMovieSceneEventTriggerTemplate : FMovieSceneEventTemplateBase {
	struct TArray<struct FFrameNumber> EventTimes; // 0x38 (16)
	struct TArray<struct FMovieSceneEventPtrs> Events; // 0x48 (16)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
struct FMovieSceneEventSectionTemplate : FMovieSceneEventTemplateBase {
	struct FMovieSceneEventSectionData eventData; // 0x38 (136)
};

// ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneFloatChannel FadeCurve; // 0x20 (160)
	struct FLinearColor FadeColor; // 0xC0 (16)
	char bFadeAudio : 0; // 0xD0 (1)
};

// ScriptStruct MovieSceneTracks.MovieSceneLevelVisibilitySectionTemplate
struct FMovieSceneLevelVisibilitySectionTemplate : FMovieSceneEvalTemplate {
	enum class ELevelVisibility Visibility; // 0x20 (1)
	struct TArray<struct FName> LevelNames; // 0x28 (16)
};

// ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate {
	struct TArray<struct FScalarParameterNameAndCurve> Scalars; // 0x20 (16)
	struct TArray<struct FBoolParameterNameAndCurve> Bools; // 0x30 (16)
	struct TArray<struct FVector2DParameterNameAndCurves> Vector2Ds; // 0x40 (16)
	struct TArray<struct FVectorParameterNameAndCurves> Vectors; // 0x50 (16)
	struct TArray<struct FColorParameterNameAndCurves> Colors; // 0x60 (16)
	struct TArray<struct FTransformParameterNameAndCurves> Transforms; // 0x70 (16)
};

// ScriptStruct MovieSceneTracks.TransformParameterNameAndCurves
struct FTransformParameterNameAndCurves {
	struct FName ParameterName; // 0x0 (8)
	struct FMovieSceneFloatChannel Translation[0x3]; // 0x8 (480)
	struct FMovieSceneFloatChannel Rotation[0x3]; // 0x1E8 (480)
	struct FMovieSceneFloatChannel Scale[0x3]; // 0x3C8 (480)
};

// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
struct FColorParameterNameAndCurves {
	struct FName ParameterName; // 0x0 (8)
	struct FMovieSceneFloatChannel RedCurve; // 0x8 (160)
	struct FMovieSceneFloatChannel GreenCurve; // 0xA8 (160)
	struct FMovieSceneFloatChannel BlueCurve; // 0x148 (160)
	struct FMovieSceneFloatChannel AlphaCurve; // 0x1E8 (160)
};

// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
struct FVectorParameterNameAndCurves {
	struct FName ParameterName; // 0x0 (8)
	struct FMovieSceneFloatChannel XCurve; // 0x8 (160)
	struct FMovieSceneFloatChannel YCurve; // 0xA8 (160)
	struct FMovieSceneFloatChannel ZCurve; // 0x148 (160)
};

// ScriptStruct MovieSceneTracks.Vector2DParameterNameAndCurves
struct FVector2DParameterNameAndCurves {
	struct FName ParameterName; // 0x0 (8)
	struct FMovieSceneFloatChannel XCurve; // 0x8 (160)
	struct FMovieSceneFloatChannel YCurve; // 0xA8 (160)
};

// ScriptStruct MovieSceneTracks.BoolParameterNameAndCurve
struct FBoolParameterNameAndCurve {
	struct FName ParameterName; // 0x0 (8)
	struct FMovieSceneBoolChannel ParameterCurve; // 0x8 (144)
};

// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
struct FScalarParameterNameAndCurve {
	struct FName ParameterName; // 0x0 (8)
	struct FMovieSceneFloatChannel ParameterCurve; // 0x8 (160)
};

// ScriptStruct MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate
struct FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate {
	struct UMaterialParameterCollection MPC; // 0x80 (8)
};

// ScriptStruct MovieSceneTracks.MovieSceneObjectPropertyTemplate
struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneObjectPathChannel ObjectChannel; // 0x48 (192)
};

// ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	int32_t MaterialIndex; // 0x80 (4)
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneParticleChannel ParticleKeys; // 0x20 (152)
};

// ScriptStruct MovieSceneTracks.MovieScenePrimitiveMaterialTemplate
struct FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate {
	int32_t MaterialIndex; // 0x20 (4)
	struct FMovieSceneObjectPathChannel MaterialChannel; // 0x28 (192)
};

// ScriptStruct MovieSceneTracks.MovieSceneEulerTransformPropertySectionTemplate
struct FMovieSceneEulerTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieScene3DTransformTemplateData TemplateData; // 0x48 (1616)
};

// ScriptStruct MovieSceneTracks.MovieSceneTransformPropertySectionTemplate
struct FMovieSceneTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieScene3DTransformTemplateData TemplateData; // 0x48 (1616)
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorPropertySectionTemplate
struct FMovieSceneVectorPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneFloatChannel ComponentCurves[0x4]; // 0x48 (640)
	int32_t NumChannelsUsed; // 0x2C8 (4)
	enum class EMovieSceneBlendType BlendType; // 0x2CC (1)
};

// ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneStringChannel StringCurve; // 0x48 (160)
};

// ScriptStruct MovieSceneTracks.MovieSceneStringChannel
struct FMovieSceneStringChannel : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> Times; // 0x8 (16)
	struct TArray<struct FString> Values; // 0x18 (16)
	struct FString DefaultValue; // 0x28 (16)
	char bHasDefaultValue : 0; // 0x38 (1)
};

// ScriptStruct MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate
struct FMovieSceneIntegerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneIntegerChannel IntegerCurve; // 0x48 (144)
	enum class EMovieSceneBlendType BlendType; // 0xD8 (1)
};

// ScriptStruct MovieSceneTracks.MovieSceneEnumPropertySectionTemplate
struct FMovieSceneEnumPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneByteChannel EnumCurve; // 0x48 (152)
};

// ScriptStruct MovieSceneTracks.MovieSceneBytePropertySectionTemplate
struct FMovieSceneBytePropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneByteChannel ByteCurve; // 0x48 (152)
};

// ScriptStruct MovieSceneTracks.MovieSceneFloatPropertySectionTemplate
struct FMovieSceneFloatPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneFloatChannel FloatFunction; // 0x48 (160)
	enum class EMovieSceneBlendType BlendType; // 0xE8 (1)
};

// ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneBoolChannel BoolCurve; // 0x48 (144)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
struct FMovieSceneSkeletalAnimationParams {
	struct UAnimSequenceBase Animation; // 0x0 (8)
	struct FFrameNumber FirstLoopStartFrameOffset; // 0x8 (4)
	struct FFrameNumber StartFrameOffset; // 0xC (4)
	struct FFrameNumber EndFrameOffset; // 0x10 (4)
	float PlayRate; // 0x14 (4)
	char bReverse : 0; // 0x18 (1)
	struct FName SlotName; // 0x1C (8)
	struct FMovieSceneFloatChannel Weight; // 0x28 (160)
	char bSkipAnimNotifiers : 0; // 0xC8 (1)
	char bForceCustomMode : 0; // 0xC9 (1)
	float StartOffset; // 0xCC (4)
	float EndOffset; // 0xD0 (4)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x20 (224)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams {
	struct FFrameNumber SectionStartTime; // 0xD8 (4)
	struct FFrameNumber SectionEndTime; // 0xDC (4)
};

// ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneFloatChannel SlomoCurve; // 0x20 (160)
};

// ScriptStruct MovieSceneTracks.MovieSceneSpawnSectionTemplate
struct FMovieSceneSpawnSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneBoolChannel Curve; // 0x20 (144)
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
struct FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct {
	struct FFrameNumber Time; // 0x8 (4)
};

// ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct
struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase {
	struct FVector4 Vector; // 0x30 (16)
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct
struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase {
	struct FVector Vector; // 0x28 (12)
};

// ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase {
	struct FVector2D Vector; // 0x28 (8)
};

// Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
inline void UMovieScene3DConstraintSection::SetConstraintBindingID(struct FMovieSceneObjectBindingID& InConstraintBindingID) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID");

	struct SetConstraintBindingID_Params {
		struct FMovieSceneObjectBindingID& InConstraintBindingID;
	}; SetConstraintBindingID_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InConstraintBindingID = Params.InConstraintBindingID;

}

// Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
inline struct FMovieSceneObjectBindingID UMovieScene3DConstraintSection::GetConstraintBindingID() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID");

	struct GetConstraintBindingID_Params {
		
		struct FMovieSceneObjectBindingID ReturnValue;

	}; GetConstraintBindingID_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
inline void UMovieSceneAudioSection::SetStartOffset(struct FFrameNumber InStartOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset");

	struct SetStartOffset_Params {
		struct FFrameNumber InStartOffset;
	}; SetStartOffset_Params Params;

	Params.InStartOffset = InStartOffset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieSceneTracks.MovieSceneAudioSection.SetSound
inline void UMovieSceneAudioSection::SetSound(struct USoundBase InSound) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.SetSound");

	struct SetSound_Params {
		struct USoundBase InSound;
	}; SetSound_Params Params;

	Params.InSound = InSound;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
inline struct FFrameNumber UMovieSceneAudioSection::GetStartOffset() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset");

	struct GetStartOffset_Params {
		
		struct FFrameNumber ReturnValue;

	}; GetStartOffset_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieSceneTracks.MovieSceneAudioSection.GetSound
inline struct USoundBase UMovieSceneAudioSection::GetSound() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.GetSound");

	struct GetSound_Params {
		
		struct USoundBase ReturnValue;

	}; GetSound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
inline void UMovieSceneCameraCutSection::SetCameraBindingID(struct FMovieSceneObjectBindingID& InCameraBindingID) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID");

	struct SetCameraBindingID_Params {
		struct FMovieSceneObjectBindingID& InCameraBindingID;
	}; SetCameraBindingID_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InCameraBindingID = Params.InCameraBindingID;

}

// Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
inline struct FMovieSceneObjectBindingID UMovieSceneCameraCutSection::GetCameraBindingID() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID");

	struct GetCameraBindingID_Params {
		
		struct FMovieSceneObjectBindingID ReturnValue;

	}; GetCameraBindingID_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
inline void UMovieSceneCinematicShotSection::SetShotDisplayName(struct FString InShotDisplayName) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName");

	struct SetShotDisplayName_Params {
		struct FString InShotDisplayName;
	}; SetShotDisplayName_Params Params;

	Params.InShotDisplayName = InShotDisplayName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
inline struct FString UMovieSceneCinematicShotSection::GetShotDisplayName() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName");

	struct GetShotDisplayName_Params {
		
		struct FString ReturnValue;

	}; GetShotDisplayName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
inline void UMovieSceneLevelVisibilitySection::SetVisibility(enum class ELevelVisibility InVisibility) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility");

	struct SetVisibility_Params {
		enum class ELevelVisibility InVisibility;
	}; SetVisibility_Params Params;

	Params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
inline void UMovieSceneLevelVisibilitySection::SetLevelNames(struct TArray<struct FName>& InLevelNames) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames");

	struct SetLevelNames_Params {
		struct TArray<struct FName>& InLevelNames;
	}; SetLevelNames_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InLevelNames = Params.InLevelNames;

}

// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
inline enum class ELevelVisibility UMovieSceneLevelVisibilitySection::GetVisibility() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility");

	struct GetVisibility_Params {
		
		enum class ELevelVisibility ReturnValue;

	}; GetVisibility_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
inline struct TArray<struct FName> UMovieSceneLevelVisibilitySection::GetLevelNames() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames");

	struct GetLevelNames_Params {
		
		struct TArray<struct FName> ReturnValue;

	}; GetLevelNames_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

