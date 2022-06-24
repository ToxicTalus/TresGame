// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TresGameEdit.h"
#include "TresGameEditEdMode.h"

#define LOCTEXT_NAMESPACE "FTresGameEditModule"

void FTresGameEditModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	FEditorModeRegistry::Get().RegisterMode<FTresGameEditEdMode>(FTresGameEditEdMode::EM_TresGameEditEdModeId, LOCTEXT("TresGameEditEdModeName", "TresGameEditEdMode"), FSlateIcon(), true);
}

void FTresGameEditModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FEditorModeRegistry::Get().UnregisterMode(FTresGameEditEdMode::EM_TresGameEditEdModeId);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FTresGameEditModule, TresGameEdit)