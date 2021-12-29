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

	void RemoveMetaDataByClass(struct Unknown* InClass); // Function LevelSequence.LevelSequence.RemoveMetaDataByClass(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBF950>
	struct Unknown FindOrAddMetaDataByClass(struct Unknown* InClass); // Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBF2B0>
	struct Unknown FindMetaDataByClass(struct Unknown* InClass); // Function LevelSequence.LevelSequence.FindMetaDataByClass(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBF2B0>
	struct Unknown CopyMetaData(struct Unknown InMetaData); // Function LevelSequence.LevelSequence.CopyMetaData(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBF2B0>
};

// Class LevelSequence.LevelSequenceBurnInOptions
class ULevelSequenceBurnInOptions : public Object {

public:

	char bUseBurnIn : 0; // 0x28 (1)
	struct Unknown BurnInClass; // 0x30 (24)
	struct Unknown Settings; // 0x48 (8)

	void SetBurnIn(struct Unknown InBurnInClass); // Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBFD10>
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

	void ShowBurnin(); // Function LevelSequence.LevelSequenceActor.ShowBurnin(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC0070>
	void SetSequence(struct Unknown InSequence); // Function LevelSequence.LevelSequenceActor.SetSequence(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBFFF0>
	void SetReplicatePlayback(char ReplicatePlayback); // Function LevelSequence.LevelSequenceActor.SetReplicatePlayback(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBFF60>
	void SetEventReceivers(struct TArray<Unknown> AdditionalReceivers); // Function LevelSequence.LevelSequenceActor.SetEventReceivers(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBFE10>
	void SetBindingByTag(struct FName BindingTag, struct TArray<Unknown>& Actors, char bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.SetBindingByTag(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBFBE0>
	void SetBinding(struct Unknown Binding, struct TArray<Unknown>& Actors, char bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.SetBinding(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBFA90>
	void ResetBindings(); // Function LevelSequence.LevelSequenceActor.ResetBindings(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBFA70>
	void ResetBinding(struct Unknown Binding); // Function LevelSequence.LevelSequenceActor.ResetBinding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBF9C0>
	void RemoveBindingByTag(struct FName Tag, struct Unknown Actor); // Function LevelSequence.LevelSequenceActor.RemoveBindingByTag(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBF890>
	void RemoveBinding(struct Unknown Binding, struct Unknown Actor); // Function LevelSequence.LevelSequenceActor.RemoveBinding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBF7A0>
	void OnLevelSequenceLoaded__DelegateSignature(); // DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature(Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	struct Unknown LoadSequence(); // Function LevelSequence.LevelSequenceActor.LoadSequence(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBF730>
	void HideBurnin(); // Function LevelSequence.LevelSequenceActor.HideBurnin(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBF710>
	struct Unknown GetSequencePlayer(); // Function LevelSequence.LevelSequenceActor.GetSequencePlayer(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBF6C0>
	struct Unknown GetSequence(); // Function LevelSequence.LevelSequenceActor.GetSequence(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBF670>
	struct TArray<Unknown> FindNamedBindings(struct FName Tag); // Function LevelSequence.LevelSequenceActor.FindNamedBindings(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBF550>
	struct Unknown FindNamedBinding(struct FName Tag); // Function LevelSequence.LevelSequenceActor.FindNamedBinding(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBF4A0>
	void AddBindingByTag(struct FName BindingTag, struct Unknown Actor, char bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.AddBindingByTag(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBF1A0>
	void AddBinding(struct Unknown Binding, struct Unknown Actor, char bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.AddBinding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBF060>
};

// Class LevelSequence.LevelSequenceBurnIn
class ULevelSequenceBurnIn : public UUserWidget {

public:

	struct Unknown FrameInformation; // 0x248 (184)
	struct Unknown LevelSequenceActor; // 0x300 (8)

	void SetSettings(struct Unknown InSettings); // Function LevelSequence.LevelSequenceBurnIn.SetSettings(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	struct Unknown* GetSettingsClass(); // Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass(Native|Event|Public|BlueprintEvent|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBF6F0>
};

// Class LevelSequence.LevelSequenceDirector
class ULevelSequenceDirector : public Object {

public:

	struct Unknown Player; // 0x28 (8)

	void OnCreated(); // Function LevelSequence.LevelSequenceDirector.OnCreated(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Class LevelSequence.LevelSequencePlayer
class ULevelSequencePlayer : public UMovieSceneSequencePlayer {

public:

	struct FMulticastInlineDelegate OnCameraCut; // 0x890 (16)

	struct Unknown GetActiveCameraComponent(); // Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBF630>
	struct Unknown CreateLevelSequencePlayer(struct Unknown WorldContextObject, struct Unknown LevelSequence, struct Unknown Settings, struct Unknown& OutActor); // Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBF330>
};

// Class LevelSequence.LevelSequenceMediaController
class ALevelSequenceMediaController : public UActor {

public:

	struct Unknown Sequence; // 0x318 (8)
	struct Unknown MediaComponent; // 0x320 (8)
	float ServerStartTimeSeconds; // 0x328 (4)

	void SynchronizeToServer(float DesyncThresholdSeconds); // Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC0090>
	void Play(); // Function LevelSequence.LevelSequenceMediaController.Play(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBF780>
	void OnRep_ServerStartTimeSeconds(); // Function LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBF760>
	struct Unknown GetSequence(); // Function LevelSequence.LevelSequenceMediaController.GetSequence(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBF6A0>
	struct Unknown GetMediaComponent(); // Function LevelSequence.LevelSequenceMediaController.GetMediaComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B585A0>
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

// Function LevelSequence.LevelSequence.RemoveMetaDataByClass
inline void ULevelSequence::RemoveMetaDataByClass(struct Unknown* InClass) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.RemoveMetaDataByClass");

	struct RemoveMetaDataByClass_Params {
		struct Unknown* InClass;
	}; RemoveMetaDataByClass_Params Params;

	Params.InClass = InClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass
inline struct Unknown ULevelSequence::FindOrAddMetaDataByClass(struct Unknown* InClass) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass");

	struct FindOrAddMetaDataByClass_Params {
		struct Unknown* InClass;
		struct Unknown ReturnValue;

	}; FindOrAddMetaDataByClass_Params Params;

	Params.InClass = InClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LevelSequence.LevelSequence.FindMetaDataByClass
inline struct Unknown ULevelSequence::FindMetaDataByClass(struct Unknown* InClass) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.FindMetaDataByClass");

	struct FindMetaDataByClass_Params {
		struct Unknown* InClass;
		struct Unknown ReturnValue;

	}; FindMetaDataByClass_Params Params;

	Params.InClass = InClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LevelSequence.LevelSequence.CopyMetaData
inline struct Unknown ULevelSequence::CopyMetaData(struct Unknown InMetaData) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.CopyMetaData");

	struct CopyMetaData_Params {
		struct Unknown InMetaData;
		struct Unknown ReturnValue;

	}; CopyMetaData_Params Params;

	Params.InMetaData = InMetaData;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
inline void ULevelSequenceBurnInOptions::SetBurnIn(struct Unknown InBurnInClass) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn");

	struct SetBurnIn_Params {
		struct Unknown InBurnInClass;
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
inline void ALevelSequenceActor::SetSequence(struct Unknown InSequence) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetSequence");

	struct SetSequence_Params {
		struct Unknown InSequence;
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
inline void ALevelSequenceActor::SetEventReceivers(struct TArray<Unknown> AdditionalReceivers) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetEventReceivers");

	struct SetEventReceivers_Params {
		struct TArray<Unknown> AdditionalReceivers;
	}; SetEventReceivers_Params Params;

	Params.AdditionalReceivers = AdditionalReceivers;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LevelSequence.LevelSequenceActor.SetBindingByTag
inline void ALevelSequenceActor::SetBindingByTag(struct FName BindingTag, struct TArray<Unknown>& Actors, char bAllowBindingsFromAsset) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetBindingByTag");

	struct SetBindingByTag_Params {
		struct FName BindingTag;
		struct TArray<Unknown>& Actors;
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
inline void ALevelSequenceActor::SetBinding(struct Unknown Binding, struct TArray<Unknown>& Actors, char bAllowBindingsFromAsset) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetBinding");

	struct SetBinding_Params {
		struct Unknown Binding;
		struct TArray<Unknown>& Actors;
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
inline void ALevelSequenceActor::ResetBinding(struct Unknown Binding) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ResetBinding");

	struct ResetBinding_Params {
		struct Unknown Binding;
	}; ResetBinding_Params Params;

	Params.Binding = Binding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LevelSequence.LevelSequenceActor.RemoveBindingByTag
inline void ALevelSequenceActor::RemoveBindingByTag(struct FName Tag, struct Unknown Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.RemoveBindingByTag");

	struct RemoveBindingByTag_Params {
		struct FName Tag;
		struct Unknown Actor;
	}; RemoveBindingByTag_Params Params;

	Params.Tag = Tag;
	Params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LevelSequence.LevelSequenceActor.RemoveBinding
inline void ALevelSequenceActor::RemoveBinding(struct Unknown Binding, struct Unknown Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.RemoveBinding");

	struct RemoveBinding_Params {
		struct Unknown Binding;
		struct Unknown Actor;
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
inline struct Unknown ALevelSequenceActor::LoadSequence() {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.LoadSequence");

	struct LoadSequence_Params {
		
		struct Unknown ReturnValue;

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
inline struct Unknown ALevelSequenceActor::GetSequencePlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.GetSequencePlayer");

	struct GetSequencePlayer_Params {
		
		struct Unknown ReturnValue;

	}; GetSequencePlayer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LevelSequence.LevelSequenceActor.GetSequence
inline struct Unknown ALevelSequenceActor::GetSequence() {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.GetSequence");

	struct GetSequence_Params {
		
		struct Unknown ReturnValue;

	}; GetSequence_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LevelSequence.LevelSequenceActor.FindNamedBindings
inline struct TArray<Unknown> ALevelSequenceActor::FindNamedBindings(struct FName Tag) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.FindNamedBindings");

	struct FindNamedBindings_Params {
		struct FName Tag;
		struct TArray<Unknown> ReturnValue;

	}; FindNamedBindings_Params Params;

	Params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LevelSequence.LevelSequenceActor.FindNamedBinding
inline struct Unknown ALevelSequenceActor::FindNamedBinding(struct FName Tag) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.FindNamedBinding");

	struct FindNamedBinding_Params {
		struct FName Tag;
		struct Unknown ReturnValue;

	}; FindNamedBinding_Params Params;

	Params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LevelSequence.LevelSequenceActor.AddBindingByTag
inline void ALevelSequenceActor::AddBindingByTag(struct FName BindingTag, struct Unknown Actor, char bAllowBindingsFromAsset) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.AddBindingByTag");

	struct AddBindingByTag_Params {
		struct FName BindingTag;
		struct Unknown Actor;
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
inline void ALevelSequenceActor::AddBinding(struct Unknown Binding, struct Unknown Actor, char bAllowBindingsFromAsset) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.AddBinding");

	struct AddBinding_Params {
		struct Unknown Binding;
		struct Unknown Actor;
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
inline void ULevelSequenceBurnIn::SetSettings(struct Unknown InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnIn.SetSettings");

	struct SetSettings_Params {
		struct Unknown InSettings;
	}; SetSettings_Params Params;

	Params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
inline struct Unknown* ULevelSequenceBurnIn::GetSettingsClass() {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass");

	struct GetSettingsClass_Params {
		
		struct Unknown* ReturnValue;

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
inline struct Unknown ULevelSequencePlayer::GetActiveCameraComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent");

	struct GetActiveCameraComponent_Params {
		
		struct Unknown ReturnValue;

	}; GetActiveCameraComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
inline struct Unknown ULevelSequencePlayer::CreateLevelSequencePlayer(struct Unknown WorldContextObject, struct Unknown LevelSequence, struct Unknown Settings, struct Unknown& OutActor) {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer");

	struct CreateLevelSequencePlayer_Params {
		struct Unknown WorldContextObject;
		struct Unknown LevelSequence;
		struct Unknown Settings;
		struct Unknown& OutActor;
		struct Unknown ReturnValue;

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
inline struct Unknown ALevelSequenceMediaController::GetSequence() {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceMediaController.GetSequence");

	struct GetSequence_Params {
		
		struct Unknown ReturnValue;

	}; GetSequence_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LevelSequence.LevelSequenceMediaController.GetMediaComponent
inline struct Unknown ALevelSequenceMediaController::GetMediaComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceMediaController.GetMediaComponent");

	struct GetMediaComponent_Params {
		
		struct Unknown ReturnValue;

	}; GetMediaComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

