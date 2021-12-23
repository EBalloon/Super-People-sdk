// Enum MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : uint8 {
	EMovieSceneKeyInterpolation = 0
	EMovieSceneKeyInterpolation = 1
	EMovieSceneKeyInterpolation = 2
	EMovieSceneKeyInterpolation = 3
	EMovieSceneKeyInterpolation = 4
	EMovieSceneKeyInterpolation = 5
};

// Enum MovieScene.EMovieSceneBlendType
enum class EMovieSceneBlendType : uint8 {
	EMovieSceneBlendType = 0
	EMovieSceneBlendType = 1
	EMovieSceneBlendType = 2
	EMovieSceneBlendType = 4
	EMovieSceneBlendType = 5
};

// Enum MovieScene.EMovieSceneBuiltInEasing
enum class EMovieSceneBuiltInEasing : uint8 {
	EMovieSceneBuiltInEasing = 0
	EMovieSceneBuiltInEasing = 1
	EMovieSceneBuiltInEasing = 2
	EMovieSceneBuiltInEasing = 3
	EMovieSceneBuiltInEasing = 4
	EMovieSceneBuiltInEasing = 5
	EMovieSceneBuiltInEasing = 6
	EMovieSceneBuiltInEasing = 7
	EMovieSceneBuiltInEasing = 8
	EMovieSceneBuiltInEasing = 9
	EMovieSceneBuiltInEasing = 10
	EMovieSceneBuiltInEasing = 11
	EMovieSceneBuiltInEasing = 12
	EMovieSceneBuiltInEasing = 13
	EMovieSceneBuiltInEasing = 14
	EMovieSceneBuiltInEasing = 15
	EMovieSceneBuiltInEasing = 16
	EMovieSceneBuiltInEasing = 17
	EMovieSceneBuiltInEasing = 18
	EMovieSceneBuiltInEasing = 19
	EMovieSceneBuiltInEasing = 20
	EMovieSceneBuiltInEasing = 21
	EMovieSceneBuiltInEasing = 22
};

// Enum MovieScene.EEvaluationMethod
enum class EEvaluationMethod : uint8 {
	EEvaluationMethod = 0
	EEvaluationMethod = 1
	EEvaluationMethod = 2
};

// Enum MovieScene.EUpdateClockSource
enum class EUpdateClockSource : uint8 {
	EUpdateClockSource = 0
	EUpdateClockSource = 1
	EUpdateClockSource = 2
	EUpdateClockSource = 3
	EUpdateClockSource = 4
	EUpdateClockSource = 5
	EUpdateClockSource = 6
};

// Enum MovieScene.EMovieSceneEvaluationType
enum class EMovieSceneEvaluationType : uint8 {
	EMovieSceneEvaluationType = 0
	EMovieSceneEvaluationType = 1
	EMovieSceneEvaluationType = 2
};

// Enum MovieScene.EMovieScenePlayerStatus
enum class EMovieScenePlayerStatus : uint8 {
	EMovieScenePlayerStatus = 0
	EMovieScenePlayerStatus = 1
	EMovieScenePlayerStatus = 2
	EMovieScenePlayerStatus = 3
	EMovieScenePlayerStatus = 4
	EMovieScenePlayerStatus = 5
	EMovieScenePlayerStatus = 6
	EMovieScenePlayerStatus = 7
};

// Enum MovieScene.EMovieSceneObjectBindingSpace
enum class EMovieSceneObjectBindingSpace : uint8 {
	EMovieSceneObjectBindingSpace = 0
	EMovieSceneObjectBindingSpace = 1
	EMovieSceneObjectBindingSpace = 2
};

// Enum MovieScene.EMovieSceneCompletionMode
enum class EMovieSceneCompletionMode : uint8 {
	EMovieSceneCompletionMode = 0
	EMovieSceneCompletionMode = 1
	EMovieSceneCompletionMode = 2
	EMovieSceneCompletionMode = 3
};

// Enum MovieScene.ESectionEvaluationFlags
enum class ESectionEvaluationFlags : uint8 {
	ESectionEvaluationFlags = 0
	ESectionEvaluationFlags = 1
	ESectionEvaluationFlags = 2
	ESectionEvaluationFlags = 3
};

