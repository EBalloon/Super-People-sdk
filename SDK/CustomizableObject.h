// Enum CustomizableObject.ECustomizableObjectRelevancy
enum class ECustomizableObjectRelevancy : uint8 {
	ECustomizableObjectRelevancy = 0
	ECustomizableObjectRelevancy = 1
	ECustomizableObjectRelevancy = 2
};

// Enum CustomizableObject.ECustomizableObjectProjectorType
enum class ECustomizableObjectProjectorType : uint8 {
	ECustomizableObjectProjectorType = 0
	ECustomizableObjectProjectorType = 1
	ECustomizableObjectProjectorType = 2
	ECustomizableObjectProjectorType = 3
};

// Enum CustomizableObject.EMutableCompileMeshType
enum class EMutableCompileMeshType : uint8 {
	EMutableCompileMeshType = 0
	EMutableCompileMeshType = 1
	EMutableCompileMeshType = 2
	EMutableCompileMeshType = 3
	EMutableCompileMeshType = 4
	EMutableCompileMeshType = 5
};

// Enum CustomizableObject.ECustomizableObjectGroupType
enum class ECustomizableObjectGroupType : uint8 {
	ECustomizableObjectGroupType = 0
	ECustomizableObjectGroupType = 1
	ECustomizableObjectGroupType = 2
	ECustomizableObjectGroupType = 3
	ECustomizableObjectGroupType = 4
};

// Enum CustomizableObject.EMutableParameterType
enum class EMutableParameterType : uint8 {
	EMutableParameterType = 0
	EMutableParameterType = 1
	EMutableParameterType = 2
	EMutableParameterType = 3
	EMutableParameterType = 4
	EMutableParameterType = 5
	EMutableParameterType = 6
	EMutableParameterType = 7
};

// Class CustomizableObject.CustomizableInstancePrivateData
struct UCustomizableInstancePrivateData : Object {
	struct TArray<Unknown> GeneratedMaterials; // 0x30 (16)
	struct TArray<Unknown> GeneratedMeshes; // 0x40 (16)
	struct TArray<Unknown> GeneratedTextures; // 0x50 (16)
	struct TArray<Unknown> ParameterDecorations; // 0xE8 (16)
	struct TMap<Unknown, Unknown>Unknown TextureReuseCache; // 0x108 (80)
	struct TArray<Unknown> ReferencedMaterials; // 0x320 (16)
	struct TArray<Unknown> PhysicsAssetsToMerge; // 0x3D0 (16)
};

// Class CustomizableObject.MutableMaskOutCache
struct UMutableMaskOutCache : Object {
	struct TMap<Unknown, Unknown>Unknown Materials; // 0x28 (80)
	struct TMap<Unknown, Unknown>Unknown Textures; // 0x78 (80)
};

// Class CustomizableObject.CustomizableObject
struct UCustomizableObject : Object {
	struct Unknown ReferenceSkeletalMesh; // 0x28 (8)
	struct Unknown ReferenceStaticMesh; // 0x30 (8)
	enum class Unknow Relevancy; // 0x38 (1)
	char bDisableTextureLayoutManagement : 0; // 0x39 (1)
	struct TArray<Unknown> ReferencedMaterials; // 0x40 (16)
	struct TArray<Unknown> ImageProperties; // 0x50 (16)
	struct TMap<Unknown, Unknown>Unknown GroupNodeMap; // 0x60 (80)
	struct TArray<Unknown> ContributingMorphTargets; // 0xB0 (16)
	struct TArray<Unknown> MorphTargetReconstructionInfo; // 0xC0 (16)
	struct Unknown VersionId; // 0xD0 (16)
	struct TArray<Unknown> ParameterProperties; // 0xE0 (16)
	struct TMap<Unknown, Unknown>Unknown ParameterUIDataMap; // 0x140 (80)
	struct TMap<Unknown, Unknown>Unknown StateUIDataMap; // 0x190 (80)
	struct TMap<Unknown, Unknown>Unknown PhysicsAssetsMap; // 0x1E0 (80)
	struct TSoftObjectPtr<Unknown> MaskOutCache; // 0x230 (40)
	char bIsChildObject : 0; // 0x258 (1)
	struct Unknown MaskOutCache_HardRef; // 0x260 (8)

