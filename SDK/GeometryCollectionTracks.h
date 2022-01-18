// Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection
class UMovieSceneGeometryCollectionSection : public UMovieSceneSection {

public:

	struct FMovieSceneGeometryCollectionParams Params; // 0xE0 (48)
};

// Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
class UMovieSceneGeometryCollectionTrack : public UMovieSceneNameableTrack {

public:

	struct TArray<struct UMovieSceneSection> AnimationSections; // 0x58 (16)
};

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionParams
struct FMovieSceneGeometryCollectionParams {
	struct FSoftObjectPath GeometryCollectionCache; // 0x8 (24)
	struct FFrameNumber StartFrameOffset; // 0x20 (4)
	struct FFrameNumber EndFrameOffset; // 0x24 (4)
	float PlayRate; // 0x28 (4)
};

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplate
struct FMovieSceneGeometryCollectionSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneGeometryCollectionSectionTemplateParameters Params; // 0x20 (56)
};

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplateParameters
struct FMovieSceneGeometryCollectionSectionTemplateParameters : FMovieSceneGeometryCollectionParams {
	struct FFrameNumber SectionStartTime; // 0x30 (4)
	struct FFrameNumber SectionEndTime; // 0x34 (4)
};

