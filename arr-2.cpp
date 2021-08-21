// Getting input in array 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int marks[5];

//     cin >> marks[0];
//     cin >> marks[1];
//     cin >> marks[2];
//     cin >> marks[3];
//     cin >> marks[4];

//     cout << "Entered elements are: ";
//     for (int i = 0; i <= 4; i++) {
//         cout << marks[i] << " ";
//     }
// }

// get input using for loop

#include<iostream>
using namespace std;
int main() 
{   
    int marks[5];
    // in loop
    for (int i = 0; i <= 4; i++) {
        cin >> marks[i];
    }
    cout << "Entered marks are: ";
    // out loop
    for (int i = 0; i <=4; i++) {
        cout << marks[i] << " ";
    }
}