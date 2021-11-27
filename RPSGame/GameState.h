#pragma once
#include "GameType.h"
#include "AIType.h"

class GameState {
	GameType gameType;
	AIType aiType;

public:
	GameState(AIType aiT = AIType::random, GameType gT = GameType::endless);

	GameType GetGameType();
	AIType GetAIType();
	void SetGameType(GameType gT);
	void SetAIType(AIType aiT);
};
