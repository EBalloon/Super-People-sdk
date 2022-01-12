// Enum MRMesh.EMeshTrackerVertexColorMode
enum class EMeshTrackerVertexColorMode : uint8_t {
	None = 0,
	Confidence = 1,
	Block = 2,
	EMeshTrackerVertexColorMode_MAX = 3,
};

// Class MRMesh.MockDataMeshTrackerComponent
class UMockDataMeshTrackerComponent : public USceneComponent {

public:

	struct FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x228 (16)
	char ScanWorld : 0; // 0x238 (1)
	char RequestNormals : 0; // 0x239 (1)
	char RequestVertexConfidence : 0; // 0x23A (1)
	enum class EMeshTrackerVertexColorMode VertexColorMode; // 0x23B (1)
	struct TArray<struct FColor> BlockVertexColors; // 0x240 (16)
	struct FLinearColor VertexColorFromConfidenceZero; // 0x250 (16)
	struct FLinearColor VertexColorFromConfidenceOne; // 0x260 (16)
	float UpdateInterval; // 0x270 (4)
	struct UMRMeshComponent MRMesh; // 0x278 (8)

	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<float>& Confidence); // DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <Game_BE.exe+0x2B80160>
	void DisconnectMRMesh(struct UMRMeshComponent InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x36B0630>
	void ConnectMRMesh(struct UMRMeshComponent InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x36B0590>
};

// Class MRMesh.MRMeshComponent
class UMRMeshComponent : public UPrimitiveComponent {

public:

	struct UMaterialInterface Material; // 0x4B0 (8)
	char bCreateMeshProxySections : 0; // 0x4B8 (1)
	char bUpdateNavMeshOnMeshUpdate : 0; // 0x4B9 (1)
	char bNeverCreateCollisionMesh : 0; // 0x4BA (1)
	struct UBodySetup CachedBodySetup; // 0x4C0 (8)
	struct TArray<struct UBodySetup> BodySetups; // 0x4C8 (16)
	struct UMaterialInterface WireframeMaterial; // 0x4D8 (8)

	char IsConnected(); // Function MRMesh.MRMeshComponent.IsConnected(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x36B06D0>
	void ForceNavMeshUpdate(); // Function MRMesh.MRMeshComponent.ForceNavMeshUpdate(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x36B06B0>
	void Clear(); // Function MRMesh.MRMeshComponent.Clear(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x36B04D0>
};

// DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
inline void UMockDataMeshTrackerComponent::OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<float>& Confidence) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature");

	struct OnMockDataMeshTrackerUpdated__DelegateSignature_Params {
		int32_t Index;
		struct TArray<struct FVector>& Vertices;
		struct TArray<int32_t>& Triangles;
		struct TArray<struct FVector>& Normals;
		struct TArray<float>& Confidence;
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
inline void UMockDataMeshTrackerComponent::DisconnectMRMesh(struct UMRMeshComponent InMRMeshPtr) {
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh");

	struct DisconnectMRMesh_Params {
		struct UMRMeshComponent InMRMeshPtr;
	}; DisconnectMRMesh_Params Params;

	Params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
inline void UMockDataMeshTrackerComponent::ConnectMRMesh(struct UMRMeshComponent InMRMeshPtr) {
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh");

	struct ConnectMRMesh_Params {
		struct UMRMeshComponent InMRMeshPtr;
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

