// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AssetTypeCategories.h"
#include "ModuleManager.h"
#include "ObjectMacros.h"
#include "Editor/UnrealEdEngine.h"
#include "TresGameEditor.generated.h"

static EAssetTypeCategories::Type SQEX_AssetCategory;

class FTresGameEditorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

UCLASS()
class TRESGAMEEDITOR_API UTresUnrealEdEngine : public UUnrealEdEngine
{
	GENERATED_BODY()

	UTresUnrealEdEngine(const FObjectInitializer & ObjectInitializer);

private:
	UPROPERTY(Config)
	bool m_SpawnByLevelEntity;

	UPROPERTY(Config)
	bool m_SpawnByEnemySetInstance;

	UPROPERTY(Config)
	bool m_SpawnMatineePreviewActor;
	
};