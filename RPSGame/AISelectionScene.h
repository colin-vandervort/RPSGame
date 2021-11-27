#pragma once
#include <vector>
#include "InputHandler.h"

class AISelectionScene : I_InputHandler {
	bool inArray(const std::string& value, const std::vector<std::string>& strings);
	bool RequestInput(std::string input);

public:
	bool DisplayAISelectionScene();
};
