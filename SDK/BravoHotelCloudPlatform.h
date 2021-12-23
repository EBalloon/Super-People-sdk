// Enum BravoHotelCloudPlatform.AwsAuthFlowType
enum class AwsAuthFlowType : uint8 {
	AwsAuthFlowType = 0
	AwsAuthFlowType = 1
	AwsAuthFlowType = 2
	AwsAuthFlowType = 3
	AwsAuthFlowType = 4
	AwsAuthFlowType = 5
	AwsAuthFlowType = 6
	AwsAuthFlowType = 7
	AwsAuthFlowType = 8
};

// ScriptStruct BravoHotelCloudPlatform.AwsCredentialsInfo
struct FAwsCredentialsInfo {
	struct FString AccessKeyId; // 0x0 (16)
	struct FString SecretKey; // 0x10 (16)
	struct FString SessionToken; // 0x20 (16)
	double ExpirationTime; // 0x30 (8)
	char bTokenRequest : 0; // 0x38 (1)
};

// ScriptStruct BravoHotelCloudPlatform.AwsKinesisObject
struct FAwsKinesisObject {
	struct FString StreamName; // 0x0 (16)
	struct FString Data; // 0x10 (16)
	struct FString PartitionKey; // 0x20 (16)
};

// ScriptStruct BravoHotelCloudPlatform.AwsCredentialsForIdentityResponse
struct FAwsCredentialsForIdentityResponse {
	struct TMap<Unknown, Unknown>Unknown Credentials; // 0x0 (80)
	struct FString IdentityId; // 0x50 (16)
};

// ScriptStruct BravoHotelCloudPlatform.AwsCredentialsForIdentityRequest
struct FAwsCredentialsForIdentityRequest {
	struct FString IdentityId; // 0x0 (16)
	struct TMap<Unknown, Unknown>Unknown Logins; // 0x10 (80)
};

// ScriptStruct BravoHotelCloudPlatform.AwsIdentityIDResponse
struct FAwsIdentityIDResponse {
	struct FString IdentityId; // 0x0 (16)
};

// ScriptStruct BravoHotelCloudPlatform.AwsAuthChallengeResponse
struct FAwsAuthChallengeResponse {
	struct TMap<Unknown, Unknown>Unknown AuthenticationResult; // 0x0 (80)
};

// ScriptStruct BravoHotelCloudPlatform.AwsIdentityIdRequest
struct FAwsIdentityIdRequest {
	struct FString IdentityPoolId; // 0x0 (16)
	struct TMap<Unknown, Unknown>Unknown Logins; // 0x10 (80)
};

// ScriptStruct BravoHotelCloudPlatform.AwsAuthChallengeRequest
struct FAwsAuthChallengeRequest {
	struct FString ClientId; // 0x0 (16)
	struct FString ChallengeName; // 0x10 (16)
	struct TMap<Unknown, Unknown>Unknown ChallengeResponses; // 0x20 (80)
};

// ScriptStruct BravoHotelCloudPlatform.AwsChallengeParameterResponse
struct FAwsChallengeParameterResponse {
	struct FString ChallengeName; // 0x0 (16)
	struct TMap<Unknown, Unknown>Unknown ChallengeParameters; // 0x10 (80)
};

// ScriptStruct BravoHotelCloudPlatform.AwsAuthRequest
struct FAwsAuthRequest {
	enum class Unknow AuthFlow; // 0x0 (1)
	struct TMap<Unknown, Unknown>Unknown AuthParameters; // 0x8 (80)
	struct FString ClientId; // 0x58 (16)
};

// ScriptStruct BravoHotelCloudPlatform.Response_Google_AccessToken
struct FResponse_Google_AccessToken {
	struct FString access_token; // 0x0 (16)
	int32_t expires_in; // 0x10 (4)
	struct FString token_type; // 0x18 (16)
};

