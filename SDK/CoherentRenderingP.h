// Class CoherentRendering.CoherentRenderingSettings
struct UCoherentRenderingSettings : Object {
	enum class Unknow RenderingLogSeverity; // 0x28 (1)
	char ShowWarningsOnScreen : 0; // 0x29 (1)
	struct FString DeveloperOptions; // 0x30 (16)
};

