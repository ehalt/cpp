// problem : https://codeforces.com/problemset/problem/80/A 
// it took 48 minuts to solve :) 


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define doura() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define sesh '\n';

bool isPrime(int num) {
	if (num < 2) return false;
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) return false;
	}
	return true;
}

int main() {
	doura();
	
	int primes[50];
	int cnt = 0;
	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= 50; i++) {
		if (isPrime(i)) {
			primes[cnt] = i;
			cnt++;
		}
	}
	int indx = 0;
	for (int i = 0; i < cnt; i++) {
		if (primes[i] == n) {
			indx = i;
			if (primes[indx + 1] == m) {
				cout << "YES\n";
			}
			else {
				cout << "NO\n";
			}
		}
	}

	return 0;
}



// another way to solve it 

#include <bits/stdc++.h>
using namespace std;
int isprime(int n) {
	for (int i = 2; i < sqrt(n) + 1; i++) {
		if (n % i == 0)return 0;
	}
	return 1;
}


int main() {
	int n, m;
	cin >> n >> m;
	while (n++) {
		if (isprime(n))break;
	}
	if (n == m)cout << "YES";
	else cout << "NO";
}






// another way 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[16]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    for(int i=0;i<15;i++){
        if(arr[i]==n){
            if(arr[i+1]!=m) cout<<"NO";
            else cout<<"YES";
        }

    }
}



