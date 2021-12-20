// Enum CustomizableObject.ECustomizableObjectRelevancy
enum class ECustomizableObjectRelevancy : uint8 {
	ECustomizableObjectRelevancy = 0,
	ECustomizableObjectRelevancy = 1,
	ECustomizableObjectRelevancy = 2
};

// Enum CustomizableObject.ECustomizableObjectProjecto
enum class ECustomizableObjectProjecto : uint8 {
	ECustomizableObjectProjecto = 0,
	ECustomizableObjectProjectoy = 1,
	ECustomizableObjectProjecto = 2,
	ECustomizableObjectProjectoy = 3
};

// Enum CustomizableObject.EMutableCompileMeshType
enum class EMutableCompileMeshType : uint8 {
	EMutableCompileMeshType = 0,
	EMutableCompileMeshType = 1,
	EMutableCompileMeshType = 2,
	EMutableCompileMeshType = 3,
	EMutableCompileMeshType = 4,
	EMutableCompileMeshType = 5
};

// Enum CustomizableObject.ECustomizableObjectGroupType
enum class ECustomizableObjectGroupType : uint8 {
	ECustomizableObjectGroupType = 0,
	ECustomizableObjectGroupType = 1,
	ECustomizableObjectGroupType = 2,
	ECustomizableObjectGroupType = 3,
	ECustomizableObjectGroupType = 4
};

// Enum CustomizableObject.EMutableParameterType
enum class EMutableParameterType : uint8 {
	EMutableParameterType = 0,
	EMutableParameterType = 1,
	EMutableParameterType = 2,
	EMutableParameterType = 3,
	EMutableParameterType = 4,
	EMutableParameterType = 5,
	EMutableParameterType = 6,
	EMutableParameterType = 7
};

// Class CustomizableObject.CustomizableInstancePrivateData
struct UCustomizableInstancePrivateData : Object {
	Unknown GeneratedMaterials; //  0x30 Size(10)
	Unknown GeneratedMeshes; //  0x40 Size(10)
	Unknown GeneratedTextures; //  0x50 Size(10)
	Unknown ParameterDecorations; //  0xe8 Size(10)
	Unknown TextureReuseCache; //  0x108 Size(50)
	Unknown ReferencedMaterials; //  0x320 Size(10)
	Unknown PhysicsAssetsToMerge; //  0x3d0 Size(10)
};

// Class CustomizableObject.MutableMaskOutCache
struct UMutableMaskOutCache : Object {
	Unknown Materials; //  0x28 Size(50)
	Unknown Textures; //  0x78 Size(50)
};

// Class CustomizableObject.CustomizableObject
struct UCustomizableObject : Object {
	Unknown ReferenceSkeletalMesh; //  0x28 Size(8)
	Unknown ReferenceStaticMesh; //  0x30 Size(8)
	Unknown Relevancy; //  0x38 Size(1)
	char bDisableTextureLayoutManagement; //  0x39 Size(1)
	Unknown ReferencedMaterials; //  0x40 Size(10)
	Unknown ImageProperties; //  0x50 Size(10)
	Unknown GroupNodeMap; //  0x60 Size(50)
	Unknown ContributingMorphTargets; //  0xb0 Size(10)
	Unknown MorphTargetReconstructionInfo; //  0xc0 Size(10)
	Unknown VersionId; //  0xd0 Size(10)
	Unknown ParameterProperties; //  0xe0 Size(10)
	Unknown ParameterUIDataMap; //  0x140 Size(50)
	Unknown StateUIDataMap; //  0x190 Size(50)
	Unknown PhysicsAssetsMap; //  0x1e0 Size(50)
	Unknown MaskOutCache; //  0x230 Size(28)
	char bIsChildObject; //  0x258 Size(1)
	Unknown MaskOutCache_HardRef; //  0x260 Size(8)

	void UnloadMaskOutCache(); // Function CustomizableObject.CustomizableObject.UnloadMaskOutCache(Final|Native|Public|BlueprintCallable) // <Game+0x1037d50>
};

// Class CustomizableObject.CustomizableObjectInstance
struct UCustomizableObjectInstance : Object {
	Unknown CustomizableObject; //  0x28 Size(8)
	Unknown SkeletalMesh; //  0x30 Size(8)
	Unknown BoolParameters; //  0x38 Size(10)
	Unknown IntParameters; //  0x48 Size(10)
	Unknown FloatParameters; //  0x58 Size(10)
	Unknown TextureParameters; //  0x68 Size(10)
	Unknown VectorParameters; //  0x78 Size(10)
	Unknown ProjectorParameters; //  0x88 Size(10)
	char bBuildParameterDecorations; //  0x98 Size(1)
	struct FMulticastInlineDelegate UpdatedDelegate; //  0xa0 Size(10)
	struct FString SkeletalMeshStatus; //  0x110 Size(10)
	Unknown MaterialTags; //  0x140 Size(10)
	Unknown PrivateData; //  0x1d0 Size(8)

	void UpdateSkeletalMeshAsync(char bIgnoreCloseDist, char bForceHighPriority); // Function CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsync(Final|Native|Public|BlueprintCallable) // <Game+0x1037d70>
};

// Class CustomizableObject.CustomizableObjectImageProviderArray
struct UCustomizableObjectImageProviderArray : UCustomizableSystemImageProvider {
	Unknown Textures; //  0x28 Size(10)
};

// Class CustomizableObject.CustomizableObjectSystem
struct UCustomizableObjectSystem : Object {
	Unknown PendingReleaseSkeletalMesh; //  0x28 Size(10)
	Unknown PreviewExternalImageProvider; //  0x48 Size(8)
	Unknown ProtectedCachedTextures; //  0x150 Size(10)
	Unknown DefaultInstanceLODManagement; //  0x170 Size(8)
	Unknown CurrentInstanceLODManagement; //  0x178 Size(8)

	void SetReleaseMutableTexturesImmediately(char bReleaseTextures); // Function CustomizableObject.CustomizableObjectSystem.SetReleaseMutableTexturesImmediately(Final|Native|Public|BlueprintCallable) // <Game+0x103c3d0>
};

// Class CustomizableObject.CustomizableSkeletalComponent
struct UCustomizableSkeletalComponent : USceneComponent {
	float SkippedLastRenderTime; //  0x23c Size(4)
	Unknown CustomizableObjectInstance; //  0x240 Size(8)

	void UpdateSkeletalMeshAsync(char bNeverSkipUpdate); // Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync(Final|Native|Public|BlueprintCallable) // <Game+0x103c460>
};

// Class CustomizableObject.CustomizableSkeletalMeshActor
struct ACustomizableSkeletalMeshActor : ASkeletalMeshActor {
	Unknown CustomizableSkeletalComponent; //  0x398 Size(8)
};

