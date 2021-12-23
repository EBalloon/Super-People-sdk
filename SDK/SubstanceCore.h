// Enum SubstanceCore.ESubstanceInputType
enum class ESubstanceInputType : uint8 {
	SIT_Float = 0
	SIT_Float2 = 1
	SIT_Float3 = 2
	SIT_Float4 = 3
	SIT_Integer = 4
	SIT_Image = 5
	SIT_Unused_7 = 6
	SIT_Unused_8 = 7
	SIT_Integer2 = 8
	SIT_Integer3 = 9
	SIT_Integer4 = 10
	SIT_MAX = 11
};

// Enum SubstanceCore.ESubstanceGenerationMode
enum class ESubstanceGenerationMode : uint8 {
	SGM_PlatformDefault = 0
	SGM_Baked = 1
	SGM_OnLoadSync = 2
	SGM_OnLoadSyncAndCache = 3
	SGM_OnLoadAsync = 4
	SGM_OnLoadAsyncAndCache = 5
	SGM_MAX = 6
};

// Enum SubstanceCore.EDefaultSubstanceTextureSize
enum class EDefaultSubstanceTextureSize : uint8 {
	Size_1 = 0
	Size_17 = 4
	Size_33 = 5
	Size_65 = 6
	Size_129 = 7
	Size_257 = 8
	Size_513 = 9
	Size_1025 = 10
	Size_2049 = 11
	Size_4097 = 12
	Size_MAX = 13
};

// Enum SubstanceCore.ESubstanceEngineType
enum class ESubstanceEngineType : uint8 {
	SET_CPU = 0
	SET_GPU = 1
	SET_MAX = 2
};

// Enum SubstanceCore.ESubstanceTextureSize
enum class ESubstanceTextureSize : uint8 {
	E_17 = 0
	E_33 = 1
	E_65 = 2
	E_129 = 3
	E_257 = 4
	E_513 = 5
	E_1025 = 6
	E_2049 = 7
	E_4097 = 8
	E_8193 = 9
	E = 10
};

// Class SubstanceCore.SubstanceGraphInstance
struct USubstanceGraphInstance : Object {
	struct FString PackageURL; // 0x38 (16)
	struct Unknown ParentFactory; // 0x48 (8)
	struct TMap<Unknown, Unknown>Unknown ImageSources; // 0x50 (80)
	struct Unknown CreatedMaterial; // 0xA0 (8)
	struct Unknown ConstantCreatedMaterial; // 0xA8 (8)
	struct Unknown DynamicCreatedMaterial; // 0xB0 (8)
	struct TMap<Unknown, Unknown>Unknown OutputTextureLinkData; // 0xB8 (80)
	struct TMap<Unknown, Unknown>Unknown OutputInstances; // 0x108 (80)
	char bIsFrozen : 0; // 0x158 (1)

	void SetInputString(struct FString Identifier, struct FString Value); // Function SubstanceCore.SubstanceGraphInstance.SetInputString(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10C3400>
	void SetInputInt(struct FString Identifier, struct TArray<Unknown>& InputValues); // Function SubstanceCore.SubstanceGraphInstance.SetInputInt(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10C32A0>
	char SetInputImg(struct FString InputName, struct Unknown Value); // Function SubstanceCore.SubstanceGraphInstance.SetInputImg(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10C31B0>
	void SetInputFloat(struct FString Identifier, struct TArray<Unknown>& InputValues); // Function SubstanceCore.SubstanceGraphInstance.SetInputFloat(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10C3050>
	void SetInputColor(struct FString Identifier, struct Unknown& Color); // Function SubstanceCore.SubstanceGraphInstance.SetInputColor(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10C2F00>
	void SetInputBool(struct FString Identifier, char Bool); // Function SubstanceCore.SubstanceGraphInstance.SetInputBool(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10C2DC0>
	struct Unknown GetIntInputDesc(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetIntInputDesc(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10C2770>
	struct Unknown GetInstanceDesc(); // Function SubstanceCore.SubstanceGraphInstance.GetInstanceDesc(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10C2640>
	char GetInputType(struct FString InputName); // Function SubstanceCore.SubstanceGraphInstance.GetInputType(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10C2540>
	struct FString GetInputString(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetInputString(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10C2400>
	struct TArray<Unknown> GetInputNames(); // Function SubstanceCore.SubstanceGraphInstance.GetInputNames(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10C2320>
	struct TArray<Unknown> GetInputInt(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetInputInt(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10C21E0>
	struct TArray<Unknown> GetInputFloat(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetInputFloat(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10C20A0>
	struct Unknown GetInputColor(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetInputColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10C1F90>
	char GetInputBool(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetInputBool(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10C1E90>
	struct Unknown GetFloatInputDesc(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetFloatInputDesc(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10C1B90>
	struct Unknown GetDynamicMaterialInstance(struct FName Name, struct Unknown InParentMaterial); // Function SubstanceCore.SubstanceGraphInstance.GetDynamicMaterialInstance(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10C1A00>
};

// Class SubstanceCore.SubstanceInstanceFactory
struct USubstanceInstanceFactory : Object {
	struct TArray<Unknown> mGraphInstances; // 0x28 (16)
	struct FString RelativeSourceFilePath; // 0x50 (16)
	struct FString AbsoluteSourceFilePath; // 0x60 (16)
	struct FString SourceFileTimestamp; // 0x70 (16)
	char GenerationMode; // 0x80 (1)
};

// Class SubstanceCore.SubstanceOutputData
struct USubstanceOutputData : Object {
	struct Unknown ConnectedObject; // 0x28 (8)
	struct Unknown ParamInfo; // 0x30 (16)
	struct Unknown ParentInstance; // 0x40 (8)
	struct Unknown CacheGuid; // 0x48 (16)
};

// Class SubstanceCore.SubstanceSettings
struct USubstanceSettings : Object {
	int32_t MemoryBudgetMb; // 0x28 (4)
	int32_t CPUCores; // 0x2C (4)
	int32_t AsyncLoadMipClip; // 0x30 (4)
	int32_t MaxAsyncSubstancesRenderedPerFrame; // 0x34 (4)
	char SubstanceEngine; // 0x38 (1)
	char DefaultSubstanceOutputSizeX; // 0x39 (1)
	char DefaultSubstanceOutputSizeY; // 0x3A (1)
	struct TSoftObjectPtr<Unknown> DefaultTemplateMaterial; // 0x40 (40)
};

// Class SubstanceCore.SubstanceTexture2D
struct USubstanceTexture2D : UTexture2DDynamic {
	struct Unknown ParentInstance; // 0x100 (8)
	char AddressX; // 0x108 (1)
	char AddressY; // 0x109 (1)
	char bCooked : 0; // 0x10A (1)
};

