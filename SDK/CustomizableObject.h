// Enum CustomizableObject.ECustomizableObjectRelevancy
enum class ECustomizableObjectRelevancy : uint8_t {
	ECustomizableObjectRelevancy = 0,
	ECustomizableObjectRelevancy = 1,
	ECustomizableObjectRelevancy = 2,
};

// Enum CustomizableObject.ECustomizableObjectProjectorType
enum class ECustomizableObjectProjectorType : uint8_t {
	ECustomizableObjectProjectorType = 0,
	ECustomizableObjectProjectorType = 1,
	ECustomizableObjectProjectorType = 2,
	ECustomizableObjectProjectorType = 3,
};

// Enum CustomizableObject.EMutableCompileMeshType
enum class EMutableCompileMeshType : uint8_t {
	EMutableCompileMeshType = 0,
	EMutableCompileMeshType = 1,
	EMutableCompileMeshType = 2,
	EMutableCompileMeshType = 3,
	EMutableCompileMeshType = 4,
	EMutableCompileMeshType = 5,
};

// Enum CustomizableObject.ECustomizableObjectGroupType
enum class ECustomizableObjectGroupType : uint8_t {
	ECustomizableObjectGroupType = 0,
	ECustomizableObjectGroupType = 1,
	ECustomizableObjectGroupType = 2,
	ECustomizableObjectGroupType = 3,
	ECustomizableObjectGroupType = 4,
};

// Enum CustomizableObject.EMutableParameterType
enum class EMutableParameterType : uint8_t {
	EMutableParameterType = 0,
	EMutableParameterType = 1,
	EMutableParameterType = 2,
	EMutableParameterType = 3,
	EMutableParameterType = 4,
	EMutableParameterType = 5,
	EMutableParameterType = 6,
	EMutableParameterType = 7,
};

// Class CustomizableObject.CustomizableInstancePrivateData
class UCustomizableInstancePrivateData : public Object {

public:

	struct TArray<Unknown> GeneratedMaterials; // 0x30 (16)
	struct TArray<Unknown> GeneratedMeshes; // 0x40 (16)
	struct TArray<Unknown> GeneratedTextures; // 0x50 (16)
	struct TArray<Unknown> ParameterDecorations; // 0xE8 (16)
	struct TMap<Unknown, Unknown> TextureReuseCache; // 0x108 (80)
	struct TArray<Unknown> ReferencedMaterials; // 0x320 (16)
	struct TArray<Unknown> PhysicsAssetsToMerge; // 0x3D0 (16)
};

// Class CustomizableObject.MutableMaskOutCache
class UMutableMaskOutCache : public Object {

public:

	struct TMap<Unknown, Unknown> Materials; // 0x28 (80)
	struct TMap<Unknown, Unknown> Textures; // 0x78 (80)
};

// Class CustomizableObject.CustomizableObject
class UCustomizableObject : public Object {

public:

	struct Unknown ReferenceSkeletalMesh; // 0x28 (8)
	struct Unknown ReferenceStaticMesh; // 0x30 (8)
	enum class Unknow Relevancy; // 0x38 (1)
	char bDisableTextureLayoutManagement : 0; // 0x39 (1)
	struct TArray<Unknown> ReferencedMaterials; // 0x40 (16)
	struct TArray<Unknown> ImageProperties; // 0x50 (16)
	struct TMap<Unknown, Unknown> GroupNodeMap; // 0x60 (80)
	struct TArray<Unknown> ContributingMorphTargets; // 0xB0 (16)
	struct TArray<Unknown> MorphTargetReconstructionInfo; // 0xC0 (16)
	struct Unknown VersionId; // 0xD0 (16)
	struct TArray<Unknown> ParameterProperties; // 0xE0 (16)
	struct TMap<Unknown, Unknown> ParameterUIDataMap; // 0x140 (80)
	struct TMap<Unknown, Unknown> StateUIDataMap; // 0x190 (80)
	struct TMap<Unknown, Unknown> PhysicsAssetsMap; // 0x1E0 (80)
	struct Unknown MaskOutCache; // 0x230 (40)
	char bIsChildObject : 0; // 0x258 (1)
	struct Unknown MaskOutCache_HardRef; // 0x260 (8)

