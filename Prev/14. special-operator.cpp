// special operators

#include<iostream>
using namespace std;
int main()
{
    int a;
    float f;
    double d;
    char ch;
    char name[20];

    int x = sizeof(a);
    int y = sizeof(f);
    int z = sizeof(d);
    int ze = sizeof(ch);
    int zee = sizeof(name);
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    cout << ze << endl;
    cout << zee << endl;

    return 0;
}