// Enum XlntLib.ExcelUnderlineType
enum class ExcelUnderlineType : uint8_t {
	None = 0,
	Double = 1,
	DoubleAccounting = 2,
	Single = 3,
	SingleAccounting = 4,
	ExcelUnderlineType_MAX = 5,
};

// Enum XlntLib.ExcelFillType
enum class ExcelFillType : uint8_t {
	Pattern = 0,
	Gradient = 1,
	ExcelFillType_MAX = 2,
};

// Enum XlntLib.ExcelGradientFillType
enum class ExcelGradientFillType : uint8_t {
	Linear = 0,
	Path = 1,
	ExcelGradientFillType_MAX = 2,
};

// Enum XlntLib.ExcelPatternFillType
enum class ExcelPatternFillType : uint8_t {
	None = 0,
	Solid = 1,
	Mediumgray = 2,
	Darkgray = 3,
	LightGray = 4,
	DarkHorizontal = 5,
	DarkVertical = 6,
	DarkDown = 7,
	DarkUp = 8,
	DarkGrid = 9,
	DarkTrellis = 10,
	LightHorizontal = 11,
	LightVertical = 12,
	LightDown = 13,
	LightUp = 14,
	LightGrid = 15,
	LightTrellis = 16,
	Gray125 = 17,
	Gray0625 = 18,
	ExcelPatternFillType_MAX = 19,
};

// Enum XlntLib.ExcelColorType
enum class ExcelColorType : uint8_t {
	Indexed = 0,
	Theme = 1,
	RGB = 2,
	ExcelColorType_MAX = 3,
};

// Enum XlntLib.ExcelBorderStyle
enum class ExcelBorderStyle : uint8_t {
	None = 0,
	DashDot = 1,
	DashDotDot = 2,
	Dashed = 3,
	Dotted = 4,
	Double = 5,
	Hair = 6,
	Medium = 7,
	MediumDashDot = 8,
	MediumDashDotDot = 9,
	MediumDashed = 10,
	SlantDashDot = 11,
	Thick = 12,
	Thin = 13,
	ExcelBorderStyle_MAX = 14,
};

// Enum XlntLib.ExcelBorderSideType
enum class ExcelBorderSideType : uint8_t {
	Start = 0,
	End = 1,
	Top = 2,
	Bottom = 3,
	Diagonal = 4,
	Vertical = 5,
	Horizontal = 6,
	ExcelBorderSideType_MAX = 7,
};

// Enum XlntLib.ExcelBorderDiagonalDirection
enum class ExcelBorderDiagonalDirection : uint8_t {
	None = 0,
	Up = 1,
	Down = 2,
	Both = 3,
	ExcelBorderDiagonalDirection_MAX = 4,
};

// Enum XlntLib.ExcelVerticalAlignment
enum class ExcelVerticalAlignment : uint8_t {
	Top = 0,
	Center = 1,
	Bottom = 2,
	Justify = 3,
	Distributed = 4,
	ExcelVerticalAlignment_MAX = 5,
};

// Enum XlntLib.ExcelHorizontalAlignment
enum class ExcelHorizontalAlignment : uint8_t {
	General = 0,
	Left = 1,
	Center = 2,
	Right = 3,
	Fill = 4,
	Justify = 5,
	CenterContinuous = 6,
	Distributed = 7,
	ExcelHorizontalAlignment_MAX = 8,
};

// Enum XlntLib.ExcelExtendedProperty
enum class ExcelExtendedProperty : uint8_t {
	Application = 0,
	AppVersion = 1,
	Characters = 2,
	CharactersWithWpaces = 3,
	Company = 4,
	Digsig = 5,
	DocSecurity = 6,
	HeadingPairs = 7,
	HiddenSlides = 8,
	HLinks = 9,
	HyperlinkBase = 10,
	HyperlinksChanged = 11,
	Lines = 12,
	LinksUpToDate = 13,
	Manager = 14,
	MMClips = 15,
	Notes = 16,
	Pages = 17,
	Paragraphs = 18,
	PresentationFormat = 19,
	ScaleCrop = 20,
	SharedDoc = 21,
	Slides = 22,
	Template = 23,
	TitlesOfParts = 24,
	TotalTime = 25,
	Words = 26,
	ExcelExtendedProperty_MAX = 27,
};

