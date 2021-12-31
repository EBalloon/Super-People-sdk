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

	struct Unknown SectionToKey; // 0x58 (8)
	struct FName PropertyName; // 0x60 (8)
	struct FString PropertyPath; // 0x68 (16)
	struct TArray<Unknown> Sections; // 0x78 (16)
};

// Class MovieSceneTracks.MovieScene3DConstraintSection
class UMovieScene3DConstraintSection : public UMovieSceneSection {

public:

	struct Unknown ConstraintId; // 0xE0 (16)
	struct Unknown ConstraintBindingID; // 0xF0 (24)

	void SetConstraintBindingID(struct Unknown& InConstraintBindingID); // Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3A4C0D0>
	struct Unknown GetConstraintBindingID(); // Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3A4C050>
};

// Class MovieSceneTracks.MovieScene3DAttachSection
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection {

public:

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
class UMovieScene3DConstraintTrack : public UMovieSceneTrack {

public:

	struct TArray<Unknown> ConstraintSections; // 0x58 (16)
};

// Class MovieSceneTracks.MovieScene3DPathSection
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection {

public:

	struct Unknown TimingCurve; // 0x108 (160)
	enum class Unknow FrontAxisEnum; // 0x1A8 (1)
	enum class Unknow UpAxisEnum; // 0x1A9 (1)
	char bFollow : 0; // 0x1AC (1)
	char bReverse : 0; // 0x1AC (1)
	char bForceUpright : 0; // 0x1AC (1)
};

// Class MovieSceneTracks.MovieScene3DTransformSection
class UMovieScene3DTransformSection : public UMovieSceneSection {

public:

	struct Unknown TransformMask; // 0xE0 (4)
	struct Unknown Translation[0x3]; // 0xE8 (480)
	struct Unknown Rotation[0x3]; // 0x2C8 (480)
	struct Unknown Scale[0x3]; // 0x4A8 (480)
	struct Unknown ManualWeight; // 0x688 (160)
	char bUseQuaternionInterpolation : 0; // 0x72C (1)
};

// Class MovieSceneTracks.MovieSceneActorReferenceSection
class UMovieSceneActorReferenceSection : public UMovieSceneSection {

public:

	struct Unknown ActorReferenceData; // 0xE0 (176)
	struct Unknown ActorGuidIndexCurve; // 0x190 (128)
	struct TArray<Unknown> ActorGuidStrings; // 0x210 (16)
};

// Class MovieSceneTracks.MovieSceneAudioSection
class UMovieSceneAudioSection : public UMovieSceneSection {

public:

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

	void SetStartOffset(struct Unknown InStartOffset); // Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3A4C210>
	void SetSound(struct Unknown InSound); // Function MovieSceneTracks.MovieSceneAudioSection.SetSound(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3A4C190>
	struct Unknown GetStartOffset(); // Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3A4C0B0>
	struct Unknown GetSound(); // Function MovieSceneTracks.MovieSceneAudioSection.GetSound(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3A4C090>
};

// Class MovieSceneTracks.MovieSceneAudioTrack
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack {

public:

	struct TArray<Unknown> AudioSections; // 0x58 (16)
};

// Class MovieSceneTracks.MovieSceneBoolSection
class UMovieSceneBoolSection : public UMovieSceneSection {

public:

	char DefaultValue : 0; // 0xE0 (1)
	struct Unknown BoolCurve; // 0xE8 (144)
};

// Class MovieSceneTracks.MovieSceneByteSection
class UMovieSceneByteSection : public UMovieSceneSection {

public:

	struct Unknown ByteCurve; // 0xE0 (152)
};

// Class MovieSceneTracks.MovieSceneByteTrack
class UMovieSceneByteTrack : public UMovieScenePropertyTrack {

public:

	struct Unknown Enum; // 0x88 (8)
};

// Class MovieSceneTracks.MovieSceneCameraAnimSection
class UMovieSceneCameraAnimSection : public UMovieSceneSection {

public:

	struct Unknown AnimData; // 0xE0 (32)
	struct Unknown CameraAnim; // 0x100 (8)
	float PlayRate; // 0x108 (4)
	float PlayScale; // 0x10C (4)
	float BlendInTime; // 0x110 (4)
	float BlendOutTime; // 0x114 (4)
	char bLooping : 0; // 0x118 (1)
};

// Class MovieSceneTracks.MovieSceneCameraAnimTrack
class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack {

public:

	struct TArray<Unknown> CameraAnimSections; // 0x58 (16)
};

// Class MovieSceneTracks.MovieSceneCameraCutSection
class UMovieSceneCameraCutSection : public UMovieSceneSection {

public:

	struct Unknown CameraGuid; // 0xE0 (16)
	struct Unknown CameraBindingID; // 0xF0 (24)

	void SetCameraBindingID(struct Unknown& InCameraBindingID); // Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3A539B0>
	struct Unknown GetCameraBindingID(); // Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3A4C050>
};

// Class MovieSceneTracks.MovieSceneCameraCutTrack
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack {

public:

	char bCanBlend : 0; // 0x58 (1)
	struct TArray<Unknown> Sections; // 0x60 (16)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSection
class UMovieSceneCameraShakeSection : public UMovieSceneSection {

public:

	struct Unknown ShakeData; // 0xE0 (32)
	struct Unknown* ShakeClass; // 0x100 (8)
	float PlayScale; // 0x108 (4)
	char PlaySpace; // 0x10C (1)
	struct Unknown UserDefinedPlaySpace; // 0x110 (12)
};

// Class MovieSceneTracks.MovieSceneCameraShakeTrack
class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack {

public:

	struct TArray<Unknown> CameraShakeSections; // 0x58 (16)
};

// Class MovieSceneTracks.MovieSceneCinematicShotSection
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection {

public:

	struct FString ShotDisplayName; // 0x158 (16)
	struct FText DisplayName; // 0x168 (24)

	void SetShotDisplayName(struct FString InShotDisplayName); // Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3A53B20>
	struct FString GetShotDisplayName(); // Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3A538B0>
};

// Class MovieSceneTracks.MovieSceneColorSection
class UMovieSceneColorSection : public UMovieSceneSection {

public:

	struct Unknown RedCurve; // 0xE0 (160)
	struct Unknown GreenCurve; // 0x180 (160)
	struct Unknown BlueCurve; // 0x220 (160)
	struct Unknown AlphaCurve; // 0x2C0 (160)
};

// Class MovieSceneTracks.MovieSceneColorTrack
class UMovieSceneColorTrack : public UMovieScenePropertyTrack {

public:

	char bIsSlateColor : 0; // 0x88 (1)
};

// Class MovieSceneTracks.MovieSceneEnumSection
class UMovieSceneEnumSection : public UMovieSceneSection {

public:

	struct Unknown EnumCurve; // 0xE0 (152)
};

// Class MovieSceneTracks.MovieSceneEnumTrack
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack {

public:

	struct Unknown Enum; // 0x88 (8)
};

// Class MovieSceneTracks.MovieSceneEventRepeaterSection
class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase {

public:

	struct Unknown Event; // 0xE0 (40)
};

// Class MovieSceneTracks.MovieSceneEventSection
class UMovieSceneEventSection : public UMovieSceneSection {

public:

	struct Unknown Events; // 0xE0 (120)
	struct Unknown eventData; // 0x158 (136)
};

// Class MovieSceneTracks.MovieSceneEventTrack
class UMovieSceneEventTrack : public UMovieSceneNameableTrack {

public:

	char bFireEventsWhenForwards : 0; // 0x58 (1)
	char bFireEventsWhenBackwards : 0; // 0x58 (1)
	enum class Unknow EventPosition; // 0x5C (1)
	struct TArray<Unknown> EventReceivers; // 0x60 (16)
	struct TArray<Unknown> Sections; // 0x70 (16)
};

// Class MovieSceneTracks.MovieSceneEventTriggerSection
class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase {

public:

	struct Unknown EventChannel; // 0xE0 (136)
};

// Class MovieSceneTracks.MovieSceneFloatSection
class UMovieSceneFloatSection : public UMovieSceneSection {

public:

	struct Unknown FloatCurve; // 0xE0 (160)
};

// Class MovieSceneTracks.MovieSceneFadeSection
class UMovieSceneFadeSection : public UMovieSceneFloatSection {

public:

	struct Unknown FadeColor; // 0x180 (16)
	char bFadeAudio : 0; // 0x190 (1)
};

// Class MovieSceneTracks.MovieSceneIntegerSection
class UMovieSceneIntegerSection : public UMovieSceneSection {

public:

	struct Unknown IntegerCurve; // 0xE0 (144)
};

// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection {

public:

	enum class Unknow Visibility; // 0xE0 (1)
	struct TArray<Unknown> LevelNames; // 0xE8 (16)

	void SetVisibility(enum class Unknow InVisibility); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3A53C20>
	void SetLevelNames(struct TArray<Unknown>& InLevelNames); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3A53A70>
	enum class Unknow GetVisibility(); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3A53980>
	struct TArray<Unknown> GetLevelNames(); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3A53880>
};

// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack {

public:

	struct TArray<Unknown> Sections; // 0x58 (16)
};

