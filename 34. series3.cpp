
#include<iostream>
using namespace std;
int main()
{
    int sum = 0, n;
    cout << "Enter an integer number: ";
    cin >> n;
    
    for (int i = 1; i <= n; i = i+1) {
        sum = sum + i * i;
    }
    cout << sum << endl;
}