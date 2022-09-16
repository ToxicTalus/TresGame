#pragma once
#include "CoreMinimal.h"
#include "TresAttack1_e_ex309_JinraiBase.h"
#include "TresAttack1_e_ex309_JinraiFirst.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack1_e_ex309_JinraiFirst : public UTresAttack1_e_ex309_JinraiBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RootMotionScaleXY;
    
public:
    UTresAttack1_e_ex309_JinraiFirst();
};

