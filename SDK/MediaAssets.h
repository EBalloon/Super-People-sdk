// Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
enum class EMediaWebcamCaptureDeviceFilter : uint8 {
	EMediaWebcamCaptureDeviceFilter = 0,
	EMediaWebcamCaptureDeviceFilter = 1,
	EMediaWebcamCaptureDeviceFilter = 2,
	EMediaWebcamCaptureDeviceFilter = 4,
	EMediaWebcamCaptureDeviceFilter = 8,
	EMediaWebcamCaptureDeviceFilter = 9
};

// Enum MediaAssets.EMediaVideoCaptureDeviceFilter
enum class EMediaVideoCaptureDeviceFilter : uint8 {
	EMediaVideoCaptureDeviceFilter = 0,
	EMediaVideoCaptureDeviceFilter = 1,
	EMediaVideoCaptureDeviceFilter = 2,
	EMediaVideoCaptureDeviceFilter = 4,
	EMediaVideoCaptureDeviceFilter = 8,
	EMediaVideoCaptureDeviceFilter = 9
};

// Enum MediaAssets.EMediaAudioCaptureDeviceFilter
enum class EMediaAudioCaptureDeviceFilter : uint8 {
	EMediaAudioCaptureDeviceFilter = 0,
	EMediaAudioCaptureDeviceFilter = 1,
	EMediaAudioCaptureDeviceFilter = 2,
	EMediaAudioCaptureDeviceFilter = 4,
	EMediaAudioCaptureDeviceFilter = 8,
	EMediaAudioCaptureDeviceFilter = 9
};

// Enum MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8 {
	EMediaPlayerTrack = 0,
	EMediaPlayerTrack = 1,
	EMediaPlayerTrack = 2,
	EMediaPlayerTrack = 3,
	EMediaPlayerTrack = 4,
	EMediaPlayerTrack = 5,
	EMediaPlayerTrack = 6,
	EMediaPlayerTrack = 7
};

// Enum MediaAssets.EMediaSoundComponentFFTSize
enum class EMediaSoundComponentFFTSize : uint8 {
	EMediaSoundComponentFFTSize_65 = 0,
	EMediaSoundComponentFFTSize_257 = 1,
	EMediaSoundComponentFFTSize_513 = 2,
	EMediaSoundComponentFFTSize_1025 = 3,
	EMediaSoundComponentFFTSize = 4
};

// Enum MediaAssets.EMediaSoundChannels
enum class EMediaSoundChannels : uint8 {
	EMediaSoundChannels = 0,
	EMediaSoundChannels = 1,
	EMediaSoundChannels = 2,
	EMediaSoundChannels = 3
};

// Class MediaAssets.BaseMediaSource
struct UBaseMediaSource : UMediaSource {
	struct FName playerName; //  0x80 Size(8)
};

// Class MediaAssets.FileMediaSource
struct UFileMediaSource : UBaseMediaSource {
	struct FString FilePath; //  0x88 Size(10)
	char PrecacheFile; //  0x98 Size(1)

	void SetFilePath(struct FString Path); // Function MediaAssets.FileMediaSource.SetFilePath(Final|Native|Public|BlueprintCallable) // <Game+0x34e7b00>
};

// Class MediaAssets.MediaComponent
struct UMediaComponent : UActorComponent {
	Unknown MediaTexture; //  0xb0 Size(8)
	Unknown MediaPlayer; //  0xb8 Size(8)

	Unknown GetMediaTexture(); // Function MediaAssets.MediaComponent.GetMediaTexture(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x2eeb140>
};

