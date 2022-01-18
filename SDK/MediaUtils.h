// Enum MediaUtils.EMediaPlayerOptionBooleanOverride
enum class EMediaPlayerOptionBooleanOverride : uint8_t {
	UseMediaPlayerSetting = 0,
	Enabled = 1,
	Disabled = 2,
	EMediaPlayerOptionBooleanOverride_MAX = 3,
};

// ScriptStruct MediaUtils.MediaPlayerOptions
struct FMediaPlayerOptions {
	struct FMediaPlayerTrackOptions Tracks; // 0x0 (28)
	struct FTimespan SeekTime; // 0x20 (8)
	enum class EMediaPlayerOptionBooleanOverride PlayOnOpen; // 0x28 (1)
	enum class EMediaPlayerOptionBooleanOverride Loop; // 0x29 (1)
};

// ScriptStruct MediaUtils.MediaPlayerTrackOptions
struct FMediaPlayerTrackOptions {
	int32_t Audio; // 0x0 (4)
	int32_t Caption; // 0x4 (4)
	int32_t MetaData; // 0x8 (4)
	int32_t Script; // 0xC (4)
	int32_t Subtitle; // 0x10 (4)
	int32_t Text; // 0x14 (4)
	int32_t Video; // 0x18 (4)
};

