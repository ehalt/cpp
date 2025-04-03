#include<bits/stdc++.h>
using namespace std;
#define doura ios::sync_with_stdio(0);cin.tie(0)
#define ll long long
#define sesh '\n';

int multiply(int x, int y);


int main() {

    int result = multiply(5, 4);
    cout << "Result: " << result << sesh;
        
    return 0;
}

int multiply(int x, int y) {
    return x * y;
}




#include<bits/stdc++.h>
using namespace std;
#define doura ios::sync_with_stdio(0);cin.tie(0)
#define ll long long
#define sesh '\n';

void printLine(int length) {
    for (int i = 0; i < length; i++) {
        cout << "_";
    }
    cout << '\n';
}


int main() {

    printLine(20);
    cout << "\nC++ functions\n";
    printLine(20);
        
    return 0;
}










// function overloading 

#include<bits/stdc++.h>
using namespace std;
#define doura ios::sync_with_stdio(0);cin.tie(0)
#define ll long long
#define sesh '\n';


int add(int a, int b) {
    return a + b;
}

// function to add 3 integers 
int add(int a, int b, int c) {
    return a + b + c;
}

// function to add two doubles 
double add(double a, double b) {
    return a + b;
}



int main() {

    cout << "Sum of 2 integers: " << add(5, 10) << endl;
    cout << "Sum of 3 integers: " << add(5, 10, 15) << endl;
    cout << "Sum of 2 doubles: " << add(2.5, 3.5) << endl;
        
    return 0;
}











// functions used in cp 

int gcd(int a, int b) {
  while (b) {
    a %= b;
    swap(a, b);
  }
  return a;
}

int lcm(int a, int b) {
  return (a / gcd(a, b)) * b;
}





// exponent 
long long power(long long base, long long exp, long long mod) {
  long long res = 1;
  base %= mod;
  while (exp > 0) {
    if (exp % 2 == 1) res = (res * base) % mod;
    base = (base * base) % mod;
    exp >>= 1;
  }
  return res;
}




