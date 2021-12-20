// Enum MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : uint8 {
	EMovieSceneKeyInterpolation = 0,
	EMovieSceneKeyInterpolation = 1,
	EMovieSceneKeyInterpolation = 2,
	EMovieSceneKeyInterpolation = 3,
	EMovieSceneKeyInterpolation = 4,
	EMovieSceneKeyInterpolation = 5
};

// Enum MovieScene.EMovieSceneBlendType
enum class EMovieSceneBlendType : uint8 {
	EMovieSceneBlendType = 0,
	EMovieSceneBlendType = 1,
	EMovieSceneBlendType = 2,
	EMovieSceneBlendType = 4,
	EMovieSceneBlendType = 5
};

// Enum MovieScene.EMovieSceneBuiltInEasing
enum class EMovieSceneBuiltInEasing : uint8 {
	EMovieSceneBuiltInEasing = 0,
	EMovieSceneBuiltInEasing = 1,
	EMovieSceneBuiltInEasing = 2,
	EMovieSceneBuiltInEasing = 3,
	EMovieSceneBuiltInEasing = 4,
	EMovieSceneBuiltInEasing = 5,
	EMovieSceneBuiltInEasing = 6,
	EMovieSceneBuiltInEasing = 7,
	EMovieSceneBuiltInEasing = 8,
	EMovieSceneBuiltInEasing = 9,
	EMovieSceneBuiltInEasing = 10,
	EMovieSceneBuiltInEasing = 11,
	EMovieSceneBuiltInEasing = 12,
	EMovieSceneBuiltInEasing = 13,
	EMovieSceneBuiltInEasing = 14,
	EMovieSceneBuiltInEasing = 15,
	EMovieSceneBuiltInEasing = 16,
	EMovieSceneBuiltInEasing = 17,
	EMovieSceneBuiltInEasing = 18,
	EMovieSceneBuiltInEasing = 19,
	EMovieSceneBuiltInEasing = 20,
	EMovieSceneBuiltInEasing = 21,
	EMovieSceneBuiltInEasing = 22
};

// Enum MovieScene.EEvaluationMethod
enum class EEvaluationMethod : uint8 {
	EEvaluationMethod = 0,
	EEvaluationMethod = 1,
	EEvaluationMethod = 2
};

// Enum MovieScene.EUpdateClockSource
enum class EUpdateClockSource : uint8 {
	EUpdateClockSource = 0,
	EUpdateClockSource = 1,
	EUpdateClockSource = 2,
	EUpdateClockSource = 3,
	EUpdateClockSource = 4,
	EUpdateClockSource = 5,
	EUpdateClockSource = 6
};

// Enum MovieScene.EMovieSceneEvaluationType
enum class EMovieSceneEvaluationType : uint8 {
	EMovieSceneEvaluationType = 0,
	EMovieSceneEvaluationType = 1,
	EMovieSceneEvaluationType = 2
};

// Enum MovieScene.EMovieScenePlayerStatus
enum class EMovieScenePlayerStatus : uint8 {
	EMovieScenePlayerStatus = 0,
	EMovieScenePlayerStatus = 1,
	EMovieScenePlayerStatus = 2,
	EMovieScenePlayerStatus = 3,
	EMovieScenePlayerStatus = 4,
	EMovieScenePlayerStatus = 5,
	EMovieScenePlayerStatus = 6,
	EMovieScenePlayerStatus = 7
};

// Enum MovieScene.EMovieSceneObjectBindingSpace
enum class EMovieSceneObjectBindingSpace : uint8 {
	EMovieSceneObjectBindingSpace = 0,
	EMovieSceneObjectBindingSpace = 1,
	EMovieSceneObjectBindingSpace = 2
};

// Enum MovieScene.EMovieSceneCompletionMode
enum class EMovieSceneCompletionMode : uint8 {
	EMovieSceneCompletionMode = 0,
	EMovieSceneCompletionMode = 1,
	EMovieSceneCompletionMode = 2,
	EMovieSceneCompletionMode = 3
};

