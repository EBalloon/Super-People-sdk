// Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
enum class EMediaWebcamCaptureDeviceFilter : uint8_t {
	EMediaWebcamCaptureDeviceFilter = 0,
	EMediaWebcamCaptureDeviceFilter = 1,
	EMediaWebcamCaptureDeviceFilter = 2,
	EMediaWebcamCaptureDeviceFilter = 4,
	EMediaWebcamCaptureDeviceFilter = 8,
	EMediaWebcamCaptureDeviceFilter = 9,
};

// Enum MediaAssets.EMediaVideoCaptureDeviceFilter
enum class EMediaVideoCaptureDeviceFilter : uint8_t {
	EMediaVideoCaptureDeviceFilter = 0,
	EMediaVideoCaptureDeviceFilter = 1,
	EMediaVideoCaptureDeviceFilter = 2,
	EMediaVideoCaptureDeviceFilter = 4,
	EMediaVideoCaptureDeviceFilter = 8,
	EMediaVideoCaptureDeviceFilter = 9,
};

// Enum MediaAssets.EMediaAudioCaptureDeviceFilter
enum class EMediaAudioCaptureDeviceFilter : uint8_t {
	EMediaAudioCaptureDeviceFilter = 0,
	EMediaAudioCaptureDeviceFilter = 1,
	EMediaAudioCaptureDeviceFilter = 2,
	EMediaAudioCaptureDeviceFilter = 4,
	EMediaAudioCaptureDeviceFilter = 8,
	EMediaAudioCaptureDeviceFilter = 9,
};

// Enum MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8_t {
	EMediaPlayerTrack = 0,
	EMediaPlayerTrack = 1,
	EMediaPlayerTrack = 2,
	EMediaPlayerTrack = 3,
	EMediaPlayerTrack = 4,
	EMediaPlayerTrack = 5,
	EMediaPlayerTrack = 6,
	EMediaPlayerTrack = 7,
};

// Enum MediaAssets.EMediaSoundComponentFFTSize
enum class EMediaSoundComponentFFTSize : uint8_t {
	EMediaSoundComponentFFTSize_65 = 0,
	EMediaSoundComponentFFTSize_257 = 1,
	EMediaSoundComponentFFTSize_513 = 2,
	EMediaSoundComponentFFTSize_1025 = 3,
	EMediaSoundComponentFFTSize = 4,
};

// Enum MediaAssets.EMediaSoundChannels
enum class EMediaSoundChannels : uint8_t {
	EMediaSoundChannels = 0,
	EMediaSoundChannels = 1,
	EMediaSoundChannels = 2,
	EMediaSoundChannels = 3,
};

// Class MediaAssets.BaseMediaSource
class UBaseMediaSource : public UMediaSource {

public:

	struct FName playerName; // 0x80 (8)
};

// Class MediaAssets.FileMediaSource
class UFileMediaSource : public UBaseMediaSource {

public:

	struct FString FilePath; // 0x88 (16)
	char PrecacheFile : 0; // 0x98 (1)

	void SetFilePath(struct FString Path); // Function MediaAssets.FileMediaSource.SetFilePath(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F46F0>
};

// Class MediaAssets.MediaComponent
class UMediaComponent : public UActorComponent {

public:

	struct Unknown MediaTexture; // 0xB0 (8)
	struct Unknown MediaPlayer; // 0xB8 (8)

	struct Unknown GetMediaTexture(); // Function MediaAssets.MediaComponent.GetMediaTexture(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2EF71D0>
	struct Unknown GetMediaPlayer(); // Function MediaAssets.MediaComponent.GetMediaPlayer(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2690>
};

// Class MediaAssets.MediaPlayer
class UMediaPlayer : public Object {

public:

	struct FMulticastInlineDelegate OnEndReached; // 0x28 (16)
	struct FMulticastInlineDelegate OnMediaClosed; // 0x38 (16)
	struct FMulticastInlineDelegate OnMediaOpened; // 0x48 (16)
	struct FMulticastInlineDelegate OnMediaOpenFailed; // 0x58 (16)
	struct FMulticastInlineDelegate OnPlaybackResumed; // 0x68 (16)
	struct FMulticastInlineDelegate OnPlaybackSuspended; // 0x78 (16)
	struct FMulticastInlineDelegate OnSeekCompleted; // 0x88 (16)
	struct FMulticastInlineDelegate OnTracksChanged; // 0x98 (16)
	struct Unknown CacheAhead; // 0xA8 (8)
	struct Unknown CacheBehind; // 0xB0 (8)
	struct Unknown CacheBehindGame; // 0xB8 (8)
	char NativeAudioOut : 0; // 0xC0 (1)
	char PlayOnOpen : 0; // 0xC1 (1)
	char Shuffle : 0; // 0xC4 (1)
	char Loop : 0; // 0xC4 (1)
	struct Unknown Playlist; // 0xC8 (8)
	int32_t PlaylistIndex; // 0xD0 (4)
	struct Unknown TimeDelay; // 0xD8 (8)
	float HorizontalFieldOfView; // 0xE0 (4)
	float VerticalFieldOfView; // 0xE4 (4)
	struct Unknown ViewRotation; // 0xE8 (12)
	struct Unknown playerGUID; // 0x120 (16)
	struct Unknown OwnerWidget; // 0x138 (8)

