// large or small number among 3 numbers

#include<iostream>
using namespace std;
int main()
{
    int num1, num2, num3;

    cout << "Enter first number: " ;
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter Third number: ";
    cin >> num3;

    if (num1 > num2 && num1 > num3) {
        cout << "num1 is greater than num2 and num3 " << endl;
    }
    else if (num2 > num1 && num2 > num3) {
        cout << "num2 is greater than num1 and num3" << endl;
    }
    else {
        cout << "num3 is greater than num1 and num2" << endl;
    }
}