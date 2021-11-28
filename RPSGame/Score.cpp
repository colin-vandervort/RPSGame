#include "Score.h"
#include "GameState.h"

void Score::IncrementWin(bool playerOne) {
	if (GameState::GetGameType() == GameType::endless) {
		if (playerOne) {
			p1GameWins++;
		}
		else {
			p2GameWins++;
		}
	}
	else {
		if (playerOne) {
			if (p1GameWins > 0) {
				p1GameWins = 0;
				p1SetWins++;
			}
			else {
				p1GameWins++;
			}
		}
		else {
			if (p2GameWins > 0) {
				p2GameWins = 0;
				p2SetWins++;
			}
			else {
				p2GameWins++;
			}
		}
	}
}

int Score::GetP1GameWins() { return p1GameWins; }
int Score::GetP2GameWins() { return p2GameWins; }
int Score::GetP1SetWins() { return p1SetWins; }
int Score::GetP2SetWins() { return p2SetWins; }
