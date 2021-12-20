// Class TemplateSequence.TemplateSequence
struct UTemplateSequence : UMovieSceneSequence {
	Unknown MovieScene; //  0x348 Size(8)
	struct TSoftClassPtr<UObject> BoundActorClass; //  0x350 Size(28)
	Unknown BoundPreviewActor; //  0x378 Size(28)
	Unknown BoundActorComponents; //  0x3a0 Size(50)
};

// Class TemplateSequence.TemplateSequenceActor
struct ATemplateSequenceActor : UActor {
	Unknown PlaybackSettings; //  0x318 Size(14)
	Unknown SequencePlayer; //  0x330 Size(8)
	Unknown TemplateSequence; //  0x338 Size(18)
	Unknown BindingOverride; //  0x350 Size(c)

	void SetSequence(Unknown InSequence); // Function TemplateSequence.TemplateSequenceActor.SetSequence(Final|Native|Public|BlueprintCallable) // <Game+0x1839c00>
};

