// Enum MoviePlayer.EMoviePlaybackType
enum class EMoviePlaybackType : uint8 {
	MT_Normal = 0
	MT_Looped = 1
	MT_LoadingLoop = 2
	MT_MAX = 3
};

// Class MoviePlayer.MoviePlayerSettings
struct UMoviePlayerSettings : Object {
	char bWaitForMoviesToComplete : 0; // 0x28 (1)
	char bMoviesAreSkippable : 0; // 0x29 (1)
	struct TArray<Unknown> StartupMovies; // 0x30 (16)
};

