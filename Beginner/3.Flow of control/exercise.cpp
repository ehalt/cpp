// write a guess my number game 

#include<iostream>
using std::cout;
using std::cin;

int main()
{
    int answer = 3;
    int guess;
    bool notguessed = true;
    while (notguessed)
    {
        cout << "Guess my number: ";
        cin >> guess;
        
        if (guess == answer) {
            cout << "Yeah! you got it bro" << "\n";
            notguessed = false;
        }
        if (guess < answer) {
            cout << "your guess is too low" << '\n';
        }
        if (guess > answer) {
            cout << "your guess is too high" << '\n';
        }
    }

    return 0;
}