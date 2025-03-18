// basics 

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define doura ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define sesh '\n';

struct Student {
    string name; 
    int age;
    float gpa;
};


int main()
{
    #ifndef TORI
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    Student s1 = {"torikus", 24, 2.89};
    Student s2 = {"shakil babu", 23, 4.00};
    cout << "Name: " << s1.name << " Age: " << s1.age << " gpa " << s1.gpa << sesh;
    cout << "Name: " << s2.name << " Age: " << s2.age << " gpa " << s2.gpa << sesh;

    return 0;
}




// with member function 


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define doura ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define sesh '\n';

struct Student {
    string name; 
    int age;
    float gpa;

    void display() {
        cout << "Name: " << name << ", Age: " << age << ", gpa: " << gpa << sesh;
    }
};


int main()
{
    #ifndef TORI
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    Student s1 = {"Alif", 23, 3.50};
    Student s2 = {"Shakil", 24, 2.90};
    s1.display();
    s2.display();


    return 0;
}








// with constructor 



#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define doura ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define sesh '\n';

struct Car {
    string brand;
    int modelYear;

    // constructor 
    Car(string b, int y) {
        brand = b;
        modelYear = y;
    }

    void show() {
        cout << "Brand: " << brand << ", Year: " << modelYear << sesh;
    }
};


int main()
{
    #ifndef TORI
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    Car c1 = {"Toyota", 2022};
    c1.show();


    return 0;
}











// --> Struct with Pointers & Dynamic Allocation


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define doura ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define sesh '\n';

struct Person {
    string name;
    int age;
};


int main()
{
    #ifndef TORI
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    Person* p1 = new Person{"tori", 23};
    cout << "Name: "  <<  p1 -> name << ", Age:" << p1 -> age << sesh;


    return 0;
}





// --> Struct with arrays 


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define doura ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define sesh '\n';

struct Book {
    string title;
    int pages;
};


int main()
{
    #ifndef TORI
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    Book library[2] = {{"C++ basics", 300}, {"Advanced c++", 500}};
    for (int i = 0; i < 2; i++) {
        cout << "Title: " << library[i].title << ", Pages: " << library[i].pages << sesh;
    }

    return 0;
}











