// multidimensional arrays 

// #include<iostream>
// using namespace std;

// int main () 
// {
//     string letters[2][3] = {
//         {"a", "b", "c"},
//         {"d", "e", "f"}
//     };
//     cout << letters[0][2] << endl;

//     return 0;
// }


// loop through multidimensional array 

// #include<iostream>
// using namespace std;

// int main()
// {
//     string letters[2][4] = {
//         {"a", "b", "c" , "d"},
//         {"e", "f", "g", "h"}
//     };

//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 4; j++) {
//             cout << letters[i][j] << '\n';
//         }
//     }
    
//     return 0;
// }



#include<iostream>
using namespace std;

int main() 
{
    string letters[2][2][2] = {
        {
            {"a", "b"},
            {"C", "d"}
        },
        {
            {"e", "f"},
            {"g", "h"}
        }
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << letters[i][j][k] << "\n";
            }
        }
    }

    return 0;
}