#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CreateLevel.generated.h"
#include "string"

using namespace std;
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TESTSUBJECT_API UCreateLevel : public UActorComponent
{
	//GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCreateLevel();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	//int sizeYX[2] = [10, 10];
	//int chunks[sizeXY[0]] = [];
	string kek = "lol";
};
