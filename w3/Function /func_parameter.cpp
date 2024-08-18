// Function parameteres


// parameters and arguments 

/*
    -- -- 
    information can be passed to functions as a parameter. parameters act as variables
    inside the function

    parameters are specific after the function name, inside the parentheses.
    You can add as many parameters as you want, just seperate them with a comma (,)

    syntax:

    void functionName (parameter1, parameter2, parameter3) {
        // executable code here
    }


    when a "parameter" is passed to the function, it is called an argument.
    -- -- 
*/


// #include<iostream>
// using namespace std;

// void myFunc(string firstName) {
//     cout << firstName << " khan\n";
// }

// int main()
// {
//     myFunc("shakil");
//     myFunc("Fahim");
//     myFunc("A. halim");

//     return 0;
// }

/*
    --- 

    in this example:
    [ firstName ] is a parameter and "shakil", "Fahim", "A. halim" are arguments

    ---
*/

#include<iostream>
using namespace std;

int Sum(int a, int b) {
    return a + b;
}

int main() 
{
    cout << Sum(12, 19) << '\n';

    return 0;
}
