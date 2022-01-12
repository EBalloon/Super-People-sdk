// Class TemplateSequence.TemplateSequence
class UTemplateSequence : public UMovieSceneSequence {

public:

	struct UMovieScene MovieScene; // 0x348 (8)
	struct TSoftClassPtr<UObject> BoundActorClass; // 0x350 (40)
	struct TSoftObjectPtr<UActor> BoundPreviewActor; // 0x378 (40)
	struct TMap<struct FGuid, struct FName> BoundActorComponents; // 0x3A0 (80)
};

// Class TemplateSequence.TemplateSequenceActor
class ATemplateSequenceActor : public UActor {

public:

	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x320 (20)
	struct UTemplateSequencePlayer SequencePlayer; // 0x338 (8)
	struct FSoftObjectPath TemplateSequence; // 0x340 (24)
	struct FTemplateSequenceBindingOverrideData BindingOverride; // 0x358 (12)

	void SetSequence(struct UTemplateSequence InSequence); // Function TemplateSequence.TemplateSequenceActor.SetSequence(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x18500F0>
	void SetBinding(struct UActor Actor); // Function TemplateSequence.TemplateSequenceActor.SetBinding(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1850070>
	struct UTemplateSequence LoadSequence(); // Function TemplateSequence.TemplateSequenceActor.LoadSequence(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x1850040>
	struct UTemplateSequencePlayer GetSequencePlayer(); // Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x1850010>
	struct UTemplateSequence GetSequence(); // Function TemplateSequence.TemplateSequenceActor.GetSequence(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x184FFE0>
};

// ScriptStruct TemplateSequence.TemplateSequenceBindingOverrideData
struct FTemplateSequenceBindingOverrideData {
	struct TWeakObjectPtr<struct Object> Object; // 0x0 (8)
	char bOverridesDefault : 0; // 0x8 (1)
};

// ScriptStruct TemplateSequence.TemplateSequenceInstanceData
struct FTemplateSequenceInstanceData : FMovieSceneSequenceInstanceData {
	struct FMovieSceneEvaluationOperand Operand; // 0x8 (20)
};

// ScriptStruct TemplateSequence.TemplateSequenceSectionTemplate
struct FTemplateSequenceSectionTemplate : FMovieSceneEvalTemplate {
	struct FFrameNumber SectionStartTime; // 0x20 (4)
	struct FGuid OuterBindingId; // 0x24 (16)
	struct FMovieSceneEvaluationOperand InnerOperand; // 0x34 (20)
};

// Function TemplateSequence.TemplateSequenceActor.SetSequence
inline void ATemplateSequenceActor::SetSequence(struct UTemplateSequence InSequence) {
	static auto fn = UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.SetSequence");

	struct SetSequence_Params {
		struct UTemplateSequence InSequence;
	}; SetSequence_Params Params;

	Params.InSequence = InSequence;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function TemplateSequence.TemplateSequenceActor.SetBinding
inline void ATemplateSequenceActor::SetBinding(struct UActor Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.SetBinding");

	struct SetBinding_Params {
		struct UActor Actor;
	}; SetBinding_Params Params;

	Params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function TemplateSequence.TemplateSequenceActor.LoadSequence
inline struct UTemplateSequence ATemplateSequenceActor::LoadSequence() {
	static auto fn = UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.LoadSequence");

	struct LoadSequence_Params {
		
		struct UTemplateSequence ReturnValue;

	}; LoadSequence_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer
inline struct UTemplateSequencePlayer ATemplateSequenceActor::GetSequencePlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer");

	struct GetSequencePlayer_Params {
		
		struct UTemplateSequencePlayer ReturnValue;

	}; GetSequencePlayer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function TemplateSequence.TemplateSequenceActor.GetSequence
inline struct UTemplateSequence ATemplateSequenceActor::GetSequence() {
	static auto fn = UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.GetSequence");

	struct GetSequence_Params {
		
		struct UTemplateSequence ReturnValue;

	}; GetSequence_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

