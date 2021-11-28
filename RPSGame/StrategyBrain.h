#pragma once

class StrategyBrain
{
	static int numMoves; //total number of moves done
	static int theirPrevMove; //the previous move the player made
	static int myPrevMove; //the previous move the computer made

	static int playSafeLikelihood; //the likelihood the player will pick to tie what we just played
	static int counterLikelihood; //the likelihood the player will counter what we just played
	static int intuitLikelihood; //the likelihood the player will counter the counter of what we just played

	static void UpdatePlayData(int bestMove, int theirMove, int myMove);

public:
	static int CalculateBestMove(int playerMove);
};
