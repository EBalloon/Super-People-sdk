// BlueprintGeneratedClass BP_KeyCombination.BP_KeyCombination_C
struct UBP_KeyCombination_C : Object {
	struct FString Name; //  0x28 Size(10)
	Unknown Key; //  0x38 Size(10)
	Unknown Default; //  0x48 Size(10)
	char Can; //  0x58 Size(1)
	Unknown Conflicting; //  0x60 Size(10)
	Unknown Conflicting; //  0x70 Size(10)
	struct FMulticastInlineDelegate Comb; //  0x80 Size(10)
	Unknown Parent; //  0x90 Size(8)

	void Get(struct FString Separator, struct FString No, Unknown Display, struct FString& Display); // Function BP_KeyCombination.BP_KeyCombination_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game+0x23a73f0>
};

