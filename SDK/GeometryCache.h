// Class GeometryCache.GeometryCache
class UGeometryCache : public Object {

public:

	struct TArray<Unknown> Materials; // 0x30 (16)
	struct TArray<Unknown> Tracks; // 0x40 (16)
	int32_t StartFrame; // 0x60 (4)
	int32_t EndFrame; // 0x64 (4)
};

// Class GeometryCache.GeometryCacheActor
class AGeometryCacheActor : public UActor {

public:

	struct Unknown GeometryCacheComponent; // 0x310 (8)

	struct Unknown GetGeometryCacheComponent(); // Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16E3E10>
};

// Class GeometryCache.GeometryCacheCodecBase
class UGeometryCacheCodecBase : public Object {

public:

	struct TArray<Unknown> TopologyRanges; // 0x28 (16)
};

// Class GeometryCache.GeometryCacheCodecRaw
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase {

public:

	int32_t DummyProperty; // 0x38 (4)
};

// Class GeometryCache.GeometryCacheComponent
class UGeometryCacheComponent : public UMeshComponent {

public:

	struct Unknown GeometryCache; // 0x4E8 (8)
	char bRunning : 0; // 0x4F0 (1)
	char bLooping : 0; // 0x4F1 (1)
	float StartTimeOffset; // 0x4F4 (4)
	float PlaybackSpeed; // 0x4F8 (4)
	int32_t NumTracks; // 0x4FC (4)
	float ElapsedTime; // 0x500 (4)
	float Duration; // 0x534 (4)
	char bManualTick : 0; // 0x538 (1)

	void TickAtThisTime(float Time, char bInIsRunning, char bInBackwards, char bInIsLooping); // Function GeometryCache.GeometryCacheComponent.TickAtThisTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16E4480>
	void Stop(); // Function GeometryCache.GeometryCacheComponent.Stop(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16E4460>
	void SetStartTimeOffset(float NewStartTimeOffset); // Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16E43E0>
	void SetPlaybackSpeed(float NewPlaybackSpeed); // Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16E4360>
	void SetLooping(char bNewLooping); // Function GeometryCache.GeometryCacheComponent.SetLooping(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16E40C0>
	char SetGeometryCache(struct Unknown NewGeomCache); // Function GeometryCache.GeometryCacheComponent.SetGeometryCache(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16E4030>
	void PlayReversedFromEnd(); // Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16E4010>
	void PlayReversed(); // Function GeometryCache.GeometryCacheComponent.PlayReversed(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16E3FF0>
	void PlayFromStart(); // Function GeometryCache.GeometryCacheComponent.PlayFromStart(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16E3FD0>
	void Play(); // Function GeometryCache.GeometryCacheComponent.Play(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16E3FB0>
	void Pause(); // Function GeometryCache.GeometryCacheComponent.Pause(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16E3F90>
	char IsPlayingReversed(); // Function GeometryCache.GeometryCacheComponent.IsPlayingReversed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16E3F60>
	char IsPlaying(); // Function GeometryCache.GeometryCacheComponent.IsPlaying(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16E3F30>
	char IsLooping(); // Function GeometryCache.GeometryCacheComponent.IsLooping(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16E3F00>
	float GetStartTimeOffset(); // Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16E3ED0>
	float GetPlaybackSpeed(); // Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16E3EA0>
	float GetPlaybackDirection(); // Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16E3E70>
	int32_t GetNumberOfFrames(); // Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16E3E40>
	float GetDuration(); // Function GeometryCache.GeometryCacheComponent.GetDuration(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16E3DE0>
	float GetAnimationTime(); // Function GeometryCache.GeometryCacheComponent.GetAnimationTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16E3DB0>
};

// Class GeometryCache.GeometryCacheTrack
class UGeometryCacheTrack : public Object {

public:

	float Duration; // 0x28 (4)
};

// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack {

public:

	uint32_t NumMeshSamples; // 0x58 (4)

	void AddMeshSample(struct Unknown& MeshData, float SampleTime); // Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample(Final|Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16E3B50>
};

// Class GeometryCache.GeometryCacheTrackStreamable
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack {

public:

	struct Unknown Codec; // 0x58 (8)
	float StartSampleTime; // 0xC8 (4)
};

// Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
inline struct Unknown AGeometryCacheActor::GetGeometryCacheComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent");

	struct GetGeometryCacheComponent_Params {
		
		struct Unknown ReturnValue;

	}; GetGeometryCacheComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function GeometryCache.GeometryCacheComponent.TickAtThisTime
inline void UGeometryCacheComponent::TickAtThisTime(float Time, char bInIsRunning, char bInBackwards, char bInIsLooping) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.TickAtThisTime");

	struct TickAtThisTime_Params {
		float Time;
		char bInIsRunning;
		char bInBackwards;
		char bInIsLooping;
	}; TickAtThisTime_Params Params;

	Params.Time = Time;
	Params.bInIsRunning = bInIsRunning;
	Params.bInBackwards = bInBackwards;
	Params.bInIsLooping = bInIsLooping;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCache.GeometryCacheComponent.Stop
