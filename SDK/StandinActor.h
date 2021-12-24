// Class StandinActor.StandInMeshActor
class AStandInMeshActor : public UActor {

public:

	struct Unknown StaticMeshComponent; // 0x310 (8)
};

// Class StandinActor.StandinProxyContainer
class UStandinProxyContainer : public Object {

public:

	struct TArray<Unknown> Standins; // 0x28 (16)
};

// ScriptStruct StandinActor.StandinProxyEntry
struct FStandinProxyEntry {
	LazyObjectProperty StandinActor; // 0x0 (28)
	struct Unknown StaticMesh; // 0x20 (8)
	struct Unknown Material; // 0x28 (8)
	struct TArray<Unknown> Textures; // 0x30 (16)
	struct FName Key; // 0x40 (8)
};