// Enum XlntLib.ExcelCoreProperty
enum class ExcelCoreProperty : uint8_t {
	Category = 0,
	Content_status = 1,
	Created = 2,
	Creator = 3,
	Description = 4,
	Identifier = 5,
	Keywords = 6,
	Language = 7,
	LastModifiedBy = 8,
	LastPrinted = 9,
	Modified = 10,
	Revision = 11,
	Subject = 12,
	Title = 13,
	Version = 14,
	ExcelCoreProperty_MAX = 15,
};

// Enum XlntLib.ExcelCellType
enum class ExcelCellType : uint8_t {
	Empty = 0,
	Boolean = 1,
	Date = 2,
	Error = 3,
	InlineString = 4,
	Number = 5,
	SharedString = 6,
	FormulaString = 7,
	ExcelCellType_MAX = 8,
};

// Enum XlntLib.ExcelBaseDate
enum class ExcelBaseDate : uint8_t {
	Windows1900 = 0,
	Mac1904 = 1,
	ExcelBaseDate_MAX = 2,
};

// Enum XlntLib.ExcelVariantType
enum class ExcelVariantType : uint8_t {
	None = 0,
	Bool = 1,
	Int32 = 2,
	String = 3,
	DateTime = 4,
	Array = 5,
	ExcelVariantType_MAX = 6,
};

// Enum XlntLib.ExcelSortType
enum class ExcelSortType : uint8_t {
	None = 0,
	Ascending = 1,
	Descending = 2,
	ExcelSortType_MAX = 3,
};

// Class XlntLib.ExcelWorkbook
class UExcelWorkbook : public Object {

public:

	struct TArray<Unknown> mSheets; // 0x28 (16)
	struct Unknown mActiveSheet; // 0x38 (8)

