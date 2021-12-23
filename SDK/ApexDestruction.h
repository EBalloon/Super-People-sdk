// Enum ApexDestruction.EImpactDamageOverride
enum class EImpactDamageOverride : uint8 {
	IDO_None = 0
	IDO_On = 1
	IDO_Off = 2
	IDO_MAX = 3
};

// Class ApexDestruction.DestructibleActor
struct ADestructibleActor : UActor {
	struct Unknown DestructibleComponent; // 0x310 (8)
	struct FMulticastInlineDelegate OnActorFracture; // 0x318 (16)
};

// Class ApexDestruction.DestructibleComponent
struct UDestructibleComponent : USkinnedMeshComponent {
	char bFractureEffectOverride : 0; // 0x700 (1)
	struct TArray<Unknown> FractureEffects; // 0x708 (16)
	char bEnableHardSleeping : 0; // 0x718 (1)
	float LargeChunkThreshold; // 0x71C (4)
	struct FMulticastInlineDelegate OnComponentFracture; // 0x730 (16)
	struct FMulticastInlineDelegate OnFractureEffectSpawned; // 0x740 (16)

	void SetDestructibleMesh(struct Unknown NewMesh); // Function ApexDestruction.DestructibleComponent.SetDestructibleMesh(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1092B90>
	struct Unknown GetDestructibleMesh(); // Function ApexDestruction.DestructibleComponent.GetDestructibleMesh(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1092B60>
	void ApplyRadiusDamage(float BaseDamage, struct Unknown& HurtOrigin, float DamageRadius, float ImpulseStrength, char bFullDamage); // Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage(Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10929B0>
	void ApplyDamage(float DamageAmount, struct Unknown& HitLocation, struct Unknown& ImpulseDir, float ImpulseStrength); // Function ApexDestruction.DestructibleComponent.ApplyDamage(Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1092840>
};

// Class ApexDestruction.DestructibleFractureSettings
struct UDestructibleFractureSettings : Object {
	int32_t CellSiteCount; // 0x28 (4)
	struct Unknown FractureMaterialDesc; // 0x2C (36)
	int32_t RandomSeed; // 0x50 (4)
	struct TArray<Unknown> VoronoiSites; // 0x58 (16)
	int32_t OriginalSubmeshCount; // 0x68 (4)
	struct TArray<Unknown> Materials; // 0x70 (16)
	struct TArray<Unknown> ChunkParameters; // 0x80 (16)
};

// Class ApexDestruction.DestructibleMesh
struct UDestructibleMesh : USkeletalMesh {
	struct Unknown DefaultDestructibleParameters; // 0x380 (136)
	struct TArray<Unknown> FractureEffects; // 0x408 (16)
};

