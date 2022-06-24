#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "ThumbnailRendering/DefaultSizedThumbnailRenderer.h"
#include "ThumbnailHelpers.h"
#include "TresBlueprintThumbnailRenderer.generated.h"

class FCanvas;
class FRenderTarget;

UCLASS(config=Editor, DefaultConfig)
class UTresBlueprintThumbnailRenderer : public UDefaultSizedThumbnailRenderer
{
	GENERATED_UCLASS_BODY()

	// Begin UThumbnailRenderer Object
	TRESGAMEEDITOR_API virtual bool CanVisualizeAsset(UObject* Object) override;
	TRESGAMEEDITOR_API virtual void Draw(UObject* Object, int32 X, int32 Y, uint32 Width, uint32 Height, FRenderTarget*, FCanvas* Canvas) override;
	// End UThumbnailRenderer Object

	// UObject implementation
	TRESGAMEEDITOR_API virtual void BeginDestroy() override;
	// End UObject implementation

	/** Notifies the thumbnail scene to refresh components for the specified blueprint */
	void BlueprintChanged(class UBlueprint* Blueprint);

private:
	TClassInstanceThumbnailScene<FBlueprintThumbnailScene, 400> ThumbnailScenes;
};
