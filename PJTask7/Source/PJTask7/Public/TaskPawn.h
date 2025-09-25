// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "InputAction.h"
#include "TaskPawn.generated.h"

class UFloatingPawnMovement;
class UCameraComponent;
class USpringArmComponent;
class UCapsuleComponent;
class UArrowComponent;
class USkeletalMeshComponent;
struct FInputActionValue;




UCLASS()
class PJTASK7_API ATaskPawn : public APawn
{
	GENERATED_BODY()

public:
	ATaskPawn();

protected:
	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	

	UFUNCTION()
	void Move(const FInputActionValue& value);

	UFUNCTION()
	void Look(const FInputActionValue& value);

	
	UFUNCTION()
	void StartSprint(const FInputActionValue& value);

	UFUNCTION()
	void StopSprint(const FInputActionValue& value);
public:	
	//ĸ��
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UCapsuleComponent* CapsuleComp;

	
	//ȭ��ǥ
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UArrowComponent* ArrowComp;
	
	//ĳ���� �Ž�
	UPROPERTY(VisibleAnywhere, Category = "Components")
	USkeletalMeshComponent* CharacterMesh;
	
	//ī�޶�
	UPROPERTY(VisibleAnywhere, Category = "Components")
	USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	float MoveSpeed = 600.0f;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	float LookSpeed = 2.0f;

	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UFloatingPawnMovement* MovementComp;

	
	
	
};
