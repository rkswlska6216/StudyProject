#include "Controllers/SUIPlayerController.h"
#include "Blueprint/UserWidget.h"

void ASUIPlayerController::BeginPlay()
{
    Super::BeginPlay();

    if (true == ::IsValid(UIWidgetClass))
    {
        UIWidgetInstance = CreateWidget<UUserWidget>(this, UIWidgetClass);
        // CreateWidget()�� ȣ��� �� UIWidgetInstance->NativeOnInitialize() �Լ��� ȣ���.
        if (true == ::IsValid(UIWidgetInstance))
        {
            UIWidgetInstance->AddToViewport();
            // AddToViewport()�� ȣ�� �� �� UIWidgetInstance->NativeConstruct() �Լ��� ȣ���.

            FInputModeUIOnly Mode;
            Mode.SetWidgetToFocus(UIWidgetInstance->GetCachedWidget());
            SetInputMode(Mode);

            bShowMouseCursor = true;
        }
    }
}