// nested if

#include<iostream>
using namespace std;
int main()
{
    int mark;
    cout << "Enter mark: ";
    cin >> mark;

    if (mark > 32) {
        if (mark >= 80) {
            cout << "A+" << endl;
        }
        else if (mark >= 70) {
            cout << "A" << endl;
        }
        else if (mark >= 60) {
            cout << "A-" << endl;
        }
        else if (mark >= 50) {
            cout << "B" << endl;
        }
        else if (mark >= 40) {
            cout << "C" << endl;
        }
        else if (mark >= 33) {
            cout << "D" << endl;
        }
    }
    else {
        cout << "Fail" << endl;
    }

    return 0;

}