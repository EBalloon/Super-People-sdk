// Enum MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : uint8_t {
	EMovieSceneKeyInterpolation = 0,
	EMovieSceneKeyInterpolation = 1,
	EMovieSceneKeyInterpolation = 2,
	EMovieSceneKeyInterpolation = 3,
	EMovieSceneKeyInterpolation = 4,
	EMovieSceneKeyInterpolation = 5,
};

// Enum MovieScene.EMovieSceneBlendType
enum class EMovieSceneBlendType : uint8_t {
	EMovieSceneBlendType = 0,
	EMovieSceneBlendType = 1,
	EMovieSceneBlendType = 2,
	EMovieSceneBlendType = 4,
	EMovieSceneBlendType = 5,
};

// Enum MovieScene.EMovieSceneBuiltInEasing
enum class EMovieSceneBuiltInEasing : uint8_t {
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
	EMovieSceneBuiltInEasing = 22,
};

// Enum MovieScene.EEvaluationMethod
enum class EEvaluationMethod : uint8_t {
	EEvaluationMethod = 0,
	EEvaluationMethod = 1,
	EEvaluationMethod = 2,
};

// Enum MovieScene.EUpdateClockSource
enum class EUpdateClockSource : uint8_t {
	EUpdateClockSource = 0,
	EUpdateClockSource = 1,
	EUpdateClockSource = 2,
	EUpdateClockSource = 3,
	EUpdateClockSource = 4,
	EUpdateClockSource = 5,
	EUpdateClockSource = 6,
};

// Enum MovieScene.EMovieSceneEvaluationType
enum class EMovieSceneEvaluationType : uint8_t {
	EMovieSceneEvaluationType = 0,
	EMovieSceneEvaluationType = 1,
	EMovieSceneEvaluationType = 2,
};

// Enum MovieScene.EMovieScenePlayerStatus
enum class EMovieScenePlayerStatus : uint8_t {
	EMovieScenePlayerStatus = 0,
	EMovieScenePlayerStatus = 1,
	EMovieScenePlayerStatus = 2,
	EMovieScenePlayerStatus = 3,
	EMovieScenePlayerStatus = 4,
	EMovieScenePlayerStatus = 5,
	EMovieScenePlayerStatus = 6,
	EMovieScenePlayerStatus = 7,
};

// Enum MovieScene.EMovieSceneObjectBindingSpace
enum class EMovieSceneObjectBindingSpace : uint8_t {
	EMovieSceneObjectBindingSpace = 0,
	EMovieSceneObjectBindingSpace = 1,
	EMovieSceneObjectBindingSpace = 2,
};

// Enum MovieScene.EMovieSceneCompletionMode
enum class EMovieSceneCompletionMode : uint8_t {
	EMovieSceneCompletionMode = 0,
	EMovieSceneCompletionMode = 1,
	EMovieSceneCompletionMode = 2,
	EMovieSceneCompletionMode = 3,
};

// Enum MovieScene.ESectionEvaluationFlags
enum class ESectionEvaluationFlags : uint8_t {
	ESectionEvaluationFlags = 0,
	ESectionEvaluationFlags = 1,
	ESectionEvaluationFlags = 2,
	ESectionEvaluationFlags = 3,
};

// Enum MovieScene.EUpdatePositionMethod
enum class EUpdatePositionMethod : uint8_t {
	EUpdatePositionMethod = 0,
	EUpdatePositionMethod = 1,
	EUpdatePositionMethod = 2,
	EUpdatePositionMethod = 3,
};

// Enum MovieScene.ESpawnOwnership
enum class ESpawnOwnership : uint8_t {
	ESpawnOwnership = 0,
	ESpawnOwnership = 1,
	ESpawnOwnership = 2,
	ESpawnOwnership = 3,
};

// Class MovieScene.MovieSceneSignedObject
class UMovieSceneSignedObject : public Object {

public:

	struct Unknown Signature; // 0x28 (16)
};

// Class MovieScene.MovieSceneTrack
class UMovieSceneTrack : public UMovieSceneSignedObject {

public:

	struct Unknown EvalOptions; // 0x50 (4)
	char bIsEvalDisabled : 0; // 0x55 (1)
};

// Class MovieScene.MovieSceneSection
class UMovieSceneSection : public UMovieSceneSignedObject {

public:

