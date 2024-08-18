#include<iostream>
using std::cout;
using std::cin;

int main()
{
    int firstNumber;
    int secondNumber;

    cout << "Enter a number: ";
    cin >> firstNumber;
    cout << "you entered " << firstNumber << " . enter another number";
    cin >> secondNumber;

    if (firstNumber < secondNumber) {
        cout << "This first number, " << firstNumber << ", is less than the second number, " << secondNumber << '\n';
    }
    if (firstNumber == secondNumber) {
        cout << "The first number, " << firstNumber << ", is equal to the second number, " << secondNumber << '\n';
    }
    if (firstNumber > secondNumber) {
        cout << "The first number, " << firstNumber << ", is greater than the second number, " << secondNumber << '\n';
    }
}