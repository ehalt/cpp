// break and continue statement

// break

// #include<iostream>
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 100; i++) {
//         if (i == 10) {
//             break;
//         }
//         cout << i << endl;
//     }
// }

// continue

#include<iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 100; i++) {
        if (i == 10) {
            continue;
        }
        cout << i << endl;
    }
}