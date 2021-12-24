// Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection
class UMovieSceneGeometryCollectionSection : public UMovieSceneSection {

public:

	struct Unknown Params; // 0xE0 (48)
};

// Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
class UMovieSceneGeometryCollectionTrack : public UMovieSceneNameableTrack {

public:

	struct TArray<Unknown> AnimationSections; // 0x58 (16)
};

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionParams
struct FMovieSceneGeometryCollectionParams {
	struct Unknown GeometryCollectionCache; // 0x8 (24)
	struct Unknown StartFrameOffset; // 0x20 (4)
	struct Unknown EndFrameOffset; // 0x24 (4)
	float PlayRate; // 0x28 (4)
};

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplate
struct FMovieSceneGeometryCollectionSectionTemplate : FMovieSceneEvalTemplate {
	struct Unknown Params; // 0x20 (56)
};

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplateParameters
struct FMovieSceneGeometryCollectionSectionTemplateParameters : FMovieSceneGeometryCollectionParams {
	struct Unknown SectionStartTime; // 0x30 (4)
	struct Unknown SectionEndTime; // 0x34 (4)
};

