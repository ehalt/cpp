// #include<iostream>
// using std::cout;
// using std::cin;

// #include<string>
// using std::string;

// int main()
// {
//     string name;
//     cout << "who are you?";
//     cin >> name;
//     string greeting = "hello, " + name;
//     cout << '\n';
//     if (name == "Torikus") {
//         greeting += ", I know you man!";
//     }
//     cout << greeting << '\n';
//     return 0;
// }



#include<iostream>
using std::cout;
using std::cin;

#include<string>
using std::string;

int main()
{
    string name;
    cout << "who are you?";
    cin >> name;
    string greeting = "hello, " + name;
    cout << '\n';
    if (name == "Torikus") {
        greeting += ", I know you man!";
    }
    cout << greeting << '\n';

    int l = greeting.length();
    cout << "\"" + greeting + "\" is " << l << " characters long. " << '\n';
    string beginning = greeting.substr(greeting.find(' ') + 1);
    cout << beginning << '\n';

    if (beginning == name) {
        cout << "expected result." << '\n';
    } 

    return 0;
}