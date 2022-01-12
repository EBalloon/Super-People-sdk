// Enum RMAFoliageTools.ERMAFoliageToolsIncludeMode
enum class ERMAFoliageToolsIncludeMode : uint8_t {
	RMAIM_All = 0,
	RMAIM_Selection = 1,
	RMAIM_MAX = 2,
};

// ScriptStruct RMAFoliageTools.RMAFoliageToolsBuffer
struct FRMAFoliageToolsBuffer {
	struct TArray<struct FTransform> Transform; // 0x0 (16)
	struct TArray<struct UStaticMesh> Mesh; // 0x10 (16)
};

