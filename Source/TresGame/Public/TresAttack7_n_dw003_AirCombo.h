#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAttack7_n_dw003_AirCombo.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack7_n_dw003_AirCombo : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_AttackAnimData1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LeftRightCutMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxJumpHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FinishDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDebugComboKeep: 1;
    
public:
    UTresAttack7_n_dw003_AirCombo();
};

