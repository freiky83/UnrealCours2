// Fill out your copyright notice in the Description page of Project Settings.


#include "Character_CPP.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
ACharacter_CPP::ACharacter_CPP()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera_Arm"));
	CameraArm->SetupAttachment(GetRootComponent());
	CameraArm->TargetArmLength = 600.f;

	MyCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("MyCamera"));
	MyCamera->SetupAttachment(CameraArm);

}

// Called when the game starts or when spawned
void ACharacter_CPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacter_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacter_CPP::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

