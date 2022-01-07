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

	struct Unknown PlaybackSettings; // 0x308 (20)
	struct Unknown SequencePlayer; // 0x320 (8)
	struct Unknown TemplateSequence; // 0x328 (24)
	struct Unknown BindingOverride; // 0x340 (12)

	void SetSequence(struct Unknown InSequence); // Function TemplateSequence.TemplateSequenceActor.SetSequence(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1850760>
	void SetBinding(struct Unknown Actor); // Function TemplateSequence.TemplateSequenceActor.SetBinding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18506E0>
	struct Unknown LoadSequence(); // Function TemplateSequence.TemplateSequenceActor.LoadSequence(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18506B0>
	struct Unknown GetSequencePlayer(); // Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1850680>
	struct Unknown GetSequence(); // Function TemplateSequence.TemplateSequenceActor.GetSequence(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1850650>
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

// Function TemplateSequence.TemplateSequenceActor.SetSequence
inline void ATemplateSequenceActor::SetSequence(struct Unknown InSequence) {
	static auto fn = UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.SetSequence");

	struct SetSequence_Params {
		struct Unknown InSequence;
	}; SetSequence_Params Params;

	Params.InSequence = InSequence;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function TemplateSequence.TemplateSequenceActor.SetBinding
inline void ATemplateSequenceActor::SetBinding(struct Unknown Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.SetBinding");

	struct SetBinding_Params {
		struct Unknown Actor;
	}; SetBinding_Params Params;

	Params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function TemplateSequence.TemplateSequenceActor.LoadSequence
inline struct Unknown ATemplateSequenceActor::LoadSequence() {
	static auto fn = UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.LoadSequence");

	struct LoadSequence_Params {
		
		struct Unknown ReturnValue;

	}; LoadSequence_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer
inline struct Unknown ATemplateSequenceActor::GetSequencePlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer");

	struct GetSequencePlayer_Params {
		
		struct Unknown ReturnValue;

	}; GetSequencePlayer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function TemplateSequence.TemplateSequenceActor.GetSequence
inline struct Unknown ATemplateSequenceActor::GetSequence() {
	static auto fn = UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.GetSequence");

	struct GetSequence_Params {
		
		struct Unknown ReturnValue;

	}; GetSequence_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

