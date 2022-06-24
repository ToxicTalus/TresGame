// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TresGameEditorMode.h"
#include "TresGameEditorModeToolkit.h"
#include "Toolkits/ToolkitManager.h"
#include "EditorModeManager.h"

const FEditorModeID FTresGameEditorMode::EM_TresGameEditorModeId = TEXT("EM_TresGameEditorMode");

FTresGameEditorMode::FTresGameEditorMode()
{

}

FTresGameEditorMode::~FTresGameEditorMode()
{

}

void FTresGameEditorMode::Enter()
{
	FEdMode::Enter();

	if (!Toolkit.IsValid() && UsesToolkits())
	{
		Toolkit = MakeShareable(new FTresGameEditorModeToolkit);
		Toolkit->Init(Owner->GetToolkitHost());
	}
}

void FTresGameEditorMode::Exit()
{
	if (Toolkit.IsValid())
	{
		FToolkitManager::Get().CloseToolkit(Toolkit.ToSharedRef());
		Toolkit.Reset();
	}

	// Call base Exit method to ensure proper cleanup
	FEdMode::Exit();
}

bool FTresGameEditorMode::UsesToolkits() const
{
	return true;
}




