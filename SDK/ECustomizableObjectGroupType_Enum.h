// ECustomizableObjectGroupType CustomizableObject.ECustomizableObjectGroupType
enum class ECustomizableObjectGroupType : uint8 {
	All = 0,
	ClientOnly = 1,
	ECustomizableObjectRelevancy_MAX = 2,
	Planar = 0,
	Cylindrical = 1,
	Wrapping = 2,
	ECustomizableObjectProjectorType_MAX = 3,
	Full = 0,
	Local = 1,
	LocalAndChildren = 2,
	AddWorkingSetNoChildren = 3,
	AddWorkingSetAndChildren = 4,
	EMutableCompileMeshType_MAX = 5,
	COGT_TOGGLE = 0,
	COGT_ALL = 1,
	COGT_ONE = 2,
	COGT_ONE_OR_NONE = 3,
	COGT_MAX = 4
};

