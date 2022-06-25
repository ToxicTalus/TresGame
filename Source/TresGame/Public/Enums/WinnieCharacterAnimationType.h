#pragma once
#include "CoreMinimal.h"
#include "WinnieCharacterAnimationType.generated.h"

UENUM(BlueprintType)
enum class WinnieCharacterAnimationType : uint8 {
    Idle,
    Walk,
    JumpStart,
    JumpLoop,
    RabbitSeePlayer,
    RabbitSeeUnit,
    RabbitHappy,
    RabbitHappyLanding,
    RabbitWell,
    RabbitHarvest,
    RabbitHarvestEnd,
    RabbitLanding,
    RabbitFailureStart,
    RabbitFailureLoop,
    SuperJumpStart,
    SuperJumpLoop,
    SuperJumpBoundL,
    SuperJumpBoundR,
    TiggerLanding,
    TiggerJumpStart,
    LumpyIdle,
    LumpyRunL,
    LumpyRunR,
    LumpyRunLoopL,
    LumpyRunLoopR,
    LumpyEntry,
    LumpyStop,
    LumpyRunStart,
    LumpyRunLoop,
    GopherEntry,
    GopherOut,
    GopherWait,
    GopherLookAround,
    GopherDive,
    GopherJump,
    PoohEntry,
    PoohIdle,
    PoohHungry,
    PoohHappy,
    PoohHappyOnce,
    PoohHappyEnd,
    PoohEatHoneyStart,
    PoohEatingHoney,
    PoohEatHoneyEnd,
    PoohDownStart,
    PoohDownLoop,
};
