// Enum SubstanceCore.ESubstanceInputType
enum class ESubstanceInputType : uint8 {
	SIT_Float = 0,
	SIT_Float2 = 1,
	SIT_Float3 = 2,
	SIT_Float4 = 3,
	SIT_Integer = 4,
	SIT_Image = 5,
	SIT_Unused_7 = 6,
	SIT_Unused_8 = 7,
	SIT_Integer2 = 8,
	SIT_Integer3 = 9,
	SIT_Integer4 = 10,
	SIT_MAX = 11
};

// Enum SubstanceCore.ESubstanceGenerationMode
enum class ESubstanceGenerationMode : uint8 {
	SGM_Platform = 0,
	SGM_Baked = 1,
	SGM_OnLoadSync = 2,
	SGM_OnLoadSyncAndCache = 3,
	SGM_OnLoadAsync = 4,
	SGM_OnLoadAsyncAndCache = 5,
	SGM_MAX = 6
};

// Enum SubstanceCore.EDefaultSubstanceTextureSize
enum class EDefaultSubstanceTextureSize : uint8 {
	Size_1 = 0,
	Size_17 = 4,
	Size_33 = 5,
	Size_65 = 6,
	Size_129 = 7,
	Size_257 = 8,
	Size_513 = 9,
	Size_1025 = 10,
	Size_2049 = 11,
	Size_4097 = 12,
	Size_MAX = 13
};

// Enum SubstanceCore.ESubstanceEngineType
enum class ESubstanceEngineType : uint8 {
	SET_CPU = 0,
	SET_GPU = 1,
	SET_MAX = 2
};

// Enum SubstanceCore.ESubstanceTextureSize
enum class ESubstanceTextureSize : uint8 {
	ERL_17 = 0,
	ERL_33 = 1,
	ERL_65 = 2,
	ERL_129 = 3,
	ERL_257 = 4,
	ERL_513 = 5,
	ERL_1025 = 6,
	ERL_2049 = 7,
	ERL_4097 = 8,
	ERL_8193 = 9,
	ERL_MAX = 10
};

// Class SubstanceCore.SubstanceGraphInstance
struct USubstanceGraphInstance : Object {
	struct FString PackageURL; //  0x38 Size(10)
	struct Unknown ParentFactory; //  0x48 Size(8)
	struct TMap<{}, {}>Unknown ImageSources; //  0x50 Size(50)
	struct Unknown CreatedMaterial; //  0xa0 Size(8)
	struct Unknown ConstantCreatedMaterial; //  0xa8 Size(8)
	struct Unknown DynamicCreatedMaterial; //  0xb0 Size(8)
	struct TMap<{}, {}>Unknown OutputTextureLinkData; //  0xb8 Size(50)
	struct TMap<{}, {}>Unknown OutputInstances; //  0x108 Size(50)
	char bIsFrozen; //  0x158 Size(1)

	void SetInputString(struct FString Identifier, struct FString Value); // Function SubstanceCore.SubstanceGraphInstance.SetInputString(Final|Native|Public|BlueprintCallable) // <Game+0x10c3400>
};

// Class SubstanceCore.SubstanceInstanceFactory
struct USubstanceInstanceFactory : Object {
	struct TArray<Unknown> mGraphInstances; //  0x28 Size(10)
	struct FString RelativeSourceFilePath; //  0x50 Size(10)
	struct FString AbsoluteSourceFilePath; //  0x60 Size(10)
	struct FString SourceFileTimestamp; //  0x70 Size(10)
	char GenerationMode; //  0x80 Size(1)
};

// Class SubstanceCore.SubstanceOutputData
struct USubstanceOutputData : Object {
	struct Unknown ConnectedObject; //  0x28 Size(8)
	struct Unknown ParamInfo; //  0x30 Size(10)
	struct Unknown ParentInstance; //  0x40 Size(8)
	struct Unknown CacheGuid; //  0x48 Size(10)
};

// Class SubstanceCore.SubstanceSettings
struct USubstanceSettings : Object {
	int32_t MemoryBudgetMb; //  0x28 Size(4)
	int32_t CPUCores; //  0x2c Size(4)
	int32_t AsyncLoadMipClip; //  0x30 Size(4)
	int32_t MaxAsyncSubstancesRenderedPerFrame; //  0x34 Size(4)
	char SubstanceEngine; //  0x38 Size(1)
	char DefaultSubstanceOutputSizeX; //  0x39 Size(1)
	char DefaultSubstanceOutputSizeY; //  0x3a Size(1)
	struct TSoftObjectPtr<Unknown> DefaultTemplateMaterial; //  0x40 Size(28)
};

// Class SubstanceCore.SubstanceTexture2D
struct USubstanceTexture2D : UTexture2DDynamic {
	struct Unknown ParentInstance; //  0x100 Size(8)
	char AddressX; //  0x108 Size(1)
	char AddressY; //  0x109 Size(1)
	char bCooked; //  0x10a Size(1)
};