	struct Unknown EvalOptions; // 0x50 (2)
	struct Unknown Easing; // 0x58 (56)
	struct Unknown SectionRange; // 0x90 (16)
	struct Unknown PreRollFrames; // 0xA0 (4)
	struct Unknown PostRollFrames; // 0xA4 (4)
	int32_t rowIndex; // 0xA8 (4)
	int32_t OverlapPriority; // 0xAC (4)
	char bIsActive : 0; // 0xB0 (1)
	char bIsLocked : 0; // 0xB0 (1)
	float StartTime; // 0xB4 (4)
	float EndTime; // 0xB8 (4)
	float PrerollTime; // 0xBC (4)
	float PostrollTime; // 0xC0 (4)
	char bIsInfinite : 0; // 0xC4 (1)
	char bSupportsInfiniteRange : 0; // 0xC8 (1)
	struct Unknown BlendType; // 0xC9 (2)

	void SetRowIndex(int32_t NewRowIndex); // Function MovieScene.MovieSceneSection.SetRowIndex(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BEB60>
	void SetPreRollFrames(int32_t InPreRollFrames); // Function MovieScene.MovieSceneSection.SetPreRollFrames(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BEAD0>
	void SetPostRollFrames(int32_t InPostRollFrames); // Function MovieScene.MovieSceneSection.SetPostRollFrames(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BEA40>
	void SetOverlapPriority(int32_t NewPriority); // Function MovieScene.MovieSceneSection.SetOverlapPriority(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BE9C0>
	void SetIsLocked(char bInIsLocked); // Function MovieScene.MovieSceneSection.SetIsLocked(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BE930>
	void SetIsActive(char bInIsActive); // Function MovieScene.MovieSceneSection.SetIsActive(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BE8A0>
	void SetCompletionMode(enum class Unknow InCompletionMode); // Function MovieScene.MovieSceneSection.SetCompletionMode(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BE820>
	void SetBlendType(enum class Unknow InBlendType); // Function MovieScene.MovieSceneSection.SetBlendType(RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BE7A0>
	char IsLocked(); // Function MovieScene.MovieSceneSection.IsLocked(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BE770>
	char IsActive(); // Function MovieScene.MovieSceneSection.IsActive(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BE740>
	int32_t GetRowIndex(); // Function MovieScene.MovieSceneSection.GetRowIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BE720>
	int32_t GetPreRollFrames(); // Function MovieScene.MovieSceneSection.GetPreRollFrames(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BE700>
	int32_t GetPostRollFrames(); // Function MovieScene.MovieSceneSection.GetPostRollFrames(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BE6E0>
	int32_t GetOverlapPriority(); // Function MovieScene.MovieSceneSection.GetOverlapPriority(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BE6C0>
	enum class Unknow GetCompletionMode(); // Function MovieScene.MovieSceneSection.GetCompletionMode(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BE6A0>
	struct Unknown GetBlendType(); // Function MovieScene.MovieSceneSection.GetBlendType(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BE670>
};

// Class MovieScene.MovieSceneSequence
class UMovieSceneSequence : public UMovieSceneSignedObject {

public:

	struct Unknown PrecompiledEvaluationTemplate; // 0x50 (752)
	enum class Unknow DefaultCompletionMode; // 0x340 (1)
	char bParentContextsAreSignificant : 0; // 0x341 (1)
	char bPlayableDirectly : 0; // 0x342 (1)

	struct TArray<Unknown> FindBindingsByTag(struct FName InBindingName); // Function MovieScene.MovieSceneSequence.FindBindingsByTag(Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2B80>
	struct Unknown FindBindingByTag(struct FName InBindingName); // Function MovieScene.MovieSceneSequence.FindBindingByTag(Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2AD0>
};

// Class MovieScene.MovieSceneSequencePlayer
class UMovieSceneSequencePlayer : public Object {

public:

	struct FMulticastInlineDelegate OnPlay; // 0x408 (16)
	struct FMulticastInlineDelegate OnPlayReverse; // 0x418 (16)
	struct FMulticastInlineDelegate OnStop; // 0x428 (16)
	struct FMulticastInlineDelegate OnPause; // 0x438 (16)
	struct FMulticastInlineDelegate OnFinished; // 0x448 (16)
	enum class None status; // 0x458 (1)
	char bReversePlayback : 0; // 0x45C (1)
	struct Unknown Sequence; // 0x460 (8)
	struct Unknown StartTime; // 0x468 (4)
	int32_t DurationFrames; // 0x46C (4)
	int32_t CurrentNumLoops; // 0x470 (4)
	struct Unknown PlaybackSettings; // 0x488 (20)
	struct Unknown RootTemplateInstance; // 0x4A0 (800)
	struct Unknown NetSyncProps; // 0x828 (16)
	struct TScriptInterface<IUnknown> PlaybackClient; // 0x838 (16)

