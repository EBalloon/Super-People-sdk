// Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
enum class EMediaWebcamCaptureDeviceFilter : uint8_t {
	None = 0,
	DepthSensor = 1,
	Front = 2,
	Rear = 4,
	Unknown = 8,
	EMediaWebcamCaptureDeviceFilter_MAX = 9,
};

// Enum MediaAssets.EMediaVideoCaptureDeviceFilter
enum class EMediaVideoCaptureDeviceFilter : uint8_t {
	None = 0,
	Card = 1,
	Software = 2,
	Unknown = 4,
	Webcam = 8,
	EMediaVideoCaptureDeviceFilter_MAX = 9,
};

// Enum MediaAssets.EMediaAudioCaptureDeviceFilter
enum class EMediaAudioCaptureDeviceFilter : uint8_t {
	None = 0,
	Card = 1,
	Microphone = 2,
	Software = 4,
	Unknown = 8,
	EMediaAudioCaptureDeviceFilter_MAX = 9,
};

// Enum MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8_t {
	Audio = 0,
	Caption = 1,
	Metadata = 2,
	Script = 3,
	Subtitle = 4,
	Text = 5,
	Video = 6,
	EMediaPlayerTrack_MAX = 7,
};

// Enum MediaAssets.EMediaSoundComponentFFTSize
enum class EMediaSoundComponentFFTSize : uint8_t {
	Min_65 = 0,
	Small_257 = 1,
	Medium_513 = 2,
	Large_1025 = 3,
	EMediaSoundComponentFFTSize_MAX = 4,
};

// Enum MediaAssets.EMediaSoundChannels
enum class EMediaSoundChannels : uint8_t {
	Mono = 0,
	Stereo = 1,
	Surround = 2,
	EMediaSoundChannels_MAX = 3,
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

	void SetFilePath(struct FString Path); // Function MediaAssets.FileMediaSource.SetFilePath(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAF5E0>
};

// Class MediaAssets.MediaComponent
class UMediaComponent : public UActorComponent {

public:

	struct Unknown MediaTexture; // 0xB0 (8)
	struct Unknown MediaPlayer; // 0xB8 (8)

	struct Unknown GetMediaTexture(); // Function MediaAssets.MediaComponent.GetMediaTexture(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36B20A0>
	struct Unknown GetMediaPlayer(); // Function MediaAssets.MediaComponent.GetMediaPlayer(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAD580>
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

