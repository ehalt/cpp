// logical operators

// && logical and
// || logical or
// ! logical not


// vowel / consonant program

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter any letter: ";
    cin >> ch;

    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U'){
        cout << "Vowel" << endl;
    }
    else {
        cout << "Consonent" << endl;
    }


}