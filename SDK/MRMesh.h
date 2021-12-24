// Enum MRMesh.EMeshTrackerVertexColorMode
enum class EMeshTrackerVertexColorMode : uint8_t {
	EMeshTrackerVertexColorMode = 0,
	EMeshTrackerVertexColorMode = 1,
	EMeshTrackerVertexColorMode = 2,
	EMeshTrackerVertexColorMode = 3,
};

// Class MRMesh.MockDataMeshTrackerComponent
class UMockDataMeshTrackerComponent : public USceneComponent {

public:

	struct FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x238 (16)
	char ScanWorld : 0; // 0x248 (1)
	char RequestNormals : 0; // 0x249 (1)
	char RequestVertexConfidence : 0; // 0x24A (1)
	enum class Unknow VertexColorMode; // 0x24B (1)
	struct TArray<Unknown> BlockVertexColors; // 0x250 (16)
	struct Unknown VertexColorFromConfidenceZero; // 0x260 (16)
	struct Unknown VertexColorFromConfidenceOne; // 0x270 (16)
	float UpdateInterval; // 0x280 (4)
	struct Unknown MRMesh; // 0x288 (8)

	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<Unknown>& Vertices, struct TArray<Unknown>& Triangles, struct TArray<Unknown>& Normals, struct TArray<Unknown>& Confidence); // DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DisconnectMRMesh(struct Unknown InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2EE2D50>
	void ConnectMRMesh(struct Unknown InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2EE2CB0>
};

// Class MRMesh.MRMeshComponent
class UMRMeshComponent : public UPrimitiveComponent {

public:

	struct Unknown Material; // 0x4C0 (8)
	char bCreateMeshProxySections : 0; // 0x4C8 (1)
	char bUpdateNavMeshOnMeshUpdate : 0; // 0x4C9 (1)
	char bNeverCreateCollisionMesh : 0; // 0x4CA (1)
	struct Unknown CachedBodySetup; // 0x4D0 (8)
	struct TArray<Unknown> BodySetups; // 0x4D8 (16)
	struct Unknown WireframeMaterial; // 0x4E8 (8)

	char IsConnected(); // Function MRMesh.MRMeshComponent.IsConnected(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2EE2DF0>
	void ForceNavMeshUpdate(); // Function MRMesh.MRMeshComponent.ForceNavMeshUpdate(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2EE2DD0>
	void Clear(); // Function MRMesh.MRMeshComponent.Clear(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2EE2BF0>
};

