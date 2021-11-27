#include <iostream>
#include "GameModeSelectionScene.h"

bool GameModeSelectionScene :: inArray(const std::string& value, const std::vector<std::string>& strings)
{
    return std::find(strings.begin(), strings.end(), value) != strings.end();
}

void GameModeSelectionScene :: RequestInput(std::string input)
{
    std::vector<std::string> optionOneStrings{ "1", "One", "ONE", "one", "RANDOMLY", "Randomly", "randomly", "R", "r", "Random", "RANDOM", "random", "Rand", "RAND", "rand" };
    std::vector<std::string> optionTwoStrings{ "2", "Two", "TWO", "two", "Strategically", "STRATEGICALLY", "strategically", "S", "s", "Strategic", "STRATEGIC", "strategic", "Str", "STR", "str" };
    std::vector<std::string> optionThreeStrings{ "3", "Three", "THREE", "three", "Quit", "QUIT", "quit", "Q", "q", "Esc", "ESC", "esc" };

    if (inArray(input, optionOneStrings)) {

    }
    else if (inArray(input, optionTwoStrings)) {

    }
    else if (inArray(input, optionThreeStrings)) {

    }
    else {
        //todo: Clear command console
        std::cout << "Invalid request. How would you like to procede?\n" << std::endl;
        std::cout << "[1] Randomly" << std::endl;
        std::cout << "[2] Strategically" << std::endl;
        std::cout << "[3] Quit\n" << std::endl;

        std::cin >> input;
        RequestInput(input);
    }
}

void GameModeSelectionScene :: DisplayGameModeSelectionScene() {
    std::string input;

    std::cout << "Hello!" << std::endl;
    std::cout << "Would you like to play me in Rock Paper Scissors?\n" << std::endl;
    std::cout << "I can play randomly or strategically.\n" << std::endl;
    std::cout << "How would you like to procede?\n" << std::endl;
    std::cout << "[1] Randomly" << std::endl;
    std::cout << "[2] Strategically" << std::endl;
    std::cout << "[3] Quit\n" << std::endl;

    std::cin >> input;
    RequestInput(input);
}
