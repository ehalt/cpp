// pass by reference 

#include<iostream>
using namespace std;

void swapNums(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
}

int main()
{
    int num1 = 10;
    int num2 = 20;
    cout << "before swap" << '\n';
    cout << num1 << ' ' << num2 << '\n';

    // swap by calling 'swapNums' function 
    swapNums(num1, num2);

    cout << "after swap: \n";
    cout << num1 << ' ' <<  num2 <<'\n';

    return 0;
}
