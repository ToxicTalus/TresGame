#pragma once
#include "CoreMinimal.h"
#include "TresEnemyBigDealCardRotationEndParam_e_ex356.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyBigDealCardRotationEndParam_e_ex356 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NotCardDesignNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlainCardDesignNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LuxordCardDesignNum;
    
    TRESGAME_API FTresEnemyBigDealCardRotationEndParam_e_ex356();
};

