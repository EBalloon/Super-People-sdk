// Enum MRMesh.EMeshTrackerVertexColorMode
enum class EMeshTrackerVertexColorMode : uint8 {
	EMeshTrackerVertexColorMode = 0
	EMeshTrackerVertexColorMode = 1
	EMeshTrackerVertexColorMode = 2
	EMeshTrackerVertexColorMode = 3
};

// Class MRMesh.MockDataMeshTrackerComponent
struct UMockDataMeshTrackerComponent : USceneComponent {
	struct FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x238 (16)
	char ScanWorld : 0; // 0x248 (1)
	char RequestNormals : 0; // 0x249 (1)
	char RequestVertexConfidence : 0; // 0x24A (1)
	enum class Unknow VertexColorMode; // 0x24B (1)
	struct TArray<Unknown> BlockVertexColors; // 0x250 (16)
	struct Unknown VertexColorFromConfidenceZero; // 0x260 (16)
	struct Unknown VertexColorFromConfidenceOne; // 0x270 (16)
	float UpdateInterval; // 0x280 (4)
	struct Unknown M; // 0x288 (8)

	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<Unknown>& Vertices, struct TArray<Unknown>& Triangles, struct TArray<Unknown>& Normals, struct TArray<Unknown>& Confidence); // DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void DisconnectMRMesh(struct Unknown InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2EE1A40>
	void ConnectMRMesh(struct Unknown InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2EE19A0>
};

// Class MRMesh.M
struct UM : UPrimitiveComponent {
	struct Unknown Material; // 0x4C0 (8)
	char bCreateMeshProxySections : 0; // 0x4C8 (1)
	char bUpdateNavMeshOnMeshUpdate : 0; // 0x4C9 (1)
	char bNeverCreateCollisionMesh : 0; // 0x4CA (1)
	struct Unknown CachedBodySetup; // 0x4D0 (8)
	struct TArray<Unknown> BodySetups; // 0x4D8 (16)
	struct Unknown WireframeMaterial; // 0x4E8 (8)

	char IsConnected(); // Function MRMesh.M.IsConnected(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2EE1AE0>
	void ForceNavMeshUpdate(); // Function MRMesh.M.ForceNavMeshUpdate(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2EE1AC0>
	void Clear(); // Function MRMesh.M.Clear(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2EE18E0>
};

