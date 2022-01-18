// Enum ChaosNiagara.ELocationZToSpawnEnum
enum class ELocationZToSpawnEnum : uint8_t {
	ChaosNiagara_LocationZToSpawn_None = 0,
	ChaosNiagara_LocationZToSpawn_Min = 1,
	ChaosNiagara_LocationZToSpawn_Max = 2,
	ChaosNiagara_LocationZToSpawn_MinMax = 3,
	ChaosNiagara_Max = 4,
};

// Enum ChaosNiagara.ELocationYToSpawnEnum
enum class ELocationYToSpawnEnum : uint8_t {
	ChaosNiagara_LocationYToSpawn_None = 0,
	ChaosNiagara_LocationYToSpawn_Min = 1,
	ChaosNiagara_LocationYToSpawn_Max = 2,
	ChaosNiagara_LocationYToSpawn_MinMax = 3,
	ChaosNiagara_Max = 4,
};

// Enum ChaosNiagara.ELocationXToSpawnEnum
enum class ELocationXToSpawnEnum : uint8_t {
	ChaosNiagara_LocationXToSpawn_None = 0,
	ChaosNiagara_LocationXToSpawn_Min = 1,
	ChaosNiagara_LocationXToSpawn_Max = 2,
	ChaosNiagara_LocationXToSpawn_MinMax = 3,
	ChaosNiagara_Max = 4,
};

// Enum ChaosNiagara.ELocationFilteringModeEnum
enum class ELocationFilteringModeEnum : uint8_t {
	ChaosNiagara_LocationFilteringMode_Inclusive = 0,
	ChaosNiagara_LocationFilteringMode_Exclusive = 1,
	ChaosNiagara_Max = 2,
};

// Enum ChaosNiagara.EDataSourceTypeEnum
enum class EDataSourceTypeEnum : uint8_t {
	ChaosNiagara_DataSourceType_Collision = 0,
	ChaosNiagara_DataSourceType_Breaking = 1,
	ChaosNiagara_DataSourceType_Trailing = 2,
	ChaosNiagara_Max = 3,
};

// Enum ChaosNiagara.EDebugTypeEnum
enum class EDebugTypeEnum : uint8_t {
	ChaosNiagara_DebugType_NoDebug = 0,
	ChaosNiagara_DebugType_ColorBySolver = 1,
	ChaosNiagara_DebugType_ColorByParticleIndex = 2,
	ChaosNiagara_Max = 3,
};

// Enum ChaosNiagara.ERandomVelocityGenerationTypeEnum
enum class ERandomVelocityGenerationTypeEnum : uint8_t {
	ChaosNiagara_RandomVelocityGenerationType_RandomDistribution = 0,
	ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers = 1,
	ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased = 2,
	ChaosNiagara_Max = 3,
};

// Enum ChaosNiagara.EDataSortTypeEnum
enum class EDataSortTypeEnum : uint8_t {
	ChaosNiagara_DataSortType_NoSorting = 0,
	ChaosNiagara_DataSortType_RandomShuffle = 1,
	ChaosNiagara_DataSortType_SortByMassMaxToMin = 2,
	ChaosNiagara_DataSortType_SortByMassMinToMax = 3,
	ChaosNiagara_Max = 4,
};

// Class ChaosNiagara.NiagaraDataInterfaceChaosDestruction
class UNiagaraDataInterfaceChaosDestruction : public UNiagaraDataInterface {

public:

	struct TSet<struct AChaosSolverActor> ChaosSolverActorSet; // 0x30 (80)
	enum class EDataSourceTypeEnum DataSourceType; // 0x80 (1)
	int32_t DataProcessFrequency; // 0x84 (4)
	int32_t MaxNumberOfDataEntriesToSpawn; // 0x88 (4)
	char DoSpawn : 0; // 0x8C (1)
	struct FVector2D SpawnMultiplierMinMax; // 0x90 (8)
	float SpawnChance; // 0x98 (4)
	struct FVector2D ImpulseToSpawnMinMax; // 0x9C (8)
	struct FVector2D SpeedToSpawnMinMax; // 0xA4 (8)
	struct FVector2D MassToSpawnMinMax; // 0xAC (8)
	struct FVector2D ExtentMinToSpawnMinMax; // 0xB4 (8)
	struct FVector2D ExtentMaxToSpawnMinMax; // 0xBC (8)
	struct FVector2D VolumeToSpawnMinMax; // 0xC4 (8)
	struct FVector2D SolverTimeToSpawnMinMax; // 0xCC (8)
	int32_t SurfaceTypeToSpawn; // 0xD4 (4)
	enum class ELocationFilteringModeEnum LocationFilteringMode; // 0xD8 (1)
	enum class ELocationXToSpawnEnum LocationXToSpawn; // 0xD9 (1)
	struct FVector2D LocationXToSpawnMinMax; // 0xDC (8)
	enum class ELocationYToSpawnEnum LocationYToSpawn; // 0xE4 (1)
	struct FVector2D LocationYToSpawnMinMax; // 0xE8 (8)
	enum class ELocationZToSpawnEnum LocationZToSpawn; // 0xF0 (1)
	struct FVector2D LocationZToSpawnMinMax; // 0xF4 (8)
	enum class EDataSortTypeEnum DataSortingType; // 0xFC (1)
	char bGetExternalCollisionData : 0; // 0xFD (1)
	char DoSpatialHash : 0; // 0xFE (1)
	struct FVector SpatialHashVolumeMin; // 0x100 (12)
	struct FVector SpatialHashVolumeMax; // 0x10C (12)
	struct FVector SpatialHashVolumeCellSize; // 0x118 (12)
	int32_t MaxDataPerCell; // 0x124 (4)
	char bApplyMaterialsFilter : 0; // 0x128 (1)
	struct TSet<struct UPhysicalMaterial> ChaosBreakingMaterialSet; // 0x130 (80)
	char bGetExternalBreakingData : 0; // 0x180 (1)
	char bGetExternalTrailingData : 0; // 0x181 (1)
	struct FVector2D RandomPositionMagnitudeMinMax; // 0x184 (8)
	float InheritedVelocityMultiplier; // 0x18C (4)
	enum class ERandomVelocityGenerationTypeEnum RandomVelocityGenerationType; // 0x190 (1)
	struct FVector2D RandomVelocityMagnitudeMinMax; // 0x194 (8)
	float SpreadAngleMax; // 0x19C (4)
	struct FVector VelocityOffsetMin; // 0x1A0 (12)
	struct FVector VelocityOffsetMax; // 0x1AC (12)
	struct FVector2D FinalVelocityMagnitudeMinMax; // 0x1B8 (8)
	float MaxLatency; // 0x1C0 (4)
	enum class EDebugTypeEnum DebugType; // 0x1C4 (1)
	int32_t LastSpawnedPointID; // 0x1C8 (4)
	float LastSpawnTime; // 0x1CC (4)
	float SolverTime; // 0x1E0 (4)
	float TimeStampOfLastProcessedData; // 0x1E4 (4)
};

// ScriptStruct ChaosNiagara.ChaosDestructionEvent
struct FChaosDestructionEvent {
	struct FVector Position; // 0x0 (12)
	struct FVector Normal; // 0xC (12)
	struct FVector Velocity; // 0x18 (12)
	struct FVector AngularVelocity; // 0x24 (12)
	float ExtentMin; // 0x30 (4)
	float ExtentMax; // 0x34 (4)
	int32_t ParticleID; // 0x38 (4)
	float Time; // 0x3C (4)
	int32_t Type; // 0x40 (4)
};

