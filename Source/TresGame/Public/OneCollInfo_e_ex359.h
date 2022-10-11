#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OneCollInfo_e_ex359.generated.h"

class ATresProjectile_e_ex359_Wave_OneCollision;

USTRUCT(BlueprintType)
struct FOneCollInfo_e_ex359 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 iNotifyParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectile_e_ex359_Wave_OneCollision> pOneCollision;
    
    TRESGAME_API FOneCollInfo_e_ex359();
};
