// Class MediaCompositing.MovieSceneMediaPlayerPropertySection
struct UMovieSceneMediaPlayerPropertySection : UMovieSceneSection {
	Unknown MediaSource; //  0xe0 Size(8)
	char bLoop; //  0xe8 Size(1)
};

// Class MediaCompositing.MovieSceneMediaSection
struct UMovieSceneMediaSection : UMovieSceneSection {
	Unknown MediaSource; //  0xe0 Size(8)
	char bLooping; //  0xe8 Size(1)
	Unknown StartFrameOffset; //  0xec Size(4)
	Unknown MediaTexture; //  0xf0 Size(8)
	Unknown MediaSoundComponent; //  0xf8 Size(8)
	char bUseExternalMediaPlayer; //  0x100 Size(1)
	Unknown ExternalMediaPlayer; //  0x108 Size(8)
};

// Class MediaCompositing.MovieSceneMediaTrack
struct UMovieSceneMediaTrack : UMovieSceneNameableTrack {
	Unknown MediaSections; //  0x58 Size(10)
};

