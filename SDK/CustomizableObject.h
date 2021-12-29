// Enum CustomizableObject.ECustomizableObjectRelevancy
enum class ECustomizableObjectRelevancy : uint8_t {
	All = 0,
	ClientOnly = 1,
	ECustomizableObjectRelevancy_MAX = 2,
};

// Enum CustomizableObject.ECustomizableObjectProjectorType
enum class ECustomizableObjectProjectorType : uint8_t {
	Planar = 0,
	Cylindrical = 1,
	Wrapping = 2,
	ECustomizableObjectProjectorType_MAX = 3,
};

// Enum CustomizableObject.EMutableCompileMeshType
enum class EMutableCompileMeshType : uint8_t {
	Full = 0,
	Local = 1,
	LocalAndChildren = 2,
	AddWorkingSetNoChildren = 3,
	AddWorkingSetAndChildren = 4,
	EMutableCompileMeshType_MAX = 5,
};

// Enum CustomizableObject.ECustomizableObjectGroupType
enum class ECustomizableObjectGroupType : uint8_t {
	COGT_TOGGLE = 0,
	COGT_ALL = 1,
	COGT_ONE = 2,
	COGT_ONE_OR_NONE = 3,
	COGT_MAX = 4,
};

// Enum CustomizableObject.EMutableParameterType
enum class EMutableParameterType : uint8_t {
	None = 0,
	Bool = 1,
	Int = 2,
	Float = 3,
	Color = 4,
	Projector = 5,
	Texture = 6,
	EMutableParameterType_MAX = 7,
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

	void UnloadMaskOutCache(); // Function CustomizableObject.CustomizableObject.UnloadMaskOutCache(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1049EE0>
	void LoadMaskOutCache(); // Function CustomizableObject.CustomizableObject.LoadMaskOutCache(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10496F0>
	struct Unknown GetStateUIMetadataFromIndex(int32_t StateIndex); // Function CustomizableObject.CustomizableObject.GetStateUIMetadataFromIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1049460>
	struct Unknown GetStateUIMetadata(struct FString StateName); // Function CustomizableObject.CustomizableObject.GetStateUIMetadata(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1049320>
	struct FString GetStateParameterName(struct FString StateName, int32_t ParameterIndex); // Function CustomizableObject.CustomizableObject.GetStateParameterName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10491F0>
	int32_t GetStateParameterCount(struct FString StateName); // Function CustomizableObject.CustomizableObject.GetStateParameterCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1049140>
	struct FString GetStateName(int32_t StateIndex); // Function CustomizableObject.CustomizableObject.GetStateName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1049060>
	int32_t GetStateCount(); // Function CustomizableObject.CustomizableObject.GetStateCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1049030>
	struct Unknown GetParameterUIMetadataFromIndex(int32_t ParamIndex); // Function CustomizableObject.CustomizableObject.GetParameterUIMetadataFromIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1048790>
	struct Unknown GetParameterUIMetadata(struct FString ParamName); // Function CustomizableObject.CustomizableObject.GetParameterUIMetadata(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1048650>
	enum class Unknow GetParameterTypeByName(struct FString Name); // Function CustomizableObject.CustomizableObject.GetParameterTypeByName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10485A0>
	enum class Unknow GetParameterType(int32_t ParamIndex); // Function CustomizableObject.CustomizableObject.GetParameterType(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1048510>
	struct FString GetParameterName(int32_t ParamIndex); // Function CustomizableObject.CustomizableObject.GetParameterName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1048470>
	int32_t GetParameterDescriptionCount(struct FString ParamName); // Function CustomizableObject.CustomizableObject.GetParameterDescriptionCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10483C0>
	int32_t GetParameterCount(); // Function CustomizableObject.CustomizableObject.GetParameterCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10482A0>
	int32_t GetIntParameterNumOptions(int32_t ParamIndex); // Function CustomizableObject.CustomizableObject.GetIntParameterNumOptions(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1048110>
	struct FString GetIntParameterAvailableOption(int32_t ParamIndex, int32_t K); // Function CustomizableObject.CustomizableObject.GetIntParameterAvailableOption(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1048040>
	int32_t FindParameter(struct FString Name); // Function CustomizableObject.CustomizableObject.FindParameter(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1047B50>
	struct Unknown CreateInstance(); // Function CustomizableObject.CustomizableObject.CreateInstance(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1047910>
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

