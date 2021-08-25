// declaring multiple function 

#include<iostream>
using namespace std;

void add(int, int);
void sub(int, int);
void mul(int, int);

int main()
{
    // main function block
    add(10, 20);
    add(20, 50);

    sub(30, 20);
    mul(10, 20);
}

void add(int a, int b) {
    int sum = a + b;
    cout << "Addition is: " << sum << endl;
}


void sub(int a, int b) {
    int sum = a - b;
    cout << "Subtraction  is: " << sum << endl;
}

void mul(int a, int b) {
    int sum = a * b;
    cout << "Multiplication is: " << sum << endl;
}