// even or odd number 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter an integer number: ";
//     cin >> num;

//     if (num % 2 == 0) {
//         cout << "Even number " << endl;
//     }
//     else {
//         cout << "Odd number" << endl;
//     }

//     return 0;
// }


// large/ small number 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int num1;
//     cout << "First number: ";
//     cin >> num1;

//     int num2;
//     cout << "Second number: ";
//     cin >> num2;

//     if (num1 > num2 ) {
//         cout << "Large number" << endl;
//     }
//     else {
//         cout << "Small number " << endl;
//     }

//     return 0;

// }


// Pass or fail

// #include<iostream>
// using namespace std;
// int main()
// {
//     int mark;
//     cout << "Enter your mark here: ";
//     cin >> mark;

//     if (mark >= 33) {
//         cout << "Congrats! you've passed!" << endl;
//     }
//     else {
//         cout << "Sorry! dear you can't pass." << endl;
//     }

//     return 0;
// }

// Absolute value

// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter an integer number: ";
//     cin >> num;

//     if (num < 0) {
//         cout << (-num) << endl;
//     }  
//     else {
//         cout << num << endl;
//     }

//     return 0;
// }


// Letter grade 

#include<iostream>
using namespace std;
int main()
{
    int mark;
    cout << "Enter your mark here: ";
    cin >> mark;

    if (mark > 100 | mark < 0) {
        cout << "Invalid mark!" << endl;
    }
    else if (mark >= 80) {
        cout << "A+" << endl;
    }
    else if (mark >= 70) {
        cout << "A" << endl;
    }
    else if (mark >= 60) {
        cout << "A-" << endl;
    }
    else if (mark >= 50) {
        cout << "B" << endl;
    }
    else if (mark >= 40) {
        cout << "C" << endl;
    }
    else if (mark >= 33) {
        cout << "D" << endl;
    }
    else {
        cout << "Fail" << endl;
    }

    return 0;

}