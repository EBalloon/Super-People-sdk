// Enum ChaosNiagara.ELocationZToSpawnEnum
enum class ELocationZToSpawnEnum : uint8 {
	ELocationZToSpawnEnum = 0
	ELocationZToSpawnEnum = 1
	ELocationZToSpawnEnum = 2
	ELocationZToSpawnEnum = 3
	ELocationZToSpawnEnum = 4
};

// Enum ChaosNiagara.ELocationYToSpawnEnum
enum class ELocationYToSpawnEnum : uint8 {
	ELocationYToSpawnEnum = 0
	ELocationYToSpawnEnum = 1
	ELocationYToSpawnEnum = 2
	ELocationYToSpawnEnum = 3
	ELocationYToSpawnEnum = 4
};

// Enum ChaosNiagara.ELocationXToSpawnEnum
enum class ELocationXToSpawnEnum : uint8 {
	ELocationXToSpawnEnum = 0
	ELocationXToSpawnEnum = 1
	ELocationXToSpawnEnum = 2
	ELocationXToSpawnEnum = 3
	ELocationXToSpawnEnum = 4
};

// Enum ChaosNiagara.ELocationFilteringModeEnum
enum class ELocationFilteringModeEnum : uint8 {
	ELocationFilteringModeEnum = 0
	ELocationFilteringModeEnum = 1
	ELocationFilteringModeEnum = 2
};

// Enum ChaosNiagara.EDataSourceTypeEnum
enum class EDataSourceTypeEnum : uint8 {
	EDataSourceTypeEnum = 0
	EDataSourceTypeEnum = 1
	EDataSourceTypeEnum = 2
	EDataSourceTypeEnum = 3
};

// Enum ChaosNiagara.EDebugTypeEnum
enum class EDebugTypeEnum : uint8 {
	EDebugTypeEnum = 0
	EDebugTypeEnum = 1
	EDebugTypeEnum = 2
	EDebugTypeEnum = 3
};

// Enum ChaosNiagara.E
enum class E : uint8 {
	E = 0
	E = 1
	E = 2
	E = 3
};

// Enum ChaosNiagara.EDataSortTypeEnum
enum class EDataSortTypeEnum : uint8 {
	EDataSortTypeEnum = 0
	EDataSortTypeEnum = 1
	EDataSortTypeEnum = 2
	EDataSortTypeEnum = 3
	EDataSortTypeEnum = 4
};

// Class ChaosNiagara.NiagaraDataInterfaceChaosDestruction
struct UNiagaraDataInterfaceChaosDestruction : UNiagaraDataInterface {
	struct TSet<Unknown> ChaosSolverActorSet; // 0x30 (80)
	enum class Unknow DataSourceType; // 0x80 (1)
	int32_t DataProcessFrequency; // 0x84 (4)
	int32_t MaxNumberOfDataEntriesToSpawn; // 0x88 (4)
	char DoSpawn : 0; // 0x8C (1)
	struct Unknown SpawnMultiplierMinMax; // 0x90 (8)
	float SpawnChance; // 0x98 (4)
	struct Unknown ImpulseToSpawnMinMax; // 0x9C (8)
	struct Unknown SpeedToSpawnMinMax; // 0xA4 (8)
	struct Unknown MassToSpawnMinMax; // 0xAC (8)
	struct Unknown ExtentMinToSpawnMinMax; // 0xB4 (8)
	struct Unknown ExtentMaxToSpawnMinMax; // 0xBC (8)
	struct Unknown VolumeToSpawnMinMax; // 0xC4 (8)
	struct Unknown SolverTimeToSpawnMinMax; // 0xCC (8)
	int32_t SurfaceTypeToSpawn; // 0xD4 (4)
	enum class Unknow LocationFilteringMode; // 0xD8 (1)
	enum class Unknow LocationXToSpawn; // 0xD9 (1)
	struct Unknown LocationXToSpawnMinMax; // 0xDC (8)
	enum class Unknow LocationYToSpawn; // 0xE4 (1)
	struct Unknown LocationYToSpawnMinMax; // 0xE8 (8)
	enum class Unknow LocationZToSpawn; // 0xF0 (1)
	struct Unknown LocationZToSpawnMinMax; // 0xF4 (8)
	enum class Unknow DataSortingType; // 0xFC (1)
	char bGetExternalCollisionData : 0; // 0xFD (1)
	char DoSpatialHash : 0; // 0xFE (1)
	struct Unknown SpatialHashVolumeMin; // 0x100 (12)
	struct Unknown SpatialHashVolumeMax; // 0x10C (12)
	struct Unknown SpatialHashVolumeCellSize; // 0x118 (12)
	int32_t MaxDataPerCell; // 0x124 (4)
	char bApplyMaterialsFilter : 0; // 0x128 (1)
	struct TSet<Unknown> ChaosBreakingMaterialSet; // 0x130 (80)
	char bGetExternalBreakingData : 0; // 0x180 (1)
	char bGetExternalTrailingData : 0; // 0x181 (1)
	struct Unknown RandomPositionMagnitudeMinMax; // 0x184 (8)
	float InheritedVelocityMultiplier; // 0x18C (4)
	enum class Unknow RandomVelocityGenerationType; // 0x190 (1)
	struct Unknown RandomVelocityMagnitudeMinMax; // 0x194 (8)
	float SpreadAngleMax; // 0x19C (4)
	struct Unknown VelocityOffsetMin; // 0x1A0 (12)
	struct Unknown VelocityOffsetMax; // 0x1AC (12)
	struct Unknown FinalVelocityMagnitudeMinMax; // 0x1B8 (8)
	float MaxLatency; // 0x1C0 (4)
	enum class Unknow DebugType; // 0x1C4 (1)
	int32_t LastSpawnedPointID; // 0x1C8 (4)
	float LastSpawnTime; // 0x1CC (4)
	float SolverTime; // 0x1E0 (4)
	float TimeStampOfLastProcessedData; // 0x1E4 (4)
};

