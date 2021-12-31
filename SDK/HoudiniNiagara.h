// Enum HoudiniNiagara.EHoudiniAttributes
enum class EHoudiniAttributes : uint8_t {
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
	EHoudiniAttributes_MAX = 12,
};

// Class HoudiniNiagara.HoudiniCSV
class UHoudiniCSV : public Object {

public:

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

	char GetVelocityValue(int32_t& rowIndex, struct Unknown& Value); // Function HoudiniNiagara.HoudiniCSV.GetVelocityValue(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1392140>
	char GetVectorValue(int32_t& rowIndex, int32_t& colIndex, struct Unknown& Value, char& DoSwap, char& DoScale); // Function HoudiniNiagara.HoudiniCSV.GetVectorValue(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1391F30>
	char GetTimeValue(int32_t& rowIndex, float& Value); // Function HoudiniNiagara.HoudiniCSV.GetTimeValue(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1391E40>
	char GetRowIndexesForPointAtTime(int32_t& POINTID, float& desiredTime, int32_t& PrevIndex, int32_t& NextIndex, float& PrevWeight); // Function HoudiniNiagara.HoudiniCSV.GetRowIndexesForPointAtTime(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1391C30>
	char GetPositionValue(int32_t& rowIndex, struct Unknown& Value); // Function HoudiniNiagara.HoudiniCSV.GetPositionValue(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1391B40>
	char GetPointVectorValueAtTime(int32_t& POINTID, int32_t& columnIndex, float& desiredTime, struct Unknown& Vector, char& DoSwap, char& DoScale); // Function HoudiniNiagara.HoudiniCSV.GetPointVectorValueAtTime(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13918E0>
	char GetPointValueAtTime(int32_t& POINTID, int32_t& columnIndex, float& desiredTime, float& Value); // Function HoudiniNiagara.HoudiniCSV.GetPointValueAtTime(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1391730>
	char GetPointType(int32_t& POINTID, int32_t& Value); // Function HoudiniNiagara.HoudiniCSV.GetPointType(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1391640>
	char GetPointPositionAtTime(int32_t& POINTID, float& desiredTime, struct Unknown& Vector); // Function HoudiniNiagara.HoudiniCSV.GetPointPositionAtTime(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1391500>
	char GetPointLifeAtTime(int32_t& POINTID, float& desiredTime, float& Value); // Function HoudiniNiagara.HoudiniCSV.GetPointLifeAtTime(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13913C0>
	char GetPointLife(int32_t& POINTID, float& Value); // Function HoudiniNiagara.HoudiniCSV.GetPointLife(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13912D0>
	char GetPointIDsToSpawnAtTime(float& desiredTime, int32_t& MinID, int32_t& MaxID, int32_t& Count, int32_t& LastSpawnedPointID, float& LastSpawnTime); // Function HoudiniNiagara.HoudiniCSV.GetPointIDsToSpawnAtTime(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13910A0>
	int32_t GetNumberOfRows(); // Function HoudiniNiagara.HoudiniCSV.GetNumberOfRows(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107D860>
	int32_t GetNumberOfPoints(); // Function HoudiniNiagara.HoudiniCSV.GetNumberOfPoints(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1391070>
	int32_t GetNumberOfColumns(); // Function HoudiniNiagara.HoudiniCSV.GetNumberOfColumns(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1391040>
	char GetNormalValue(int32_t& rowIndex, struct Unknown& Value); // Function HoudiniNiagara.HoudiniCSV.GetNormalValue(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1390F50>
	char GetLastRowIndexAtTime(float& desiredTime, int32_t& lastRowIndex); // Function HoudiniNiagara.HoudiniCSV.GetLastRowIndexAtTime(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1390E60>
	char GetLastPointIDToSpawnAtTime(float& Time, int32_t& lastIndex); // Function HoudiniNiagara.HoudiniCSV.GetLastPointIDToSpawnAtTime(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1390D70>
	char GetImpulseValue(int32_t& rowIndex, float& Value); // Function HoudiniNiagara.HoudiniCSV.GetImpulseValue(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1390C80>
	char GetFloatValueForString(int32_t& rowIndex, struct FString ColumnTitle, float& Value); // Function HoudiniNiagara.HoudiniCSV.GetFloatValueForString(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1390B30>
	char GetFloatValue(int32_t& rowIndex, int32_t& colIndex, float& Value); // Function HoudiniNiagara.HoudiniCSV.GetFloatValue(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13909F0>
	char GetColumnIndexFromString(struct FString ColumnTitle, int32_t& columnIndex); // Function HoudiniNiagara.HoudiniCSV.GetColumnIndexFromString(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13908F0>
	char GetColorValue(int32_t& rowIndex, struct Unknown& Value); // Function HoudiniNiagara.HoudiniCSV.GetColorValue(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1390800>
};

