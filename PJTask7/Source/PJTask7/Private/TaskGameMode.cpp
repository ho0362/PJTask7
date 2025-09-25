#include "TaskGameMode.h"
#include "TaskPawn.h"
#include "TaskPlayerController.h"
ATaskGameMode::ATaskGameMode()
{
	DefaultPawnClass = ATaskPawn::StaticClass();
	PlayerControllerClass = ATaskPlayerController::StaticClass();
}