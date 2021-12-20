// Enum MRMesh.EMeshTrackerVertexColorMode
enum class EMeshTrackerVertexColorMode : uint8 {
	EMeshTrackerVertexColorMode = 0,
	EMeshTrackerVertexColorMode = 1,
	EMeshTrackerVertexColorMode = 2,
	EMeshTrackerVertexColorMode = 3
};

// Class MRMesh.MockDataMeshTrackerComponent
struct UMockDataMeshTrackerComponent : USceneComponent {
	struct FMulticastInlineDelegate OnMeshTrackerUpdated; //  0x238 Size(10)
	char ScanWorld; //  0x248 Size(1)
	char RequestNormals; //  0x249 Size(1)
	char RequestVertexConfidence; //  0x24a Size(1)
	Unknown VertexColorMode; //  0x24b Size(1)
	Unknown BlockVertexColors; //  0x250 Size(10)
	Unknown VertexColorFromConfidenceZero; //  0x260 Size(10)
	Unknown VertexColorFromConfidenceOne; //  0x270 Size(10)
	float UpdateInterval; //  0x280 Size(4)
	Unknown MRMesh; //  0x288 Size(8)

	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, Unknown& Vertices, Unknown& Triangles, Unknown& Normals, Unknown& Confidence); // DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <Game+0x23a73f0>
};

// Class MRMesh.MRMeshComponent
struct UMRMeshComponent : UPrimitiveComponent {
	Unknown Material; //  0x4c0 Size(8)
	char bCreateMeshProxySections; //  0x4c8 Size(1)
	char bUpdateNavMeshOnMeshUpdate; //  0x4c9 Size(1)
	char bNeverCreateCollisionMesh; //  0x4ca Size(1)
	Unknown CachedBodySetup; //  0x4d0 Size(8)
	Unknown BodySetups; //  0x4d8 Size(10)
	Unknown WireframeMaterial; //  0x4e8 Size(8)

	char IsConnected(); // Function MRMesh.MRMeshComponent.IsConnected(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x2ed6d80>
};

