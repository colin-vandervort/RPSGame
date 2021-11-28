#include <iostream>
#include "AISelectionScene.h"
#include "GameState.h"
#include "SortingFunctions.h"

bool AISelectionScene:: RequestInput(std::string input)
{
    std::vector<std::string> optionOneStrings{ "1", "One", "ONE", "one", "RANDOMLY", "Randomly", "randomly", "R", "r", "Random", "RANDOM", "random", "Rand", "RAND", "rand" };
    std::vector<std::string> optionTwoStrings{ "2", "Two", "TWO", "two", "Strategically", "STRATEGICALLY", "strategically", "S", "s", "Strategic", "STRATEGIC", "strategic", "Str", "STR", "str" };
    std::vector<std::string> optionThreeStrings{ "3", "Three", "THREE", "three", "Quit", "QUIT", "quit", "Q", "q", "Esc", "ESC", "esc" };

    if (SortingFunctions::inArray(input, optionOneStrings)) {
        GameState::SetAIType(AIType::random);
        system("CLS");
        std::cout << "I am set to play randomly." << std::endl;
    }
    else if (SortingFunctions::inArray(input, optionTwoStrings)) {
        GameState::SetAIType(AIType::strategic);
        system("CLS");
        std::cout << "I am set to play strategically." << std::endl;
    }
    else if (SortingFunctions::inArray(input, optionThreeStrings)) {
        return false;
    }
    else {
        system("CLS");
        std::cout << "Hello!" << std::endl;
        std::cout << "Would you like to play me in Rock Paper Scissors?\n" << std::endl;
        std::cout << "I can play randomly or strategically.\n" << std::endl;
        std::cout << "Invalid request. How would you like to procede?\n" << std::endl;
        std::cout << "[1] Randomly" << std::endl;
        std::cout << "[2] Strategically" << std::endl;
        std::cout << "[3] Quit\n" << std::endl;

        std::cin >> input;
        RequestInput(input);
    }
    return true;
}

bool AISelectionScene:: DisplayAISelectionScene() {
    std::string input;

    std::cout << "Hello!" << std::endl;
    std::cout << "Would you like to play me in Rock Paper Scissors?\n" << std::endl;
    std::cout << "I can play randomly or strategically.\n" << std::endl;
    std::cout << "How would you like to procede?\n" << std::endl;
    std::cout << "[1] Randomly" << std::endl;
    std::cout << "[2] Strategically" << std::endl;
    std::cout << "[3] Quit\n" << std::endl;

    std::cin >> input;
    return RequestInput(input);
}