// Enum MovieScene.EUpdatePositionMethod
enum class EUpdatePositionMethod : uint8 {
	EUpdatePositionMethod = 0
	EUpdatePositionMethod = 1
	EUpdatePositionMethod = 2
	EUpdatePositionMethod = 3
};

// Enum MovieScene.ESpawnOwnership
enum class ESpawnOwnership : uint8 {
	ESpawnOwnership = 0
	ESpawnOwnership = 1
	ESpawnOwnership = 2
	ESpawnOwnership = 3
};

// Class MovieScene.MovieSceneSignedObject
struct UMovieSceneSignedObject : Object {
	struct Unknown Signature; // 0x28 (16)
};

// Class MovieScene.MovieSceneTrack
struct UMovieSceneTrack : UMovieSceneSignedObject {
	struct Unknown EvalOptions; // 0x50 (4)
	char bIsEvalDisabled : 0; // 0x55 (1)
};

// Class MovieScene.MovieSceneSection
struct UMovieSceneSection : UMovieSceneSignedObject {
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

	void SetRowIndex(int32_t NewRowIndex); // Function MovieScene.MovieSceneSection.SetRowIndex(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BD850>
	void SetPreRollFrames(int32_t InPreRollFrames); // Function MovieScene.MovieSceneSection.SetPreRollFrames(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BD7C0>
	void SetPostRollFrames(int32_t InPostRollFrames); // Function MovieScene.MovieSceneSection.SetPostRollFrames(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BD730>
	void SetOverlapPriority(int32_t NewPriority); // Function MovieScene.MovieSceneSection.SetOverlapPriority(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BD6B0>
	void SetIsLocked(char bInIsLocked); // Function MovieScene.MovieSceneSection.SetIsLocked(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BD620>
	void SetIsActive(char bInIsActive); // Function MovieScene.MovieSceneSection.SetIsActive(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BD590>
	void SetCompletionMode(enum class Unknow InCompletionMode); // Function MovieScene.MovieSceneSection.SetCompletionMode(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BD510>
	void SetBlendType(enum class Unknow InBlendType); // Function MovieScene.MovieSceneSection.SetBlendType(RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BD490>
	char IsLocked(); // Function MovieScene.MovieSceneSection.IsLocked(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BD460>
	char IsActive(); // Function MovieScene.MovieSceneSection.IsActive(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BD430>
	int32_t GetRowIndex(); // Function MovieScene.MovieSceneSection.GetRowIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BD410>
	int32_t GetPreRollFrames(); // Function MovieScene.MovieSceneSection.GetPreRollFrames(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BD3F0>
	int32_t GetPostRollFrames(); // Function MovieScene.MovieSceneSection.GetPostRollFrames(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BD3D0>
	int32_t GetOverlapPriority(); // Function MovieScene.MovieSceneSection.GetOverlapPriority(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BD3B0>
	enum class Unknow GetCompletionMode(); // Function MovieScene.MovieSceneSection.GetCompletionMode(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BD390>
	struct Unknown GetBlendType(); // Function MovieScene.MovieSceneSection.GetBlendType(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BD360>
};

// Class MovieScene.MovieSceneSequence
struct UMovieSceneSequence : UMovieSceneSignedObject {
	struct Unknown PrecompiledEvaluationTemplate; // 0x50 (752)
	enum class Unknow DefaultCompletionMode; // 0x340 (1)
	char bParentContextsAreSignificant : 0; // 0x341 (1)
	char bPlayableDirectly : 0; // 0x342 (1)

	struct TArray<Unknown> FindBindingsByTag(struct FName InBindingName); // Function MovieScene.MovieSceneSequence.FindBindingsByTag(Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C1870>
	struct Unknown FindBindingByTag(struct FName InBindingName); // Function MovieScene.MovieSceneSequence.FindBindingByTag(Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C17C0>
};