	void StopAtCurrentTime(); // Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C4060>
	void Stop(); // Function MovieScene.MovieSceneSequencePlayer.Stop(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C4040>
	void SetTimeRange(float StartTime, float Duration); // Function MovieScene.MovieSceneSequencePlayer.SetTimeRange(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C3F80>
	void SetPlayRate(float PlayRate); // Function MovieScene.MovieSceneSequencePlayer.SetPlayRate(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C3D40>
	void SetPlaybackRange(float NewStartTime, float NewEndTime); // Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C3EC0>
	void SetPlaybackPosition(float NewPlaybackPosition); // Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C3DC0>
	void SetFrameRate(struct Unknown FrameRate); // Function MovieScene.MovieSceneSequencePlayer.SetFrameRate(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C3CB0>
	void SetFrameRange(int32_t StartFrame, int32_t Duration); // Function MovieScene.MovieSceneSequencePlayer.SetFrameRange(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C3BF0>
	void SetDisableCameraCuts(char bInDisableCameraCuts); // Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C3B60>
	void ScrubToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C3440>
	char ScrubToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C3AB0>
	void ScrubToFrame(struct Unknown NewPosition); // Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C3A20>
	void Scrub(); // Function MovieScene.MovieSceneSequencePlayer.Scrub(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C3A00>
	void RPC_OnStopEvent(struct Unknown StoppedTime); // Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent(Final|Net|NetReliableNative|Event|NetMulticast|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C3970>
	void RPC_ExplicitServerUpdateEvent(enum class Unknow Method, struct Unknown RelevantTime); // Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent(Final|Net|NetReliableNative|Event|NetMulticast|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C38A0>
	void PlayToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C3820>
	char PlayToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C3770>
	void PlayToFrame(struct Unknown NewPosition); // Function MovieScene.MovieSceneSequencePlayer.PlayToFrame(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C36E0>
	void PlayReverseEx(int32_t InStartTime); // Function MovieScene.MovieSceneSequencePlayer.PlayReverseEx(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C3660>
	void PlayReverse(); // Function MovieScene.MovieSceneSequencePlayer.PlayReverse(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C3640>
	void PlayLooping(int32_t NumLoops, char HasJumped); // Function MovieScene.MovieSceneSequencePlayer.PlayLooping(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C3580>
	void Play(); // Function MovieScene.MovieSceneSequencePlayer.Play(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C3560>
	void Pause(); // Function MovieScene.MovieSceneSequencePlayer.Pause(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C3540>
	void JumpToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C34C0>
	void JumpToPosition(float NewPlaybackPosition); // Function MovieScene.MovieSceneSequencePlayer.JumpToPosition(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C3440>
	char JumpToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C3390>
	void JumpToFrame(struct Unknown NewPosition); // Function MovieScene.MovieSceneSequencePlayer.JumpToFrame(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C3300>
	char IsReversed(); // Function MovieScene.MovieSceneSequencePlayer.IsReversed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C32D0>
	char IsPlaying(); // Function MovieScene.MovieSceneSequencePlayer.IsPlaying(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C32A0>
	char IsPaused(); // Function MovieScene.MovieSceneSequencePlayer.IsPaused(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C3270>
	void GoToEndAndStop(); // Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C3250>
	struct Unknown GetStartTime(); // Function MovieScene.MovieSceneSequencePlayer.GetStartTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C3200>
	float GetPlayRate(); // Function MovieScene.MovieSceneSequencePlayer.GetPlayRate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2FD0>
	float GetPlaybackStart(); // Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C3180>
	float GetPlaybackPosition(); // Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C3090>
	float GetPlaybackEnd(); // Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C3000>
	struct TArray<Unknown> GetObjectBindings(struct Unknown InObject); // Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2EF0>
	float GetLength(); // Function MovieScene.MovieSceneSequencePlayer.GetLength(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2EC0>
	struct Unknown GetFrameRate(); // Function MovieScene.MovieSceneSequencePlayer.GetFrameRate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2EA0>
	int32_t GetFrameDuration(); // Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2E70>
	struct Unknown GetEndTime(); // Function MovieScene.MovieSceneSequencePlayer.GetEndTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2E10>
	struct Unknown GetDuration(); // Function MovieScene.MovieSceneSequencePlayer.GetDuration(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2DD0>
	char GetDisableCameraCuts(); // Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2DA0>
	struct Unknown GetCurrentTime(); // Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2D60>
	struct TArray<Unknown> GetBoundObjects(struct Unknown ObjectBinding); // Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2C60>
	void ChangePlaybackDirection(); // Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2AB0>
};

// Class MovieScene.MovieSceneSubSection
class UMovieSceneSubSection : public UMovieSceneSection {

public:

	struct Unknown Parameters; // 0xE0 (36)
	float StartOffset; // 0x104 (4)
	float TimeScale; // 0x108 (4)
	float PrerollTime; // 0x10C (4)
	struct Unknown SubSequence; // 0x110 (8)
	LazyObjectProperty ActorToRecord; // 0x118 (28)
	struct FString TargetSequenceName; // 0x138 (16)
	struct Unknown TargetPathToRecordTo; // 0x148 (16)

