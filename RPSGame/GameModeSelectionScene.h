#pragma once
#include <vector>
#include "InputHandler.h"

class GameModeSelectionScene : I_InputHandler {
	bool inArray(const std::string& value, const std::vector<std::string>& strings);
	void RequestInput(std::string input);

public:
	void DisplayGameModeSelectionScene();
};
