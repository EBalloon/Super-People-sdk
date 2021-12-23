// Class GeometryCache.GeometryCache
struct UGeometryCache : Object {
	struct TArray<Unknown> Materials; // 0x30 (16)
	struct TArray<Unknown> Tracks; // 0x40 (16)
	int32_t StartFrame; // 0x60 (4)
	int32_t EndFrame; // 0x64 (4)
};

// Class GeometryCache.GeometryCacheActor
struct AGeometryCacheActor : UActor {
	struct Unknown GeometryCacheComponent; // 0x310 (8)

	struct Unknown GetGeometryCacheComponent(); // Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D1E60>
};

// Class GeometryCache.GeometryCacheCodecBase
struct UGeometryCacheCodecBase : Object {
	struct TArray<Unknown> TopologyRanges; // 0x28 (16)
};

// Class GeometryCache.GeometryCacheCodecRaw
struct UGeometryCacheCodecRaw : UGeometryCacheCodecBase {
	int32_t DummyProperty; // 0x38 (4)
};

// Class GeometryCache.GeometryCacheComponent
struct UGeometryCacheComponent : UMeshComponent {
	struct Unknown GeometryCache; // 0x4E8 (8)
	char b : 0; // 0x4F0 (1)
	char bLooping : 0; // 0x4F1 (1)
	float StartTimeOffset; // 0x4F4 (4)
	float PlaybackSpeed; // 0x4F8 (4)
	int32_t NumTracks; // 0x4FC (4)
	float ElapsedTime; // 0x500 (4)
	float Duration; // 0x534 (4)
	char bManualTick : 0; // 0x538 (1)

	void TickAtThisTime(float Time, char bInIsRunning, char bInBackwards, char bInIsLooping); // Function GeometryCache.GeometryCacheComponent.TickAtThisTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D24D0>
	void Stop(); // Function GeometryCache.GeometryCacheComponent.Stop(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D24B0>
	void SetStartTimeOffset(float NewStartTimeOffset); // Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D2430>
	void SetPlaybackSpeed(float NewPlaybackSpeed); // Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D23B0>
	void SetLooping(char bNewLooping); // Function GeometryCache.GeometryCacheComponent.SetLooping(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D2110>
	char SetGeometryCache(struct Unknown NewGeomCache); // Function GeometryCache.GeometryCacheComponent.SetGeometryCache(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D2080>
	void PlayReversedFromEnd(); // Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D2060>
	void PlayReversed(); // Function GeometryCache.GeometryCacheComponent.PlayReversed(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D2040>
	void PlayFromStart(); // Function GeometryCache.GeometryCacheComponent.PlayFromStart(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D2020>
	void Play(); // Function GeometryCache.GeometryCacheComponent.Play(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D2000>
	void Pause(); // Function GeometryCache.GeometryCacheComponent.Pause(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D1FE0>
	char IsPlayingReversed(); // Function GeometryCache.GeometryCacheComponent.IsPlayingReversed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D1FB0>
	char IsPlaying(); // Function GeometryCache.GeometryCacheComponent.IsPlaying(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D1F80>
	char IsLooping(); // Function GeometryCache.GeometryCacheComponent.IsLooping(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D1F50>
	float GetStartTimeOffset(); // Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D1F20>
	float GetPlaybackSpeed(); // Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D1EF0>
	float GetPlaybackDirection(); // Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D1EC0>
	int32_t GetNumberOfFrames(); // Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D1E90>
	float GetDuration(); // Function GeometryCache.GeometryCacheComponent.GetDuration(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D1E30>
	float GetAnimationTime(); // Function GeometryCache.GeometryCacheComponent.GetAnimationTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D1E00>
};

// Class GeometryCache.GeometryCacheTrack
struct UGeometryCacheTrack : Object {
	float Duration; // 0x28 (4)
};

// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
struct UGeometryCacheTrack_FlipbookAnimation : UGeometryCacheTrack {
	uint32_t NumMeshSamples; // 0x58 (4)

	void AddMeshSample(struct Unknown& MeshData, float SampleTime); // Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample(Final|Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D1BA0>
};

// Class GeometryCache.GeometryCacheTrackStreamable
struct UGeometryCacheTrackStreamable : UGeometryCacheTrack {
	struct Unknown Codec; // 0x58 (8)
	float StartSampleTime; // 0xC8 (4)
};