inline void UGeometryCacheComponent::Stop() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.Stop");

	struct Stop_Params {
		
	}; Stop_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset
inline void UGeometryCacheComponent::SetStartTimeOffset(float NewStartTimeOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset");

	struct SetStartTimeOffset_Params {
		float NewStartTimeOffset;
	}; SetStartTimeOffset_Params Params;

	Params.NewStartTimeOffset = NewStartTimeOffset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
inline void UGeometryCacheComponent::SetPlaybackSpeed(float NewPlaybackSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed");

	struct SetPlaybackSpeed_Params {
		float NewPlaybackSpeed;
	}; SetPlaybackSpeed_Params Params;

	Params.NewPlaybackSpeed = NewPlaybackSpeed;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCache.GeometryCacheComponent.SetLooping
inline void UGeometryCacheComponent::SetLooping(char bNewLooping) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetLooping");

	struct SetLooping_Params {
		char bNewLooping;
	}; SetLooping_Params Params;

	Params.bNewLooping = bNewLooping;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCache.GeometryCacheComponent.SetGeometryCache
inline char UGeometryCacheComponent::SetGeometryCache(struct Unknown NewGeomCache) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetGeometryCache");

	struct SetGeometryCache_Params {
		struct Unknown NewGeomCache;
		char ReturnValue;

	}; SetGeometryCache_Params Params;

	Params.NewGeomCache = NewGeomCache;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
inline void UGeometryCacheComponent::PlayReversedFromEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd");

	struct PlayReversedFromEnd_Params {
		
	}; PlayReversedFromEnd_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCache.GeometryCacheComponent.PlayReversed
inline void UGeometryCacheComponent::PlayReversed() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.PlayReversed");

	struct PlayReversed_Params {
		
	}; PlayReversed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCache.GeometryCacheComponent.PlayFromStart
inline void UGeometryCacheComponent::PlayFromStart() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.PlayFromStart");

	struct PlayFromStart_Params {
		
	}; PlayFromStart_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCache.GeometryCacheComponent.Play
inline void UGeometryCacheComponent::Play() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.Play");

	struct Play_Params {
		
	}; Play_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCache.GeometryCacheComponent.Pause
inline void UGeometryCacheComponent::Pause() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.Pause");

	struct Pause_Params {
		
	}; Pause_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCache.GeometryCacheComponent.IsPlayingReversed
inline char UGeometryCacheComponent::IsPlayingReversed() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.IsPlayingReversed");

	struct IsPlayingReversed_Params {
		
		char ReturnValue;

	}; IsPlayingReversed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function GeometryCache.GeometryCacheComponent.IsPlaying
inline char UGeometryCacheComponent::IsPlaying() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.IsPlaying");

	struct IsPlaying_Params {
		
		char ReturnValue;

	}; IsPlaying_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function GeometryCache.GeometryCacheComponent.IsLooping
inline char UGeometryCacheComponent::IsLooping() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.IsLooping");

	struct IsLooping_Params {
		
		char ReturnValue;

	}; IsLooping_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset
inline float UGeometryCacheComponent::GetStartTimeOffset() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset");

	struct GetStartTimeOffset_Params {
		
		float ReturnValue;

	}; GetStartTimeOffset_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
inline float UGeometryCacheComponent::GetPlaybackSpeed() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed");

	struct GetPlaybackSpeed_Params {
		
		float ReturnValue;

	}; GetPlaybackSpeed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection
inline float UGeometryCacheComponent::GetPlaybackDirection() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection");

	struct GetPlaybackDirection_Params {
		
		float ReturnValue;

	}; GetPlaybackDirection_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames
inline int32_t UGeometryCacheComponent::GetNumberOfFrames() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames");

	struct GetNumberOfFrames_Params {
		
		int32_t ReturnValue;

	}; GetNumberOfFrames_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function GeometryCache.GeometryCacheComponent.GetDuration
inline float UGeometryCacheComponent::GetDuration() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetDuration");

	struct GetDuration_Params {
		
		float ReturnValue;

	}; GetDuration_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function GeometryCache.GeometryCacheComponent.GetAnimationTime
inline float UGeometryCacheComponent::GetAnimationTime() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetAnimationTime");

	struct GetAnimationTime_Params {
		
		float ReturnValue;

	}; GetAnimationTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
inline void UGeometryCacheTrack_FlipbookAnimation::AddMeshSample(struct Unknown& MeshData, float SampleTime) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample");

	struct AddMeshSample_Params {
		struct Unknown& MeshData;
		float SampleTime;
	}; AddMeshSample_Params Params;

	Params.SampleTime = SampleTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MeshData = Params.MeshData;

}