	void SetSequence(struct Unknown Sequence); // Function MovieScene.MovieSceneSubSection.SetSequence(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C6D90>
	struct Unknown GetSequence(); // Function MovieScene.MovieSceneSubSection.GetSequence(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C6D60>
};

// Class MovieScene.MovieSceneSubTrack
class UMovieSceneSubTrack : public UMovieSceneNameableTrack {

public:

	struct TArray<Unknown> Sections; // 0x58 (16)
};

// Class MovieScene.MovieScene
class UMovieScene : public UMovieSceneSignedObject {

public:

	struct TArray<Unknown> Spawnables; // 0x50 (16)
	struct TArray<Unknown> Possessables; // 0x60 (16)
	struct TArray<Unknown> ObjectBindings; // 0x70 (16)
	struct TMap<Unknown, Unknown> BindingGroups; // 0x80 (80)
	struct TArray<Unknown> MasterTracks; // 0xD0 (16)
	struct Unknown CameraCutTrack; // 0xE0 (8)
	struct Unknown SelectionRange; // 0xE8 (16)
	struct Unknown PlaybackRange; // 0xF8 (16)
	struct Unknown TickResolution; // 0x108 (8)
	struct Unknown DisplayRate; // 0x110 (8)
	enum class Unknow EvaluationType; // 0x118 (1)
	enum class Unknow ClockSource; // 0x119 (1)
	struct Unknown CustomClockSourcePath; // 0x120 (24)
	struct TArray<Unknown> MarkedFrames; // 0x138 (16)
};

// Class MovieScene.MovieSceneBindingOv
class UMovieSceneBindingOv : public Object {

public:

	struct TArray<Unknown> BindingData; // 0x28 (16)
};

// Class MovieScene.MovieSceneBuiltInEasingFunction
class UMovieSceneBuiltInEasingFunction : public Object {

public:

	enum class Unknow Type; // 0x30 (1)
};

// Class MovieScene.MovieSceneEasingExternalCurve
class UMovieSceneEasingExternalCurve : public Object {

public:

	struct Unknown Curve; // 0x30 (8)
};

// Class MovieScene.MovieSceneFolder
class UMovieSceneFolder : public Object {

public:

	struct FName FolderName; // 0x28 (8)
	struct TArray<Unknown> ChildFolders; // 0x30 (16)
	struct TArray<Unknown> ChildMasterTracks; // 0x40 (16)
	struct TArray<Unknown> ChildObjectBindingStrings; // 0x50 (16)
};

// Class MovieScene.TestMovieSceneTrack
class UTestMovieSceneTrack : public UMovieSceneTrack {

public:

	char bHighPassFilter : 0; // 0x58 (1)
	struct TArray<Unknown> SectionArray; // 0x60 (16)
};

// Class MovieScene.TestMovieSceneSequence
class UTestMovieSceneSequence : public UMovieSceneSequence {

public:

	struct Unknown MovieScene; // 0x348 (8)
};

// Class MovieScene.TestMovieSceneSubTrack
class UTestMovieSceneSubTrack : public UMovieSceneSubTrack {

public:

	struct TArray<Unknown> SectionArray; // 0x68 (16)
};

// ScriptStruct MovieScene.MovieSceneEvalTemplate
struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase {
	enum class Unknow CompletionMode; // 0x10 (1)
	struct TWeakObjectPtr<struct Unknown> SourceSectionPtr; // 0x14 (8)
};

// ScriptStruct MovieScene.MovieSceneBoolChannel
struct FMovieSceneBoolChannel : FMovieSceneChannel {
	struct TArray<Unknown> Times; // 0x8 (16)
	char DefaultValue : 0; // 0x18 (1)
	char bHasDefaultValue : 0; // 0x19 (1)
	struct TArray<Unknown> Values; // 0x20 (16)
};

// ScriptStruct MovieScene.MovieSceneFloatChannel
struct FMovieSceneFloatChannel : FMovieSceneChannel {
	char PreInfinityExtrap; // 0x8 (1)
	char PostInfinityExtrap; // 0x9 (1)
	struct TArray<Unknown> Times; // 0x10 (16)
	struct TArray<Unknown> Values; // 0x20 (16)
	float DefaultValue; // 0x30 (4)
	char bHasDefaultValue : 0; // 0x34 (1)
	struct Unknown KeyHandles; // 0x38 (96)
	struct Unknown TickResolution; // 0x98 (8)
};

