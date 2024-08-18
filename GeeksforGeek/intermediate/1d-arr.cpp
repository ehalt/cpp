
// one dimentional / vector array 

#include<iostream>
using namespace std;

int main() 
{
    // declare and initialize an arr
    int numbers[5];
    cout << "Enter 5 numbers:" << endl;
    // let's store inputs 
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }
    cout << "\nThe numbers are: ";
    // using traditional for loop
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}