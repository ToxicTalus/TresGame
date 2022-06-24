// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TresGameEditor.h"
#include "TresGameEditorMode.h"
#include "Misc/ConfigCacheIni.h"

#define LOCTEXT_NAMESPACE "FTresGameEditorModule"

void FTresGameEditorModule::StartupModule()
{
	FEditorModeRegistry::Get().RegisterMode<FTresGameEditorMode>(FTresGameEditorMode::EM_TresGameEditorModeId, LOCTEXT("TresGameEditorModeName", "TresGameEditorMode"), FSlateIcon(), true);
}

void FTresGameEditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FEditorModeRegistry::Get().UnregisterMode(FTresGameEditorMode::EM_TresGameEditorModeId);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FTresGameEditorModule, TresGameEditor)



UTresUnrealEdEngine::UTresUnrealEdEngine(const FObjectInitializer & ObjectInitializer)
{
	GConfig->GetBool(TEXT("/Script/TresGameEditor.TresUnrealEdEngine"), TEXT("m_SpawnByLevelEntity"), m_SpawnByLevelEntity, GEngineIni);
	GConfig->GetBool(TEXT("/Script/TresGameEditor.TresUnrealEdEngine"), TEXT("m_SpawnByEnemySetInstance"), m_SpawnByEnemySetInstance, GEngineIni);
	GConfig->GetBool(TEXT("/Script/TresGameEditor.TresUnrealEdEngine"), TEXT("m_SpawnMatineePreviewActor"), m_SpawnMatineePreviewActor, GEngineIni);
}