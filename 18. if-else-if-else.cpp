// if 
// else if
// else

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter an integer number: ";
    cin >> num;

    if (num > 0){
        cout << "Positive number" << endl;
    }
    else if (num < 0) {
        cout << "Negative number" <<endl;
    }
    else {
        cout << "Zero dude!" << endl;
    }

    return 0;
}