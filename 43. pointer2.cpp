// Add 2 numbers using pointer 

// https://www.youtube.com/watch?v=mBqjoxHymFM&list=PLgH5QX0i9K3q0ZKeXtF--CZ0PdH1sSbYL&index=51&ab_channel=AnisulIslam

#include<iostream>
using namespace std;
int main()
{
    int num1 = 10;
    int num2 = 20;

    int *p1, *p2;

    p1  = &num1;
    p2  = &num2;

    int sum = *p1 + *p2;
    cout << sum << endl;
}