// Enum MoviePlayer.EMoviePlaybackType
enum class EMoviePlaybackType : uint8_t {
	MT_Normal = 0,
	MT_Looped = 1,
	MT_LoadingLoop = 2,
	MT_MAX = 3,
};

// Class MoviePlayer.MoviePlayerSettings
class UMoviePlayerSettings : public Object {

public:

	char bWaitForMoviesToComplete : 0; // 0x28 (1)
	char bMoviesAreSkippable : 0; // 0x29 (1)
	struct TArray<struct FString> StartupMovies; // 0x30 (16)
};

