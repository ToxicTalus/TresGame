#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "ETornado_CommonAction.h"
#include "TresAction_e_he903_Common.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction_e_he903_Common : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETornado_CommonAction> m_Action;
    
    UTresAction_e_he903_Common();
};

