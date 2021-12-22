// Class LevelSequence.DefaultLevelSequenceInstanceData
struct UDefaultLevelSequenceInstanceData : Object {
	struct Unknown TransformOriginActor; //  0x30 Size(8)
	struct Unknown TransformOrigin; //  0x40 Size(30)
};

// Class LevelSequence.LevelSequence
struct ULevelSequence : UMovieSceneSequence {
	struct Unknown MovieScene; //  0x348 Size(8)
	struct Unknown ObjectReferences; //  0x350 Size(50)
	struct Unknown BindingReferences; //  0x3a0 Size(a0)
	struct TMap<{}, {}>Unknown PossessedObjects; //  0x440 Size(50)
	struct Unknown* DirectorClass; //  0x490 Size(8)

	void RemoveMetaDataByClass(struct Unknown* InClass); // Function LevelSequence.LevelSequence.RemoveMetaDataByClass(Final|Native|Public|BlueprintCallable) // <Game+0x3503760>
};

// Class LevelSequence.LevelSequenceBurnInOptions
struct ULevelSequenceBurnInOptions : Object {
	char bUseBurnIn; //  0x28 Size(1)
	struct Unknown BurnInClass; //  0x30 Size(18)
	struct Unknown Settings; //  0x48 Size(8)

	void SetBurnIn(struct Unknown InBurnInClass); // Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn(Final|Native|Public|HasDefaults|BlueprintCallable) // <Game+0x3503b20>
};

// Class LevelSequence.LevelSequenceActor
struct ALevelSequenceActor : UActor {
	struct Unknown PlaybackSettings; //  0x320 Size(14)
	struct Unknown SequencePlayer; //  0x338 Size(8)
	struct Unknown LevelSequence; //  0x340 Size(18)
	struct TArray<Unknown> AdditionalEventReceivers; //  0x358 Size(10)
	struct Unknown CameraSettings; //  0x368 Size(2)
	struct Unknown BurnInOptions; //  0x370 Size(8)
	struct Unknown BindingOverrides; //  0x378 Size(8)
	char bAutoPlay; //  0x380 Size(1)
	char bOverrideInstanceData; //  0x380 Size(1)
	char bReplicatePlayback; //  0x380 Size(1)
	struct Unknown DefaultInstanceData; //  0x388 Size(8)
	struct Unknown BurnInInstance; //  0x390 Size(8)
	char bShowBurnin; //  0x398 Size(1)

	void ShowBurnin(); // Function LevelSequence.LevelSequenceActor.ShowBurnin(Final|Native|Public|BlueprintCallable) // <Game+0x3503e80>
};

// Class LevelSequence.LevelSequenceBurnIn
struct ULevelSequenceBurnIn : UUserWidget {
	struct Unknown FrameInformation; //  0x248 Size(b8)
	struct Unknown LevelSequenceActor; //  0x300 Size(8)

	void SetSettings(struct Unknown InSettings); // Function LevelSequence.LevelSequenceBurnIn.SetSettings(Event|Public|BlueprintEvent) // <Game+0x23b1e70>
};

// Class LevelSequence.LevelSequenceDirector
struct ULevelSequenceDirector : Object {
	struct Unknown Player; //  0x28 Size(8)

	void OnCreated(); // Function LevelSequence.LevelSequenceDirector.OnCreated(Event|Public|BlueprintEvent) // <Game+0x23b1e70>
};

// Class LevelSequence.LevelSequencePlayer
struct ULevelSequencePlayer : UMovieSceneSequencePlayer {
	struct FMulticastInlineDelegate OnCameraCut; //  0x890 Size(10)

	struct Unknown GetActiveCameraComponent(); // Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x3503440>
};

// Class LevelSequence.LevelSequenceMediaController
struct ALevelSequenceMediaController : UActor {
	struct Unknown Sequence; //  0x318 Size(8)
	struct Unknown MediaComponent; //  0x320 Size(8)
	float ServerStartTimeSeconds; //  0x328 Size(4)

	void SynchronizeToServer(float DesyncThresholdSeconds); // Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer(Final|Native|Public|BlueprintCallable) // <Game+0x3503ea0>
};

