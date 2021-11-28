#pragma once
#include "InputHandler.h"

class AISelectionScene : I_InputHandler {
	int RequestInput(std::string input);

public:
	bool DisplayAISelectionScene();
};
