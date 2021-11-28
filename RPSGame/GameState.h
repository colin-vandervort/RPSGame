#pragma once
#include "GameType.h"
#include "AIType.h"

class GameState {
	static GameType gameType;
	static AIType aiType;

public:
	static GameType GetGameType();
	static AIType GetAIType();
	static void SetGameType(GameType gT);
	static void SetAIType(AIType aiT);
};