	struct FString Title(); // Function XlntLib.ExcelWorkbook.Title(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x1366FB0>
	char StopWatch(struct Unknown WorldContextObject); // Function XlntLib.ExcelWorkbook.StopWatch(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1366720>
	char StartWatch(struct Unknown WorldContextObject, struct FDelegate onChanged, char autoReload, float Rate); // Function XlntLib.ExcelWorkbook.StartWatch(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x13665A0>
	struct Unknown SheetWithTitle(struct FString Title); // Function XlntLib.ExcelWorkbook.SheetWithTitle(Final|Native|Public|BlueprintCallable|BlueprintPure) // <Game_BE.exe+0x13664A0>
	struct Unknown SheetWithId(int32_t ID); // Function XlntLib.ExcelWorkbook.SheetWithId(Final|Native|Public|BlueprintCallable|BlueprintPure) // <Game_BE.exe+0x1366410>
	struct TArray<Unknown> SheetTitles(); // Function XlntLib.ExcelWorkbook.SheetTitles(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x1366390>
	int32_t SheetCount(); // Function XlntLib.ExcelWorkbook.SheetCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x1366360>
	struct Unknown SheetAt(int32_t Index); // Function XlntLib.ExcelWorkbook.SheetAt(Final|Native|Public|BlueprintCallable|BlueprintPure) // <Game_BE.exe+0x13662D0>
	void SetTitle(struct FString Value); // Function XlntLib.ExcelWorkbook.SetTitle(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x13660F0>
	void SetExtendedPropertyValue(enum class Unknow Property, struct Unknown Value); // Function XlntLib.ExcelWorkbook.SetExtendedPropertyValue(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1365860>
	void SetCustomProperty(struct FString Name, struct Unknown Value); // Function XlntLib.ExcelWorkbook.SetCustomProperty(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1365450>
	void SetCorePropertyValue(enum class Unknow Property, struct Unknown Value); // Function XlntLib.ExcelWorkbook.SetCorePropertyValue(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1365280>
	void SetBaseDate(enum class Unknow BaseDate); // Function XlntLib.ExcelWorkbook.SetBaseDate(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1364FF0>
	void SetActiveSheetWithTitle(struct FString Title); // Function XlntLib.ExcelWorkbook.SetActiveSheetWithTitle(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1364F00>
	void SetActiveSheetAt(int32_t Index); // Function XlntLib.ExcelWorkbook.SetActiveSheetAt(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1364E80>
	void SetActiveSheet(struct Unknown sheet); // Function XlntLib.ExcelWorkbook.SetActiveSheet(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1364E00>
	char SaveAs(struct FString Path, char isAbsolutePath, char isSave); // Function XlntLib.ExcelWorkbook.SaveAs(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1364C80>
	char Save(); // Function XlntLib.ExcelWorkbook.Save(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1364C50>
	void RemoveSheet(struct Unknown sheet); // Function XlntLib.ExcelWorkbook.RemoveSheet(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1364B40>
	char Reload(); // Function XlntLib.ExcelWorkbook.Reload(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1364B10>
	char Load(struct FString fullPath); // Function XlntLib.ExcelWorkbook.Load(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1364220>
	char HasTitle(); // Function XlntLib.ExcelWorkbook.HasTitle(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x13638F0>
	char HasExtendedProperty(enum class Unknow Property); // Function XlntLib.ExcelWorkbook.HasExtendedProperty(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x1363860>
	char HasCustomProperty(struct FString Name); // Function XlntLib.ExcelWorkbook.HasCustomProperty(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x1363760>
	char HasCoreProperty(enum class Unknow Property); // Function XlntLib.ExcelWorkbook.HasCoreProperty(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x13636D0>
	struct Unknown GetExtendedPropertyValue(enum class Unknow Property); // Function XlntLib.ExcelWorkbook.GetExtendedPropertyValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x1363550>
	struct Unknown GetCustomProperty(struct FString Name); // Function XlntLib.ExcelWorkbook.GetCustomProperty(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x1363420>
	struct Unknown GetCorePropertyValue(enum class Unknow Property); // Function XlntLib.ExcelWorkbook.GetCorePropertyValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x1363360>
	struct Unknown CreateSheet(int32_t Index, char SetActive); // Function XlntLib.ExcelWorkbook.CreateSheet(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1361370>
	struct Unknown CopySheet(struct Unknown sheet, int32_t Index); // Function XlntLib.ExcelWorkbook.CopySheet(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x13612B0>
	char ContainsSheet(struct FString Title); // Function XlntLib.ExcelWorkbook.ContainsSheet(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x13611B0>
	void Clear(); // Function XlntLib.ExcelWorkbook.Clear(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1360E80>
	enum class Unknow BaseDate(); // Function XlntLib.ExcelWorkbook.BaseDate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x1360020>
	void ApplyToCells(struct Unknown WorldContextObject, struct FDelegate onCell); // Function XlntLib.ExcelWorkbook.ApplyToCells(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x135FF40>
	struct TArray<Unknown> AllSheets(); // Function XlntLib.ExcelWorkbook.AllSheets(Final|Native|Public|BlueprintCallable|BlueprintPure) // <Game_BE.exe+0x135FEB0>
	struct TArray<Unknown> AllExtendedProperties(); // Function XlntLib.ExcelWorkbook.AllExtendedProperties(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x135FDB0>
	struct TArray<Unknown> AllCustomProperties(); // Function XlntLib.ExcelWorkbook.AllCustomProperties(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x135FD30>
	struct TArray<Unknown> AllCoreProperties(); // Function XlntLib.ExcelWorkbook.AllCoreProperties(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x135FCB0>
	struct Unknown ActiveSheet(); // Function XlntLib.ExcelWorkbook.ActiveSheet(Final|Native|Public|BlueprintCallable|BlueprintPure) // <Game_BE.exe+0x135FC80>
};