// Class MovieSceneTracks.MovieSceneMaterialTrack
class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack {

public:

	struct TArray<Unknown> Sections; // 0x58 (16)
};

// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack {

public:

	struct Unknown MPC; // 0x68 (8)
};

// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack {

public:

	int32_t MaterialIndex; // 0x68 (4)
};

// Class MovieSceneTracks.MovieSceneObjectPropertySection
class UMovieSceneObjectPropertySection : public UMovieSceneSection {

public:

	struct Unknown ObjectChannel; // 0xE0 (192)
};

// Class MovieSceneTracks.MovieSceneObjectPropertyTrack
class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack {

public:

	struct Unknown* PropertyClass; // 0x88 (8)
};

// Class MovieSceneTracks.MovieSceneParameterSection
class UMovieSceneParameterSection : public UMovieSceneSection {

public:

	struct TArray<Unknown> BoolParameterNamesAndCurves; // 0xE0 (16)
	struct TArray<Unknown> ScalarParameterNamesAndCurves; // 0xF0 (16)
	struct TArray<Unknown> Vector2DParameterNamesAndCurves; // 0x100 (16)
	struct TArray<Unknown> VectorParameterNamesAndCurves; // 0x110 (16)
	struct TArray<Unknown> ColorParameterNamesAndCurves; // 0x120 (16)
	struct TArray<Unknown> TransformParameterNamesAndCurves; // 0x130 (16)
};

