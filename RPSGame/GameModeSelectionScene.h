#pragma once
#include "InputHandler.h"

class GameModeSelectionScene : I_InputHandler {
	int RequestInput(std::string input);

public:
	void DisplayGameModeSelectionScene();
};
