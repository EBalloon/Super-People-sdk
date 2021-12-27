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

// DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
inline void UMockDataMeshTrackerComponent::OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<Unknown>& Vertices, struct TArray<Unknown>& Triangles, struct TArray<Unknown>& Normals, struct TArray<Unknown>& Confidence) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature");

	struct OnMockDataMeshTrackerUpdated__DelegateSignature_Params {
		int32_t Index;
		struct TArray<Unknown>& Vertices;
		struct TArray<Unknown>& Triangles;
		struct TArray<Unknown>& Normals;
		struct TArray<Unknown>& Confidence;
	}; OnMockDataMeshTrackerUpdated__DelegateSignature_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Vertices = Params.Vertices;
	Triangles = Params.Triangles;
	Normals = Params.Normals;
	Confidence = Params.Confidence;

}

// Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
inline void UMockDataMeshTrackerComponent::DisconnectMRMesh(struct Unknown InMRMeshPtr) {
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh");

	struct DisconnectMRMesh_Params {
		struct Unknown InMRMeshPtr;
	}; DisconnectMRMesh_Params Params;

	Params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
inline void UMockDataMeshTrackerComponent::ConnectMRMesh(struct Unknown InMRMeshPtr) {
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh");

	struct ConnectMRMesh_Params {
		struct Unknown InMRMeshPtr;
	}; ConnectMRMesh_Params Params;

	Params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MRMesh.MRMeshComponent.IsConnected
inline char UMRMeshComponent::IsConnected() {
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.IsConnected");

	struct IsConnected_Params {
		
		char ReturnValue;

	}; IsConnected_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MRMesh.MRMeshComponent.ForceNavMeshUpdate
inline void UMRMeshComponent::ForceNavMeshUpdate() {
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.ForceNavMeshUpdate");

	struct ForceNavMeshUpdate_Params {
		
	}; ForceNavMeshUpdate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MRMesh.MRMeshComponent.Clear
inline void UMRMeshComponent::Clear() {
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.Clear");

	struct Clear_Params {
		
	}; Clear_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

