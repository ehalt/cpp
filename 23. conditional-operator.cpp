// conditional operators

// #include<iostream>
// using namespace std;
// int main()
// {
//     int x = 20;
//     int y = 15;
//     int large = (x > y) ? x : y;
//     cout << large << endl;
// }

// check even or odd 

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter any integer :";
    cin >> num;

    (num % 2 == 0) ? cout << num << " is even" : cout << num << "odd";

    return 0;
}