// Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
enum class EMediaWebcamCaptureDeviceFilter : uint8 {
	EMediaWebcamCaptureDeviceFilter = 0
	EMediaWebcamCaptureDeviceFilter = 1
	EMediaWebcamCaptureDeviceFilter = 2
	EMediaWebcamCaptureDeviceFilter = 4
	EMediaWebcamCaptureDeviceFilter = 8
	EMediaWebcamCaptureDeviceFilter = 9
};

// Enum MediaAssets.EMediaVideoCaptureDeviceFilter
enum class EMediaVideoCaptureDeviceFilter : uint8 {
	EMediaVideoCaptureDeviceFilter = 0
	EMediaVideoCaptureDeviceFilter = 1
	EMediaVideoCaptureDeviceFilter = 2
	EMediaVideoCaptureDeviceFilter = 4
	EMediaVideoCaptureDeviceFilter = 8
	EMediaVideoCaptureDeviceFilter = 9
};

// Enum MediaAssets.EMediaAudioCaptureDeviceFilter
enum class EMediaAudioCaptureDeviceFilter : uint8 {
	EMediaAudioCaptureDeviceFilter = 0
	EMediaAudioCaptureDeviceFilter = 1
	EMediaAudioCaptureDeviceFilter = 2
	EMediaAudioCaptureDeviceFilter = 4
	EMediaAudioCaptureDeviceFilter = 8
	EMediaAudioCaptureDeviceFilter = 9
};

// Enum MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8 {
	EMediaPlayerTrack = 0
	EMediaPlayerTrack = 1
	EMediaPlayerTrack = 2
	EMediaPlayerTrack = 3
	EMediaPlayerTrack = 4
	EMediaPlayerTrack = 5
	EMediaPlayerTrack = 6
	EMediaPlayerTrack = 7
};

// Enum MediaAssets.EMediaSoundComponentFFTSize
enum class EMediaSoundComponentFFTSize : uint8 {
	EMediaSoundComponentFFTSize_65 = 0
	EMediaSoundComponentFFTSize_257 = 1
	EMediaSoundComponentFFTSize_513 = 2
	EMediaSoundComponentFFTSize_1025 = 3
	EMediaSoundComponentFFTSize = 4
};

// Enum MediaAssets.EMediaSoundChannels
enum class EMediaSoundChannels : uint8 {
	EMediaSoundChannels = 0
	EMediaSoundChannels = 1
	EMediaSoundChannels = 2
	EMediaSoundChannels = 3
};

// Class MediaAssets.BaseMediaSource
struct UBaseMediaSource : UMediaSource {
	struct FName playerName; // 0x80 (8)
};

// Class MediaAssets.FileMediaSource
struct UFileMediaSource : UBaseMediaSource {
	struct FString FilePath; // 0x88 (16)
	char PrecacheFile : 0; // 0x98 (1)

	void SetFilePath(struct FString Path); // Function MediaAssets.FileMediaSource.SetFilePath(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F33F0>
};

// Class MediaAssets.MediaComponent
struct UMediaComponent : UActorComponent {
	struct Unknown MediaTexture; // 0xB0 (8)
	struct Unknown MediaPlayer; // 0xB8 (8)

	struct Unknown GetMediaTexture(); // Function MediaAssets.MediaComponent.GetMediaTexture(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2EF5EC0>
	struct Unknown GetMediaPlayer(); // Function MediaAssets.MediaComponent.GetMediaPlayer(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F1390>
};

// Class MediaAssets.MediaPlayer
struct UMediaPlayer : Object {
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

