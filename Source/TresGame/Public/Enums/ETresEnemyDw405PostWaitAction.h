#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyDw405PostWaitAction.generated.h"

UENUM(BlueprintType)
enum ETresEnemyDw405PostWaitAction {
    TRES_ENEMY_DW405_POSTWAITACTION_IDLE,
    TRES_ENEMY_DW405_POSTWAITACTION_WHEELROLL,
    TRES_ENEMY_DW405_POSTWAITACTION_WALK,
    TRES_ENEMY_DW405_POSTWAITACTION_RESTBARRIER,
    TRES_ENEMY_DW405_POSTWAITACTION_MAX UMETA(Hidden),
};
