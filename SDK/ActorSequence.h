// Enum ActorSequence.EActorSequenceObjectReferenceType
enum class EActorSequenceObjectReferenceType : uint8 {
	EActorSequenceObjectReferenceType = 0,
	EActorSequenceObjectReferenceType = 1,
	EActorSequenceObjectReferenceType = 2,
	EActorSequenceObjectReferenceType = 3
};

// Class ActorSequence.ActorSequence
struct UActorSequence : UMovieSceneSequence {
	struct Unknown MovieScene; //  0x348 Size(8)
	struct Unknown ObjectReferences; //  0x350 Size(20)
};

// Class ActorSequence.ActorSequenceComponent
struct UActorSequenceComponent : UActorComponent {
	struct Unknown PlaybackSettings; //  0xb0 Size(14)
	struct Unknown Sequence; //  0xc8 Size(8)
	struct Unknown SequencePlayer; //  0xd0 Size(8)
};

