// 2 + 4 + 6 + 8 ... n;

#include<iostream>
using namespace std;
int main()
{
    int sum = 0, n;
    cout << "Enter an integer number: ";
    cin >> n;
    
    for (int i = 2; i <= n; i++) {
        sum = sum + i;
    }
    cout << sum << endl;
}