// ScriptStruct MovieScene.MovieSceneFloatValue
struct FMovieSceneFloatValue {
	float Value; // 0x0 (4)
	struct Unknown Tangent; // 0x4 (20)
	char InterpMode; // 0x18 (1)
	char TangentMode; // 0x19 (1)
	char PaddingByte; // 0x1A (1)
};

// ScriptStruct MovieScene.MovieSceneTangentData
struct FMovieSceneTangentData {
	float ArriveTangent; // 0x0 (4)
	float LeaveTangent; // 0x4 (4)
	float ArriveTangentWeight; // 0x8 (4)
	float LeaveTangentWeight; // 0xC (4)
	char TangentWeightMode; // 0x10 (1)
};

// ScriptStruct MovieScene.MovieSceneIntegerChannel
struct FMovieSceneIntegerChannel : FMovieSceneChannel {
	struct TArray<Unknown> Times; // 0x8 (16)
	int32_t DefaultValue; // 0x18 (4)
	char bHasDefaultValue : 0; // 0x1C (1)
	struct TArray<Unknown> Values; // 0x20 (16)
};

// ScriptStruct MovieScene.MovieScenePropertySectionTemplate
struct FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate {
	struct Unknown PropertyData; // 0x20 (40)
};

// ScriptStruct MovieScene.MovieScenePropertySectionData
struct FMovieScenePropertySectionData {
	struct FName PropertyName; // 0x0 (8)
	struct FString PropertyPath; // 0x8 (16)
	struct FName FunctionName; // 0x18 (8)
	struct FName NotifyFunctionName; // 0x20 (8)
};

// ScriptStruct MovieScene.MovieSceneEvaluationOperand
struct FMovieSceneEvaluationOperand {
	struct Unknown ObjectBindingID; // 0x0 (16)
	struct Unknown SequenceID; // 0x10 (4)
};

// ScriptStruct MovieScene.MovieSceneSequenceID
struct FMovieSceneSequenceID {
	uint32_t Value; // 0x0 (4)
};

// ScriptStruct MovieScene.MovieSceneSectionGroup
struct FMovieSceneSectionGroup {
	struct TArray<Unknown> Sections; // 0x0 (16)
};

// ScriptStruct MovieScene.MovieSceneObjectBindingIDs
struct FMovieSceneObjectBindingIDs {
	struct TArray<Unknown> IDs; // 0x0 (16)
};

// ScriptStruct MovieScene.MovieSceneObjectBindingID
struct FMovieSceneObjectBindingID {
	int32_t SequenceID; // 0x0 (4)
	enum class Unknow Space; // 0x4 (1)
	struct Unknown Guid; // 0x8 (16)
};

// ScriptStruct MovieScene.MovieSceneTrackLabels
struct FMovieSceneTrackLabels {
	struct TArray<Unknown> Strings; // 0x0 (16)
};

// ScriptStruct MovieScene.MovieSceneEditorData
struct FMovieSceneEditorData {
	struct TMap<Unknown, Unknown> ExpansionStates; // 0x0 (80)
	struct TArray<Unknown> PinnedNodes; // 0x50 (16)
	double ViewStart; // 0x60 (8)
	double ViewEnd; // 0x68 (8)
	double WorkStart; // 0x70 (8)
	double WorkEnd; // 0x78 (8)
	struct TSet<Unknown> MarkedFrames; // 0x80 (80)
	struct Unknown WorkingRange; // 0xD0 (16)
	struct Unknown ViewRange; // 0xE0 (16)
};

// ScriptStruct MovieScene.MovieSceneExpansionState
struct FMovieSceneExpansionState {
	char bExpanded : 0; // 0x0 (1)
};

// ScriptStruct MovieScene.MovieSceneMarkedFrame
struct FMovieSceneMarkedFrame {
	struct Unknown FrameNumber; // 0x0 (4)
	struct FString Label; // 0x8 (16)
};

// ScriptStruct MovieScene.MovieSceneTimecodeSource
struct FMovieSceneTimecodeSource {
	struct Unknown Timecode; // 0x0 (20)
	struct Unknown DeltaFrame; // 0x14 (4)
};

// ScriptStruct MovieScene.MovieSceneBinding
struct FMovieSceneBinding {
	struct Unknown ObjectGuid; // 0x0 (16)
	struct FString BindingName; // 0x10 (16)
	struct TArray<Unknown> Tracks; // 0x20 (16)
};

// ScriptStruct MovieScene.MovieSceneBindingOv
struct FMovieSceneBindingOvinding {
	struct Unknown ObjectBindingID; // 0x0 (24)
	struct TWeakObjectPtr<struct Unknown> Object; // 0x18 (8)
	char bOverridesDefault : 0; // 0x20 (1)
};