// ScriptStruct XlntLib.ExcelAlignment
struct FExcelAlignment {
	char ShrinkToFit : 0; // 0x0 (1)
	char WrapText : 0; // 0x1 (1)
	int32_t Indent; // 0x4 (4)
	int32_t TextRotation; // 0x8 (4)
	enum class Unknow HorizontalAlignment; // 0xC (1)
	enum class Unknow VerticalAlignment; // 0xD (1)
};

// ScriptStruct XlntLib.ExcelBorder
struct FExcelBorder {
	struct Unknown Start; // 0x0 (36)
	struct Unknown End; // 0x24 (36)
	struct Unknown Top; // 0x48 (36)
	struct Unknown Bottom; // 0x6C (36)
	struct Unknown Horizontal; // 0x90 (36)
	struct Unknown Vertical; // 0xB4 (36)
	struct Unknown Diagonal; // 0xD8 (36)
	enum class Unknow DiagonalDirection; // 0xFC (1)
};

// ScriptStruct XlntLib.ExcelBorderSide
struct FExcelBorderSide {
	struct Unknown Color; // 0x0 (32)
	enum class Unknow Style; // 0x20 (1)
};

// ScriptStruct XlntLib.ExcelColor
struct FExcelColor {
	enum class Unknow Type; // 0x0 (1)
	int32_t ColorIndex; // 0x4 (4)
	struct Unknown ColorValue; // 0x8 (16)
	float Tint; // 0x18 (4)
	char IsAutoColor : 0; // 0x1C (1)
};

// ScriptStruct XlntLib.ExcelCellRangeReference
struct FExcelCellRangeReference {
	struct Unknown TopLeft; // 0x0 (8)
	struct Unknown BottomRight; // 0x8 (8)
};

// ScriptStruct XlntLib.ExcelCellReference
struct FExcelCellReference {
	int32_t Column; // 0x0 (4)
	int32_t Row; // 0x4 (4)
};

// ScriptStruct XlntLib.ExcelFill
struct FExcelFill {
	enum class Unknow Type; // 0x0 (1)
	struct Unknown PatternFill; // 0x4 (68)
	struct Unknown GradientFill; // 0x48 (104)
};

// ScriptStruct XlntLib.ExcelGradientFill
struct FExcelGradientFill {
	enum class Unknow Type; // 0x0 (1)
	float Degree; // 0x4 (4)
	struct Unknown Distance; // 0x8 (16)
	struct TMap<Unknown, Unknown> Stops; // 0x18 (80)
};

// ScriptStruct XlntLib.ExcelPatternFill
struct FExcelPatternFill {
	enum class Unknow Type; // 0x0 (1)
	struct Unknown ForegroundColor; // 0x4 (32)
	struct Unknown BackgroundColor; // 0x24 (32)
};

// ScriptStruct XlntLib.ExcelFont
struct FExcelFont {
	struct FString Name; // 0x0 (16)
	float Size; // 0x10 (4)
	char IsBold : 0; // 0x14 (1)
	char IsItalic : 0; // 0x15 (1)
	char IsSuperScript : 0; // 0x16 (1)
	char IsStrikeThrough : 0; // 0x17 (1)
	char IsOutline : 0; // 0x18 (1)
	char IsShadow : 0; // 0x19 (1)
	enum class Unknow UnderlineType; // 0x1A (1)
	struct Unknown Color; // 0x1C (32)
	int32_t Family; // 0x3C (4)
	int32_t Charset; // 0x40 (4)
	struct FString Scheme; // 0x48 (16)
};

// ScriptStruct XlntLib.ExcelNumberFormat
struct FExcelNumberFormat {
	int32_t ID; // 0x0 (4)
	struct FString FormatString; // 0x8 (16)
};

// ScriptStruct XlntLib.ExcelProtection
struct FExcelProtection {
	char IsLocked : 0; // 0x0 (1)
	char IsHidden : 0; // 0x1 (1)
};

