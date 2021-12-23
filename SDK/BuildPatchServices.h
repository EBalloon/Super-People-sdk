// Class BuildPatchServices.BuildPatchManifest
struct UBuildPatchManifest : Object {
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

