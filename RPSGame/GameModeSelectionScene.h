#pragma once
#include "InputHandler.h"

class GameModeSelectionScene : I_InputHandler {
	bool RequestInput(std::string input);

public:
	void DisplayGameModeSelectionScene();
};
