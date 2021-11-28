#include "AISelectionScene.h"
#include "GameModeSelectionScene.h"
#include "GameScene.h"
#include "EndScene.h"

int main()
{
    AISelectionScene aISelectionScene;
    if (aISelectionScene.DisplayAISelectionScene())
    {
        GameModeSelectionScene gameModeSelectionScene;
        gameModeSelectionScene.DisplayGameModeSelectionScene();

        GameScene gameScene;
        gameScene.DisplayGameScene();

        EndScene endScene;
        endScene.DisplayEndScene();
    }
    return 0;
}
