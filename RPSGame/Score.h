#pragma once

class Score {
	static int p1GameWins;
	static int p2GameWins;
	static int p1SetWins;
	static int p2SetWins;

	Score(int i1 = 0, int j1 = 0, int i2 = 0, int j2 = 0);

public:
	static void IncrementWin(bool playerOne);
	static int GetP1GameWins();
	static int GetP2GameWins();
	static int GetP1SetWins();
	static int GetP2SetWins();
};
