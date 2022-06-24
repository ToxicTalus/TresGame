// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TresGameEditor.h"
#include "TresGameEditorMode.h"
#include "AssetToolsModule.h"
#include "IAssetTools.h"

#include "TresGameEditor_Factory.h"

#define LOCTEXT_NAMESPACE "FTresGameEditorModule"

void FTresGameEditorModule::StartupModule()
{

}

void FTresGameEditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}



#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FTresGameEditorModule, TresGameEditor)