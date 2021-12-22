// Enum GameplayTags.EGameplayTagQueryExprType
enum class EGameplayTagQueryExprType : uint8 {
	EGameplayTagQueryExprType = 0,
	EGameplayTagQueryExprType = 1,
	EGameplayTagQueryExprType = 2,
	EGameplayTagQueryExprType = 3,
	EGameplayTagQueryExprType = 4,
	EGameplayTagQueryExprType = 5,
	EGameplayTagQueryExprType = 6,
	EGameplayTagQueryExprType = 7
};

// Enum GameplayTags.EGameplayContainerMatchType
enum class EGameplayContainerMatchType : uint8 {
	EGameplayContainerMatchType = 0,
	EGameplayContainerMatchType = 1,
	EGameplayContainerMatchType = 2
};

// Enum GameplayTags.EGameplayTagMatchType
enum class EGameplayTagMatchType : uint8 {
	EGameplayTagMatchType = 0,
	EGameplayTagMatchType = 1,
	EGameplayTagMatchType = 2
};

// Enum GameplayTags.EGameplayTagSelectionType
enum class EGameplayTagSelectionType : uint8 {
	EGameplayTagSelectionType = 0,
	EGameplayTagSelectionType = 1,
	EGameplayTagSelectionType = 2,
	EGameplayTagSelectionType = 3,
	EGameplayTagSelectionType = 4
};

// Enum GameplayTags.EGameplayTagSourceType
enum class EGameplayTagSourceType : uint8 {
	EGameplayTagSourceType = 0,
	EGameplayTagSourceType = 1,
	EGameplayTagSourceType = 2,
	EGameplayTagSourceType = 3,
	EGameplayTagSourceType = 4,
	EGameplayTagSourceType = 5,
	EGameplayTagSourceType = 6
};

// Class GameplayTags.EditableGameplayTagQuery
struct UEditableGameplayTagQuery : Object {
	struct FString User; //  0x28 Size(10)
	struct Unknown RootExpression; //  0x48 Size(8)
	struct Unknown TagQueryExportText_Helper; //  0x50 Size(48)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
struct UEditableGameplayTagQueryExpression_AnyTagsMatch : UEditableGameplayTagQueryExpression {
	struct Unknown Tags; //  0x28 Size(20)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
struct UEditableGameplayTagQueryExpression_AllTagsMatch : UEditableGameplayTagQueryExpression {
	struct Unknown Tags; //  0x28 Size(20)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
struct UEditableGameplayTagQueryExpression_NoTagsMatch : UEditableGameplayTagQueryExpression {
	struct Unknown Tags; //  0x28 Size(20)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
struct UEditableGameplayTagQueryExpression_AnyExprMatch : UEditableGameplayTagQueryExpression {
	struct TArray<Unknown> Expressions; //  0x28 Size(10)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
struct UEditableGameplayTagQueryExpression_AllExprMatch : UEditableGameplayTagQueryExpression {
	struct TArray<Unknown> Expressions; //  0x28 Size(10)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
struct UEditableGameplayTagQueryExpression_NoExprMatch : UEditableGameplayTagQueryExpression {
	struct TArray<Unknown> Expressions; //  0x28 Size(10)
};

// Class GameplayTags.GameplayTagsManager
struct UGameplayTagsManager : Object {
	struct TArray<Unknown> TagSources; //  0xc0 Size(10)
	struct TArray<Unknown> GameplayTagTables; //  0x1b0 Size(10)
};

// Class GameplayTags.GameplayTagsList
struct UGameplayTagsList : Object {
	struct FString ConfigFileName; //  0x28 Size(10)
	struct TArray<Unknown> GameplayTagList; //  0x38 Size(10)
};

// Class GameplayTags.RestrictedGameplayTagsList
struct URestrictedGameplayTagsList : Object {
	struct FString ConfigFileName; //  0x28 Size(10)
	struct TArray<Unknown> RestrictedGameplayTagList; //  0x38 Size(10)
};

// Class GameplayTags.GameplayTagsSettings
struct UGameplayTagsSettings : UGameplayTagsList {
	char ImportTagsFromConfig; //  0x48 Size(1)
	char WarnOnInvalidTags; //  0x49 Size(1)
	char FastReplication; //  0x4a Size(1)
	struct FString InvalidTagCharacters; //  0x50 Size(10)
	struct TArray<Unknown> CategoryRemapping; //  0x60 Size(10)
	struct TArray<Unknown> GameplayTagTableList; //  0x70 Size(10)
	struct TArray<Unknown> GameplayTagRedirects; //  0x80 Size(10)
	struct TArray<Unknown> CommonlyReplicatedTags; //  0x90 Size(10)
	int32_t NumBitsForContainerSize; //  0xa0 Size(4)
	int32_t NetIndexFirstBitSegment; //  0xa4 Size(4)
	struct TArray<Unknown> RestrictedConfigFiles; //  0xa8 Size(10)
};

// Class GameplayTags.GameplayTags
struct UGameplayTags : Object {
	struct FString DeveloperConfigName; //  0x28 Size(10)
};

