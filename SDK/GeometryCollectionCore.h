// Enum GeometryCollectionCore.EGeometryCollectionCacheType
enum class EGeometryCollectionCacheType : uint8_t {
	EGeometryCollectionCacheType = 0,
	EGeometryCollectionCacheType = 1,
	EGeometryCollectionCacheType = 2,
	EGeometryCollectionCacheType = 3,
	EGeometryCollectionCacheType = 4,
};

// ScriptStruct GeometryCollectionCore.RecordedTransformTrack
struct FRecordedTransformTrack {
	struct TArray<Unknown> Records; // 0x0 (16)
};

// ScriptStruct GeometryCollectionCore.RecordedFrame
struct FRecordedFrame {
	struct TArray<Unknown> Transforms; // 0x0 (16)
	struct TArray<Unknown> TransformIndices; // 0x10 (16)
	struct TArray<Unknown> PreviousTransformIndices; // 0x20 (16)
	struct TArray<Unknown> DisabledFlags; // 0x30 (16)
	struct TArray<Unknown> Collisions; // 0x40 (16)
	struct TArray<Unknown> Breakings; // 0x50 (16)
	struct TSet<Unknown> Trailings; // 0x60 (80)
	float Timestamp; // 0xB0 (4)
};

// ScriptStruct GeometryCollectionCore.SolverTrailingData
struct FSolverTrailingData {
	struct Unknown Location; // 0x0 (12)
	struct Unknown Velocity; // 0xC (12)
	struct Unknown AngularVelocity; // 0x18 (12)
	float Mass; // 0x24 (4)
	int32_t ParticleIndex; // 0x28 (4)
	int32_t ParticleIndexMesh; // 0x2C (4)
};

// ScriptStruct GeometryCollectionCore.SolverBreakingData
struct FSolverBreakingData {
	struct Unknown Location; // 0x0 (12)
	struct Unknown Velocity; // 0xC (12)
	struct Unknown AngularVelocity; // 0x18 (12)
	float Mass; // 0x24 (4)
	int32_t ParticleIndex; // 0x28 (4)
	int32_t ParticleIndexMesh; // 0x2C (4)
};

// ScriptStruct GeometryCollectionCore.SolverCollisionData
struct FSolverCollisionData {
	struct Unknown Location; // 0x0 (12)
	struct Unknown AccumulatedImpulse; // 0xC (12)
	struct Unknown Normal; // 0x18 (12)
	struct Unknown Velocity1; // 0x24 (12)
	struct Unknown Velocity2; // 0x30 (12)
	struct Unknown AngularVelocity1; // 0x3C (12)
	struct Unknown AngularVelocity2; // 0x48 (12)
	float Mass1; // 0x54 (4)
	float Mass2; // 0x58 (4)
	int32_t ParticleIndex; // 0x5C (4)
	int32_t LevelsetIndex; // 0x60 (4)
	int32_t ParticleIndexMesh; // 0x64 (4)
	int32_t LevelsetIndexMesh; // 0x68 (4)
};

