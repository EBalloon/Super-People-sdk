// Enum MRMesh.EMeshTrackerVertexColorMode
enum class EMeshTrackerVertexColorMode : uint8 {
	EMeshTrackerVertexColorMode = 0,
	EMeshTrackerVertexColorMode = 1,
	EMeshTrackerVertexColorMode = 2,
	EMeshTrackerVertexColorMode = 3
};

// Class MRMesh.Mock
struct UMock : USceneComponent {
	struct FMulticastInlineDelegate OnMeshTrackerUpdated; //  0x238 Size(10)
	char ScanWorld; //  0x248 Size(1)
	char RequestNormals; //  0x249 Size(1)
	char RequestVertexConfidence; //  0x24a Size(1)
	enum class Unknow VertexColorMode; //  0x24b Size(1)
	struct TArray<Unknown> BlockVertexColors; //  0x250 Size(10)
	struct Unknown VertexColorFromConfidenceZero; //  0x260 Size(10)
	struct Unknown VertexColorFromConfidenceOne; //  0x270 Size(10)
	float UpdateInterval; //  0x280 Size(4)
	struct Unknown MRMesh; //  0x288 Size(8)

	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<Unknown>& Vertices, struct TArray<Unknown>& Triangles, struct TArray<Unknown>& Normals, struct TArray<Unknown>& Confidence); // DelegateFunction MRMesh.Mock.OnMockDataMeshTrackerUpdated__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <Game+0x23b1e70>
};

// Class MRMesh.MRMeshComponent
struct UMRMeshComponent : UPrimitiveComponent {
	struct Unknown Material; //  0x4c0 Size(8)
	char bCreateMeshProxySections; //  0x4c8 Size(1)
	char bUpdateNavMeshOnMeshUpdate; //  0x4c9 Size(1)
	char bNeverCreateCollisionMesh; //  0x4ca Size(1)
	struct Unknown CachedBodySetup; //  0x4d0 Size(8)
	struct TArray<Unknown> BodySetups; //  0x4d8 Size(10)
	struct Unknown WireframeMaterial; //  0x4e8 Size(8)

	char IsConnected(); // Function MRMesh.MRMeshComponent.IsConnected(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x2ee1ae0>
};

