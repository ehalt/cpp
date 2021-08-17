// Arithmetic operator / Types of operator

#include<iostream>
using namespace std;
int main()
{
    // add
    int num1, num2;
    num1 = 10;
    num2 = 3;
    int sum = num1 + num2;
    cout << "Addition is :" << sum <<endl;

    // sub
    int sub = num1 - num2;
    cout << "Subtraction  is : " << sub << endl;

    // mul
    int mul = num1 * num2;
    cout << "Multiplication is : " << mul << endl;

    // Div
    double div = (float) num1 / num2; // type cast
    cout << "Division is : " << div << endl;

    // Rem / mod
    int rem = num1 % num2;
    cout << "Remainder / modulus is : " << rem << endl;
}