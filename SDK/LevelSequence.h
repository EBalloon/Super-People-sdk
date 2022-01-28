// Class LevelSequence.DefaultLevelSequenceInstanceData
class UDefaultLevelSequenceInstanceData : public Object {

public:

	struct UActor TransformOriginActor; // 0x30 (8)
	struct FTransform TransformOrigin; // 0x40 (48)
};

// Class LevelSequence.LevelSequence
class ULevelSequence : public UMovieSceneSequence {

public:

	struct UMovieScene MovieScene; // 0x348 (8)
	struct FLevelSequenceObjectReferenceMap ObjectReferences; // 0x350 (80)
	struct FLevelSequenceBindingReferences BindingReferences; // 0x3A0 (160)
	struct TMap<struct FString, struct FLevelSequenceObject> PossessedObjects; // 0x440 (80)
	struct UClass* DirectorClass; // 0x490 (8)

	void RemoveMetaDataByClass(struct UClass* InClass); // Function LevelSequence.LevelSequence.RemoveMetaDataByClass(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF3250>
	struct Object FindOrAddMetaDataByClass(struct UClass* InClass); // Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF2BB0>
	struct Object FindMetaDataByClass(struct UClass* InClass); // Function LevelSequence.LevelSequence.FindMetaDataByClass(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF2BB0>
	struct Object CopyMetaData(struct Object InMetaData); // Function LevelSequence.LevelSequence.CopyMetaData(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF2BB0>
};

// Class LevelSequence.LevelSequenceBurnInOptions
class ULevelSequenceBurnInOptions : public Object {

public:

	char bUseBurnIn : 0; // 0x28 (1)
	struct FSoftClassPath BurnInClass; // 0x30 (24)
	struct ULevelSequenceBurnInInitSettings Settings; // 0x48 (8)

	void SetBurnIn(struct FSoftClassPath InBurnInClass); // Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF3610>
};

// Class LevelSequence.LevelSequenceActor
class ALevelSequenceActor : public UActor {

public:

	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x338 (20)
	struct ULevelSequencePlayer SequencePlayer; // 0x350 (8)
	struct FSoftObjectPath LevelSequence; // 0x358 (24)
	struct TArray<struct UActor> AdditionalEventReceivers; // 0x370 (16)
	struct FLevelSequenceCameraSettings CameraSettings; // 0x380 (2)
	struct ULevelSequenceBurnInOptions BurnInOptions; // 0x388 (8)
	struct UMovieSceneBindingOverrides BindingOverrides; // 0x390 (8)
	char bAutoPlay : 0; // 0x398 (1)
	char bOverrideInstanceData : 0; // 0x398 (1)
	char bReplicatePlayback : 0; // 0x398 (1)
	struct Object DefaultInstanceData; // 0x3A0 (8)
	struct ULevelSequenceBurnIn BurnInInstance; // 0x3A8 (8)
	char bShowBurnin : 0; // 0x3B0 (1)

