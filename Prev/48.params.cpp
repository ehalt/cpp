// advantages of parameters 

// #include<iostream>
// using namespace std;


// void square() 
// {
//     int result = 5 * 5;
//     cout << result << endl;
// }

// int main() 
// {
//     square();
// }


#include<iostream>
using namespace std;

void square(int n) 
{
    int result = n * n;
    cout << "Square of : " << n << result << endl;
}

int main() 
{
    square(5);
    square(6);
    square(7);
}