// structure practicing 

// #include<iostream>
// using namespace std;

// struct Books {
//     string title;
//     int pages;
//     string author;
// } book1, book2;

// int main()
// {
//     struct Books book1, book2;

//     book1.title = "ovimanini";
//     book1.pages = 250;
//     book1.author = "Mouri Morium";

//     book2.title = "tomar name sondha name";
//     book2.pages = 200;
//     book2.author = "Sadat hossain";

//     cout << "name of book: " << book1.title << '\n';
//     cout << "total pages: " << book1.pages << '\n';
//     cout << "author of this book: " << book1.author << '\n';
//     cout << '\n';
//     cout << "name of book: " << book2.title << '\n';
//     cout << "total pages: " << book2.pages << '\n';
//     cout << "author of this book: " << book2.author << '\n';

//     return 0;
// }


// using function 

#include<iostream>
using namespace std;

void printBook (struct Books book);

struct Books {
    string title;
    int pages;
    string author;
};

int main()
{
    struct Books book1, book2; 

    book1.title = "ovimanini";
    book1.pages = 250;
    book1.author = "Mouri Morium";

    book2.title = "tomar name sondha name";
    book2.pages = 200;
    book2.author = "Sadat hossain";

    printBook(book1);
    printBook(book2);

    return 0;
}

void printBook(struct Books book) {
    cout << "name of this book: " << book.title << '\n';
    cout << "total pages: " << book.pages << '\n';
    cout << "writer of this book: " << book.author << '\n';
    cout << '\n';
}


