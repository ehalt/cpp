// multiplication table

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter any integer: ";
    cin >> num;

    for (int i = 1; i <= 10; i++ ) {
        cout << num << " x " << i << " =" << (num * i) << endl;
    }
}