// Intro to function 

#include<iostream>
using namespace std;

void add(int a, int b) {
    int sum = a + b;
    cout << "sum : " << sum << endl;
}

int main()
{
    add(10, 20);
    add(40, 20);
}