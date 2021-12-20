// Enum VariantManagerContent.EPropertyValueCategory
enum class EPropertyValueCategory : uint8 {
	EPropertyValueCategory = 0,
	EPropertyValueCategory = 1,
	EPropertyValueCategory = 2,
	EPropertyValueCategory = 4,
	EPropertyValueCategory = 8,
	EPropertyValueCategory = 16,
	EPropertyValueCategory = 32,
	EPropertyValueCategory = 64,
	EPropertyValueCategory = 128,
	EPropertyValueCategory = 129
};

// Class VariantManagerContent.LevelVariantSets
struct ULevelVariantSets : Object {
	Unknown DirectorClass; //  0x28 Size(8)
	Unknown VariantSets; //  0x30 Size(10)

	Unknown GetVariantSetByName(struct FString VariantSetName); // Function VariantManagerContent.LevelVariantSets.GetVariantSetByName(Final|Native|Public|BlueprintCallable|BlueprintPure) // <Game+0x16bd840>
};

// Class VariantManagerContent.LevelVariantSetsActor
struct ALevelVariantSetsActor : UActor {
	Unknown LevelVariantSets; //  0x310 Size(18)

	char SwitchOnVariantByName(struct FString VariantSetName, struct FString VariantName); // Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName(Final|Native|Public|BlueprintCallable) // <Game+0x16bdc50>
};

// Class VariantManagerContent.PropertyValue
struct UPropertyValue : Object {
	Unknown Properties; //  0x88 Size(10)
	Unknown PropertyIndices; //  0x98 Size(10)
	Unknown CapturedPropSegments; //  0xa8 Size(10)
	struct FString FullDisplayString; //  0xb8 Size(10)
	struct FName PropertySetterName; //  0xc8 Size(8)
	Unknown PropertySetterParameterDefaults; //  0xd0 Size(50)
	char bHasRecordedData; //  0x120 Size(1)
	Unknown LeafPropertyClass; //  0x128 Size(8)
	Unknown ValueBytes; //  0x138 Size(10)
	Unknown PropCategory; //  0x148 Size(1)

	char HasRecordedData(); // Function VariantManagerContent.PropertyValue.HasRecordedData(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x16bd940>
};

// Class VariantManagerContent.SwitchActor
struct ASwitchActor : UActor {
	Unknown SceneComponent; //  0x328 Size(8)
	int32_t LastSelectedOption; //  0x330 Size(4)

	void SelectOption(int32_t OptionIndex); // Function VariantManagerContent.SwitchActor.SelectOption(Final|Native|Public|BlueprintCallable) // <Game+0x16bd9a0>
};

// Class VariantManagerContent.Variant
struct UVariant : Object {
	struct FText DisplayText; //  0x28 Size(18)
	Unknown ObjectBindings; //  0x58 Size(10)
	Unknown Thumbnail; //  0x68 Size(8)

	void SwitchOn(); // Function VariantManagerContent.Variant.SwitchOn(Final|Native|Public|BlueprintCallable) // <Game+0x16bdb70>
};

// Class VariantManagerContent.VariantObjectBinding
struct UVariantObjectBinding : Object {
	struct FString CachedActorLabel; //  0x28 Size(10)
	Unknown ObjectPtr; //  0x38 Size(18)
	Unknown LazyObjectPtr; //  0x50 Size(1c)
	Unknown CapturedProperties; //  0x70 Size(10)
	Unknown FunctionCallers; //  0x80 Size(10)
};

// Class VariantManagerContent.VariantSet
struct UVariantSet : Object {
	struct FText DisplayText; //  0x28 Size(18)
	char bExpanded; //  0x58 Size(1)
	Unknown Variants; //  0x60 Size(10)

	void SetDisplayText(struct FText& NewDisplayText); // Function VariantManagerContent.VariantSet.SetDisplayText(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x16bda20>
};