	void UnloadMaskOutCache(); // Function CustomizableObject.CustomizableObject.UnloadMaskOutCache(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1038100>
	void LoadMaskOutCache(); // Function CustomizableObject.CustomizableObject.LoadMaskOutCache(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037910>
	struct Unknown GetStateUIMetadataFromIndex(int32_t StateIndex); // Function CustomizableObject.CustomizableObject.GetStateUIMetadataFromIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037680>
	struct Unknown GetStateUIMetadata(struct FString StateName); // Function CustomizableObject.CustomizableObject.GetStateUIMetadata(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037540>
	struct FString GetStateParameterName(struct FString StateName, int32_t ParameterIndex); // Function CustomizableObject.CustomizableObject.GetStateParameterName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037410>
	int32_t GetStateParameterCount(struct FString StateName); // Function CustomizableObject.CustomizableObject.GetStateParameterCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037360>
	struct FString GetStateName(int32_t StateIndex); // Function CustomizableObject.CustomizableObject.GetStateName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037280>
	int32_t GetStateCount(); // Function CustomizableObject.CustomizableObject.GetStateCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037250>
	struct Unknown GetParameterUIMetadataFromIndex(int32_t ParamIndex); // Function CustomizableObject.CustomizableObject.GetParameterUIMetadataFromIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10369B0>
	struct Unknown GetParameterUIMetadata(struct FString ParamName); // Function CustomizableObject.CustomizableObject.GetParameterUIMetadata(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1036870>
	enum class Unknow GetParameterTypeByName(struct FString Name); // Function CustomizableObject.CustomizableObject.GetParameterTypeByName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10367C0>
	enum class Unknow GetParameterType(int32_t ParamIndex); // Function CustomizableObject.CustomizableObject.GetParameterType(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1036730>
	struct FString GetParameterName(int32_t ParamIndex); // Function CustomizableObject.CustomizableObject.GetParameterName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1036690>
	int32_t GetParameterDescriptionCount(struct FString ParamName); // Function CustomizableObject.CustomizableObject.GetParameterDescriptionCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10365E0>
	int32_t GetParameterCount(); // Function CustomizableObject.CustomizableObject.GetParameterCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10364C0>
	int32_t GetIntParameterNumOptions(int32_t ParamIndex); // Function CustomizableObject.CustomizableObject.GetIntParameterNumOptions(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1036330>
	struct FString GetIntParameterAvailableOption(int32_t ParamIndex, int32_t K); // Function CustomizableObject.CustomizableObject.GetIntParameterAvailableOption(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1036260>
	int32_t FindParameter(struct FString Name); // Function CustomizableObject.CustomizableObject.FindParameter(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1035D70>
	struct Unknown CreateInstance(); // Function CustomizableObject.CustomizableObject.CreateInstance(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1035B30>
};

// Class CustomizableObject.CustomizableObjectInstance
struct UCustomizableObjectInstance : Object {
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

