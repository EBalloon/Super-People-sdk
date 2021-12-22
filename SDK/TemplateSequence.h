// Class TemplateSequence.TemplateSequence
struct UTemplateSequence : UMovieSceneSequence {
	struct Unknown MovieScene; //  0x348 Size(8)
	struct TSoftClassPtr<UObject> BoundActorClass; //  0x350 Size(28)
	struct TSoftObjectPtr<Unknown> BoundPreviewActor; //  0x378 Size(28)
	struct TMap<{}, {}>Unknown BoundActorComponents; //  0x3a0 Size(50)
};

// Class TemplateSequence.TemplateSequenceActor
struct ATemplateSequenceActor : UActor {
	struct Unknown PlaybackSettings; //  0x318 Size(14)
	struct Unknown SequencePlayer; //  0x330 Size(8)
	struct Unknown TemplateSequence; //  0x338 Size(18)
	struct Unknown BindingOverride; //  0x350 Size(c)

	void SetSequence(struct Unknown InSequence); // Function TemplateSequence.TemplateSequenceActor.SetSequence(Final|Native|Public|BlueprintCallable) // <Game+0x183a9d0>
};

