// Copyright for LushoLeal Projects

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()
public:
	AAuraEnemy();

	/** Enemy Interfaace */
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
	/** End Enemy Interfaace */

protected:
	virtual void BeginPlay() override;
	virtual void InitAbilityActorInfo() override;
};