	void ShowBurnin(); // Function LevelSequence.LevelSequenceActor.ShowBurnin(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF3970>
	void SetSequence(struct ULevelSequence InSequence); // Function LevelSequence.LevelSequenceActor.SetSequence(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF38F0>
	void SetReplicatePlayback(char ReplicatePlayback); // Function LevelSequence.LevelSequenceActor.SetReplicatePlayback(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF3860>
	void SetEventReceivers(struct TArray<struct UActor> AdditionalReceivers); // Function LevelSequence.LevelSequenceActor.SetEventReceivers(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF3710>
	void SetBindingByTag(struct FName BindingTag, struct TArray<struct UActor>& Actors, char bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.SetBindingByTag(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF34E0>
	void SetBinding(struct FMovieSceneObjectBindingID Binding, struct TArray<struct UActor>& Actors, char bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.SetBinding(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF3390>
	void ResetBindings(); // Function LevelSequence.LevelSequenceActor.ResetBindings(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF3370>
	void ResetBinding(struct FMovieSceneObjectBindingID Binding); // Function LevelSequence.LevelSequenceActor.ResetBinding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF32C0>
	void RemoveBindingByTag(struct FName Tag, struct UActor Actor); // Function LevelSequence.LevelSequenceActor.RemoveBindingByTag(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF3190>
	void RemoveBinding(struct FMovieSceneObjectBindingID Binding, struct UActor Actor); // Function LevelSequence.LevelSequenceActor.RemoveBinding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF30A0>
	void OnLevelSequenceLoaded__DelegateSignature(); // DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature(Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct ULevelSequence LoadSequence(); // Function LevelSequence.LevelSequenceActor.LoadSequence(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF3030>
	void HideBurnin(); // Function LevelSequence.LevelSequenceActor.HideBurnin(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF3010>
	struct ULevelSequencePlayer GetSequencePlayer(); // Function LevelSequence.LevelSequenceActor.GetSequencePlayer(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF2FC0>
	struct ULevelSequence GetSequence(); // Function LevelSequence.LevelSequenceActor.GetSequence(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF2F70>
	struct TArray<struct FMovieSceneObjectBindingID> FindNamedBindings(struct FName Tag); // Function LevelSequence.LevelSequenceActor.FindNamedBindings(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF2E50>
	struct FMovieSceneObjectBindingID FindNamedBinding(struct FName Tag); // Function LevelSequence.LevelSequenceActor.FindNamedBinding(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF2DA0>
	void AddBindingByTag(struct FName BindingTag, struct UActor Actor, char bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.AddBindingByTag(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF2AA0>
	void AddBinding(struct FMovieSceneObjectBindingID Binding, struct UActor Actor, char bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.AddBinding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF2960>
};

// Class LevelSequence.LevelSequenceBurnIn
class ULevelSequenceBurnIn : public UUserWidget {

public:

	struct FLevelSequencePlayerSnapshot FrameInformation; // 0x248 (184)
	struct ALevelSequenceActor LevelSequenceActor; // 0x300 (8)

	void SetSettings(struct Object InSettings); // Function LevelSequence.LevelSequenceBurnIn.SetSettings(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct UClass* GetSettingsClass(); // Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass(Native|Event|Public|BlueprintEvent|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF2FF0>
};

// Class LevelSequence.LevelSequenceDirector
class ULevelSequenceDirector : public Object {

public:

	struct ULevelSequencePlayer Player; // 0x28 (8)

	void OnCreated(); // Function LevelSequence.LevelSequenceDirector.OnCreated(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Class LevelSequence.LevelSequencePlayer
class ULevelSequencePlayer : public UMovieSceneSequencePlayer {

public:

	struct FMulticastInlineDelegate OnCameraCut; // 0x890 (16)

	struct UCameraComponent GetActiveCameraComponent(); // Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF2F30>
	struct ULevelSequencePlayer CreateLevelSequencePlayer(struct Object WorldContextObject, struct ULevelSequence LevelSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ALevelSequenceActor& OutActor); // Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF2C30>
};

// Class LevelSequence.LevelSequenceMediaController
class ALevelSequenceMediaController : public UActor {

public:

	struct ALevelSequenceActor Sequence; // 0x330 (8)
	struct UMediaComponent MediaComponent; // 0x338 (8)
	float ServerStartTimeSeconds; // 0x340 (4)

	void SynchronizeToServer(float DesyncThresholdSeconds); // Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF3990>
	void Play(); // Function LevelSequence.LevelSequenceMediaController.Play(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF3080>
	void OnRep_ServerStartTimeSeconds(); // Function LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF3060>
	struct ALevelSequenceActor GetSequence(); // Function LevelSequence.LevelSequenceMediaController.GetSequence(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF2FA0>
	struct UMediaComponent GetMediaComponent(); // Function LevelSequence.LevelSequenceMediaController.GetMediaComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B8BE40>
};

// ScriptStruct LevelSequence.LevelSequenceCameraSettings
struct FLevelSequenceCameraSettings {
	char bOverrideAspectRatioAxisConstraint : 0; // 0x0 (1)
	char AspectRatioAxisConstraint; // 0x1 (1)
};

// ScriptStruct LevelSequence.LevelSequenceBindingReferences
struct FLevelSequenceBindingReferences {
	struct TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences; // 0x0 (80)
	struct TSet<struct FGuid> AnimSequenceInstances; // 0x50 (80)
};

// ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
struct FLevelSequenceBindingReferenceArray {
	struct TArray<struct FLevelSequenceBindingReference> References; // 0x0 (16)
};

// ScriptStruct LevelSequence.LevelSequenceBindingReference
struct FLevelSequenceBindingReference {
	struct FString PackageName; // 0x0 (16)
	struct FSoftObjectPath ExternalObjectPath; // 0x10 (24)
	struct FString ObjectPath; // 0x28 (16)
};

// ScriptStruct LevelSequence.LevelSequenceObject
struct FLevelSequenceObject {
	LazyObjectProperty ObjectOrOwner; // 0x0 (28)
	struct FString ComponentName; // 0x20 (16)
	struct TWeakObjectPtr<struct Object> CachedComponent; // 0x30 (8)
};

// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
struct FLevelSequencePlayerSnapshot {
	struct FString MasterName; // 0x0 (16)
	struct FQualifiedFrameTime MasterTime; // 0x10 (16)
	struct FQualifiedFrameTime SourceTime; // 0x20 (16)
	struct FString CurrentShotName; // 0x30 (16)
	struct FQualifiedFrameTime CurrentShotLocalTime; // 0x40 (16)
	struct FQualifiedFrameTime CurrentShotSourceTime; // 0x50 (16)
	struct FString SourceTimecode; // 0x60 (16)
	struct TSoftObjectPtr<UCameraComponent> CameraComponent; // 0x70 (40)
	struct FLevelSequenceSnapshotSettings Settings; // 0x98 (12)
	struct ULevelSequence ActiveShot; // 0xA8 (8)
	struct FMovieSceneSequenceID ShotID; // 0xB0 (4)
};

// ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
struct FLevelSequenceSnapshotSettings {
	char ZeroPadAmount; // 0x0 (1)
	struct FFrameRate FrameRate; // 0x4 (8)
};

// Function LevelSequence.LevelSequence.RemoveMetaDataByClass
inline void ULevelSequence::RemoveMetaDataByClass(struct UClass* InClass) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.RemoveMetaDataByClass");

	struct RemoveMetaDataByClass_Params {
		struct UClass* InClass;
	}; RemoveMetaDataByClass_Params Params;

	Params.InClass = InClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass
inline struct Object ULevelSequence::FindOrAddMetaDataByClass(struct UClass* InClass) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass");

	struct FindOrAddMetaDataByClass_Params {
		struct UClass* InClass;
		struct Object ReturnValue;

	}; FindOrAddMetaDataByClass_Params Params;

	Params.InClass = InClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LevelSequence.LevelSequence.FindMetaDataByClass
inline struct Object ULevelSequence::FindMetaDataByClass(struct UClass* InClass) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.FindMetaDataByClass");

	struct FindMetaDataByClass_Params {
		struct UClass* InClass;
		struct Object ReturnValue;

	}; FindMetaDataByClass_Params Params;

	Params.InClass = InClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LevelSequence.LevelSequence.CopyMetaData
inline struct Object ULevelSequence::CopyMetaData(struct Object InMetaData) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.CopyMetaData");

	struct CopyMetaData_Params {
		struct Object InMetaData;
		struct Object ReturnValue;

	}; CopyMetaData_Params Params;

	Params.InMetaData = InMetaData;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
inline void ULevelSequenceBurnInOptions::SetBurnIn(struct FSoftClassPath InBurnInClass) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn");

	struct SetBurnIn_Params {
		struct FSoftClassPath InBurnInClass;
	}; SetBurnIn_Params Params;

	Params.InBurnInClass = InBurnInClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LevelSequence.LevelSequenceActor.ShowBurnin
inline void ALevelSequenceActor::ShowBurnin() {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ShowBurnin");

	struct ShowBurnin_Params {
		
	}; ShowBurnin_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LevelSequence.LevelSequenceActor.SetSequence
inline void ALevelSequenceActor::SetSequence(struct ULevelSequence InSequence) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetSequence");

	struct SetSequence_Params {
		struct ULevelSequence InSequence;
	}; SetSequence_Params Params;

	Params.InSequence = InSequence;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LevelSequence.LevelSequenceActor.SetReplicatePlayback
inline void ALevelSequenceActor::SetReplicatePlayback(char ReplicatePlayback) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetReplicatePlayback");

	struct SetReplicatePlayback_Params {
		char ReplicatePlayback;
	}; SetReplicatePlayback_Params Params;

	Params.ReplicatePlayback = ReplicatePlayback;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LevelSequence.LevelSequenceActor.SetEventReceivers
inline void ALevelSequenceActor::SetEventReceivers(struct TArray<struct UActor> AdditionalReceivers) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetEventReceivers");

	struct SetEventReceivers_Params {
		struct TArray<struct UActor> AdditionalReceivers;
	}; SetEventReceivers_Params Params;

	Params.AdditionalReceivers = AdditionalReceivers;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LevelSequence.LevelSequenceActor.SetBindingByTag
inline void ALevelSequenceActor::SetBindingByTag(struct FName BindingTag, struct TArray<struct UActor>& Actors, char bAllowBindingsFromAsset) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetBindingByTag");

	struct SetBindingByTag_Params {
		struct FName BindingTag;
		struct TArray<struct UActor>& Actors;
		char bAllowBindingsFromAsset;
	}; SetBindingByTag_Params Params;

	Params.BindingTag = BindingTag;
	Params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Actors = Params.Actors;

}

// Function LevelSequence.LevelSequenceActor.SetBinding
inline void ALevelSequenceActor::SetBinding(struct FMovieSceneObjectBindingID Binding, struct TArray<struct UActor>& Actors, char bAllowBindingsFromAsset) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetBinding");

	struct SetBinding_Params {
		struct FMovieSceneObjectBindingID Binding;
		struct TArray<struct UActor>& Actors;
		char bAllowBindingsFromAsset;
	}; SetBinding_Params Params;

	Params.Binding = Binding;
	Params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Actors = Params.Actors;

}

// Function LevelSequence.LevelSequenceActor.ResetBindings
inline void ALevelSequenceActor::ResetBindings() {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ResetBindings");

	struct ResetBindings_Params {
		
	}; ResetBindings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LevelSequence.LevelSequenceActor.ResetBinding
inline void ALevelSequenceActor::ResetBinding(struct FMovieSceneObjectBindingID Binding) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ResetBinding");

	struct ResetBinding_Params {
		struct FMovieSceneObjectBindingID Binding;
	}; ResetBinding_Params Params;

	Params.Binding = Binding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LevelSequence.LevelSequenceActor.RemoveBindingByTag
inline void ALevelSequenceActor::RemoveBindingByTag(struct FName Tag, struct UActor Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.RemoveBindingByTag");

	struct RemoveBindingByTag_Params {
		struct FName Tag;
		struct UActor Actor;
	}; RemoveBindingByTag_Params Params;

	Params.Tag = Tag;
	Params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LevelSequence.LevelSequenceActor.RemoveBinding
inline void ALevelSequenceActor::RemoveBinding(struct FMovieSceneObjectBindingID Binding, struct UActor Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.RemoveBinding");

	struct RemoveBinding_Params {
		struct FMovieSceneObjectBindingID Binding;
		struct UActor Actor;
	}; RemoveBinding_Params Params;

	Params.Binding = Binding;
	Params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature
inline void ALevelSequenceActor::OnLevelSequenceLoaded__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature");

	struct OnLevelSequenceLoaded__DelegateSignature_Params {
		
	}; OnLevelSequenceLoaded__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LevelSequence.LevelSequenceActor.LoadSequence
inline struct ULevelSequence ALevelSequenceActor::LoadSequence() {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.LoadSequence");

	struct LoadSequence_Params {
		
		struct ULevelSequence ReturnValue;

	}; LoadSequence_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LevelSequence.LevelSequenceActor.HideBurnin
inline void ALevelSequenceActor::HideBurnin() {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.HideBurnin");

	struct HideBurnin_Params {
		
	}; HideBurnin_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LevelSequence.LevelSequenceActor.GetSequencePlayer
inline struct ULevelSequencePlayer ALevelSequenceActor::GetSequencePlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.GetSequencePlayer");

	struct GetSequencePlayer_Params {
		
		struct ULevelSequencePlayer ReturnValue;

	}; GetSequencePlayer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LevelSequence.LevelSequenceActor.GetSequence
inline struct ULevelSequence ALevelSequenceActor::GetSequence() {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.GetSequence");

	struct GetSequence_Params {
		
		struct ULevelSequence ReturnValue;

	}; GetSequence_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LevelSequence.LevelSequenceActor.FindNamedBindings
inline struct TArray<struct FMovieSceneObjectBindingID> ALevelSequenceActor::FindNamedBindings(struct FName Tag) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.FindNamedBindings");

	struct FindNamedBindings_Params {
		struct FName Tag;
		struct TArray<struct FMovieSceneObjectBindingID> ReturnValue;

	}; FindNamedBindings_Params Params;

	Params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LevelSequence.LevelSequenceActor.FindNamedBinding
inline struct FMovieSceneObjectBindingID ALevelSequenceActor::FindNamedBinding(struct FName Tag) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.FindNamedBinding");

	struct FindNamedBinding_Params {
		struct FName Tag;
		struct FMovieSceneObjectBindingID ReturnValue;

	}; FindNamedBinding_Params Params;

	Params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LevelSequence.LevelSequenceActor.AddBindingByTag
inline void ALevelSequenceActor::AddBindingByTag(struct FName BindingTag, struct UActor Actor, char bAllowBindingsFromAsset) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.AddBindingByTag");

	struct AddBindingByTag_Params {
		struct FName BindingTag;
		struct UActor Actor;
		char bAllowBindingsFromAsset;
	}; AddBindingByTag_Params Params;

	Params.BindingTag = BindingTag;
	Params.Actor = Actor;
	Params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LevelSequence.LevelSequenceActor.AddBinding
inline void ALevelSequenceActor::AddBinding(struct FMovieSceneObjectBindingID Binding, struct UActor Actor, char bAllowBindingsFromAsset) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.AddBinding");

	struct AddBinding_Params {
		struct FMovieSceneObjectBindingID Binding;
		struct UActor Actor;
		char bAllowBindingsFromAsset;
	}; AddBinding_Params Params;

	Params.Binding = Binding;
	Params.Actor = Actor;
	Params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LevelSequence.LevelSequenceBurnIn.SetSettings
inline void ULevelSequenceBurnIn::SetSettings(struct Object InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnIn.SetSettings");

	struct SetSettings_Params {
		struct Object InSettings;
	}; SetSettings_Params Params;

	Params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
inline struct UClass* ULevelSequenceBurnIn::GetSettingsClass() {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass");

	struct GetSettingsClass_Params {
		
		struct UClass* ReturnValue;

	}; GetSettingsClass_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LevelSequence.LevelSequenceDirector.OnCreated
inline void ULevelSequenceDirector::OnCreated() {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceDirector.OnCreated");

	struct OnCreated_Params {
		
	}; OnCreated_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
inline struct UCameraComponent ULevelSequencePlayer::GetActiveCameraComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent");

	struct GetActiveCameraComponent_Params {
		
		struct UCameraComponent ReturnValue;

	}; GetActiveCameraComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
inline struct ULevelSequencePlayer ULevelSequencePlayer::CreateLevelSequencePlayer(struct Object WorldContextObject, struct ULevelSequence LevelSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ALevelSequenceActor& OutActor) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer");

	struct CreateLevelSequencePlayer_Params {
		struct Object WorldContextObject;
		struct ULevelSequence LevelSequence;
		struct FMovieSceneSequencePlaybackSettings Settings;
		struct ALevelSequenceActor& OutActor;
		struct ULevelSequencePlayer ReturnValue;

	}; CreateLevelSequencePlayer_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.LevelSequence = LevelSequence;
	Params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutActor = Params.OutActor;


	return params.ReturnValue;
}

// Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer
inline void ALevelSequenceMediaController::SynchronizeToServer(float DesyncThresholdSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer");

	struct SynchronizeToServer_Params {
		float DesyncThresholdSeconds;
	}; SynchronizeToServer_Params Params;

	Params.DesyncThresholdSeconds = DesyncThresholdSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LevelSequence.LevelSequenceMediaController.Play
inline void ALevelSequenceMediaController::Play() {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceMediaController.Play");

	struct Play_Params {
		
	}; Play_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds
inline void ALevelSequenceMediaController::OnRep_ServerStartTimeSeconds() {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds");

	struct OnRep_ServerStartTimeSeconds_Params {
		
	}; OnRep_ServerStartTimeSeconds_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LevelSequence.LevelSequenceMediaController.GetSequence
inline struct ALevelSequenceActor ALevelSequenceMediaController::GetSequence() {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceMediaController.GetSequence");

	struct GetSequence_Params {
		
		struct ALevelSequenceActor ReturnValue;

	}; GetSequence_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LevelSequence.LevelSequenceMediaController.GetMediaComponent
inline struct UMediaComponent ALevelSequenceMediaController::GetMediaComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceMediaController.GetMediaComponent");

	struct GetMediaComponent_Params {
		
		struct UMediaComponent ReturnValue;

	}; GetMediaComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

