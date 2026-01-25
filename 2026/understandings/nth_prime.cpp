#include<bits/stdc++.h>
using namespace std;
#define doura ios::sync_with_stdio(0);cin.tie(0)
#define ll long long
#define sesh '\n'


bool isPrime(int n) {
	if (n <= 1) return false;
	if (n == 2) return true;
	if (n % 2 == 0) return false;

	for (int i = 3; i * i <= n; i += 2) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {

	int n, nt;
	cin >> n >> nt;
	int cnt = 0;

	for (int i = 2; i <= n; i++) {
		if (isPrime(i)) {
			cnt++;
			if (cnt == nt) {
				cout << i << sesh;
				break;
			}
		}
	}


	return 0;
}











// Let’s build the nth prime finder step by step, so you don’t need to give an upper limit n anymore — just the position of the prime you want.


int main() {
    int nt; // the position of the prime you want
    cin >> nt;

    int cnt = 0;   // how many primes we’ve found
    int num = 1;   // current number we’re checking

    while (cnt < nt) {
        num++;
        if (isPrime(num)) {
            cnt++;
        }
    }

    cout << nt << "th prime is: " << num << '\n';
    return 0;
}

/*

🟩 Why This Works
We keep incrementing num until we’ve found nt primes.
Each time we find a prime, we increase cnt.
When cnt == nt, we stop and print the prime.

*/


// let’s add the upgrade so your program prints all primes up to the nth prime and then clearly shows which one is the nth prime.


#include <bits/stdc++.h>
using namespace std;
#define sesh '\n'

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int nt; // the position of the prime you want
    cin >> nt;

    int cnt = 0;   // how many primes we’ve found
    int num = 1;   // current number we’re checking

    cout << "Primes up to the " << nt << "th prime:" << sesh;

    while (cnt < nt) {
        num++;
        if (isPrime(num)) {
            cnt++;
            cout << num << " "; // print each prime
        }
    }

    cout << sesh << nt << "th prime is: " << num << sesh;
    return 0;
}