	void UnloadMaskOutCache(); // Function CustomizableObject.CustomizableObject.UnloadMaskOutCache(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1039530>
	void LoadMaskOutCache(); // Function CustomizableObject.CustomizableObject.LoadMaskOutCache(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1038D40>
	struct Unknown GetStateUIMetadataFromIndex(int32_t StateIndex); // Function CustomizableObject.CustomizableObject.GetStateUIMetadataFromIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1038AB0>
	struct Unknown GetStateUIMetadata(struct FString StateName); // Function CustomizableObject.CustomizableObject.GetStateUIMetadata(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1038970>
	struct FString GetStateParameterName(struct FString StateName, int32_t ParameterIndex); // Function CustomizableObject.CustomizableObject.GetStateParameterName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1038840>
	int32_t GetStateParameterCount(struct FString StateName); // Function CustomizableObject.CustomizableObject.GetStateParameterCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1038790>
	struct FString GetStateName(int32_t StateIndex); // Function CustomizableObject.CustomizableObject.GetStateName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10386B0>
	int32_t GetStateCount(); // Function CustomizableObject.CustomizableObject.GetStateCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1038680>
	struct Unknown GetParameterUIMetadataFromIndex(int32_t ParamIndex); // Function CustomizableObject.CustomizableObject.GetParameterUIMetadataFromIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037DE0>
	struct Unknown GetParameterUIMetadata(struct FString ParamName); // Function CustomizableObject.CustomizableObject.GetParameterUIMetadata(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037CA0>
	enum class Unknow GetParameterTypeByName(struct FString Name); // Function CustomizableObject.CustomizableObject.GetParameterTypeByName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037BF0>
	enum class Unknow GetParameterType(int32_t ParamIndex); // Function CustomizableObject.CustomizableObject.GetParameterType(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037B60>
	struct FString GetParameterName(int32_t ParamIndex); // Function CustomizableObject.CustomizableObject.GetParameterName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037AC0>
	int32_t GetParameterDescriptionCount(struct FString ParamName); // Function CustomizableObject.CustomizableObject.GetParameterDescriptionCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037A10>
	int32_t GetParameterCount(); // Function CustomizableObject.CustomizableObject.GetParameterCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10378F0>
	int32_t GetIntParameterNumOptions(int32_t ParamIndex); // Function CustomizableObject.CustomizableObject.GetIntParameterNumOptions(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037760>
	struct FString GetIntParameterAvailableOption(int32_t ParamIndex, int32_t K); // Function CustomizableObject.CustomizableObject.GetIntParameterAvailableOption(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037690>
	int32_t FindParameter(struct FString Name); // Function CustomizableObject.CustomizableObject.FindParameter(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10371A0>
	struct Unknown CreateInstance(); // Function CustomizableObject.CustomizableObject.CreateInstance(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1036F60>
};

// Class CustomizableObject.CustomizableObjectInstance
class UCustomizableObjectInstance : public Object {

public:

	struct Unknown CustomizableObject; // 0x28 (8)
	struct Unknown SkeletalMesh; // 0x30 (8)
	struct TArray<Unknown> BoolParameters; // 0x38 (16)
	struct TArray<Unknown> IntParameters; // 0x48 (16)
	struct TArray<Unknown> FloatParameters; // 0x58 (16)
	struct TArray<Unknown> TextureParameters; // 0x68 (16)
	struct TArray<Unknown> VectorParameters; // 0x78 (16)
	struct TArray<Unknown> ProjectorParameters; // 0x88 (16)
	char bBuildParameterDecorations : 0; // 0x98 (1)
	struct FMulticastInlineDelegate UpdatedDelegate; // 0xA0 (16)
	struct FString SkeletalMeshStatus; // 0x110 (16)
	struct TArray<Unknown> MaterialTags; // 0x140 (16)
	struct Unknown PrivateData; // 0x1D0 (8)

