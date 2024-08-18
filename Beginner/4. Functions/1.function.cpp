// to use a function, you call it 
// before you can do that, the compiler must know that it is
//     - declare it 
// somewhere in your program you must implement it 
//     - define it 

// This can be naywhre, the linker will link the function to the code that calls it 

        
// #include<iostream>
// using std::cout;

// int add(int x, int y) {
//     return x + y;
// }

// int main() {
//     int total = add(3, 4);
//     cout << "3 + 4 is: " << total << '\n';

//     double another = add(1.2, 3.4);
//     cout << '\n';
//     cout << "1.2 + 3.4 is: " << another;
//     cout << '\n';

//     return 0;
// }



#include<iostream>
using std::cout;

double add(double x, double y) {
    return x + y;
}

int main() {
    int total = add(3, 4);
    cout << "3 + 4 is: " << total << '\n';

    double another = add(1.2, 3.4);
    cout << '\n';
    cout << "1.2 + 3.4 is: " << another;
    cout << '\n';

    return 0;
}