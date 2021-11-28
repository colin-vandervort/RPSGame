#pragma once
#include "InputHandler.h"

class GameScene : I_InputHandler {
	int RequestInput(std::string input);

public:
	void DisplayGameScene();
};
