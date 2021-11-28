#include <iostream>
#include "EndScene.h"
#include "Score.h"
#include "GameState.h"

//"DisplayEndScene" simply displays the victory or defeat statistics at the end of match.

void EndScene::DisplayEndScene() {
	std::string endResult;
	std::string aiBehavior;
	std::string gameType;

	if (Score::GetP1SetWins() > Score::GetP2SetWins()) {
		endResult = "won against ";
	}
	else {
		endResult = "lost to ";
	}

	if (GameState::GetAIType() == AIType::random) {
		aiBehavior = "random ";
	}
	else {
		aiBehavior = "strategic ";
	}

	if (GameState::GetGameType() == GameType::bo3o3) {
		gameType = "best of three sets of three games.";
	}
	else {
		gameType = "best of five sets of three games.";
	}

	system("CLS");
	std::cout << "You have " << endResult << "me, a " << aiBehavior << "opponent, in a " << gameType << std::endl;
	std::cout << "You won " << Score::GetP1GameWins() + (2 * Score::GetP1SetWins()) << " games and " << Score::GetP1SetWins() << " sets." << std::endl;
	std::cout << "I won " << Score::GetP2GameWins() + (2 * Score::GetP2SetWins()) << " games and " << Score::GetP2SetWins() << " sets." << std::endl;
	std::cout << "A fine showing! Enter anything to conclude." << std::endl;

	std::string input;
	std::cin >> input;
	return;
}
