#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_dw401_DevilMeteorCyclone.generated.h"

class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_dw401_DevilMeteorCyclone : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_PCHitEffData;
    
    ATresProjectile_e_dw401_DevilMeteorCyclone(const FObjectInitializer& ObjectInitializer);
};
