// Class StandinActor.StandInMeshActor
class AStandInMeshActor : public UActor {

public:

	struct UStaticMeshComponent StaticMeshComponent; // 0x300 (8)
};

// Class StandinActor.StandinProxyContainer
class UStandinProxyContainer : public Object {

public:

	struct TArray<struct FStandinProxyEntry> Standins; // 0x28 (16)
};

// ScriptStruct StandinActor.StandinProxyEntry
struct FStandinProxyEntry {
	LazyObjectProperty StandinActor; // 0x0 (28)
	struct UStaticMesh StaticMesh; // 0x20 (8)
	struct UMaterialInterface Material; // 0x28 (8)
	struct TArray<struct UTexture2D> Textures; // 0x30 (16)
	struct FName Key; // 0x40 (8)
};

