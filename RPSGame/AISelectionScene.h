#pragma once
#include "InputHandler.h"

class AISelectionScene : I_InputHandler {
	bool RequestInput(std::string input);

public:
	bool DisplayAISelectionScene();
};
