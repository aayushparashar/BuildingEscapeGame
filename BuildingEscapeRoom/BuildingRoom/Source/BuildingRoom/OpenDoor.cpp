// Fill out your copyright notice in the Description page of Project Settings.

#include "Gameframework/Actor.h"
#include "OpenDoor.h"

// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();

	// ...
	if (trigger == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("Trigger Volume Empty"));
	}
}



// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (getTotalMassOnTrigger() >= thresholdWeight)
		openDoor();
	else
		closeDoor();
	// ...
}
void UOpenDoor::openDoor() {
	GetOwner()->SetActorRotation(FRotator(0.f,0.f,-60.0f));
}
void UOpenDoor::closeDoor() {
	GetOwner()->SetActorRotation(FRotator(0.f, 0.f, 0.0f));
}
float UOpenDoor::getTotalMassOnTrigger() {
	float total = 0.0f;
	TArray<AActor*> arr; 
	trigger->GetOverlappingActors(arr);
	for (AActor* actor : arr) {
		UPrimitiveComponent* component = actor->FindComponentByClass<UPrimitiveComponent>();
		total += component->GetMass();
	}
	return total;
}

