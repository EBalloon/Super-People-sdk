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

	struct Unknown MovieScene; // 0x348 (8)
	struct Unknown ObjectReferences; // 0x350 (32)
};

// Class ActorSequence.ActorSequenceComponent
class UActorSequenceComponent : public UActorComponent {

public:

	struct Unknown PlaybackSettings; // 0xB0 (20)
	struct Unknown Sequence; // 0xC8 (8)
	struct Unknown SequencePlayer; // 0xD0 (8)
};

// ScriptStruct ActorSequence.ActorSequenceObjectReferenceMap
struct FActorSequenceObjectReferenceMap {
	struct TArray<Unknown> BindingIds; // 0x0 (16)
	struct TArray<Unknown> References; // 0x10 (16)
};

// ScriptStruct ActorSequence.ActorSequenceObjectReferences
struct FActorSequenceObjectReferences {
	struct TArray<Unknown> Array; // 0x0 (16)
};

// ScriptStruct ActorSequence.ActorSequenceObjectReference
struct FActorSequenceObjectReference {
	enum class Unknow Type; // 0x0 (1)
	struct Unknown ActorId; // 0x4 (16)
	struct FString PathToComponent; // 0x18 (16)
};

