// Formatting output

// #include<iostream>
// #include<iomanip> // for precisions
// using namespace std;
// int main()
// {
//     // input
//     int num1, num2;
//     cout << "Enter the first number: ";
//     cin >> num1;
//     cout << "Enter the second number: ";
//     cin >> num2;

//     cout << setprecision(10);
//     cout << noshowpoint; // dosomik number show korbe
//     //Add
//     float sum = num1 + num2;
//     cout << "Addition is :" << sum <<endl;

//     cout << fixed;

//     // sub
//     float sub = num1 - num2;
//     cout << "Subtraction  is : " << sub << endl;

//     cout << showpoint;
//     // mul
//     float mul = num1 * num2;
//     cout << "Multiplication is : " << mul << endl;

//     // Div
//     double div = (float) num1 / num2; // type cast
//     cout << "Division is : " << div << endl;
// }



#include<iostream>
#include<iomanip> // for precisions
using namespace std;
int main()
{
    // input
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout << setprecision(10);
    cout << noshowpoint; // dosomik number show korbe
    //Add
    float sum = num1 + num2;
    cout << setw(20) << "Addition is :" << sum <<endl;

    cout << fixed;

    // sub
    float sub = num1 - num2;
    cout << setw(20) << "Subtraction  is : " << sub << endl;

    cout << showpoint;
    // mul
    float mul = num1 * num2;
    cout << setw(20) << "Multiplication is : " << mul << endl;

    // Div
    double div = (float) num1 / num2; // type cast
    cout << setw(20) << "Division is : " << div << endl;
}