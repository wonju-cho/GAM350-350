// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "ShadowRunnerCharacter.h"
#include "Goto.generated.h"

UCLASS()
class SHADOWRUNNER_API AGoto : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGoto();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pickup)
		UStaticMeshComponent* topMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pickup)
		FRotator rotationRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		UBoxComponent* boxCollider;

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	void ChangeLevel();
};
