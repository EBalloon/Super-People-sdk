// Enum VariantManagerContent.EPropertyValueCategory
enum class EPropertyValueCategory : uint8_t {
	Undefined = 0,
	Generic = 1,
	RelativeLocation = 2,
	RelativeRotation = 4,
	RelativeScale3D = 8,
	Visibility = 16,
	Material = 32,
	Color = 64,
	Option = 128,
	EPropertyValueCategory_MAX = 129,
};

// Class VariantManagerContent.LevelVariantSets
class ULevelVariantSets : public Object {

public:

	struct Unknown* DirectorClass; // 0x28 (8)
	struct TArray<Unknown> VariantSets; // 0x30 (16)

	struct Unknown GetVariantSetByName(struct FString VariantSetName); // Function VariantManagerContent.LevelVariantSets.GetVariantSetByName(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D03E0>
	struct Unknown GetVariantSet(int32_t VariantSetIndex); // Function VariantManagerContent.LevelVariantSets.GetVariantSet(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D0350>
	int32_t GetNumVariantSets(); // Function VariantManagerContent.LevelVariantSets.GetNumVariantSets(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10810C0>
};

// Class VariantManagerContent.LevelVariantSetsActor
class ALevelVariantSetsActor : public UActor {

public:

	struct Unknown LevelVariantSets; // 0x310 (24)

	char SwitchOnVariantByName(struct FString VariantSetName, struct FString VariantName); // Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D07F0>
	char SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex); // Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D0730>
	void SetLevelVariantSets(struct Unknown InVariantSets); // Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D0690>
	struct Unknown GetLevelVariantSets(char bLoad); // Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16CFF70>
};

// Class VariantManagerContent.PropertyValue
class UPropertyValue : public Object {

public:

	struct TArray<Unknown> Properties; // 0x88 (16)
	struct TArray<Unknown> PropertyIndices; // 0x98 (16)
	struct TArray<Unknown> CapturedPropSegments; // 0xA8 (16)
	struct FString FullDisplayString; // 0xB8 (16)
	struct FName PropertySetterName; // 0xC8 (8)
	struct TMap<Unknown, Unknown> PropertySetterParameterDefaults; // 0xD0 (80)
	char bHasRecordedData : 0; // 0x120 (1)
	struct Unknown* LeafPropertyClass; // 0x128 (8)
	struct TArray<Unknown> ValueBytes; // 0x138 (16)
	enum class Unknow PropCategory; // 0x148 (1)

	char HasRecordedData(); // Function VariantManagerContent.PropertyValue.HasRecordedData(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D04E0>
	struct FText GetPropertyTooltip(); // Function VariantManagerContent.PropertyValue.GetPropertyTooltip(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D00F0>
	struct FString GetFullDisplayString(); // Function VariantManagerContent.PropertyValue.GetFullDisplayString(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16CFF30>
};

// Class VariantManagerContent.SwitchActor
class ASwitchActor : public UActor {

public:

	struct Unknown SceneComponent; // 0x328 (8)
	int32_t LastSelectedOption; // 0x330 (4)

	void SelectOption(int32_t OptionIndex); // Function VariantManagerContent.SwitchActor.SelectOption(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D0540>
	int32_t GetSelectedOption(); // Function VariantManagerContent.SwitchActor.GetSelectedOption(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D0190>
	struct TArray<Unknown> GetOptions(); // Function VariantManagerContent.SwitchActor.GetOptions(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D0070>
};

// Class VariantManagerContent.Variant
class UVariant : public Object {

public:

	struct FText DisplayText; // 0x28 (24)
	struct TArray<Unknown> ObjectBindings; // 0x58 (16)
	struct Unknown Thumbnail; // 0x68 (8)

	void SwitchOn(); // Function VariantManagerContent.Variant.SwitchOn(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D0710>
	void SetDisplayText(struct FText& NewDisplayText); // Function VariantManagerContent.Variant.SetDisplayText(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D05C0>
	char IsActive(); // Function VariantManagerContent.Variant.IsActive(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D0510>
	struct Unknown GetThumbnail(); // Function VariantManagerContent.Variant.GetThumbnail(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1535DB0>
	int32_t GetNumActors(); // Function VariantManagerContent.Variant.GetNumActors(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D0010>
	struct FText GetDisplayText(); // Function VariantManagerContent.Variant.GetDisplayText(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16CFE90>
	struct Unknown GetActor(int32_t ActorIndex); // Function VariantManagerContent.Variant.GetActor(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16CFE00>
};

// Class VariantManagerContent.VariantObjectBinding
class UVariantObjectBinding : public Object {

public:

