// Enum MoviePlayer.EMoviePlaybackType
enum class EMoviePlaybackType : uint8 {
	MT_Normal = 0,
	MT_Looped = 1,
	MT_LoadingLoop = 2,
	MT_MAX = 3
};

// Class MoviePlayer.MoviePlayerSettings
struct UMoviePlayerSettings : Object {
	char bWaitForMoviesToComplete; //  0x28 Size(1)
	char bMoviesAreSkippable; //  0x29 Size(1)
	struct TArray<Unknown> StartupMovies; //  0x30 Size(10)
};

