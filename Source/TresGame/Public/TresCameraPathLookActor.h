#pragma once
#include "CoreMinimal.h"
#include "TresCameraPathLocationActor.h"
#include "TresCameraPathLookActor.generated.h"

UCLASS(Blueprintable)
class ATresCameraPathLookActor : public ATresCameraPathLocationActor {
    GENERATED_BODY()
public:
    ATresCameraPathLookActor(const FObjectInitializer& ObjectInitializer);
};

