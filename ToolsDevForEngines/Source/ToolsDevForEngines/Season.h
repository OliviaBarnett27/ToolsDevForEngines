#pragma once

#include "CoreMinimal.h"
#include "Climate.h"
#include "Season.generated.h"

struct FClimate;

USTRUCT(BlueprintType)
struct FSeason
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FClimate> ClimateMap;
};