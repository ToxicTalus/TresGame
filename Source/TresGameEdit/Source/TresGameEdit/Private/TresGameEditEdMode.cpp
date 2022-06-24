// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TresGameEditEdMode.h"
#include "TresGameEditEdModeToolkit.h"
#include "Toolkits/ToolkitManager.h"
#include "EditorModeManager.h"

const FEditorModeID FTresGameEditEdMode::EM_TresGameEditEdModeId = TEXT("EM_TresGameEditEdMode");

FTresGameEditEdMode::FTresGameEditEdMode()
{

}

FTresGameEditEdMode::~FTresGameEditEdMode()
{

}

void FTresGameEditEdMode::Enter()
{
	FEdMode::Enter();

	if (!Toolkit.IsValid() && UsesToolkits())
	{
		Toolkit = MakeShareable(new FTresGameEditEdModeToolkit);
		Toolkit->Init(Owner->GetToolkitHost());
	}
}

void FTresGameEditEdMode::Exit()
{
	if (Toolkit.IsValid())
	{
		FToolkitManager::Get().CloseToolkit(Toolkit.ToSharedRef());
		Toolkit.Reset();
	}

	// Call base Exit method to ensure proper cleanup
	FEdMode::Exit();
}

bool FTresGameEditEdMode::UsesToolkits() const
{
	return true;
}




