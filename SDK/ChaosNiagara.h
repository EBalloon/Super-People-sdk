// Enum ChaosNiagara.ELocationZToSpawnEnum
enum class ELocationZToSpawnEnum : uint8 {
	ELocationZToSpawnEnum = 0,
	ELocationZToSpawnEnum = 1,
	ELocationZToSpawnEnum = 2,
	ELocationZToSpawnEnum = 3,
	ELocationZToSpawnEnum = 4
};

// Enum ChaosNiagara.ELocationYToSpawnEnum
enum class ELocationYToSpawnEnum : uint8 {
	ELocationYToSpawnEnum = 0,
	ELocationYToSpawnEnum = 1,
	ELocationYToSpawnEnum = 2,
	ELocationYToSpawnEnum = 3,
	ELocationYToSpawnEnum = 4
};

// Enum ChaosNiagara.ELocationXToSpawnEnum
enum class ELocationXToSpawnEnum : uint8 {
	ELocationXToSpawnEnum = 0,
	ELocationXToSpawnEnum = 1,
	ELocationXToSpawnEnum = 2,
	ELocationXToSpawnEnum = 3,
	ELocationXToSpawnEnum = 4
};

// Enum ChaosNiagara.ELocationFilteringModeEnum
enum class ELocationFilteringModeEnum : uint8 {
	ELocationFilteringModeEnum = 0,
	ELocationFilteringModeEnum = 1,
	ELocationFilteringModeEnum = 2
};

// Enum ChaosNiagara.EDataSourceTypeEnum
enum class EDataSourceTypeEnum : uint8 {
	EDataSourceTypeEnum = 0,
	EDataSourceTypeEnum = 1,
	EDataSourceTypeEnum = 2,
	EDataSourceTypeEnum = 3
};

// Enum ChaosNiagara.EDebugTypeEnum
enum class EDebugTypeEnum : uint8 {
	EDebugTypeEnum = 0,
	EDebugTypeEnum = 1,
	EDebugTypeEnum = 2,
	EDebugTypeEnum = 3
};

// Enum ChaosNiagara.ERandomVelocityGenerationTypeEnum
enum class ERandomVelocityGenerationTypeEnum : uint8 {
	ERandomVelocityGenerationTypeEnum = 0,
	ERandomVelocityGenerationTypeEnum = 1,
	ERandomVelocityGenerationTypeEnum = 2,
	ERandomVelocityGenerationTypeEnum = 3
};

// Enum ChaosNiagara.EDataSortTypeEnum
enum class EDataSortTypeEnum : uint8 {
	EDataSortTypeEnum = 0,
	EDataSortTypeEnum = 1,
	EDataSortTypeEnum = 2,
	EDataSortTypeEnum = 3,
	EDataSortTypeEnum = 4
};

// Class ChaosNiagara.NiagaraDataInterfaceChaosDestruction
struct UNiagaraDataInterfaceChaosDestruction : UNiagaraDataInterface {
	struct TSet<Unknown> ChaosSolverActorSet; //  0x30 Size(50)
	enum class Unknow DataSourceType; //  0x80 Size(1)
	int32_t DataProcessFrequency; //  0x84 Size(4)
	int32_t MaxNumberOfDataEntriesToSpawn; //  0x88 Size(4)
	char DoSpawn; //  0x8c Size(1)
	struct Unknown SpawnMultiplierMinMax; //  0x90 Size(8)
	float SpawnChance; //  0x98 Size(4)
	struct Unknown ImpulseToSpawnMinMax; //  0x9c Size(8)
	struct Unknown SpeedToSpawnMinMax; //  0xa4 Size(8)
	struct Unknown MassToSpawnMinMax; //  0xac Size(8)
	struct Unknown ExtentMinToSpawnMinMax; //  0xb4 Size(8)
	struct Unknown ExtentMaxToSpawnMinMax; //  0xbc Size(8)
	struct Unknown VolumeToSpawnMinMax; //  0xc4 Size(8)
	struct Unknown SolverTimeToSpawnMinMax; //  0xcc Size(8)
	int32_t SurfaceTypeToSpawn; //  0xd4 Size(4)
	enum class Unknow LocationFilteringMode; //  0xd8 Size(1)
	enum class Unknow LocationXToSpawn; //  0xd9 Size(1)
	struct Unknown LocationXToSpawnMinMax; //  0xdc Size(8)
	enum class Unknow LocationYToSpawn; //  0xe4 Size(1)
	struct Unknown LocationYToSpawnMinMax; //  0xe8 Size(8)
	enum class Unknow LocationZToSpawn; //  0xf0 Size(1)
	struct Unknown LocationZToSpawnMinMax; //  0xf4 Size(8)
	enum class Unknow DataSortingType; //  0xfc Size(1)
	char bGetExternalCollisionData; //  0xfd Size(1)
	char DoSpatialHash; //  0xfe Size(1)
	struct Unknown SpatialHashVolumeMin; //  0x100 Size(c)
	struct Unknown SpatialHashVolumeMax; //  0x10c Size(c)
	struct Unknown SpatialHashVolumeCellSize; //  0x118 Size(c)
	int32_t MaxDataPerCell; //  0x124 Size(4)
	char bApplyMaterialsFilter; //  0x128 Size(1)
	struct TSet<Unknown> ChaosBreakingMaterialSet; //  0x130 Size(50)
	char bGetExternalBreaking; //  0x180 Size(1)
	char bGetExternalTrailingD; //  0x181 Size(1)
	struct Unknown RandomPositionMagnitudeMinMax; //  0x184 Size(8)
	float InheritedVelocityMultiplier; //  0x18c Size(4)
	enum class Unknow RandomVelocityGenerationType; //  0x190 Size(1)
	struct Unknown RandomVelocityMagnitudeMinMax; //  0x194 Size(8)
	float SpreadAngleMax; //  0x19c Size(4)
	struct Unknown VelocityOffsetMin; //  0x1a0 Size(c)
	struct Unknown VelocityOffsetMax; //  0x1ac Size(c)
	struct Unknown FinalVelocityMagnitudeMinMax; //  0x1b8 Size(8)
	float MaxLatency; //  0x1c0 Size(4)
	enum class Unknow DebugType; //  0x1c4 Size(1)
	int32_t LastSpawnedPointID; //  0x1c8 Size(4)
	float LastSpawnTime; //  0x1cc Size(4)
	float SolverTime; //  0x1e0 Size(4)
	float TimeStampOfLastProcessedData; //  0x1e4 Size(4)
};

