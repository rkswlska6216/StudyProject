// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/SGameInstance.h"
#include "Kismet/KismetSystemLibrary.h"
#include "SUnrealObjectClass.h"
#include "Examples/SFlyable.h"
#include "Examples/SPigeon.h"
#include "JsonObjectConverter.h"
#include "UObject/SavePackage.h"
USGameInstance::USGameInstance()
{
	Name = TEXT("USGameInstance Class Defaylt Object");
}

void USGameInstance::Init()
{
    Super::Init();
}
	


void USGameInstance::Shutdown()
{
	Super::Shutdown();

}