	char SupportsSeeking(); // Function MediaAssets.MediaPlayer.SupportsSeeking(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB03B0>
	char SupportsScrubbing(); // Function MediaAssets.MediaPlayer.SupportsScrubbing(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB0380>
	char SupportsRate(float Rate, char Unthinned); // Function MediaAssets.MediaPlayer.SupportsRate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB02B0>
	char SetViewRotation(struct Unknown& Rotation, char Absolute); // Function MediaAssets.MediaPlayer.SetViewRotation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB01D0>
	char SetViewField(float Horizontal, float Vertical, char Absolute); // Function MediaAssets.MediaPlayer.SetViewField(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB00C0>
	char SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate); // Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAFFC0>
	char SetTrackFormat(enum class Unknow TrackType, int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.SetTrackFormat(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAFEC0>
	void SetTimeDelay(struct Unknown TimeDelay); // Function MediaAssets.MediaPlayer.SetTimeDelay(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAFE40>
	char SetRate(float Rate); // Function MediaAssets.MediaPlayer.SetRate(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAFC90>
	char SetNativeVolume(float Volume); // Function MediaAssets.MediaPlayer.SetNativeVolume(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAFC00>
	void SetMediaOptions(struct Unknown options); // Function MediaAssets.MediaPlayer.SetMediaOptions(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAFA80>
	char SetLooping(char Looping); // Function MediaAssets.MediaPlayer.SetLooping(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAF680>
	void SetDesiredPlayerName(struct FName playerName); // Function MediaAssets.MediaPlayer.SetDesiredPlayerName(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAF380>
	void SetBlockOnTime(struct Unknown& Time); // Function MediaAssets.MediaPlayer.SetBlockOnTime(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAF2F0>
	char SelectTrack(enum class Unknow TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.SelectTrack(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAF230>
	char Seek(struct Unknown& Time); // Function MediaAssets.MediaPlayer.Seek(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAF190>
	char Rewind(); // Function MediaAssets.MediaPlayer.Rewind(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAF160>
	char Reopen(); // Function MediaAssets.MediaPlayer.Reopen(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAF070>
	char Previous(); // Function MediaAssets.MediaPlayer.Previous(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAEF20>
	void PlayAndSeek(); // Function MediaAssets.MediaPlayer.PlayAndSeek(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAEF00>
	char Play(); // Function MediaAssets.MediaPlayer.Play(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAEED0>
	char Pause(); // Function MediaAssets.MediaPlayer.Pause(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAEEA0>
	char OpenUrl(struct FString URL); // Function MediaAssets.MediaPlayer.OpenUrl(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAEDF0>
	char OpenSourceWithOptions(struct Unknown MediaSource, struct Unknown& options); // Function MediaAssets.MediaPlayer.OpenSourceWithOptions(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAECF0>
	void OpenSourceLatent(struct Unknown WorldContextObject, struct Unknown LatentInfo, struct Unknown MediaSource, struct Unknown& options, char& bSuccess); // Function MediaAssets.MediaPlayer.OpenSourceLatent(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAEB10>
	char OpenSourceForWidget(struct Unknown MediaSource, struct Unknown NewOwnerWidget); // Function MediaAssets.MediaPlayer.OpenSourceForWidget(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAEA50>
	char OpenSource(struct Unknown MediaSource); // Function MediaAssets.MediaPlayer.OpenSource(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAE9C0>
	char OpenPlaylistIndex(struct Unknown InPlaylist, int32_t Index); // Function MediaAssets.MediaPlayer.OpenPlaylistIndex(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAE900>
	char OpenPlaylist(struct Unknown InPlaylist); // Function MediaAssets.MediaPlayer.OpenPlaylist(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAE860>
	char OpenFile(struct FString FilePath); // Function MediaAssets.MediaPlayer.OpenFile(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAE7B0>
	char Next(); // Function MediaAssets.MediaPlayer.Next(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAE760>
	char IsReady(); // Function MediaAssets.MediaPlayer.IsReady(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAE730>
	char IsPreparing(); // Function MediaAssets.MediaPlayer.IsPreparing(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAE700>
	char IsPlaying(); // Function MediaAssets.MediaPlayer.IsPlaying(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAE6D0>
	char IsPaused(); // Function MediaAssets.MediaPlayer.IsPaused(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAE6A0>
	char IsLooping(); // Function MediaAssets.MediaPlayer.IsLooping(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAE670>
	char IsConnecting(); // Function MediaAssets.MediaPlayer.IsConnecting(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAE640>
	char IsClosed(); // Function MediaAssets.MediaPlayer.IsClosed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAE610>
	char IsBuffering(); // Function MediaAssets.MediaPlayer.IsBuffering(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAE5E0>
	char HasError(); // Function MediaAssets.MediaPlayer.HasError(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAE4F0>
	struct Unknown GetViewRotation(); // Function MediaAssets.MediaPlayer.GetViewRotation(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAE480>
	struct FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackType(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAE380>
	struct Unknown GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAE2B0>
	float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAE1F0>
	struct Unknown GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackDimensions(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAE120>
	float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAE060>
	float GetVerticalFieldOfView(); // Function MediaAssets.MediaPlayer.GetVerticalFieldOfView(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAE030>
	struct FString GetUrl(); // Function MediaAssets.MediaPlayer.GetUrl(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CADF70>
	struct FString GetTrackLanguage(enum class Unknow TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackLanguage(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CADE60>
	int32_t GetTrackFormat(enum class Unknow TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackFormat(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CADDA0>
	struct FText GetTrackDisplayName(enum class Unknow TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackDisplayName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CADC80>
	struct Unknown GetTimeDelay(); // Function MediaAssets.MediaPlayer.GetTimeDelay(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CADC40>
	struct Unknown GetTime(); // Function MediaAssets.MediaPlayer.GetTime(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CADC00>
	void GetSupportedRates(struct TArray<Unknown>& OutRates, char Unthinned); // Function MediaAssets.MediaPlayer.GetSupportedRates(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CADB00>
	int32_t GetSelectedTrack(enum class Unknow TrackType); // Function MediaAssets.MediaPlayer.GetSelectedTrack(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAD9F0>
	float GetRate(); // Function MediaAssets.MediaPlayer.GetRate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAD9C0>
	int32_t GetPlaylistIndex(); // Function MediaAssets.MediaPlayer.GetPlaylistIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAD860>
	struct Unknown GetPlaylist(); // Function MediaAssets.MediaPlayer.GetPlaylist(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAD840>
	struct FName GetPlayerName(); // Function MediaAssets.MediaPlayer.GetPlayerName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAD800>
	int32_t GetNumTracks(enum class Unknow TrackType); // Function MediaAssets.MediaPlayer.GetNumTracks(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAD770>
	int32_t GetNumTrackFormats(enum class Unknow TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetNumTrackFormats(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAD6B0>
	struct FText GetMediaName(); // Function MediaAssets.MediaPlayer.GetMediaName(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAD4E0>
	struct Unknown GetLastVideoSampleProcessedTime(); // Function MediaAssets.MediaPlayer.GetLastVideoSampleProcessedTime(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAD4A0>
	struct Unknown GetLastAudioSampleProcessedTime(); // Function MediaAssets.MediaPlayer.GetLastAudioSampleProcessedTime(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAD460>
	float GetHorizontalFieldOfView(); // Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAD430>
	struct Unknown GetDuration(); // Function MediaAssets.MediaPlayer.GetDuration(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAD390>
	struct FName GetDesiredPlayerName(); // Function MediaAssets.MediaPlayer.GetDesiredPlayerName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAD350>
	struct FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackType(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAD250>
	int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAD190>
	int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackChannels(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAD0D0>
	void Close(); // Function MediaAssets.MediaPlayer.Close(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CACC90>
	char CanPlayUrl(struct FString URL); // Function MediaAssets.MediaPlayer.CanPlayUrl(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CACBE0>
	char CanPlaySource(struct Unknown MediaSource); // Function MediaAssets.MediaPlayer.CanPlaySource(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CACB50>
	char CanPause(); // Function MediaAssets.MediaPlayer.CanPause(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CACB20>
};

// Class MediaAssets.MediaPlaylist
class UMediaPlaylist : public Object {

public:

	struct TArray<Unknown> Items; // 0x28 (16)

	char Replace(int32_t Index, struct Unknown Replacement); // Function MediaAssets.MediaPlaylist.Replace(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAF0A0>
	char RemoveAt(int32_t Index); // Function MediaAssets.MediaPlaylist.RemoveAt(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAEFE0>
	char Remove(struct Unknown MediaSource); // Function MediaAssets.MediaPlaylist.Remove(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAEF50>
	int32_t Num(); // Function MediaAssets.MediaPlaylist.Num(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAE790>
	void Insert(struct Unknown MediaSource, int32_t Index); // Function MediaAssets.MediaPlaylist.Insert(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAE520>
	struct Unknown GetRandom(int32_t& OutIndex); // Function MediaAssets.MediaPlaylist.GetRandom(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAD920>
	struct Unknown GetPrevious(int32_t& InOutIndex); // Function MediaAssets.MediaPlaylist.GetPrevious(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAD880>
	struct Unknown GetNext(int32_t& InOutIndex); // Function MediaAssets.MediaPlaylist.GetNext(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAD610>
	struct Unknown Get(int32_t Index); // Function MediaAssets.MediaPlaylist.Get(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1362A80>
	char AddUrl(struct FString URL); // Function MediaAssets.MediaPlaylist.AddUrl(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAC820>
	char AddFile(struct FString FilePath); // Function MediaAssets.MediaPlaylist.AddFile(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAC770>
	char Add(struct Unknown MediaSource); // Function MediaAssets.MediaPlaylist.Add(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAC6E0>
};

// Class MediaAssets.MediaSoundComponent
class UMediaSoundComponent : public USynthComponent {

public:

	enum class Unknow Channels; // 0x710 (4)
	char DynamicRateAdjustment : 0; // 0x714 (1)
	float RateAdjustmentFactor; // 0x718 (4)
	struct Unknown RateAdjustmentRange; // 0x71C (16)
	struct Unknown MediaPlayer; // 0x730 (8)

	void SetSpectralAnalysisSettings(struct TArray<Unknown> InFrequenciesToAnalyze, enum class Unknow InFFTSize); // Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAFD20>
	void SetMediaPlayer(struct Unknown NewMediaPlayer); // Function MediaAssets.MediaSoundComponent.SetMediaPlayer(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAFB00>
	void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec); // Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAF520>
	void SetEnableSpectralAnalysis(char bInSpectralAnalysisEnabled); // Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAF490>
	void SetEnableEnvelopeFollowing(char bInEnvelopeFollowing); // Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAF400>
	struct TArray<Unknown> GetSpectralData(); // Function MediaAssets.MediaSoundComponent.GetSpectralData(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CADA80>
	struct Unknown GetMediaPlayer(); // Function MediaAssets.MediaSoundComponent.GetMediaPlayer(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAD5B0>
	float GetEnvelopeValue(); // Function MediaAssets.MediaSoundComponent.GetEnvelopeValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAD3D0>
	char BP_GetAttenuationSettingsToApply(struct Unknown& OutAttenuationSettings); // Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAC8D0>
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

	void SetMediaPlayer(struct Unknown NewMediaPlayer); // Function MediaAssets.MediaTexture.SetMediaPlayer(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAFB80>
	int32_t GetWidth(); // Function MediaAssets.MediaTexture.GetWidth(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAE4C0>
	struct Unknown GetMediaPlayer(); // Function MediaAssets.MediaTexture.GetMediaPlayer(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAD5E0>
	int32_t GetHeight(); // Function MediaAssets.MediaTexture.GetHeight(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAD400>
	float GetAspectRatio(); // Function MediaAssets.MediaTexture.GetAspectRatio(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAD0A0>
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

// Function MediaAssets.FileMediaSource.SetFilePath
inline void UFileMediaSource::SetFilePath(struct FString Path) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.FileMediaSource.SetFilePath");

	struct SetFilePath_Params {
		struct FString Path;
	}; SetFilePath_Params Params;

	Params.Path = Path;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MediaAssets.MediaComponent.GetMediaTexture
inline struct Unknown UMediaComponent::GetMediaTexture() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaComponent.GetMediaTexture");

	struct GetMediaTexture_Params {
		
		struct Unknown ReturnValue;

	}; GetMediaTexture_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaComponent.GetMediaPlayer
inline struct Unknown UMediaComponent::GetMediaPlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaComponent.GetMediaPlayer");

	struct GetMediaPlayer_Params {
		
		struct Unknown ReturnValue;

	}; GetMediaPlayer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.SupportsSeeking
inline char UMediaPlayer::SupportsSeeking() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SupportsSeeking");

	struct SupportsSeeking_Params {
		
		char ReturnValue;

	}; SupportsSeeking_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.SupportsScrubbing
inline char UMediaPlayer::SupportsScrubbing() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SupportsScrubbing");

	struct SupportsScrubbing_Params {
		
		char ReturnValue;

	}; SupportsScrubbing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.SupportsRate
inline char UMediaPlayer::SupportsRate(float Rate, char Unthinned) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SupportsRate");

	struct SupportsRate_Params {
		float Rate;
		char Unthinned;
		char ReturnValue;

	}; SupportsRate_Params Params;

	Params.Rate = Rate;
	Params.Unthinned = Unthinned;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.SetViewRotation
inline char UMediaPlayer::SetViewRotation(struct Unknown& Rotation, char Absolute) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetViewRotation");

	struct SetViewRotation_Params {
		struct Unknown& Rotation;
		char Absolute;
		char ReturnValue;

	}; SetViewRotation_Params Params;

	Params.Absolute = Absolute;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Rotation = Params.Rotation;


	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.SetViewField
inline char UMediaPlayer::SetViewField(float Horizontal, float Vertical, char Absolute) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetViewField");

	struct SetViewField_Params {
		float Horizontal;
		float Vertical;
		char Absolute;
		char ReturnValue;

	}; SetViewField_Params Params;

	Params.Horizontal = Horizontal;
	Params.Vertical = Vertical;
	Params.Absolute = Absolute;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate
inline char UMediaPlayer::SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate");

	struct SetVideoTrackFrameRate_Params {
		int32_t TrackIndex;
		int32_t FormatIndex;
		float FrameRate;
		char ReturnValue;

	}; SetVideoTrackFrameRate_Params Params;

	Params.TrackIndex = TrackIndex;
	Params.FormatIndex = FormatIndex;
	Params.FrameRate = FrameRate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.SetTrackFormat
inline char UMediaPlayer::SetTrackFormat(enum class Unknow TrackType, int32_t TrackIndex, int32_t FormatIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetTrackFormat");

	struct SetTrackFormat_Params {
		enum class Unknow TrackType;
		int32_t TrackIndex;
		int32_t FormatIndex;
		char ReturnValue;

	}; SetTrackFormat_Params Params;

	Params.TrackType = TrackType;
	Params.TrackIndex = TrackIndex;
	Params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.SetTimeDelay
inline void UMediaPlayer::SetTimeDelay(struct Unknown TimeDelay) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetTimeDelay");

	struct SetTimeDelay_Params {
		struct Unknown TimeDelay;
	}; SetTimeDelay_Params Params;

	Params.TimeDelay = TimeDelay;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MediaAssets.MediaPlayer.SetRate
inline char UMediaPlayer::SetRate(float Rate) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetRate");

	struct SetRate_Params {
		float Rate;
		char ReturnValue;

	}; SetRate_Params Params;

	Params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.SetNativeVolume
inline char UMediaPlayer::SetNativeVolume(float Volume) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetNativeVolume");

	struct SetNativeVolume_Params {
		float Volume;
		char ReturnValue;

	}; SetNativeVolume_Params Params;

	Params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.SetMediaOptions
inline void UMediaPlayer::SetMediaOptions(struct Unknown options) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetMediaOptions");

	struct SetMediaOptions_Params {
		struct Unknown options;
	}; SetMediaOptions_Params Params;

	Params.options = options;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MediaAssets.MediaPlayer.SetLooping
inline char UMediaPlayer::SetLooping(char Looping) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetLooping");

	struct SetLooping_Params {
		char Looping;
		char ReturnValue;

	}; SetLooping_Params Params;

	Params.Looping = Looping;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.SetDesiredPlayerName
inline void UMediaPlayer::SetDesiredPlayerName(struct FName playerName) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetDesiredPlayerName");

	struct SetDesiredPlayerName_Params {
		struct FName playerName;
	}; SetDesiredPlayerName_Params Params;

	Params.playerName = playerName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MediaAssets.MediaPlayer.SetBlockOnTime
inline void UMediaPlayer::SetBlockOnTime(struct Unknown& Time) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetBlockOnTime");

	struct SetBlockOnTime_Params {
		struct Unknown& Time;
	}; SetBlockOnTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Time = Params.Time;

}

// Function MediaAssets.MediaPlayer.SelectTrack
inline char UMediaPlayer::SelectTrack(enum class Unknow TrackType, int32_t TrackIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SelectTrack");

	struct SelectTrack_Params {
		enum class Unknow TrackType;
		int32_t TrackIndex;
		char ReturnValue;

	}; SelectTrack_Params Params;

	Params.TrackType = TrackType;
	Params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.Seek
inline char UMediaPlayer::Seek(struct Unknown& Time) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Seek");

	struct Seek_Params {
		struct Unknown& Time;
		char ReturnValue;

	}; Seek_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Time = Params.Time;


	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.Rewind
inline char UMediaPlayer::Rewind() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Rewind");

	struct Rewind_Params {
		
		char ReturnValue;

	}; Rewind_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.Reopen
inline char UMediaPlayer::Reopen() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Reopen");

	struct Reopen_Params {
		
		char ReturnValue;

	}; Reopen_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.Previous
inline char UMediaPlayer::Previous() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Previous");

	struct Previous_Params {
		
		char ReturnValue;

	}; Previous_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.PlayAndSeek
inline void UMediaPlayer::PlayAndSeek() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.PlayAndSeek");

	struct PlayAndSeek_Params {
		
	}; PlayAndSeek_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MediaAssets.MediaPlayer.Play
inline char UMediaPlayer::Play() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Play");

	struct Play_Params {
		
		char ReturnValue;

	}; Play_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.Pause
inline char UMediaPlayer::Pause() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Pause");

	struct Pause_Params {
		
		char ReturnValue;

	}; Pause_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.OpenUrl
inline char UMediaPlayer::OpenUrl(struct FString URL) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenUrl");

	struct OpenUrl_Params {
		struct FString URL;
		char ReturnValue;

	}; OpenUrl_Params Params;

	Params.URL = URL;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.OpenSourceWithOptions
inline char UMediaPlayer::OpenSourceWithOptions(struct Unknown MediaSource, struct Unknown& options) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenSourceWithOptions");

	struct OpenSourceWithOptions_Params {
		struct Unknown MediaSource;
		struct Unknown& options;
		char ReturnValue;

	}; OpenSourceWithOptions_Params Params;

	Params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	options = Params.options;


	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.OpenSourceLatent
inline void UMediaPlayer::OpenSourceLatent(struct Unknown WorldContextObject, struct Unknown LatentInfo, struct Unknown MediaSource, struct Unknown& options, char& bSuccess) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenSourceLatent");

	struct OpenSourceLatent_Params {
		struct Unknown WorldContextObject;
		struct Unknown LatentInfo;
		struct Unknown MediaSource;
		struct Unknown& options;
		char& bSuccess;
	}; OpenSourceLatent_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.LatentInfo = LatentInfo;
	Params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	options = Params.options;
	bSuccess = Params.bSuccess;

}

// Function MediaAssets.MediaPlayer.OpenSourceForWidget
inline char UMediaPlayer::OpenSourceForWidget(struct Unknown MediaSource, struct Unknown NewOwnerWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenSourceForWidget");

	struct OpenSourceForWidget_Params {
		struct Unknown MediaSource;
		struct Unknown NewOwnerWidget;
		char ReturnValue;

	}; OpenSourceForWidget_Params Params;

	Params.MediaSource = MediaSource;
	Params.NewOwnerWidget = NewOwnerWidget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.OpenSource
inline char UMediaPlayer::OpenSource(struct Unknown MediaSource) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenSource");

	struct OpenSource_Params {
		struct Unknown MediaSource;
		char ReturnValue;

	}; OpenSource_Params Params;

	Params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.OpenPlaylistIndex
inline char UMediaPlayer::OpenPlaylistIndex(struct Unknown InPlaylist, int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenPlaylistIndex");

	struct OpenPlaylistIndex_Params {
		struct Unknown InPlaylist;
		int32_t Index;
		char ReturnValue;

	}; OpenPlaylistIndex_Params Params;

	Params.InPlaylist = InPlaylist;
	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.OpenPlaylist
inline char UMediaPlayer::OpenPlaylist(struct Unknown InPlaylist) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenPlaylist");

	struct OpenPlaylist_Params {
		struct Unknown InPlaylist;
		char ReturnValue;

	}; OpenPlaylist_Params Params;

	Params.InPlaylist = InPlaylist;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.OpenFile
inline char UMediaPlayer::OpenFile(struct FString FilePath) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenFile");

	struct OpenFile_Params {
		struct FString FilePath;
		char ReturnValue;

	}; OpenFile_Params Params;

	Params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.Next
inline char UMediaPlayer::Next() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Next");

	struct Next_Params {
		
		char ReturnValue;

	}; Next_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.IsReady
inline char UMediaPlayer::IsReady() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsReady");

	struct IsReady_Params {
		
		char ReturnValue;

	}; IsReady_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.IsPreparing
inline char UMediaPlayer::IsPreparing() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsPreparing");

	struct IsPreparing_Params {
		
		char ReturnValue;

	}; IsPreparing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.IsPlaying
inline char UMediaPlayer::IsPlaying() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsPlaying");

	struct IsPlaying_Params {
		
		char ReturnValue;

	}; IsPlaying_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.IsPaused
inline char UMediaPlayer::IsPaused() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsPaused");

	struct IsPaused_Params {
		
		char ReturnValue;

	}; IsPaused_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.IsLooping
inline char UMediaPlayer::IsLooping() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsLooping");

	struct IsLooping_Params {
		
		char ReturnValue;

	}; IsLooping_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.IsConnecting
inline char UMediaPlayer::IsConnecting() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsConnecting");

	struct IsConnecting_Params {
		
		char ReturnValue;

	}; IsConnecting_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.IsClosed
inline char UMediaPlayer::IsClosed() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsClosed");

	struct IsClosed_Params {
		
		char ReturnValue;

	}; IsClosed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.IsBuffering
inline char UMediaPlayer::IsBuffering() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsBuffering");

	struct IsBuffering_Params {
		
		char ReturnValue;

	}; IsBuffering_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.HasError
inline char UMediaPlayer::HasError() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.HasError");

	struct HasError_Params {
		
		char ReturnValue;

	}; HasError_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetViewRotation
inline struct Unknown UMediaPlayer::GetViewRotation() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetViewRotation");

	struct GetViewRotation_Params {
		
		struct Unknown ReturnValue;

	}; GetViewRotation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetVideoTrackType
inline struct FString UMediaPlayer::GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackType");

	struct GetVideoTrackType_Params {
		int32_t TrackIndex;
		int32_t FormatIndex;
		struct FString ReturnValue;

	}; GetVideoTrackType_Params Params;

	Params.TrackIndex = TrackIndex;
	Params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates
inline struct Unknown UMediaPlayer::GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates");

	struct GetVideoTrackFrameRates_Params {
		int32_t TrackIndex;
		int32_t FormatIndex;
		struct Unknown ReturnValue;

	}; GetVideoTrackFrameRates_Params Params;

	Params.TrackIndex = TrackIndex;
	Params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate
inline float UMediaPlayer::GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate");

	struct GetVideoTrackFrameRate_Params {
		int32_t TrackIndex;
		int32_t FormatIndex;
		float ReturnValue;

	}; GetVideoTrackFrameRate_Params Params;

	Params.TrackIndex = TrackIndex;
	Params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetVideoTrackDimensions
inline struct Unknown UMediaPlayer::GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackDimensions");

	struct GetVideoTrackDimensions_Params {
		int32_t TrackIndex;
		int32_t FormatIndex;
		struct Unknown ReturnValue;

	}; GetVideoTrackDimensions_Params Params;

	Params.TrackIndex = TrackIndex;
	Params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
inline float UMediaPlayer::GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio");

	struct GetVideoTrackAspectRatio_Params {
		int32_t TrackIndex;
		int32_t FormatIndex;
		float ReturnValue;

	}; GetVideoTrackAspectRatio_Params Params;

	Params.TrackIndex = TrackIndex;
	Params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetVerticalFieldOfView
inline float UMediaPlayer::GetVerticalFieldOfView() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVerticalFieldOfView");

	struct GetVerticalFieldOfView_Params {
		
		float ReturnValue;

	}; GetVerticalFieldOfView_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetUrl
inline struct FString UMediaPlayer::GetUrl() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetUrl");

	struct GetUrl_Params {
		
		struct FString ReturnValue;

	}; GetUrl_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetTrackLanguage
inline struct FString UMediaPlayer::GetTrackLanguage(enum class Unknow TrackType, int32_t TrackIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTrackLanguage");

	struct GetTrackLanguage_Params {
		enum class Unknow TrackType;
		int32_t TrackIndex;
		struct FString ReturnValue;

	}; GetTrackLanguage_Params Params;

	Params.TrackType = TrackType;
	Params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetTrackFormat
inline int32_t UMediaPlayer::GetTrackFormat(enum class Unknow TrackType, int32_t TrackIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTrackFormat");

	struct GetTrackFormat_Params {
		enum class Unknow TrackType;
		int32_t TrackIndex;
		int32_t ReturnValue;

	}; GetTrackFormat_Params Params;

	Params.TrackType = TrackType;
	Params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetTrackDisplayName
inline struct FText UMediaPlayer::GetTrackDisplayName(enum class Unknow TrackType, int32_t TrackIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTrackDisplayName");

	struct GetTrackDisplayName_Params {
		enum class Unknow TrackType;
		int32_t TrackIndex;
		struct FText ReturnValue;

	}; GetTrackDisplayName_Params Params;

	Params.TrackType = TrackType;
	Params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetTimeDelay
inline struct Unknown UMediaPlayer::GetTimeDelay() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTimeDelay");

	struct GetTimeDelay_Params {
		
		struct Unknown ReturnValue;

	}; GetTimeDelay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetTime
inline struct Unknown UMediaPlayer::GetTime() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTime");

	struct GetTime_Params {
		
		struct Unknown ReturnValue;

	}; GetTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetSupportedRates
inline void UMediaPlayer::GetSupportedRates(struct TArray<Unknown>& OutRates, char Unthinned) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetSupportedRates");

	struct GetSupportedRates_Params {
		struct TArray<Unknown>& OutRates;
		char Unthinned;
	}; GetSupportedRates_Params Params;

	Params.Unthinned = Unthinned;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutRates = Params.OutRates;

}

// Function MediaAssets.MediaPlayer.GetSelectedTrack
inline int32_t UMediaPlayer::GetSelectedTrack(enum class Unknow TrackType) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetSelectedTrack");

	struct GetSelectedTrack_Params {
		enum class Unknow TrackType;
		int32_t ReturnValue;

	}; GetSelectedTrack_Params Params;

	Params.TrackType = TrackType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetRate
inline float UMediaPlayer::GetRate() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetRate");

	struct GetRate_Params {
		
		float ReturnValue;

	}; GetRate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetPlaylistIndex
inline int32_t UMediaPlayer::GetPlaylistIndex() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetPlaylistIndex");

	struct GetPlaylistIndex_Params {
		
		int32_t ReturnValue;

	}; GetPlaylistIndex_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetPlaylist
inline struct Unknown UMediaPlayer::GetPlaylist() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetPlaylist");

	struct GetPlaylist_Params {
		
		struct Unknown ReturnValue;

	}; GetPlaylist_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetPlayerName
inline struct FName UMediaPlayer::GetPlayerName() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetPlayerName");

	struct GetPlayerName_Params {
		
		struct FName ReturnValue;

	}; GetPlayerName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetNumTracks
inline int32_t UMediaPlayer::GetNumTracks(enum class Unknow TrackType) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetNumTracks");

	struct GetNumTracks_Params {
		enum class Unknow TrackType;
		int32_t ReturnValue;

	}; GetNumTracks_Params Params;

	Params.TrackType = TrackType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetNumTrackFormats
inline int32_t UMediaPlayer::GetNumTrackFormats(enum class Unknow TrackType, int32_t TrackIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetNumTrackFormats");

	struct GetNumTrackFormats_Params {
		enum class Unknow TrackType;
		int32_t TrackIndex;
		int32_t ReturnValue;

	}; GetNumTrackFormats_Params Params;

	Params.TrackType = TrackType;
	Params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetMediaName
inline struct FText UMediaPlayer::GetMediaName() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetMediaName");

	struct GetMediaName_Params {
		
		struct FText ReturnValue;

	}; GetMediaName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetLastVideoSampleProcessedTime
inline struct Unknown UMediaPlayer::GetLastVideoSampleProcessedTime() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetLastVideoSampleProcessedTime");

	struct GetLastVideoSampleProcessedTime_Params {
		
		struct Unknown ReturnValue;

	}; GetLastVideoSampleProcessedTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetLastAudioSampleProcessedTime
inline struct Unknown UMediaPlayer::GetLastAudioSampleProcessedTime() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetLastAudioSampleProcessedTime");

	struct GetLastAudioSampleProcessedTime_Params {
		
		struct Unknown ReturnValue;

	}; GetLastAudioSampleProcessedTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView
inline float UMediaPlayer::GetHorizontalFieldOfView() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView");

	struct GetHorizontalFieldOfView_Params {
		
		float ReturnValue;

	}; GetHorizontalFieldOfView_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetDuration
inline struct Unknown UMediaPlayer::GetDuration() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetDuration");

	struct GetDuration_Params {
		
		struct Unknown ReturnValue;

	}; GetDuration_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetDesiredPlayerName
inline struct FName UMediaPlayer::GetDesiredPlayerName() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetDesiredPlayerName");

	struct GetDesiredPlayerName_Params {
		
		struct FName ReturnValue;

	}; GetDesiredPlayerName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetAudioTrackType
inline struct FString UMediaPlayer::GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetAudioTrackType");

	struct GetAudioTrackType_Params {
		int32_t TrackIndex;
		int32_t FormatIndex;
		struct FString ReturnValue;

	}; GetAudioTrackType_Params Params;

	Params.TrackIndex = TrackIndex;
	Params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate
inline int32_t UMediaPlayer::GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate");

	struct GetAudioTrackSampleRate_Params {
		int32_t TrackIndex;
		int32_t FormatIndex;
		int32_t ReturnValue;

	}; GetAudioTrackSampleRate_Params Params;

	Params.TrackIndex = TrackIndex;
	Params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetAudioTrackChannels
inline int32_t UMediaPlayer::GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetAudioTrackChannels");

	struct GetAudioTrackChannels_Params {
		int32_t TrackIndex;
		int32_t FormatIndex;
		int32_t ReturnValue;

	}; GetAudioTrackChannels_Params Params;

	Params.TrackIndex = TrackIndex;
	Params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.Close
inline void UMediaPlayer::Close() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Close");

	struct Close_Params {
		
	}; Close_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MediaAssets.MediaPlayer.CanPlayUrl
inline char UMediaPlayer::CanPlayUrl(struct FString URL) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.CanPlayUrl");

	struct CanPlayUrl_Params {
		struct FString URL;
		char ReturnValue;

	}; CanPlayUrl_Params Params;

	Params.URL = URL;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.CanPlaySource
inline char UMediaPlayer::CanPlaySource(struct Unknown MediaSource) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.CanPlaySource");

	struct CanPlaySource_Params {
		struct Unknown MediaSource;
		char ReturnValue;

	}; CanPlaySource_Params Params;

	Params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.CanPause
inline char UMediaPlayer::CanPause() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.CanPause");

	struct CanPause_Params {
		
		char ReturnValue;

	}; CanPause_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlaylist.Replace
inline char UMediaPlaylist::Replace(int32_t Index, struct Unknown Replacement) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Replace");

	struct Replace_Params {
		int32_t Index;
		struct Unknown Replacement;
		char ReturnValue;

	}; Replace_Params Params;

	Params.Index = Index;
	Params.Replacement = Replacement;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlaylist.RemoveAt
inline char UMediaPlaylist::RemoveAt(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.RemoveAt");

	struct RemoveAt_Params {
		int32_t Index;
		char ReturnValue;

	}; RemoveAt_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlaylist.Remove
inline char UMediaPlaylist::Remove(struct Unknown MediaSource) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Remove");

	struct Remove_Params {
		struct Unknown MediaSource;
		char ReturnValue;

	}; Remove_Params Params;

	Params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlaylist.Num
inline int32_t UMediaPlaylist::Num() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Num");

	struct Num_Params {
		
		int32_t ReturnValue;

	}; Num_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlaylist.Insert
inline void UMediaPlaylist::Insert(struct Unknown MediaSource, int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Insert");

	struct Insert_Params {
		struct Unknown MediaSource;
		int32_t Index;
	}; Insert_Params Params;

	Params.MediaSource = MediaSource;
	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MediaAssets.MediaPlaylist.GetRandom
inline struct Unknown UMediaPlaylist::GetRandom(int32_t& OutIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.GetRandom");

	struct GetRandom_Params {
		int32_t& OutIndex;
		struct Unknown ReturnValue;

	}; GetRandom_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutIndex = Params.OutIndex;


	return params.ReturnValue;
}

// Function MediaAssets.MediaPlaylist.GetPrevious
inline struct Unknown UMediaPlaylist::GetPrevious(int32_t& InOutIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.GetPrevious");

	struct GetPrevious_Params {
		int32_t& InOutIndex;
		struct Unknown ReturnValue;

	}; GetPrevious_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InOutIndex = Params.InOutIndex;


	return params.ReturnValue;
}

// Function MediaAssets.MediaPlaylist.GetNext
inline struct Unknown UMediaPlaylist::GetNext(int32_t& InOutIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.GetNext");

	struct GetNext_Params {
		int32_t& InOutIndex;
		struct Unknown ReturnValue;

	}; GetNext_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InOutIndex = Params.InOutIndex;


	return params.ReturnValue;
}

// Function MediaAssets.MediaPlaylist.Get
inline struct Unknown UMediaPlaylist::Get(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Get");

	struct Get_Params {
		int32_t Index;
		struct Unknown ReturnValue;

	}; Get_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlaylist.AddUrl
inline char UMediaPlaylist::AddUrl(struct FString URL) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.AddUrl");

	struct AddUrl_Params {
		struct FString URL;
		char ReturnValue;

	}; AddUrl_Params Params;

	Params.URL = URL;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlaylist.AddFile
inline char UMediaPlaylist::AddFile(struct FString FilePath) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.AddFile");

	struct AddFile_Params {
		struct FString FilePath;
		char ReturnValue;

	}; AddFile_Params Params;

	Params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlaylist.Add
inline char UMediaPlaylist::Add(struct Unknown MediaSource) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Add");

	struct Add_Params {
		struct Unknown MediaSource;
		char ReturnValue;

	}; Add_Params Params;

	Params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings
inline void UMediaSoundComponent::SetSpectralAnalysisSettings(struct TArray<Unknown> InFrequenciesToAnalyze, enum class Unknow InFFTSize) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings");

	struct SetSpectralAnalysisSettings_Params {
		struct TArray<Unknown> InFrequenciesToAnalyze;
		enum class Unknow InFFTSize;
	}; SetSpectralAnalysisSettings_Params Params;

	Params.InFrequenciesToAnalyze = InFrequenciesToAnalyze;
	Params.InFFTSize = InFFTSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MediaAssets.MediaSoundComponent.SetMediaPlayer
inline void UMediaSoundComponent::SetMediaPlayer(struct Unknown NewMediaPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetMediaPlayer");

	struct SetMediaPlayer_Params {
		struct Unknown NewMediaPlayer;
	}; SetMediaPlayer_Params Params;

	Params.NewMediaPlayer = NewMediaPlayer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings
inline void UMediaSoundComponent::SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings");

	struct SetEnvelopeFollowingsettings_Params {
		int32_t AttackTimeMsec;
		int32_t ReleaseTimeMsec;
	}; SetEnvelopeFollowingsettings_Params Params;

	Params.AttackTimeMsec = AttackTimeMsec;
	Params.ReleaseTimeMsec = ReleaseTimeMsec;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis
inline void UMediaSoundComponent::SetEnableSpectralAnalysis(char bInSpectralAnalysisEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis");

	struct SetEnableSpectralAnalysis_Params {
		char bInSpectralAnalysisEnabled;
	}; SetEnableSpectralAnalysis_Params Params;

	Params.bInSpectralAnalysisEnabled = bInSpectralAnalysisEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing
inline void UMediaSoundComponent::SetEnableEnvelopeFollowing(char bInEnvelopeFollowing) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing");

	struct SetEnableEnvelopeFollowing_Params {
		char bInEnvelopeFollowing;
	}; SetEnableEnvelopeFollowing_Params Params;

	Params.bInEnvelopeFollowing = bInEnvelopeFollowing;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MediaAssets.MediaSoundComponent.GetSpectralData
inline struct TArray<Unknown> UMediaSoundComponent::GetSpectralData() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.GetSpectralData");

	struct GetSpectralData_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; GetSpectralData_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaSoundComponent.GetMediaPlayer
inline struct Unknown UMediaSoundComponent::GetMediaPlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.GetMediaPlayer");

	struct GetMediaPlayer_Params {
		
		struct Unknown ReturnValue;

	}; GetMediaPlayer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaSoundComponent.GetEnvelopeValue
inline float UMediaSoundComponent::GetEnvelopeValue() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.GetEnvelopeValue");

	struct GetEnvelopeValue_Params {
		
		float ReturnValue;

	}; GetEnvelopeValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply
inline char UMediaSoundComponent::BP_GetAttenuationSettingsToApply(struct Unknown& OutAttenuationSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply");

	struct BP_GetAttenuationSettingsToApply_Params {
		struct Unknown& OutAttenuationSettings;
		char ReturnValue;

	}; BP_GetAttenuationSettingsToApply_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutAttenuationSettings = Params.OutAttenuationSettings;


	return params.ReturnValue;
}

// Function MediaAssets.MediaTexture.SetMediaPlayer
inline void UMediaTexture::SetMediaPlayer(struct Unknown NewMediaPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.SetMediaPlayer");

	struct SetMediaPlayer_Params {
		struct Unknown NewMediaPlayer;
	}; SetMediaPlayer_Params Params;

	Params.NewMediaPlayer = NewMediaPlayer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MediaAssets.MediaTexture.GetWidth
inline int32_t UMediaTexture::GetWidth() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetWidth");

	struct GetWidth_Params {
		
		int32_t ReturnValue;

	}; GetWidth_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaTexture.GetMediaPlayer
inline struct Unknown UMediaTexture::GetMediaPlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetMediaPlayer");

	struct GetMediaPlayer_Params {
		
		struct Unknown ReturnValue;

	}; GetMediaPlayer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaTexture.GetHeight
inline int32_t UMediaTexture::GetHeight() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetHeight");

	struct GetHeight_Params {
		
		int32_t ReturnValue;

	}; GetHeight_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaTexture.GetAspectRatio
inline float UMediaTexture::GetAspectRatio() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetAspectRatio");

	struct GetAspectRatio_Params {
		
		float ReturnValue;

	}; GetAspectRatio_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

