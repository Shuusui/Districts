// Fill out your copyright notice in the Description page of Project Settings.

#include "Weapons.h"


// Sets default values for this component's properties
UWeapons::UWeapons()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	m_pCurrentWeapon = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Weapon"));
	m_pCurrentWeapon->SetOnlyOwnerSee(true);			// only the owning player will see this mesh
	m_pCurrentWeapon->bCastDynamicShadow = false;
	m_pCurrentWeapon->CastShadow = false;
	// ...
}


// Called when the game starts
void UWeapons::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UWeapons::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

