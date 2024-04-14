// Copyright 2024 Spyridon Zervos


#include "Modules/ModuleManager.h"

class FWidgetsCollectiva : public IModuleInterface
{
	
public:

	FWidgetsCollectiva();
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

FWidgetsCollectiva::FWidgetsCollectiva() {}

void FWidgetsCollectiva::StartupModule() {}

void FWidgetsCollectiva::ShutdownModule() {}

IMPLEMENT_MODULE(FWidgetsCollectiva, WidgetsCollectiva)
