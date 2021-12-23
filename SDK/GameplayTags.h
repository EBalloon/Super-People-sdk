// Enum GameplayTags.EGameplayTagQueryExprType
enum class EGameplayTagQueryExprType : uint8 {
	EGameplayTagQueryExprType = 0
	EGameplayTagQueryExprType = 1
	EGameplayTagQueryExprType = 2
	EGameplayTagQueryExprType = 3
	EGameplayTagQueryExprType = 4
	EGameplayTagQueryExprType = 5
	EGameplayTagQueryExprType = 6
	EGameplayTagQueryExprType = 7
};

// Enum GameplayTags.EGameplayContainerMatchType
enum class EGameplayContainerMatchType : uint8 {
	EGameplayContainerMatchType = 0
	EGameplayContainerMatchType = 1
	EGameplayContainerMatchType = 2
};

// Enum GameplayTags.EGameplayTagMatchType
enum class EGameplayTagMatchType : uint8 {
	EGameplayTagMatchType = 0
	EGameplayTagMatchType = 1
	EGameplayTagMatchType = 2
};

// Enum GameplayTags.EGameplayTagSelectionType
enum class EGameplayTagSelectionType : uint8 {
	EGameplayTagSelectionType = 0
	EGameplayTagSelectionType = 1
	EGameplayTagSelectionType = 2
	EGameplayTagSelectionType = 3
	EGameplayTagSelectionType = 4
};

// Enum GameplayTags.EGameplayTagSourceType
enum class EGameplayTagSourceType : uint8 {
	EGameplayTagSourceType = 0
	EGameplayTagSourceType = 1
	EGameplayTagSourceType = 2
	EGameplayTagSourceType = 3
	EGameplayTagSourceType = 4
	EGameplayTagSourceType = 5
	EGameplayTagSourceType = 6
};

// Class GameplayTags.EditableGameplayTagQuery
struct UEditableGameplayTagQuery : Object {
	struct FString UserDescription; // 0x28 (16)
	struct Unknown RootExpression; // 0x48 (8)
	struct Unknown TagQueryExportText_Helper; // 0x50 (72)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
struct UEditableGameplayTagQueryExpression_AnyTagsMatch : UEditableGameplayTagQueryExpression {
	struct Unknown Tags; // 0x28 (32)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
struct UEditableGameplayTagQueryExpression_AllTagsMatch : UEditableGameplayTagQueryExpression {
	struct Unknown Tags; // 0x28 (32)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
struct UEditableGameplayTagQueryExpression_NoTagsMatch : UEditableGameplayTagQueryExpression {
	struct Unknown Tags; // 0x28 (32)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
struct UEditableGameplayTagQueryExpression_AnyExprMatch : UEditableGameplayTagQueryExpression {
	struct TArray<Unknown> Expressions; // 0x28 (16)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
struct UEditableGameplayTagQueryExpression_AllExprMatch : UEditableGameplayTagQueryExpression {
	struct TArray<Unknown> Expressions; // 0x28 (16)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
struct UEditableGameplayTagQueryExpression_NoExprMatch : UEditableGameplayTagQueryExpression {
	struct TArray<Unknown> Expressions; // 0x28 (16)
};

// Class GameplayTags.GameplayTagsManager
struct UGameplayTagsManager : Object {
	struct TArray<Unknown> TagSources; // 0xC0 (16)
	struct TArray<Unknown> GameplayTagTables; // 0x1B0 (16)
};

// Class GameplayTags.GameplayTagsList
struct UGameplayTagsList : Object {
	struct FString ConfigFileName; // 0x28 (16)
	struct TArray<Unknown> GameplayTagList; // 0x38 (16)
};

// Class GameplayTags.RestrictedGameplayTagsList
struct URestrictedGameplayTagsList : Object {
	struct FString ConfigFileName; // 0x28 (16)
	struct TArray<Unknown> RestrictedGameplayTagList; // 0x38 (16)
};

// Class GameplayTags.GameplayTagsSettings
struct UGameplayTagsSettings : UGameplayTagsList {
	char ImportTagsFromConfig : 0; // 0x48 (1)
	char WarnOnInvalidTags : 0; // 0x49 (1)
	char FastReplication : 0; // 0x4A (1)
	struct FString InvalidTagCharacters; // 0x50 (16)
	struct TArray<Unknown> CategoryRemapping; // 0x60 (16)
	struct TArray<Unknown> GameplayTagTableList; // 0x70 (16)
	struct TArray<Unknown> GameplayTagRedirects; // 0x80 (16)
	struct TArray<Unknown> CommonlyReplicatedTags; // 0x90 (16)
	int32_t NumBitsForContainerSize; // 0xA0 (4)
	int32_t NetIndexFirstBitSegment; // 0xA4 (4)
	struct TArray<Unknown> RestrictedConfigFiles; // 0xA8 (16)
};

// Class GameplayTags.GameplayTagsDeveloperSettings
struct UGameplayTagsDeveloperSettings : Object {
	struct FString DeveloperConfigName; // 0x28 (16)
};

