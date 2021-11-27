#include "GameState.h"

GameState::GameState(AIType aiT, GameType gT)
{
	aiType = aiT;
	gameType = gT;
}

GameType GameState::GetGameType() { return gameType; };
AIType GameState::GetAIType() { return aiType; };
void GameState::SetGameType(GameType gT) { gameType = gT; };
void GameState::SetAIType(AIType aiT) { aiType = aiT; };
