#include "TresGumiShipConstellation.h"
#include "TresGumiShipConstellationMarkerComponent.h"
#include "Components/SceneComponent.h"

void ATresGumiShipConstellation::OnMarkerChanged_Implementation(bool flg) {
}

ATresGumiShipConstellation::ATresGumiShipConstellation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Marker = CreateDefaultSubobject<UTresGumiShipConstellationMarkerComponent>(TEXT("Marker"));
    this->OutLinesRoot = CreateDefaultSubobject<USceneComponent>(TEXT("OutLinesRoot"));
    this->StarsRoot = NULL;
}

