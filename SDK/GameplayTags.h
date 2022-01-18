// Enum GameplayTags.EGameplayTagQueryExprType
enum class EGameplayTagQueryExprType : uint8_t {
	Undefined = 0,
	AnyTagsMatch = 1,
	AllTagsMatch = 2,
	NoTagsMatch = 3,
	AnyExprMatch = 4,
	AllExprMatch = 5,
	NoExprMatch = 6,
	EGameplayTagQueryExprType_MAX = 7,
};

// Enum GameplayTags.EGameplayContainerMatchType
enum class EGameplayContainerMatchType : uint8_t {
	Any = 0,
	All = 1,
	EGameplayContainerMatchType_MAX = 2,
};

// Enum GameplayTags.EGameplayTagMatchType
enum class EGameplayTagMatchType : uint8_t {
	Explicit = 0,
	IncludeParentTags = 1,
	EGameplayTagMatchType_MAX = 2,
};

// Enum GameplayTags.EGameplayTagSelectionType
enum class EGameplayTagSelectionType : uint8_t {
	None = 0,
	NonRestrictedOnly = 1,
	RestrictedOnly = 2,
	All = 3,
	EGameplayTagSelectionType_MAX = 4,
};

// Enum GameplayTags.EGameplayTagSourceType
enum class EGameplayTagSourceType : uint8_t {
	Native = 0,
	DefaultTagList = 1,
	TagList = 2,
	RestrictedTagList = 3,
	DataTable = 4,
	Invalid = 5,
	EGameplayTagSourceType_MAX = 6,
};

// Class GameplayTags.EditableGameplayTagQuery
class UEditableGameplayTagQuery : public Object {

public:

	struct FString UserDescription; // 0x28 (16)
	struct UEditableGameplayTagQueryExpression RootExpression; // 0x48 (8)
	struct FGameplayTagQuery TagQueryExportText_Helper; // 0x50 (72)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression {

public:

	struct FGameplayTagContainer Tags; // 0x28 (32)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression {

public:

	struct FGameplayTagContainer Tags; // 0x28 (32)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression {

public:

	struct FGameplayTagContainer Tags; // 0x28 (32)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression {

public:

	struct TArray<struct UEditableGameplayTagQueryExpression> Expressions; // 0x28 (16)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression {

public:

	struct TArray<struct UEditableGameplayTagQueryExpression> Expressions; // 0x28 (16)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression {

public:

	struct TArray<struct UEditableGameplayTagQueryExpression> Expressions; // 0x28 (16)
};

// Class GameplayTags.GameplayTagsManager
class UGameplayTagsManager : public Object {

public:

	struct TArray<struct FGameplayTagSource> TagSources; // 0xC0 (16)
	struct TArray<struct UDataTable> GameplayTagTables; // 0x1B0 (16)
};

// Class GameplayTags.GameplayTagsList
class UGameplayTagsList : public Object {

public:

	struct FString ConfigFileName; // 0x28 (16)
	struct TArray<struct FGameplayTagTableRow> GameplayTagList; // 0x38 (16)
};

// Class GameplayTags.RestrictedGameplayTagsList
class URestrictedGameplayTagsList : public Object {

public:

	struct FString ConfigFileName; // 0x28 (16)
	struct TArray<struct FRestrictedGameplayTagTableRow> RestrictedGameplayTagList; // 0x38 (16)
};

// Class GameplayTags.GameplayTagsSettings
class UGameplayTagsSettings : public UGameplayTagsList {

public:

	char ImportTagsFromConfig : 0; // 0x48 (1)
	char WarnOnInvalidTags : 0; // 0x49 (1)
	char FastReplication : 0; // 0x4A (1)
	struct FString InvalidTagCharacters; // 0x50 (16)
	struct TArray<struct FGameplayTagCategoryRemap> CategoryRemapping; // 0x60 (16)
	struct TArray<struct FSoftObjectPath> GameplayTagTableList; // 0x70 (16)
	struct TArray<struct FGameplayTagRedirect> GameplayTagRedirects; // 0x80 (16)
	struct TArray<struct FName> CommonlyReplicatedTags; // 0x90 (16)
	int32_t NumBitsForContainerSize; // 0xA0 (4)
	int32_t NetIndexFirstBitSegment; // 0xA4 (4)
	struct TArray<struct FRestrictedConfigInfo> RestrictedConfigFiles; // 0xA8 (16)
};

// Class GameplayTags.GameplayTagsDeveloperSettings
class UGameplayTagsDeveloperSettings : public Object {

public:

	struct FString DeveloperConfigName; // 0x28 (16)
};

// ScriptStruct GameplayTags.GameplayTagQuery
struct FGameplayTagQuery {
	int32_t TokenStreamVersion; // 0x0 (4)
	struct TArray<struct FGameplayTag> TagDictionary; // 0x8 (16)
	struct TArray<char> QueryTokenStream; // 0x18 (16)
	struct FString UserDescription; // 0x28 (16)
	struct FString AutoDescription; // 0x38 (16)
};

// ScriptStruct GameplayTags.GameplayTag
struct FGameplayTag {
	struct FName TagName; // 0x0 (8)
};

// ScriptStruct GameplayTags.GameplayTagContainer
struct FGameplayTagContainer {
	struct TArray<struct FGameplayTag> GameplayTags; // 0x0 (16)
	struct TArray<struct FGameplayTag> ParentTags; // 0x10 (16)
};

// ScriptStruct GameplayTags.GameplayTagSource
struct FGameplayTagSource {
	struct FName SourceName; // 0x0 (8)
	enum class EGameplayTagSourceType SourceType; // 0x8 (1)
	struct UGameplayTagsList SourceTagList; // 0x10 (8)
	struct URestrictedGameplayTagsList SourceRestrictedTagList; // 0x18 (8)
};

// ScriptStruct GameplayTags.GameplayTagTableRow
struct FGameplayTagTableRow : FTableRowBase {
	struct FName Tag; // 0x8 (8)
	struct FString DevComment; // 0x10 (16)
};

// ScriptStruct GameplayTags.RestrictedGameplayTagTableRow
struct FRestrictedGameplayTagTableRow : FGameplayTagTableRow {
	char bAllowNonRestrictedChildren : 0; // 0x20 (1)
};

// ScriptStruct GameplayTags.RestrictedConfigInfo
struct FRestrictedConfigInfo {
	struct FString RestrictedConfigName; // 0x0 (16)
	struct TArray<struct FString> Owners; // 0x10 (16)
};

// ScriptStruct GameplayTags.GameplayTagCategoryRemap
struct FGameplayTagCategoryRemap {
	struct FString BaseCategory; // 0x0 (16)
	struct TArray<struct FString> RemapCategories; // 0x10 (16)
};

// ScriptStruct GameplayTags.GameplayTagRedirect
struct FGameplayTagRedirect {
	struct FName OldTagName; // 0x0 (8)
	struct FName NewTagName; // 0x8 (8)
};

