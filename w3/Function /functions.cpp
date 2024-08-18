// Create a function 

// #include<iostream>
// using namespace std;

// void myFunction() {
//     cout << "hello from myFunction\n";
// }

// int main()
// {
//     myFunction();

//     return 0;
// }


// a function can be called multiple times

// #include<iostream>
// using namespace std;

// void myFunction() {
//     cout << "hello from myFunction\n";
// }

// int main()
// {
//     myFunction();
//     myFunction();
//     myFunction();
//     myFunction();

//     return 0;
// }


// -> separate the declaration and the definition of athe function 

#include<iostream>
using namespace std;

// declaring Function
void myFunction();

int main()
{
    // calling the function 
    myFunction();

    return 0;
}

// function definition
void myFunction() {
    cout << "hello, from myFunction\n";
}
