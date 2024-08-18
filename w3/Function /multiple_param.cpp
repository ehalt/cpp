// multiple parameters 


#include<iostream>
using namespace std;

void myFunc(string fname, int age) {
    cout << "first name is: " << fname << " age is " << age << '\n';
}

int main()
{
    myFunc("shakil", 21);
    myFunc("fahim", 22);
    myFunc("torikus", 24);

    return 0;
}