// Class MovieScene.MovieSceneSequencePlayer
struct UMovieSceneSequencePlayer : Object {
	struct FMulticastInlineDelegate OnPlay; // 0x408 (16)
	struct FMulticastInlineDelegate OnPlayReverse; // 0x418 (16)
	struct FMulticastInlineDelegate OnStop; // 0x428 (16)
	struct FMulticastInlineDelegate OnPause; // 0x438 (16)
	struct FMulticastInlineDelegate OnFinished; // 0x448 (16)
	enum class Unknown status; // 0x458 (1)
	char b : 0; // 0x45C (1)
	struct Unknown Sequence; // 0x460 (8)
	struct Unknown StartTime; // 0x468 (4)
	int32_t DurationFrames; // 0x46C (4)
	int32_t CurrentNumLoops; // 0x470 (4)
	struct Unknown PlaybackSettings; // 0x488 (20)
	struct Unknown RootTemplateInstance; // 0x4A0 (800)
	struct Unknown NetSyncProps; // 0x828 (16)
	struct TScriptInterface<IUnknown> PlaybackClient; // 0x838 (16)

	void StopAtCurrentTime(); // Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2D50>
	void Stop(); // Function MovieScene.MovieSceneSequencePlayer.Stop(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2D30>
	void SetTimeRange(float StartTime, float Duration); // Function MovieScene.MovieSceneSequencePlayer.SetTimeRange(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2C70>
	void SetPlayRate(float PlayRate); // Function MovieScene.MovieSceneSequencePlayer.SetPlayRate(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2A30>
	void SetPlaybackRange(float NewStartTime, float NewEndTime); // Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2BB0>
	void SetPlaybackPosition(float NewPlaybackPosition); // Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2AB0>
	void SetFrameRate(struct Unknown FrameRate); // Function MovieScene.MovieSceneSequencePlayer.SetFrameRate(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C29A0>
	void SetFrameRange(int32_t StartFrame, int32_t Duration); // Function MovieScene.MovieSceneSequencePlayer.SetFrameRange(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C28E0>
	void SetDisableCameraCuts(char bInDisableCameraCuts); // Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2850>
	void ScrubToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2130>
	char ScrubToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C27A0>
	void ScrubToFrame(struct Unknown NewPosition); // Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2710>
	void Scrub(); // Function MovieScene.MovieSceneSequencePlayer.Scrub(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C26F0>
	void RPC_OnStopEvent(struct Unknown StoppedTime); // Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent(Final|Net|NetReliableNative|Event|NetMulticast|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2660>
	void RPC_ExplicitServerUpdateEvent(enum class Unknow Method, struct Unknown RelevantTime); // Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent(Final|Net|NetReliableNative|Event|NetMulticast|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2590>
	void PlayToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2510>
	char PlayToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2460>
	void PlayToFrame(struct Unknown NewPosition); // Function MovieScene.MovieSceneSequencePlayer.PlayToFrame(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C23D0>
	void PlayReverseEx(int32_t InStartTime); // Function MovieScene.MovieSceneSequencePlayer.PlayReverseEx(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2350>
	void PlayReverse(); // Function MovieScene.MovieSceneSequencePlayer.PlayReverse(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2330>
	void PlayLooping(int32_t NumLoops, char HasJumped); // Function MovieScene.MovieSceneSequencePlayer.PlayLooping(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2270>
	void Play(); // Function MovieScene.MovieSceneSequencePlayer.Play(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2250>
	void Pause(); // Function MovieScene.MovieSceneSequencePlayer.Pause(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2230>
	void JumpToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C21B0>
	void JumpToPosition(float NewPlaybackPosition); // Function MovieScene.MovieSceneSequencePlayer.JumpToPosition(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2130>
	char JumpToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C2080>
	void JumpToFrame(struct Unknown NewPosition); // Function MovieScene.MovieSceneSequencePlayer.JumpToFrame(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C1FF0>
	char IsReversed(); // Function MovieScene.MovieSceneSequencePlayer.IsReversed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C1FC0>
	char IsPlaying(); // Function MovieScene.MovieSceneSequencePlayer.IsPlaying(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C1F90>
	char IsPaused(); // Function MovieScene.MovieSceneSequencePlayer.IsPaused(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C1F60>
	void GoToEndAndStop(); // Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C1F40>
	struct Unknown GetStartTime(); // Function MovieScene.MovieSceneSequencePlayer.GetStartTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C1EF0>
	float GetPlayRate(); // Function MovieScene.MovieSceneSequencePlayer.GetPlayRate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C1CC0>
	float GetPlaybackStart(); // Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C1E70>
	float GetPlaybackPosition(); // Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C1D80>
	float GetPlaybackEnd(); // Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C1CF0>
	struct TArray<Unknown> GetObjectBindings(struct Unknown InObject); // Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C1BE0>
	float GetLength(); // Function MovieScene.MovieSceneSequencePlayer.GetLength(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C1BB0>
	struct Unknown GetFrameRate(); // Function MovieScene.MovieSceneSequencePlayer.GetFrameRate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C1B90>
	int32_t GetFrameDuration(); // Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C1B60>
	struct Unknown GetEndTime(); // Function MovieScene.MovieSceneSequencePlayer.GetEndTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C1B00>
	struct Unknown GetDuration(); // Function MovieScene.MovieSceneSequencePlayer.GetDuration(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C1AC0>
	char GetDisableCameraCuts(); // Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C1A90>
	struct Unknown GetCurrentTime(); // Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C1A50>
	struct TArray<Unknown> GetBoundObjects(struct Unknown ObjectBinding); // Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C1950>
	void ChangePlaybackDirection(); // Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C17A0>
};

