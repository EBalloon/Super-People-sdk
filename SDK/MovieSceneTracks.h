// Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class MovieScene3DPathSection_Axis : uint8 {
	MovieScene3DPathSection_Axis = 0,
	MovieScene3DPathSection_Axis = 1,
	MovieScene3DPathSection_Axis = 2,
	MovieScene3DPathSection_Axis = 3,
	MovieScene3DPathSection_Axis = 4,
	MovieScene3DPathSection_Axis = 5,
	MovieScene3DPathSection_Axis = 6
};

// Enum MovieSceneTracks.EFireEventsAtPosition
enum class EFireEventsAtPosition : uint8 {
	EFireEventsAtPosition = 0,
	EFireEventsAtPosition = 1,
	EFireEventsAtPosition = 2,
	EFireEventsAtPosition = 3
};

// Enum MovieSceneTracks.ELevelVisibility
enum class ELevelVisibility : uint8 {
	ELevelVisibility = 0,
	ELevelVisibility = 1,
	ELevelVisibility = 2
};

// Enum MovieSceneTracks.EParticleKey
enum class EParticleKey : uint8 {
	EParticleKey = 0,
	EParticleKey = 1,
	EParticleKey = 2,
	EParticleKey = 3
};

// Class MovieSceneTracks.MovieScenePropertyTrack
struct UMovieScenePropertyTrack : UMovieSceneNameableTrack {
	Unknown SectionToKey; //  0x58 Size(8)
	struct FName PropertyName; //  0x60 Size(8)
	struct FString PropertyPath; //  0x68 Size(10)
	Unknown Sections; //  0x78 Size(10)
};

// Class MovieSceneTracks.MovieScene3DConstraintSection
struct UMovieScene3DConstraintSection : UMovieSceneSection {
	Unknown ConstraintId; //  0xe0 Size(10)
	Unknown ConstraintBindingID; //  0xf0 Size(18)

	void SetConstraintBindingID(Unknown& InConstraintBindingID); // Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <Game+0x3284820>
};

// Class MovieSceneTracks.MovieScene3DAttachSection
struct UMovieScene3DAttachSection : UMovieScene3DConstraintSection {
	struct FName AttachSocketName; //  0x108 Size(8)
	struct FName AttachComponentName; //  0x110 Size(8)
	Unknown AttachmentLocationRule; //  0x118 Size(1)
	Unknown AttachmentRotationRule; //  0x119 Size(1)
	Unknown AttachmentScaleRule; //  0x11a Size(1)
	Unknown DetachmentLocationRule; //  0x11b Size(1)
	Unknown DetachmentRotationRule; //  0x11c Size(1)
	Unknown DetachmentScaleRule; //  0x11d Size(1)
};

// Class MovieSceneTracks.MovieScene3DConstraintTrack
struct UMovieScene3DConstraintTrack : UMovieSceneTrack {
	Unknown ConstraintSections; //  0x58 Size(10)
};

// Class MovieSceneTracks.MovieScene3DPathSection
struct UMovieScene3DPathSection : UMovieScene3DConstraintSection {
	Unknown TimingCurve; //  0x108 Size(a0)
	Unknown FrontAxisEnum; //  0x1a8 Size(1)
	Unknown UpAxisEnum; //  0x1a9 Size(1)
	char bFollow; //  0x1ac Size(1)
	char bReverse; //  0x1ac Size(1)
	char bForceUpright; //  0x1ac Size(1)
};

// Class MovieSceneTracks.MovieScene3DTransformSectio
struct UMovieScene3DTransformSectiot : UMovieSceneSection {
	Unknown TransformMask; //  0xe0 Size(4)
	Unknown Translation; //  0xe8 Size(1e0)
	Unknown Rotation; //  0x2c8 Size(1e0)
	Unknown Scale; //  0x4a8 Size(1e0)
	Unknown ManualWeight; //  0x688 Size(a0)
	char bUseQuaternionInterpolation; //  0x72c Size(1)
};

