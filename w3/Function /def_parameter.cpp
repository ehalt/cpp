// Default parameters 

/*
    ---
    i can use a default parameter value, using the (=) sign 

    a parameter with a default value is often known as an "optional parameter";


    ---
*/


#include<iostream>
using namespace std;

void myFunc(string country = "Bangladesh") { // country is default parameter nad "Bangladesh" is default value 
    cout << country << "\n";
}

int main()
{
    myFunc("America");
    myFunc(); // without argument

    return 0;
}