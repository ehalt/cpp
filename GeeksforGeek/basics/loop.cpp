// #include<iostream>
// using namespace std;

// int main()
// {
//     for (int i = 1; i <= 5; i++) {
//         cout << "hello world!" << endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     for (int i = 0, j = 10, k = 20; (i + j + k) < 100; j++, k--, i += k) {
//         cout << i << ' ' << j << ' ' << k << '\n';
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int i = 99;
//     for (int i = 0; i < 5; i++) {
//         cout << i << '\t';
//     }
//     cout << '\n' << i << '\n';
// }



// #include<iostream>
// using namespace std;

// int main()
// {
//     int i = 99;
//     for (i = 0; i < 5; i++) {
//         cout << i << ' ';
//     }
//     cout << '\n' << i << '\n';
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> v = {1, 2, 3, 4, 5, 6, 7};
//     for (vector<int>::iterator tori = v.begin(); tori != v.end(); tori++) {
//         cout << *tori << '\n';
//     }
//     return 0;
// }



// --> while loop 

// #include<iostream>
// using namespace std;

// int main()
// {
//     // initialization 
//     int i = 1; 
//     // test / condition check
//     while(i < 6) {
//         cout << i << ". hello world" << '\n';
    
//         // update 
//         i++;
//     }
//     return 0;
// }


// reverse loop 

// #include<iostream>
// using namespace std;

// int main()
// {
//     for (int i = 5; i >= 0; i--) {
//         cout << i << ' '; 
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // for loop
//     for (int i = 1; i <= 5; i++) {
//         cout << "For loop: the value of i is: " << i << endl;
//     }

//     // while loop 
//     int j = 1; 
//     while(j <= 5) {
//         cout << "While loop: the value of j is: " << j << endl;
//         j++;
//     }

//     // do while loop
//     int k = 1; 
//     do {
//         cout << "do while loop: the value of k is: " << k << endl;
//         k++;
//     } while(k <= 5);

//     // range based for loop 

//     vector<int> tori = {1, 2, 3, 4, 5};
//     for (int element : tori) {
//         cout << "Ranged-based for loop: The value of element is: " << element << endl;
//     }
//     return 0;
// }




#include<iostream>
using namespace std;

int main()
{
    // for loop
    for (int i = 1; i <= 5; i++) {
        cout << "for loop: " <<  i << endl;
    }

    // while loop 
    int j = 1;
    while(j <= 5) {
        cout << "while loop: " <<  j << endl;
        j++;
    }

    // do while loop 
    int k = 1;
    do {
        cout << "do while loop: " << k << endl;
        k++;
    } while(k <= 5);
    
    return 0;
}