// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "MoveToNearLocation.generated.h"

/**
 * 
 */
UCLASS()
class SHADOWRUNNER_API UMoveToNearLocation : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UMoveToNearLocation(FObjectInitializer const& ObjectInitializer);

	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

private:
	float MinRadius;
	float MaxRadius;
};
