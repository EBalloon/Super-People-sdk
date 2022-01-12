// Class GeometryCacheTracks.MovieSceneGeometryCacheSection
class UMovieSceneGeometryCacheSection : public UMovieSceneSection {

public:

	struct FMovieSceneGeometryCacheParams Params; // 0xE0 (64)
};

// Class GeometryCacheTracks.MovieSceneGeometryCacheTrack
class UMovieSceneGeometryCacheTrack : public UMovieSceneNameableTrack {

public:

	struct TArray<struct UMovieSceneSection> AnimationSections; // 0x58 (16)
};

// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheParams
struct FMovieSceneGeometryCacheParams {
	struct UGeometryCache GeometryCacheAsset; // 0x0 (8)
	struct FFrameNumber FirstLoopStartFrameOffset; // 0x8 (4)
	struct FFrameNumber StartFrameOffset; // 0xC (4)
	struct FFrameNumber EndFrameOffset; // 0x10 (4)
	float PlayRate; // 0x14 (4)
	char bReverse : 0; // 0x18 (1)
	float StartOffset; // 0x1C (4)
	float EndOffset; // 0x20 (4)
	struct FSoftObjectPath GeometryCache; // 0x28 (24)
};

// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate
struct FMovieSceneGeometryCacheSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneGeometryCacheSectionTemplateParameters Params; // 0x20 (72)
};

// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
struct FMovieSceneGeometryCacheSectionTemplateParameters : FMovieSceneGeometryCacheParams {
	struct FFrameNumber SectionStartTime; // 0x40 (4)
	struct FFrameNumber SectionEndTime; // 0x44 (4)
};

