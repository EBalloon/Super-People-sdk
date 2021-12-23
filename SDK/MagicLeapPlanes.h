// Enum MagicLeapPlanes.EMagicLeapPlaneQueryFlags
enum class EMagicLeapPlaneQueryFlags : uint8 {
	EMagicLeapPlaneQueryFlags = 0
	EMagicLeapPlaneQueryFlags = 1
	EMagicLeapPlaneQueryFlags = 2
	EMagicLeapPlaneQueryFlags = 3
	EMagicLeapPlaneQueryFlags = 4
	EMagicLeapPlaneQueryFlags = 5
	EMagicLeapPlaneQueryFlags = 6
	EMagicLeapPlaneQueryFlags = 7
	EMagicLeapPlaneQueryFlags = 8
	EMagicLeapPlaneQueryFlags = 9
};

// Enum MagicLeapPlanes.EMagicLeapPlaneQueryType
enum class EMagicLeapPlaneQueryType : uint8 {
	EMagicLeapPlaneQueryType = 0
	EMagicLeapPlaneQueryType = 1
	EMagicLeapPlaneQueryType = 2
};

// Class MagicLeapPlanes.MagicLeapPlanesComponent
struct UMagicLeapPlanesComponent : USceneComponent {
	struct TArray<Unknown> QueryFlags; // 0x238 (16)
	struct Unknown SearchVolume; // 0x248 (8)
	int32_t MaxResults; // 0x250 (4)
	float MinHolePerimeter; // 0x254 (4)
	float MinPlaneArea; // 0x258 (4)
	enum class Unknow QueryType; // 0x25C (1)
	float SimilarityThreshold; // 0x260 (4)
	struct FMulticastInlineDelegate OnPlanesQueryResult; // 0x268 (16)
	struct FMulticastInlineDelegate OnPersistentPlanesQueryResult; // 0x278 (16)

	char RequestPlanesAsync(); // Function MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17EF500>
};

