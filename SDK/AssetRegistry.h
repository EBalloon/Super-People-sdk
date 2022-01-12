// ScriptStruct AssetRegistry.ARFilter
struct FARFilter {
	struct TArray<struct FName> PackageNames; // 0x0 (16)
	struct TArray<struct FName> PackagePaths; // 0x10 (16)
	struct TArray<struct FName> ObjectPaths; // 0x20 (16)
	struct TArray<struct FName> ClassNames; // 0x30 (16)
	struct TSet<struct FName> RecursiveClassesExclusionSet; // 0x90 (80)
	char bRecursivePaths : 0; // 0xE0 (1)
	char bRecursiveClasses : 0; // 0xE1 (1)
	char bIncludeOnlyOnDiskAssets : 0; // 0xE2 (1)
};

// ScriptStruct AssetRegistry.AssetBundleData
struct FAssetBundleData {
	struct TArray<struct FAssetBundleEntry> Bundles; // 0x0 (16)
};

// ScriptStruct AssetRegistry.AssetBundleEntry
struct FAssetBundleEntry {
	struct FPrimaryAssetId BundleScope; // 0x0 (16)
	struct FName BundleName; // 0x10 (8)
	struct TArray<struct FSoftObjectPath> BundleAssets; // 0x18 (16)
};

// ScriptStruct AssetRegistry.AssetData
struct FAssetData {
	struct FName ObjectPath; // 0x0 (8)
	struct FName PackageName; // 0x8 (8)
	struct FName PackagePath; // 0x10 (8)
	struct FName AssetName; // 0x18 (8)
	struct FName AssetClass; // 0x20 (8)
};

// ScriptStruct AssetRegistry.TagAndValue
struct FTagAndValue {
	struct FName Tag; // 0x0 (8)
	struct FString Value; // 0x8 (16)
};

// ScriptStruct AssetRegistry.AssetRegistryDependencyOptions
struct FAssetRegistryDependencyOptions {
	char bIncludeSoftPackageReferences : 0; // 0x0 (1)
	char bIncludeHardPackageReferences : 0; // 0x1 (1)
	char bIncludeSearchableNames : 0; // 0x2 (1)
	char bIncludeSoftManagementReferences : 0; // 0x3 (1)
	char bIncludeHardManagementReferences : 0; // 0x4 (1)
};

