// Enum MeshDescription.EComputeNTBsOptions
enum class EComputeNTBsOptions : uint8_t {
	None = 0,
	Normals = 1,
	Tangents = 2,
	WeightedNTBs = 4,
	EComputeNTBsOptions_MAX = 5,
};

// ScriptStruct MeshDescription.ElementID
struct FElementID {
	int32_t IDValue; // 0x0 (4)
};

