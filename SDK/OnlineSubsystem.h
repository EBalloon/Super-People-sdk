// Enum OnlineSubsystem.EInAppPurchaseState
enum class EInAppPurchaseState : uint8_t {
	EInAppPurchaseState = 0,
	EInAppPurchaseState = 1,
	EInAppPurchaseState = 2,
	EInAppPurchaseState = 3,
	EInAppPurchaseState = 4,
	EInAppPurchaseState = 5,
	EInAppPurchaseState = 6,
	EInAppPurchaseState = 7,
	EInAppPurchaseState = 8,
};

// Enum OnlineSubsystem.EMPMatchOutcome
enum class EMPMatchOutcome : uint8_t {
	EMPMatchOutcome = 0,
	EMPMatchOutcome = 1,
	EMPMatchOutcome = 2,
	EMPMatchOutcome = 3,
	EMPMatchOutcome = 4,
	EMPMatchOutcome = 5,
	EMPMatchOutcome = 6,
	EMPMatchOutcome = 7,
	EMPMatchOutcome = 8,
	EMPMatchOutcome = 9,
	EMPMatchOutcome = 10,
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

