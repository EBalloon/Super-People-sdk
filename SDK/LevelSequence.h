// Class LevelSequence.DefaultLevelSequenceInstanceData
class UDefaultLevelSequenceInstanceData : public Object {

public:

	struct Unknown TransformOriginActor; // 0x30 (8)
	struct Unknown TransformOrigin; // 0x40 (48)
};

// Class LevelSequence.LevelSequence
class ULevelSequence : public UMovieSceneSequence {

public:

	struct Unknown MovieScene; // 0x348 (8)
	struct Unknown ObjectReferences; // 0x350 (80)
	struct Unknown BindingReferences; // 0x3A0 (160)
	struct TMap<Unknown, Unknown> PossessedObjects; // 0x440 (80)
	struct Unknown* DirectorClass; // 0x490 (8)

	void RemoveMetaDataByClass(struct Unknown* InClass); // Function LevelSequence.LevelSequence.RemoveMetaDataByClass(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3504A60>
	struct Unknown FindOrAddMetaDataByClass(struct Unknown* InClass); // Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x35043C0>
	struct Unknown FindMetaDataByClass(struct Unknown* InClass); // Function LevelSequence.LevelSequence.FindMetaDataByClass(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x35043C0>
	struct Unknown CopyMetaData(struct Unknown InMetaData); // Function LevelSequence.LevelSequence.CopyMetaData(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x35043C0>
};

// Class LevelSequence.LevelSequenceBurnInOptions
class ULevelSequenceBurnInOptions : public Object {

public:

	char bUseBurnIn : 0; // 0x28 (1)
	struct Unknown BurnInClass; // 0x30 (24)
	struct Unknown Settings; // 0x48 (8)

	void SetBurnIn(struct Unknown InBurnInClass); // Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3504E20>
};

// Class LevelSequence.LevelSequenceActor
class ALevelSequenceActor : public UActor {

public:

	struct Unknown PlaybackSettings; // 0x320 (20)
	struct Unknown SequencePlayer; // 0x338 (8)
	struct Unknown LevelSequence; // 0x340 (24)
	struct TArray<Unknown> AdditionalEventReceivers; // 0x358 (16)
	struct Unknown CameraSettings; // 0x368 (2)
	struct Unknown BurnInOptions; // 0x370 (8)
	struct Unknown BindingOverrides; // 0x378 (8)
	char bAutoPlay : 0; // 0x380 (1)
	char bOverrideInstanceData : 0; // 0x380 (1)
	char bReplicatePlayback : 0; // 0x380 (1)
	struct Unknown DefaultInstanceData; // 0x388 (8)
	struct Unknown BurnInInstance; // 0x390 (8)
	char bShowBurnin : 0; // 0x398 (1)

