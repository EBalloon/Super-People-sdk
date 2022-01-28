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

	struct TArray<struct FGeneratedMaterial> GeneratedMaterials; // 0x30 (16)
	struct TArray<struct FGeneratedMesh> GeneratedMeshes; // 0x40 (16)
	struct TArray<struct FGeneratedTexture> GeneratedTextures; // 0x50 (16)
	struct TArray<struct FParameterDecorations> ParameterDecorations; // 0xE8 (16)
	struct TMap<struct FString, struct TWeakObjectPtr<struct UTexture2D>> TextureReuseCache; // 0x108 (80)
	struct TArray<struct UMaterialInterface> ReferencedMaterials; // 0x320 (16)
	struct TArray<struct UPhysicsAsset> PhysicsAssetsToMerge; // 0x3D0 (16)
};

// Class CustomizableObject.MutableMaskOutCache
class UMutableMaskOutCache : public Object {

public:

	struct TMap<struct FString, struct FString> Materials; // 0x28 (80)
	struct TMap<struct FString, struct FMaskOutTexture> Textures; // 0x78 (80)
};

// Class CustomizableObject.CustomizableObject
class UCustomizableObject : public Object {

public:

	struct USkeletalMesh ReferenceSkeletalMesh; // 0x28 (8)
	struct UStaticMesh ReferenceStaticMesh; // 0x30 (8)
	enum class ECustomizableObjectRelevancy Relevancy; // 0x38 (1)
	char bDisableTextureLayoutManagement : 0; // 0x39 (1)
	struct TArray<struct TSoftObjectPtr<UMaterialInterface>> ReferencedMaterials; // 0x40 (16)
	struct TArray<struct FMutableModelImageProperties> ImageProperties; // 0x50 (16)
	struct TMap<struct FString, struct FCustomizableObjectIdPair> GroupNodeMap; // 0x60 (80)
	struct TArray<struct UMorphTarget> ContributingMorphTargets; // 0xB0 (16)
	struct TArray<struct FMorphTargetVertexIndex> MorphTargetReconstructionInfo; // 0xC0 (16)
	struct FGuid VersionId; // 0xD0 (16)
	struct TArray<struct FMutableModelParameterProperties> ParameterProperties; // 0xE0 (16)
	struct TMap<struct FString, struct FParameterUIData> ParameterUIDataMap; // 0x140 (80)
	struct TMap<struct FString, struct FParameterUIData> StateUIDataMap; // 0x190 (80)
	struct TMap<struct FString, struct TSoftObjectPtr<UPhysicsAsset>> PhysicsAssetsMap; // 0x1E0 (80)
	struct TSoftObjectPtr<UMutableMaskOutCache> MaskOutCache; // 0x230 (40)
	char bIsChildObject : 0; // 0x258 (1)
	struct UMutableMaskOutCache MaskOutCache_HardRef; // 0x260 (8)

	void UnloadMaskOutCache(); // Function CustomizableObject.CustomizableObject.UnloadMaskOutCache(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105D2F0>
	void LoadMaskOutCache(); // Function CustomizableObject.CustomizableObject.LoadMaskOutCache(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105CB00>
	struct FParameterUIData GetStateUIMetadataFromIndex(int32_t StateIndex); // Function CustomizableObject.CustomizableObject.GetStateUIMetadataFromIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105C870>
	struct FParameterUIData GetStateUIMetadata(struct FString StateName); // Function CustomizableObject.CustomizableObject.GetStateUIMetadata(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105C730>
	struct FString GetStateParameterName(struct FString StateName, int32_t ParameterIndex); // Function CustomizableObject.CustomizableObject.GetStateParameterName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105C600>
	int32_t GetStateParameterCount(struct FString StateName); // Function CustomizableObject.CustomizableObject.GetStateParameterCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105C550>
	struct FString GetStateName(int32_t StateIndex); // Function CustomizableObject.CustomizableObject.GetStateName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105C470>
	int32_t GetStateCount(); // Function CustomizableObject.CustomizableObject.GetStateCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105C440>
	struct FParameterUIData GetParameterUIMetadataFromIndex(int32_t ParamIndex); // Function CustomizableObject.CustomizableObject.GetParameterUIMetadataFromIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105BBA0>
	struct FParameterUIData GetParameterUIMetadata(struct FString ParamName); // Function CustomizableObject.CustomizableObject.GetParameterUIMetadata(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105BA60>
	enum class EMutableParameterType GetParameterTypeByName(struct FString Name); // Function CustomizableObject.CustomizableObject.GetParameterTypeByName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105B9B0>
	enum class EMutableParameterType GetParameterType(int32_t ParamIndex); // Function CustomizableObject.CustomizableObject.GetParameterType(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105B920>
	struct FString GetParameterName(int32_t ParamIndex); // Function CustomizableObject.CustomizableObject.GetParameterName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105B880>
	int32_t GetParameterDescriptionCount(struct FString ParamName); // Function CustomizableObject.CustomizableObject.GetParameterDescriptionCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105B7D0>
	int32_t GetParameterCount(); // Function CustomizableObject.CustomizableObject.GetParameterCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105B6B0>
	int32_t GetIntParameterNumOptions(int32_t ParamIndex); // Function CustomizableObject.CustomizableObject.GetIntParameterNumOptions(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105B520>
	struct FString GetIntParameterAvailableOption(int32_t ParamIndex, int32_t K); // Function CustomizableObject.CustomizableObject.GetIntParameterAvailableOption(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105B450>
	int32_t FindParameter(struct FString Name); // Function CustomizableObject.CustomizableObject.FindParameter(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105AF60>
	struct UCustomizableObjectInstance CreateInstance(); // Function CustomizableObject.CustomizableObject.CreateInstance(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105AD20>
};

