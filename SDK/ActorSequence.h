// Enum ActorSequence.EActorSequenceObjectReferenceType
enum class EActorSequenceObjectReferenceType : uint8_t {
	ContextActor = 0,
	ExternalActor = 1,
	Component = 2,
	EActorSequenceObjectReferenceType_MAX = 3,
};

// Class ActorSequence.ActorSequence
class UActorSequence : public UMovieSceneSequence {

public:

	struct UMovieScene MovieScene; // 0x348 (8)
	struct FActorSequenceObjectReferenceMap ObjectReferences; // 0x350 (32)
};

// Class ActorSequence.ActorSequenceComponent
class UActorSequenceComponent : public UActorComponent {

public:

	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0xB0 (20)
	struct UActorSequence Sequence; // 0xC8 (8)
	struct UActorSequencePlayer SequencePlayer; // 0xD0 (8)
};

// ScriptStruct ActorSequence.ActorSequenceObjectReferenceMap
struct FActorSequenceObjectReferenceMap {
	struct TArray<struct FGuid> BindingIds; // 0x0 (16)
	struct TArray<struct FActorSequenceObjectReferences> References; // 0x10 (16)
};

// ScriptStruct ActorSequence.ActorSequenceObjectReferences
struct FActorSequenceObjectReferences {
	struct TArray<struct FActorSequenceObjectReference> Array; // 0x0 (16)
};

// ScriptStruct ActorSequence.ActorSequenceObjectReference
struct FActorSequenceObjectReference {
	enum class EActorSequenceObjectReferenceType Type; // 0x0 (1)
	struct FGuid ActorId; // 0x4 (16)
	struct FString PathToComponent; // 0x18 (16)
};

