// modify the pointer value 

#include<iostream>
using namespace std;

int main()
{
    string food = "pizzaaaa";
    string* ptr = &food;

    cout << food << '\n'; // value of pointer;
    cout << &food << '\n'; // memory address;
    cout << *ptr << '\n'; // acessing memory address of food and output it's value 
    // let's change it
    *ptr = "hamburger";
    cout << *ptr << '\n';
    cout << food << '\n';

    return 0;
}