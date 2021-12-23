// ScriptStruct Serialization.StructSerializerTestStruct
struct FStructSerializerTestStruct {
	struct Unknown Numerics; // 0x0 (48)
	struct Unknown Booleans; // 0x30 (3)
	struct Unknown Objects; // 0x38 (160)
	struct Unknown Builtins; // 0xE0 (144)
	struct Unknown Arrays; // 0x170 (96)
	struct Unknown Maps; // 0x1D0 (320)
	struct Unknown Sets; // 0x310 (320)
};

// ScriptStruct Serialization.StructSerializerSetTestStruct
struct FStructSerializerSetTestStruct {
	struct TSet<Unknown> StrSet; // 0x0 (80)
	struct TSet<Unknown> IntSet; // 0x50 (80)
	struct TSet<Unknown> NameSet; // 0xA0 (80)
	struct TSet<Unknown> StructSet; // 0xF0 (80)
};

// ScriptStruct Serialization.StructSerializerBuiltinTestStruct
struct FStructSerializerBuiltinTestStruct {
	struct Unknown Guid; // 0x0 (16)
	struct FName Name; // 0x10 (8)
	struct FString String; // 0x18 (16)
	struct FText Text; // 0x28 (24)
	struct Unknown Vector; // 0x40 (12)
	struct Unknown Vector4; // 0x50 (16)
	struct Unknown Rotator; // 0x60 (12)
	struct Unknown Quat; // 0x70 (16)
	struct Unknown Color; // 0x80 (4)
};

// ScriptStruct Serialization.StructSerializerMapTestStruct
struct FStructSerializerMapTestStruct {
	struct TMap<Unknown, Unknown>Unknown IntToStr; // 0x0 (80)
	struct TMap<Unknown, Unknown>Unknown StrToStr; // 0x50 (80)
	struct TMap<Unknown, Unknown>Unknown StrToVec; // 0xA0 (80)
	struct TMap<Unknown, Unknown>Unknown StrToStruct; // 0xF0 (80)
};

// ScriptStruct Serialization.StructSerializerArrayTestStruct
struct FStructSerializerArrayTestStruct {
	struct TArray<Unknown> Int32Array; // 0x0 (16)
	struct TArray<Unknown> ByteArray; // 0x10 (16)
	int32_t StaticSingleElement; // 0x20 (4)
	int32_t StaticInt32Array[0x3]; // 0x24 (12)
	float StaticFloatArray[0x3]; // 0x30 (12)
	struct TArray<Unknown> VectorArray; // 0x40 (16)
	struct TArray<Unknown> StructArray; // 0x50 (16)
};

// ScriptStruct Serialization.StructSerializerObjectTestStruc
struct FStructSerializerObjectTestStruc {
	struct Unknown* Class; // 0x0 (8)
	struct Unknown* SubClass; // 0x8 (8)
	struct TSoftClassPtr<UObject> SoftClass; // 0x10 (40)
	struct Unknown Object; // 0x38 (8)
	struct TWeakObjectPtr<struct Unknown> WeakObject; // 0x40 (8)
	struct TSoftObjectPtr<Unknown> SoftObject; // 0x48 (40)
	struct Unknown ClassPath; // 0x70 (24)
	struct Unknown ObjectPath; // 0x88 (24)
};

// ScriptStruct Serialization.StructSerializerBooleanTestStruct
struct FStructSerializerBooleanTestStruct {
	char BoolFalse : 0; // 0x0 (1)
	char BoolTrue : 0; // 0x1 (1)
	char Bitfield0 : 0; // 0x2 (1)
	char Bitfield1 : 0; // 0x2 (1)
	char Bitfield2Set : 0; // 0x2 (1)
	char Bitfield3 : 0; // 0x2 (1)
	char Bitfield4Set : 0; // 0x2 (1)
	char Bitfield5Set : 0; // 0x2 (1)
	char Bitfield6 : 0; // 0x2 (1)
	char Bitfield7Set : 0; // 0x2 (1)
};

// ScriptStruct Serialization.StructSerializerNumericTestStruct
struct FStructSerializerNumericTestStruct {
	int8_t Int8; // 0x0 (1)
	int16_t Int16; // 0x2 (2)
	int32_t Int32; // 0x4 (4)
	int64_t Int64; // 0x8 (8)
	char UInt8; // 0x10 (1)
	uint16_t UInt16; // 0x12 (2)
	uint32_t UInt32; // 0x14 (4)
	uint64_t UInt64; // 0x18 (8)
	float Float; // 0x20 (4)
	double Double; // 0x28 (8)
};

// ScriptStruct Serialization.StructSerializerByteArray
struct FStructSerializerByteArray {
	int32_t Dummy1; // 0x0 (4)
	struct TArray<Unknown> ByteArray; // 0x8 (16)
	int32_t Dummy2; // 0x18 (4)
	struct TArray<Unknown> Int8Array; // 0x20 (16)
	int32_t Dummy3; // 0x30 (4)
};

