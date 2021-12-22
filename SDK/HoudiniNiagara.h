// Enum HoudiniNiagara.EHoudiniAttributes
enum class EHoudiniAttributes : uint8 {
	HOUDINI_ATTR_BEGIN = 0,
	Position = 0,
	Normal = 1,
	Time = 2,
	POINTID = 3,
	ALIVE = 4,
	LIFE = 5,
	Color = 6,
	ALPHA = 7,
	Velocity = 8,
	Type = 9,
	Impulse = 10,
	HOUDINI_ATTR_SIZE = 11,
	HOUDINI_ATTR_END = 10,
	EHoudiniAttributes_MAX = 12
};

// Class HoudiniNiagara.HoudiniCSV
struct UHoudiniCSV : Object {
	struct FString Filename; //  0x28 Size(10)
	int32_t NumberOfRows; //  0x38 Size(4)
	int32_t NumberOfColumns; //  0x3c Size(4)
	int32_t NumberOfPoints; //  0x40 Size(4)
	struct FString SourceTitleRow; //  0x48 Size(10)
	struct TArray<Unknown> ColumnTitleArray; //  0x58 Size(10)
	struct TArray<Unknown> FloatCSVData; //  0x68 Size(10)
	struct TArray<Unknown> SpawnTimes; //  0x78 Size(10)
	struct TArray<Unknown> LifeValues; //  0x88 Size(10)
	struct TArray<Unknown> PointTypes; //  0x98 Size(10)
	struct TArray<Unknown> SpecialAttributesColumnIndexes; //  0xa8 Size(10)
	struct TArray<Unknown> PointValueIndexes; //  0xb8 Size(10)
	char UseCustomTitleRow; //  0xc8 Size(1)

	char GetVelocityValue(int32_t& rowIndex, struct Unknown& Value); // Function HoudiniNiagara.HoudiniCSV.GetVelocityValue(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <Game+0x1383bb0>
};

// Class HoudiniNiagara.NiagaraDataInterfaceHoudiniCSV
struct UNiagaraDataInterfaceHoudiniCSV : UNiagaraDataInterface {
	struct Unknown HoudiniCSVAsset; //  0x30 Size(8)
	int32_t LastSpawnedPointID; //  0x38 Size(4)
	float LastSpawnTime; //  0x3c Size(4)
};

