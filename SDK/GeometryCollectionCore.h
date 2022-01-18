// Enum GeometryCollectionCore.EGeometryCollectionCacheType
enum class EGeometryCollectionCacheType : uint8_t {
	None = 0,
	Record = 1,
	Play = 2,
	RecordAndPlay = 3,
	EGeometryCollectionCacheType_MAX = 4,
};

// ScriptStruct GeometryCollectionCore.RecordedTransformTrack
struct FRecordedTransformTrack {
	struct TArray<struct FRecordedFrame> Records; // 0x0 (16)
};

// ScriptStruct GeometryCollectionCore.RecordedFrame
struct FRecordedFrame {
	struct TArray<struct FTransform> Transforms; // 0x0 (16)
	struct TArray<int32_t> TransformIndices; // 0x10 (16)
	struct TArray<int32_t> PreviousTransformIndices; // 0x20 (16)
	struct TArray<char> DisabledFlags; // 0x30 (16)
	struct TArray<struct FSolverCollisionData> Collisions; // 0x40 (16)
	struct TArray<struct FSolverBreakingData> Breakings; // 0x50 (16)
	struct TSet<struct FSolverTrailingData> Trailings; // 0x60 (80)
	float Timestamp; // 0xB0 (4)
};

// ScriptStruct GeometryCollectionCore.SolverTrailingData
struct FSolverTrailingData {
	struct FVector Location; // 0x0 (12)
	struct FVector Velocity; // 0xC (12)
	struct FVector AngularVelocity; // 0x18 (12)
	float Mass; // 0x24 (4)
	int32_t ParticleIndex; // 0x28 (4)
	int32_t ParticleIndexMesh; // 0x2C (4)
};

// ScriptStruct GeometryCollectionCore.SolverBreakingData
struct FSolverBreakingData {
	struct FVector Location; // 0x0 (12)
	struct FVector Velocity; // 0xC (12)
	struct FVector AngularVelocity; // 0x18 (12)
	float Mass; // 0x24 (4)
	int32_t ParticleIndex; // 0x28 (4)
	int32_t ParticleIndexMesh; // 0x2C (4)
};

// ScriptStruct GeometryCollectionCore.SolverCollisionData
struct FSolverCollisionData {
	struct FVector Location; // 0x0 (12)
	struct FVector AccumulatedImpulse; // 0xC (12)
	struct FVector Normal; // 0x18 (12)
	struct FVector Velocity1; // 0x24 (12)
	struct FVector Velocity2; // 0x30 (12)
	struct FVector AngularVelocity1; // 0x3C (12)
	struct FVector AngularVelocity2; // 0x48 (12)
	float Mass1; // 0x54 (4)
	float Mass2; // 0x58 (4)
	int32_t ParticleIndex; // 0x5C (4)
	int32_t LevelsetIndex; // 0x60 (4)
	int32_t ParticleIndexMesh; // 0x64 (4)
	int32_t LevelsetIndexMesh; // 0x68 (4)
};