	void UpdateSkeletalMeshAsync(char bIgnoreCloseDist, char bForceHighPriority); // Function CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsync(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1038120>
	void SetVectorParameterSelectedOption(struct FString VectorParamName, struct Unknown VectorValue); // Function CustomizableObject.CustomizableObjectInstance.SetVectorParameterSelectedOption(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037A80>
	void SetRandomValues(); // Function CustomizableObject.CustomizableObjectInstance.SetRandomValues(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10380E0>
	void SetProjectorValue(struct FString ProjectorParamName, struct Unknown& Pos, struct Unknown& Direction, struct Unknown& Up, struct Unknown& Scale, float Angle, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.SetProjectorValue(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037E80>
	void SetIntParameterSelectedOption(struct FString ParamName, struct FString SelectedOptionName, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.SetIntParameterSelectedOption(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037D40>
	void SetFloatParameterSelectedOption(struct FString FloatParamName, float FloatValue, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.SetFloatParameterSelectedOption(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037C10>
	void SetCurrentState(struct FString StateName); // Function CustomizableObject.CustomizableObjectInstance.SetCurrentState(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037B70>
	void SetColorParameterSelectedOption(struct FString ColorParamName, struct Unknown ColorValue); // Function CustomizableObject.CustomizableObjectInstance.SetColorParameterSelectedOption(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037A80>
	void SetBoolParameterSelectedOption(struct FString BoolParamName, char BoolValue); // Function CustomizableObject.CustomizableObjectInstance.SetBoolParameterSelectedOption(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037990>
	void SetAllParameterToDefault(); // Function CustomizableObject.CustomizableObjectInstance.SetAllParameterToDefault(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037970>
	void SetAllIntParameterToDefault2(); // Function CustomizableObject.CustomizableObjectInstance.SetAllIntParameterToDefault2(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037930>
	void SetAllIntParameterToDefault(); // Function CustomizableObject.CustomizableObjectInstance.SetAllIntParameterToDefault(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037950>
	char IsParamMultidimensional(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.IsParamMultidimensional(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10377B0>
	char IsParameterRelevant(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.IsParameterRelevant(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1037860>
	void GetProjectorValue(struct FString ProjectorParamName, struct Unknown& Pos, struct Unknown& Direction, struct Unknown& Up, struct Unknown& Scale, float& Angle, enum class Unknow& Type, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorValue(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1036F80>
	struct Unknown GetProjectorUp(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorUp(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1036EC0>
	struct Unknown GetProjectorScale(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorScale(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1036E00>
	struct Unknown GetProjectorPosition(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorPosition(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1036D40>
	enum class Unknow GetProjectorParameterType(struct FString ParamName, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorParameterType(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1036C50>
	struct Unknown GetProjectorDirection(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorDirection(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1036B90>
	float GetProjectorAngle(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorAngle(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1036AE0>
	struct Unknown GetParameterDescription(struct FString ParamName, int32_t DescIndex); // Function CustomizableObject.CustomizableObjectInstance.GetParameterDescription(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10364F0>
	struct FString GetIntParameterSelectedOption(struct FString ParamName, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.GetIntParameterSelectedOption(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10363C0>
	float GetFloatParameterSelectedOption(struct FString FloatParamName, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.GetFloatParameterSelectedOption(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1036170>
	struct FString GetCurrentState(); // Function CustomizableObject.CustomizableObjectInstance.GetCurrentState(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10360F0>
	struct Unknown GetColorParameterSelectedOption(struct FString ColorParamName); // Function CustomizableObject.CustomizableObjectInstance.GetColorParameterSelectedOption(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1036030>
	char GetBoolParameterSelectedOption(struct FString BoolParamName); // Function CustomizableObject.CustomizableObjectInstance.GetBoolParameterSelectedOption(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1035F80>
	int32_t FindVectorParameterNameIndex(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.FindVectorParameterNameIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1035ED0>
	int32_t FindProjectorParameterNameIndex(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.FindProjectorParameterNameIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1035E20>
	int32_t FindIntParameterNameIndex(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.FindIntParameterNameIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1035CC0>
	int32_t FindFloatParameterNameIndex(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.FindFloatParameterNameIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1035C10>
	int32_t FindBoolParameterNameIndex(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.FindBoolParameterNameIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1035B60>
	void Copy(struct Unknown Target); // Function CustomizableObject.CustomizableObjectInstance.Copy(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1035AB0>
	struct Unknown Clone(); // Function CustomizableObject.CustomizableObjectInstance.Clone(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1035A80>
};

// Class CustomizableObject.CustomizableObjectImageProviderArray
struct UCustomizableObjectImageProviderArray : UCustomizableSystemImageProvider {
	struct TArray<Unknown> Textures; // 0x28 (16)
};

// Class CustomizableObject.CustomizableObjectSystem
struct UCustomizableObjectSystem : Object {
	struct TArray<Unknown> PendingReleaseSkeletalMesh; // 0x28 (16)
	struct Unknown PreviewExternalImageProvider; // 0x48 (8)
	struct TArray<Unknown> ProtectedCachedTextures; // 0x150 (16)
	struct Unknown DefaultInstanceLODManagement; // 0x170 (8)
	struct Unknown CurrentInstanceLODManagement; // 0x178 (8)

	void SetReleaseMutableTexturesImmediately(char b); // Function CustomizableObject.CustomizableObjectSystem.SetReleaseMutableTexturesImmediately(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x103C780>
	int32_t GetTotalInstances(); // Function CustomizableObject.CustomizableObjectSystem.GetTotalInstances(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x103C750>
	int32_t GetTextureMemoryUsed(); // Function CustomizableObject.CustomizableObjectSystem.GetTextureMemoryUsed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x103C720>
	struct FString GetPluginVersion(); // Function CustomizableObject.CustomizableObjectSystem.GetPluginVersion(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x103C6A0>
	int32_t GetNumPendingInstances(); // Function CustomizableObject.CustomizableObjectSystem.GetNumPendingInstances(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x103C670>
	int32_t GetNumInstances(); // Function CustomizableObject.CustomizableObjectSystem.GetNumInstances(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x103C640>
	struct Unknown GetInstance(); // Function CustomizableObject.CustomizableObjectSystem.GetInstance(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x103C610>
	int32_t GetAverageBuildTime(); // Function CustomizableObject.CustomizableObjectSystem.GetAverageBuildTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x103C5E0>
	char AreEnginePatchesPresent(); // Function CustomizableObject.CustomizableObjectSystem.AreEnginePatchesPresent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x103C530>
};

// Class CustomizableObject.CustomizableSkeletalComponent
struct UCustomizableSkeletalComponent : USceneComponent {
	float SkippedLastRenderTime; // 0x23C (4)
	struct Unknown CustomizableObjectInstance; // 0x240 (8)

	void UpdateSkeletalMeshAsync(char bNeverSkipUpdate); // Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x103C810>
};

// Class CustomizableObject.CustomizableSkeletalMeshActor
struct ACustomizableSkeletalMeshActor : ASkeletalMeshActor {
	struct Unknown CustomizableSkeletalComponent; // 0x398 (8)
};

