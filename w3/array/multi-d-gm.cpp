// game example 

#include<iostream>
using namespace std;

int main()
{
    // 1 to indicate there is a ship 

    bool ships[4][4] = {
        {0, 1, 1, 0},
        {0, 0, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 1, 0}
    };

    // keep track of how many hits the player has and how many turns
    // they have played in these variables

    int hits = 0;
    int numberOfTurns = 0;
    
    // allow the player to keep going until thye have hit all four ships

    while (hits < 4) {
        int row, column;
        cout << "selecting coordinates\n";

        // ask the player for a row
        cout << "choose a row number between 0 and 3:>";
        cin >> row;

        // ask the player for a column
        cout << "choose a column nuber between 0 and 3:>";
        cin >> column;

        // check if a ship exists in those coordinates
        if (ships[row][column]) {
            // if the player hits a ship, remove it by setting the value to zero
            ships[row][column] = 0;
            // increase the hit counter
            hits++;

            // tell the player that they missed
            cout << "Miss\n\n";
        }

        // count how many turns the player has taken
        numberOfTurns++;
    }
    cout << "Victory!\n";
    cout << "You won in" << numberOfTurns << "turns";
}