	void UpdateSkeletalMeshAsync(char bIgnoreCloseDist, char bForceHighPriority); // Function CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsync(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1039550>
	void SetVectorParameterSelectedOption(struct FString VectorParamName, struct Unknown VectorValue); // Function CustomizableObject.CustomizableObjectInstance.SetVectorParameterSelectedOption(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1038EB0>
	void SetRandomValues(); // Function CustomizableObject.CustomizableObjectInstance.SetRandomValues(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1039510>
	void SetProjectorValue(struct FString ProjectorParamName, struct Unknown& Pos, struct Unknown& Direction, struct Unknown& Up, struct Unknown& Scale, float Angle, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.SetProjectorValue(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10392B0>
	void SetIntParameterSelectedOption(struct FString ParamName, struct FString SelectedOptionName, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.SetIntParameterSelectedOption(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1039170>
	void SetFloatParameterSelectedOption(struct FString FloatParamName, float FloatValue, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.SetFloatParameterSelectedOption(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1039040>
	void SetCurrentState(struct FString StateName); // Function CustomizableObject.CustomizableObjectInstance.SetCurrentState(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1038FA0>
	void SetColorParameterSelectedOption(struct FString ColorParamName, struct Unknown ColorValue); // Function CustomizableObject.CustomizableObjectInstance.SetColorParameterSelectedOption(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1038EB0>
	void SetBoolParameterSelectedOption(struct FString BoolParamName, char BoolValue); // Function CustomizableObject.CustomizableObjectInstance.SetBoolParameterSelectedOption(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1038DC0>
	void SetAllParameterToDefault(); // Function CustomizableObject.CustomizableObjectInstance.SetAllParameterToDefault(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1038DA0>
	void SetAllIntParameterToDefault2(); // Function CustomizableObject.CustomizableObjectInstance.SetAllIntParameterToDefault2(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1038D60>
	void SetAllIntParameterToDefault(); // Function CustomizableObject.CustomizableObjectInstance.SetAllIntParameterToDefault(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1038D80>
	char IsParamMultidimensional(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.IsParamMultidimensional(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1038BE0>
	char IsParameterRelevant(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.IsParameterRelevant(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1038C90>
	void GetProjectorValue(struct FString ProjectorParamName, struct Unknown& Pos, struct Unknown& Direction, struct Unknown& Up, struct Unknown& Scale, float& Angle, enum class Unknow& Type, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorValue(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10383B0>
	struct Unknown GetProjectorUp(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorUp(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10382F0>
	struct Unknown GetProjectorScale(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorScale(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1038230>
	struct Unknown GetProjectorPosition(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorPosition(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1038170>
	enum class Unknow GetProjectorParameterType(struct FString ParamName, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorParameterType(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1038080>
	struct Unknown GetProjectorDirection(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorDirection(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037FC0>
	float GetProjectorAngle(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorAngle(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037F10>
	struct Unknown GetParameterDescription(struct FString ParamName, int32_t DescIndex); // Function CustomizableObject.CustomizableObjectInstance.GetParameterDescription(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037920>
	struct FString GetIntParameterSelectedOption(struct FString ParamName, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.GetIntParameterSelectedOption(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10377F0>
	float GetFloatParameterSelectedOption(struct FString FloatParamName, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.GetFloatParameterSelectedOption(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10375A0>
	struct FString GetCurrentState(); // Function CustomizableObject.CustomizableObjectInstance.GetCurrentState(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037520>
	struct Unknown GetColorParameterSelectedOption(struct FString ColorParamName); // Function CustomizableObject.CustomizableObjectInstance.GetColorParameterSelectedOption(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037460>
	char GetBoolParameterSelectedOption(struct FString BoolParamName); // Function CustomizableObject.CustomizableObjectInstance.GetBoolParameterSelectedOption(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10373B0>
	int32_t FindVectorParameterNameIndex(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.FindVectorParameterNameIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037300>
	int32_t FindProjectorParameterNameIndex(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.FindProjectorParameterNameIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037250>
	int32_t FindIntParameterNameIndex(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.FindIntParameterNameIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10370F0>
	int32_t FindFloatParameterNameIndex(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.FindFloatParameterNameIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037040>
	int32_t FindBoolParameterNameIndex(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.FindBoolParameterNameIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1036F90>
	void Copy(struct Unknown Target); // Function CustomizableObject.CustomizableObjectInstance.Copy(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1036EE0>
	struct Unknown Clone(); // Function CustomizableObject.CustomizableObjectInstance.Clone(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1036EB0>
};

// Class CustomizableObject.CustomizableObjectImageProviderArray
class UCustomizableObjectImageProviderArray : public UCustomizableSystemImageProvider {

public:

	struct TArray<Unknown> Textures; // 0x28 (16)
};

// Class CustomizableObject.CustomizableObjectSystem
class UCustomizableObjectSystem : public Object {

public:

	struct TArray<Unknown> PendingReleaseSkeletalMesh; // 0x28 (16)
	struct Unknown PreviewExternalImageProvider; // 0x48 (8)
	struct TArray<Unknown> ProtectedCachedTextures; // 0x150 (16)
	struct Unknown DefaultInstanceLODManagement; // 0x170 (8)
	struct Unknown CurrentInstanceLODManagement; // 0x178 (8)

	void SetReleaseMutableTexturesImmediately(char bReleaseTextures); // Function CustomizableObject.CustomizableObjectSystem.SetReleaseMutableTexturesImmediately(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x103DBB0>
	int32_t GetTotalInstances(); // Function CustomizableObject.CustomizableObjectSystem.GetTotalInstances(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x103DB80>
	int32_t GetTextureMemoryUsed(); // Function CustomizableObject.CustomizableObjectSystem.GetTextureMemoryUsed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x103DB50>
	struct FString GetPluginVersion(); // Function CustomizableObject.CustomizableObjectSystem.GetPluginVersion(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x103DAD0>
	int32_t GetNumPendingInstances(); // Function CustomizableObject.CustomizableObjectSystem.GetNumPendingInstances(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x103DAA0>
	int32_t GetNumInstances(); // Function CustomizableObject.CustomizableObjectSystem.GetNumInstances(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x103DA70>
	struct Unknown GetInstance(); // Function CustomizableObject.CustomizableObjectSystem.GetInstance(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x103DA40>
	int32_t GetAverageBuildTime(); // Function CustomizableObject.CustomizableObjectSystem.GetAverageBuildTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x103DA10>
	char AreEnginePatchesPresent(); // Function CustomizableObject.CustomizableObjectSystem.AreEnginePatchesPresent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x103D960>
};

// Class CustomizableObject.CustomizableSkeletalComponent
class UCustomizableSkeletalComponent : public USceneComponent {

public:

	float SkippedLastRenderTime; // 0x23C (4)
	struct Unknown CustomizableObjectInstance; // 0x240 (8)

	void UpdateSkeletalMeshAsync(char bNeverSkipUpdate); // Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x103DC40>
};

// Class CustomizableObject.CustomizableSkeletalMeshActor
class ACustomizableSkeletalMeshActor : public ASkeletalMeshActor {

public:

	struct Unknown CustomizableSkeletalComponent; // 0x398 (8)
};

// ScriptStruct CustomizableObject.ParameterDecorations
struct FParameterDecorations {
	struct TArray<Unknown> Images; // 0x0 (16)
};

// ScriptStruct CustomizableObject.GeneratedMaterial
struct FGeneratedMaterial {
	struct TArray<Unknown> Textures; // 0x0 (16)
};

// ScriptStruct CustomizableObject.GeneratedTexture
struct FGeneratedTexture {
	int32_t ID; // 0x0 (4)
	struct FString Name; // 0x8 (16)
	struct Unknown Texture; // 0x18 (8)
};

// ScriptStruct CustomizableObject.GeneratedMesh
struct FGeneratedMesh {
	int32_t ID; // 0x0 (4)
	struct Unknown Mesh; // 0x8 (8)
};

// ScriptStruct CustomizableObject.MorphTargetVertexIndex
struct FMorphTargetVertexIndex {
	int32_t MorphIndex; // 0x0 (4)
	int32_t VertexIndex; // 0x4 (4)
};

// ScriptStruct CustomizableObject.MaskOutTexture
struct FMaskOutTexture {
	int32_t SizeX; // 0x0 (4)
	int32_t SizeY; // 0x4 (4)
	struct TArray<Unknown> Data; // 0x8 (16)
};

// ScriptStruct CustomizableObject.MutableModelParameterProperties
struct FMutableModelParameterProperties {
	struct FString Name; // 0x0 (16)
	enum class Unknow Type; // 0x10 (1)
	int32_t ImageDescriptionCount; // 0x14 (4)
	struct TArray<Unknown> PossibleValues; // 0x18 (16)
	struct Unknown ParamUIMetadata; // 0x28 (240)
};

// ScriptStruct CustomizableObject.MutableParamUIMetadata
struct FMutableParamUIMetadata {
	struct FString ObjectFriendlyName; // 0x0 (16)
	struct FString UISectionName; // 0x10 (16)
	int32_t UIOrder; // 0x20 (4)
	struct Unknown UIThumbnail; // 0x28 (40)
	struct TMap<Unknown, Unknown> ExtraInformation; // 0x50 (80)
	struct TMap<Unknown, Unknown> ExtraAssets; // 0xA0 (80)
};

// ScriptStruct CustomizableObject.MutableModelParameterValue
struct FMutableModelParameterValue {
	struct FString Name; // 0x0 (16)
	int32_t Value; // 0x10 (4)
};

// ScriptStruct CustomizableObject.MutableModelImageProperties
struct FMutableModelImageProperties {
	struct FString TextureParameterName; // 0x0 (16)
	char Filter; // 0x10 (1)
	char SRGB : 0; // 0x14 (1)
	int32_t LODBias; // 0x18 (4)
};

// ScriptStruct CustomizableObject.CustomizableObjectExportOptions
struct FCustomizableObjectExportOptions {
	char bTextureCompression : 0; // 0x0 (1)
	struct FString TargetPlatform; // 0x8 (16)
};

// ScriptStruct CustomizableObject.CompilationOptions
struct FCompilationOptions {
	char bTextureCompression : 0; // 0x0 (1)
	int32_t OptimizationLevel; // 0x4 (4)
	char bUseParallelCompilation : 0; // 0x8 (1)
	char bUseDiskCompilation : 0; // 0x9 (1)
};

// ScriptStruct CustomizableObject.ProfileParameterDat
struct FProfileParameterDat {
	struct FString ProfileName; // 0x0 (16)
	struct TArray<Unknown> BoolParameters; // 0x10 (16)
	struct TArray<Unknown> IntParameters; // 0x20 (16)
	struct TArray<Unknown> FloatParameters; // 0x30 (16)
	struct TArray<Unknown> TextureParameters; // 0x40 (16)
	struct TArray<Unknown> VectorParameters; // 0x50 (16)
	struct TArray<Unknown> ProjectorParameters; // 0x60 (16)
};

// ScriptStruct CustomizableObject.CustomizableObjectProjector
struct FCustomizableObjectProjector {
	struct FString ParameterName; // 0x0 (16)
	struct Unknown Value; // 0x10 (56)
	struct FString UID; // 0x48 (16)
	struct TArray<Unknown> RangeValues; // 0x58 (16)
};

// ScriptStruct CustomizableObject.CustomizableObjectProjector
struct FCustomizableObjectProjector {
	struct Unknown Position; // 0x0 (12)
	struct Unknown Direction; // 0xC (12)
	struct Unknown Up; // 0x18 (12)
	struct Unknown Scale; // 0x24 (12)
	enum class Unknow ProjectionType; // 0x30 (1)
	float Angle; // 0x34 (4)
};

// ScriptStruct CustomizableObject.CustomizableObjectVectorParameterValue
struct FCustomizableObjectVectorParameterValue {
	struct FString ParameterName; // 0x0 (16)
	struct Unknown ParameterValue; // 0x10 (16)
	struct FString UID; // 0x20 (16)
};

// ScriptStruct CustomizableObject.CustomizableObjectTextureParameterValue
struct FCustomizableObjectTextureParameterValue {
	struct FString ParameterName; // 0x0 (16)
	uint64_t ParameterValue; // 0x10 (8)
	struct FString UID; // 0x18 (16)
};

// ScriptStruct CustomizableObject.CustomizableObjectFloatParameterValue
struct FCustomizableObjectFloatParameterValue {
	struct FString ParameterName; // 0x0 (16)
	float ParameterValue; // 0x10 (4)
	struct FString UID; // 0x18 (16)
	struct TArray<Unknown> ParameterRangeValues; // 0x28 (16)
};

// ScriptStruct CustomizableObject.CustomizableObjectIntParameterValue
struct FCustomizableObjectIntParameterValue {
	struct FString ParameterName; // 0x0 (16)
	struct FString ParameterValueName; // 0x10 (16)
	struct FString UID; // 0x20 (16)
	struct TArray<Unknown> ParameterRangeValueNames; // 0x30 (16)
};

// ScriptStruct CustomizableObject.CustomizableObjectBoolParameterValue
struct FCustomizableObjectBoolParameterValue {
	struct FString ParameterName; // 0x0 (16)
	char ParameterValue : 0; // 0x10 (1)
	struct FString UID; // 0x18 (16)
};

// ScriptStruct CustomizableObject.CustomizableObjectIdentifier
struct FCustomizableObjectIdentifier {
	struct FString CustomizableObjectGroupName; // 0x0 (16)
	struct FString CustomizableObjectName; // 0x10 (16)
	struct FString Guid; // 0x20 (16)
};

// ScriptStruct CustomizableObject.CustomizableObjectIdPair
struct FCustomizableObjectIdPair {
	struct FString CustomizableObjectGroupName; // 0x0 (16)
	struct FString CustomizableObjectName; // 0x10 (16)
};

// ScriptStruct CustomizableObject.CustomizedMaterialTexture2D
struct FCustomizedMaterialTexture2D {
	struct FName Name; // 0x0 (8)
	struct Unknown Texture; // 0x8 (8)
};

// ScriptStruct CustomizableObject.PendingReleaseSkeletalMeshInfo
struct FPendingReleaseSkeletalMeshInfo {
	struct Unknown SkeletalMesh; // 0x0 (8)
	double Timestamp; // 0x8 (8)
};

// ScriptStruct CustomizableObject.ParameterUIData
struct FParameterUIData {
	struct FString Name; // 0x0 (16)
	struct Unknown ParamUIMetadata; // 0x10 (240)
	enum class Unknow Type; // 0x100 (1)
	struct TArray<Unknown> ArrayIntegerParameterOption; // 0x108 (16)
	enum class Unknow IntegerParameterGroupType; // 0x118 (1)
	char bDontCompressRuntimeTextures : 0; // 0x119 (1)
};

// ScriptStruct CustomizableObject.IntegerParameterUIData
struct FIntegerParameterUIData {
	struct FString Name; // 0x0 (16)
	struct Unknown ParamUIMetadata; // 0x10 (240)
};

