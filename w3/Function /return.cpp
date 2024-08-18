// return values 


// #include<iostream>
// using namespace std;

// int myFunc(int x) {
//     return 5 + x;
// }

// int main()
// {
//     cout << myFunc(3) << '\n';

//     return 0;
// }



// return with two parameter 

// #include<iostream>
// using namespace std;

// int myFunc(int x, int y) {
//     return x + y;
// }

// int main()
// {
//     cout << myFunc(5, 9) << '\n';

//     return 0;
// }


// -> i can store the result in a variable 

#include<iostream>
using namespace std;

int myFunc(int x, int y) {
    return x + y;
}

int main()
{
    int result = myFunc(5, 11);
    cout << result << '\n';

    return 0;
}