	struct FString CachedActorLabel; // 0x28 (16)
	struct Unknown ObjectPtr; // 0x38 (24)
	LazyObjectProperty LazyObjectPtr; // 0x50 (28)
	struct TArray<Unknown> CapturedProperties; // 0x70 (16)
	struct TArray<Unknown> FunctionCallers; // 0x80 (16)
};

// Class VariantManagerContent.VariantSet
class UVariantSet : public Object {

public:

	struct FText DisplayText; // 0x28 (24)
	char bExpanded : 0; // 0x58 (1)
	struct TArray<Unknown> Variants; // 0x60 (16)

	void SetDisplayText(struct FText& NewDisplayText); // Function VariantManagerContent.VariantSet.SetDisplayText(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D05C0>
	struct Unknown GetVariantByName(struct FString VariantName); // Function VariantManagerContent.VariantSet.GetVariantByName(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D0250>
	struct Unknown GetVariant(int32_t VariantIndex); // Function VariantManagerContent.VariantSet.GetVariant(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D01C0>
	int32_t GetNumVariants(); // Function VariantManagerContent.VariantSet.GetNumVariants(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D0040>
	struct FText GetDisplayText(); // Function VariantManagerContent.VariantSet.GetDisplayText(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16CFE90>
};

// ScriptStruct VariantManagerContent.FunctionCaller
struct FFunctionCaller {
	struct FName FunctionName; // 0x0 (8)
};

// ScriptStruct VariantManagerContent.CapturedPropSegment
struct FCapturedPropSegment {
	struct FString PropertyName; // 0x0 (16)
	int32_t PropertyIndex; // 0x10 (4)
	struct FString ComponentName; // 0x18 (16)
};

