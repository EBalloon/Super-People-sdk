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

	struct Unknown GetGeometryCacheComponent(); // Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D32D0>
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

	void TickAtThisTime(float Time, char bInIsRunning, char bInBackwards, char bInIsLooping); // Function GeometryCache.GeometryCacheComponent.TickAtThisTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D3940>
	void Stop(); // Function GeometryCache.GeometryCacheComponent.Stop(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D3920>
	void SetStartTimeOffset(float NewStartTimeOffset); // Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D38A0>
	void SetPlaybackSpeed(float NewPlaybackSpeed); // Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D3820>
	void SetLooping(char bNewLooping); // Function GeometryCache.GeometryCacheComponent.SetLooping(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D3580>
	char SetGeometryCache(struct Unknown NewGeomCache); // Function GeometryCache.GeometryCacheComponent.SetGeometryCache(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D34F0>
	void PlayReversedFromEnd(); // Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D34D0>
	void PlayReversed(); // Function GeometryCache.GeometryCacheComponent.PlayReversed(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D34B0>
	void PlayFromStart(); // Function GeometryCache.GeometryCacheComponent.PlayFromStart(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D3490>
	void Play(); // Function GeometryCache.GeometryCacheComponent.Play(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D3470>
	void Pause(); // Function GeometryCache.GeometryCacheComponent.Pause(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D3450>
	char IsPlayingReversed(); // Function GeometryCache.GeometryCacheComponent.IsPlayingReversed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D3420>
	char IsPlaying(); // Function GeometryCache.GeometryCacheComponent.IsPlaying(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D33F0>
	char IsLooping(); // Function GeometryCache.GeometryCacheComponent.IsLooping(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D33C0>
	float GetStartTimeOffset(); // Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D3390>
	float GetPlaybackSpeed(); // Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D3360>
	float GetPlaybackDirection(); // Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D3330>
	int32_t GetNumberOfFrames(); // Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D3300>
	float GetDuration(); // Function GeometryCache.GeometryCacheComponent.GetDuration(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D32A0>
	float GetAnimationTime(); // Function GeometryCache.GeometryCacheComponent.GetAnimationTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D3270>
};

// Class GeometryCache.GeometryCacheTrack
class UGeometryCacheTrack : public Object {

public:

	float Duration; // 0x28 (4)
};

// Class GeometryCache.GeometryCacheTrack_FlipbookAnim
class UGeometryCacheTrack_FlipbookAnim : public UGeometryCacheTrack {

public:

	uint32_t NumMeshSamples; // 0x58 (4)

	void AddMeshSample(struct Unknown& MeshData, float SampleTime); // Function GeometryCache.GeometryCacheTrack_FlipbookAnim.AddMeshSample(Final|Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D3010>
};

// Class GeometryCache.GeometryCacheTrackStreamable
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack {

public:

	struct Unknown Codec; // 0x58 (8)
	float StartSampleTime; // 0xC8 (4)
};

