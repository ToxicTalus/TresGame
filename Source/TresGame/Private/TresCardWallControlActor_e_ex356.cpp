#include "TresCardWallControlActor_e_ex356.h"
#include "Components/SceneComponent.h"

ATresCardWallControlActor_e_ex356::ATresCardWallControlActor_e_ex356(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MyRoot"));
}
