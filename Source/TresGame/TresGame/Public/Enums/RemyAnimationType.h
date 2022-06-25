#pragma once
#include "CoreMinimal.h"
#include "RemyAnimationType.generated.h"

UENUM(BlueprintType)
enum class RemyAnimationType : uint8 {
    FlambeIdle,
    FlambeTakeProp,
    FlambeReadyIdle,
    FlambeTiltBottle,
    FlambeTurnBottleLoop,
    FlambeTooMany,
    FlambeTimeOut,
    FlambeSuccess,
    FlambeGreatSuccess,
    FlambeFail,
    CuttingIdle,
    CuttingTakeProp,
    CuttingReadyIdle,
    CuttingCut,
    CuttingReload,
    CuttingSuccess,
    CuttingGreatSuccess,
    CuttingFail,
    EggCrackingIdle,
    EggCrackingTakeProp,
    EggCrackingReadyIdle,
    EggCrackingTooMany,
    EggCrackingTimeOut,
    EggCrackingSuccess,
    EggCrackingGreatSuccess,
    EggCrackingFail,
    SprinklePepperIdle,
    SprinklePepperTakeProp,
    SprinklePepperReadyIdle,
    SprinklePepperFirstThrow,
    SprinklePepperLeftHandThrow,
    SprinklePepperRightHandThrow,
    SprinklePepperLeftHandMiss,
    SprinklePepperRightHandMiss,
    SprinklePepperLeftHandCatchFail,
    SprinklePepperRightHandCatchFail,
    SprinklePepperLeftHandSprinkleFail,
    SprinklePepperRightHandSprinkleFail,
    SprinklePepperLeftHandCatchSuccess,
    SprinklePepperRightHandCatchSuccess,
    SprinklePepperLeftHandSprinkleSuccess,
    SprinklePepperRightHandSprinkleSuccess,
    SprinklePepperLeftHandSprinkleGreatSuccess,
    SprinklePepperRightHandSprinkleGreatSuccess,
};
