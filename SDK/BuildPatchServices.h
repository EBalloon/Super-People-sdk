// Class BuildPatchServices.BuildPatchManifest
struct UBuildPatchManifest : Object {
	Unknown ManifestFileVersion; //  0x28 Size(1)
	char bIsFileData; //  0x29 Size(1)
	uint32_t AppID; //  0x2c Size(4)
	struct FString AppName; //  0x30 Size(10)
	struct FString BuildVersion; //  0x40 Size(10)
	struct FString LaunchExe; //  0x50 Size(10)
	struct FString LaunchCommand; //  0x60 Size(10)
	Unknown PrereqIds; //  0x70 Size(50)
	struct FString PrereqName; //  0xc0 Size(10)
	struct FString PrereqPath; //  0xd0 Size(10)
	struct FString PrereqArgs; //  0xe0 Size(10)
	Unknown FileManifestList; //  0xf0 Size(10)
	Unknown ChunkList; //  0x100 Size(10)
	Unknown CustomFields; //  0x110 Size(10)
};

