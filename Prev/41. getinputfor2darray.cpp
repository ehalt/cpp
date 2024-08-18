// Getting input for 2D array

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[2] [3];
//     // input 
//     for (int row = 0; row < 2; row++) {
//         for(int col = 0; col < 3; col ++) {
//             cin >> a[row] [col];
//         }
//     }

//     // output
//     for (int row = 0; row < 2; row++) {
//         for (int col = 0; col < 3; col++) {
//             cout << a[row] [col] << " ";
//         }
//     }
// }



#include<iostream>
using namespace std;
int main()
{
    int a[2] [3];
    cout << "Enter the element for the matrix " << endl;
    for (int row = 0; row < 2; row++) {
        for(int col = 0; col < 3; col ++) {
            cout << "a[" << row << "] [" << col << "] : ";
            cin >> a[row] [col];
        }
    }

    // output
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            cout << a[row] [col] << " ";
        }
    }
}