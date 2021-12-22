// Class MediaCompositing.MovieSceneMediaPlayerPropertySection
struct UMovieSceneMediaPlayerPropertySection : UMovieSceneSection {
	struct Unknown MediaSource; //  0xe0 Size(8)
	char bLoop; //  0xe8 Size(1)
};

// Class MediaCompositing.MovieSceneMediaSection
struct UMovieSceneMediaSection : UMovieSceneSection {
	struct Unknown MediaSource; //  0xe0 Size(8)
	char bLooping; //  0xe8 Size(1)
	struct Unknown StartFrameOffset; //  0xec Size(4)
	struct Unknown MediaTexture; //  0xf0 Size(8)
	struct Unknown MediaSoundComponent; //  0xf8 Size(8)
	char bUseExternalMediaPlayer; //  0x100 Size(1)
	struct Unknown ExternalMediaPlayer; //  0x108 Size(8)
};

// Class MediaCompositing.MovieSceneMediaTrack
struct UMovieSceneMediaTrack : UMovieSceneNameableTrack {
	struct TArray<Unknown> MediaSections; //  0x58 Size(10)
};

