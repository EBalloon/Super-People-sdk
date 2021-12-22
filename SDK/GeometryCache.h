// Class GeometryCache.GeometryCache
struct UGeometryCache : Object {
	struct TArray<Unknown> Materials; //  0x30 Size(10)
	struct TArray<Unknown> Tracks; //  0x40 Size(10)
	int32_t StartFrame; //  0x60 Size(4)
	int32_t EndFrame; //  0x64 Size(4)
};

// Class GeometryCache.GeometryCacheActor
struct AGeometryCacheActor : UActor {
	struct Unknown GeometryCacheComponent; //  0x310 Size(8)

	struct Unknown GetG(); // Function GeometryCache.GeometryCacheActor.GetG(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x16d1e60>
};

// Class GeometryCache.GeometryCacheCodecBase
struct UGeometryCacheCodecBase : Object {
	struct TArray<Unknown> TopologyRanges; //  0x28 Size(10)
};

// Class GeometryCache.GeometryCacheCodecRaw
struct UGeometryCacheCodecRaw : UGeometryCacheCodecBase {
	int32_t DummyProperty; //  0x38 Size(4)
};

// Class GeometryCache.GeometryCacheComponent
struct UGeometryCacheComponent : UMeshComponent {
	struct Unknown GeometryCache; //  0x4e8 Size(8)
	char bRunning; //  0x4f0 Size(1)
	char bLooping; //  0x4f1 Size(1)
	float StartTimeOffset; //  0x4f4 Size(4)
	float PlaybackSpeed; //  0x4f8 Size(4)
	int32_t NumTracks; //  0x4fc Size(4)
	float ElapsedTime; //  0x500 Size(4)
	float Duration; //  0x534 Size(4)
	char bManualTick; //  0x538 Size(1)

	void TickAtThisTime(float Time, char bInIsRunning, char bInBackwards, char bInIsLooping); // Function GeometryCache.GeometryCacheComponent.TickAtThisTime(Final|Native|Public|BlueprintCallable) // <Game+0x16d24d0>
};

// Class GeometryCache.GeometryCacheTrack
struct UGeometryCacheTrack : Object {
	float Duration; //  0x28 Size(4)
};

// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
struct UGeometryCacheTrack_FlipbookAnimation : UGeometryCacheTrack {
	uint32_t NumMeshSamples; //  0x58 Size(4)

	void AddMeshSample(struct Unknown& Mesh, float SampleTime); // Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample(Final|Native|Public|HasOutParms) // <Game+0x16d1ba0>
};

// Class GeometryCache.GeometryCacheTrackStreamable
struct UGeometryCacheTrackStreamable : UGeometryCacheTrack {
	struct Unknown Codec; //  0x58 Size(8)
	float StartSampleTime; //  0xc8 Size(4)
};

