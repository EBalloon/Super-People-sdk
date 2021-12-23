// Class GeometryCollectionTracks.MovieSceneGeometryCollectionSec
class UMovieSceneGeometryCollectionSec : UMovieSceneSection {
	struct Unknown Params; // 0xE0 (48)
};

// Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
class UMovieSceneGeometryCollectionTrack : UMovieSceneNameableTrack {
	struct TArray<Unknown> AnimationSections; // 0x58 (16)
};

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionParams
struct FMovieSceneGeometryCollectionParams {
	struct Unknown GeometryCollectionCache; // 0x8 (24)
	struct Unknown StartFrameOffset; // 0x20 (4)
	struct Unknown EndFrameOffset; // 0x24 (4)
	float PlayRate; // 0x28 (4)
};

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSec
struct FMovieSceneGeometryCollectionSec : FMovieSceneEvalTemplate {
	struct Unknown Params; // 0x20 (56)
};

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSec
struct FMovieSceneGeometryCollectionSec : FMovieSceneGeometryCollectionParams {
	struct Unknown SectionStartTime; // 0x30 (4)
	struct Unknown SectionEndTime; // 0x34 (4)
};

