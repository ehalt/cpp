



// extream basics

	int num = 42;
	int* ptr = &num; 

	cout << "value of number: " << num << sesh;
	cout << "Address of number: " << &num << sesh;
	cout << "Value stored in ptr ( address ): " << ptr << sesh;
	cout << "value pointed by ptr: " << *ptr << sesh;	

/*


Explanation:
int* ptr; → declares a pointer to an integer.
ptr = &number; → & gives the address of number.
*ptr → dereferencing, meaning "go to the address stored in ptr and fetch the value there."


Why Do We Need Pointers?
Pointers are powerful because they let us:
Access and modify variables indirectly.
Work with dynamic memory (new / delete).
Pass large data structures efficiently to functions.
Build advanced structures like linked lists, trees, graphs.


*/

#include <iostream>
using namespace std;

int main() {
    int x = 10;
    const int* p = &x;   // pointer to const int

    cout << *p << endl;  // ✅ allowed: reading value

    *p = 99;             // ❌ error: cannot modify through pointer

    return 0;
}







/*

🌱 Why does it give an error?
Because the compiler enforces the const promise:
You told the compiler "p points to a constant integer."
So it protects you from accidentally changing the value through p.
Even though x itself is not declared const, the pointer type says "I will treat it as const."
This is a safety feature: it prevents bugs where you might unintentionally change data that should be read-only.


*/






/*

Roadmap to Pointer Mastery:

Pointer Arithmetic 
Pointers and Arrays
Pointers to Functions
Pointers to Pointers (double pointers)
Dynamic Memory (new / delete)
Pointers with Structures and Classes
Smart Pointers (modern C++)

*/






	// pointer arithmetic

	int arr[3] = {10, 20, 30};
	int* p = arr; // points to the first element 

	cout << *p << sesh;
	cout << *(p + 1) << sesh;
	cout << *(p + 2) << sesh;



// another way

	int arr[3] = {10, 20, 30};
	int* p = arr;

	for (int i = 0; i < 3; i++) {
		cout << *(p + i) << ' ';
	}


// ---- pointers and Arrays ----


	char name[] = "Torikus sadik";
	char* p = name;

	while(*p != '\0') {
		cout << *p << ' ';
		p++;
	}







// --- Function pointer ---


void greet() {
	cout << "Hello everyone!";
}


int main() {

	void (*fp)() = greet;
	fp();

	return 0;
}





// --- Double pointer ( pointer to pointer ) 


int main() {

	int x = 32;
	int* p = &x;
	int** pp = &p;

	cout << **pp << sesh;

	return 0;
}








// -- Dynamic Memory --


int main() {

	int* p = new int;
	*p = 100;
	cout << *p << sesh;
	delete p;

	return 0;
}