// Class MovieSceneTracks.MovieSceneParticleParameterTrack
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack {

public:

	struct TArray<Unknown> Sections; // 0x58 (16)
};

// Class MovieSceneTracks.MovieSceneParticleSection
class UMovieSceneParticleSection : public UMovieSceneSection {

public:

	struct Unknown ParticleKeys; // 0xE0 (152)
};

// Class MovieSceneTracks.MovieSceneParticleTrack
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack {

public:

	struct TArray<Unknown> ParticleSections; // 0x58 (16)
};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection {

public:

	struct Unknown MaterialChannel; // 0xE0 (192)
};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack {

public:

	int32_t MaterialIndex; // 0x88 (4)
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection {

public:

	struct Unknown Params; // 0xE0 (216)
	struct Unknown AnimSequence; // 0x1B8 (8)
	struct Unknown Animation; // 0x1C0 (8)
	float StartOffset; // 0x1C8 (4)
	float EndOffset; // 0x1CC (4)
	float PlayRate; // 0x1D0 (4)
	char bReverse : 0; // 0x1D4 (1)
	struct FName SlotName; // 0x1D8 (8)
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack {

public:

	struct TArray<Unknown> AnimationSections; // 0x58 (16)
	char bUseLegacySectionIndexBlend : 0; // 0x68 (1)
};

// Class MovieSceneTracks.MovieSceneSpawnTrack
class UMovieSceneSpawnTrack : public UMovieSceneTrack {

public:

	struct TArray<Unknown> Sections; // 0x58 (16)
	struct Unknown ObjectGuid; // 0x68 (16)
};

// Class MovieSceneTracks.MovieSceneStringSection
class UMovieSceneStringSection : public UMovieSceneSection {

public:

	struct Unknown StringCurve; // 0xE0 (160)
};

// Class MovieSceneTracks.MovieSceneVectorSection
class UMovieSceneVectorSection : public UMovieSceneSection {

public:

	struct Unknown Curves[0x4]; // 0xE0 (640)
	int32_t ChannelsUsed; // 0x360 (4)
};

// Class MovieSceneTracks.MovieSceneVectorTrack
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack {

public:

	int32_t NumChannelsUsed; // 0x88 (4)
};

// ScriptStruct MovieSceneTracks.MovieScene3DAttachSectionTemplate
struct FMovieScene3DAttachSectionTemplate : FMovieSceneEvalTemplate {
	struct Unknown AttachBindingID; // 0x20 (24)
	struct FName AttachSocketName; // 0x38 (8)
	struct FName AttachComponentName; // 0x40 (8)
	enum class Unknow AttachmentLocationRule; // 0x48 (1)
	enum class Unknow AttachmentRotationRule; // 0x49 (1)
	enum class Unknow AttachmentScaleRule; // 0x4A (1)
	enum class Unknow DetachmentLocationRule; // 0x4B (1)
	enum class Unknow DetachmentRotationRule; // 0x4C (1)
	enum class Unknow DetachmentScaleRule; // 0x4D (1)
};

// ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
struct FMovieScene3DPathSectionTemplate : FMovieSceneEvalTemplate {
	struct Unknown PathBindingID; // 0x20 (24)
	struct Unknown TimingCurve; // 0x38 (160)
	enum class Unknow FrontAxisEnum; // 0xD8 (1)
	enum class Unknow UpAxisEnum; // 0xD9 (1)
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
	struct Unknown Location; // 0x8 (12)
	struct Unknown Rotation; // 0x14 (12)
	struct Unknown Scale; // 0x20 (12)
	struct Unknown Time; // 0x2C (4)
};

// ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct {
	struct Unknown Scale; // 0x8 (12)
	struct Unknown Time; // 0x14 (4)
};

// ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct {
	struct Unknown Rotation; // 0x8 (12)
	struct Unknown Time; // 0x14 (4)
};

// ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct {
	struct Unknown Location; // 0x8 (12)
	struct Unknown Time; // 0x14 (4)
};

// ScriptStruct MovieSceneTracks.MovieSceneComponentTransformSectionTemplate
struct FMovieSceneComponentTransformSectionTemplate : FMovieSceneEvalTemplate {
	struct Unknown TemplateData; // 0x20 (1616)
};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformTemplateData
struct FMovieScene3DTransformTemplateData {
	struct Unknown TranslationCurve[0x3]; // 0x0 (480)
	struct Unknown RotationCurve[0x3]; // 0x1E0 (480)
	struct Unknown ScaleCurve[0x3]; // 0x3C0 (480)
	struct Unknown ManualWeight; // 0x5A0 (160)
	enum class Unknow BlendType; // 0x640 (1)
	struct Unknown Mask; // 0x644 (4)
	char bUseQuaternionInterpolation : 0; // 0x648 (1)
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceData
struct FMovieSceneActorReferenceData : FMovieSceneChannel {
	struct TArray<Unknown> KeyTimes; // 0x8 (16)
	struct TArray<Unknown> KeyValues; // 0x40 (16)
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceKey
struct FMovieSceneActorReferenceKey {
	struct Unknown Object; // 0x0 (24)
	struct FName ComponentName; // 0x18 (8)
	struct FName SocketName; // 0x20 (8)
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate {
	struct Unknown PropertyData; // 0x20 (40)
	struct Unknown ActorReferenceData; // 0x48 (176)
};

// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate {
	struct Unknown AudioSection; // 0x20 (8)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
struct FMovieSceneCameraAnimSectionData {
	struct Unknown CameraAnim; // 0x0 (8)
	float PlayRate; // 0x8 (4)
	float PlayScale; // 0xC (4)
	float BlendInTime; // 0x10 (4)
	float BlendOutTime; // 0x14 (4)
	char bLooping : 0; // 0x18 (1)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	struct Unknown SourceData; // 0x20 (32)
	struct Unknown SectionStartTime; // 0x40 (4)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
struct FMovieSceneCameraShakeSectionData {
	struct Unknown* ShakeClass; // 0x0 (8)
	float PlayScale; // 0x8 (4)
	char PlaySpace; // 0xC (1)
	struct Unknown UserDefinedPlaySpace; // 0x10 (12)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	struct Unknown SourceData; // 0x20 (32)
	struct Unknown SectionStartTime; // 0x40 (4)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraCutSectionTemplate
struct FMovieSceneCameraCutSectionTemplate : FMovieSceneEvalTemplate {
	struct Unknown CameraBindingID; // 0x20 (24)
	struct Unknown CutTransform; // 0x40 (48)
	char bHasCutTransform : 0; // 0x70 (1)
	char bIsFinalSection : 0; // 0x71 (1)
};

// ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct {
	struct Unknown Color; // 0x8 (16)
	struct Unknown Time; // 0x18 (4)
};

// ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate {
	struct Unknown Curves[0x4]; // 0x48 (640)
	enum class Unknow BlendType; // 0x2C8 (1)
};

// ScriptStruct MovieSceneTracks.MovieSceneEvent
struct FMovieSceneEvent {
	struct Unknown Ptrs; // 0x0 (40)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventPtrs
struct FMovieSceneEventPtrs {
	struct Unknown Function; // 0x0 (8)
	struct TFieldPath<FUnknown> BoundObjectProperty; // 0x8 (32)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventPayloadVariable
struct FMovieSceneEventPayloadVariable {
	struct FString Value; // 0x0 (16)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventChannel
struct FMovieSceneEventChannel : FMovieSceneChannel {
	struct TArray<Unknown> KeyTimes; // 0x8 (16)
	struct TArray<Unknown> KeyValues; // 0x18 (16)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
struct FMovieSceneEventSectionData : FMovieSceneChannel {
	struct TArray<Unknown> Times; // 0x8 (16)
	struct TArray<Unknown> KeyValues; // 0x18 (16)
};

// ScriptStruct MovieSceneTracks.EventPayload
struct FEventPayload {
	struct FName EventName; // 0x0 (8)
	struct Unknown Parameters; // 0x8 (40)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventTemplateBase
struct FMovieSceneEventTemplateBase : FMovieSceneEvalTemplate {
	struct TArray<Unknown> EventReceivers; // 0x20 (16)
	char bFireEventsWhenForwards : 0; // 0x30 (1)
	char bFireEventsWhenBackwards : 0; // 0x30 (1)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventRepeaterTemplate
struct FMovieSceneEventRepeaterTemplate : FMovieSceneEventTemplateBase {
	struct Unknown EventToTrigger; // 0x38 (40)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventTriggerTemplate
struct FMovieSceneEventTriggerTemplate : FMovieSceneEventTemplateBase {
	struct TArray<Unknown> EventTimes; // 0x38 (16)
	struct TArray<Unknown> Events; // 0x48 (16)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
struct FMovieSceneEventSectionTemplate : FMovieSceneEventTemplateBase {
	struct Unknown eventData; // 0x38 (136)
};

// ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate {
	struct Unknown FadeCurve; // 0x20 (160)
	struct Unknown FadeColor; // 0xC0 (16)
	char bFadeAudio : 0; // 0xD0 (1)
};

// ScriptStruct MovieSceneTracks.MovieSceneLevelVisibilitySectionTemplate
struct FMovieSceneLevelVisibilitySectionTemplate : FMovieSceneEvalTemplate {
	enum class Unknow Visibility; // 0x20 (1)
	struct TArray<Unknown> LevelNames; // 0x28 (16)
};

// ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate {
	struct TArray<Unknown> Scalars; // 0x20 (16)
	struct TArray<Unknown> Bools; // 0x30 (16)
	struct TArray<Unknown> Vector2Ds; // 0x40 (16)
	struct TArray<Unknown> Vectors; // 0x50 (16)
	struct TArray<Unknown> Colors; // 0x60 (16)
	struct TArray<Unknown> Transforms; // 0x70 (16)
};

// ScriptStruct MovieSceneTracks.TransformParameterNameAndCurves
struct FTransformParameterNameAndCurves {
	struct FName ParameterName; // 0x0 (8)
	struct Unknown Translation[0x3]; // 0x8 (480)
	struct Unknown Rotation[0x3]; // 0x1E8 (480)
	struct Unknown Scale[0x3]; // 0x3C8 (480)
};

// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
struct FColorParameterNameAndCurves {
	struct FName ParameterName; // 0x0 (8)
	struct Unknown RedCurve; // 0x8 (160)
	struct Unknown GreenCurve; // 0xA8 (160)
	struct Unknown BlueCurve; // 0x148 (160)
	struct Unknown AlphaCurve; // 0x1E8 (160)
};

// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
struct FVectorParameterNameAndCurves {
	struct FName ParameterName; // 0x0 (8)
	struct Unknown XCurve; // 0x8 (160)
	struct Unknown YCurve; // 0xA8 (160)
	struct Unknown ZCurve; // 0x148 (160)
};

// ScriptStruct MovieSceneTracks.Vector2DParameterNameAndCurves
struct FVector2DParameterNameAndCurves {
	struct FName ParameterName; // 0x0 (8)
	struct Unknown XCurve; // 0x8 (160)
	struct Unknown YCurve; // 0xA8 (160)
};

// ScriptStruct MovieSceneTracks.BoolParameterNameAndCurve
struct FBoolParameterNameAndCurve {
	struct FName ParameterName; // 0x0 (8)
	struct Unknown ParameterCurve; // 0x8 (144)
};

// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
struct FScalarParameterNameAndCurve {
	struct FName ParameterName; // 0x0 (8)
	struct Unknown ParameterCurve; // 0x8 (160)
};

// ScriptStruct MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate
struct FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate {
	struct Unknown MPC; // 0x80 (8)
};

// ScriptStruct MovieSceneTracks.MovieSceneObjectPropertyTemplate
struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate {
	struct Unknown ObjectChannel; // 0x48 (192)
};

// ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	int32_t MaterialIndex; // 0x80 (4)
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate {
	struct Unknown ParticleKeys; // 0x20 (152)
};

// ScriptStruct MovieSceneTracks.MovieScenePrimitiveMaterialTemplate
struct FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate {
	int32_t MaterialIndex; // 0x20 (4)
	struct Unknown MaterialChannel; // 0x28 (192)
};

// ScriptStruct MovieSceneTracks.MovieSceneEulerTransformPropertySectionTemplate
struct FMovieSceneEulerTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct Unknown TemplateData; // 0x48 (1616)
};

// ScriptStruct MovieSceneTracks.MovieSceneTransformPropertySectionTemplate
struct FMovieSceneTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct Unknown TemplateData; // 0x48 (1616)
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorPropertySectionTemplate
struct FMovieSceneVectorPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct Unknown ComponentCurves[0x4]; // 0x48 (640)
	int32_t NumChannelsUsed; // 0x2C8 (4)
	enum class Unknow BlendType; // 0x2CC (1)
};

// ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct Unknown StringCurve; // 0x48 (160)
};

// ScriptStruct MovieSceneTracks.MovieSceneStringChannel
struct FMovieSceneStringChannel : FMovieSceneChannel {
	struct TArray<Unknown> Times; // 0x8 (16)
	struct TArray<Unknown> Values; // 0x18 (16)
	struct FString DefaultValue; // 0x28 (16)
	char bHasDefaultValue : 0; // 0x38 (1)
};

// ScriptStruct MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate
struct FMovieSceneIntegerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct Unknown IntegerCurve; // 0x48 (144)
	enum class Unknow BlendType; // 0xD8 (1)
};

// ScriptStruct MovieSceneTracks.MovieSceneEnumPropertySectionTemplate
struct FMovieSceneEnumPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct Unknown EnumCurve; // 0x48 (152)
};

// ScriptStruct MovieSceneTracks.MovieSceneBytePropertySectionTemplate
struct FMovieSceneBytePropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct Unknown ByteCurve; // 0x48 (152)
};

// ScriptStruct MovieSceneTracks.MovieSceneFloatPropertySectionTemplate
struct FMovieSceneFloatPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct Unknown FloatFunction; // 0x48 (160)
	enum class Unknow BlendType; // 0xE8 (1)
};

// ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct Unknown BoolCurve; // 0x48 (144)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
struct FMovieSceneSkeletalAnimationParams {
	struct Unknown Animation; // 0x0 (8)
	struct Unknown FirstLoopStartFrameOffset; // 0x8 (4)
	struct Unknown StartFrameOffset; // 0xC (4)
	struct Unknown EndFrameOffset; // 0x10 (4)
	float PlayRate; // 0x14 (4)
	char bReverse : 0; // 0x18 (1)
	struct FName SlotName; // 0x1C (8)
	struct Unknown Weight; // 0x28 (160)
	char bSkipAnimNotifiers : 0; // 0xC8 (1)
	char bForceCustomMode : 0; // 0xC9 (1)
	float StartOffset; // 0xCC (4)
	float EndOffset; // 0xD0 (4)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate {
	struct Unknown Params; // 0x20 (224)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams {
	struct Unknown SectionStartTime; // 0xD8 (4)
	struct Unknown SectionEndTime; // 0xDC (4)
};

// ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate {
	struct Unknown SlomoCurve; // 0x20 (160)
};

// ScriptStruct MovieSceneTracks.MovieSceneSpawnSectionTemplate
struct FMovieSceneSpawnSectionTemplate : FMovieSceneEvalTemplate {
	struct Unknown Curve; // 0x20 (144)
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
struct FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct {
	struct Unknown Time; // 0x8 (4)
};

// ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct
struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase {
	struct Unknown Vector; // 0x30 (16)
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct
struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase {
	struct Unknown Vector; // 0x28 (12)
};

// ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase {
	struct Unknown Vector; // 0x28 (8)
};

// Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
inline void UMovieScene3DConstraintSection::SetConstraintBindingID(struct Unknown& InConstraintBindingID) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID");

