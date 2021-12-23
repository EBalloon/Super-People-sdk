// ScriptStruct ProjectVersion.ProjectVersionData
struct FProjectVersionData {
	uint32_t Major; // 0x0 (4)
	uint32_t Minor; // 0x4 (4)
	uint32_t Patch; // 0x8 (4)
	uint32_t Hotfix; // 0xC (4)
	uint32_t ChangeList; // 0x10 (4)
	uint32_t MaxRemoteChangelist; // 0x14 (4)
	uint32_t MinRemoteChangelist; // 0x18 (4)
	uint32_t ReplayVersion; // 0x1C (4)
	struct FString GeeGeeAppId; // 0x20 (16)
};

