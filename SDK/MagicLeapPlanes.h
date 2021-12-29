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

	struct TArray<Unknown> QueryFlags; // 0x238 (16)
	struct Unknown SearchVolume; // 0x248 (8)
	int32_t MaxResults; // 0x250 (4)
	float MinHolePerimeter; // 0x254 (4)
	float MinPlaneArea; // 0x258 (4)
	enum class Unknow QueryType; // 0x25C (1)
	float SimilarityThreshold; // 0x260 (4)
	struct FMulticastInlineDelegate OnPlanesQueryResult; // 0x268 (16)
	struct FMulticastInlineDelegate OnPersistentPlanesQueryResult; // 0x278 (16)

	char RequestPlanesAsync(); // Function MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18014B0>
};

// ScriptStruct MagicLeapPlanes.MagicLeapPlaneBoundaries
struct FMagicLeapPlaneBoundaries {
	struct Unknown ID; // 0x0 (16)
	struct TArray<Unknown> Boundaries; // 0x10 (16)
};

// ScriptStruct MagicLeapPlanes.MagicLeapPlaneBoundary
struct FMagicLeapPlaneBoundary {
	struct Unknown Polygon; // 0x0 (16)
	struct TArray<Unknown> Holes; // 0x10 (16)
};

// ScriptStruct MagicLeapPlanes.MagicLeapPolygon
struct FMagicLeapPolygon {
	struct TArray<Unknown> Vertices; // 0x0 (16)
};

// ScriptStruct MagicLeapPlanes.MagicLeapPlaneResult
struct FMagicLeapPlaneResult {
	struct Unknown PlanePosition; // 0x0 (12)
	struct Unknown PlaneOrientation; // 0xC (12)
	struct Unknown ContentOrientation; // 0x18 (12)
	struct Unknown PlaneDimensions; // 0x24 (8)
	struct TArray<Unknown> PlaneFlags; // 0x30 (16)
	struct Unknown ID; // 0x40 (16)
	struct Unknown InnerID; // 0x50 (16)
};

// ScriptStruct MagicLeapPlanes.MagicLeapPlanesQuery
struct FMagicLeapPlanesQuery {
	struct TArray<Unknown> Flags; // 0x0 (16)
	struct Unknown SearchVolume; // 0x10 (8)
	int32_t MaxResults; // 0x18 (4)
	float MinHoleLength; // 0x1C (4)
	float MinPlaneArea; // 0x20 (4)
	struct Unknown SearchVolumePosition; // 0x24 (12)
	struct Unknown SearchVolumeOrientation; // 0x30 (16)
	struct Unknown SearchVolumeExtents; // 0x40 (12)
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

