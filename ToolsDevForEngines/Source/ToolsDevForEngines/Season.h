#pragma once

#include "CoreMinimal.h"
#include "Climate.h" 
#include "Engine/DataTable.h"
#include "Season.generated.h"

USTRUCT(BlueprintType)
struct FSeason : public FTableRowBase  
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FClimate> ClimateMap;
};