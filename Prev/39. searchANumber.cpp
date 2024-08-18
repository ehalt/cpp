// searching a number 

#include<iostream>
using namespace std;
int main() 
{
    int num[] = {10, 23, 12, 34, 15, 18, 88};
    int value, position = -1, i;

    cout << "Enter the value you want to search: ";
    cin >> value;

    // loop
    for ( i = 0; i < 7; i++) {
        if (value == num[i]) {
            position = i + 1;
            break;
        }
        if (position == -1) {
            cout << "That number not found dude!" << endl;
        }
        else { 
            cout << "The value is found at " << position << endl ;
        }
    }
}