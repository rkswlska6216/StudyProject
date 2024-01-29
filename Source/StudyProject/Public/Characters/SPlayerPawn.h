// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "SPlayerPawn.generated.h"

UCLASS()
class STUDYPROJECT_API ASPlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	ASPlayerPawn();
    UPROPERTY(EditAnywhere, Category = "ASPlayerPawn", Meta = (AllowPrivateAccess))
    TObjectPtr<class UCapsuleComponent> CapsuleComponent;

    UPROPERTY(EditAnywhere, Category = "ASPlayerPawn", Meta = (AllowPrivateAccess))
    TObjectPtr<class USkeletalMeshComponent> SkeletalMeshComponent;

    UPROPERTY(EditAnywhere, Category = "ASPlayerPawn", Meta = (AllowPrivateAccess))
    TObjectPtr<class UFloatingPawnMovement> FloatingPawnMovementComponent;

    UPROPERTY(EditAnywhere, Category = "ASPlayerPawn", Meta = (AllowPrivateAccess))
    TObjectPtr<class USpringArmComponent> SpringArmComponent;

    UPROPERTY(EditAnywhere, Category = "ASPlayerPawn", Meta = (AllowPrivateAccess))
    TObjectPtr<class UCameraComponent> CameraComponent;
protected:
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
    virtual void BeginPlay() override;
private:
    void UpDown(float InAxisValue);

    void LeftRight(float InAxisValue);

};