// ScriptStruct MovieScene.OptionalMovieSceneBlendType
struct FOptionalMovieSceneBlendType {
	enum class Unknow BlendType; // 0x0 (1)
	char bIsValid : 0; // 0x1 (1)
};

// ScriptStruct MovieScene.MovieSceneByteChannel
struct FMovieSceneByteChannel : FMovieSceneChannel {
	struct TArray<Unknown> Times; // 0x8 (16)
	char DefaultValue; // 0x18 (1)
	char bHasDefaultValue : 0; // 0x19 (1)
	struct TArray<Unknown> Values; // 0x20 (16)
	struct Unknown Enum; // 0x30 (8)
};

// ScriptStruct MovieScene.MovieSceneEvaluationField
struct FMovieSceneEvaluationField {
	struct TArray<Unknown> Ranges; // 0x0 (16)
	struct TArray<Unknown> Groups; // 0x10 (16)
	struct TArray<Unknown> MetaData; // 0x20 (16)
};

// ScriptStruct MovieScene.MovieSceneEvaluationMetaData
struct FMovieSceneEvaluationMetaData {
	struct TArray<Unknown> ActiveSequences; // 0x0 (16)
	struct TArray<Unknown> ActiveEntities; // 0x10 (16)
	struct TMap<Unknown, Unknown> SubTemplateSerialNumbers; // 0x20 (80)
};

// ScriptStruct MovieScene.MovieSceneOrderedEv
struct FMovieSceneOrderedEv {
	struct Unknown Key; // 0x0 (12)
	uint16_t SetupIndex; // 0xC (2)
	uint16_t TearDownIndex; // 0xE (2)
};

// ScriptStruct MovieScene.MovieSceneEvaluationKey
struct FMovieSceneEvaluationKey {
	struct Unknown SequenceID; // 0x0 (4)
	struct Unknown TrackIdentifier; // 0x4 (4)
	uint32_t SectionIndex; // 0x8 (4)
};

// ScriptStruct MovieScene.MovieSceneTrackIdentifier
struct FMovieSceneTrackIdentifier {
	uint32_t Value; // 0x0 (4)
};