// Function XlntLib.ExcelWorkbook.Title
inline struct FString UExcelWorkbook::Title() {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.Title");

	struct Title_Params {
		
		struct FString ReturnValue;

	}; Title_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function XlntLib.ExcelWorkbook.StopWatch
inline char UExcelWorkbook::StopWatch(struct Unknown WorldContextObject) {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.StopWatch");

	struct StopWatch_Params {
		struct Unknown WorldContextObject;
		char ReturnValue;

	}; StopWatch_Params Params;

	Params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function XlntLib.ExcelWorkbook.StartWatch
inline char UExcelWorkbook::StartWatch(struct Unknown WorldContextObject, struct FDelegate onChanged, char autoReload, float Rate) {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.StartWatch");

	struct StartWatch_Params {
		struct Unknown WorldContextObject;
		struct FDelegate onChanged;
		char autoReload;
		float Rate;
		char ReturnValue;

	}; StartWatch_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.onChanged = onChanged;
	Params.autoReload = autoReload;
	Params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function XlntLib.ExcelWorkbook.SheetWithTitle
inline struct Unknown UExcelWorkbook::SheetWithTitle(struct FString Title) {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.SheetWithTitle");

	struct SheetWithTitle_Params {
		struct FString Title;
		struct Unknown ReturnValue;

	}; SheetWithTitle_Params Params;

	Params.Title = Title;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function XlntLib.ExcelWorkbook.SheetWithId
inline struct Unknown UExcelWorkbook::SheetWithId(int32_t ID) {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.SheetWithId");

	struct SheetWithId_Params {
		int32_t ID;
		struct Unknown ReturnValue;

	}; SheetWithId_Params Params;

	Params.ID = ID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function XlntLib.ExcelWorkbook.SheetTitles
inline struct TArray<Unknown> UExcelWorkbook::SheetTitles() {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.SheetTitles");

	struct SheetTitles_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; SheetTitles_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function XlntLib.ExcelWorkbook.SheetCount
inline int32_t UExcelWorkbook::SheetCount() {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.SheetCount");

	struct SheetCount_Params {
		
		int32_t ReturnValue;

	}; SheetCount_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function XlntLib.ExcelWorkbook.SheetAt
inline struct Unknown UExcelWorkbook::SheetAt(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.SheetAt");

	struct SheetAt_Params {
		int32_t Index;
		struct Unknown ReturnValue;

	}; SheetAt_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function XlntLib.ExcelWorkbook.SetTitle
inline void UExcelWorkbook::SetTitle(struct FString Value) {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.SetTitle");

	struct SetTitle_Params {
		struct FString Value;
	}; SetTitle_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function XlntLib.ExcelWorkbook.SetExtendedPropertyValue
inline void UExcelWorkbook::SetExtendedPropertyValue(enum class Unknow Property, struct Unknown Value) {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.SetExtendedPropertyValue");

	struct SetExtendedPropertyValue_Params {
		enum class Unknow Property;
		struct Unknown Value;
	}; SetExtendedPropertyValue_Params Params;

	Params.Property = Property;
	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function XlntLib.ExcelWorkbook.SetCustomProperty
inline void UExcelWorkbook::SetCustomProperty(struct FString Name, struct Unknown Value) {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.SetCustomProperty");

	struct SetCustomProperty_Params {
		struct FString Name;
		struct Unknown Value;
	}; SetCustomProperty_Params Params;

	Params.Name = Name;
	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function XlntLib.ExcelWorkbook.SetCorePropertyValue
inline void UExcelWorkbook::SetCorePropertyValue(enum class Unknow Property, struct Unknown Value) {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.SetCorePropertyValue");

	struct SetCorePropertyValue_Params {
		enum class Unknow Property;
		struct Unknown Value;
	}; SetCorePropertyValue_Params Params;

	Params.Property = Property;
	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function XlntLib.ExcelWorkbook.SetBaseDate
inline void UExcelWorkbook::SetBaseDate(enum class Unknow BaseDate) {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.SetBaseDate");

	struct SetBaseDate_Params {
		enum class Unknow BaseDate;
	}; SetBaseDate_Params Params;

	Params.BaseDate = BaseDate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function XlntLib.ExcelWorkbook.SetActiveSheetWithTitle
inline void UExcelWorkbook::SetActiveSheetWithTitle(struct FString Title) {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.SetActiveSheetWithTitle");

	struct SetActiveSheetWithTitle_Params {
		struct FString Title;
	}; SetActiveSheetWithTitle_Params Params;

	Params.Title = Title;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function XlntLib.ExcelWorkbook.SetActiveSheetAt
inline void UExcelWorkbook::SetActiveSheetAt(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.SetActiveSheetAt");

	struct SetActiveSheetAt_Params {
		int32_t Index;
	}; SetActiveSheetAt_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function XlntLib.ExcelWorkbook.SetActiveSheet
inline void UExcelWorkbook::SetActiveSheet(struct Unknown sheet) {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.SetActiveSheet");

	struct SetActiveSheet_Params {
		struct Unknown sheet;
	}; SetActiveSheet_Params Params;

	Params.sheet = sheet;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function XlntLib.ExcelWorkbook.SaveAs
inline char UExcelWorkbook::SaveAs(struct FString Path, char isAbsolutePath, char isSave) {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.SaveAs");

	struct SaveAs_Params {
		struct FString Path;
		char isAbsolutePath;
		char isSave;
		char ReturnValue;

	}; SaveAs_Params Params;

	Params.Path = Path;
	Params.isAbsolutePath = isAbsolutePath;
	Params.isSave = isSave;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function XlntLib.ExcelWorkbook.Save
inline char UExcelWorkbook::Save() {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.Save");

	struct Save_Params {
		
		char ReturnValue;

	}; Save_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function XlntLib.ExcelWorkbook.RemoveSheet
inline void UExcelWorkbook::RemoveSheet(struct Unknown sheet) {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.RemoveSheet");

	struct RemoveSheet_Params {
		struct Unknown sheet;
	}; RemoveSheet_Params Params;

	Params.sheet = sheet;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function XlntLib.ExcelWorkbook.Reload
inline char UExcelWorkbook::Reload() {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.Reload");

	struct Reload_Params {
		
		char ReturnValue;

	}; Reload_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function XlntLib.ExcelWorkbook.Load
inline char UExcelWorkbook::Load(struct FString fullPath) {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.Load");

	struct Load_Params {
		struct FString fullPath;
		char ReturnValue;

	}; Load_Params Params;

	Params.fullPath = fullPath;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function XlntLib.ExcelWorkbook.HasTitle
inline char UExcelWorkbook::HasTitle() {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.HasTitle");

	struct HasTitle_Params {
		
		char ReturnValue;

	}; HasTitle_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function XlntLib.ExcelWorkbook.HasExtendedProperty
inline char UExcelWorkbook::HasExtendedProperty(enum class Unknow Property) {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.HasExtendedProperty");

	struct HasExtendedProperty_Params {
		enum class Unknow Property;
		char ReturnValue;

	}; HasExtendedProperty_Params Params;

	Params.Property = Property;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function XlntLib.ExcelWorkbook.HasCustomProperty
inline char UExcelWorkbook::HasCustomProperty(struct FString Name) {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.HasCustomProperty");

	struct HasCustomProperty_Params {
		struct FString Name;
		char ReturnValue;

	}; HasCustomProperty_Params Params;

	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function XlntLib.ExcelWorkbook.HasCoreProperty
inline char UExcelWorkbook::HasCoreProperty(enum class Unknow Property) {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.HasCoreProperty");

	struct HasCoreProperty_Params {
		enum class Unknow Property;
		char ReturnValue;

	}; HasCoreProperty_Params Params;

	Params.Property = Property;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function XlntLib.ExcelWorkbook.GetExtendedPropertyValue
inline struct Unknown UExcelWorkbook::GetExtendedPropertyValue(enum class Unknow Property) {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.GetExtendedPropertyValue");

	struct GetExtendedPropertyValue_Params {
		enum class Unknow Property;
		struct Unknown ReturnValue;

	}; GetExtendedPropertyValue_Params Params;

	Params.Property = Property;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function XlntLib.ExcelWorkbook.GetCustomProperty
inline struct Unknown UExcelWorkbook::GetCustomProperty(struct FString Name) {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.GetCustomProperty");

	struct GetCustomProperty_Params {
		struct FString Name;
		struct Unknown ReturnValue;

	}; GetCustomProperty_Params Params;

	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function XlntLib.ExcelWorkbook.GetCorePropertyValue
inline struct Unknown UExcelWorkbook::GetCorePropertyValue(enum class Unknow Property) {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.GetCorePropertyValue");

	struct GetCorePropertyValue_Params {
		enum class Unknow Property;
		struct Unknown ReturnValue;

	}; GetCorePropertyValue_Params Params;

	Params.Property = Property;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function XlntLib.ExcelWorkbook.CreateSheet
inline struct Unknown UExcelWorkbook::CreateSheet(int32_t Index, char SetActive) {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.CreateSheet");

	struct CreateSheet_Params {
		int32_t Index;
		char SetActive;
		struct Unknown ReturnValue;

	}; CreateSheet_Params Params;

	Params.Index = Index;
	Params.SetActive = SetActive;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function XlntLib.ExcelWorkbook.CopySheet
inline struct Unknown UExcelWorkbook::CopySheet(struct Unknown sheet, int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.CopySheet");

	struct CopySheet_Params {
		struct Unknown sheet;
		int32_t Index;
		struct Unknown ReturnValue;

	}; CopySheet_Params Params;

	Params.sheet = sheet;
	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function XlntLib.ExcelWorkbook.ContainsSheet
inline char UExcelWorkbook::ContainsSheet(struct FString Title) {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.ContainsSheet");

	struct ContainsSheet_Params {
		struct FString Title;
		char ReturnValue;

	}; ContainsSheet_Params Params;

	Params.Title = Title;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function XlntLib.ExcelWorkbook.Clear
inline void UExcelWorkbook::Clear() {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.Clear");

	struct Clear_Params {
		
	}; Clear_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function XlntLib.ExcelWorkbook.BaseDate
inline enum class Unknow UExcelWorkbook::BaseDate() {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.BaseDate");

	struct BaseDate_Params {
		
		enum class Unknow ReturnValue;

	}; BaseDate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function XlntLib.ExcelWorkbook.ApplyToCells
inline void UExcelWorkbook::ApplyToCells(struct Unknown WorldContextObject, struct FDelegate onCell) {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.ApplyToCells");

	struct ApplyToCells_Params {
		struct Unknown WorldContextObject;
		struct FDelegate onCell;
	}; ApplyToCells_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.onCell = onCell;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function XlntLib.ExcelWorkbook.AllSheets
inline struct TArray<Unknown> UExcelWorkbook::AllSheets() {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.AllSheets");

	struct AllSheets_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; AllSheets_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function XlntLib.ExcelWorkbook.AllExtendedProperties
inline struct TArray<Unknown> UExcelWorkbook::AllExtendedProperties() {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.AllExtendedProperties");

	struct AllExtendedProperties_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; AllExtendedProperties_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function XlntLib.ExcelWorkbook.AllCustomProperties
inline struct TArray<Unknown> UExcelWorkbook::AllCustomProperties() {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.AllCustomProperties");

	struct AllCustomProperties_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; AllCustomProperties_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function XlntLib.ExcelWorkbook.AllCoreProperties
inline struct TArray<Unknown> UExcelWorkbook::AllCoreProperties() {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.AllCoreProperties");

	struct AllCoreProperties_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; AllCoreProperties_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function XlntLib.ExcelWorkbook.ActiveSheet
inline struct Unknown UExcelWorkbook::ActiveSheet() {
	static auto fn = UObject::FindObject<UFunction>("Function XlntLib.ExcelWorkbook.ActiveSheet");

	struct ActiveSheet_Params {
		
		struct Unknown ReturnValue;

	}; ActiveSheet_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

