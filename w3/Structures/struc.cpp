/*

    C++ Structures 


    - to create a structure ' struct' keyword might help

*/


// create a structure 

// struct {
//     int myNum;  // structure declaration
//     string myString; // member ( int variable )
//     myStructure; // Struct variable
// }


// Access structure members 


// from another resource : 

// #include<iostream>
// using namespace std;

// struct Books {
//     string title;
//     int year;
//     double price;
// };

// int main()
// {
//     struct Books book_1, book_2;

//     book_1.title = "hooked";
//     book_1.year = 2013;
//     book_1.price = 14.99;

//     book_2.title = "The lean startup";
//     book_2.year = 2011;
//     book_2.price = 13.99;

//     cout << "Book title: " << book_1.title << "\n";
//     cout << "Book year: " << book_1.year << "\n";
//     cout << "Book price: " << book_1.price << "\n";
    
//     cout << "\n";
//     cout << "\n";

//     cout << "Book title: " << book_2.title << "\n";
//     cout << "Book year: " << book_2.year << "\n";
//     cout << "Book price: " << book_2.price << "\n";

//     return 0;
// }


// --> structures as function arguments: 

// #include<iostream>
// using namespace std;

// void printBook( struct Books book );

// struct Books {
//     string title;
//     int year;
//     double price;
// };

// int main()
// {
//     struct Books book_1, book_2;

//     book_1.title = "Hooked";
//     book_1.year = 2013;
//     book_1.price = 14.99;

//     book_2.title = "The Lean Startup";
//     book_2.year = 2011;
//     book_2.price = 13.99;

//     printBook(book_1);
//     printBook(book_2);

//     return 0;
// }

// void printBook (struct Books book) {
//     cout << "Book Title: " << book.title << "\n";
//     cout << "Book year: " << book.year << "\n";
//     cout << "Book price: " << book.price << "\n";
//     cout << "\n";
// };




// #include<iostream>
// using namespace std;

// struct Person {
//     string name;
//     int age;
//     string profession;
// } shakil, fahim;

// int main()
// {
//     struct Person shakil, fahim; 

//     shakil.name = "Shakil Babu";
//     shakil.age = 21;
//     shakil.profession = "Software Engineer";

//     fahim.name = "Ahm Fahim Morshed";
//     fahim.age = 22;
//     fahim.profession = "Software Developer";

//     cout << "Person Name: " << shakil.name << "\n";
//     cout << "Person Age: " << shakil.age << "\n";
//     cout << "Person Profession: " << shakil.profession << "\n";
//     cout << "\n";
//     cout << "Person Name: " << fahim.name << "\n";
//     cout << "Person Age: " << fahim.age << "\n";
//     cout << "Person Profession: " << fahim.profession << "\n";

//     return 0;
// }



#include<iostream>
using namespace std;

// creating a function 

void PersonOut (struct Persons person);

struct Persons {
    string name;
    int age;
    string profession;
};

int main()
{
    struct Persons shakil, fahim;

    shakil.name = "Shakil Babu";
    shakil.age = 21;
    shakil.profession = "Software Engineer";

    fahim.name = "Ahm Fahim Morshed";
    fahim.age = 22;
    fahim.profession = "Software Developer";

    PersonOut(shakil);
    PersonOut(fahim);

    return 0;
}

void PersonOut (struct Persons person) {
    cout << "Persons name: " << person.name << "\n";
    cout << "Persons age: " << person.age << "\n";
    cout << "Persons profession: " << person.profession << "\n";
    cout << "\n";
};


