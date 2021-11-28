#pragma once

class Evaluations {
	static int RandRange(int offset, int range);
	static void DisplayResults(int playerMove, int computerMove, int result);
public:
	static int EvaluateMoves(int playerMove);
};
