// if statement

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter any integer number: ";
    cin >> num;
    if (num > 0){
        cout << "positive number" << endl;
    }
    if (num < 0) {
        cout << "Negative number" << endl;
    }
    if (num == 0) {
        cout << "it's zero dude!" << endl;
    }
}