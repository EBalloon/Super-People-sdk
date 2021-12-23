// Enum ActorSequence.EActorSequenceObjectReferenceType
enum class EActorSequenceObjectReferenceType : uint8 {
	EActorSequenceObjectReferenceType = 0
	EActorSequenceObjectReferenceType = 1
	EActorSequenceObjectReferenceType = 2
	EActorSequenceObjectReferenceType = 3
};

// Class ActorSequence.ActorSequence
struct UActorSequence : UMovieSceneSequence {
	struct Unknown MovieScene; // 0x348 (8)
	struct Unknown ObjectReferences; // 0x350 (32)
};

// Class ActorSequence.ActorSequenceComponent
struct UActorSequenceComponent : UActorComponent {
	struct Unknown PlaybackSettings; // 0xB0 (20)
	struct Unknown Sequence; // 0xC8 (8)
	struct Unknown SequencePlayer; // 0xD0 (8)
};

