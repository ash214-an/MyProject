#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

UCLASS()
class SPARTAPROJECT2_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	AItem();

protected:
	USceneComponent* SceneRoot;

	UStaticMeshComponent* StaticMeshComp;
	

};