// Class MovieSceneTracks.MovieSceneActorReferenceSection
struct UMovieSceneActorReferenceSection : UMovieSceneSection {
	Unknown ActorReferenceData; //  0xe0 Size(b0)
	Unknown ActorGuidIndexCurve; //  0x190 Size(80)
	Unknown ActorGuidStrings; //  0x210 Size(10)
};

// Class MovieSceneTracks.MovieSceneAudioSection
struct UMovieSceneAudioSection : UMovieSceneSection {
	Unknown Sound; //  0xe0 Size(8)
	Unknown StartFrameOffset; //  0xe8 Size(4)
	float StartOffset; //  0xec Size(4)
	float AudioStartTime; //  0xf0 Size(4)
	float AudioDilationFactor; //  0xf4 Size(4)
	float AudioVolume; //  0xf8 Size(4)
	Unknown SoundVolume; //  0x100 Size(a0)
	Unknown PitchMultiplier; //  0x1a0 Size(a0)
	Unknown AttachActorData; //  0x240 Size(b0)
	char bSuppressSubtitles; //  0x2f0 Size(1)
	char bOverrideAttenuation; //  0x2f1 Size(1)
	Unknown AttenuationSettings; //  0x2f8 Size(8)
	struct FDelegate OnQueueSubtitles; //  0x300 Size(10)
	struct FMulticastInlineDelegate OnAudioFinished; //  0x310 Size(10)
	struct FMulticastInlineDelegate OnAudioPlaybackPercent; //  0x320 Size(10)

	void SetStartOffset(Unknown InStartOffset); // Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset(Final|Native|Public|HasDefaults|BlueprintCallable) // <Game+0x3284960>
};

// Class MovieSceneTracks.MovieSceneAudioTrack
struct UMovieSceneAudioTrack : UMovieSceneNameableTrack {
	Unknown AudioSections; //  0x58 Size(10)
};

// Class MovieSceneTracks.MovieSceneBoolSection
struct UMovieSceneBoolSection : UMovieSceneSection {
	char DefaultValue; //  0xe0 Size(1)
	Unknown BoolCurve; //  0xe8 Size(90)
};

// Class MovieSceneTracks.MovieSceneByteSection
struct UMovieSceneByteSection : UMovieSceneSection {
	Unknown ByteCurve; //  0xe0 Size(98)
};

// Class MovieSceneTracks.MovieSceneByteTrack
struct UMovieSceneByteTrack : UMovieScenePropertyTrack {
	Unknown Enum; //  0x88 Size(8)
};

// Class MovieSceneTracks.MovieSceneCameraAnimSection
struct UMovieSceneCameraAnimSection : UMovieSceneSection {
	Unknown AnimData; //  0xe0 Size(20)
	Unknown CameraAnim; //  0x100 Size(8)
	float PlayRate; //  0x108 Size(4)
	float PlayScale; //  0x10c Size(4)
	float BlendInTime; //  0x110 Size(4)
	float BlendOutTime; //  0x114 Size(4)
	char bLooping; //  0x118 Size(1)
};

// Class MovieSceneTracks.MovieSceneCameraAnimTrack
struct UMovieSceneCameraAnimTrack : UMovieSceneNameableTrack {
	Unknown CameraAnimSections; //  0x58 Size(10)
};

// Class MovieSceneTracks.MovieSceneCameraCutSection
struct UMovieSceneCameraCutSection : UMovieSceneSection {
	Unknown CameraGuid; //  0xe0 Size(10)
	Unknown CameraBindingID; //  0xf0 Size(18)

	void SetCameraBindingID(Unknown& InCameraBindingID); // Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x328c090>
};

// Class MovieSceneTracks.MovieSceneCameraCutTrack
struct UMovieSceneCameraCutTrack : UMovieSceneNameableTrack {
	char bCanBlend; //  0x58 Size(1)
	Unknown Sections; //  0x60 Size(10)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSectio
struct UMovieSceneCameraShakeSectiot : UMovieSceneSection {
	Unknown ShakeData; //  0xe0 Size(20)
	Unknown ShakeClass; //  0x100 Size(8)
	float PlayScale; //  0x108 Size(4)
	Unknown PlaySpace; //  0x10c Size(1)
	Unknown UserDefinedPlaySpace; //  0x110 Size(c)
};

// Class MovieSceneTracks.MovieSceneCameraShakeTrack
struct UMovieSceneCameraShakeTrack : UMovieSceneNameableTrack {
	Unknown CameraShakeSections; //  0x58 Size(10)
};

// Class MovieSceneTracks.MovieSceneCinematicShotSection
struct UMovieSceneCinematicShotSection : UMovieSceneSubSection {
	struct FString ShotDisplayName; //  0x158 Size(10)
	struct FText DisplayName; //  0x168 Size(18)

