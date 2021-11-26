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
    string input;
    std::vector<std::string> optionOneStrings {"1", "One", "ONE", "one", "RANDOMLY", "Randomly", "randomly", "R", "r", "Random", "RANDOM", "random", "Rand", "RAND", "rand"};
    std::vector<std::string> optionTwoStrings {"2", "Two", "TWO", "two", "Strategically", "STRATEGICALLY", "strategically", "S", "s", "Strategic", "STRATEGIC", "strategic", "Str", "STR", "str"};
    std::vector<std::string> optionThreeStrings {"3", "Three", "THREE", "three", "Quit", "QUIT", "quit", "Q", "q", "Esc", "ESC", "esc"};

public:
    void GameModeSelection()
    {
        std::cout << "Hello!" << endl;
        std::cout << "Would you like to play me in Rock Paper Scissors?\n" << endl;
        std::cout << "I can play randomly or strategically.\n" << endl;
        std::cout << "How would you like to procede?\n" << endl;
        std::cout << "[1] Randomly" << endl;
        std::cout << "[2] Strategically" << endl;
        std::cout << "[3] Quit\n" << endl;

        std::cin >> input;

        if(inArray(input, optionOneString)) {
            
        } else if (inArray(input, optionTwoString)){

        } else if (inArray(input, optionThreeString)){

        } else {

        }
    }

    bool inArray(const std::string &value, const std::vector<std::string> &array)
    {
        return std::find(array.begin(), array.end(), value) != array.end()
    }
};







/*RPS Preproduction

Print welcoming screen with three choices

--

"Hello! Would you like to play me in Rock Paper Scissors?"

"I can play randomly or startegically."

"How would you like to procede?"

[1] Randomly
[2] Strategically
[3] Quit

--

Print Game Type

--

"How would you like to play?"

[1] Best of Three of Three
[2] Best of Three of Five
[3] Endlessly

--

"Player: x"
"Computer: o"
"Game: [x] [o] [ ]"
"Set:  [x] [ ] [ ]"

"What sign would you like to throw?"

[1] Rock
[2] Paper
[3] Scissors

--

"Player: 17
"Computer: 13

"What sign would you like to throw?"

[1] Rock
[2] Paper
[3] Scissors

--

Print end screen

--

"You have won with x set wins and x set losses, and x game wins and x game losses"
"The computer has won with x set wins and x set losses, and x game wins and x game losses"

"Would you like to play again?"

[1] Yes
[2] No

--

What do I need?
-Game state sequences
-Tournament progress & score tracking
-RPS comparison
-True random output of 1, 2 or 3
-AI
-Reset */
