// Introduction to pointer

#include<iostream>
using namespace std;
int main() 
{
    int x = 5;
    int *p;
    p = &x;

    cout << x << endl;
    cout << "Memory Address is: " <<  &x << endl;
    cout << p << endl;
    cout << *p << endl;
}