// ScriptStruct PropertyPath.CachedPropertyPath
struct FCachedPropertyPath {
	struct TArray<Unknown> Segments; // 0x0 (16)
	struct Unknown CachedFunction; // 0x18 (8)
};

// ScriptStruct PropertyPath.PropertyPathSegment
struct FPropertyPathSegment {
	struct FName Name; // 0x0 (8)
	int32_t ArrayIndex; // 0x8 (4)
	struct Unknown Struct; // 0x10 (8)
};

