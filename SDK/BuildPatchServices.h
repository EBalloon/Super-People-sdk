// Class BuildPatchServices.BuildPatchManifest
class UBuildPatchManifest : Object {
	char ManifestFileVersion; // 0x28 (1)
	char bIsFileData : 0; // 0x29 (1)
	uint32_t AppID; // 0x2C (4)
	struct FString AppName; // 0x30 (16)
	struct FString BuildVersion; // 0x40 (16)
	struct FString LaunchExe; // 0x50 (16)
	struct FString LaunchCommand; // 0x60 (16)
	struct TSet<Unknown> PrereqIds; // 0x70 (80)
	struct FString PrereqName; // 0xC0 (16)
	struct FString PrereqPath; // 0xD0 (16)
	struct FString PrereqArgs; // 0xE0 (16)
	struct TArray<Unknown> FileManifestList; // 0xF0 (16)
	struct TArray<Unknown> ChunkList; // 0x100 (16)
	struct TArray<Unknown> CustomFields; // 0x110 (16)
};

// ScriptStruct BuildPatchServices.FileManifestData
struct FFileManifestData {
	struct FString Filename; // 0x0 (16)
	struct Unknown FileHash; // 0x10 (20)
	struct TArray<Unknown> FileChunkParts; // 0x28 (16)
	struct TArray<Unknown> InstallTags; // 0x38 (16)
	char bIsUnixExecutable : 0; // 0x48 (1)
	struct FString SymlinkTarget; // 0x50 (16)
	char bIsReadOnly : 0; // 0x60 (1)
	char bIsCompressed : 0; // 0x61 (1)
};

// ScriptStruct BuildPatchServices.ChunkPartData
struct FChunkPartData {
	struct Unknown Guid; // 0x0 (16)
	uint32_t Offset; // 0x10 (4)
	uint32_t Size; // 0x14 (4)
};

// ScriptStruct BuildPatchServices.SHAHashData
struct FSHAHashData {
	char Hash[0x14]; // 0x0 (20)
};

// ScriptStruct BuildPatchServices.ChunkInfoData
struct FChunkInfoData {
	struct Unknown Guid; // 0x0 (16)
	uint64_t Hash; // 0x10 (8)
	struct Unknown ShaHash; // 0x18 (20)
	int64_t FileSize; // 0x30 (8)
	char GroupNumber; // 0x38 (1)
};

// ScriptStruct BuildPatchServices.CustomFieldData
struct FCustomFieldData {
	struct FString Key; // 0x0 (16)
	struct FString Value; // 0x10 (16)
};