// Class CustomizableObject.CustomizableObjectInstance
class UCustomizableObjectInstance : public Object {

public:

	struct UCustomizableObject CustomizableObject; // 0x28 (8)
	struct USkeletalMesh SkeletalMesh; // 0x30 (8)
	struct TArray<struct FCustomizableObjectBoolParameterValue> BoolParameters; // 0x38 (16)
	struct TArray<struct FCustomizableObjectIntParameterValue> IntParameters; // 0x48 (16)
	struct TArray<struct FCustomizableObjectFloatParameterValue> FloatParameters; // 0x58 (16)
	struct TArray<struct FCustomizableObjectTextureParameterValue> TextureParameters; // 0x68 (16)
	struct TArray<struct FCustomizableObjectVectorParameterValue> VectorParameters; // 0x78 (16)
	struct TArray<struct FCustomizableObjectProjectorParameterValue> ProjectorParameters; // 0x88 (16)
	char bBuildParameterDecorations : 0; // 0x98 (1)
	struct FMulticastInlineDelegate UpdatedDelegate; // 0xA0 (16)
	struct FString SkeletalMeshStatus; // 0x110 (16)
	struct TArray<struct FString> MaterialTags; // 0x140 (16)
	struct UCustomizableInstancePrivateData PrivateData; // 0x1D0 (8)