// Class HoudiniNiagara.NiagaraDataInterfaceHoudiniCSV
class UNiagaraDataInterfaceHoudiniCSV : public UNiagaraDataInterface {

public:

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

// Function HoudiniNiagara.HoudiniCSV.GetVelocityValue
inline char UHoudiniCSV::GetVelocityValue(int32_t& rowIndex, struct Unknown& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetVelocityValue");

	struct GetVelocityValue_Params {
		int32_t& rowIndex;
		struct Unknown& Value;
		char ReturnValue;

	}; GetVelocityValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	rowIndex = Params.rowIndex;
	Value = Params.Value;


	return params.ReturnValue;
}

// Function HoudiniNiagara.HoudiniCSV.GetVectorValue
inline char UHoudiniCSV::GetVectorValue(int32_t& rowIndex, int32_t& colIndex, struct Unknown& Value, char& DoSwap, char& DoScale) {
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetVectorValue");

	struct GetVectorValue_Params {
		int32_t& rowIndex;
		int32_t& colIndex;
		struct Unknown& Value;
		char& DoSwap;
		char& DoScale;
		char ReturnValue;

	}; GetVectorValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	rowIndex = Params.rowIndex;
	colIndex = Params.colIndex;
	Value = Params.Value;
	DoSwap = Params.DoSwap;
	DoScale = Params.DoScale;


	return params.ReturnValue;
}

// Function HoudiniNiagara.HoudiniCSV.GetTimeValue
inline char UHoudiniCSV::GetTimeValue(int32_t& rowIndex, float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetTimeValue");

	struct GetTimeValue_Params {
		int32_t& rowIndex;
		float& Value;
		char ReturnValue;

	}; GetTimeValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	rowIndex = Params.rowIndex;
	Value = Params.Value;


	return params.ReturnValue;
}

// Function HoudiniNiagara.HoudiniCSV.GetRowIndexesForPointAtTime
inline char UHoudiniCSV::GetRowIndexesForPointAtTime(int32_t& POINTID, float& desiredTime, int32_t& PrevIndex, int32_t& NextIndex, float& PrevWeight) {
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetRowIndexesForPointAtTime");

	struct GetRowIndexesForPointAtTime_Params {
		int32_t& POINTID;
		float& desiredTime;
		int32_t& PrevIndex;
		int32_t& NextIndex;
		float& PrevWeight;
		char ReturnValue;

	}; GetRowIndexesForPointAtTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	POINTID = Params.POINTID;
	desiredTime = Params.desiredTime;
	PrevIndex = Params.PrevIndex;
	NextIndex = Params.NextIndex;
	PrevWeight = Params.PrevWeight;


	return params.ReturnValue;
}

// Function HoudiniNiagara.HoudiniCSV.GetPositionValue
inline char UHoudiniCSV::GetPositionValue(int32_t& rowIndex, struct Unknown& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetPositionValue");

	struct GetPositionValue_Params {
		int32_t& rowIndex;
		struct Unknown& Value;
		char ReturnValue;

	}; GetPositionValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	rowIndex = Params.rowIndex;
	Value = Params.Value;


	return params.ReturnValue;
}

// Function HoudiniNiagara.HoudiniCSV.GetPointVectorValueAtTime
inline char UHoudiniCSV::GetPointVectorValueAtTime(int32_t& POINTID, int32_t& columnIndex, float& desiredTime, struct Unknown& Vector, char& DoSwap, char& DoScale) {
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetPointVectorValueAtTime");

	struct GetPointVectorValueAtTime_Params {
		int32_t& POINTID;
		int32_t& columnIndex;
		float& desiredTime;
		struct Unknown& Vector;
		char& DoSwap;
		char& DoScale;
		char ReturnValue;

	}; GetPointVectorValueAtTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	POINTID = Params.POINTID;
	columnIndex = Params.columnIndex;
	desiredTime = Params.desiredTime;
	Vector = Params.Vector;
	DoSwap = Params.DoSwap;
	DoScale = Params.DoScale;


	return params.ReturnValue;
}

// Function HoudiniNiagara.HoudiniCSV.GetPointValueAtTime
inline char UHoudiniCSV::GetPointValueAtTime(int32_t& POINTID, int32_t& columnIndex, float& desiredTime, float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetPointValueAtTime");

	struct GetPointValueAtTime_Params {
		int32_t& POINTID;
		int32_t& columnIndex;
		float& desiredTime;
		float& Value;
		char ReturnValue;

	}; GetPointValueAtTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	POINTID = Params.POINTID;
	columnIndex = Params.columnIndex;
	desiredTime = Params.desiredTime;
	Value = Params.Value;


	return params.ReturnValue;
}

// Function HoudiniNiagara.HoudiniCSV.GetPointType
inline char UHoudiniCSV::GetPointType(int32_t& POINTID, int32_t& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetPointType");

	struct GetPointType_Params {
		int32_t& POINTID;
		int32_t& Value;
		char ReturnValue;

	}; GetPointType_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	POINTID = Params.POINTID;
	Value = Params.Value;


	return params.ReturnValue;
}

// Function HoudiniNiagara.HoudiniCSV.GetPointPositionAtTime
inline char UHoudiniCSV::GetPointPositionAtTime(int32_t& POINTID, float& desiredTime, struct Unknown& Vector) {
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetPointPositionAtTime");

	struct GetPointPositionAtTime_Params {
		int32_t& POINTID;
		float& desiredTime;
		struct Unknown& Vector;
		char ReturnValue;

	}; GetPointPositionAtTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	POINTID = Params.POINTID;
	desiredTime = Params.desiredTime;
	Vector = Params.Vector;


	return params.ReturnValue;
}

// Function HoudiniNiagara.HoudiniCSV.GetPointLifeAtTime
inline char UHoudiniCSV::GetPointLifeAtTime(int32_t& POINTID, float& desiredTime, float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetPointLifeAtTime");

	struct GetPointLifeAtTime_Params {
		int32_t& POINTID;
		float& desiredTime;
		float& Value;
		char ReturnValue;

	}; GetPointLifeAtTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	POINTID = Params.POINTID;
	desiredTime = Params.desiredTime;
	Value = Params.Value;


	return params.ReturnValue;
}

// Function HoudiniNiagara.HoudiniCSV.GetPointLife
inline char UHoudiniCSV::GetPointLife(int32_t& POINTID, float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetPointLife");

	struct GetPointLife_Params {
		int32_t& POINTID;
		float& Value;
		char ReturnValue;

	}; GetPointLife_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	POINTID = Params.POINTID;
	Value = Params.Value;


	return params.ReturnValue;
}

// Function HoudiniNiagara.HoudiniCSV.GetPointIDsToSpawnAtTime
inline char UHoudiniCSV::GetPointIDsToSpawnAtTime(float& desiredTime, int32_t& MinID, int32_t& MaxID, int32_t& Count, int32_t& LastSpawnedPointID, float& LastSpawnTime) {
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetPointIDsToSpawnAtTime");

	struct GetPointIDsToSpawnAtTime_Params {
		float& desiredTime;
		int32_t& MinID;
		int32_t& MaxID;
		int32_t& Count;
		int32_t& LastSpawnedPointID;
		float& LastSpawnTime;
		char ReturnValue;

	}; GetPointIDsToSpawnAtTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	desiredTime = Params.desiredTime;
	MinID = Params.MinID;
	MaxID = Params.MaxID;
	Count = Params.Count;
	LastSpawnedPointID = Params.LastSpawnedPointID;
	LastSpawnTime = Params.LastSpawnTime;


	return params.ReturnValue;
}

// Function HoudiniNiagara.HoudiniCSV.GetNumberOfRows
inline int32_t UHoudiniCSV::GetNumberOfRows() {
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetNumberOfRows");

	struct GetNumberOfRows_Params {
		
		int32_t ReturnValue;

	}; GetNumberOfRows_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function HoudiniNiagara.HoudiniCSV.GetNumberOfPoints
inline int32_t UHoudiniCSV::GetNumberOfPoints() {
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetNumberOfPoints");

	struct GetNumberOfPoints_Params {
		
		int32_t ReturnValue;

	}; GetNumberOfPoints_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function HoudiniNiagara.HoudiniCSV.GetNumberOfColumns
inline int32_t UHoudiniCSV::GetNumberOfColumns() {
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetNumberOfColumns");

	struct GetNumberOfColumns_Params {
		
		int32_t ReturnValue;

	}; GetNumberOfColumns_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function HoudiniNiagara.HoudiniCSV.GetNormalValue
inline char UHoudiniCSV::GetNormalValue(int32_t& rowIndex, struct Unknown& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetNormalValue");

	struct GetNormalValue_Params {
		int32_t& rowIndex;
		struct Unknown& Value;
		char ReturnValue;

	}; GetNormalValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	rowIndex = Params.rowIndex;
	Value = Params.Value;


	return params.ReturnValue;
}

// Function HoudiniNiagara.HoudiniCSV.GetLastRowIndexAtTime
inline char UHoudiniCSV::GetLastRowIndexAtTime(float& desiredTime, int32_t& lastRowIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetLastRowIndexAtTime");

	struct GetLastRowIndexAtTime_Params {
		float& desiredTime;
		int32_t& lastRowIndex;
		char ReturnValue;

	}; GetLastRowIndexAtTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	desiredTime = Params.desiredTime;
	lastRowIndex = Params.lastRowIndex;


	return params.ReturnValue;
}

// Function HoudiniNiagara.HoudiniCSV.GetLastPointIDToSpawnAtTime
inline char UHoudiniCSV::GetLastPointIDToSpawnAtTime(float& Time, int32_t& lastIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetLastPointIDToSpawnAtTime");

	struct GetLastPointIDToSpawnAtTime_Params {
		float& Time;
		int32_t& lastIndex;
		char ReturnValue;

	}; GetLastPointIDToSpawnAtTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Time = Params.Time;
	lastIndex = Params.lastIndex;


	return params.ReturnValue;
}

// Function HoudiniNiagara.HoudiniCSV.GetImpulseValue
inline char UHoudiniCSV::GetImpulseValue(int32_t& rowIndex, float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetImpulseValue");

	struct GetImpulseValue_Params {
		int32_t& rowIndex;
		float& Value;
		char ReturnValue;

	}; GetImpulseValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	rowIndex = Params.rowIndex;
	Value = Params.Value;


	return params.ReturnValue;
}

// Function HoudiniNiagara.HoudiniCSV.GetFloatValueForString
inline char UHoudiniCSV::GetFloatValueForString(int32_t& rowIndex, struct FString ColumnTitle, float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetFloatValueForString");

	struct GetFloatValueForString_Params {
		int32_t& rowIndex;
		struct FString ColumnTitle;
		float& Value;
		char ReturnValue;

	}; GetFloatValueForString_Params Params;

	Params.ColumnTitle = ColumnTitle;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	rowIndex = Params.rowIndex;
	Value = Params.Value;


	return params.ReturnValue;
}

// Function HoudiniNiagara.HoudiniCSV.GetFloatValue
inline char UHoudiniCSV::GetFloatValue(int32_t& rowIndex, int32_t& colIndex, float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetFloatValue");

	struct GetFloatValue_Params {
		int32_t& rowIndex;
		int32_t& colIndex;
		float& Value;
		char ReturnValue;

	}; GetFloatValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	rowIndex = Params.rowIndex;
	colIndex = Params.colIndex;
	Value = Params.Value;


	return params.ReturnValue;
}

// Function HoudiniNiagara.HoudiniCSV.GetColumnIndexFromString
inline char UHoudiniCSV::GetColumnIndexFromString(struct FString ColumnTitle, int32_t& columnIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetColumnIndexFromString");

	struct GetColumnIndexFromString_Params {
		struct FString ColumnTitle;
		int32_t& columnIndex;
		char ReturnValue;

	}; GetColumnIndexFromString_Params Params;

	Params.ColumnTitle = ColumnTitle;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	columnIndex = Params.columnIndex;


	return params.ReturnValue;
}

// Function HoudiniNiagara.HoudiniCSV.GetColorValue
inline char UHoudiniCSV::GetColorValue(int32_t& rowIndex, struct Unknown& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetColorValue");

	struct GetColorValue_Params {
		int32_t& rowIndex;
		struct Unknown& Value;
		char ReturnValue;

	}; GetColorValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	rowIndex = Params.rowIndex;
	Value = Params.Value;


	return params.ReturnValue;
}

