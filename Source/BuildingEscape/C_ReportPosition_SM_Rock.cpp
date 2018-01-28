// Copyright Nick

#include "C_ReportPosition_SM_Rock.h"


// Sets default values for this component's properties
UC_ReportPosition_SM_Rock::UC_ReportPosition_SM_Rock()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UC_ReportPosition_SM_Rock::BeginPlay()
{
	Super::BeginPlay();

	// UE_LOG(LogTemp, Error, TEXT("Position report reporting for SM_Rock!")); // Red
	// UE_LOG(LogTemp, Log, TEXT("Position report reporting for SM_Rock!")); // Grey
	// UE_LOG(LogTemp, Warning, TEXT("Position report reporting for SM_Rock!")); // Yellow

	
}


// Called every frame
void UC_ReportPosition_SM_Rock::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

