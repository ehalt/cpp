// vowel or consonent usign switch

// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     cout << "enter a in letter: ";
//     cin >> ch;
//     switch(ch) {
//         case 'a':
//             cout << "Vowel" << endl;
//             break;
//         case 'e':
//             cout << "Vowel" << endl;
//             break;
//         case 'i':
//             cout << "Vowel" << endl;
//             break;
//         case 'o':
//             cout << "Vowel" << endl;
//             break;
//         case 'u':
//             cout << "Vowel" << endl;
//             break;
//         default:
//             cout << "Consonant" << endl;
//     }
// }


#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter in letter: ";
    cin >> ch;

    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "Vowel" << endl;
            break;
        default:
            cout << "Consonant" << endl;
    }
}