// Copyright Epic Games, Inc. All Rights Reserved.

#include "Resume.h"
#include "Modules/ModuleManager.h"

class FResumeModule : public FDefaultGameModuleImpl
{
	virtual void StartupModule() override
	{
		UE_LOG(LogTemp, Display, TEXT("Resume module started"));
	}
};

IMPLEMENT_PRIMARY_GAME_MODULE( FResumeModule, Resume, "Resume" );
