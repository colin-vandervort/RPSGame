#include "AISelectionScene.h"

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



//---------------------------------------------//

int main()
{
    AISelectionScene aISelectionScene;
    if (aISelectionScene.DisplayAISelectionScene())
    {
        
    }
}







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
