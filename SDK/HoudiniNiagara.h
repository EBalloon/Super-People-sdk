// Enum HoudiniNiagara.EHoudiniAttributes
enum class EHoudiniAttributes : uint8 {
	HOUDINI_ATTR_BEGIN = 0
	Position = 0
	Normal = 1
	Time = 2
	POINTID = 3
	ALIVE = 4
	LIFE = 5
	Color = 6
	ALPHA = 7
	Velocity = 8
	Type = 9
	Impulse = 10
	HOUDINI_ATTR_SIZE = 11
	HOUDINI_ATTR_END = 10
	EHoudiniAttributes_MAX = 12
};

// Class HoudiniNiagara.HoudiniCSV
class UHoudiniCSV : Object {
	struct FString Filename; // 0x28 (16)
	int32_t NumberOfRows; // 0x38 (4)
	int32_t NumberOfColumns; // 0x3C (4)
	int32_t NumberOfPoints; // 0x40 (4)
	struct FString SourceTitleRow; // 0x48 (16)
	struct TArray<Unknown> ColumnTitleArray; // 0x58 (16)
	struct TArray<Unknown> FloatCSVData; // 0x68 (16)
	struct TArray<Unknown> SpawnTimes; // 0x78 (16)
	struct TArray<Unknown> LifeValues; // 0x88 (16)
	struct TArray<Unknown> PointTypes; // 0x98 (16)
	struct TArray<Unknown> SpecialAttributesColumnIndexes; // 0xA8 (16)
	struct TArray<Unknown> PointValueIndexes; // 0xB8 (16)
	char UseCustomTitleRow : 0; // 0xC8 (1)

	char GetVelocityValue(int32_t& rowIndex, struct Unknown& Value); // Function HoudiniNiagara.HoudiniCSV.GetVelocityValue(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1383BB0>
	char GetVectorValue(int32_t& rowIndex, int32_t& colIndex, struct Unknown& Value, char& DoSwap, char& DoScale); // Function HoudiniNiagara.HoudiniCSV.GetVectorValue(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13839A0>
	char GetTimeValue(int32_t& rowIndex, float& Value); // Function HoudiniNiagara.HoudiniCSV.GetTimeValue(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13838B0>
	char GetRowIndexesForPointAtTime(int32_t& POINTID, float& desiredTime, int32_t& PrevIndex, int32_t& NextIndex, float& PrevWeight); // Function HoudiniNiagara.HoudiniCSV.GetRowIndexesForPointAtTime(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13836A0>
	char GetPositionValue(int32_t& rowIndex, struct Unknown& Value); // Function HoudiniNiagara.HoudiniCSV.GetPositionValue(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13835B0>
	char GetPointVectorValueAtTime(int32_t& POINTID, int32_t& columnIndex, float& desiredTime, struct Unknown& Vector, char& DoSwap, char& DoScale); // Function HoudiniNiagara.HoudiniCSV.GetPointVectorValueAtTime(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1383350>
	char GetPointValueAtTime(int32_t& POINTID, int32_t& columnIndex, float& desiredTime, float& Value); // Function HoudiniNiagara.HoudiniCSV.GetPointValueAtTime(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13831A0>
	char GetPointType(int32_t& POINTID, int32_t& Value); // Function HoudiniNiagara.HoudiniCSV.GetPointType(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13830B0>
	char GetPointPositionAtTime(int32_t& POINTID, float& desiredTime, struct Unknown& Vector); // Function HoudiniNiagara.HoudiniCSV.GetPointPositionAtTime(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1382F70>
	char GetPointLifeAtTime(int32_t& POINTID, float& desiredTime, float& Value); // Function HoudiniNiagara.HoudiniCSV.GetPointLifeAtTime(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1382E30>
	char GetPointLife(int32_t& POINTID, float& Value); // Function HoudiniNiagara.HoudiniCSV.GetPointLife(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1382D40>
	char GetPointIDsToSpawnAtTime(float& desiredTime, int32_t& MinID, int32_t& MaxID, int32_t& Count, int32_t& LastSpawnedPointID, float& LastSpawnTime); // Function HoudiniNiagara.HoudiniCSV.GetPointIDsToSpawnAtTime(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1382B10>
	int32_t GetNumberOfRows(); // Function HoudiniNiagara.HoudiniCSV.GetNumberOfRows(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106F2E0>
	int32_t GetNumberOfPoints(); // Function HoudiniNiagara.HoudiniCSV.GetNumberOfPoints(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1382AE0>
	int32_t GetNumberOfColumns(); // Function HoudiniNiagara.HoudiniCSV.GetNumberOfColumns(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1382AB0>
	char GetNormalValue(int32_t& rowIndex, struct Unknown& Value); // Function HoudiniNiagara.HoudiniCSV.GetNormalValue(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13829C0>
	char GetLastRowIndexAtTime(float& desiredTime, int32_t& lastRowIndex); // Function HoudiniNiagara.HoudiniCSV.GetLastRowIndexAtTime(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13828D0>
	char GetLastPointIDToSpawnAtTime(float& Time, int32_t& lastIndex); // Function HoudiniNiagara.HoudiniCSV.GetLastPointIDToSpawnAtTime(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13827E0>
	char GetImpulseValue(int32_t& rowIndex, float& Value); // Function HoudiniNiagara.HoudiniCSV.GetImpulseValue(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13826F0>
	char GetFloatValueForString(int32_t& rowIndex, struct FString ColumnTitle, float& Value); // Function HoudiniNiagara.HoudiniCSV.GetFloatValueForString(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13825A0>
	char GetFloatValue(int32_t& rowIndex, int32_t& colIndex, float& Value); // Function HoudiniNiagara.HoudiniCSV.GetFloatValue(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1382460>
	char GetColumnIndexFromString(struct FString ColumnTitle, int32_t& columnIndex); // Function HoudiniNiagara.HoudiniCSV.GetColumnIndexFromString(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1382360>
	char GetColorValue(int32_t& rowIndex, struct Unknown& Value); // Function HoudiniNiagara.HoudiniCSV.GetColorValue(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1382270>
};

// Class HoudiniNiagara.NiagaraDataInterfaceHoudiniCSV
class UNiagaraDataInterfaceHoudiniCSV : UNiagaraDataInterface {
	struct Unknown HoudiniCSVAsset; // 0x30 (8)
	int32_t LastSpawnedPointID; // 0x38 (4)
	float LastSpawnTime; // 0x3C (4)
};

// ScriptStruct HoudiniNiagara.PointIndexes
struct FPointIndexes {
	struct TArray<Unknown> RowIndexes; // 0x0 (16)
};

// ScriptStruct HoudiniNiagara.HoudiniEvent
struct FHoudiniEvent {
	struct Unknown Position; // 0x0 (12)
	struct Unknown Normal; // 0xC (12)
	float Impulse; // 0x18 (4)
	struct Unknown Velocity; // 0x1C (12)
	int32_t POINTID; // 0x28 (4)
	float Time; // 0x2C (4)
	float LIFE; // 0x30 (4)
	struct Unknown Color; // 0x34 (16)
	int32_t Type; // 0x44 (4)
};