// ScriptStruct MovieScene.MovieSceneEvaluationGroup
struct FMovieSceneEvaluationGroup {
	struct TArray<Unknown> LUTIndices; // 0x0 (16)
	struct TArray<Unknown> SegmentPtrLUT; // 0x10 (16)
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
struct FMovieSceneEvaluationFieldTrackPtr {
	struct Unknown SequenceID; // 0x0 (4)
	struct Unknown TrackIdentifier; // 0x4 (4)
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr {
	struct Unknown SegmentID; // 0x8 (4)
};

// ScriptStruct MovieScene.MovieSceneSegmentIdentifier
struct FMovieSceneSegmentIdentifier {
	int32_t IdentifierIndex; // 0x0 (4)
};

// ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
struct FMovieSceneEvaluationGroupLUTIndex {
	int32_t LUTOffset; // 0x0 (4)
	int32_t NumInitPtrs; // 0x4 (4)
	int32_t NumEvalPtrs; // 0x8 (4)
};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplate
struct FMovieSceneEvaluationTemplate {
	struct TMap<Unknown, Unknown> Tracks; // 0x0 (80)
	struct Unknown EvaluationField; // 0xA0 (48)
	struct Unknown Hierarchy; // 0xD0 (160)
	struct Unknown SequenceSignature; // 0x170 (16)
	struct Unknown TemplateSerialNumber; // 0x180 (4)
	struct Unknown TemplateLedger; // 0x188 (168)
	struct Unknown TrackFieldData; // 0x230 (96)
	struct Unknown SubSectionFieldData; // 0x290 (96)
};

// ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
struct FMovieSceneTemplateGenerationLedger {
	struct Unknown LastTrackIdentifier; // 0x0 (4)
	struct TMap<Unknown, Unknown> TrackSignatureToTrackIdentifier; // 0x8 (80)
	struct TMap<Unknown, Unknown> SubSectionRanges; // 0x58 (80)
};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplateSerialNumber
struct FMovieSceneEvaluationTemplateSerialNumber {
	uint32_t Value; // 0x0 (4)
};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchy
struct FMovieSceneSequenceHierarchy {
	struct TMap<Unknown, Unknown> SubSequences; // 0x0 (80)
	struct TMap<Unknown, Unknown> Hierarchy; // 0x50 (80)
};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
struct FMovieSceneSequenceHierarchyNode {
	struct Unknown ParentID; // 0x0 (4)
	struct TArray<Unknown> Children; // 0x8 (16)
};

// ScriptStruct MovieScene.MovieSceneSubSequenceData
struct FMovieSceneSubSequenceData {
	struct Unknown Sequence; // 0x0 (24)
	struct Unknown RootToSequenceTransform; // 0x18 (32)
	struct Unknown TickResolution; // 0x38 (8)
	struct Unknown DeterministicSequenceID; // 0x40 (4)
	struct Unknown PlayRange; // 0x44 (16)
	struct Unknown FullPlayRange; // 0x54 (16)
	struct Unknown UnwarpedPlayRange; // 0x64 (16)
	struct Unknown PreRollRange; // 0x74 (16)
	struct Unknown PostRollRange; // 0x84 (16)
	int32_t HierarchicalBias; // 0x94 (4)
	struct Unknown InstanceData; // 0x98 (24)
	struct Unknown SubSectionSignature; // 0xB8 (16)
	struct Unknown OuterToInnerTransform; // 0xC8 (32)
};

// ScriptStruct MovieScene.MovieSceneSequenceTransform
struct FMovieSceneSequenceTransform {
	struct Unknown LinearTransform; // 0x0 (12)
	struct TArray<Unknown> NestedTransforms; // 0x10 (16)
};

// ScriptStruct MovieScene.MovieSceneNestedSequenceTransform
struct FMovieSceneNestedSequenceTransform {
	struct Unknown LinearTransform; // 0x0 (12)
	struct Unknown Warping; // 0xC (8)
};

// ScriptStruct MovieScene.MovieSceneTimeWarping
struct FMovieSceneTimeWarping {
	struct Unknown Start; // 0x0 (4)
	struct Unknown End; // 0x4 (4)
};

// ScriptStruct MovieScene.MovieSceneTimeTransform
struct FMovieSceneTimeTransform {
	float TimeScale; // 0x0 (4)
	struct Unknown Offset; // 0x4 (8)
};

// ScriptStruct MovieScene.MovieSceneEvaluationTrack
struct FMovieSceneEvaluationTrack {
	struct Unknown ObjectBindingID; // 0x0 (16)
	uint16_t EvaluationPriority; // 0x10 (2)
	enum class Unknow EvaluationMethod; // 0x12 (1)
	struct Unknown Segments; // 0x18 (32)
	struct Unknown SourceTrack; // 0x38 (8)
	struct Unknown EvaluationTree; // 0x40 (96)
	struct TArray<Unknown> ChildTemplates; // 0xA0 (16)
	struct Unknown TrackTemplate; // 0xB0 (56)
	struct FName EvaluationGroup; // 0xE8 (8)
	char bEvaluateInPreroll : 0; // 0xF0 (1)
	char bEvaluateInPostroll : 0; // 0xF0 (1)
	char bTearDownPriority : 0; // 0xF0 (1)
};

// ScriptStruct MovieScene.MovieSceneEvaluationTrackSegments
struct FMovieSceneEvaluationTrackSegments {
	struct TArray<Unknown> SegmentIdentifierToIndex; // 0x0 (16)
	struct TArray<Unknown> SortedSegments; // 0x10 (16)
};

// ScriptStruct MovieScene.MovieSceneSubSectionData
struct FMovieSceneSubSectionData {
	struct TWeakObjectPtr<struct Unknown> Section; // 0x0 (8)
	struct Unknown ObjectBindingID; // 0x8 (16)
	enum class Unknow Flags; // 0x18 (1)
};

// ScriptStruct MovieScene.MovieSceneRootEvaluationTemplateInstance
struct FMovieSceneRootEvaluationTemplateInstance {
	struct TMap<Unknown, Unknown> DirectorInstances; // 0x18 (80)
};

// ScriptStruct MovieScene.MovieSceneKeyTimeStruct
struct FMovieSceneKeyTimeStruct : FMovieSceneKeyStruct {
	struct Unknown Time; // 0x8 (4)
};

// ScriptStruct MovieScene.MovieSceneObjectPathChannel
struct FMovieSceneObjectPathChannel : FMovieSceneChannel {
	struct Unknown* PropertyClass; // 0x8 (8)
	struct TArray<Unknown> Times; // 0x10 (16)
	struct TArray<Unknown> Values; // 0x20 (16)
	struct Unknown DefaultValue; // 0x30 (48)
};

// ScriptStruct MovieScene.MovieSceneObjectPathChannelKeyValue
struct FMovieSceneObjectPathChannelKeyValue {
	struct Unknown SoftPtr; // 0x0 (40)
	struct Unknown HardPtr; // 0x28 (8)
};

// ScriptStruct MovieScene.MovieScenePossessable
struct FMovieScenePossessable {
	struct TArray<Unknown> Tags; // 0x0 (16)
	struct Unknown Guid; // 0x10 (16)
	struct FString Name; // 0x20 (16)
	struct Unknown* PossessedObjectClass; // 0x30 (8)
	struct Unknown ParentGuid; // 0x38 (16)
};

// ScriptStruct MovieScene.MovieSceneEasingSettings
struct FMovieSceneEasingSettings {
	int32_t AutoEaseInDuration; // 0x0 (4)
	int32_t AutoEaseOutDuration; // 0x4 (4)
	struct TScriptInterface<IUnknown> EaseIn; // 0x8 (16)
	char bManualEaseIn : 0; // 0x18 (1)
	int32_t ManualEaseInDuration; // 0x1C (4)
	struct TScriptInterface<IUnknown> EaseOut; // 0x20 (16)
	char bManualEaseOut : 0; // 0x30 (1)
	int32_t ManualEaseOutDuration; // 0x34 (4)
};

// ScriptStruct MovieScene.MovieSceneSectionEv
struct FMovieSceneSectionEvttings {
	char bCanEditCompletionMode : 0; // 0x0 (1)
	enum class Unknow CompletionMode; // 0x1 (1)
};

// ScriptStruct MovieScene.MovieSceneSectionParameters
struct FMovieSceneSectionParameters {
	struct Unknown StartFrameOffset; // 0x0 (4)
	char bCanLoop : 0; // 0x4 (1)
	struct Unknown EndFrameOffset; // 0x8 (4)
	struct Unknown FirstLoopStartFrameOffset; // 0xC (4)
	float TimeScale; // 0x10 (4)
	int32_t HierarchicalBias; // 0x14 (4)
	float StartOffset; // 0x18 (4)
	float PrerollTime; // 0x1C (4)
	float PostrollTime; // 0x20 (4)
};

// ScriptStruct MovieScene.SectionEvaluationData
struct FSectionEvaluationData {
	int32_t ImplIndex; // 0x0 (4)
	struct Unknown ForcedTime; // 0x4 (4)
	enum class Unknow Flags; // 0x8 (1)
};

// ScriptStruct MovieScene.MovieSceneSequencePlayback
struct FMovieSceneSequencePlayback {
	char bAutoPlay : 0; // 0x0 (1)
	struct Unknown LoopCount; // 0x4 (4)
	float PlayRate; // 0x8 (4)
	float StartTime; // 0xC (4)
	char bRandomStartTime : 0; // 0x10 (1)
	char bRestoreState : 0; // 0x10 (1)
	char bDisableMovementInput : 0; // 0x10 (1)
	char bDisableLookAtInput : 0; // 0x10 (1)
	char bHidePlayer : 0; // 0x10 (1)
	char bHideHud : 0; // 0x10 (1)
	char bDisableCameraCuts : 0; // 0x10 (1)
	char bPauseAtEnd : 0; // 0x10 (1)
};

// ScriptStruct MovieScene.MovieSceneSequenceLoopCount
struct FMovieSceneSequenceLoopCount {
	int32_t Value; // 0x0 (4)
};

// ScriptStruct MovieScene.MovieSceneSequenceReplProperties
struct FMovieSceneSequenceReplProperties {
	struct Unknown LastKnownPosition; // 0x0 (8)
	char LastKnownStatus; // 0x8 (1)
	int32_t LastKnownNumLoops; // 0xC (4)
};

// ScriptStruct MovieScene.MovieSceneWarpCounter
struct FMovieSceneWarpCounter {
	struct TArray<Unknown> WarpCounts; // 0x0 (16)
};

// ScriptStruct MovieScene.MovieSceneSpawnable
struct FMovieSceneSpawnable {
	struct Unknown SpawnTransform; // 0x0 (48)
	struct TArray<Unknown> Tags; // 0x30 (16)
	char bContinuouslyRespawn : 0; // 0x40 (1)
	struct Unknown Guid; // 0x44 (16)
	struct FString Name; // 0x58 (16)
	struct Unknown ObjectTemplate; // 0x68 (8)
	struct TArray<Unknown> ChildPossessables; // 0x70 (16)
	enum class Unknow Ownership; // 0x80 (1)
	struct FName LevelName; // 0x84 (8)
};

// ScriptStruct MovieScene.MovieSceneTrackDisplayOptions
struct FMovieSceneTrackDisplayOptions {
	char bShowVerticalFrames : 0; // 0x0 (1)
};

// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
struct FMovieSceneTrackEvalOptions {
	char bCanEvaluateNearestSection : 0; // 0x0 (1)
	char bEvalNearestSection : 0; // 0x0 (1)
	char bEvaluateInPreroll : 0; // 0x0 (1)
	char bEvaluateInPostroll : 0; // 0x0 (1)
	char bEvaluateNearestSection : 0; // 0x0 (1)
};

