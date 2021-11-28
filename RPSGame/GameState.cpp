#include "GameState.h"

GameType GameState::gameType = GameType::endless;
AIType GameState::aiType = AIType::random;

GameType GameState::GetGameType() { return gameType; };
AIType GameState::GetAIType() { return aiType; };
void GameState::SetGameType(GameType gT) { gameType = gT; };
void GameState::SetAIType(AIType aiT) { aiType = aiT; };
