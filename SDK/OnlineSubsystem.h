// Enum OnlineSubsystem.EInAppPurchaseState
enum class EInAppPurchaseState : uint8_t {
	Unknown = 0,
	Success = 1,
	Failed = 2,
	Cancelled = 3,
	Invalid = 4,
	NotAllowed = 5,
	Restored = 6,
	AlreadyOwned = 7,
	EInAppPurchaseState_MAX = 8,
};

// Enum OnlineSubsystem.EMPMatchOutcome
enum class EMPMatchOutcome : uint8_t {
	None = 0,
	Quit = 1,
	Won = 2,
	Lost = 3,
	Tied = 4,
	TimeExpired = 5,
	First = 6,
	Second = 7,
	Third = 8,
	Fourth = 9,
	EMPMatchOutcome_MAX = 10,
};

// Class OnlineSubsystem.NamedInterfaces
class UNamedInterfaces : public Object {

public:

	struct TArray<Unknown> NamedInterfaces; // 0x28 (16)
	struct TArray<Unknown> NamedInterfaceDefs; // 0x38 (16)
};

// ScriptStruct OnlineSubsystem.InAppPurchaseProductInfo
struct FInAppPurchaseProductInfo {
	struct FString Identifier; // 0x0 (16)
	struct FString TransactionIdentifier; // 0x10 (16)
	struct FString DisplayName; // 0x20 (16)
	struct FString DisplayDescription; // 0x30 (16)
	struct FString DisplayPrice; // 0x40 (16)
	float RawPrice; // 0x50 (4)
	struct FString CurrencyCode; // 0x58 (16)
	struct FString CurrencySymbol; // 0x68 (16)
	struct FString DecimalSeparator; // 0x78 (16)
	struct FString GroupingSeparator; // 0x88 (16)
	struct FString ReceiptData; // 0x98 (16)
};

// ScriptStruct OnlineSubsystem.InAppPurchaseRestoreInfo
struct FInAppPurchaseRestoreInfo {
	struct FString Identifier; // 0x0 (16)
	struct FString ReceiptData; // 0x10 (16)
	struct FString TransactionIdentifier; // 0x20 (16)
};

// ScriptStruct OnlineSubsystem.NamedInterfaceDef
struct FNamedInterfaceDef {
	struct FName InterfaceName; // 0x0 (8)
	struct FString InterfaceClassName; // 0x8 (16)
};

// ScriptStruct OnlineSubsystem.NamedInterface
struct FNamedInterface {
	struct FName InterfaceName; // 0x0 (8)
	struct Unknown InterfaceObject; // 0x8 (8)
};

// ScriptStruct OnlineSubsystem.InAppPurchaseProductRequest
struct FInAppPurchaseProductRequest {
	struct FString ProductIdentifier; // 0x0 (16)
	char bIsConsumable : 0; // 0x10 (1)
};

