#pragma once
#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "TresDebugArrowComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresDebugArrowComponent : public UArrowComponent {
    GENERATED_BODY()
public:
    UTresDebugArrowComponent();
};