	char SupportsSeeking(); // Function MediaAssets.MediaPlayer.SupportsSeeking(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F41C0>
	char SupportsScrubbing(); // Function MediaAssets.MediaPlayer.SupportsScrubbing(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F4190>
	char SupportsRate(float Rate, char Unthinned); // Function MediaAssets.MediaPlayer.SupportsRate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F40C0>
	char SetViewRotation(struct Unknown& Rotation, char Absolute); // Function MediaAssets.MediaPlayer.SetViewRotation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3FE0>
	char SetViewField(float Horizontal, float Vertical, char Absolute); // Function MediaAssets.MediaPlayer.SetViewField(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3ED0>
	char SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate); // Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3DD0>
	char SetTrackFormat(enum class Unknow TrackType, int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.SetTrackFormat(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3CD0>
	void SetTimeDelay(struct Unknown TimeDelay); // Function MediaAssets.MediaPlayer.SetTimeDelay(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3C50>
	char SetRate(float Rate); // Function MediaAssets.MediaPlayer.SetRate(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3AA0>
	char SetNativeVolume(float Volume); // Function MediaAssets.MediaPlayer.SetNativeVolume(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3A10>
	void SetMediaOptions(struct Unknown options); // Function MediaAssets.MediaPlayer.SetMediaOptions(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3890>
	char SetLooping(char Looping); // Function MediaAssets.MediaPlayer.SetLooping(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3490>
	void SetDesiredPlayerName(struct FName playerName); // Function MediaAssets.MediaPlayer.SetDesiredPlayerName(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3190>
	void SetBlockOnTime(struct Unknown& Time); // Function MediaAssets.MediaPlayer.SetBlockOnTime(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3100>
	char SelectTrack(enum class Unknow TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.SelectTrack(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3040>
	char Seek(struct Unknown& Time); // Function MediaAssets.MediaPlayer.Seek(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2FA0>
	char Rewind(); // Function MediaAssets.MediaPlayer.Rewind(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2F70>
	char Reopen(); // Function MediaAssets.MediaPlayer.Reopen(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2E80>
	char Previous(); // Function MediaAssets.MediaPlayer.Previous(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2D30>
	void PlayAndSeek(); // Function MediaAssets.MediaPlayer.PlayAndSeek(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2D10>
	char Play(); // Function MediaAssets.MediaPlayer.Play(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2CE0>
	char Pause(); // Function MediaAssets.MediaPlayer.Pause(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2CB0>
	char OpenUrl(struct FString U); // Function MediaAssets.MediaPlayer.OpenUrl(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2C00>
	char OpenSourceWithOptions(struct Unknown MediaSource, struct Unknown& options); // Function MediaAssets.MediaPlayer.OpenSourceWithOptions(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2B00>
	void OpenSourceLatent(struct Unknown WorldContextObject, struct Unknown LatentInfo, struct Unknown MediaSource, struct Unknown& options, char& bSuccess); // Function MediaAssets.MediaPlayer.OpenSourceLatent(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2920>
	char OpenSourceForWidget(struct Unknown MediaSource, struct Unknown NewOwnerWidget); // Function MediaAssets.MediaPlayer.OpenSourceForWidget(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2860>
	char OpenSource(struct Unknown MediaSource); // Function MediaAssets.MediaPlayer.OpenSource(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F27D0>
	char OpenPlaylistIndex(struct Unknown InPlaylist, int32_t Index); // Function MediaAssets.MediaPlayer.OpenPlaylistIndex(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2710>
	char OpenPlaylist(struct Unknown InPlaylist); // Function MediaAssets.MediaPlayer.OpenPlaylist(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2670>
	char OpenFile(struct FString FilePath); // Function MediaAssets.MediaPlayer.OpenFile(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F25C0>
	char Next(); // Function MediaAssets.MediaPlayer.Next(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2570>
	char IsReady(); // Function MediaAssets.MediaPlayer.IsReady(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2540>
	char IsPreparing(); // Function MediaAssets.MediaPlayer.IsPreparing(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2510>
	char IsPlaying(); // Function MediaAssets.MediaPlayer.IsPlaying(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F24E0>
	char IsPaused(); // Function MediaAssets.MediaPlayer.IsPaused(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F24B0>
	char IsLooping(); // Function MediaAssets.MediaPlayer.IsLooping(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2480>
	char IsConnecting(); // Function MediaAssets.MediaPlayer.IsConnecting(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2450>
	char IsClosed(); // Function MediaAssets.MediaPlayer.IsClosed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2420>
	char IsBuffering(); // Function MediaAssets.MediaPlayer.IsBuffering(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F23F0>
	char HasError(); // Function MediaAssets.MediaPlayer.HasError(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2300>
	struct Unknown GetViewRotation(); // Function MediaAssets.MediaPlayer.GetViewRotation(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2290>
	struct FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackType(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2190>
	struct Unknown GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F20C0>
	float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2000>
	struct Unknown GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackDimensions(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F1F30>
	float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F1E70>
	float GetVerticalFieldOfView(); // Function MediaAssets.MediaPlayer.GetVerticalFieldOfView(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F1E40>
	struct FString GetUrl(); // Function MediaAssets.MediaPlayer.GetUrl(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F1D80>
	struct FString GetTrackLanguage(enum class Unknow TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackLanguage(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F1C70>
	int32_t GetTrackFormat(enum class Unknow TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackFormat(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F1BB0>
	struct FText GetTrackDisplayName(enum class Unknow TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackDisplayName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F1A90>
	struct Unknown GetTimeDelay(); // Function MediaAssets.MediaPlayer.GetTimeDelay(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F1A50>
	struct Unknown GetTime(); // Function MediaAssets.MediaPlayer.GetTime(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F1A10>
	void GetSupportedRates(struct TArray<Unknown>& OutRates, char Unthinned); // Function MediaAssets.MediaPlayer.GetSupportedRates(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F1910>
	int32_t GetSelectedTrack(enum class Unknow TrackType); // Function MediaAssets.MediaPlayer.GetSelectedTrack(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F1800>
	float GetRate(); // Function MediaAssets.MediaPlayer.GetRate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F17D0>
	int32_t GetPlaylistIndex(); // Function MediaAssets.MediaPlayer.GetPlaylistIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F1670>
	struct Unknown GetPlaylist(); // Function MediaAssets.MediaPlayer.GetPlaylist(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F1650>
	struct FName GetPlayerName(); // Function MediaAssets.MediaPlayer.GetPlayerName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F1610>
	int32_t GetNumTracks(enum class Unknow TrackType); // Function MediaAssets.MediaPlayer.GetNumTracks(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F1580>
	int32_t GetNumTrackFormats(enum class Unknow TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetNumTrackFormats(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F14C0>
	struct FText GetMediaName(); // Function MediaAssets.MediaPlayer.GetMediaName(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F12F0>
	struct Unknown GetLastVideoSampleProcessedTime(); // Function MediaAssets.MediaPlayer.GetLastVideoSampleProcessedTime(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F12B0>
	struct Unknown GetLastAudioSampleProcessedTime(); // Function MediaAssets.MediaPlayer.GetLastAudioSampleProcessedTime(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F1270>
	float GetHorizontalFieldOfView(); // Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F1240>
	struct Unknown GetDuration(); // Function MediaAssets.MediaPlayer.GetDuration(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F11A0>
	struct FName GetDesiredPlayerName(); // Function MediaAssets.MediaPlayer.GetDesiredPlayerName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F1160>
	struct FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackType(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F1060>
	int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F0FA0>
	int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackChannels(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F0EE0>
	void Close(); // Function MediaAssets.MediaPlayer.Close(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F0AA0>
	char CanPlayUrl(struct FString U); // Function MediaAssets.MediaPlayer.CanPlayUrl(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F09F0>
	char CanPlaySource(struct Unknown MediaSource); // Function MediaAssets.MediaPlayer.CanPlaySource(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F0960>
	char CanPause(); // Function MediaAssets.MediaPlayer.CanPause(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F0930>
};

// Class MediaAssets.MediaPlaylist
struct UMediaPlaylist : Object {
	struct TArray<Unknown> Items; // 0x28 (16)

	char Replace(int32_t Index, struct Unknown Replacement); // Function MediaAssets.MediaPlaylist.Replace(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2EB0>
	char RemoveAt(int32_t Index); // Function MediaAssets.MediaPlaylist.RemoveAt(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2DF0>
	char Remove(struct Unknown MediaSource); // Function MediaAssets.MediaPlaylist.Remove(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2D60>
	int32_t Num(); // Function MediaAssets.MediaPlaylist.Num(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F25A0>
	void Insert(struct Unknown MediaSource, int32_t Index); // Function MediaAssets.MediaPlaylist.Insert(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F2330>
	struct Unknown GetRandom(int32_t& OutIndex); // Function MediaAssets.MediaPlaylist.GetRandom(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F1730>
	struct Unknown GetPrevious(int32_t& InOutIndex); // Function MediaAssets.MediaPlaylist.GetPrevious(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F1690>
	struct Unknown GetNext(int32_t& InOutIndex); // Function MediaAssets.MediaPlaylist.GetNext(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F1420>
	struct Unknown Get(int32_t Index); // Function MediaAssets.MediaPlaylist.Get(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1350C90>
	char AddUrl(struct FString U); // Function MediaAssets.MediaPlaylist.AddUrl(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F0630>
	char AddFile(struct FString FilePath); // Function MediaAssets.MediaPlaylist.AddFile(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F0580>
	char Add(struct Unknown MediaSource); // Function MediaAssets.MediaPlaylist.Add(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F04F0>
};

// Class MediaAssets.MediaSoundComponent
struct UMediaSoundComponent : USynthComponent {
	enum class Unknow Channels; // 0x710 (4)
	char DynamicRateAdjustment : 0; // 0x714 (1)
	float RateAdjustmentFactor; // 0x718 (4)
	struct Unknown RateAdjustmentRange; // 0x71C (16)
	struct Unknown MediaPlayer; // 0x730 (8)

	void SetSpectralAnalysisSettings(struct TArray<Unknown> InFrequenciesToAnalyze, enum class Unknow InFFTSize); // Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3B30>
	void SetMediaPlayer(struct Unknown NewMediaPlayer); // Function MediaAssets.MediaSoundComponent.SetMediaPlayer(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3910>
	void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec); // Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3330>
	void SetEnableSpectralAnalysis(char bInSpectralAnalysisEnabled); // Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F32A0>
	void SetEnableEnvelopeFollowing(char bInEnvelopeFollowing); // Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3210>
	struct TArray<Unknown> GetSpectralData(); // Function MediaAssets.MediaSoundComponent.GetSpectralData(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F1890>
	struct Unknown GetMediaPlayer(); // Function MediaAssets.MediaSoundComponent.GetMediaPlayer(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F13C0>
	float GetEnvelopeValue(); // Function MediaAssets.MediaSoundComponent.GetEnvelopeValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F11E0>
	char BP_GetAttenuationSettingsToApply(struct Unknown& OutAttenuationSettings); // Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F06E0>
};

// Class MediaAssets.MediaTexture
struct UMediaTexture : UTexture {
	char AddressX; // 0xB8 (1)
	char AddressY; // 0xB9 (1)
	char AutoClear : 0; // 0xBA (1)
	struct Unknown ClearColor; // 0xBC (16)
	char EnableGenMips : 0; // 0xCC (1)
	char NumMips; // 0xCD (1)
	struct Unknown MediaPlayer; // 0xD0 (8)

	void SetMediaPlayer(struct Unknown NewMediaPlayer); // Function MediaAssets.MediaTexture.SetMediaPlayer(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F3990>
	int32_t GetWidth(); // Function MediaAssets.MediaTexture.GetWidth(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F22D0>
	struct Unknown GetMediaPlayer(); // Function MediaAssets.MediaTexture.GetMediaPlayer(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F13F0>
	int32_t GetHeight(); // Function MediaAssets.MediaTexture.GetHeight(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F1210>
	float GetAspectRatio(); // Function MediaAssets.MediaTexture.GetAspectRatio(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F0EB0>
};

// Class MediaAssets.PlatformMediaSource
struct UPlatformMediaSource : UMediaSource {
	struct Unknown MediaSource; // 0x80 (8)
};

// Class MediaAssets.StreamMediaSource
struct UStreamMediaSource : UBaseMediaSource {
	struct FString StreamUrl; // 0x88 (16)
};

// Class MediaAssets.TimeSynchronizableMediaSource
struct UTimeSynchronizableMediaSource : UBaseMediaSource {
	char bUseTimeSynchronization : 0; // 0x88 (1)
	int32_t FrameDelay; // 0x8C (4)
	double TimeDelay; // 0x90 (8)
};

