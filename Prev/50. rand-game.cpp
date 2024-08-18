// Guessing game

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    while (1)
    {
        int guessNumber, randomNumber;
        cout << "Enter your guess number between 1 to 5 : ";
        cin >> guessNumber;

        randomNumber = 1 + rand() % 5;
        if (guessNumber == randomNumber)
        {
            cout << "You have won!! " << endl
                 << endl;
        }
        else
        {
            cout << "You have lost the game try again!!" << endl;
            cout << "That Random number was: " << randomNumber << endl;
        }
    }
}