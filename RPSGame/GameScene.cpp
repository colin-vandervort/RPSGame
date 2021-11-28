#include <iostream>
#include "GameScene.h"
#include "Score.h"
#include "GameState.h"
#include "SortingFunctions.h"
#include "Evaluations.h"

bool GameScene::RequestInput(std::string input) {
	std::vector<std::string> optionOneStrings{ "1", "One", "ONE", "one", "r", "R", "rock", "Rock", "ROCK" };
	std::vector<std::string> optionTwoStrings{ "2", "Two", "TWO", "two", "p", "P", "paper", "Paper", "PAPER" };
	std::vector<std::string> optionThreeStrings{ "3", "Three", "THREE", "three", "s", "S", "scissors", "Scissors", "SCISSORS" };

	int i = 0;

	if (SortingFunctions::inArray(input, optionOneStrings)) {
		i = 1;
	}
	else if (SortingFunctions::inArray(input, optionTwoStrings)) {
		i = 2;
	}
	else if (SortingFunctions::inArray(input, optionThreeStrings)) {
		i = 3;
	}
	else {
		system("CLS");
		std::cout << "Invalid sign. What sign would you like to throw?\n" << std::endl;
		std::cout << "[1] Rock" << std::endl;
		std::cout << "[2] Paper" << std::endl;
		std::cout << "[3] Scissors\n" << std::endl;

		std::cin >> input;
		RequestInput(input);
	}

	return Evaluations::EvaluateMoves(i);
}

void GameScene::DisplayGameScene()
{
	std::string input;
	std::string opponent;
	std::string mode;

	int setCount = 0;

	switch (GameState::GetAIType())	{
	case (AIType::random):
		opponent = "random";
		break;
	case (AIType::strategic):
		opponent = "strategic";
		break;
	}

	switch (GameState::GetGameType()) {
	case(GameType::bo3o3):
		mode = "a best of three games of three sets";
		setCount = 2;
		break;
	case(GameType::bo3o5):
		mode = "a best of three games of five sets";
		setCount = 3;
		break;
	case(GameType::endless):
		mode = "an endless";
		break;
	}
	
	if (GameState::GetGameType() == GameType::endless)
	{
		while (true) {
			system("CLS");
			std::cout << "Playing a " << opponent << " in " << mode << " match of Rock Paper Scissors.\n" << std::endl;
			std::cout << "Your game wins: " << Score::GetP1GameWins() << std::endl;
			std::cout << "My game wins: " << Score::GetP2GameWins() << "\n" << std::endl;
			std::cout << "What sign would you like to throw?\n" << std::endl;
			std::cout << "[1] Rock" << std::endl;
			std::cout << "[2] Paper" << std::endl;
			std::cout << "[3] Scissors\n" << std::endl;

			std::cin >> input;

			Score::IncrementWin(RequestInput(input));
		}
	}
	else {
		while (setCount > Score::GetP1SetWins() || setCount > Score::GetP2GameWins()) {
			system("CLS");
			std::cout << "Playing a " << opponent << " in " << mode << " match of Rock Paper Scissors.\n" << std::endl;
			std::cout << "Your game wins: " << Score::GetP1GameWins() << std::endl;
			std::cout << "My game wins: " << Score::GetP2GameWins() << std::endl;
			std::cout << "Your set wins: " << Score::GetP1SetWins() << std::endl;
			std::cout << "My set wins: " << Score::GetP2SetWins() << "\n" << std::endl;
			std::cout << "What sign would you like to throw?\n" << std::endl;
			std::cout << "[1] Rock" << std::endl;
			std::cout << "[2] Paper" << std::endl;
			std::cout << "[3] Scissors\n" << std::endl;

			std::cin >> input;

			Score::IncrementWin(RequestInput(input));
		}
	}
	return;
}
