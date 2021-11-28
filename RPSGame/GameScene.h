#pragma once
#include "InputHandler.h"

class GameScene : I_InputHandler {
	bool RequestInput(std::string input);

public:
	void DisplayGameScene();
};