	char SupportsSeeking(); // Function MediaAssets.MediaPlayer.SupportsSeeking(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F54C0>
	char SupportsScrubbing(); // Function MediaAssets.MediaPlayer.SupportsScrubbing(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F5490>
	char SupportsRate(float Rate, char Unthinned); // Function MediaAssets.MediaPlayer.SupportsRate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F53C0>
	char SetViewRotation(struct Unknown& Rotation, char Absolute); // Function MediaAssets.MediaPlayer.SetViewRotation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F52E0>
	char SetViewField(float Horizontal, float Vertical, char Absolute); // Function MediaAssets.MediaPlayer.SetViewField(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F51D0>
	char SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate); // Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F50D0>
	char SetTrackFormat(enum class Unknow TrackType, int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.SetTrackFormat(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F4FD0>
	void SetTimeDelay(struct Unknown TimeDelay); // Function MediaAssets.MediaPlayer.SetTimeDelay(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F4F50>
	char SetRate(float Rate); // Function MediaAssets.MediaPlayer.SetRate(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F4DA0>
	char SetNativeVolume(float Volume); // Function MediaAssets.MediaPlayer.SetNativeVolume(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F4D10>
	void SetMediaOptions(struct Unknown options); // Function MediaAssets.MediaPlayer.SetMediaOptions(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F4B90>
	char SetLooping(char Looping); // Function MediaAssets.MediaPlayer.SetLooping(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F4790>
	void SetDesiredPlayerName(struct FName playerName); // Function MediaAssets.MediaPlayer.SetDesiredPlayerName(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F4490>
	void SetBlockOnTime(struct Unknown& Time); // Function MediaAssets.MediaPlayer.SetBlockOnTime(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F4400>
	char SelectTrack(enum class Unknow TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.SelectTrack(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F4340>
	char Seek(struct Unknown& Time); // Function MediaAssets.MediaPlayer.Seek(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F42A0>
	char Rewind(); // Function MediaAssets.MediaPlayer.Rewind(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F4270>
	char Reopen(); // Function MediaAssets.MediaPlayer.Reopen(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F4180>
	char Previous(); // Function MediaAssets.MediaPlayer.Previous(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F4030>
	void PlayAndSeek(); // Function MediaAssets.MediaPlayer.PlayAndSeek(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F4010>
	char Play(); // Function MediaAssets.MediaPlayer.Play(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3FE0>
	char Pause(); // Function MediaAssets.MediaPlayer.Pause(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3FB0>
	char OpenUrl(struct FString URL); // Function MediaAssets.MediaPlayer.OpenUrl(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3F00>
	char OpenSourceWithOptions(struct Unknown MediaSource, struct Unknown& options); // Function MediaAssets.MediaPlayer.OpenSourceWithOptions(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3E00>
	void OpenSourceLatent(struct Unknown WorldContextObject, struct Unknown LatentInfo, struct Unknown MediaSource, struct Unknown& options, char& bSuccess); // Function MediaAssets.MediaPlayer.OpenSourceLatent(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3C20>
	char OpenSourceForWidget(struct Unknown MediaSource, struct Unknown NewOwnerWidget); // Function MediaAssets.MediaPlayer.OpenSourceForWidget(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3B60>
	char OpenSource(struct Unknown MediaSource); // Function MediaAssets.MediaPlayer.OpenSource(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3AD0>
	char OpenPlaylistIndex(struct Unknown InPlaylist, int32_t Index); // Function MediaAssets.MediaPlayer.OpenPlaylistIndex(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3A10>
	char OpenPlaylist(struct Unknown InPlaylist); // Function MediaAssets.MediaPlayer.OpenPlaylist(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3970>
	char OpenFile(struct FString FilePath); // Function MediaAssets.MediaPlayer.OpenFile(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F38C0>
	char Next(); // Function MediaAssets.MediaPlayer.Next(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3870>
	char IsReady(); // Function MediaAssets.MediaPlayer.IsReady(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3840>
	char IsPreparing(); // Function MediaAssets.MediaPlayer.IsPreparing(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3810>
	char IsPlaying(); // Function MediaAssets.MediaPlayer.IsPlaying(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F37E0>
	char IsPaused(); // Function MediaAssets.MediaPlayer.IsPaused(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F37B0>
	char IsLooping(); // Function MediaAssets.MediaPlayer.IsLooping(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3780>
	char IsConnecting(); // Function MediaAssets.MediaPlayer.IsConnecting(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3750>
	char IsClosed(); // Function MediaAssets.MediaPlayer.IsClosed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3720>
	char IsBuffering(); // Function MediaAssets.MediaPlayer.IsBuffering(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F36F0>
	char HasError(); // Function MediaAssets.MediaPlayer.HasError(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3600>
	struct Unknown GetViewRotation(); // Function MediaAssets.MediaPlayer.GetViewRotation(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3590>
	struct FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackType(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3490>
	struct Unknown GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F33C0>
	float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3300>
	struct Unknown GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackDimensions(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3230>
	float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3170>
	float GetVerticalFieldOfView(); // Function MediaAssets.MediaPlayer.GetVerticalFieldOfView(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3140>
	struct FString GetUrl(); // Function MediaAssets.MediaPlayer.GetUrl(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3080>
	struct FString GetTrackLanguage(enum class Unknow TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackLanguage(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2F70>
	int32_t GetTrackFormat(enum class Unknow TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackFormat(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2EB0>
	struct FText GetTrackDisplayName(enum class Unknow TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackDisplayName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2D90>
	struct Unknown GetTimeDelay(); // Function MediaAssets.MediaPlayer.GetTimeDelay(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2D50>
	struct Unknown GetTime(); // Function MediaAssets.MediaPlayer.GetTime(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2D10>
	void GetSupportedRates(struct TArray<Unknown>& OutRates, char Unthinned); // Function MediaAssets.MediaPlayer.GetSupportedRates(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2C10>
	int32_t GetSelectedTrack(enum class Unknow TrackType); // Function MediaAssets.MediaPlayer.GetSelectedTrack(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2B00>
	float GetRate(); // Function MediaAssets.MediaPlayer.GetRate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2AD0>
	int32_t GetPlaylistIndex(); // Function MediaAssets.MediaPlayer.GetPlaylistIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2970>
	struct Unknown GetPlaylist(); // Function MediaAssets.MediaPlayer.GetPlaylist(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2950>
	struct FName GetPlayerName(); // Function MediaAssets.MediaPlayer.GetPlayerName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2910>
	int32_t GetNumTracks(enum class Unknow TrackType); // Function MediaAssets.MediaPlayer.GetNumTracks(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2880>
	int32_t GetNumTrackFormats(enum class Unknow TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetNumTrackFormats(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F27C0>
	struct FText GetMediaName(); // Function MediaAssets.MediaPlayer.GetMediaName(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F25F0>
	struct Unknown GetLastVideoSampleProcessedTime(); // Function MediaAssets.MediaPlayer.GetLastVideoSampleProcessedTime(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F25B0>
	struct Unknown GetLastAudioSampleProcessedTime(); // Function MediaAssets.MediaPlayer.GetLastAudioSampleProcessedTime(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2570>
	float GetHorizontalFieldOfView(); // Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2540>
	struct Unknown GetDuration(); // Function MediaAssets.MediaPlayer.GetDuration(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F24A0>
	struct FName GetDesiredPlayerName(); // Function MediaAssets.MediaPlayer.GetDesiredPlayerName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2460>
	struct FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackType(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2360>
	int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F22A0>
	int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackChannels(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F21E0>
	void Close(); // Function MediaAssets.MediaPlayer.Close(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F1DA0>
	char CanPlayUrl(struct FString URL); // Function MediaAssets.MediaPlayer.CanPlayUrl(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F1CF0>
	char CanPlaySource(struct Unknown MediaSource); // Function MediaAssets.MediaPlayer.CanPlaySource(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F1C60>
	char CanPause(); // Function MediaAssets.MediaPlayer.CanPause(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F1C30>
};

// Class MediaAssets.MediaPlaylist
class UMediaPlaylist : public Object {

public:

	struct TArray<Unknown> Items; // 0x28 (16)

	char Replace(int32_t Index, struct Unknown Replacement); // Function MediaAssets.MediaPlaylist.Replace(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F41B0>
	char RemoveAt(int32_t Index); // Function MediaAssets.MediaPlaylist.RemoveAt(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F40F0>
	char Remove(struct Unknown MediaSource); // Function MediaAssets.MediaPlaylist.Remove(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F4060>
	int32_t Num(); // Function MediaAssets.MediaPlaylist.Num(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F38A0>
	void Insert(struct Unknown MediaSource, int32_t Index); // Function MediaAssets.MediaPlaylist.Insert(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3630>
	struct Unknown GetRandom(int32_t& OutIndex); // Function MediaAssets.MediaPlaylist.GetRandom(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2A30>
	struct Unknown GetPrevious(int32_t& InOutIndex); // Function MediaAssets.MediaPlaylist.GetPrevious(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2990>
	struct Unknown GetNext(int32_t& InOutIndex); // Function MediaAssets.MediaPlaylist.GetNext(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2720>
	struct Unknown Get(int32_t Index); // Function MediaAssets.MediaPlaylist.Get(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13520D0>
	char AddUrl(struct FString URL); // Function MediaAssets.MediaPlaylist.AddUrl(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F1930>
	char AddFile(struct FString FilePath); // Function MediaAssets.MediaPlaylist.AddFile(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F1880>
	char Add(struct Unknown MediaSource); // Function MediaAssets.MediaPlaylist.Add(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F17F0>
};

// Class MediaAssets.MediaSoundComponent
class UMediaSoundComponent : public USynthComponent {

public:

	enum class Unknow Channels; // 0x710 (4)
	char DynamicRateAdjustment : 0; // 0x714 (1)
	float RateAdjustmentFactor; // 0x718 (4)
	struct Unknown RateAdjustmentRange; // 0x71C (16)
	struct Unknown MediaPlayer; // 0x730 (8)

	void SetSpectralAnalysisSettings(struct TArray<Unknown> InFrequenciesToAnalyze, enum class Unknow InFFTSize); // Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F4E30>
	void SetMediaPlayer(struct Unknown NewMediaPlayer); // Function MediaAssets.MediaSoundComponent.SetMediaPlayer(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F4C10>
	void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec); // Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F4630>
	void SetEnableSpectralAnalysis(char bInSpectralAnalysisEnabled); // Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F45A0>
	void SetEnableEnvelopeFollowing(char bInEnvelopeFollowing); // Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F4510>
	struct TArray<Unknown> GetSpectralData(); // Function MediaAssets.MediaSoundComponent.GetSpectralData(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2B90>
	struct Unknown GetMediaPlayer(); // Function MediaAssets.MediaSoundComponent.GetMediaPlayer(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F26C0>
	float GetEnvelopeValue(); // Function MediaAssets.MediaSoundComponent.GetEnvelopeValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F24E0>
	char BP_GetAttenuationSettingsToApply(struct Unknown& OutAttenuationSettings); // Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F19E0>
};

// Class MediaAssets.MediaTexture
class UMediaTexture : public UTexture {

public:

	char AddressX; // 0xB8 (1)
	char AddressY; // 0xB9 (1)
	char AutoClear : 0; // 0xBA (1)
	struct Unknown ClearColor; // 0xBC (16)
	char EnableGenMips : 0; // 0xCC (1)
	char NumMips; // 0xCD (1)
	struct Unknown MediaPlayer; // 0xD0 (8)

	void SetMediaPlayer(struct Unknown NewMediaPlayer); // Function MediaAssets.MediaTexture.SetMediaPlayer(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F4C90>
	int32_t GetWidth(); // Function MediaAssets.MediaTexture.GetWidth(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F35D0>
	struct Unknown GetMediaPlayer(); // Function MediaAssets.MediaTexture.GetMediaPlayer(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F26F0>
	int32_t GetHeight(); // Function MediaAssets.MediaTexture.GetHeight(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2510>
	float GetAspectRatio(); // Function MediaAssets.MediaTexture.GetAspectRatio(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F21B0>
};

// Class MediaAssets.PlatformMediaSource
class UPlatformMediaSource : public UMediaSource {

public:

	struct Unknown MediaSource; // 0x80 (8)
};

// Class MediaAssets.StreamMediaSource
class UStreamMediaSource : public UBaseMediaSource {

public:

	struct FString StreamUrl; // 0x88 (16)
};

// Class MediaAssets.TimeSynchronizableMediaSource
class UTimeSynchronizableMediaSource : public UBaseMediaSource {

public:

	char bUseTimeSynchronization : 0; // 0x88 (1)
	int32_t FrameDelay; // 0x8C (4)
	double TimeDelay; // 0x90 (8)
};

// ScriptStruct MediaAssets.MediaCaptureDevice
struct FMediaCaptureDevice {
	struct FText DisplayName; // 0x0 (24)
	struct FString URL; // 0x18 (16)
};

// ScriptStruct MediaAssets.MediaSoundComponentSpectralData
struct FMediaSoundComponentSpectralData {
	float FrequencyHz; // 0x0 (4)
	float Magnitude; // 0x4 (4)
};

