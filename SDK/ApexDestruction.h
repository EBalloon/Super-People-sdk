// Enum ApexDestruction.EImpactDamageOverride
enum class EImpactDamageOverride : uint8_t {
	IDO_None = 0,
	IDO_On = 1,
	IDO_Off = 2,
	IDO_MAX = 3,
};

// Class ApexDestruction.DestructibleActor
class ADestructibleActor : public UActor {

public:

	struct Unknown DestructibleComponent; // 0x310 (8)
	struct FMulticastInlineDelegate OnActorFracture; // 0x318 (16)
};

// Class ApexDestruction.DestructibleComponent
class UDestructibleComponent : public USkinnedMeshComponent {

public:

	char bFractureEffectOverride : 0; // 0x700 (1)
	struct TArray<Unknown> FractureEffects; // 0x708 (16)
	char bEnableHardSleeping : 0; // 0x718 (1)
	float LargeChunkThreshold; // 0x71C (4)
	struct FMulticastInlineDelegate OnComponentFracture; // 0x730 (16)
	struct FMulticastInlineDelegate OnFractureEffectSpawned; // 0x740 (16)

	void SetDestructibleMesh(struct Unknown NewMesh); // Function ApexDestruction.DestructibleComponent.SetDestructibleMesh(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1093FC0>
	struct Unknown GetDestructibleMesh(); // Function ApexDestruction.DestructibleComponent.GetDestructibleMesh(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1093F90>
	void ApplyRadiusDamage(float BaseDamage, struct Unknown& HurtOrigin, float DamageRadius, float ImpulseStrength, char bFullDamage); // Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage(Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1093DE0>
	void ApplyDamage(float DamageAmount, struct Unknown& HitLocation, struct Unknown& ImpulseDir, float ImpulseStrength); // Function ApexDestruction.DestructibleComponent.ApplyDamage(Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1093C70>
};

// Class ApexDestruction.DestructibleFractureSettings
class UDestructibleFractureSettings : public Object {

public:

	int32_t CellSiteCount; // 0x28 (4)
	struct Unknown FractureMaterialDesc; // 0x2C (36)
	int32_t RandomSeed; // 0x50 (4)
	struct TArray<Unknown> VoronoiSites; // 0x58 (16)
	int32_t OriginalSubmeshCount; // 0x68 (4)
	struct TArray<Unknown> Materials; // 0x70 (16)
	struct TArray<Unknown> ChunkParameters; // 0x80 (16)
};

// Class ApexDestruction.DestructibleMesh
class UDestructibleMesh : public USkeletalMesh {

public:

	struct Unknown DefaultDestructibleParameters; // 0x380 (136)
	struct TArray<Unknown> FractureEffects; // 0x408 (16)
};

// ScriptStruct ApexDestruction.DestructibleChunkParameters
struct FDestructibleChunkParameters {
	char bIsSupportChunk : 0; // 0x0 (1)
	char bDoNotFracture : 0; // 0x1 (1)
	char bDoNotDamage : 0; // 0x2 (1)
	char bDoNotCrumble : 0; // 0x3 (1)
};

// ScriptStruct ApexDestruction.FractureMaterial
struct FFractureMaterial {
	struct Unknown UVScale; // 0x0 (8)
	struct Unknown UVOffset; // 0x8 (8)
	struct Unknown Tangent; // 0x10 (12)
	float UAngle; // 0x1C (4)
	int32_t InteriorElementIndex; // 0x20 (4)
};

// ScriptStruct ApexDestruction.DestructibleParameters
struct FDestructibleParameters {
	struct Unknown DamageParameters; // 0x0 (28)
	struct Unknown DebrisParameters; // 0x1C (44)
	struct Unknown AdvancedParameters; // 0x48 (16)
	struct Unknown SpecialHierarchyDepths; // 0x58 (20)
	struct TArray<Unknown> DepthParameters; // 0x70 (16)
	struct Unknown Flags; // 0x80 (4)
};

// ScriptStruct ApexDestruction.DestructibleParametersFlag
struct FDestructibleParametersFlag {
	char bAccumulateDamage : 0; // 0x0 (1)
	char bAssetDefinedSupport : 0; // 0x0 (1)
	char bWorldSupport : 0; // 0x0 (1)
	char bDebrisTimeout : 0; // 0x0 (1)
	char bDebrisMaxSeparation : 0; // 0x0 (1)
	char bCrumbleSmallestChunks : 0; // 0x0 (1)
	char bAccurateRaycasts : 0; // 0x0 (1)
	char bUseValidBounds : 0; // 0x0 (1)
	char bFormExtendedStructures : 0; // 0x1 (1)
};

// ScriptStruct ApexDestruction.DestructibleDepthParameters
struct FDestructibleDepthParameters {
	char ImpactDamageOverride; // 0x0 (1)
};

// ScriptStruct ApexDestruction.DestructibleSpecialHierarchyDepths
struct FDestructibleSpecialHierarchyDepths {
	int32_t SupportDepth; // 0x0 (4)
	int32_t MinimumFractureDepth; // 0x4 (4)
	char bEnableDebris : 0; // 0x8 (1)
	int32_t DebrisDepth; // 0xC (4)
	int32_t EssentialDepth; // 0x10 (4)
};

// ScriptStruct ApexDestruction.DestructibleAdvancedParameters
struct FDestructibleAdvancedParameters {
	float DamageCap; // 0x0 (4)
	float ImpactVelocityThreshold; // 0x4 (4)
	float MaxChunkSpeed; // 0x8 (4)
	float FractureImpulseScale; // 0xC (4)
};

// ScriptStruct ApexDestruction.DestructibleDebrisParameters
struct FDestructibleDebrisParameters {
	float DebrisLifetimeMin; // 0x0 (4)
	float DebrisLifetimeMax; // 0x4 (4)
	float DebrisMaxSeparationMin; // 0x8 (4)
	float DebrisMaxSeparationMax; // 0xC (4)
	struct Unknown ValidBounds; // 0x10 (28)
};

// ScriptStruct ApexDestruction.DestructibleDamageParameters
struct FDestructibleDamageParameters {
	float DamageThreshold; // 0x0 (4)
	float DamageSpread; // 0x4 (4)
	char bEnableImpactDamage : 0; // 0x8 (1)
	float ImpactDamage; // 0xC (4)
	int32_t DefaultImpactDamageDepth; // 0x10 (4)
	char bCustomImpactResistance : 0; // 0x14 (1)
	float ImpactResistance; // 0x18 (4)
};