	void UpdateSkeletalMeshAsync(char bIgnoreCloseDist, char bForceHighPriority); // Function CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsync(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105D310>
	void SetVectorParameterSelectedOption(struct FString VectorParamName, struct FLinearColor VectorValue); // Function CustomizableObject.CustomizableObjectInstance.SetVectorParameterSelectedOption(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105CC70>
	void SetRandomValues(); // Function CustomizableObject.CustomizableObjectInstance.SetRandomValues(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105D2D0>
	void SetProjectorValue(struct FString ProjectorParamName, struct FVector& Pos, struct FVector& Direction, struct FVector& Up, struct FVector& Scale, float Angle, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.SetProjectorValue(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105D070>
	void SetIntParameterSelectedOption(struct FString ParamName, struct FString SelectedOptionName, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.SetIntParameterSelectedOption(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105CF30>
	void SetFloatParameterSelectedOption(struct FString FloatParamName, float FloatValue, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.SetFloatParameterSelectedOption(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105CE00>
	void SetCurrentState(struct FString StateName); // Function CustomizableObject.CustomizableObjectInstance.SetCurrentState(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105CD60>
	void SetColorParameterSelectedOption(struct FString ColorParamName, struct FLinearColor ColorValue); // Function CustomizableObject.CustomizableObjectInstance.SetColorParameterSelectedOption(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105CC70>
	void SetBoolParameterSelectedOption(struct FString BoolParamName, char BoolValue); // Function CustomizableObject.CustomizableObjectInstance.SetBoolParameterSelectedOption(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105CB80>
	void SetAllParameterToDefault(); // Function CustomizableObject.CustomizableObjectInstance.SetAllParameterToDefault(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105CB60>
	void SetAllIntParameterToDefault2(); // Function CustomizableObject.CustomizableObjectInstance.SetAllIntParameterToDefault2(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105CB20>
	void SetAllIntParameterToDefault(); // Function CustomizableObject.CustomizableObjectInstance.SetAllIntParameterToDefault(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105CB40>
	char IsParamMultidimensional(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.IsParamMultidimensional(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105C9A0>
	char IsParameterRelevant(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.IsParameterRelevant(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105CA50>
	void GetProjectorValue(struct FString ProjectorParamName, struct FVector& Pos, struct FVector& Direction, struct FVector& Up, struct FVector& Scale, float& Angle, enum class ECustomizableObjectProjectorType& Type, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorValue(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105C170>
	struct FVector GetProjectorUp(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorUp(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105C0B0>
	struct FVector GetProjectorScale(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorScale(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105BFF0>
	struct FVector GetProjectorPosition(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorPosition(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105BF30>
	enum class ECustomizableObjectProjectorType GetProjectorParameterType(struct FString ParamName, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorParameterType(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105BE40>
	struct FVector GetProjectorDirection(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorDirection(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105BD80>
	float GetProjectorAngle(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorAngle(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105BCD0>
	struct UTexture2D GetParameterDescription(struct FString ParamName, int32_t DescIndex); // Function CustomizableObject.CustomizableObjectInstance.GetParameterDescription(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105B6E0>
	struct FString GetIntParameterSelectedOption(struct FString ParamName, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.GetIntParameterSelectedOption(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105B5B0>
	float GetFloatParameterSelectedOption(struct FString FloatParamName, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.GetFloatParameterSelectedOption(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105B360>
	struct FString GetCurrentState(); // Function CustomizableObject.CustomizableObjectInstance.GetCurrentState(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105B2E0>
	struct FLinearColor GetColorParameterSelectedOption(struct FString ColorParamName); // Function CustomizableObject.CustomizableObjectInstance.GetColorParameterSelectedOption(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105B220>
	char GetBoolParameterSelectedOption(struct FString BoolParamName); // Function CustomizableObject.CustomizableObjectInstance.GetBoolParameterSelectedOption(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105B170>
	int32_t FindVectorParameterNameIndex(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.FindVectorParameterNameIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105B0C0>
	int32_t FindProjectorParameterNameIndex(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.FindProjectorParameterNameIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105B010>
	int32_t FindIntParameterNameIndex(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.FindIntParameterNameIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105AEB0>
	int32_t FindFloatParameterNameIndex(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.FindFloatParameterNameIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105AE00>
	int32_t FindBoolParameterNameIndex(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.FindBoolParameterNameIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105AD50>
	void Copy(struct UCustomizableObjectInstance Target); // Function CustomizableObject.CustomizableObjectInstance.Copy(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105ACA0>
	struct UCustomizableObjectInstance Clone(); // Function CustomizableObject.CustomizableObjectInstance.Clone(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105AC70>
};

// Class CustomizableObject.CustomizableObjectImageProviderArray
class UCustomizableObjectImageProviderArray : public UCustomizableSystemImageProvider {

public:

	struct TArray<struct UTexture2D> Textures; // 0x28 (16)
};

// Class CustomizableObject.CustomizableObjectSystem
class UCustomizableObjectSystem : public Object {

public:

	struct TArray<struct FPendingReleaseSkeletalMeshInfo> PendingReleaseSkeletalMesh; // 0x28 (16)
	struct UCustomizableObjectImageProviderArray PreviewExternalImageProvider; // 0x48 (8)
	struct TArray<struct UTexture2D> ProtectedCachedTextures; // 0x150 (16)
	struct UCustomizableInstanceLODManagementBase DefaultInstanceLODManagement; // 0x170 (8)
	struct UCustomizableInstanceLODManagementBase CurrentInstanceLODManagement; // 0x178 (8)

	void SetReleaseMutableTexturesImmediately(char bReleaseTextures); // Function CustomizableObject.CustomizableObjectSystem.SetReleaseMutableTexturesImmediately(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061970>
	int32_t GetTotalInstances(); // Function CustomizableObject.CustomizableObjectSystem.GetTotalInstances(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061940>
	int32_t GetTextureMemoryUsed(); // Function CustomizableObject.CustomizableObjectSystem.GetTextureMemoryUsed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061910>
	struct FString GetPluginVersion(); // Function CustomizableObject.CustomizableObjectSystem.GetPluginVersion(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061890>
	int32_t GetNumPendingInstances(); // Function CustomizableObject.CustomizableObjectSystem.GetNumPendingInstances(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061860>
	int32_t GetNumInstances(); // Function CustomizableObject.CustomizableObjectSystem.GetNumInstances(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061830>
	struct UCustomizableObjectSystem GetInstance(); // Function CustomizableObject.CustomizableObjectSystem.GetInstance(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061800>
	int32_t GetAverageBuildTime(); // Function CustomizableObject.CustomizableObjectSystem.GetAverageBuildTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10617D0>
	char AreEnginePatchesPresent(); // Function CustomizableObject.CustomizableObjectSystem.AreEnginePatchesPresent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061720>
};

// Class CustomizableObject.CustomizableSkeletalComponent
class UCustomizableSkeletalComponent : public USceneComponent {

public:

	float SkippedLastRenderTime; // 0x234 (4)
	struct UCustomizableObjectInstance CustomizableObjectInstance; // 0x238 (8)

	void UpdateSkeletalMeshAsync(char bNeverSkipUpdate); // Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061A00>
};

// Class CustomizableObject.CustomizableSkeletalMeshActor
class ACustomizableSkeletalMeshActor : public ASkeletalMeshActor {

public:

	struct UCustomizableSkeletalComponent CustomizableSkeletalComponent; // 0x3B0 (8)
};

// ScriptStruct CustomizableObject.ParameterDecorations
struct FParameterDecorations {
	struct TArray<struct UTexture2D> Images; // 0x0 (16)
};

// ScriptStruct CustomizableObject.GeneratedMaterial
struct FGeneratedMaterial {
	struct TArray<struct FGeneratedTexture> Textures; // 0x0 (16)
};

// ScriptStruct CustomizableObject.GeneratedTexture
struct FGeneratedTexture {
	int32_t ID; // 0x0 (4)
	struct FString Name; // 0x8 (16)
	struct UTexture2D Texture; // 0x18 (8)
};

// ScriptStruct CustomizableObject.GeneratedMesh
struct FGeneratedMesh {
	int32_t ID; // 0x0 (4)
	struct UStaticMesh Mesh; // 0x8 (8)
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
	struct TArray<uint32_t> Data; // 0x8 (16)
};

// ScriptStruct CustomizableObject.MutableModelParameterProperties
struct FMutableModelParameterProperties {
	struct FString Name; // 0x0 (16)
	enum class EMutableParameterType Type; // 0x10 (1)
	int32_t ImageDescriptionCount; // 0x14 (4)
	struct TArray<struct FMutableModelParameterValue> PossibleValues; // 0x18 (16)
	struct FMutableParamUIMetadata ParamUIMetadata; // 0x28 (240)
};

// ScriptStruct CustomizableObject.MutableParamUIMetadata
struct FMutableParamUIMetadata {
	struct FString ObjectFriendlyName; // 0x0 (16)
	struct FString UISectionName; // 0x10 (16)
	int32_t UIOrder; // 0x20 (4)
	struct TSoftObjectPtr<UTexture2D> UIThumbnail; // 0x28 (40)
	struct TMap<struct FString, struct FString> ExtraInformation; // 0x50 (80)
	struct TMap<struct FString, struct TSoftObjectPtr<Object>> ExtraAssets; // 0xA0 (80)
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
	struct TArray<struct FCustomizableObjectBoolParameterValue> BoolParameters; // 0x10 (16)
	struct TArray<struct FCustomizableObjectIntParameterValue> IntParameters; // 0x20 (16)
	struct TArray<struct FCustomizableObjectFloatParameterValue> FloatParameters; // 0x30 (16)
	struct TArray<struct FCustomizableObjectTextureParameterValue> TextureParameters; // 0x40 (16)
	struct TArray<struct FCustomizableObjectVectorParameterValue> VectorParameters; // 0x50 (16)
	struct TArray<struct FCustomizableObjectProjectorParameterValue> ProjectorParameters; // 0x60 (16)
};

// ScriptStruct CustomizableObject.CustomizableObjectProjectorParameterValue
struct FCustomizableObjectProjectorParameterValue {
	struct FString ParameterName; // 0x0 (16)
	struct FCustomizableObjectProjector Value; // 0x10 (56)
	struct FString UID; // 0x48 (16)
	struct TArray<struct FCustomizableObjectProjector> RangeValues; // 0x58 (16)
};

// ScriptStruct CustomizableObject.CustomizableObjectProjector
struct FCustomizableObjectProjector {
	struct FVector Position; // 0x0 (12)
	struct FVector Direction; // 0xC (12)
	struct FVector Up; // 0x18 (12)
	struct FVector Scale; // 0x24 (12)
	enum class ECustomizableObjectProjectorType ProjectionType; // 0x30 (1)
	float Angle; // 0x34 (4)
};

// ScriptStruct CustomizableObject.CustomizableObjectVectorParameterValue
struct FCustomizableObjectVectorParameterValue {
	struct FString ParameterName; // 0x0 (16)
	struct FLinearColor ParameterValue; // 0x10 (16)
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
	struct TArray<float> ParameterRangeValues; // 0x28 (16)
};

// ScriptStruct CustomizableObject.CustomizableObjectIntParameterValue
struct FCustomizableObjectIntParameterValue {
	struct FString ParameterName; // 0x0 (16)
	struct FString ParameterValueName; // 0x10 (16)
	struct FString UID; // 0x20 (16)
	struct TArray<struct FString> ParameterRangeValueNames; // 0x30 (16)
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
	struct UTexture2D Texture; // 0x8 (8)
};

// ScriptStruct CustomizableObject.PendingReleaseSkeletalMeshInfo
struct FPendingReleaseSkeletalMeshInfo {
	struct USkeletalMesh SkeletalMesh; // 0x0 (8)
	double Timestamp; // 0x8 (8)
};

// ScriptStruct CustomizableObject.ParameterUIData
struct FParameterUIData {
	struct FString Name; // 0x0 (16)
	struct FMutableParamUIMetadata ParamUIMetadata; // 0x10 (240)
	enum class EMutableParameterType Type; // 0x100 (1)
	struct TArray<struct FIntegerParameterUIData> ArrayIntegerParameterOption; // 0x108 (16)
	enum class ECustomizableObjectGroupType IntegerParameterGroupType; // 0x118 (1)
	char bDontCompressRuntimeTextures : 0; // 0x119 (1)
};

// ScriptStruct CustomizableObject.IntegerParameterUIData
struct FIntegerParameterUIData {
	struct FString Name; // 0x0 (16)
	struct FMutableParamUIMetadata ParamUIMetadata; // 0x10 (240)
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
inline struct FParameterUIData UCustomizableObject::GetStateUIMetadataFromIndex(int32_t StateIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetStateUIMetadataFromIndex");

	struct GetStateUIMetadataFromIndex_Params {
		int32_t StateIndex;
		struct FParameterUIData ReturnValue;

	}; GetStateUIMetadataFromIndex_Params Params;

	Params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObject.GetStateUIMetadata
inline struct FParameterUIData UCustomizableObject::GetStateUIMetadata(struct FString StateName) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetStateUIMetadata");

	struct GetStateUIMetadata_Params {
		struct FString StateName;
		struct FParameterUIData ReturnValue;

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
inline struct FParameterUIData UCustomizableObject::GetParameterUIMetadataFromIndex(int32_t ParamIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetParameterUIMetadataFromIndex");

	struct GetParameterUIMetadataFromIndex_Params {
		int32_t ParamIndex;
		struct FParameterUIData ReturnValue;

	}; GetParameterUIMetadataFromIndex_Params Params;

	Params.ParamIndex = ParamIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObject.GetParameterUIMetadata
inline struct FParameterUIData UCustomizableObject::GetParameterUIMetadata(struct FString ParamName) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetParameterUIMetadata");

	struct GetParameterUIMetadata_Params {
		struct FString ParamName;
		struct FParameterUIData ReturnValue;

	}; GetParameterUIMetadata_Params Params;

	Params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObject.GetParameterTypeByName
inline enum class EMutableParameterType UCustomizableObject::GetParameterTypeByName(struct FString Name) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetParameterTypeByName");

	struct GetParameterTypeByName_Params {
		struct FString Name;
		enum class EMutableParameterType ReturnValue;

	}; GetParameterTypeByName_Params Params;

	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObject.GetParameterType
inline enum class EMutableParameterType UCustomizableObject::GetParameterType(int32_t ParamIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetParameterType");

	struct GetParameterType_Params {
		int32_t ParamIndex;
		enum class EMutableParameterType ReturnValue;

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
inline struct UCustomizableObjectInstance UCustomizableObject::CreateInstance() {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.CreateInstance");

	struct CreateInstance_Params {
		
		struct UCustomizableObjectInstance ReturnValue;

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
inline void UCustomizableObjectInstance::SetVectorParameterSelectedOption(struct FString VectorParamName, struct FLinearColor VectorValue) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetVectorParameterSelectedOption");

	struct SetVectorParameterSelectedOption_Params {
		struct FString VectorParamName;
		struct FLinearColor VectorValue;
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
inline void UCustomizableObjectInstance::SetProjectorValue(struct FString ProjectorParamName, struct FVector& Pos, struct FVector& Direction, struct FVector& Up, struct FVector& Scale, float Angle, int32_t RangeIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetProjectorValue");

	struct SetProjectorValue_Params {
		struct FString ProjectorParamName;
		struct FVector& Pos;
		struct FVector& Direction;
		struct FVector& Up;
		struct FVector& Scale;
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
inline void UCustomizableObjectInstance::SetColorParameterSelectedOption(struct FString ColorParamName, struct FLinearColor ColorValue) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetColorParameterSelectedOption");

	struct SetColorParameterSelectedOption_Params {
		struct FString ColorParamName;
		struct FLinearColor ColorValue;
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
inline void UCustomizableObjectInstance::GetProjectorValue(struct FString ProjectorParamName, struct FVector& Pos, struct FVector& Direction, struct FVector& Up, struct FVector& Scale, float& Angle, enum class ECustomizableObjectProjectorType& Type, int32_t RangeIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetProjectorValue");

	struct GetProjectorValue_Params {
		struct FString ProjectorParamName;
		struct FVector& Pos;
		struct FVector& Direction;
		struct FVector& Up;
		struct FVector& Scale;
		float& Angle;
		enum class ECustomizableObjectProjectorType& Type;
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
inline struct FVector UCustomizableObjectInstance::GetProjectorUp(struct FString ParamName) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetProjectorUp");

	struct GetProjectorUp_Params {
		struct FString ParamName;
		struct FVector ReturnValue;

	}; GetProjectorUp_Params Params;

	Params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObjectInstance.GetProjectorScale
inline struct FVector UCustomizableObjectInstance::GetProjectorScale(struct FString ParamName) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetProjectorScale");

	struct GetProjectorScale_Params {
		struct FString ParamName;
		struct FVector ReturnValue;

	}; GetProjectorScale_Params Params;

	Params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObjectInstance.GetProjectorPosition
inline struct FVector UCustomizableObjectInstance::GetProjectorPosition(struct FString ParamName) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetProjectorPosition");

	struct GetProjectorPosition_Params {
		struct FString ParamName;
		struct FVector ReturnValue;

	}; GetProjectorPosition_Params Params;

	Params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObjectInstance.GetProjectorParameterType
inline enum class ECustomizableObjectProjectorType UCustomizableObjectInstance::GetProjectorParameterType(struct FString ParamName, int32_t RangeIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetProjectorParameterType");

	struct GetProjectorParameterType_Params {
		struct FString ParamName;
		int32_t RangeIndex;
		enum class ECustomizableObjectProjectorType ReturnValue;

	}; GetProjectorParameterType_Params Params;

	Params.ParamName = ParamName;
	Params.RangeIndex = RangeIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CustomizableObject.CustomizableObjectInstance.GetProjectorDirection
inline struct FVector UCustomizableObjectInstance::GetProjectorDirection(struct FString ParamName) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetProjectorDirection");

	struct GetProjectorDirection_Params {
		struct FString ParamName;
		struct FVector ReturnValue;

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
inline struct UTexture2D UCustomizableObjectInstance::GetParameterDescription(struct FString ParamName, int32_t DescIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetParameterDescription");

	struct GetParameterDescription_Params {
		struct FString ParamName;
		int32_t DescIndex;
		struct UTexture2D ReturnValue;

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
inline struct FLinearColor UCustomizableObjectInstance::GetColorParameterSelectedOption(struct FString ColorParamName) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetColorParameterSelectedOption");

	struct GetColorParameterSelectedOption_Params {
		struct FString ColorParamName;
		struct FLinearColor ReturnValue;

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
inline void UCustomizableObjectInstance::Copy(struct UCustomizableObjectInstance Target) {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.Copy");

	struct Copy_Params {
		struct UCustomizableObjectInstance Target;
	}; Copy_Params Params;

	Params.Target = Target;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CustomizableObject.CustomizableObjectInstance.Clone
inline struct UCustomizableObjectInstance UCustomizableObjectInstance::Clone() {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.Clone");

	struct Clone_Params {
		
		struct UCustomizableObjectInstance ReturnValue;

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
inline struct UCustomizableObjectSystem UCustomizableObjectSystem::GetInstance() {
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectSystem.GetInstance");

	struct GetInstance_Params {
		
		struct UCustomizableObjectSystem ReturnValue;

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