	void SetShotDisplayName(struct FString InShotDisplayName); // Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName(Final|Native|Public|BlueprintCallable) // <Game+0x328c200>
};

// Class MovieSceneTracks.MovieSceneColorSection
struct UMovieSceneColorSection : UMovieSceneSection {
	Unknown RedCurve; //  0xe0 Size(a0)
	Unknown GreenCurve; //  0x180 Size(a0)
	Unknown BlueCurve; //  0x220 Size(a0)
	Unknown AlphaCurve; //  0x2c0 Size(a0)
};

// Class MovieSceneTracks.MovieSceneColorTrack
struct UMovieSceneColorTrack : UMovieScenePropertyTrack {
	char bIsSlateColor; //  0x88 Size(1)
};

// Class MovieSceneTracks.MovieSceneEnumSection
struct UMovieSceneEnumSection : UMovieSceneSection {
	Unknown EnumCurve; //  0xe0 Size(98)
};

// Class MovieSceneTracks.MovieSceneEnumTrack
struct UMovieSceneEnumTrack : UMovieScenePropertyTrack {
	Unknown Enum; //  0x88 Size(8)
};

// Class MovieSceneTracks.MovieSceneEventRepeaterSection
struct UMovieSceneEventRepeaterSection : UMovieSceneEventSectionBase {
	Unknown Event; //  0xe0 Size(28)
};

// Class MovieSceneTracks.MovieSceneEventSection
struct UMovieSceneEventSection : UMovieSceneSection {
	Unknown Events; //  0xe0 Size(78)
	Unknown eventData; //  0x158 Size(88)
};

// Class MovieSceneTracks.MovieSceneEventTrack
struct UMovieSceneEventTrack : UMovieSceneNameableTrack {
	char bFireEventsWhenForwards; //  0x58 Size(1)
	char bFireEventsWhenBackwards; //  0x58 Size(1)
	Unknown EventPosition; //  0x5c Size(1)
	Unknown EventReceivers; //  0x60 Size(10)
	Unknown Sections; //  0x70 Size(10)
};

// Class MovieSceneTracks.MovieSceneEventTriggerSection
struct UMovieSceneEventTriggerSection : UMovieSceneEventSectionBase {
	Unknown EventChannel; //  0xe0 Size(88)
};

// Class MovieSceneTracks.MovieSceneFloatSection
struct UMovieSceneFloatSection : UMovieSceneSection {
	Unknown FloatCurve; //  0xe0 Size(a0)
};

// Class MovieSceneTracks.MovieSceneFadeSection
struct UMovieSceneFadeSection : UMovieSceneFloatSection {
	Unknown FadeColor; //  0x180 Size(10)
	char bFadeAudio; //  0x190 Size(1)
};

// Class MovieSceneTracks.MovieSceneIntegerSection
struct UMovieSceneIntegerSection : UMovieSceneSection {
	Unknown IntegerCurve; //  0xe0 Size(90)
};

// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
struct UMovieSceneLevelVisibilitySection : UMovieSceneSection {
	Unknown Visibility; //  0xe0 Size(1)
	Unknown LevelNames; //  0xe8 Size(10)