// Enum MovieScene.ESectionEvaluationFlags
enum class ESectionEvaluationFlags : uint8 {
	ESectionEvaluationFlags = 0,
	ESectionEvaluationFlags = 1,
	ESectionEvaluationFlags = 2,
	ESectionEvaluationFlags = 3
};

// Enum MovieScene.EUpdatePositionMethod
enum class EUpdatePositionMethod : uint8 {
	EUpdatePositionMethod = 0,
	EUpdatePositionMethod = 1,
	EUpdatePositionMethod = 2,
	EUpdatePositionMethod = 3
};

// Enum MovieScene.ESpawnOwnership
enum class ESpawnOwnership : uint8 {
	ESpawnOwnership = 0,
	ESpawnOwnership = 1,
	ESpawnOwnership = 2,
	ESpawnOwnership = 3
};

// Class MovieScene.MovieSceneSignedObject
struct UMovieSceneSignedObject : Object {
	Unknown Signature; //  0x28 Size(10)
};

// Class MovieScene.MovieSceneTrack
struct UMovieSceneTrack : UMovieSceneSignedObject {
	Unknown EvalOptions; //  0x50 Size(4)
	char bIsEvalDisabled; //  0x55 Size(1)
};

// Class MovieScene.MovieSceneSection
struct UMovieSceneSection : UMovieSceneSignedObject {
	Unknown EvalOptions; //  0x50 Size(2)
	Unknown Easing; //  0x58 Size(38)
	Unknown SectionRange; //  0x90 Size(10)
	Unknown PreRollFrames; //  0xa0 Size(4)
	Unknown PostRollFrames; //  0xa4 Size(4)
	int32_t rowIndex; //  0xa8 Size(4)
	int32_t OverlapPriority; //  0xac Size(4)
	char bIsActive; //  0xb0 Size(1)
	char bIsLocked; //  0xb0 Size(1)
	float StartTime; //  0xb4 Size(4)
	float EndTime; //  0xb8 Size(4)
	float PrerollTime; //  0xbc Size(4)
	float PostrollTime; //  0xc0 Size(4)
	char bIsInfinite; //  0xc4 Size(1)
	char bSupportsInfiniteRange; //  0xc8 Size(1)
	Unknown BlendType; //  0xc9 Size(2)

	void SetRowIndex(int32_t NewRowIndex); // Function MovieScene.MovieSceneSection.SetRowIndex(Final|Native|Public|BlueprintCallable) // <Game+0x31b2860>
};

// Class MovieScene.MovieSceneSequence
struct UMovieSceneSequence : UMovieSceneSignedObject {
	Unknown PrecompiledEvaluationTemplate; //  0x50 Size(2f0)
	Unknown DefaultCompletionMode; //  0x340 Size(1)
	char bParentContextsAreSignificant; //  0x341 Size(1)
	char bPlayableDirectly; //  0x342 Size(1)

	Unknown FindBindingsByTag(struct FName InBindingName); // Function MovieScene.MovieSceneSequence.FindBindingsByTag(Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x31b6840>
};

// Class MovieScene.MovieSceneSequencePlayer
struct UMovieSceneSequencePlayer : Object {
	struct FMulticastInlineDelegate OnPlay; //  0x408 Size(10)
	struct FMulticastInlineDelegate OnPlayReverse; //  0x418 Size(10)
	struct FMulticastInlineDelegate OnStop; //  0x428 Size(10)
	struct FMulticastInlineDelegate OnPause; //  0x438 Size(10)
	struct FMulticastInlineDelegate OnFinished; //  0x448 Size(10)
	Unknown status; //  0x458 Size(1)
	char bReversePlayback; //  0x45c Size(1)
	Unknown Sequence; //  0x460 Size(8)
	Unknown StartTime; //  0x468 Size(4)
	int32_t DurationFrames; //  0x46c Size(4)
	int32_t CurrentNumLoops; //  0x470 Size(4)
	Unknown PlaybackSettings; //  0x488 Size(14)
	Unknown RootTemplateInstance; //  0x4a0 Size(320)
	Unknown NetSyncProps; //  0x828 Size(10)
	Unknown PlaybackClient; //  0x838 Size(10)

