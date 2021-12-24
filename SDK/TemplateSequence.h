// Class TemplateSequence.TemplateSequence
class UTemplateSequence : public UMovieSceneSequence {

public:

	struct Unknown MovieScene; // 0x348 (8)
	struct TSoftClassPtr<UObject> BoundActorClass; // 0x350 (40)
	struct Unknown BoundPreviewActor; // 0x378 (40)
	struct TMap<Unknown, Unknown> BoundActorComponents; // 0x3A0 (80)
};

// Class TemplateSequence.TemplateSequenceActor
class ATemplateSequenceActor : public UActor {

public:

	struct Unknown PlaybackSettings; // 0x318 (20)
	struct Unknown SequencePlayer; // 0x330 (8)
	struct Unknown TemplateSequence; // 0x338 (24)
	struct Unknown BindingOverride; // 0x350 (12)

	void SetSequence(struct Unknown InSequence); // Function TemplateSequence.TemplateSequenceActor.SetSequence(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x183BE40>
	void SetBinding(struct Unknown Actor); // Function TemplateSequence.TemplateSequenceActor.SetBinding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x183BDC0>
	struct Unknown LoadSequence(); // Function TemplateSequence.TemplateSequenceActor.LoadSequence(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x183BD90>
	struct Unknown GetSequencePlayer(); // Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x183BD60>
	struct Unknown GetSequence(); // Function TemplateSequence.TemplateSequenceActor.GetSequence(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x183BD30>
};

// ScriptStruct TemplateSequence.TemplateSequenceBindingOverrideData
struct FTemplateSequenceBindingOverrideData {
	struct TWeakObjectPtr<struct Unknown> Object; // 0x0 (8)
	char bOverridesDefault : 0; // 0x8 (1)
};

// ScriptStruct TemplateSequence.TemplateSequenceInstanceData
struct FTemplateSequenceInstanceData : FMovieSceneSequenceInstanceData {
	struct Unknown Operand; // 0x8 (20)
};

// ScriptStruct TemplateSequence.TemplateSequenceSectionTemplate
struct FTemplateSequenceSectionTemplate : FMovieSceneEvalTemplate {
	struct Unknown SectionStartTime; // 0x20 (4)
	struct Unknown OuterBindingId; // 0x24 (16)
	struct Unknown InnerOperand; // 0x34 (20)
};

