#pragma once
#include "CoreMinimal.h"
#include "TresAttackHitInvincibleCharLogInfo.h"
#include "TresAI_BPEM_NotificationAttackHitInvincibleCharLogInfoDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresAI_BPEM_NotificationAttackHitInvincibleCharLogInfo, FTresAttackHitInvincibleCharLogInfo, NotificationAttackHitInvincibleCharLogInfo);