	void ShowBurnin(); // Function LevelSequence.LevelSequenceActor.ShowBurnin(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3505180>
	void SetSequence(struct Unknown InSequence); // Function LevelSequence.LevelSequenceActor.SetSequence(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3505100>
	void SetReplicatePlayback(char ReplicatePlayback); // Function LevelSequence.LevelSequenceActor.SetReplicatePlayback(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3505070>
	void SetEventReceivers(struct TArray<Unknown> AdditionalReceivers); // Function LevelSequence.LevelSequenceActor.SetEventReceivers(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3504F20>
	void SetBindingByTag(struct FName BindingTag, struct TArray<Unknown>& Actors, char bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.SetBindingByTag(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3504CF0>
	void SetBinding(struct Unknown Binding, struct TArray<Unknown>& Actors, char bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.SetBinding(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3504BA0>
	void ResetBindings(); // Function LevelSequence.LevelSequenceActor.ResetBindings(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3504B80>
	void ResetBinding(struct Unknown Binding); // Function LevelSequence.LevelSequenceActor.ResetBinding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3504AD0>
	void RemoveBindingByTag(struct FName Tag, struct Unknown Actor); // Function LevelSequence.LevelSequenceActor.RemoveBindingByTag(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x35049A0>
	void RemoveBinding(struct Unknown Binding, struct Unknown Actor); // Function LevelSequence.LevelSequenceActor.RemoveBinding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x35048B0>
	void OnLevelSequenceLoaded__DelegateSignature(); // DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature(Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown LoadSequence(); // Function LevelSequence.LevelSequenceActor.LoadSequence(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3504840>
	void HideBurnin(); // Function LevelSequence.LevelSequenceActor.HideBurnin(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3504820>
	struct Unknown GetSequencePlayer(); // Function LevelSequence.LevelSequenceActor.GetSequencePlayer(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x35047D0>
	struct Unknown GetSequence(); // Function LevelSequence.LevelSequenceActor.GetSequence(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3504780>
	struct TArray<Unknown> FindNamedBindings(struct FName Tag); // Function LevelSequence.LevelSequenceActor.FindNamedBindings(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3504660>
	struct Unknown FindNamedBinding(struct FName Tag); // Function LevelSequence.LevelSequenceActor.FindNamedBinding(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x35045B0>
	void AddBindingByTag(struct FName BindingTag, struct Unknown Actor, char bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.AddBindingByTag(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x35042B0>
	void AddBinding(struct Unknown Binding, struct Unknown Actor, char bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.AddBinding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3504170>
};

// Class LevelSequence.LevelSequenceBurnIn
class ULevelSequenceBurnIn : public UUserWidget {

public:

	struct Unknown FrameInformation; // 0x248 (184)
	struct Unknown LevelSequenceActor; // 0x300 (8)

	void SetSettings(struct Unknown InSettings); // Function LevelSequence.LevelSequenceBurnIn.SetSettings(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown* GetSettingsClass(); // Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass(Native|Event|Public|BlueprintEvent|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3504800>
};

// Class LevelSequence.LevelSequenceDirector
class ULevelSequenceDirector : public Object {

public:

	struct Unknown Player; // 0x28 (8)

	void OnCreated(); // Function LevelSequence.LevelSequenceDirector.OnCreated(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// Class LevelSequence.LevelSequencePlayer
class ULevelSequencePlayer : public UMovieSceneSequencePlayer {

public:

	struct FMulticastInlineDelegate OnCameraCut; // 0x890 (16)

	struct Unknown GetActiveCameraComponent(); // Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3504740>
	struct Unknown CreateLevelSequencePlayer(struct Unknown WorldContextObject, struct Unknown LevelSequence, struct Unknown Settings, struct Unknown& OutActor); // Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3504440>
};

// Class LevelSequence.LevelSequenceMediaController
class ALevelSequenceMediaController : public UActor {

public:

	struct Unknown Sequence; // 0x318 (8)
	struct Unknown MediaComponent; // 0x320 (8)
	float ServerStartTimeSeconds; // 0x328 (4)

	void SynchronizeToServer(float DesyncThresholdSeconds); // Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x35051A0>
	void Play(); // Function LevelSequence.LevelSequenceMediaController.Play(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3504890>
	void OnRep_ServerStartTimeSeconds(); // Function LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3504870>
	struct Unknown GetSequence(); // Function LevelSequence.LevelSequenceMediaController.GetSequence(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x35047B0>
	struct Unknown GetMediaComponent(); // Function LevelSequence.LevelSequenceMediaController.GetMediaComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x339D6B0>
};

// ScriptStruct LevelSequence.LevelSequenceCameraSettings
struct FLevelSequenceCameraSettings {
	char bOverrideAspectRatioAxisConstraint : 0; // 0x0 (1)
	char AspectRatioAxisConstraint; // 0x1 (1)
};

// ScriptStruct LevelSequence.LevelSequenceBindingReferences
struct FLevelSequenceBindingReferences {
	struct TMap<Unknown, Unknown> BindingIdToReferences; // 0x0 (80)
	struct TSet<Unknown> AnimSequenceInstances; // 0x50 (80)
};

// ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
struct FLevelSequenceBindingReferenceArray {
	struct TArray<Unknown> References; // 0x0 (16)
};

// ScriptStruct LevelSequence.LevelSequenceBindingReference
struct FLevelSequenceBindingReference {
	struct FString PackageName; // 0x0 (16)
	struct Unknown ExternalObjectPath; // 0x10 (24)
	struct FString ObjectPath; // 0x28 (16)
};

// ScriptStruct LevelSequence.LevelSequenceObject
struct FLevelSequenceObject {
	LazyObjectProperty ObjectOrOwner; // 0x0 (28)
	struct FString ComponentName; // 0x20 (16)
	struct TWeakObjectPtr<struct Unknown> CachedComponent; // 0x30 (8)
};

// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
struct FLevelSequencePlayerSnapshot {
	struct FString MasterName; // 0x0 (16)
	struct Unknown MasterTime; // 0x10 (16)
	struct Unknown SourceTime; // 0x20 (16)
	struct FString CurrentShotName; // 0x30 (16)
	struct Unknown CurrentShotLocalTime; // 0x40 (16)
	struct Unknown CurrentShotSourceTime; // 0x50 (16)
	struct FString SourceTimecode; // 0x60 (16)
	struct Unknown CameraComponent; // 0x70 (40)
	struct Unknown Settings; // 0x98 (12)
	struct Unknown ActiveShot; // 0xA8 (8)
	struct Unknown ShotID; // 0xB0 (4)
};

// ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
struct FLevelSequenceSnapshotSettings {
	char ZeroPadAmount; // 0x0 (1)
	struct Unknown FrameRate; // 0x4 (8)
};

