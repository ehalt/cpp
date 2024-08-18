// dereferencing 

#include<iostream>
using namespace std;

int main()
{
    string food = "pizzaa";
    string* ptr = &food;

    cout << ptr << "\n";
    cout << *ptr << "\n";

    return 0;
}