// Class MovieScene.MovieSceneSubSection
struct UMovieSceneSubSection : UMovieSceneSection {
	struct Unknown Parameters; // 0xE0 (36)
	float StartOffset; // 0x104 (4)
	float TimeScale; // 0x108 (4)
	float PrerollTime; // 0x10C (4)
	struct Unknown SubSequence; // 0x110 (8)
	Unknown ActorToRecord; // 0x118 (28)
	struct FString TargetSequenceName; // 0x138 (16)
	struct Unknown TargetPathToRecordTo; // 0x148 (16)

	void SetSequence(struct Unknown Sequence); // Function MovieScene.MovieSceneSubSection.SetSequence(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C5A80>
	struct Unknown GetSequence(); // Function MovieScene.MovieSceneSubSection.GetSequence(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31C5A50>
};

// Class MovieScene.MovieSceneSubTrack
struct UMovieSceneSubTrack : UMovieSceneNameableTrack {
	struct TArray<Unknown> Sections; // 0x58 (16)
};

// Class MovieScene.MovieScene
struct UMovieScene : UMovieSceneSignedObject {
	struct TArray<Unknown> Spawnables; // 0x50 (16)
	struct TArray<Unknown> Possessables; // 0x60 (16)
	struct TArray<Unknown> ObjectBindings; // 0x70 (16)
	struct TMap<Unknown, Unknown>Unknown BindingGroups; // 0x80 (80)
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
struct UMovieSceneBindingOv : Object {
	struct TArray<Unknown> BindingData; // 0x28 (16)
};

// Class MovieScene.MovieSceneBuiltInEasingFunction
struct UMovieSceneBuiltInEasingFunction : Object {
	enum class Unknow Type; // 0x30 (1)
};

// Class MovieScene.MovieSceneEasingExternalCurve
struct UMovieSceneEasingExternalCurve : Object {
	struct Unknown Curve; // 0x30 (8)
};

// Class MovieScene.MovieSceneFolder
struct UMovieSceneFolder : Object {
	struct FName FolderName; // 0x28 (8)
	struct TArray<Unknown> ChildFolders; // 0x30 (16)
	struct TArray<Unknown> ChildMasterTracks; // 0x40 (16)
	struct TArray<Unknown> ChildObjectBindingStrings; // 0x50 (16)
};

// Class MovieScene.TestMovieSceneTrack
struct UTestMovieSceneTrack : UMovieSceneTrack {
	char bHighPassFilter : 0; // 0x58 (1)
	struct TArray<Unknown> SectionArray; // 0x60 (16)
};

// Class MovieScene.TestMovieSceneSequence
struct UTestMovieSceneSequence : UMovieSceneSequence {
	struct Unknown MovieScene; // 0x348 (8)
};

// Class MovieScene.TestMovieSceneSubTrack
struct UTestMovieSceneSubTrack : UMovieSceneSubTrack {
	struct TArray<Unknown> SectionArray; // 0x68 (16)
};

