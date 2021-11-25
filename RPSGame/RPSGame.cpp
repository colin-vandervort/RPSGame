#include <iostream>

int main()
{
    GameModeScene gameModeScene;
    gameModeScene.GameModeSelection();
}

//---------------------------------------------//

class Player {
    //enum hand {none, rock, paper, scissors}
    //enum playstyle {user, random, strategic}
};

class GameType
{
    //enum mode {bo3o3, bo3o5, endless}
};

class GameState
{
    //enum scene {introQ1, introQ2, gameQ, endScreen}
};

class Score
{
    int p1GameWins, p2GameWins, p1SetWins, p2SetWins;

public:
    void incrementWin(bool playerOneWin) {
        if (playerOneWin) {

        }
        else {

        }
    }

    int getP1GameWins() { return p1GameWins; }
    int getP2GameWins() { return p2GameWins; }
    int getP1SetWins() { return p1SetWins; }
    int getP2SetWins() { return p2SetWins; }
};

//---------------------------------------------//

class GameModeScene {
public:
    void GameModeSelection()
    {
        std::cout << "Hello!\nWould you like to play me in Rock Paper Scissors?\n\nI can play randomly or strategically.\n\nHow would you like to procede?\n\n[1] Randomly\n[2] Strategically\n[3] Quit\n\n";
    }
};
