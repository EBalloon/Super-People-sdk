// Enum MagicLeapPlanes.EMagicLeapPlaneQueryFlags
enum class EMagicLeapPlaneQueryFlags : uint8_t {
	Vertical = 0,
	Horizontal = 1,
	Arbitrary = 2,
	OrientToGravity = 3,
	PreferInner = 4,
	Ceiling = 5,
	Floor = 6,
	Wall = 7,
	Polygons = 8,
	EMagicLeapPlaneQueryFlags_MAX = 9,
};

// Enum MagicLeapPlanes.EMagicLeapPlaneQueryType
enum class EMagicLeapPlaneQueryType : uint8_t {
	Bulk = 0,
	Delta = 1,
	EMagicLeapPlaneQueryType_MAX = 2,
};

// Class MagicLeapPlanes.MagicLeapPlanesComponent
class UMagicLeapPlanesComponent : public USceneComponent {

public:

	struct TArray<enum class EMagicLeapPlaneQueryFlags> QueryFlags; // 0x230 (16)
	struct UBoxComponent SearchVolume; // 0x240 (8)
	int32_t MaxResults; // 0x248 (4)
	float MinHolePerimeter; // 0x24C (4)
	float MinPlaneArea; // 0x250 (4)
	enum class EMagicLeapPlaneQueryType QueryType; // 0x254 (1)
	float SimilarityThreshold; // 0x258 (4)
	struct FMulticastInlineDelegate OnPlanesQueryResult; // 0x260 (16)
	struct FMulticastInlineDelegate OnPersistentPlanesQueryResult; // 0x270 (16)

	char RequestPlanesAsync(); // Function MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1806890>
};

// ScriptStruct MagicLeapPlanes.MagicLeapPlaneBoundaries
struct FMagicLeapPlaneBoundaries {
	struct FGuid ID; // 0x0 (16)
	struct TArray<struct FMagicLeapPlaneBoundary> Boundaries; // 0x10 (16)
};

// ScriptStruct MagicLeapPlanes.MagicLeapPlaneBoundary
struct FMagicLeapPlaneBoundary {
	struct FMagicLeapPolygon Polygon; // 0x0 (16)
	struct TArray<struct FMagicLeapPolygon> Holes; // 0x10 (16)
};

// ScriptStruct MagicLeapPlanes.MagicLeapPolygon
struct FMagicLeapPolygon {
	struct TArray<struct FVector> Vertices; // 0x0 (16)
};

// ScriptStruct MagicLeapPlanes.MagicLeapPlaneResult
struct FMagicLeapPlaneResult {
	struct FVector PlanePosition; // 0x0 (12)
	struct FRotator PlaneOrientation; // 0xC (12)
	struct FRotator ContentOrientation; // 0x18 (12)
	struct FVector2D PlaneDimensions; // 0x24 (8)
	struct TArray<enum class EMagicLeapPlaneQueryFlags> PlaneFlags; // 0x30 (16)
	struct FGuid ID; // 0x40 (16)
	struct FGuid InnerID; // 0x50 (16)
};

// ScriptStruct MagicLeapPlanes.MagicLeapPlanesQuery
struct FMagicLeapPlanesQuery {
	struct TArray<enum class EMagicLeapPlaneQueryFlags> Flags; // 0x0 (16)
	struct UBoxComponent SearchVolume; // 0x10 (8)
	int32_t MaxResults; // 0x18 (4)
	float MinHoleLength; // 0x1C (4)
	float MinPlaneArea; // 0x20 (4)
	struct FVector SearchVolumePosition; // 0x24 (12)
	struct FQuat SearchVolumeOrientation; // 0x30 (16)
	struct FVector SearchVolumeExtents; // 0x40 (12)
	float SimilarityThreshold; // 0x4C (4)
	char bSearchVolumeTrackingSpace : 0; // 0x50 (1)
	char bResultTrackingSpace : 0; // 0x51 (1)
};

// Function MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync
inline char UMagicLeapPlanesComponent::RequestPlanesAsync() {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync");

	struct RequestPlanesAsync_Params {
		
		char ReturnValue;

	}; RequestPlanesAsync_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