// Class MediaAssets.MediaPlayer
struct UMediaPlayer : Object {
	struct FMulticastInlineDelegate OnEndReached; //  0x28 Size(10)
	struct FMulticastInlineDelegate OnMediaClosed; //  0x38 Size(10)
	struct FMulticastInlineDelegate OnMediaOpened; //  0x48 Size(10)
	struct FMulticastInlineDelegate OnMediaOpenFailed; //  0x58 Size(10)
	struct FMulticastInlineDelegate OnPlaybackResumed; //  0x68 Size(10)
	struct FMulticastInlineDelegate OnPlaybackSuspended; //  0x78 Size(10)
	struct FMulticastInlineDelegate OnSeekCompleted; //  0x88 Size(10)
	struct FMulticastInlineDelegate OnTracksChanged; //  0x98 Size(10)
	Unknown CacheAhead; //  0xa8 Size(8)
	Unknown CacheBehind; //  0xb0 Size(8)
	Unknown CacheBehindGame; //  0xb8 Size(8)
	char NativeAudioOut; //  0xc0 Size(1)
	char PlayOnOpen; //  0xc1 Size(1)
	char Shuffle; //  0xc4 Size(1)
	char Loop; //  0xc4 Size(1)
	Unknown Playlist; //  0xc8 Size(8)
	int32_t PlaylistIndex; //  0xd0 Size(4)
	Unknown TimeDelay; //  0xd8 Size(8)
	float HorizontalFieldOfView; //  0xe0 Size(4)
	float VerticalFieldOfView; //  0xe4 Size(4)
	Unknown ViewRotation; //  0xe8 Size(c)
	Unknown playerGUID; //  0x120 Size(10)
	Unknown OwnerWidget; //  0x138 Size(8)

	char SupportsSeeking(); // Function MediaAssets.MediaPlayer.SupportsSeeking(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x34e88d0>
};

// Class MediaAssets.MediaPlaylist
struct UMediaPlaylist : Object {
	Unknown Items; //  0x28 Size(10)

	char Replace(int32_t Index, Unknown Replacement); // Function MediaAssets.MediaPlaylist.Replace(Final|Native|Public|BlueprintCallable) // <Game+0x34e75c0>
};

// Class MediaAssets.MediaSoundComponent
struct UMediaSoundComponent : USynthComponent {
	Unknown Channels; //  0x710 Size(4)
	char DynamicRateAdjustment; //  0x714 Size(1)
	float RateAdjustmentFactor; //  0x718 Size(4)
	Unknown RateAdjustmentRange; //  0x71c Size(10)
	Unknown MediaPlayer; //  0x730 Size(8)

	void SetSpectralAnalysisSettings(Unknown InFrequenciesToAnalyze, Unknown InFFTSize); // Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings(Final|Native|Public|BlueprintCallable) // <Game+0x34e8240>
};

// Class MediaAssets.MediaTexture
struct UMediaTexture : UTexture {
	Unknown AddressX; //  0xb8 Size(1)
	Unknown AddressY; //  0xb9 Size(1)
	char AutoClear; //  0xba Size(1)
	Unknown ClearColor; //  0xbc Size(10)
	char Enab; //  0xcc Size(1)
	Unknown NumMips; //  0xcd Size(1)
	Unknown MediaPlayer; //  0xd0 Size(8)

	void SetMediaPlayer(Unknown NewMediaPlayer); // Function MediaAssets.MediaTexture.SetMediaPlayer(Final|Native|Public|BlueprintCallable) // <Game+0x34e80a0>
};

// Class MediaAssets.PlatformMediaSource
struct UPlatformMediaSource : UMediaSource {
	Unknown MediaSource; //  0x80 Size(8)
};

// Class MediaAssets.StreamMediaSource
struct UStreamMediaSource : UBaseMediaSource {
	struct FString StreamUrl; //  0x88 Size(10)
};

// Class MediaAssets.TimeSynchronizableMediaSource
struct UTimeSynchronizableMediaSource : UBaseMediaSource {
	char bUseTimeSynchronization; //  0x88 Size(1)
	int32_t FrameDelay; //  0x8c Size(4)
	Unknown TimeDelay; //  0x90 Size(8)
};