	struct SetConstraintBindingID_Params {
		struct Unknown& InConstraintBindingID;
	}; SetConstraintBindingID_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InConstraintBindingID = Params.InConstraintBindingID;

}

// Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
inline struct Unknown UMovieScene3DConstraintSection::GetConstraintBindingID() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID");

	struct GetConstraintBindingID_Params {
		
		struct Unknown ReturnValue;

	}; GetConstraintBindingID_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
inline void UMovieSceneAudioSection::SetStartOffset(struct Unknown InStartOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset");

	struct SetStartOffset_Params {
		struct Unknown InStartOffset;
	}; SetStartOffset_Params Params;

	Params.InStartOffset = InStartOffset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieSceneTracks.MovieSceneAudioSection.SetSound
inline void UMovieSceneAudioSection::SetSound(struct Unknown InSound) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.SetSound");

	struct SetSound_Params {
		struct Unknown InSound;
	}; SetSound_Params Params;

	Params.InSound = InSound;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
inline struct Unknown UMovieSceneAudioSection::GetStartOffset() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset");

	struct GetStartOffset_Params {
		
		struct Unknown ReturnValue;

	}; GetStartOffset_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieSceneTracks.MovieSceneAudioSection.GetSound
inline struct Unknown UMovieSceneAudioSection::GetSound() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.GetSound");

	struct GetSound_Params {
		
		struct Unknown ReturnValue;

	}; GetSound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
inline void UMovieSceneCameraCutSection::SetCameraBindingID(struct Unknown& InCameraBindingID) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID");

	struct SetCameraBindingID_Params {
		struct Unknown& InCameraBindingID;
	}; SetCameraBindingID_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InCameraBindingID = Params.InCameraBindingID;

}

// Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
inline struct Unknown UMovieSceneCameraCutSection::GetCameraBindingID() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID");

	struct GetCameraBindingID_Params {
		
		struct Unknown ReturnValue;

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
inline void UMovieSceneLevelVisibilitySection::SetVisibility(enum class Unknow InVisibility) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility");

	struct SetVisibility_Params {
		enum class Unknow InVisibility;
	}; SetVisibility_Params Params;

	Params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
inline void UMovieSceneLevelVisibilitySection::SetLevelNames(struct TArray<Unknown>& InLevelNames) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames");

	struct SetLevelNames_Params {
		struct TArray<Unknown>& InLevelNames;
	}; SetLevelNames_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InLevelNames = Params.InLevelNames;

}

// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
inline enum class Unknow UMovieSceneLevelVisibilitySection::GetVisibility() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility");

	struct GetVisibility_Params {
		
		enum class Unknow ReturnValue;

	}; GetVisibility_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
inline struct TArray<Unknown> UMovieSceneLevelVisibilitySection::GetLevelNames() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames");

	struct GetLevelNames_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; GetLevelNames_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

