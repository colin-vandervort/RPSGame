#include <cstdlib>
#include "StrategyBrain.h"

//"CalculateBestMove" is the 'strategic' logic for the AI, and tries to recognize and weight towards player patterns as a game progresses.
//"UpdatePlayData" just handles storage of data necessary for logic to function.

int StrategyBrain::numMoves = 0;
int StrategyBrain::theirPrevMove = 0; //Currently unused, could be used to further extend logic.
int StrategyBrain::myPrevMove = 0;

int StrategyBrain::playSafeLikelihood = 1;
int StrategyBrain::counterLikelihood = 1;
int StrategyBrain::intuitLikelihood = 1;

void StrategyBrain::UpdatePlayData(int bestMove, int theirMove, int myMove) {
	numMoves++;
	theirPrevMove = theirMove;
	myPrevMove = myMove;

	switch (bestMove) {
	case 1:
		playSafeLikelihood++;
		break;
	case 2:
		counterLikelihood++;
		break;
	case 3:
		intuitLikelihood++;
		break;
	}
}

int StrategyBrain::CalculateBestMove(int playerMove) {
	int computerMove = 0;
	int computerStrategy = 0;
	if (playSafeLikelihood == counterLikelihood == intuitLikelihood) {
		computerMove = 1 + (std::rand() % 3);
	}
	else {
		int tempMove = 1 + std::rand() % (playSafeLikelihood + counterLikelihood + intuitLikelihood);
		if (tempMove > playSafeLikelihood + counterLikelihood) {
			//We should repeat our move
			computerMove = myPrevMove;
		}
		else if (tempMove > playSafeLikelihood) {
			//We should counter the counter to what we just played
			if (myPrevMove == 1) {
				computerMove = 3;
			}
			else {
				computerMove = myPrevMove - 1;
			}
		}
		else {
			//We should counter what we just played
			if (myPrevMove == 3) {
				computerMove = 1;
			}
			else {
				computerMove = myPrevMove + 1;
			}
		}
	}

	if (playerMove == myPrevMove) {
		playSafeLikelihood++;
	}
	else if ((playerMove == 3 && myPrevMove == 1) || playerMove == myPrevMove - 1) {
		intuitLikelihood++;
	}
	else {
		counterLikelihood++;
	}

	UpdatePlayData(-1, playerMove, computerMove);

	if (playerMove == computerMove) { //Tie
		return 0;
	}
	else if ((playerMove == 3 && computerMove == 1) || playerMove == computerMove - 1) { //Computer Wins
		return 2;
	}
	else { //Player Wins
		return 1;
	}
}
