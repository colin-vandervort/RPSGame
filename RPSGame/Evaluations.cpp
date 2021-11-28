#include <iostream>
#include <cstdlib>
#include "Evaluations.h"
#include "GameState.h"
#include "Score.h"
#include "StrategyBrain.h"

//"EvaluateMoves" receives the player's move, and depending on the AI behavior, evaluates a proper computer move to match it.

int Evaluations::EvaluateMoves(int playerMove) {
	if (GameState::GetAIType() == AIType::random) {
		int computerMove = RandRange(1, 3);
		if (computerMove == playerMove) { //Tie
			DisplayResults(playerMove, computerMove, 0);
			return 0;
		}
		else if (computerMove + 1 == playerMove || (computerMove == 3 && playerMove == 1)) { //Player Wins
			DisplayResults(playerMove, computerMove, 1);
			return 1;
		}
		else { //Computer Wins
			DisplayResults(playerMove, computerMove, 2);
			return 2;
		}
	}
	else {
		int computerMove = 0;
		int result = StrategyBrain::CalculateBestMove(playerMove);
		if (result == 0) {
			computerMove = playerMove;
		}
		else if (result == 1) {
			if (playerMove == 1) {
				computerMove = 3;
			}
			else {
				computerMove = playerMove - 1;
			}
		}
		else {
			if (playerMove == 3) {
				computerMove = 1;
			}
			else {
				computerMove = playerMove + 1;
			}

		}
		DisplayResults(playerMove, computerMove, result);
		return result;
	}
}

int Evaluations::RandRange(int offset, int range) {
	return offset + (std::rand() % range);
}

void Evaluations::DisplayResults(int playerMove, int computerMove, int result) {
	std::string pMString;
	std::string cMString;
	std::string resultString;

	switch (playerMove) {
	case 1:
		pMString = "Rock.";
		break;
	case 2:
		pMString = "Paper.";
		break;
	case 3:
		pMString = "Scissors.";
		break;
	}

	switch (computerMove) {
	case 1:
		cMString = "Rock.";
		break;
	case 2:
		cMString = "Paper.";
		break;
	case 3:
		cMString = "Scissors.";
		break;
	}

	switch (result) {
	case 1:
		resultString = "You have won this round.";
		break;
	case 2:
		resultString = "I have won this round.";
		break;
	case 0:
		resultString = "We have tied this round.";
		break;
	}
	
	system("CLS");
	std::cout << "You have chosen " << pMString << " I have chosen " << cMString << std::endl;
	std::cout << resultString << std::endl;
}