	void StopAtCurrentTime(); // Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime(Final|Native|Public|BlueprintCallable) // <Game+0x31b7d20>
};

// Class MovieScene.MovieSceneSubSection
struct UMovieSceneSubSection : UMovieSceneSection {
	Unknown Parameters; //  0xe0 Size(24)
	float StartOffset; //  0x104 Size(4)
	float TimeScale; //  0x108 Size(4)
	float PrerollTime; //  0x10c Size(4)
	Unknown SubSequence; //  0x110 Size(8)
	Unknown ActorToRecord; //  0x118 Size(1c)
	struct FString TargetSequenceName; //  0x138 Size(10)
	Unknown TargetPathToRecordTo; //  0x148 Size(10)

	void SetSequence(Unknown Sequence); // Function MovieScene.MovieSceneSubSection.SetSequence(Final|Native|Public|BlueprintCallable) // <Game+0x31ba9f0>
};

// Class MovieScene.MovieSceneSubTrack
struct UMovieSceneSubTrack : UMovieSceneNameableTrack {
	Unknown Sections; //  0x58 Size(10)
};

// Class MovieScene.MovieScene
struct UMovieScene : UMovieSceneSignedObject {
	Unknown Spawnables; //  0x50 Size(10)
	Unknown Possessables; //  0x60 Size(10)
	Unknown ObjectBindings; //  0x70 Size(10)
	Unknown BindingGroups; //  0x80 Size(50)
	Unknown MasterTracks; //  0xd0 Size(10)
	Unknown CameraCutTrack; //  0xe0 Size(8)
	Unknown SelectionRange; //  0xe8 Size(10)
	Unknown PlaybackRange; //  0xf8 Size(10)
	Unknown TickResolution; //  0x108 Size(8)
	Unknown DisplayRate; //  0x110 Size(8)
	Unknown EvaluationType; //  0x118 Size(1)
	Unknown ClockSource; //  0x119 Size(1)
	Unknown CustomClockSourcePath; //  0x120 Size(18)
	Unknown MarkedFrames; //  0x138 Size(10)
};

// Class MovieScene.MovieSceneBindingOv
struct UMovieSceneBindingOv : Object {
	Unknown BindingData; //  0x28 Size(10)
};

// Class MovieScene.MovieSceneBuiltInEasingFunction
struct UMovieSceneBuiltInEasingFunction : Object {
	Unknown Type; //  0x30 Size(1)
};

// Class MovieScene.MovieSceneEasingExternalCurve
struct UMovieSceneEasingExternalCurve : Object {
	Unknown Curve; //  0x30 Size(8)
};

// Class MovieScene.MovieSceneFolder
struct UMovieSceneFolder : Object {
	struct FName FolderName; //  0x28 Size(8)
	Unknown ChildFolders; //  0x30 Size(10)
	Unknown ChildMasterTracks; //  0x40 Size(10)
	Unknown ChildObjectBindingStrings; //  0x50 Size(10)
};

// Class MovieScene.TestMovieSceneTrack
struct UTestMovieSceneTrack : UMovieSceneTrack {
	char bHighPassFilter; //  0x58 Size(1)
	Unknown SectionArray; //  0x60 Size(10)
};

// Class MovieScene.TestMovieSceneSequence
struct UTestMovieSceneSequence : UMovieSceneSequence {
	Unknown MovieScene; //  0x348 Size(8)
};

// Class MovieScene.TestMovieSceneSubTrack
struct UTestMovieSceneSubTrack : UMovieSceneSubTrack {
	Unknown SectionArray; //  0x68 Size(10)
};

