#include <iostream>
#include "GameModeSelectionScene.h"
#include "GameState.h"
#include "SortingFunctions.h"

int GameModeSelectionScene::RequestInput(std::string input) {
	std::vector<std::string> optionOneStrings{ "1", "One", "ONE", "one", "bo3", "Bo3", "BO3", "bo3o3", "Bo3o3", "BO3O3", "Best of 3", "best of 3", "Best Of 3", "BEST OF 3", "best of three", "Best of Three", "Best of three", "Best Of Three", "BEST OF THREE", "Best of 3 of 3", "best of 3 of 3", "Best Of 3 Of 3", "BEST OF 3 OF 3", "best of three of three", "Best of Three of Three", "Best of three of three", "Best Of Three Of Three", "BEST OF THREE OF THREE" };
	std::vector<std::string> optionTwoStrings{ "2", "Two", "TWO", "two", "bo5", "Bo5", "BO5", "bo3o5", "Bo3o5", "BO3O5", "Best of 5", "best of 5", "Best Of 5", "BEST OF 5", "best of five", "Best of Five", "Best of five", "Best Of Five", "BEST OF FIVE", "Best of 3 of 5", "best of 3 of 5", "Best Of 3 Of 5", "BEST OF 3 OF 5", "best of three of five", "Best of Three of Five", "Best of three of five", "Best Of Three Of Five", "BEST OF THREE OF FIVE" };
	std::vector<std::string> optionThreeStrings{ "3", "Three", "THREE", "three", "e", "E", "end", "End", "END", "endless", "Endless", "ENDLESS", "endlessly", "Endlessly", "ENDLESSLY" };

    if (SortingFunctions::inArray(input, optionOneStrings)) {
        GameState::SetGameType(GameType::bo3o3);
    }
    else if (SortingFunctions::inArray(input, optionTwoStrings)) {
        GameState::SetGameType(GameType::bo3o5);
    }
    else if (SortingFunctions::inArray(input, optionThreeStrings)) {
        GameState::SetGameType(GameType::endless);
    }
    else {
        system("CLS");
        std::cout << "Invalid request. What sort of game would you like to play?\n" << std::endl;
        std::cout << "[1] Best of Three Games of Three Sets" << std::endl;
        std::cout << "[2] Best of Three Games of Five Sets" << std::endl;
        std::cout << "[3] Endless\n" << std::endl;

        return -1;
    }
    return 1;
}

void GameModeSelectionScene::DisplayGameModeSelectionScene() {
	std::string input;

	std::cout << "What sort of game would you like to play?\n" << std::endl;
	std::cout << "[1] Best of Three Games of Three Sets" << std::endl;
	std::cout << "[2] Best of Three Games of Five Sets" << std::endl;
	std::cout << "[3] Endless\n" << std::endl;

    int i = -1;
    while (i == -1)
    {
        std::cin >> input;
        i = RequestInput(input);
    }

    return;
}
