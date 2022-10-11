#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipWeaponSequence.h"
#include "TresGumiShipWeaponSequenceWithMultiLock.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipWeaponSequenceWithMultiLock : public UTresGumiShipWeaponSequence {
    GENERATED_BODY()
public:
    UTresGumiShipWeaponSequenceWithMultiLock();
};
