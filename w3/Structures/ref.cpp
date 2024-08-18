// creating references 

// string food = "Pizza" // food variable 
// string &meal = food; // reference to food 


#include<iostream>
using namespace std;

int main()
{
    string food = "Pizzaa";
    string &meal = food;

    cout << food << "\n";
    cout << meal << "\n";

    return 0;
}