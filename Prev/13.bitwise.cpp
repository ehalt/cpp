// ---- Bitwise operator ----

// & bitwise and
// | bitwise or
// ^ bitwise exor
// >> Bitwise shift right
// << Bitwise  shift left
// ~ bitwise not

// #include<iostream>
// using namespace std;
// int main() 
// {
//     int a = 32;
//     int b = 12;
//     int c;
//     c = a & b;
//     cout << c << endl;

//     c = a | b;
//     cout << c << endl;

//     c = a ^ b;
//     cout << c << endl;

//     return 0;
// }



#include<iostream>
using namespace std;
int main() 
{
    int a = 32;
    int b = 12;
    int c;

    c = a << 3; // left shift 
    cout << c << endl;
    c = a >> 3; // right shift 
    cout << c << endl;

    return 0;
}