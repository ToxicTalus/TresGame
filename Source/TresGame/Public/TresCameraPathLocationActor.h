#pragma once
#include "CoreMinimal.h"
#include "TresCameraPathSplineLinkActor.h"
#include "TresCameraPathLocationActor.generated.h"

UCLASS(Blueprintable, Placeable)
class ATresCameraPathLocationActor : public ATresCameraPathSplineLinkActor {
    GENERATED_BODY()
public:
    ATresCameraPathLocationActor(const FObjectInitializer& ObjectInitializer);
};
