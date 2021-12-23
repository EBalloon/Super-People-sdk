// Class MediaCompositing.MovieSceneMediaPlayerPropertySection
struct UMovieSceneMediaPlayerPropertySection : UMovieSceneSection {
	struct Unknown MediaSource; // 0xE0 (8)
	char bLoop : 0; // 0xE8 (1)
};

// Class MediaCompositing.MovieSceneMediaSection
struct UMovieSceneMediaSection : UMovieSceneSection {
	struct Unknown MediaSource; // 0xE0 (8)
	char bLooping : 0; // 0xE8 (1)
	struct Unknown StartFrameOffset; // 0xEC (4)
	struct Unknown MediaTexture; // 0xF0 (8)
	struct Unknown MediaSoundComponent; // 0xF8 (8)
	char bUseExternalMediaPlayer : 0; // 0x100 (1)
	struct Unknown ExternalMediaPlayer; // 0x108 (8)
};

// Class MediaCompositing.MovieSceneMediaTrack
struct UMovieSceneMediaTrack : UMovieSceneNameableTrack {
	struct TArray<Unknown> MediaSections; // 0x58 (16)
};

