// Temperature converter

// celsius to fahrenheit converter

#include<iostream>
using namespace std;
int main()
{
    double farn, cels;
    cout << "Enter celsius: ";
    cin >> cels;
    // formula
    farn = 1.8 * cels + 32;
    cout << "Fahrenhiet: " << farn << endl;
}