// Enum Apex.EImpactDamageOverride
enum class EImpactDamageOverride : uint8 {
	IDO_None = 0,
	IDO_On = 1,
	IDO_Off = 2,
	IDO_MAX = 3
};

// Class Apex.DestructibleActor
struct ADestructibleActor : UActor {
	struct Unknown DestructibleComponent; //  0x310 Size(8)
	struct FMulticastInlineDelegate OnActorFracture; //  0x318 Size(10)
};

// Class Apex.DestructibleComponent
struct UDestructibleComponent : USkinnedMeshComponent {
	char bFractureEffectOverride; //  0x700 Size(1)
	struct TArray<Unknown> FractureEffects; //  0x708 Size(10)
	char bEnableHardSleeping; //  0x718 Size(1)
	float LargeChunkThreshold; //  0x71c Size(4)
	struct FMulticastInlineDelegate OnComponentFracture; //  0x730 Size(10)
	struct FMulticastInlineDelegate OnFractureEffectSpawned; //  0x740 Size(10)

	void SetDestructibleMesh(struct Unknown NewMesh); // Function Apex.DestructibleComponent.SetDestructibleMesh(Final|Native|Public|BlueprintCallable) // <Game+0x1092b90>
};

// Class Apex.DestructibleFractureSettings
struct UDestructibleFractureSettings : Object {
	int32_t CellSiteCount; //  0x28 Size(4)
	struct Unknown FractureMaterialDesc; //  0x2c Size(24)
	int32_t RandomSeed; //  0x50 Size(4)
	struct TArray<Unknown> VoronoiSites; //  0x58 Size(10)
	int32_t OriginalSubmeshCount; //  0x68 Size(4)
	struct TArray<Unknown> Materials; //  0x70 Size(10)
	struct TArray<Unknown> ChunkParameters; //  0x80 Size(10)
};

// Class Apex.DestructibleMesh
struct UDestructibleMesh : USkeletalMesh {
	struct Unknown DefaultDestructibleParameters; //  0x380 Size(88)
	struct TArray<Unknown> FractureEffects; //  0x408 Size(10)
};