	void SetVisibility(Unknown InVisibility); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility(Final|Native|Public|BlueprintCallable) // <Game+0x328c300>
};

// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
struct UMovieSceneLevelVisibilityTrack : UMovieSceneNameableTrack {
	Unknown Sections; //  0x58 Size(10)
};

// Class MovieSceneTracks.MovieSceneMaterialTrack
struct UMovieSceneMaterialTrack : UMovieSceneNameableTrack {
	Unknown Sections; //  0x58 Size(10)
};

// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
struct UMovieSceneMaterialParameterCollectionTrack : UMovieSceneMaterialTrack {
	Unknown MPC; //  0x68 Size(8)
};

// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
struct UMovieSceneComponentMaterialTrack : UMovieSceneMaterialTrack {
	int32_t MaterialIndex; //  0x68 Size(4)
};

// Class MovieSceneTracks.MovieSceneObjectPropertySection
struct UMovieSceneObjectPropertySection : UMovieSceneSection {
	Unknown ObjectChannel; //  0xe0 Size(c0)
};

// Class MovieSceneTracks.MovieSceneObjectPropertyTrack
struct UMovieSceneObjectPropertyTrack : UMovieScenePropertyTrack {
	Unknown PropertyClass; //  0x88 Size(8)
};

// Class MovieSceneTracks.MovieSceneParameterSection
struct UMovieSceneParameterSection : UMovieSceneSection {
	Unknown BoolParameterNamesAndCurves; //  0xe0 Size(10)
	Unknown ScalarParameterNamesAndCurves; //  0xf0 Size(10)
	Unknown Vector2DParameterNamesAndCurves; //  0x100 Size(10)
	Unknown VectorParameterNamesAndCurves; //  0x110 Size(10)
	Unknown ColorParameterNamesAndCurves; //  0x120 Size(10)
	Unknown TransformParameterNamesAndCurves; //  0x130 Size(10)
};

// Class MovieSceneTracks.MovieSceneParticleParameterTrack
struct UMovieSceneParticleParameterTrack : UMovieSceneNameableTrack {
	Unknown Sections; //  0x58 Size(10)
};

// Class MovieSceneTracks.MovieSceneParticleSection
struct UMovieSceneParticleSection : UMovieSceneSection {
	Unknown ParticleKeys; //  0xe0 Size(98)
};

// Class MovieSceneTracks.MovieSceneParticleTrack
struct UMovieSceneParticleTrack : UMovieSceneNameableTrack {
	Unknown ParticleSections; //  0x58 Size(10)
};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
struct UMovieScenePrimitiveMaterialSection : UMovieSceneSection {
	Unknown MaterialChannel; //  0xe0 Size(c0)
};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
struct UMovieScenePrimitiveMaterialTrack : UMovieScenePropertyTrack {
	int32_t MaterialIndex; //  0x88 Size(4)
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
struct UMovieSceneSkeletalAnimationSection : UMovieSceneSection {
	Unknown Params; //  0xe0 Size(d8)
	Unknown AnimSequence; //  0x1b8 Size(8)
	Unknown Animation; //  0x1c0 Size(8)
	float StartOffset; //  0x1c8 Size(4)
	float EndOffset; //  0x1cc Size(4)
	float PlayRate; //  0x1d0 Size(4)
	char bReverse; //  0x1d4 Size(1)
	struct FName SlotName; //  0x1d8 Size(8)
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
struct UMovieSceneSkeletalAnimationTrack : UMovieSceneNameableTrack {
	Unknown AnimationSections; //  0x58 Size(10)
	char bUseLegacySectionIndexBlend; //  0x68 Size(1)
};

// Class MovieSceneTracks.MovieSceneSpawnTrack
struct UMovieSceneSpawnTrack : UMovieSceneTrack {
	Unknown Sections; //  0x58 Size(10)
	Unknown ObjectGuid; //  0x68 Size(10)
};

// Class MovieSceneTracks.MovieSceneStringSection
struct UMovieSceneStringSection : UMovieSceneSection {
	Unknown StringCurve; //  0xe0 Size(a0)
};

// Class MovieSceneTracks.MovieSceneVectorSection
struct UMovieSceneVectorSection : UMovieSceneSection {
	Unknown Curves; //  0xe0 Size(280)
	int32_t ChannelsUsed; //  0x360 Size(4)
};

// Class MovieSceneTracks.MovieSceneVectorTrack
struct UMovieSceneVectorTrack : UMovieScenePropertyTrack {
	int32_t NumChannelsUsed; //  0x88 Size(4)
};

