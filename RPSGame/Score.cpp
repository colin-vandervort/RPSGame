#include <iostream>
#include "Score.h"
#include "GameState.h"

int Score::p1GameWins = 0;
int Score::p2GameWins = 0;
int Score::p1SetWins = 0;
int Score::p2SetWins = 0;

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

	std::cout << "\nYour game wins: " << p1GameWins << std::endl;
	std::cout << "My game wins: " << p2GameWins << std::endl;
	if (GameState::GetGameType() != GameType::endless) {
		std::cout << "Your set wins: " << p1SetWins << std::endl;
		std::cout << "My set wins: " << p2SetWins << std::endl;
	}
	std::cout << "\nWhat sign would you like to throw next?\n" << std::endl;
	std::cout << "[1] Rock" << std::endl;
	std::cout << "[2] Paper" << std::endl;
	std::cout << "[3] Scissors\n" << std::endl;
}

int Score::GetP1GameWins() { return p1GameWins; }
int Score::GetP2GameWins() { return p2GameWins; }
int Score::GetP1SetWins() { return p1SetWins; }
int Score::GetP2SetWins() { return p2SetWins; }
