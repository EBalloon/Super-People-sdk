// Enum VariantManagerContent.EPropertyValueCategory
enum class EPropertyValueCategory : uint8 {
	EPropertyValueCategory = 0
	EPropertyValueCategory = 1
	EPropertyValueCategory = 2
	EPropertyValueCategory = 4
	EPropertyValueCategory = 8
	EPropertyValueCategory = 16
	EPropertyValueCategory = 32
	EPropertyValueCategory = 64
	EPropertyValueCategory = 128
	EPropertyValueCategory = 129
};

// Class VariantManagerContent.LevelVariantSets
struct ULevelVariantSets : Object {
	struct Unknown* DirectorClass; // 0x28 (8)
	struct TArray<Unknown> VariantSets; // 0x30 (16)

	struct Unknown GetVariantSetByName(struct FString VariantSetName); // Function VariantManagerContent.LevelVariantSets.GetVariantSetByName(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16BE430>
	struct Unknown GetVariantSet(int32_t VariantSetIndex); // Function VariantManagerContent.LevelVariantSets.GetVariantSet(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16BE3A0>
	int32_t GetNumVariantSets(); // Function VariantManagerContent.LevelVariantSets.GetNumVariantSets(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106F2E0>
};

// Class VariantManagerContent.LevelVariantSetsActor
struct ALevelVariantSetsActor : UActor {
	struct Unknown LevelVariantSets; // 0x310 (24)

	char SwitchOnVariantByName(struct FString VariantSetName, struct FString VariantName); // Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16BE840>
	char SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex); // Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16BE780>
	void SetLevelVariantSets(struct Unknown InVariantSets); // Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16BE6E0>
	struct Unknown GetLevelVariantSets(char bLoad); // Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16BDFC0>
};

// Class VariantManagerContent.PropertyValue
struct UPropertyValue : Object {
	struct TArray<Unknown> Properties; // 0x88 (16)
	struct TArray<Unknown> PropertyIndices; // 0x98 (16)
	struct TArray<Unknown> CapturedPropSegments; // 0xA8 (16)
	struct FString FullDisplayString; // 0xB8 (16)
	struct FName PropertySetterName; // 0xC8 (8)
	struct TMap<Unknown, Unknown>Unknown PropertySetterParameterDefaults; // 0xD0 (80)
	char bHasRecordedData : 0; // 0x120 (1)
	struct Unknown* LeafPropertyClass; // 0x128 (8)
	struct TArray<Unknown> ValueBytes; // 0x138 (16)
	enum class Unknow PropCategory; // 0x148 (1)

	char HasRecordedData(); // Function VariantManagerContent.PropertyValue.HasRecordedData(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16BE530>
	struct FText GetPropertyTooltip(); // Function VariantManagerContent.PropertyValue.GetPropertyTooltip(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16BE140>
	struct FString GetFullDisplayString(); // Function VariantManagerContent.PropertyValue.GetFullDisplayString(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16BDF80>
};

// Class VariantManagerContent.SwitchActor
struct ASwitchActor : UActor {
	struct Unknown SceneComponent; // 0x328 (8)
	int32_t LastSelectedOption; // 0x330 (4)

	void SelectOption(int32_t OptionIndex); // Function VariantManagerContent.SwitchActor.SelectOption(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16BE590>
	int32_t GetSelectedOption(); // Function VariantManagerContent.SwitchActor.GetSelectedOption(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16BE1E0>
	struct TArray<Unknown> GetOptions(); // Function VariantManagerContent.SwitchActor.GetOptions(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16BE0C0>
};

// Class VariantManagerContent.Variant
struct UVariant : Object {
	struct FText DisplayText; // 0x28 (24)
	struct TArray<Unknown> ObjectBindings; // 0x58 (16)
	struct Unknown Thumbnail; // 0x68 (8)

	void SwitchOn(); // Function VariantManagerContent.Variant.SwitchOn(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16BE760>
	void SetDisplayText(struct FText& NewDisplayText); // Function VariantManagerContent.Variant.SetDisplayText(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16BE610>
	char IsActive(); // Function VariantManagerContent.Variant.IsActive(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16BE560>
	struct Unknown GetThumbnail(); // Function VariantManagerContent.Variant.GetThumbnail(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1523FB0>
	int32_t GetNumActors(); // Function VariantManagerContent.Variant.GetNumActors(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16BE060>
	struct FText GetDisplayText(); // Function VariantManagerContent.Variant.GetDisplayText(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16BDEE0>
	struct Unknown GetActor(int32_t ActorIndex); // Function VariantManagerContent.Variant.GetActor(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16BDE50>
};

// Class VariantManagerContent.VariantObjectBinding
struct UVariantObjectBinding : Object {
	struct FString CachedActorLabel; // 0x28 (16)
	struct Unknown ObjectPtr; // 0x38 (24)
	Unknown LazyObjectPtr; // 0x50 (28)
	struct TArray<Unknown> CapturedProperties; // 0x70 (16)
	struct TArray<Unknown> FunctionCallers; // 0x80 (16)
};

// Class VariantManagerContent.VariantSet
struct UVariantSet : Object {
	struct FText DisplayText; // 0x28 (24)
	char bExpanded : 0; // 0x58 (1)
	struct TArray<Unknown> Variants; // 0x60 (16)

	void SetDisplayText(struct FText& NewDisplayText); // Function VariantManagerContent.VariantSet.SetDisplayText(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16BE610>
	struct Unknown GetVariantByName(struct FString VariantName); // Function VariantManagerContent.VariantSet.GetVariantByName(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16BE2A0>
	struct Unknown GetVariant(int32_t VariantIndex); // Function VariantManagerContent.VariantSet.GetVariant(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16BE210>
	int32_t GetNumVariants(); // Function VariantManagerContent.VariantSet.GetNumVariants(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16BE090>
	struct FText GetDisplayText(); // Function VariantManagerContent.VariantSet.GetDisplayText(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16BDEE0>
};

