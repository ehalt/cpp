	// integer ( whole number ) 
	int age = 26;
	int year = 2025;
	int days = 7;


	// double ( number including decimal )
	double price = 10.99;
	double gpa = 2.5;
	double temperature = 25.23;


	// single character 
	char grade = 'A';
	char initial = 'B';


	// bool 

	bool student = false;
	bool power = true;
	bool forSale = true;




	int studetns = 20;
	studetns = studetns - 1;
	cout << studetns << '\n';
	studetns += 2;
	cout << studetns;

// type cast 

	double a = 12.55;
	cout << (int) a;




// built in functions 

	int x = 25;
	cout << sqrt(x);




	int base = 12;
	int power = 3;
	cout << pow(base, power);



	int a = -12;
	cout << abs(a);



	double a = 12.3;
	cout << ceil(a);


	double x = 12.3;
	cout << floor(x);



// character manipulation functions 

	isalpha(c) : checks if c is an alphabetic character or not
	isdigit(c) : checks if c is a digit 
	islower(c) : checks if c is lower 
	isupper(c) : checks if c is upper 
	tolower(c) : converts c to lowercase
	toupper(c) : converts c to uppercase 





// string manipulation 

	getline(cin, str) : reads a line of text from the input stream 
	str.length() or str.size() : retuns the length of the strings
	strcat(dest, src) : concatenates two c-style strings
	strcmp(str1, str2) : compares two c-style strings 



// utility function

	min(a, b) : returns the smaller of a and b
	max(a, b) : returns the larger of a and b 
	swap(a, b) : swaps the values of a and b 
	sort(begin, end) : sorts a range of elements 




	// conditionals

	int age;
	cin >> age;

	if (age >= 18) {
		cout << "welcome to the show!";
	}
	else {
		cout << "you are not allowed to enter!";
	}