// Function VariantManagerContent.LevelVariantSets.GetVariantSetByName
inline struct Unknown ULevelVariantSets::GetVariantSetByName(struct FString VariantSetName) {
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSets.GetVariantSetByName");

	struct GetVariantSetByName_Params {
		struct FString VariantSetName;
		struct Unknown ReturnValue;

	}; GetVariantSetByName_Params Params;

	Params.VariantSetName = VariantSetName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function VariantManagerContent.LevelVariantSets.GetVariantSet
inline struct Unknown ULevelVariantSets::GetVariantSet(int32_t VariantSetIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSets.GetVariantSet");

	struct GetVariantSet_Params {
		int32_t VariantSetIndex;
		struct Unknown ReturnValue;

	}; GetVariantSet_Params Params;

	Params.VariantSetIndex = VariantSetIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function VariantManagerContent.LevelVariantSets.GetNumVariantSets
inline int32_t ULevelVariantSets::GetNumVariantSets() {
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSets.GetNumVariantSets");

	struct GetNumVariantSets_Params {
		
		int32_t ReturnValue;

	}; GetNumVariantSets_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
inline char ALevelVariantSetsActor::SwitchOnVariantByName(struct FString VariantSetName, struct FString VariantName) {
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName");

	struct SwitchOnVariantByName_Params {
		struct FString VariantSetName;
		struct FString VariantName;
		char ReturnValue;

	}; SwitchOnVariantByName_Params Params;

	Params.VariantSetName = VariantSetName;
	Params.VariantName = VariantName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
inline char ALevelVariantSetsActor::SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex");

	struct SwitchOnVariantByIndex_Params {
		int32_t VariantSetIndex;
		int32_t VariantIndex;
		char ReturnValue;

	}; SwitchOnVariantByIndex_Params Params;

	Params.VariantSetIndex = VariantSetIndex;
	Params.VariantIndex = VariantIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
inline void ALevelVariantSetsActor::SetLevelVariantSets(struct Unknown InVariantSets) {
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets");

	struct SetLevelVariantSets_Params {
		struct Unknown InVariantSets;
	}; SetLevelVariantSets_Params Params;

	Params.InVariantSets = InVariantSets;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
inline struct Unknown ALevelVariantSetsActor::GetLevelVariantSets(char bLoad) {
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets");

	struct GetLevelVariantSets_Params {
		char bLoad;
		struct Unknown ReturnValue;

	}; GetLevelVariantSets_Params Params;

	Params.bLoad = bLoad;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function VariantManagerContent.PropertyValue.HasRecordedData
inline char UPropertyValue::HasRecordedData() {
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.PropertyValue.HasRecordedData");

	struct HasRecordedData_Params {
		
		char ReturnValue;

	}; HasRecordedData_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function VariantManagerContent.PropertyValue.GetPropertyTooltip
inline struct FText UPropertyValue::GetPropertyTooltip() {
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.PropertyValue.GetPropertyTooltip");

	struct GetPropertyTooltip_Params {
		
		struct FText ReturnValue;

	}; GetPropertyTooltip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function VariantManagerContent.PropertyValue.GetFullDisplayString
inline struct FString UPropertyValue::GetFullDisplayString() {
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.PropertyValue.GetFullDisplayString");

	struct GetFullDisplayString_Params {
		
		struct FString ReturnValue;

	}; GetFullDisplayString_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function VariantManagerContent.SwitchActor.SelectOption
inline void ASwitchActor::SelectOption(int32_t OptionIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.SwitchActor.SelectOption");

	struct SelectOption_Params {
		int32_t OptionIndex;
	}; SelectOption_Params Params;

	Params.OptionIndex = OptionIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function VariantManagerContent.SwitchActor.GetSelectedOption
inline int32_t ASwitchActor::GetSelectedOption() {
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.SwitchActor.GetSelectedOption");

	struct GetSelectedOption_Params {
		
		int32_t ReturnValue;

	}; GetSelectedOption_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function VariantManagerContent.SwitchActor.GetOptions
inline struct TArray<Unknown> ASwitchActor::GetOptions() {
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.SwitchActor.GetOptions");

	struct GetOptions_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; GetOptions_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function VariantManagerContent.Variant.SwitchOn
inline void UVariant::SwitchOn() {
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.SwitchOn");

	struct SwitchOn_Params {
		
	}; SwitchOn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function VariantManagerContent.Variant.SetDisplayText
inline void UVariant::SetDisplayText(struct FText& NewDisplayText) {
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.SetDisplayText");

	struct SetDisplayText_Params {
		struct FText& NewDisplayText;
	}; SetDisplayText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NewDisplayText = Params.NewDisplayText;

}

// Function VariantManagerContent.Variant.IsActive
inline char UVariant::IsActive() {
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.IsActive");

	struct IsActive_Params {
		
		char ReturnValue;

	}; IsActive_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function VariantManagerContent.Variant.GetThumbnail
inline struct Unknown UVariant::GetThumbnail() {
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetThumbnail");

	struct GetThumbnail_Params {
		
		struct Unknown ReturnValue;

	}; GetThumbnail_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function VariantManagerContent.Variant.GetNumActors
inline int32_t UVariant::GetNumActors() {
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetNumActors");

	struct GetNumActors_Params {
		
		int32_t ReturnValue;

	}; GetNumActors_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function VariantManagerContent.Variant.GetDisplayText
inline struct FText UVariant::GetDisplayText() {
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetDisplayText");

	struct GetDisplayText_Params {
		
		struct FText ReturnValue;

	}; GetDisplayText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function VariantManagerContent.Variant.GetActor
inline struct Unknown UVariant::GetActor(int32_t ActorIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetActor");

	struct GetActor_Params {
		int32_t ActorIndex;
		struct Unknown ReturnValue;

	}; GetActor_Params Params;

	Params.ActorIndex = ActorIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function VariantManagerContent.VariantSet.SetDisplayText
inline void UVariantSet::SetDisplayText(struct FText& NewDisplayText) {
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.SetDisplayText");

	struct SetDisplayText_Params {
		struct FText& NewDisplayText;
	}; SetDisplayText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NewDisplayText = Params.NewDisplayText;

}

// Function VariantManagerContent.VariantSet.GetVariantByName
inline struct Unknown UVariantSet::GetVariantByName(struct FString VariantName) {
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetVariantByName");

	struct GetVariantByName_Params {
		struct FString VariantName;
		struct Unknown ReturnValue;

	}; GetVariantByName_Params Params;

	Params.VariantName = VariantName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function VariantManagerContent.VariantSet.GetVariant
inline struct Unknown UVariantSet::GetVariant(int32_t VariantIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetVariant");

	struct GetVariant_Params {
		int32_t VariantIndex;
		struct Unknown ReturnValue;

	}; GetVariant_Params Params;

	Params.VariantIndex = VariantIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function VariantManagerContent.VariantSet.GetNumVariants
inline int32_t UVariantSet::GetNumVariants() {
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetNumVariants");

	struct GetNumVariants_Params {
		
		int32_t ReturnValue;

	}; GetNumVariants_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function VariantManagerContent.VariantSet.GetDisplayText
inline struct FText UVariantSet::GetDisplayText() {
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetDisplayText");

	struct GetDisplayText_Params {
		
		struct FText ReturnValue;

	}; GetDisplayText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

