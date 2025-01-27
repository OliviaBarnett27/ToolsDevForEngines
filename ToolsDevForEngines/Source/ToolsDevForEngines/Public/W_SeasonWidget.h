// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Editor/VREditor/Private/VREditorCameraWidgetComponent.h"
#include "W_SeasonWidget.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class TOOLSDEVFORENGINES_API UW_SeasonWidget : public UVREditorCameraWidgetComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UW_SeasonWidget();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
};
