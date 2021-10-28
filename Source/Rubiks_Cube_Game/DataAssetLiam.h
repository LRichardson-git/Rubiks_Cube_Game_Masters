// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DataAssetLiam.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class RUBIKS_CUBE_GAME_API UDataAssetLiam : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		AActor test;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString Name;
};
