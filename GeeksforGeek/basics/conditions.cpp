

// if 

// #include<iostream>
// using namespace std;

// int main()
// {
//     int i = 10;
//     if ( i > 15) {
//         cout << "10 is greater than 15";
//     }
//     cout << " i am not in if" << '\n';
//     return 0;
// }


// if else 

// #include<iostream>
// using namespace std;

// int main()
// {
//     int i = 20;
//     if (i < 15) 
//         cout << " i is smaller than 15" << '\n';
//     else 
//         cout << " i is greater than 15" << '\n';
    
//     return 0;
// }

// nested if 

// #include<iostream>
// using namespace std;

// int main()
// {
//     int i = 10;

//     if (i == 10) {
//         if (i < 15) {
//             cout << "i is smaller than 15\n";
//         }

//         if(i < 12) {
//             cout << "i is smaller than 12 too\n";
//         }
//         else {
//             cout << "i is greater than 15\n";
//         }
//     }
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int i = 20;

//     if ( i == 10) {
//         cout << "i is 10\n";
//     }
//     else if (i == 15) {
//         cout << "i is 15";
//     }
//     else if(i == 20) {
//         cout << "i is 20\n";
//     }
//     else {
//         cout << "i is not present\n";
//     }

//     return 0;
// }



// jump statement 

// break 

// #include<iostream>
// using namespace std;

// void findElement(int arr[], int size, int key) {
//     // loop to traverse array and search for key
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == key) {
//             cout << "Elemenet found at position: " << (i + 1) << '\n';
//             break;
//         }
//     }
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int n = 6;
//     int key = 3;

//     // let's call function here
//     findElement(arr, n, key);
//     return 0;
// }



// -> continue 

// #include<iostream>
// using namespace std;

// int main()
// {
//     for(int i = 1; i <= 10; i++) {
//         if (i == 6 || i == 7) {
//             continue;
//         }
//         else {
//             cout << i << " ";
//         }
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;

// int main()
// {
//     int gfg = 0; // local variable for main
//     cout << "before if-else block" << gfg << endl;

//     if (1) {
//         int gfg = 100; // new local variable of if block;
//         cout << "if block" << gfg << endl;
//     }
//     cout << "After if block" <<  gfg << endl;
//     return 0;
// }


// program to print numbers from 1 to 10 using ' goto '

// #include<iostream>
// using namespace std;

// void printNumbers() {
//     int n = 1;
//     label:
//         cout << n << " ";
//         n++;
//         if (n <= 10) {
//             goto label;
//         }
// }

// int main()
// {
//     printNumbers();
//     return 0;
// }


// return statement 

#include<iostream>
using namespace std;

int SUM(int a, int b) {
    int s1 = a + b;
    return s1;
}

void Print(int s2) {
    cout << " The sum is " << s2;
    return;
}

int main()
{
    int num1 = 10;
    int num2 = 10;
    int sum_of = SUM(num1, num2);
    Print(sum_of);
    cout << endl;
    return 0;
}