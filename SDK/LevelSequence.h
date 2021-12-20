// Class LevelSequence.DefaultLevelSequenceInstanceData
struct UDefaultLevelSequenceInstanceData : Object {
	Unknown TransformOriginActor; //  0x30 Size(8)
	Unknown TransformOrigin; //  0x40 Size(30)
};

// Class LevelSequence.LevelSequence
struct ULevelSequence : UMovieSceneSequence {
	Unknown MovieScene; //  0x348 Size(8)
	Unknown ObjectReferences; //  0x350 Size(50)
	Unknown BindingReferences; //  0x3a0 Size(a0)
	Unknown PossessedObjects; //  0x440 Size(50)
	Unknown DirectorClass; //  0x490 Size(8)

	void RemoveMetaDataByClass(Unknown InClass); // Function LevelSequence.LevelSequence.RemoveMetaDataByClass(Final|Native|Public|BlueprintCallable) // <Game+0x34f7e60>
};

// Class LevelSequence.LevelSequenceBurnInOptions
struct ULevelSequenceBurnInOptions : Object {
	char bUseBurnIn; //  0x28 Size(1)
	Unknown BurnInClass; //  0x30 Size(18)
	Unknown Settings; //  0x48 Size(8)

	void SetBurnIn(Unknown InBurnInClass); // Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn(Final|Native|Public|HasDefaults|BlueprintCallable) // <Game+0x34f8220>
};

// Class LevelSequence.LevelSequenceActor
struct ALevelSequenceActor : UActor {
	Unknown PlaybackSettings; //  0x320 Size(14)
	Unknown SequencePlayer; //  0x338 Size(8)
	Unknown LevelSequence; //  0x340 Size(18)
	Unknown AdditionalEventReceivers; //  0x358 Size(10)
	Unknown CameraSettings; //  0x368 Size(2)
	Unknown BurnInOptions; //  0x370 Size(8)
	Unknown BindingOverrides; //  0x378 Size(8)
	char bAutoPlay; //  0x380 Size(1)
	char bOverrideInstanceData; //  0x380 Size(1)
	char bReplicatePlayback; //  0x380 Size(1)
	Unknown DefaultInstanceData; //  0x388 Size(8)
	Unknown BurnInInstance; //  0x390 Size(8)
	char bShowBurnin; //  0x398 Size(1)

	void ShowBurnin(); // Function LevelSequence.LevelSequenceActor.ShowBurnin(Final|Native|Public|BlueprintCallable) // <Game+0x34f8580>
};

// Class LevelSequence.LevelSequenceBurnIn
struct ULevelSequenceBurnIn : UUserWidget {
	Unknown FrameInformation; //  0x248 Size(b8)
	Unknown LevelSequenceActor; //  0x300 Size(8)

	void SetSettings(Unknown InSettings); // Function LevelSequence.LevelSequenceBurnIn.SetSettings(Event|Public|BlueprintEvent) // <Game+0x23a73f0>
};

// Class LevelSequence.LevelSequenceDirector
struct ULevelSequenceDirector : Object {
	Unknown Player; //  0x28 Size(8)

	void OnCreated(); // Function LevelSequence.LevelSequenceDirector.OnCreated(Event|Public|BlueprintEvent) // <Game+0x23a73f0>
};

// Class LevelSequence.LevelSequencePlayer
struct ULevelSequencePlayer : UMovieSceneSequencePlayer {
	struct FMulticastInlineDelegate OnCameraCut; //  0x890 Size(10)

	Unknown GetActiveCameraComponent(); // Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x34f7b40>
};

// Class LevelSequence.LevelSequenceMediaController
struct ALevelSequenceMediaController : UActor {
	Unknown Sequence; //  0x318 Size(8)
	Unknown MediaComponent; //  0x320 Size(8)
	float ServerStartTimeSeconds; //  0x328 Size(4)

	void SynchronizeToServer(float DesyncThresholdSeconds); // Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer(Final|Native|Public|BlueprintCallable) // <Game+0x34f85a0>
};

