// STitleLevelUI.cpp


#include "UI/STitleLevelUI.h"
#include "Components/Button.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Game/SPlayerStateSave.h"
#include "Game/SPlayerState.h"

USTitleLevelUI::USTitleLevelUI(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void USTitleLevelUI::NativeConstruct()
{
	NewGameButton.Get()->OnClicked.AddDynamic(this, &ThisClass::OnNewGameButtonClicked);
	ExitGameButton.Get()->OnClicked.AddDynamic(this, &ThisClass::OnExitGameButtonClicked);
	SavedGameButton.Get()->OnClicked.AddDynamic(this, &ThisClass::OnSavedGameButtonClicked);

	SavedGameButton->SetIsEnabled(false);
	
}

void USTitleLevelUI::OnNewGameButtonClicked()
{
	UGameplayStatics::OpenLevel(GetWorld(), FName(TEXT("Loading")), true, FString(TEXT("NextLevel=Lobby?Saved=false")));
}


void USTitleLevelUI::OnExitGameButtonClicked()
{
	UKismetSystemLibrary::QuitGame(this, GetOwningPlayer(), EQuitPreference::Quit, false);
}

void USTitleLevelUI::OnSavedGameButtonClicked()
{
	UGameplayStatics::OpenLevel(GetWorld(), FName(TEXT("Loading")), true, FString(TEXT("NextLevel=Example?Saved=true")));
}