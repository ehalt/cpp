// Returning a value from a function 

#include<iostream>
using namespace std;

int add(int, int);

int main()
{
    int result = add(15, 23);
    cout << result << endl;
}

int add(int a, int b) {
    int sum = a + b;
    return sum;
}

// #include<iostream>
// using namespace std;
// int main() 
// {
//     int a = 2;
//     int b = 3;
//     if(b = a) {
//         cout << (a ^ b);
//     }
// }

