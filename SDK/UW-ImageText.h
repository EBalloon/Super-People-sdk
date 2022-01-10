// WidgetBlueprintGeneratedClass UW-ImageText.UW-ImageText_C
class UUW-ImageText_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown WrapBox_Main; // 0x250 (8)
	struct Unknown DefaultTextStyle; // 0x258 (616)
	struct FText TextString; // 0x4C0 (24)
	struct Unknown Game Settings; // 0x4D8 (8)
	char HorizontalAlignment; // 0x4E0 (1)
	float KeyImageScale; // 0x4E4 (4)

	void ParseString(struct FString InputString); // Function UW-ImageText.UW-ImageText_C.ParseString(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ParseText(struct FString Inputtext); // Function UW-ImageText.UW-ImageText_C.ParseText(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ParseSpace(struct FString TargetString, struct FString PreString, struct FString PostString); // Function UW-ImageText.UW-ImageText_C.ParseSpace(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Construct(); // Function UW-ImageText.UW-ImageText_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetText(struct FText Inputtext); // Function UW-ImageText.UW-ImageText_C.SetText(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetAlignment(char Alignment); // Function UW-ImageText.UW-ImageText_C.SetAlignment(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_UW-ImageText(int32_t EntryPoint); // Function UW-ImageText.UW-ImageText_C.ExecuteUbergraph_UW-ImageText(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B812B0>
};

// Function UW-ImageText.UW-ImageText_C.ParseString
inline void UUW-ImageText_C::ParseString(struct FString InputString) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ImageText.UW-ImageText_C.ParseString");

	struct ParseString_Params {
		struct FString InputString;
	}; ParseString_Params Params;

	Params.InputString = InputString;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ImageText.UW-ImageText_C.ParseText
inline void UUW-ImageText_C::ParseText(struct FString Inputtext) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ImageText.UW-ImageText_C.ParseText");

	struct ParseText_Params {
		struct FString Inputtext;
	}; ParseText_Params Params;

	Params.Inputtext = Inputtext;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ImageText.UW-ImageText_C.ParseSpace
inline void UUW-ImageText_C::ParseSpace(struct FString TargetString, struct FString PreString, struct FString PostString) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ImageText.UW-ImageText_C.ParseSpace");

	struct ParseSpace_Params {
		struct FString TargetString;
		struct FString PreString;
		struct FString PostString;
	}; ParseSpace_Params Params;

	Params.TargetString = TargetString;
	Params.PreString = PreString;
	Params.PostString = PostString;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ImageText.UW-ImageText_C.Construct
inline void UUW-ImageText_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ImageText.UW-ImageText_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ImageText.UW-ImageText_C.SetText
inline void UUW-ImageText_C::SetText(struct FText Inputtext) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ImageText.UW-ImageText_C.SetText");

	struct SetText_Params {
		struct FText Inputtext;
	}; SetText_Params Params;

	Params.Inputtext = Inputtext;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ImageText.UW-ImageText_C.SetAlignment
inline void UUW-ImageText_C::SetAlignment(char Alignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ImageText.UW-ImageText_C.SetAlignment");

	struct SetAlignment_Params {
		char Alignment;
	}; SetAlignment_Params Params;

	Params.Alignment = Alignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ImageText.UW-ImageText_C.ExecuteUbergraph_UW-ImageText
inline void UUW-ImageText_C::ExecuteUbergraph_UW-ImageText(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ImageText.UW-ImageText_C.ExecuteUbergraph_UW-ImageText");

	struct ExecuteUbergraph_UW-ImageText_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ImageText_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

