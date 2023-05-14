// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlayerInformationScript.generated.h"

/**
 * 
 */
UCLASS()
class DEBALLENBAKGAME_API UPlayerInformationScript : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public: 
	UFUNCTION(BlueprintCallable, Category = "Swiffers domain")
	static FString GetName();
};