	void UpdateSkeletalMeshAsync(char bIgnoreCloseDist, char bForceHighPriority); // Function CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsync(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1049F00>
	void SetVectorParameterSelectedOption(struct FString VectorParamName, struct Unknown VectorValue); // Function CustomizableObject.CustomizableObjectInstance.SetVectorParameterSelectedOption(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1049860>
	void SetRandomValues(); // Function CustomizableObject.CustomizableObjectInstance.SetRandomValues(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1049EC0>
	void SetProjectorValue(struct FString ProjectorParamName, struct Unknown& Pos, struct Unknown& Direction, struct Unknown& Up, struct Unknown& Scale, float Angle, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.SetProjectorValue(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1049C60>
	void SetIntParameterSelectedOption(struct FString ParamName, struct FString SelectedOptionName, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.SetIntParameterSelectedOption(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1049B20>
	void SetFloatParameterSelectedOption(struct FString FloatParamName, float FloatValue, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.SetFloatParameterSelectedOption(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10499F0>
	void SetCurrentState(struct FString StateName); // Function CustomizableObject.CustomizableObjectInstance.SetCurrentState(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1049950>
	void SetColorParameterSelectedOption(struct FString ColorParamName, struct Unknown ColorValue); // Function CustomizableObject.CustomizableObjectInstance.SetColorParameterSelectedOption(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1049860>
	void SetBoolParameterSelectedOption(struct FString BoolParamName, char BoolValue); // Function CustomizableObject.CustomizableObjectInstance.SetBoolParameterSelectedOption(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1049770>
	void SetAllParameterToDefault(); // Function CustomizableObject.CustomizableObjectInstance.SetAllParameterToDefault(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1049750>
	void SetAllIntParameterToDefault2(); // Function CustomizableObject.CustomizableObjectInstance.SetAllIntParameterToDefault2(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1049710>
	void SetAllIntParameterToDefault(); // Function CustomizableObject.CustomizableObjectInstance.SetAllIntParameterToDefault(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1049730>
	char IsParamMultidimensional(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.IsParamMultidimensional(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1049590>
	char IsParameterRelevant(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.IsParameterRelevant(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1049640>
	void GetProjectorValue(struct FString ProjectorParamName, struct Unknown& Pos, struct Unknown& Direction, struct Unknown& Up, struct Unknown& Scale, float& Angle, enum class Unknow& Type, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorValue(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1048D60>
	struct Unknown GetProjectorUp(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorUp(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1048CA0>
	struct Unknown GetProjectorScale(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorScale(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1048BE0>
	struct Unknown GetProjectorPosition(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorPosition(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1048B20>
	enum class Unknow GetProjectorParameterType(struct FString ParamName, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorParameterType(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1048A30>
	struct Unknown GetProjectorDirection(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorDirection(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1048970>
	float GetProjectorAngle(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorAngle(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10488C0>
	struct Unknown GetParameterDescription(struct FString ParamName, int32_t DescIndex); // Function CustomizableObject.CustomizableObjectInstance.GetParameterDescription(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10482D0>
	struct FString GetIntParameterSelectedOption(struct FString ParamName, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.GetIntParameterSelectedOption(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10481A0>
	float GetFloatParameterSelectedOption(struct FString FloatParamName, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.GetFloatParameterSelectedOption(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1047F50>
	struct FString GetCurrentState(); // Function CustomizableObject.CustomizableObjectInstance.GetCurrentState(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1047ED0>
	struct Unknown GetColorParameterSelectedOption(struct FString ColorParamName); // Function CustomizableObject.CustomizableObjectInstance.GetColorParameterSelectedOption(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1047E10>
	char GetBoolParameterSelectedOption(struct FString BoolParamName); // Function CustomizableObject.CustomizableObjectInstance.GetBoolParameterSelectedOption(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1047D60>
	int32_t FindVectorParameterNameIndex(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.FindVectorParameterNameIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1047CB0>
	int32_t FindProjectorParameterNameIndex(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.FindProjectorParameterNameIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1047C00>
	int32_t FindIntParameterNameIndex(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.FindIntParameterNameIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1047AA0>
	int32_t FindFloatParameterNameIndex(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.FindFloatParameterNameIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10479F0>
	int32_t FindBoolParameterNameIndex(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.FindBoolParameterNameIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1047940>
	void Copy(struct Unknown Target); // Function CustomizableObject.CustomizableObjectInstance.Copy(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1047890>
	struct Unknown Clone(); // Function CustomizableObject.CustomizableObjectInstance.Clone(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1047860>
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

	void SetReleaseMutableTexturesImmediately(char bReleaseTextures); // Function CustomizableObject.CustomizableObjectSystem.SetReleaseMutableTexturesImmediately(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x104E560>
	int32_t GetTotalInstances(); // Function CustomizableObject.CustomizableObjectSystem.GetTotalInstances(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x104E530>
	int32_t GetTextureMemoryUsed(); // Function CustomizableObject.CustomizableObjectSystem.GetTextureMemoryUsed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x104E500>
	struct FString GetPluginVersion(); // Function CustomizableObject.CustomizableObjectSystem.GetPluginVersion(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x104E480>
	int32_t GetNumPendingInstances(); // Function CustomizableObject.CustomizableObjectSystem.GetNumPendingInstances(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x104E450>
	int32_t GetNumInstances(); // Function CustomizableObject.CustomizableObjectSystem.GetNumInstances(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x104E420>
	struct Unknown GetInstance(); // Function CustomizableObject.CustomizableObjectSystem.GetInstance(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x104E3F0>
	int32_t GetAverageBuildTime(); // Function CustomizableObject.CustomizableObjectSystem.GetAverageBuildTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x104E3C0>
	char AreEnginePatchesPresent(); // Function CustomizableObject.CustomizableObjectSystem.AreEnginePatchesPresent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x104E310>
};

// Class CustomizableObject.CustomizableSkeletalComponent
class UCustomizableSkeletalComponent : public USceneComponent {

public:

	float SkippedLastRenderTime; // 0x23C (4)
	struct Unknown CustomizableObjectInstance; // 0x240 (8)

	void UpdateSkeletalMeshAsync(char bNeverSkipUpdate); // Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x104E5F0>
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

// ScriptStruct CustomizableObject.CustomizableObjectProjectorParameterValue
struct FCustomizableObjectProjectorParameterValue {
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

// Function CustomizableObject.CustomizableObject.UnloadMaskOutCache
inline void UCustomizableObject::UnloadMaskOutCache() {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.UnloadMaskOutCache");

	struct UnloadMaskOutCache_Params {
		
	}; UnloadMaskOutCache_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CustomizableObject.CustomizableObject.LoadMaskOutCache
inline void UCustomizableObject::LoadMaskOutCache() {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.LoadMaskOutCache");

	struct LoadMaskOutCache_Params {
		
	}; LoadMaskOutCache_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CustomizableObject.CustomizableObject.GetStateUIMetadataFromIndex
inline struct Unknown UCustomizableObject::GetStateUIMetadataFromIndex(int32_t StateIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetStateUIMetadataFromIndex");

	struct GetStateUIMetadataFromIndex_Params {
		int32_t StateIndex;
		struct Unknown ReturnValue;

	}; GetStateUIMetadataFromIndex_Params Params;

	Params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObject.GetStateUIMetadata
inline struct Unknown UCustomizableObject::GetStateUIMetadata(struct FString StateName) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetStateUIMetadata");

	struct GetStateUIMetadata_Params {
		struct FString StateName;
		struct Unknown ReturnValue;

	}; GetStateUIMetadata_Params Params;

	Params.StateName = StateName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObject.GetStateParameterName
inline struct FString UCustomizableObject::GetStateParameterName(struct FString StateName, int32_t ParameterIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetStateParameterName");

	struct GetStateParameterName_Params {
		struct FString StateName;
		int32_t ParameterIndex;
		struct FString ReturnValue;

	}; GetStateParameterName_Params Params;

	Params.StateName = StateName;
	Params.ParameterIndex = ParameterIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObject.GetStateParameterCount
inline int32_t UCustomizableObject::GetStateParameterCount(struct FString StateName) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetStateParameterCount");

	struct GetStateParameterCount_Params {
		struct FString StateName;
		int32_t ReturnValue;

	}; GetStateParameterCount_Params Params;

	Params.StateName = StateName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObject.GetStateName
inline struct FString UCustomizableObject::GetStateName(int32_t StateIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetStateName");

	struct GetStateName_Params {
		int32_t StateIndex;
		struct FString ReturnValue;

	}; GetStateName_Params Params;

	Params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObject.GetStateCount
inline int32_t UCustomizableObject::GetStateCount() {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetStateCount");

	struct GetStateCount_Params {
		
		int32_t ReturnValue;

	}; GetStateCount_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObject.GetParameterUIMetadataFromIndex
inline struct Unknown UCustomizableObject::GetParameterUIMetadataFromIndex(int32_t ParamIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetParameterUIMetadataFromIndex");

	struct GetParameterUIMetadataFromIndex_Params {
		int32_t ParamIndex;
		struct Unknown ReturnValue;

	}; GetParameterUIMetadataFromIndex_Params Params;

	Params.ParamIndex = ParamIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObject.GetParameterUIMetadata
inline struct Unknown UCustomizableObject::GetParameterUIMetadata(struct FString ParamName) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetParameterUIMetadata");

	struct GetParameterUIMetadata_Params {
		struct FString ParamName;
		struct Unknown ReturnValue;

	}; GetParameterUIMetadata_Params Params;

	Params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObject.GetParameterTypeByName
inline enum class Unknow UCustomizableObject::GetParameterTypeByName(struct FString Name) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetParameterTypeByName");

	struct GetParameterTypeByName_Params {
		struct FString Name;
		enum class Unknow ReturnValue;

	}; GetParameterTypeByName_Params Params;

	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObject.GetParameterType
inline enum class Unknow UCustomizableObject::GetParameterType(int32_t ParamIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetParameterType");

	struct GetParameterType_Params {
		int32_t ParamIndex;
		enum class Unknow ReturnValue;

	}; GetParameterType_Params Params;

	Params.ParamIndex = ParamIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObject.GetParameterName
inline struct FString UCustomizableObject::GetParameterName(int32_t ParamIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetParameterName");

	struct GetParameterName_Params {
		int32_t ParamIndex;
		struct FString ReturnValue;

	}; GetParameterName_Params Params;

	Params.ParamIndex = ParamIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObject.GetParameterDescriptionCount
inline int32_t UCustomizableObject::GetParameterDescriptionCount(struct FString ParamName) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetParameterDescriptionCount");

	struct GetParameterDescriptionCount_Params {
		struct FString ParamName;
		int32_t ReturnValue;

	}; GetParameterDescriptionCount_Params Params;

	Params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObject.GetParameterCount
inline int32_t UCustomizableObject::GetParameterCount() {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetParameterCount");

	struct GetParameterCount_Params {
		
		int32_t ReturnValue;

	}; GetParameterCount_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObject.GetIntParameterNumOptions
inline int32_t UCustomizableObject::GetIntParameterNumOptions(int32_t ParamIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetIntParameterNumOptions");

	struct GetIntParameterNumOptions_Params {
		int32_t ParamIndex;
		int32_t ReturnValue;

	}; GetIntParameterNumOptions_Params Params;

	Params.ParamIndex = ParamIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObject.GetIntParameterAvailableOption
inline struct FString UCustomizableObject::GetIntParameterAvailableOption(int32_t ParamIndex, int32_t K) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetIntParameterAvailableOption");

	struct GetIntParameterAvailableOption_Params {
		int32_t ParamIndex;
		int32_t K;
		struct FString ReturnValue;

	}; GetIntParameterAvailableOption_Params Params;

	Params.ParamIndex = ParamIndex;
	Params.K = K;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObject.FindParameter
inline int32_t UCustomizableObject::FindParameter(struct FString Name) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.FindParameter");

	struct FindParameter_Params {
		struct FString Name;
		int32_t ReturnValue;

	}; FindParameter_Params Params;

	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObject.CreateInstance
inline struct Unknown UCustomizableObject::CreateInstance() {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.CreateInstance");

	struct CreateInstance_Params {
		
		struct Unknown ReturnValue;

	}; CreateInstance_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsync
inline void UCustomizableObjectInstance::UpdateSkeletalMeshAsync(char bIgnoreCloseDist, char bForceHighPriority) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsync");

	struct UpdateSkeletalMeshAsync_Params {
		char bIgnoreCloseDist;
		char bForceHighPriority;
	}; UpdateSkeletalMeshAsync_Params Params;

	Params.bIgnoreCloseDist = bIgnoreCloseDist;
	Params.bForceHighPriority = bForceHighPriority;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CustomizableObject.CustomizableObjectInstance.SetVectorParameterSelectedOption
inline void UCustomizableObjectInstance::SetVectorParameterSelectedOption(struct FString VectorParamName, struct Unknown VectorValue) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetVectorParameterSelectedOption");

	struct SetVectorParameterSelectedOption_Params {
		struct FString VectorParamName;
		struct Unknown VectorValue;
	}; SetVectorParameterSelectedOption_Params Params;

	Params.VectorParamName = VectorParamName;
	Params.VectorValue = VectorValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CustomizableObject.CustomizableObjectInstance.SetRandomValues
inline void UCustomizableObjectInstance::SetRandomValues() {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetRandomValues");

	struct SetRandomValues_Params {
		
	}; SetRandomValues_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CustomizableObject.CustomizableObjectInstance.SetProjectorValue
inline void UCustomizableObjectInstance::SetProjectorValue(struct FString ProjectorParamName, struct Unknown& Pos, struct Unknown& Direction, struct Unknown& Up, struct Unknown& Scale, float Angle, int32_t RangeIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetProjectorValue");

	struct SetProjectorValue_Params {
		struct FString ProjectorParamName;
		struct Unknown& Pos;
		struct Unknown& Direction;
		struct Unknown& Up;
		struct Unknown& Scale;
		float Angle;
		int32_t RangeIndex;
	}; SetProjectorValue_Params Params;

	Params.ProjectorParamName = ProjectorParamName;
	Params.Angle = Angle;
	Params.RangeIndex = RangeIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Pos = Params.Pos;
	Direction = Params.Direction;
	Up = Params.Up;
	Scale = Params.Scale;

}

// Function CustomizableObject.CustomizableObjectInstance.SetIntParameterSelectedOption
inline void UCustomizableObjectInstance::SetIntParameterSelectedOption(struct FString ParamName, struct FString SelectedOptionName, int32_t RangeIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetIntParameterSelectedOption");

	struct SetIntParameterSelectedOption_Params {
		struct FString ParamName;
		struct FString SelectedOptionName;
		int32_t RangeIndex;
	}; SetIntParameterSelectedOption_Params Params;

	Params.ParamName = ParamName;
	Params.SelectedOptionName = SelectedOptionName;
	Params.RangeIndex = RangeIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CustomizableObject.CustomizableObjectInstance.SetFloatParameterSelectedOption
inline void UCustomizableObjectInstance::SetFloatParameterSelectedOption(struct FString FloatParamName, float FloatValue, int32_t RangeIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetFloatParameterSelectedOption");

	struct SetFloatParameterSelectedOption_Params {
		struct FString FloatParamName;
		float FloatValue;
		int32_t RangeIndex;
	}; SetFloatParameterSelectedOption_Params Params;

	Params.FloatParamName = FloatParamName;
	Params.FloatValue = FloatValue;
	Params.RangeIndex = RangeIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CustomizableObject.CustomizableObjectInstance.SetCurrentState
inline void UCustomizableObjectInstance::SetCurrentState(struct FString StateName) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetCurrentState");

	struct SetCurrentState_Params {
		struct FString StateName;
	}; SetCurrentState_Params Params;

	Params.StateName = StateName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CustomizableObject.CustomizableObjectInstance.SetColorParameterSelectedOption
inline void UCustomizableObjectInstance::SetColorParameterSelectedOption(struct FString ColorParamName, struct Unknown ColorValue) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetColorParameterSelectedOption");

	struct SetColorParameterSelectedOption_Params {
		struct FString ColorParamName;
		struct Unknown ColorValue;
	}; SetColorParameterSelectedOption_Params Params;

	Params.ColorParamName = ColorParamName;
	Params.ColorValue = ColorValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CustomizableObject.CustomizableObjectInstance.SetBoolParameterSelectedOption
inline void UCustomizableObjectInstance::SetBoolParameterSelectedOption(struct FString BoolParamName, char BoolValue) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetBoolParameterSelectedOption");

	struct SetBoolParameterSelectedOption_Params {
		struct FString BoolParamName;
		char BoolValue;
	}; SetBoolParameterSelectedOption_Params Params;

	Params.BoolParamName = BoolParamName;
	Params.BoolValue = BoolValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CustomizableObject.CustomizableObjectInstance.SetAllParameterToDefault
inline void UCustomizableObjectInstance::SetAllParameterToDefault() {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetAllParameterToDefault");

	struct SetAllParameterToDefault_Params {
		
	}; SetAllParameterToDefault_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CustomizableObject.CustomizableObjectInstance.SetAllIntParameterToDefault2
inline void UCustomizableObjectInstance::SetAllIntParameterToDefault2() {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetAllIntParameterToDefault2");

	struct SetAllIntParameterToDefault2_Params {
		
	}; SetAllIntParameterToDefault2_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CustomizableObject.CustomizableObjectInstance.SetAllIntParameterToDefault
inline void UCustomizableObjectInstance::SetAllIntParameterToDefault() {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetAllIntParameterToDefault");

	struct SetAllIntParameterToDefault_Params {
		
	}; SetAllIntParameterToDefault_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CustomizableObject.CustomizableObjectInstance.IsParamMultidimensional
inline char UCustomizableObjectInstance::IsParamMultidimensional(struct FString ParamName) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.IsParamMultidimensional");

	struct IsParamMultidimensional_Params {
		struct FString ParamName;
		char ReturnValue;

	}; IsParamMultidimensional_Params Params;

	Params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObjectInstance.IsParameterRelevant
inline char UCustomizableObjectInstance::IsParameterRelevant(struct FString ParamName) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.IsParameterRelevant");

	struct IsParameterRelevant_Params {
		struct FString ParamName;
		char ReturnValue;

	}; IsParameterRelevant_Params Params;

	Params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObjectInstance.GetProjectorValue
inline void UCustomizableObjectInstance::GetProjectorValue(struct FString ProjectorParamName, struct Unknown& Pos, struct Unknown& Direction, struct Unknown& Up, struct Unknown& Scale, float& Angle, enum class Unknow& Type, int32_t RangeIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetProjectorValue");

	struct GetProjectorValue_Params {
		struct FString ProjectorParamName;
		struct Unknown& Pos;
		struct Unknown& Direction;
		struct Unknown& Up;
		struct Unknown& Scale;
		float& Angle;
		enum class Unknow& Type;
		int32_t RangeIndex;
	}; GetProjectorValue_Params Params;

	Params.ProjectorParamName = ProjectorParamName;
	Params.RangeIndex = RangeIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Pos = Params.Pos;
	Direction = Params.Direction;
	Up = Params.Up;
	Scale = Params.Scale;
	Angle = Params.Angle;
	Type = Params.Type;

}

// Function CustomizableObject.CustomizableObjectInstance.GetProjectorUp
inline struct Unknown UCustomizableObjectInstance::GetProjectorUp(struct FString ParamName) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetProjectorUp");

	struct GetProjectorUp_Params {
		struct FString ParamName;
		struct Unknown ReturnValue;

	}; GetProjectorUp_Params Params;

	Params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObjectInstance.GetProjectorScale
inline struct Unknown UCustomizableObjectInstance::GetProjectorScale(struct FString ParamName) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetProjectorScale");

	struct GetProjectorScale_Params {
		struct FString ParamName;
		struct Unknown ReturnValue;

	}; GetProjectorScale_Params Params;

	Params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObjectInstance.GetProjectorPosition
inline struct Unknown UCustomizableObjectInstance::GetProjectorPosition(struct FString ParamName) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetProjectorPosition");

	struct GetProjectorPosition_Params {
		struct FString ParamName;
		struct Unknown ReturnValue;

	}; GetProjectorPosition_Params Params;

	Params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObjectInstance.GetProjectorParameterType
inline enum class Unknow UCustomizableObjectInstance::GetProjectorParameterType(struct FString ParamName, int32_t RangeIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetProjectorParameterType");

	struct GetProjectorParameterType_Params {
		struct FString ParamName;
		int32_t RangeIndex;
		enum class Unknow ReturnValue;

	}; GetProjectorParameterType_Params Params;

	Params.ParamName = ParamName;
	Params.RangeIndex = RangeIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObjectInstance.GetProjectorDirection
inline struct Unknown UCustomizableObjectInstance::GetProjectorDirection(struct FString ParamName) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetProjectorDirection");

	struct GetProjectorDirection_Params {
		struct FString ParamName;
		struct Unknown ReturnValue;

	}; GetProjectorDirection_Params Params;

	Params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObjectInstance.GetProjectorAngle
inline float UCustomizableObjectInstance::GetProjectorAngle(struct FString ParamName) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetProjectorAngle");

	struct GetProjectorAngle_Params {
		struct FString ParamName;
		float ReturnValue;

	}; GetProjectorAngle_Params Params;

	Params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObjectInstance.GetParameterDescription
inline struct Unknown UCustomizableObjectInstance::GetParameterDescription(struct FString ParamName, int32_t DescIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetParameterDescription");

	struct GetParameterDescription_Params {
		struct FString ParamName;
		int32_t DescIndex;
		struct Unknown ReturnValue;

	}; GetParameterDescription_Params Params;

	Params.ParamName = ParamName;
	Params.DescIndex = DescIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObjectInstance.GetIntParameterSelectedOption
inline struct FString UCustomizableObjectInstance::GetIntParameterSelectedOption(struct FString ParamName, int32_t RangeIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetIntParameterSelectedOption");

	struct GetIntParameterSelectedOption_Params {
		struct FString ParamName;
		int32_t RangeIndex;
		struct FString ReturnValue;

	}; GetIntParameterSelectedOption_Params Params;

	Params.ParamName = ParamName;
	Params.RangeIndex = RangeIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObjectInstance.GetFloatParameterSelectedOption
inline float UCustomizableObjectInstance::GetFloatParameterSelectedOption(struct FString FloatParamName, int32_t RangeIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetFloatParameterSelectedOption");

	struct GetFloatParameterSelectedOption_Params {
		struct FString FloatParamName;
		int32_t RangeIndex;
		float ReturnValue;

	}; GetFloatParameterSelectedOption_Params Params;

	Params.FloatParamName = FloatParamName;
	Params.RangeIndex = RangeIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObjectInstance.GetCurrentState
inline struct FString UCustomizableObjectInstance::GetCurrentState() {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetCurrentState");

	struct GetCurrentState_Params {
		
		struct FString ReturnValue;

	}; GetCurrentState_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObjectInstance.GetColorParameterSelectedOption
inline struct Unknown UCustomizableObjectInstance::GetColorParameterSelectedOption(struct FString ColorParamName) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetColorParameterSelectedOption");

	struct GetColorParameterSelectedOption_Params {
		struct FString ColorParamName;
		struct Unknown ReturnValue;

	}; GetColorParameterSelectedOption_Params Params;

	Params.ColorParamName = ColorParamName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObjectInstance.GetBoolParameterSelectedOption
inline char UCustomizableObjectInstance::GetBoolParameterSelectedOption(struct FString BoolParamName) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetBoolParameterSelectedOption");

	struct GetBoolParameterSelectedOption_Params {
		struct FString BoolParamName;
		char ReturnValue;

	}; GetBoolParameterSelectedOption_Params Params;

	Params.BoolParamName = BoolParamName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObjectInstance.FindVectorParameterNameIndex
inline int32_t UCustomizableObjectInstance::FindVectorParameterNameIndex(struct FString ParamName) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.FindVectorParameterNameIndex");

	struct FindVectorParameterNameIndex_Params {
		struct FString ParamName;
		int32_t ReturnValue;

	}; FindVectorParameterNameIndex_Params Params;

	Params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObjectInstance.FindProjectorParameterNameIndex
inline int32_t UCustomizableObjectInstance::FindProjectorParameterNameIndex(struct FString ParamName) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.FindProjectorParameterNameIndex");

	struct FindProjectorParameterNameIndex_Params {
		struct FString ParamName;
		int32_t ReturnValue;

	}; FindProjectorParameterNameIndex_Params Params;

	Params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObjectInstance.FindIntParameterNameIndex
inline int32_t UCustomizableObjectInstance::FindIntParameterNameIndex(struct FString ParamName) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.FindIntParameterNameIndex");

	struct FindIntParameterNameIndex_Params {
		struct FString ParamName;
		int32_t ReturnValue;

	}; FindIntParameterNameIndex_Params Params;

	Params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObjectInstance.FindFloatParameterNameIndex
inline int32_t UCustomizableObjectInstance::FindFloatParameterNameIndex(struct FString ParamName) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.FindFloatParameterNameIndex");

	struct FindFloatParameterNameIndex_Params {
		struct FString ParamName;
		int32_t ReturnValue;

	}; FindFloatParameterNameIndex_Params Params;

	Params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObjectInstance.FindBoolParameterNameIndex
inline int32_t UCustomizableObjectInstance::FindBoolParameterNameIndex(struct FString ParamName) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.FindBoolParameterNameIndex");

	struct FindBoolParameterNameIndex_Params {
		struct FString ParamName;
		int32_t ReturnValue;

	}; FindBoolParameterNameIndex_Params Params;

	Params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObjectInstance.Copy
inline void UCustomizableObjectInstance::Copy(struct Unknown Target) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.Copy");

	struct Copy_Params {
		struct Unknown Target;
	}; Copy_Params Params;

	Params.Target = Target;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CustomizableObject.CustomizableObjectInstance.Clone
inline struct Unknown UCustomizableObjectInstance::Clone() {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.Clone");

	struct Clone_Params {
		
		struct Unknown ReturnValue;

	}; Clone_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObjectSystem.SetReleaseMutableTexturesImmediately
inline void UCustomizableObjectSystem::SetReleaseMutableTexturesImmediately(char bReleaseTextures) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectSystem.SetReleaseMutableTexturesImmediately");

	struct SetReleaseMutableTexturesImmediately_Params {
		char bReleaseTextures;
	}; SetReleaseMutableTexturesImmediately_Params Params;

	Params.bReleaseTextures = bReleaseTextures;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CustomizableObject.CustomizableObjectSystem.GetTotalInstances
inline int32_t UCustomizableObjectSystem::GetTotalInstances() {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectSystem.GetTotalInstances");

	struct GetTotalInstances_Params {
		
		int32_t ReturnValue;

	}; GetTotalInstances_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObjectSystem.GetTextureMemoryUsed
inline int32_t UCustomizableObjectSystem::GetTextureMemoryUsed() {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectSystem.GetTextureMemoryUsed");

	struct GetTextureMemoryUsed_Params {
		
		int32_t ReturnValue;

	}; GetTextureMemoryUsed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObjectSystem.GetPluginVersion
inline struct FString UCustomizableObjectSystem::GetPluginVersion() {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectSystem.GetPluginVersion");

	struct GetPluginVersion_Params {
		
		struct FString ReturnValue;

	}; GetPluginVersion_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObjectSystem.GetNumPendingInstances
inline int32_t UCustomizableObjectSystem::GetNumPendingInstances() {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectSystem.GetNumPendingInstances");

	struct GetNumPendingInstances_Params {
		
		int32_t ReturnValue;

	}; GetNumPendingInstances_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObjectSystem.GetNumInstances
inline int32_t UCustomizableObjectSystem::GetNumInstances() {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectSystem.GetNumInstances");

	struct GetNumInstances_Params {
		
		int32_t ReturnValue;

	}; GetNumInstances_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObjectSystem.GetInstance
inline struct Unknown UCustomizableObjectSystem::GetInstance() {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectSystem.GetInstance");

	struct GetInstance_Params {
		
		struct Unknown ReturnValue;

	}; GetInstance_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObjectSystem.GetAverageBuildTime
inline int32_t UCustomizableObjectSystem::GetAverageBuildTime() {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectSystem.GetAverageBuildTime");

	struct GetAverageBuildTime_Params {
		
		int32_t ReturnValue;

	}; GetAverageBuildTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObjectSystem.AreEnginePatchesPresent
inline char UCustomizableObjectSystem::AreEnginePatchesPresent() {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectSystem.AreEnginePatchesPresent");

	struct AreEnginePatchesPresent_Params {
		
		char ReturnValue;

	}; AreEnginePatchesPresent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync
inline void UCustomizableSkeletalComponent::UpdateSkeletalMeshAsync(char bNeverSkipUpdate) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync");

	struct UpdateSkeletalMeshAsync_Params {
		char bNeverSkipUpdate;
	}; UpdateSkeletalMeshAsync_Params Params;

	Params.bNeverSkipUpdate = bNeverSkipUpdate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

